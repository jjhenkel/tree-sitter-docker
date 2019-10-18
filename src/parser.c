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
#define STATE_COUNT 601
#define SYMBOL_COUNT 182
#define ALIAS_COUNT 0
#define TOKEN_COUNT 97
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
  aux_sym__from_layer_token1 = 30,
  aux_sym_from_layer_token1 = 31,
  aux_sym_from_layer_token2 = 32,
  aux_sym_from_layer_token3 = 33,
  aux_sym_from_layer_token4 = 34,
  aux_sym_from_layer_token5 = 35,
  aux_sym_from_layer_token6 = 36,
  aux_sym_from_layer_token7 = 37,
  aux_sym_from_layer_token8 = 38,
  aux_sym_from_layer_token9 = 39,
  aux_sym_from_layer_token10 = 40,
  aux_sym_from_layer_token11 = 41,
  aux_sym_from_layer_token12 = 42,
  aux_sym_from_layer_token13 = 43,
  aux_sym_from_layer_token14 = 44,
  aux_sym_from_layer_token15 = 45,
  aux_sym_from_layer_token16 = 46,
  anon_sym_EQ2 = 47,
  sym_env_key = 48,
  sym_env_value = 49,
  anon_sym_DASH = 50,
  aux_sym__port_part_token1 = 51,
  anon_sym_SLASH = 52,
  aux_sym_port_protocol_token1 = 53,
  aux_sym_port_protocol_token2 = 54,
  aux_sym__repository_start_token1 = 55,
  sym_hc_none = 56,
  anon_sym_DASH_DASHinterval = 57,
  aux_sym_hc_interval_token1 = 58,
  anon_sym_DASH_DASHtimeout = 59,
  anon_sym_DASH_DASHstart_DASHperiod = 60,
  anon_sym_DASH_DASHretries = 61,
  aux_sym__hc_command_token1 = 62,
  aux_sym_label_pair_token1 = 63,
  sym_label_key = 64,
  aux_sym_label_value_token1 = 65,
  aux_sym_label_value_token2 = 66,
  aux_sym_label_value_token3 = 67,
  anon_sym_SQUOTE = 68,
  aux_sym_label_value_token4 = 69,
  sym_signal_num = 70,
  aux_sym_signal_name_token1 = 71,
  aux_sym_signal_name_token2 = 72,
  aux_sym_user_name_token1 = 73,
  aux_sym_user_id_token1 = 74,
  aux_sym_path_token1 = 75,
  aux_sym_path_token2 = 76,
  aux_sym_path_token3 = 77,
  aux_sym_path_token4 = 78,
  aux_sym__anything_token1 = 79,
  anon_sym_LBRACE = 80,
  anon_sym_RBRACE = 81,
  anon_sym_COLON_DASH = 82,
  aux_sym_variable_default_value_token1 = 83,
  anon_sym_COLON_PLUS = 84,
  sym__docker_variable = 85,
  sym_template_expr_curly_braces = 86,
  sym_template_expr_percent_signs = 87,
  aux_sym_template_expr_less_than_equals_token1 = 88,
  aux_sym_template_expr_less_than_equals_token2 = 89,
  aux_sym_template_expr_less_than_equals_token3 = 90,
  sym__space = 91,
  sym__blank_line = 92,
  sym__space_no_newline = 93,
  sym_comment = 94,
  sym_line_continuation = 95,
  sym_json_array = 96,
  sym_dockerfile = 97,
  sym__directive = 98,
  sym_add = 99,
  sym_arg = 100,
  sym_cmd = 101,
  sym_copy = 102,
  sym_entrypoint = 103,
  sym_env = 104,
  sym_expose = 105,
  sym_from = 106,
  sym_healthcheck = 107,
  sym_label = 108,
  sym_maintainer = 109,
  sym_onbuild = 110,
  sym_run = 111,
  sym_shell = 112,
  sym_stopsignal = 113,
  sym_user = 114,
  sym_volume = 115,
  sym_workdir = 116,
  sym__chown = 117,
  sym__from_layer = 118,
  sym_from_layer = 119,
  sym_chown = 120,
  sym__env_pairs = 121,
  sym_env_pair_eq = 122,
  sym_env_pair = 123,
  sym__port_spec = 124,
  sym_mapped_port = 125,
  sym_mapped_no_lhs = 126,
  sym__port = 127,
  sym_port = 128,
  sym_port_range = 129,
  sym__port_part = 130,
  sym_port_protocol = 131,
  sym_platform = 132,
  sym_repository = 133,
  sym__repository_start = 134,
  sym__repository_continued = 135,
  sym_image = 136,
  sym_tag = 137,
  sym_digest = 138,
  sym_as_name = 139,
  sym__hc_interval = 140,
  sym_hc_interval = 141,
  sym__hc_timeout = 142,
  sym_hc_timeout = 143,
  sym__hc_start_period = 144,
  sym_hc_start_period = 145,
  sym__hc_retries = 146,
  sym_hc_retries = 147,
  sym__hc_options = 148,
  sym__hc_command = 149,
  sym_hc_command = 150,
  aux_sym__labels = 151,
  sym_label_pair = 152,
  sym_label_value = 153,
  sym_signal_name = 154,
  sym_user_name = 155,
  sym_user_group = 156,
  sym_user_id = 157,
  sym_user_group_id = 158,
  sym_path = 159,
  aux_sym__paths = 160,
  aux_sym__anything = 161,
  sym_docker_variable = 162,
  sym_variable_default_value = 163,
  sym_variable_this_or_null = 164,
  sym_template_expr_less_than_equals = 165,
  sym__anything_or_json_array = 166,
  aux_sym_dockerfile_repeat1 = 167,
  aux_sym_copy_repeat1 = 168,
  aux_sym_expose_repeat1 = 169,
  aux_sym_healthcheck_repeat1 = 170,
  aux_sym_from_layer_repeat1 = 171,
  aux_sym_from_layer_repeat2 = 172,
  aux_sym_from_layer_repeat3 = 173,
  aux_sym_from_layer_repeat4 = 174,
  aux_sym__env_pairs_repeat1 = 175,
  aux_sym_repository_repeat1 = 176,
  aux_sym_label_value_repeat1 = 177,
  aux_sym_label_value_repeat2 = 178,
  aux_sym_path_repeat1 = 179,
  aux_sym_path_repeat2 = 180,
  aux_sym_template_expr_less_than_equals_repeat1 = 181,
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
  [aux_sym__from_layer_token1] = "_from_layer_token1",
  [aux_sym_from_layer_token1] = "from_layer_token1",
  [aux_sym_from_layer_token2] = "from_layer_token2",
  [aux_sym_from_layer_token3] = "from_layer_token3",
  [aux_sym_from_layer_token4] = "from_layer_token4",
  [aux_sym_from_layer_token5] = "from_layer_token5",
  [aux_sym_from_layer_token6] = "from_layer_token6",
  [aux_sym_from_layer_token7] = "from_layer_token7",
  [aux_sym_from_layer_token8] = "from_layer_token8",
  [aux_sym_from_layer_token9] = "from_layer_token9",
  [aux_sym_from_layer_token10] = "from_layer_token10",
  [aux_sym_from_layer_token11] = "from_layer_token11",
  [aux_sym_from_layer_token12] = "from_layer_token12",
  [aux_sym_from_layer_token13] = "from_layer_token13",
  [aux_sym_from_layer_token14] = "from_layer_token14",
  [aux_sym_from_layer_token15] = "from_layer_token15",
  [aux_sym_from_layer_token16] = "from_layer_token16",
  [anon_sym_EQ2] = "=",
  [sym_env_key] = "env_key",
  [sym_env_value] = "env_value",
  [anon_sym_DASH] = "-",
  [aux_sym__port_part_token1] = "_port_part_token1",
  [anon_sym_SLASH] = "/",
  [aux_sym_port_protocol_token1] = "port_protocol_token1",
  [aux_sym_port_protocol_token2] = "port_protocol_token2",
  [aux_sym__repository_start_token1] = "_repository_start_token1",
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
  [anon_sym_SQUOTE] = "'",
  [aux_sym_label_value_token4] = "label_value_token4",
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
  [sym__from_layer] = "_from_layer",
  [sym_from_layer] = "from_layer",
  [sym_chown] = "chown",
  [sym__env_pairs] = "_env_pairs",
  [sym_env_pair_eq] = "env_pair",
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
  [aux_sym_copy_repeat1] = "copy_repeat1",
  [aux_sym_expose_repeat1] = "expose_repeat1",
  [aux_sym_healthcheck_repeat1] = "healthcheck_repeat1",
  [aux_sym_from_layer_repeat1] = "from_layer_repeat1",
  [aux_sym_from_layer_repeat2] = "from_layer_repeat2",
  [aux_sym_from_layer_repeat3] = "from_layer_repeat3",
  [aux_sym_from_layer_repeat4] = "from_layer_repeat4",
  [aux_sym__env_pairs_repeat1] = "_env_pairs_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym_label_value_repeat1] = "label_value_repeat1",
  [aux_sym_label_value_repeat2] = "label_value_repeat2",
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
  [aux_sym__from_layer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_token16] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ2] = {
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
  [aux_sym__repository_start_token1] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_value_token4] = {
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
  [sym__from_layer] = {
    .visible = false,
    .named = true,
  },
  [sym_from_layer] = {
    .visible = true,
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
  [sym_env_pair_eq] = {
    .visible = true,
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
  [aux_sym_copy_repeat1] = {
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
  [aux_sym_from_layer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_layer_repeat4] = {
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
  [aux_sym_label_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_value_repeat2] = {
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
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '#') ADVANCE(957);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '\'') ADVANCE(943);
      if (lookahead == '-') ADVANCE(819);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '=') ADVANCE(802);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(328);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(327);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(324);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '{') ADVANCE(1232);
      if (lookahead == '}') ADVANCE(1233);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1255);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(955);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0) ADVANCE(1107);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(957);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1036);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1070);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1072);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1091);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1042);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1027);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1028);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1073);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1102);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1052);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1095);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1079);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1081);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1255);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1107);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(957);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1036);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1070);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1072);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1091);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1042);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1027);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1028);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1073);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1102);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1052);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1095);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1079);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1081);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(956);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1107);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '-') ADVANCE(818);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '=') ADVANCE(262);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(205);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(149);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(190);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(845);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(879);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(900);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(851);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(836);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(837);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(882);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(911);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(861);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(904);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(888);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(890);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '=') ADVANCE(802);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(205);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(149);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(190);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(205);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(149);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(190);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1126);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1130);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1124);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1125);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1136);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1128);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1135);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1132);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1133);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (lookahead != 0) ADVANCE(1123);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(602);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(636);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(657);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(608);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(593);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(594);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(668);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(618);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(661);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(645);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(647);
      if (lookahead == '\\') ADVANCE(573);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(602);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(636);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(657);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(608);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(593);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(594);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(668);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(618);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(661);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(645);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(647);
      if (lookahead == '\\') ADVANCE(573);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(602);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(636);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(657);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(608);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(593);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(594);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(668);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(618);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(661);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(645);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(647);
      if (lookahead == '\\') ADVANCE(573);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(367);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(571);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(555);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(506);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(492);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(537);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(516);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(559);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(543);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(471);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(364);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(571);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(555);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(506);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(492);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(537);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(516);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(559);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(543);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(471);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(364);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(571);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(555);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(506);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(492);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(537);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(516);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(559);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(543);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(471);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(365);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(454);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(465);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(458);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(442);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(362);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '@') ADVANCE(287);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(454);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(465);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(458);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(442);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(362);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(454);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(405);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(465);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(458);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(442);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(363);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '@') ADVANCE(287);
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
      if (lookahead == '\\') ADVANCE(674);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '@') ADVANCE(287);
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
      if (lookahead == '\\') ADVANCE(674);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '\n') ADVANCE(1254);
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
      if (lookahead == '\\') ADVANCE(674);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(255);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(86);
      if (lookahead == '-') ADVANCE(818);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '=') ADVANCE(802);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(149);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(190);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(192);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '}') ADVANCE(780);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(1254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(222);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(223);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(1137);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1137);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == ' ') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(811);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\\') ADVANCE(936);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(938);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(224);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(940);
      if (lookahead != 0) ADVANCE(940);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1257);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(573);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(592);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(571);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '\\') ADVANCE(471);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(490);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(389);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '\\') ADVANCE(674);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(693);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(1249);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '?') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(1247);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1249);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1249);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(945);
      if (lookahead == '\'') ADVANCE(943);
      if (lookahead == '\\') ADVANCE(947);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(945);
      if (lookahead != 0) ADVANCE(945);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(1246);
      if (lookahead == '\\') ADVANCE(1244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1246);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1246);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(1243);
      if (lookahead == '\\') ADVANCE(1241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1243);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(1237);
      if (lookahead == '\\') ADVANCE(1235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1237);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '"') ADVANCE(809);
      if (lookahead == '\'') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(805);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(813);
      END_STATE();
    case 51:
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == '"') ADVANCE(1140);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1121);
      END_STATE();
    case 52:
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == '"') ADVANCE(1140);
      if (lookahead == '\\') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1121);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '\'') ADVANCE(943);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0) ADVANCE(938);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(957);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '-') ADVANCE(959);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0) ADVANCE(1107);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(957);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0) ADVANCE(1107);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(955);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(954);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(809);
      if (lookahead == '\'') ADVANCE(813);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '#') ADVANCE(808);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '%') ADVANCE(790);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == '=') ADVANCE(262);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '}') ADVANCE(1233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(950);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '[') ADVANCE(1142);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0) ADVANCE(1123);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(952);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0) ADVANCE(1123);
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(571);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == '\\') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(470);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 73:
      if (lookahead == '#') ADVANCE(694);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == '\\') ADVANCE(674);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 74:
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '-') ADVANCE(339);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(346);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 75:
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(346);
      if (lookahead == 's') ADVANCE(350);
      if (lookahead == '{') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 76:
      if (lookahead == '#') ADVANCE(1240);
      if (lookahead == '\\') ADVANCE(1239);
      if (lookahead == '{') ADVANCE(1231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(1240);
      END_STATE();
    case 77:
      if (lookahead == '#') ADVANCE(359);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '\\') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(359);
      END_STATE();
    case 78:
      if (lookahead == '#') ADVANCE(1137);
      END_STATE();
    case 79:
      if (lookahead == '\'') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '+') ADVANCE(1238);
      if (lookahead == '-') ADVANCE(1234);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == '=') ADVANCE(338);
      END_STATE();
    case 86:
      if (lookahead == '>') ADVANCE(797);
      END_STATE();
    case 87:
      if (lookahead == '>') ADVANCE(797);
      if (lookahead != 0) ADVANCE(1251);
      END_STATE();
    case 88:
      if (lookahead == '>') ADVANCE(797);
      if (lookahead != 0) ADVANCE(1250);
      END_STATE();
    case 89:
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1137);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(829);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(826);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(828);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 123:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 124:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1137);
      END_STATE();
    case 125:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(833);
      if (lookahead == '#') ADVANCE(1268);
      if (lookahead == '=') ADVANCE(834);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1252);
      END_STATE();
    case 126:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(796);
      END_STATE();
    case 127:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(801);
      END_STATE();
    case 128:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(799);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 134:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(217);
      END_STATE();
    case 135:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(152);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 139:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 140:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(289);
      END_STATE();
    case 141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(831);
      END_STATE();
    case 143:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 144:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 145:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 146:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 156:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(951);
      END_STATE();
    case 157:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 158:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 159:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 160:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 161:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 169:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(144);
      END_STATE();
    case 170:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(242);
      END_STATE();
    case 171:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 172:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 173:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 174:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 175:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 176:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 177:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 178:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 179:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 180:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(143);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 181:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(201);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 195:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 196:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 197:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 198:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(823);
      END_STATE();
    case 199:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(822);
      END_STATE();
    case 200:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 201:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 202:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 209:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      END_STATE();
    case 210:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 211:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(228);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 216:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 217:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 218:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 219:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 220:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 221:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(817);
      END_STATE();
    case 222:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(1278);
      END_STATE();
    case 223:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(24);
      END_STATE();
    case 224:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(1278);
      END_STATE();
    case 225:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 226:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 227:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 228:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 229:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 231:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 232:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 238:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(321);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 241:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 242:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 243:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1137);
      END_STATE();
    case 244:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 245:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(953);
      END_STATE();
    case 247:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 248:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 249:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(249);
      END_STATE();
    case 250:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(812);
      END_STATE();
    case 251:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 252:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 253:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 254:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(938);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(935);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(960);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_from_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead == '\\') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__from_layer_token1);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '-') ADVANCE(354);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '2') ADVANCE(341);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '5') ADVANCE(342);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '6') ADVANCE(343);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '=') ADVANCE(283);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(346);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(353);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'h') ADVANCE(348);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(347);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(345);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(360);
      if (lookahead == '%') ADVANCE(792);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '{') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '\\') ADVANCE(358);
      if (lookahead != 0 &&
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
          lookahead != '}') ADVANCE(359);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead != 0 &&
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
          lookahead != '}') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_from_layer_token2);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_from_layer_token3);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(362);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(363);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(364);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(365);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(367);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(373);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(377);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(379);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(383);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(385);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(386);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(388);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(406);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(462);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(453);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
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
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '\\') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(474);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(478);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(480);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(484);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(486);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(487);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(489);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(501);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(507);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(563);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(554);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(794);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
          lookahead != '}') ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(576);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(580);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(582);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(586);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(588);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(589);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(591);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(603);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(609);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(604);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
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
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(656);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\\') ADVANCE(674);
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
    case 675:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(676);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(677);
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
    case 678:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(679);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(681);
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
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(682);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(683);
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
    case 684:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(684);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(687);
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
    case 688:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(688);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(689);
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
          lookahead != '}') ADVANCE(694);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(690);
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
    case 691:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(692);
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
    case 693:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(786);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(693);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1257);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(675);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(677);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(687);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(685);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
    case 716:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(676);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(692);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(683);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
    case 734:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(691);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(681);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(679);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(688);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(690);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(758);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(678);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(689);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(680);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(777);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(775);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(778);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(779);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(781);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(782);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(784);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(785);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      if (lookahead == '%') ADVANCE(787);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      if (lookahead == '%') ADVANCE(789);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      if (lookahead == '%') ADVANCE(791);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      if (lookahead == '%') ADVANCE(793);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      if (lookahead == '=') ADVANCE(795);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_from_layer_token14);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      if (lookahead == '=') ADVANCE(798);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      if (lookahead == '=') ADVANCE(800);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_env_key);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(803);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '"') ADVANCE(815);
      if (lookahead == '\'') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(815);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\n') ADVANCE(1264);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '\'') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(1276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1263);
      if (lookahead != 0) ADVANCE(810);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\n') ADVANCE(1264);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\'') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(1272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1262);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(1259);
      if (lookahead == '\'') ADVANCE(1263);
      if (lookahead == '\\') ADVANCE(1269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(808);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(809);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(1262);
      if (lookahead == '\'') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(1276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(812);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(812);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(813);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(814);
      if (lookahead == '\'') ADVANCE(1262);
      if (lookahead == '\\') ADVANCE(1270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(814);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(815);
      if (lookahead == '\'') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(815);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\'') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(1272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(816);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead != 0) ADVANCE(809);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(967);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
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
      ACCEPT_TOKEN(anon_sym_DASH_DASHretries);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym__hc_command_token1);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '=') ADVANCE(834);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(832);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_label_key);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(842);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(864);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(871);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(865);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(875);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(912);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(854);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(870);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(862);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(846);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(858);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(916);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(918);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(868);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(928);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(901);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(873);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(926);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(927);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(917);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(885);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(844);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(852);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(891);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(850);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(859);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(883);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(877);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(884);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(902);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(933);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(907);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(913);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(924);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(925);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(932);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(874);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(849);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(922);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(847);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(894);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(856);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(908);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(896);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(841);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(910);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(840);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(920);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(872);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(878);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(898);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(895);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(906);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(867);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(914);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(905);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(892);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(893);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(869);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(915);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(889);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(923);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(929);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(931);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(853);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(863);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(855);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(860);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(899);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(919);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(930);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(839);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(886);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(866);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(880);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(921);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(258);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(261);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(274);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(268);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(314);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(277);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(318);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(321);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(311);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(835);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(938);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(1267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(937);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(938);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead == '\\') ADVANCE(941);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(940);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead == '\\') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(940);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(941);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(939);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_label_value_token4);
      if (lookahead == '\\') ADVANCE(946);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(945);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_label_value_token4);
      if (lookahead == '\\') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(945);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_label_value_token4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(945);
      if (lookahead == '\\') ADVANCE(946);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_label_value_token4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(945);
      if (lookahead == '\\') ADVANCE(947);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(944);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(948);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(949);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (lookahead == '+') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(952);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(953);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ':') ADVANCE(954);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(955);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(956);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead == '$') ADVANCE(1109);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1268);
      if (lookahead != 0) ADVANCE(957);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '-') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '-') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '/') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '=') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '=') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'a') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'a') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'a') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'c') ADVANCE(976);
      if (lookahead == 'f') ADVANCE(995);
      if (lookahead == 'i') ADVANCE(985);
      if (lookahead == 'p') ADVANCE(980);
      if (lookahead == 'r') ADVANCE(971);
      if (lookahead == 's') ADVANCE(1005);
      if (lookahead == 't') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'c') ADVANCE(976);
      if (lookahead == 'f') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'd') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'e') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'e') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'e') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'e') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'f') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'h') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'i') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'i') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'l') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'l') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'm') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'm') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'm') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'n') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'n') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'o') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'o') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'o') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'o') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'o') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'p') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'r') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'r') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'r') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'r') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'r') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'r') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 's') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 't') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 't') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 't') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 't') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 't') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 't') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'u') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'v') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'w') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1062);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1037);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1043);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1082);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1038);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1099);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1090);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead != 0) ADVANCE(1268);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead == '"') ADVANCE(1268);
      if (lookahead == '$') ADVANCE(1117);
      if (lookahead != 0) ADVANCE(1110);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '$') ADVANCE(1116);
      if (lookahead == '\\') ADVANCE(1111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1115);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '$') ADVANCE(1116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1115);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '#') ADVANCE(1110);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '\\') ADVANCE(1111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1115);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '#') ADVANCE(1110);
      if (lookahead == '$') ADVANCE(315);
      if (lookahead == '\\') ADVANCE(1111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1115);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '$') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1115);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_path_token4);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead != 0) ADVANCE(1268);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0) ADVANCE(1145);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0) ADVANCE(1145);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1141);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1122);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1122);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1121);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1168);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1187);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1171);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1182);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1164);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1176);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1210);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1172);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1212);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1230);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1214);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1167);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1195);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1216);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1208);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1177);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1205);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1138);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1139);
      if (lookahead == '"') ADVANCE(1122);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1138);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1139);
      if (lookahead == '"') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(25);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1140);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1141);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == ',') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1140);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1145);
      if (lookahead == ',') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(1278);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1143);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1144);
      if (lookahead == '"') ADVANCE(1122);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == ',') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1143);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1144);
      if (lookahead == '"') ADVANCE(1122);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == ',') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1143);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1144);
      if (lookahead == '"') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(1145);
      if (lookahead == ',') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1278);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(320);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1145);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1194);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1145);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1188);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(1145);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1198);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(1145);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1226);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(1145);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1178);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(1145);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1193);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(1145);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1185);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1146);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1148);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1191);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(1145);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1158);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1169);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1199);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1218);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1196);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1156);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1157);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(1145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1220);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(1145);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1147);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(1145);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1206);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(1145);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1170);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(1145);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1175);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1183);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1203);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1207);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1200);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1204);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(1145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1219);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(1145);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1173);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(1145);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1163);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1223);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1227);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1154);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1155);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1162);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1197);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(1145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1174);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(1145);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1152);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(1145);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1180);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1145);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1224);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1145);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1225);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1145);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1150);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1145);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1166);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(1145);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1181);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1145);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1201);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1145);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1222);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1145);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1213);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(1145);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1190);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1145);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1228);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1145);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1221);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1145);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1209);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(1145);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1211);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1192);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1229);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1153);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1159);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(1145);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1161);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(1145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1186);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(1145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1179);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1145);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1184);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1145);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1165);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(1145);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1160);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(1145);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1189);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(1145);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1202);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(1145);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1151);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(1145);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1215);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1230:
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
          lookahead != 'v') ADVANCE(1145);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1217);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1149);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(777);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\\') ADVANCE(1235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1237);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1237);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1237);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym__docker_variable);
      if (lookahead == '\\') ADVANCE(1239);
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
          lookahead != '}') ADVANCE(1240);
      END_STATE();
    case 1240:
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
          lookahead != '}') ADVANCE(1240);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\\') ADVANCE(1241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1243);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1243);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1243);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\\') ADVANCE(1244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1246);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1246);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1246);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\\') ADVANCE(1247);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1249);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1249);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1249);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1255);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1258);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead == '"') ADVANCE(808);
      if (lookahead == '\\') ADVANCE(1271);
      if (lookahead != 0) ADVANCE(1259);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead == '"') ADVANCE(809);
      if (lookahead == '\'') ADVANCE(813);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead == '"') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead == '"') ADVANCE(810);
      if (lookahead == '\'') ADVANCE(814);
      if (lookahead == '\\') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead == '\'') ADVANCE(808);
      if (lookahead == '\\') ADVANCE(1275);
      if (lookahead != 0) ADVANCE(1263);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead == '\'') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(801);
      if (lookahead != 0) ADVANCE(1268);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(799);
      if (lookahead != 0) ADVANCE(1268);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'') ADVANCE(1268);
      if (lookahead != 0) ADVANCE(937);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead != 0) ADVANCE(1268);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(808);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1268);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1261);
      if (lookahead == ' ') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(814);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1268);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1268);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1260);
      if (lookahead == ' ') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(807);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1263);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1262);
      if (lookahead == '\'') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(1274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1263);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1264);
      if (lookahead == '"') ADVANCE(810);
      if (lookahead == '\'') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(1273);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1264);
      if (lookahead == '\'') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(1275);
      if (lookahead != 0) ADVANCE(1263);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1263);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(1277);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 1278:
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
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 16},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 16},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 16},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 4},
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
  [220] = {.lex_state = 64},
  [221] = {.lex_state = 74},
  [222] = {.lex_state = 74},
  [223] = {.lex_state = 20},
  [224] = {.lex_state = 56},
  [225] = {.lex_state = 56},
  [226] = {.lex_state = 64},
  [227] = {.lex_state = 74},
  [228] = {.lex_state = 64},
  [229] = {.lex_state = 75},
  [230] = {.lex_state = 75},
  [231] = {.lex_state = 75},
  [232] = {.lex_state = 75},
  [233] = {.lex_state = 75},
  [234] = {.lex_state = 74},
  [235] = {.lex_state = 75},
  [236] = {.lex_state = 74},
  [237] = {.lex_state = 74},
  [238] = {.lex_state = 56},
  [239] = {.lex_state = 74},
  [240] = {.lex_state = 74},
  [241] = {.lex_state = 74},
  [242] = {.lex_state = 74},
  [243] = {.lex_state = 74},
  [244] = {.lex_state = 74},
  [245] = {.lex_state = 74},
  [246] = {.lex_state = 74},
  [247] = {.lex_state = 74},
  [248] = {.lex_state = 74},
  [249] = {.lex_state = 74},
  [250] = {.lex_state = 74},
  [251] = {.lex_state = 74},
  [252] = {.lex_state = 74},
  [253] = {.lex_state = 74},
  [254] = {.lex_state = 74},
  [255] = {.lex_state = 74},
  [256] = {.lex_state = 74},
  [257] = {.lex_state = 74},
  [258] = {.lex_state = 74},
  [259] = {.lex_state = 74},
  [260] = {.lex_state = 74},
  [261] = {.lex_state = 20},
  [262] = {.lex_state = 74},
  [263] = {.lex_state = 74},
  [264] = {.lex_state = 74},
  [265] = {.lex_state = 74},
  [266] = {.lex_state = 74},
  [267] = {.lex_state = 74},
  [268] = {.lex_state = 74},
  [269] = {.lex_state = 74},
  [270] = {.lex_state = 74},
  [271] = {.lex_state = 74},
  [272] = {.lex_state = 74},
  [273] = {.lex_state = 74},
  [274] = {.lex_state = 74},
  [275] = {.lex_state = 74},
  [276] = {.lex_state = 20},
  [277] = {.lex_state = 20},
  [278] = {.lex_state = 20},
  [279] = {.lex_state = 56},
  [280] = {.lex_state = 57},
  [281] = {.lex_state = 56},
  [282] = {.lex_state = 57},
  [283] = {.lex_state = 58},
  [284] = {.lex_state = 58},
  [285] = {.lex_state = 42},
  [286] = {.lex_state = 64},
  [287] = {.lex_state = 42},
  [288] = {.lex_state = 64},
  [289] = {.lex_state = 40},
  [290] = {.lex_state = 64},
  [291] = {.lex_state = 1113},
  [292] = {.lex_state = 53},
  [293] = {.lex_state = 72},
  [294] = {.lex_state = 73},
  [295] = {.lex_state = 71},
  [296] = {.lex_state = 70},
  [297] = {.lex_state = 65},
  [298] = {.lex_state = 64},
  [299] = {.lex_state = 72},
  [300] = {.lex_state = 73},
  [301] = {.lex_state = 42},
  [302] = {.lex_state = 71},
  [303] = {.lex_state = 70},
  [304] = {.lex_state = 42},
  [305] = {.lex_state = 42},
  [306] = {.lex_state = 42},
  [307] = {.lex_state = 42},
  [308] = {.lex_state = 1113},
  [309] = {.lex_state = 20},
  [310] = {.lex_state = 64},
  [311] = {.lex_state = 41},
  [312] = {.lex_state = 39},
  [313] = {.lex_state = 38},
  [314] = {.lex_state = 42},
  [315] = {.lex_state = 42},
  [316] = {.lex_state = 64},
  [317] = {.lex_state = 57},
  [318] = {.lex_state = 42},
  [319] = {.lex_state = 38},
  [320] = {.lex_state = 39},
  [321] = {.lex_state = 41},
  [322] = {.lex_state = 20},
  [323] = {.lex_state = 64},
  [324] = {.lex_state = 64},
  [325] = {.lex_state = 72},
  [326] = {.lex_state = 64},
  [327] = {.lex_state = 42},
  [328] = {.lex_state = 64},
  [329] = {.lex_state = 64},
  [330] = {.lex_state = 64},
  [331] = {.lex_state = 38},
  [332] = {.lex_state = 39},
  [333] = {.lex_state = 41},
  [334] = {.lex_state = 40},
  [335] = {.lex_state = 40},
  [336] = {.lex_state = 73},
  [337] = {.lex_state = 71},
  [338] = {.lex_state = 70},
  [339] = {.lex_state = 64},
  [340] = {.lex_state = 20},
  [341] = {.lex_state = 20},
  [342] = {.lex_state = 1113},
  [343] = {.lex_state = 1113},
  [344] = {.lex_state = 64},
  [345] = {.lex_state = 1113},
  [346] = {.lex_state = 64},
  [347] = {.lex_state = 64},
  [348] = {.lex_state = 42},
  [349] = {.lex_state = 42},
  [350] = {.lex_state = 42},
  [351] = {.lex_state = 64},
  [352] = {.lex_state = 64},
  [353] = {.lex_state = 64},
  [354] = {.lex_state = 64},
  [355] = {.lex_state = 41},
  [356] = {.lex_state = 71},
  [357] = {.lex_state = 40},
  [358] = {.lex_state = 72},
  [359] = {.lex_state = 72},
  [360] = {.lex_state = 72},
  [361] = {.lex_state = 20},
  [362] = {.lex_state = 20},
  [363] = {.lex_state = 20},
  [364] = {.lex_state = 40},
  [365] = {.lex_state = 40},
  [366] = {.lex_state = 40},
  [367] = {.lex_state = 58},
  [368] = {.lex_state = 1113},
  [369] = {.lex_state = 39},
  [370] = {.lex_state = 70},
  [371] = {.lex_state = 1113},
  [372] = {.lex_state = 65},
  [373] = {.lex_state = 1113},
  [374] = {.lex_state = 73},
  [375] = {.lex_state = 60},
  [376] = {.lex_state = 65},
  [377] = {.lex_state = 65},
  [378] = {.lex_state = 72},
  [379] = {.lex_state = 38},
  [380] = {.lex_state = 1113},
  [381] = {.lex_state = 36},
  [382] = {.lex_state = 76},
  [383] = {.lex_state = 59},
  [384] = {.lex_state = 76},
  [385] = {.lex_state = 64},
  [386] = {.lex_state = 76},
  [387] = {.lex_state = 1114},
  [388] = {.lex_state = 1114},
  [389] = {.lex_state = 76},
  [390] = {.lex_state = 76},
  [391] = {.lex_state = 77},
  [392] = {.lex_state = 36},
  [393] = {.lex_state = 76},
  [394] = {.lex_state = 43},
  [395] = {.lex_state = 76},
  [396] = {.lex_state = 76},
  [397] = {.lex_state = 76},
  [398] = {.lex_state = 76},
  [399] = {.lex_state = 76},
  [400] = {.lex_state = 20},
  [401] = {.lex_state = 76},
  [402] = {.lex_state = 76},
  [403] = {.lex_state = 76},
  [404] = {.lex_state = 76},
  [405] = {.lex_state = 76},
  [406] = {.lex_state = 20},
  [407] = {.lex_state = 20},
  [408] = {.lex_state = 76},
  [409] = {.lex_state = 76},
  [410] = {.lex_state = 43},
  [411] = {.lex_state = 20},
  [412] = {.lex_state = 20},
  [413] = {.lex_state = 20},
  [414] = {.lex_state = 20},
  [415] = {.lex_state = 76},
  [416] = {.lex_state = 76},
  [417] = {.lex_state = 76},
  [418] = {.lex_state = 76},
  [419] = {.lex_state = 76},
  [420] = {.lex_state = 20},
  [421] = {.lex_state = 76},
  [422] = {.lex_state = 76},
  [423] = {.lex_state = 76},
  [424] = {.lex_state = 20},
  [425] = {.lex_state = 68},
  [426] = {.lex_state = 20},
  [427] = {.lex_state = 20},
  [428] = {.lex_state = 58},
  [429] = {.lex_state = 58},
  [430] = {.lex_state = 20},
  [431] = {.lex_state = 20},
  [432] = {.lex_state = 20},
  [433] = {.lex_state = 68},
  [434] = {.lex_state = 37},
  [435] = {.lex_state = 37},
  [436] = {.lex_state = 20},
  [437] = {.lex_state = 68},
  [438] = {.lex_state = 58},
  [439] = {.lex_state = 58},
  [440] = {.lex_state = 20},
  [441] = {.lex_state = 43},
  [442] = {.lex_state = 60},
  [443] = {.lex_state = 36},
  [444] = {.lex_state = 69},
  [445] = {.lex_state = 58},
  [446] = {.lex_state = 20},
  [447] = {.lex_state = 37},
  [448] = {.lex_state = 37},
  [449] = {.lex_state = 58},
  [450] = {.lex_state = 20},
  [451] = {.lex_state = 69},
  [452] = {.lex_state = 20},
  [453] = {.lex_state = 37},
  [454] = {.lex_state = 37},
  [455] = {.lex_state = 37},
  [456] = {.lex_state = 44},
  [457] = {.lex_state = 45},
  [458] = {.lex_state = 20},
  [459] = {.lex_state = 37},
  [460] = {.lex_state = 37},
  [461] = {.lex_state = 64},
  [462] = {.lex_state = 46},
  [463] = {.lex_state = 46},
  [464] = {.lex_state = 20},
  [465] = {.lex_state = 37},
  [466] = {.lex_state = 20},
  [467] = {.lex_state = 37},
  [468] = {.lex_state = 37},
  [469] = {.lex_state = 44},
  [470] = {.lex_state = 45},
  [471] = {.lex_state = 44},
  [472] = {.lex_state = 45},
  [473] = {.lex_state = 20},
  [474] = {.lex_state = 64},
  [475] = {.lex_state = 20},
  [476] = {.lex_state = 20},
  [477] = {.lex_state = 20},
  [478] = {.lex_state = 64},
  [479] = {.lex_state = 45},
  [480] = {.lex_state = 20},
  [481] = {.lex_state = 20},
  [482] = {.lex_state = 20},
  [483] = {.lex_state = 20},
  [484] = {.lex_state = 20},
  [485] = {.lex_state = 64},
  [486] = {.lex_state = 20},
  [487] = {.lex_state = 37},
  [488] = {.lex_state = 20},
  [489] = {.lex_state = 37},
  [490] = {.lex_state = 20},
  [491] = {.lex_state = 44},
  [492] = {.lex_state = 45},
  [493] = {.lex_state = 20},
  [494] = {.lex_state = 20},
  [495] = {.lex_state = 44},
  [496] = {.lex_state = 66},
  [497] = {.lex_state = 64},
  [498] = {.lex_state = 20},
  [499] = {.lex_state = 64},
  [500] = {.lex_state = 20},
  [501] = {.lex_state = 37},
  [502] = {.lex_state = 20},
  [503] = {.lex_state = 20},
  [504] = {.lex_state = 20},
  [505] = {.lex_state = 20},
  [506] = {.lex_state = 37},
  [507] = {.lex_state = 37},
  [508] = {.lex_state = 37},
  [509] = {.lex_state = 64},
  [510] = {.lex_state = 20},
  [511] = {.lex_state = 62},
  [512] = {.lex_state = 37},
  [513] = {.lex_state = 44},
  [514] = {.lex_state = 45},
  [515] = {.lex_state = 37},
  [516] = {.lex_state = 20},
  [517] = {.lex_state = 20},
  [518] = {.lex_state = 64},
  [519] = {.lex_state = 37},
  [520] = {.lex_state = 20},
  [521] = {.lex_state = 47},
  [522] = {.lex_state = 76},
  [523] = {.lex_state = 20},
  [524] = {.lex_state = 37},
  [525] = {.lex_state = 64},
  [526] = {.lex_state = 67},
  [527] = {.lex_state = 20},
  [528] = {.lex_state = 20},
  [529] = {.lex_state = 20},
  [530] = {.lex_state = 37},
  [531] = {.lex_state = 125},
  [532] = {.lex_state = 37},
  [533] = {.lex_state = 20},
  [534] = {.lex_state = 20},
  [535] = {.lex_state = 64},
  [536] = {.lex_state = 20},
  [537] = {.lex_state = 64},
  [538] = {.lex_state = 64},
  [539] = {.lex_state = 20},
  [540] = {.lex_state = 20},
  [541] = {.lex_state = 64},
  [542] = {.lex_state = 20},
  [543] = {.lex_state = 64},
  [544] = {.lex_state = 20},
  [545] = {.lex_state = 64},
  [546] = {.lex_state = 20},
  [547] = {.lex_state = 64},
  [548] = {.lex_state = 20},
  [549] = {.lex_state = 64},
  [550] = {.lex_state = 20},
  [551] = {.lex_state = 64},
  [552] = {.lex_state = 20},
  [553] = {.lex_state = 64},
  [554] = {.lex_state = 20},
  [555] = {.lex_state = 64},
  [556] = {.lex_state = 20},
  [557] = {.lex_state = 64},
  [558] = {.lex_state = 20},
  [559] = {.lex_state = 64},
  [560] = {.lex_state = 20},
  [561] = {.lex_state = 44},
  [562] = {.lex_state = 64},
  [563] = {.lex_state = 45},
  [564] = {.lex_state = 64},
  [565] = {.lex_state = 37},
  [566] = {.lex_state = 64},
  [567] = {.lex_state = 37},
  [568] = {.lex_state = 64},
  [569] = {.lex_state = 44},
  [570] = {.lex_state = 64},
  [571] = {.lex_state = 37},
  [572] = {.lex_state = 64},
  [573] = {.lex_state = 20},
  [574] = {.lex_state = 64},
  [575] = {.lex_state = 45},
  [576] = {.lex_state = 20},
  [577] = {.lex_state = 76},
  [578] = {.lex_state = 20},
  [579] = {.lex_state = 45},
  [580] = {.lex_state = 44},
  [581] = {.lex_state = 64},
  [582] = {.lex_state = 76},
  [583] = {.lex_state = 45},
  [584] = {.lex_state = 44},
  [585] = {.lex_state = 20},
  [586] = {.lex_state = 76},
  [587] = {.lex_state = 45},
  [588] = {.lex_state = 44},
  [589] = {.lex_state = 20},
  [590] = {.lex_state = 76},
  [591] = {.lex_state = 45},
  [592] = {.lex_state = 44},
  [593] = {.lex_state = 20},
  [594] = {.lex_state = 76},
  [595] = {.lex_state = 76},
  [596] = {.lex_state = 76},
  [597] = {.lex_state = 76},
  [598] = {.lex_state = 76},
  [599] = {.lex_state = 76},
  [600] = {.lex_state = 76},
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
    [aux_sym__from_layer_token1] = ACTIONS(1),
    [aux_sym_from_layer_token5] = ACTIONS(1),
    [aux_sym_from_layer_token9] = ACTIONS(1),
    [aux_sym_from_layer_token10] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym__port_part_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_port_protocol_token1] = ACTIONS(1),
    [aux_sym_port_protocol_token2] = ACTIONS(1),
    [aux_sym__repository_start_token1] = ACTIONS(1),
    [sym_hc_none] = ACTIONS(1),
    [anon_sym_DASH_DASHinterval] = ACTIONS(1),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1),
    [anon_sym_DASH_DASHretries] = ACTIONS(1),
    [aux_sym__hc_command_token1] = ACTIONS(1),
    [aux_sym_label_value_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [sym_dockerfile] = STATE(578),
    [sym__directive] = STATE(206),
    [sym_add] = STATE(206),
    [sym_arg] = STATE(206),
    [sym_cmd] = STATE(206),
    [sym_copy] = STATE(206),
    [sym_entrypoint] = STATE(206),
    [sym_env] = STATE(206),
    [sym_expose] = STATE(206),
    [sym_from] = STATE(206),
    [sym_healthcheck] = STATE(206),
    [sym_label] = STATE(206),
    [sym_maintainer] = STATE(206),
    [sym_onbuild] = STATE(206),
    [sym_run] = STATE(206),
    [sym_shell] = STATE(206),
    [sym_stopsignal] = STATE(206),
    [sym_user] = STATE(206),
    [sym_volume] = STATE(206),
    [sym_workdir] = STATE(206),
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
    [sym__directive] = STATE(206),
    [sym_add] = STATE(206),
    [sym_arg] = STATE(206),
    [sym_cmd] = STATE(206),
    [sym_copy] = STATE(206),
    [sym_entrypoint] = STATE(206),
    [sym_env] = STATE(206),
    [sym_expose] = STATE(206),
    [sym_from] = STATE(206),
    [sym_healthcheck] = STATE(206),
    [sym_label] = STATE(206),
    [sym_maintainer] = STATE(206),
    [sym_onbuild] = STATE(206),
    [sym_run] = STATE(206),
    [sym_shell] = STATE(206),
    [sym_stopsignal] = STATE(206),
    [sym_user] = STATE(206),
    [sym_volume] = STATE(206),
    [sym_workdir] = STATE(206),
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
    [sym__directive] = STATE(206),
    [sym_add] = STATE(206),
    [sym_arg] = STATE(206),
    [sym_cmd] = STATE(206),
    [sym_copy] = STATE(206),
    [sym_entrypoint] = STATE(206),
    [sym_env] = STATE(206),
    [sym_expose] = STATE(206),
    [sym_from] = STATE(206),
    [sym_healthcheck] = STATE(206),
    [sym_label] = STATE(206),
    [sym_maintainer] = STATE(206),
    [sym_onbuild] = STATE(206),
    [sym_run] = STATE(206),
    [sym_shell] = STATE(206),
    [sym_stopsignal] = STATE(206),
    [sym_user] = STATE(206),
    [sym_volume] = STATE(206),
    [sym_workdir] = STATE(206),
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
    [sym_add] = STATE(197),
    [sym_arg] = STATE(197),
    [sym_cmd] = STATE(197),
    [sym_copy] = STATE(197),
    [sym_entrypoint] = STATE(197),
    [sym_env] = STATE(197),
    [sym_expose] = STATE(197),
    [sym_healthcheck] = STATE(197),
    [sym_label] = STATE(197),
    [sym_run] = STATE(197),
    [sym_shell] = STATE(197),
    [sym_stopsignal] = STATE(197),
    [sym_user] = STATE(197),
    [sym_volume] = STATE(197),
    [sym_workdir] = STATE(197),
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
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym__port] = STATE(95),
    [sym_port] = STATE(95),
    [sym_port_range] = STATE(95),
    [sym__port_part] = STATE(74),
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
  [6] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym__port] = STATE(95),
    [sym_port] = STATE(95),
    [sym_port_range] = STATE(95),
    [sym__port_part] = STATE(74),
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
    [aux_sym_from_layer_repeat4] = STATE(10),
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
    [aux_sym_from_layer_token4] = ACTIONS(131),
    [aux_sym_from_layer_token13] = ACTIONS(133),
    [aux_sym_from_layer_token16] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(135),
    [aux_sym__repository_start_token1] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [8] = {
    [aux_sym_from_layer_repeat3] = STATE(8),
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
    [aux_sym_from_layer_token4] = ACTIONS(139),
    [aux_sym_from_layer_token9] = ACTIONS(141),
    [aux_sym_from_layer_token12] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(137),
    [aux_sym__repository_start_token1] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [9] = {
    [aux_sym_from_layer_repeat1] = STATE(15),
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
    [aux_sym_from_layer_token3] = ACTIONS(148),
    [aux_sym_from_layer_token4] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(152),
    [aux_sym__repository_start_token1] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [10] = {
    [aux_sym_from_layer_repeat4] = STATE(11),
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
    [aux_sym_volume_token1] = ACTIONS(156),
    [aux_sym_workdir_token1] = ACTIONS(156),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [aux_sym_from_layer_token13] = ACTIONS(133),
    [aux_sym_from_layer_token16] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(160),
    [aux_sym__repository_start_token1] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym__space_no_newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [11] = {
    [aux_sym_from_layer_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(162),
    [aux_sym_add_token1] = ACTIONS(164),
    [aux_sym_arg_token1] = ACTIONS(164),
    [aux_sym_cmd_token1] = ACTIONS(164),
    [aux_sym_copy_token1] = ACTIONS(164),
    [aux_sym_entrypoint_token1] = ACTIONS(164),
    [aux_sym_env_token1] = ACTIONS(164),
    [aux_sym_expose_token1] = ACTIONS(164),
    [aux_sym_from_token1] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(162),
    [aux_sym_healthcheck_token1] = ACTIONS(164),
    [aux_sym_label_token1] = ACTIONS(164),
    [aux_sym_maintainer_token1] = ACTIONS(164),
    [aux_sym_onbuild_token1] = ACTIONS(164),
    [aux_sym_run_token1] = ACTIONS(164),
    [aux_sym_shell_token1] = ACTIONS(164),
    [aux_sym_stopsignal_token1] = ACTIONS(164),
    [aux_sym_user_token1] = ACTIONS(164),
    [aux_sym_volume_token1] = ACTIONS(164),
    [aux_sym_workdir_token1] = ACTIONS(164),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [aux_sym_from_layer_token13] = ACTIONS(166),
    [aux_sym_from_layer_token16] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(162),
    [aux_sym__repository_start_token1] = ACTIONS(162),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(162),
    [sym__space_no_newline] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [12] = {
    [aux_sym_from_layer_repeat3] = STATE(8),
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
    [aux_sym_volume_token1] = ACTIONS(156),
    [aux_sym_workdir_token1] = ACTIONS(156),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [aux_sym_from_layer_token9] = ACTIONS(169),
    [aux_sym_from_layer_token12] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(160),
    [aux_sym__repository_start_token1] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym__space_no_newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [13] = {
    [aux_sym_from_layer_repeat2] = STATE(18),
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
    [aux_sym_volume_token1] = ACTIONS(156),
    [aux_sym_workdir_token1] = ACTIONS(156),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [aux_sym_from_layer_token5] = ACTIONS(171),
    [aux_sym_from_layer_token8] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(160),
    [aux_sym__repository_start_token1] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym__space_no_newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [14] = {
    [aux_sym_from_layer_repeat1] = STATE(14),
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
    [aux_sym_from_layer_token3] = ACTIONS(177),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(173),
    [aux_sym__repository_start_token1] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [15] = {
    [aux_sym_from_layer_repeat1] = STATE(14),
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
    [aux_sym_from_layer_token3] = ACTIONS(148),
    [aux_sym_from_layer_token4] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(135),
    [aux_sym__repository_start_token1] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [16] = {
    [aux_sym_from_layer_repeat2] = STATE(13),
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
    [aux_sym_from_layer_token4] = ACTIONS(131),
    [aux_sym_from_layer_token5] = ACTIONS(171),
    [aux_sym_from_layer_token8] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(135),
    [aux_sym__repository_start_token1] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [17] = {
    [aux_sym_from_layer_repeat3] = STATE(12),
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
    [aux_sym_from_layer_token4] = ACTIONS(131),
    [aux_sym_from_layer_token9] = ACTIONS(169),
    [aux_sym_from_layer_token12] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(135),
    [aux_sym__repository_start_token1] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [18] = {
    [aux_sym_from_layer_repeat2] = STATE(18),
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
    [aux_sym_from_layer_token4] = ACTIONS(182),
    [aux_sym_from_layer_token5] = ACTIONS(184),
    [aux_sym_from_layer_token8] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token1] = ACTIONS(180),
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
    [aux_sym_from_layer_token4] = ACTIONS(189),
    [aux_sym_from_layer_token9] = ACTIONS(187),
    [aux_sym_from_layer_token12] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token1] = ACTIONS(187),
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
    [aux_sym_from_layer_token3] = ACTIONS(173),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(173),
    [aux_sym__repository_start_token1] = ACTIONS(173),
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
    [aux_sym_volume_token1] = ACTIONS(193),
    [aux_sym_workdir_token1] = ACTIONS(193),
    [aux_sym_from_layer_token4] = ACTIONS(193),
    [aux_sym_from_layer_token13] = ACTIONS(191),
    [aux_sym_from_layer_token16] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token1] = ACTIONS(191),
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
    [aux_sym_from_layer_token3] = ACTIONS(195),
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token1] = ACTIONS(195),
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
    [aux_sym_from_layer_token3] = ACTIONS(199),
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token1] = ACTIONS(199),
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
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [aux_sym_from_layer_token5] = ACTIONS(203),
    [aux_sym_from_layer_token8] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token1] = ACTIONS(203),
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
    [aux_sym_from_layer_token3] = ACTIONS(207),
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token1] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [26] = {
    [aux_sym_from_layer_repeat2] = STATE(38),
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
    [aux_sym_from_layer_token4] = ACTIONS(211),
    [aux_sym_from_layer_token5] = ACTIONS(213),
    [aux_sym_from_layer_token8] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
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
    [aux_sym_from_layer_repeat2] = STATE(28),
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
    [aux_sym_from_layer_token4] = ACTIONS(182),
    [aux_sym_from_layer_token5] = ACTIONS(219),
    [aux_sym_from_layer_token8] = ACTIONS(219),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [29] = {
    [aux_sym_from_layer_repeat1] = STATE(30),
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
    [anon_sym_DOLLAR] = ACTIONS(222),
    [aux_sym_volume_token1] = ACTIONS(146),
    [aux_sym_workdir_token1] = ACTIONS(146),
    [aux_sym_from_layer_token3] = ACTIONS(222),
    [aux_sym_from_layer_token4] = ACTIONS(224),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [30] = {
    [aux_sym_from_layer_repeat1] = STATE(33),
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
    [anon_sym_DOLLAR] = ACTIONS(222),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [aux_sym_from_layer_token3] = ACTIONS(222),
    [aux_sym_from_layer_token4] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [31] = {
    [aux_sym_from_layer_repeat4] = STATE(36),
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
    [aux_sym_from_layer_token4] = ACTIONS(211),
    [aux_sym_from_layer_token13] = ACTIONS(226),
    [aux_sym_from_layer_token16] = ACTIONS(226),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [32] = {
    [sym_port_protocol] = STATE(92),
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
    [anon_sym_SLASH] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(228),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [33] = {
    [aux_sym_from_layer_repeat1] = STATE(33),
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
    [anon_sym_DOLLAR] = ACTIONS(230),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [aux_sym_from_layer_token3] = ACTIONS(230),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [34] = {
    [aux_sym_from_layer_repeat3] = STATE(37),
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
    [aux_sym_from_layer_token4] = ACTIONS(211),
    [aux_sym_from_layer_token9] = ACTIONS(233),
    [aux_sym_from_layer_token12] = ACTIONS(233),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
    [aux_sym_from_layer_repeat4] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(162),
    [aux_sym_add_token1] = ACTIONS(164),
    [aux_sym_arg_token1] = ACTIONS(164),
    [aux_sym_cmd_token1] = ACTIONS(164),
    [aux_sym_copy_token1] = ACTIONS(164),
    [aux_sym_entrypoint_token1] = ACTIONS(164),
    [aux_sym_env_token1] = ACTIONS(164),
    [aux_sym_expose_token1] = ACTIONS(164),
    [aux_sym_from_token1] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
    [aux_sym_healthcheck_token1] = ACTIONS(164),
    [aux_sym_label_token1] = ACTIONS(164),
    [aux_sym_maintainer_token1] = ACTIONS(164),
    [aux_sym_onbuild_token1] = ACTIONS(164),
    [aux_sym_run_token1] = ACTIONS(164),
    [aux_sym_shell_token1] = ACTIONS(164),
    [aux_sym_stopsignal_token1] = ACTIONS(164),
    [aux_sym_user_token1] = ACTIONS(164),
    [aux_sym_volume_token1] = ACTIONS(164),
    [aux_sym_workdir_token1] = ACTIONS(164),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [aux_sym_from_layer_token13] = ACTIONS(235),
    [aux_sym_from_layer_token16] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(162),
    [sym__space_no_newline] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [36] = {
    [aux_sym_from_layer_repeat4] = STATE(35),
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
    [aux_sym_volume_token1] = ACTIONS(156),
    [aux_sym_workdir_token1] = ACTIONS(156),
    [aux_sym_from_layer_token4] = ACTIONS(238),
    [aux_sym_from_layer_token13] = ACTIONS(226),
    [aux_sym_from_layer_token16] = ACTIONS(226),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym__space_no_newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [aux_sym_from_layer_repeat3] = STATE(39),
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
    [aux_sym_volume_token1] = ACTIONS(156),
    [aux_sym_workdir_token1] = ACTIONS(156),
    [aux_sym_from_layer_token4] = ACTIONS(238),
    [aux_sym_from_layer_token9] = ACTIONS(233),
    [aux_sym_from_layer_token12] = ACTIONS(233),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym__space_no_newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [38] = {
    [aux_sym_from_layer_repeat2] = STATE(28),
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
    [aux_sym_volume_token1] = ACTIONS(156),
    [aux_sym_workdir_token1] = ACTIONS(156),
    [aux_sym_from_layer_token4] = ACTIONS(238),
    [aux_sym_from_layer_token5] = ACTIONS(213),
    [aux_sym_from_layer_token8] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym__space_no_newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [aux_sym_from_layer_repeat3] = STATE(39),
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
    [aux_sym_from_layer_token4] = ACTIONS(139),
    [aux_sym_from_layer_token9] = ACTIONS(240),
    [aux_sym_from_layer_token12] = ACTIONS(240),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [40] = {
    [aux_sym_from_layer_repeat3] = STATE(8),
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
    [aux_sym_from_layer_token4] = ACTIONS(247),
    [aux_sym_from_layer_token9] = ACTIONS(169),
    [aux_sym_from_layer_token12] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [41] = {
    [aux_sym_from_layer_repeat1] = STATE(14),
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
    [aux_sym_from_layer_token3] = ACTIONS(148),
    [aux_sym_from_layer_token4] = ACTIONS(253),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [42] = {
    [aux_sym_path_repeat1] = STATE(65),
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
    [aux_sym_path_token1] = ACTIONS(259),
    [aux_sym_path_token2] = ACTIONS(261),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [43] = {
    [sym_path] = STATE(66),
    [aux_sym__paths] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(265),
    [aux_sym_add_token1] = ACTIONS(265),
    [aux_sym_arg_token1] = ACTIONS(265),
    [aux_sym_cmd_token1] = ACTIONS(265),
    [aux_sym_copy_token1] = ACTIONS(265),
    [aux_sym_entrypoint_token1] = ACTIONS(265),
    [aux_sym_env_token1] = ACTIONS(265),
    [aux_sym_expose_token1] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [aux_sym_from_token1] = ACTIONS(265),
    [aux_sym_healthcheck_token1] = ACTIONS(265),
    [aux_sym_label_token1] = ACTIONS(265),
    [aux_sym_maintainer_token1] = ACTIONS(265),
    [aux_sym_onbuild_token1] = ACTIONS(265),
    [aux_sym_run_token1] = ACTIONS(265),
    [aux_sym_shell_token1] = ACTIONS(265),
    [aux_sym_stopsignal_token1] = ACTIONS(265),
    [aux_sym_user_token1] = ACTIONS(265),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(265),
    [aux_sym_workdir_token1] = ACTIONS(265),
    [aux_sym_path_token1] = ACTIONS(271),
    [aux_sym_path_token2] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [44] = {
    [sym_path] = STATE(66),
    [aux_sym__paths] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_add_token1] = ACTIONS(275),
    [aux_sym_arg_token1] = ACTIONS(275),
    [aux_sym_cmd_token1] = ACTIONS(275),
    [aux_sym_copy_token1] = ACTIONS(275),
    [aux_sym_entrypoint_token1] = ACTIONS(275),
    [aux_sym_env_token1] = ACTIONS(275),
    [aux_sym_expose_token1] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [aux_sym_from_token1] = ACTIONS(275),
    [aux_sym_healthcheck_token1] = ACTIONS(275),
    [aux_sym_label_token1] = ACTIONS(275),
    [aux_sym_maintainer_token1] = ACTIONS(275),
    [aux_sym_onbuild_token1] = ACTIONS(275),
    [aux_sym_run_token1] = ACTIONS(275),
    [aux_sym_shell_token1] = ACTIONS(275),
    [aux_sym_stopsignal_token1] = ACTIONS(275),
    [aux_sym_user_token1] = ACTIONS(275),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(275),
    [aux_sym_workdir_token1] = ACTIONS(275),
    [aux_sym_path_token1] = ACTIONS(271),
    [aux_sym_path_token2] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [aux_sym_from_layer_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(277),
    [aux_sym_add_token1] = ACTIONS(279),
    [aux_sym_arg_token1] = ACTIONS(279),
    [aux_sym_cmd_token1] = ACTIONS(279),
    [aux_sym_copy_token1] = ACTIONS(279),
    [aux_sym_entrypoint_token1] = ACTIONS(279),
    [aux_sym_env_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [aux_sym_from_token1] = ACTIONS(279),
    [anon_sym_AT] = ACTIONS(277),
    [aux_sym_healthcheck_token1] = ACTIONS(279),
    [aux_sym_label_token1] = ACTIONS(279),
    [aux_sym_maintainer_token1] = ACTIONS(279),
    [aux_sym_onbuild_token1] = ACTIONS(279),
    [aux_sym_run_token1] = ACTIONS(279),
    [aux_sym_shell_token1] = ACTIONS(279),
    [aux_sym_stopsignal_token1] = ACTIONS(279),
    [aux_sym_user_token1] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(148),
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [aux_sym_from_layer_token3] = ACTIONS(148),
    [aux_sym_from_layer_token4] = ACTIONS(281),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(277),
    [sym__space_no_newline] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [47] = {
    [aux_sym_from_layer_repeat2] = STATE(59),
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
    [aux_sym_from_layer_token4] = ACTIONS(253),
    [aux_sym_from_layer_token5] = ACTIONS(171),
    [aux_sym_from_layer_token8] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
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
    [aux_sym_from_layer_token4] = ACTIONS(193),
    [aux_sym_from_layer_token13] = ACTIONS(191),
    [aux_sym_from_layer_token16] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym__space_no_newline] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [49] = {
    [sym_path] = STATE(66),
    [aux_sym__paths] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(283),
    [aux_sym_add_token1] = ACTIONS(283),
    [aux_sym_arg_token1] = ACTIONS(283),
    [aux_sym_cmd_token1] = ACTIONS(283),
    [aux_sym_copy_token1] = ACTIONS(283),
    [aux_sym_entrypoint_token1] = ACTIONS(283),
    [aux_sym_env_token1] = ACTIONS(283),
    [aux_sym_expose_token1] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [aux_sym_from_token1] = ACTIONS(283),
    [aux_sym_healthcheck_token1] = ACTIONS(283),
    [aux_sym_label_token1] = ACTIONS(283),
    [aux_sym_maintainer_token1] = ACTIONS(283),
    [aux_sym_onbuild_token1] = ACTIONS(283),
    [aux_sym_run_token1] = ACTIONS(283),
    [aux_sym_shell_token1] = ACTIONS(283),
    [aux_sym_stopsignal_token1] = ACTIONS(283),
    [aux_sym_user_token1] = ACTIONS(283),
    [anon_sym_DOLLAR] = ACTIONS(288),
    [aux_sym_volume_token1] = ACTIONS(283),
    [aux_sym_workdir_token1] = ACTIONS(283),
    [aux_sym_path_token1] = ACTIONS(291),
    [aux_sym_path_token2] = ACTIONS(294),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [50] = {
    [sym_path] = STATE(66),
    [aux_sym__paths] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(297),
    [aux_sym_add_token1] = ACTIONS(297),
    [aux_sym_arg_token1] = ACTIONS(297),
    [aux_sym_cmd_token1] = ACTIONS(297),
    [aux_sym_copy_token1] = ACTIONS(297),
    [aux_sym_entrypoint_token1] = ACTIONS(297),
    [aux_sym_env_token1] = ACTIONS(297),
    [aux_sym_expose_token1] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [aux_sym_from_token1] = ACTIONS(297),
    [aux_sym_healthcheck_token1] = ACTIONS(297),
    [aux_sym_label_token1] = ACTIONS(297),
    [aux_sym_maintainer_token1] = ACTIONS(297),
    [aux_sym_onbuild_token1] = ACTIONS(297),
    [aux_sym_run_token1] = ACTIONS(297),
    [aux_sym_shell_token1] = ACTIONS(297),
    [aux_sym_stopsignal_token1] = ACTIONS(297),
    [aux_sym_user_token1] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(297),
    [aux_sym_workdir_token1] = ACTIONS(297),
    [aux_sym_path_token1] = ACTIONS(271),
    [aux_sym_path_token2] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [51] = {
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
    [aux_sym_from_layer_token3] = ACTIONS(207),
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
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
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [aux_sym_from_layer_token4] = ACTIONS(189),
    [aux_sym_from_layer_token9] = ACTIONS(187),
    [aux_sym_from_layer_token12] = ACTIONS(187),
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
    [aux_sym_from_layer_token3] = ACTIONS(199),
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [54] = {
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
    [aux_sym_from_layer_token3] = ACTIONS(195),
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [55] = {
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
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [aux_sym_from_layer_token5] = ACTIONS(203),
    [aux_sym_from_layer_token8] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [56] = {
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
    [aux_sym_from_layer_token3] = ACTIONS(173),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [57] = {
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
  [58] = {
    [aux_sym_path_repeat1] = STATE(58),
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
    [aux_sym_healthcheck_token1] = ACTIONS(299),
    [aux_sym_label_token1] = ACTIONS(299),
    [aux_sym_maintainer_token1] = ACTIONS(299),
    [aux_sym_onbuild_token1] = ACTIONS(299),
    [aux_sym_run_token1] = ACTIONS(299),
    [aux_sym_shell_token1] = ACTIONS(299),
    [aux_sym_stopsignal_token1] = ACTIONS(299),
    [aux_sym_user_token1] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [aux_sym_volume_token1] = ACTIONS(299),
    [aux_sym_workdir_token1] = ACTIONS(299),
    [aux_sym_path_token1] = ACTIONS(304),
    [aux_sym_path_token2] = ACTIONS(306),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym__space_no_newline] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [59] = {
    [aux_sym_from_layer_repeat2] = STATE(18),
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
    [aux_sym_from_layer_token4] = ACTIONS(247),
    [aux_sym_from_layer_token5] = ACTIONS(171),
    [aux_sym_from_layer_token8] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [60] = {
    [aux_sym_from_layer_repeat4] = STATE(62),
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
    [aux_sym_from_layer_token4] = ACTIONS(253),
    [aux_sym_from_layer_token13] = ACTIONS(133),
    [aux_sym_from_layer_token16] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [61] = {
    [aux_sym_from_layer_repeat3] = STATE(40),
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
    [aux_sym_from_layer_token4] = ACTIONS(253),
    [aux_sym_from_layer_token9] = ACTIONS(169),
    [aux_sym_from_layer_token12] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym__space_no_newline] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [62] = {
    [aux_sym_from_layer_repeat4] = STATE(11),
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
    [aux_sym_from_layer_token4] = ACTIONS(247),
    [aux_sym_from_layer_token13] = ACTIONS(133),
    [aux_sym_from_layer_token16] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [63] = {
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
  [64] = {
    [sym_path] = STATE(66),
    [aux_sym__paths] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_add_token1] = ACTIONS(309),
    [aux_sym_arg_token1] = ACTIONS(309),
    [aux_sym_cmd_token1] = ACTIONS(309),
    [aux_sym_copy_token1] = ACTIONS(309),
    [aux_sym_entrypoint_token1] = ACTIONS(309),
    [aux_sym_env_token1] = ACTIONS(309),
    [aux_sym_expose_token1] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [aux_sym_from_token1] = ACTIONS(309),
    [aux_sym_healthcheck_token1] = ACTIONS(309),
    [aux_sym_label_token1] = ACTIONS(309),
    [aux_sym_maintainer_token1] = ACTIONS(309),
    [aux_sym_onbuild_token1] = ACTIONS(309),
    [aux_sym_run_token1] = ACTIONS(309),
    [aux_sym_shell_token1] = ACTIONS(309),
    [aux_sym_stopsignal_token1] = ACTIONS(309),
    [aux_sym_user_token1] = ACTIONS(309),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(309),
    [aux_sym_workdir_token1] = ACTIONS(309),
    [aux_sym_path_token1] = ACTIONS(271),
    [aux_sym_path_token2] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [65] = {
    [aux_sym_path_repeat1] = STATE(58),
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
    [anon_sym_DOLLAR] = ACTIONS(257),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_path_token1] = ACTIONS(313),
    [aux_sym_path_token2] = ACTIONS(261),
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
    [sym__space_no_newline] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
    [aux_sym_from_layer_repeat3] = STATE(8),
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
    [aux_sym_volume_token1] = ACTIONS(325),
    [aux_sym_workdir_token1] = ACTIONS(325),
    [aux_sym_from_layer_token4] = ACTIONS(327),
    [aux_sym_from_layer_token9] = ACTIONS(169),
    [aux_sym_from_layer_token12] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym__space_no_newline] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [68] = {
    [aux_sym_from_layer_repeat3] = STATE(67),
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
    [aux_sym_from_layer_token4] = ACTIONS(333),
    [aux_sym_from_layer_token9] = ACTIONS(169),
    [aux_sym_from_layer_token12] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [69] = {
    [aux_sym_from_layer_repeat2] = STATE(80),
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
    [aux_sym_from_layer_token4] = ACTIONS(333),
    [aux_sym_from_layer_token5] = ACTIONS(171),
    [aux_sym_from_layer_token8] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [70] = {
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
  [71] = {
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
    [aux_sym_path_token1] = ACTIONS(201),
    [aux_sym_path_token2] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [72] = {
    [aux_sym_from_layer_repeat4] = STATE(78),
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
    [aux_sym_from_layer_token4] = ACTIONS(333),
    [aux_sym_from_layer_token13] = ACTIONS(133),
    [aux_sym_from_layer_token16] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
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
    [aux_sym_from_token1] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_AT] = ACTIONS(335),
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
    [anon_sym_SLASH] = ACTIONS(339),
    [aux_sym__repository_start_token1] = ACTIONS(339),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(335),
    [sym__space_no_newline] = ACTIONS(337),
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
  [75] = {
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
    [aux_sym_path_token2] = ACTIONS(347),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(345),
    [sym__space_no_newline] = ACTIONS(347),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [76] = {
    [aux_sym_from_layer_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(349),
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
    [anon_sym_DOLLAR] = ACTIONS(148),
    [aux_sym_volume_token1] = ACTIONS(351),
    [aux_sym_workdir_token1] = ACTIONS(351),
    [aux_sym_from_layer_token3] = ACTIONS(148),
    [aux_sym_from_layer_token4] = ACTIONS(353),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(349),
    [sym__space_no_newline] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [aux_sym_add_token1] = ACTIONS(355),
    [aux_sym_arg_token1] = ACTIONS(355),
    [aux_sym_cmd_token1] = ACTIONS(355),
    [aux_sym_copy_token1] = ACTIONS(355),
    [aux_sym_entrypoint_token1] = ACTIONS(355),
    [aux_sym_env_token1] = ACTIONS(355),
    [aux_sym_expose_token1] = ACTIONS(355),
    [aux_sym_from_token1] = ACTIONS(355),
    [anon_sym_COLON] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(355),
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
    [anon_sym_SLASH] = ACTIONS(359),
    [aux_sym__repository_start_token1] = ACTIONS(359),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(355),
    [sym__space_no_newline] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [78] = {
    [aux_sym_from_layer_repeat4] = STATE(11),
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
    [aux_sym_volume_token1] = ACTIONS(325),
    [aux_sym_workdir_token1] = ACTIONS(325),
    [aux_sym_from_layer_token4] = ACTIONS(327),
    [aux_sym_from_layer_token13] = ACTIONS(133),
    [aux_sym_from_layer_token16] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym__space_no_newline] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [aux_sym_add_token1] = ACTIONS(361),
    [aux_sym_arg_token1] = ACTIONS(361),
    [aux_sym_cmd_token1] = ACTIONS(361),
    [aux_sym_copy_token1] = ACTIONS(361),
    [aux_sym_entrypoint_token1] = ACTIONS(361),
    [aux_sym_env_token1] = ACTIONS(361),
    [aux_sym_expose_token1] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [aux_sym_from_token1] = ACTIONS(361),
    [aux_sym_healthcheck_token1] = ACTIONS(361),
    [aux_sym_label_token1] = ACTIONS(361),
    [aux_sym_maintainer_token1] = ACTIONS(361),
    [aux_sym_onbuild_token1] = ACTIONS(361),
    [aux_sym_run_token1] = ACTIONS(361),
    [aux_sym_shell_token1] = ACTIONS(361),
    [aux_sym_stopsignal_token1] = ACTIONS(361),
    [aux_sym_user_token1] = ACTIONS(361),
    [anon_sym_DOLLAR] = ACTIONS(361),
    [aux_sym_volume_token1] = ACTIONS(361),
    [aux_sym_workdir_token1] = ACTIONS(361),
    [aux_sym_path_token1] = ACTIONS(363),
    [aux_sym_path_token2] = ACTIONS(363),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(361),
    [sym__space_no_newline] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [80] = {
    [aux_sym_from_layer_repeat2] = STATE(18),
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
    [aux_sym_volume_token1] = ACTIONS(325),
    [aux_sym_workdir_token1] = ACTIONS(325),
    [aux_sym_from_layer_token4] = ACTIONS(327),
    [aux_sym_from_layer_token5] = ACTIONS(171),
    [aux_sym_from_layer_token8] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym__space_no_newline] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [81] = {
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
    [aux_sym_path_token2] = ACTIONS(367),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(365),
    [sym__space_no_newline] = ACTIONS(367),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [82] = {
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
  [83] = {
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
    [anon_sym_COLON] = ACTIONS(373),
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
    [anon_sym_DASH] = ACTIONS(373),
    [aux_sym__port_part_token1] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [84] = {
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
    [anon_sym_COLON] = ACTIONS(375),
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
    [anon_sym_DASH] = ACTIONS(375),
    [aux_sym__port_part_token1] = ACTIONS(375),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(375),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [85] = {
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
  [86] = {
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
    [aux_sym_path_token1] = ACTIONS(304),
    [aux_sym_path_token2] = ACTIONS(304),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym__space_no_newline] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [87] = {
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
  [88] = {
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
  [89] = {
    [aux_sym_from_layer_repeat1] = STATE(14),
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
    [anon_sym_DOLLAR] = ACTIONS(148),
    [aux_sym_volume_token1] = ACTIONS(331),
    [aux_sym_workdir_token1] = ACTIONS(331),
    [aux_sym_from_layer_token3] = ACTIONS(148),
    [aux_sym_from_layer_token4] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [90] = {
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
    [anon_sym_SLASH] = ACTIONS(135),
    [aux_sym__repository_start_token1] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [aux_sym_add_token1] = ACTIONS(154),
    [aux_sym_arg_token1] = ACTIONS(154),
    [aux_sym_cmd_token1] = ACTIONS(154),
    [aux_sym_copy_token1] = ACTIONS(154),
    [aux_sym_entrypoint_token1] = ACTIONS(154),
    [aux_sym_env_token1] = ACTIONS(154),
    [aux_sym_expose_token1] = ACTIONS(154),
    [aux_sym_from_token1] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(154),
    [aux_sym_healthcheck_token1] = ACTIONS(154),
    [aux_sym_label_token1] = ACTIONS(154),
    [aux_sym_maintainer_token1] = ACTIONS(154),
    [aux_sym_onbuild_token1] = ACTIONS(154),
    [aux_sym_run_token1] = ACTIONS(154),
    [aux_sym_shell_token1] = ACTIONS(154),
    [aux_sym_stopsignal_token1] = ACTIONS(154),
    [aux_sym_user_token1] = ACTIONS(154),
    [aux_sym_volume_token1] = ACTIONS(154),
    [aux_sym_workdir_token1] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(160),
    [aux_sym__repository_start_token1] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym__space_no_newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [92] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [aux_sym_add_token1] = ACTIONS(283),
    [aux_sym_arg_token1] = ACTIONS(283),
    [aux_sym_cmd_token1] = ACTIONS(283),
    [aux_sym_copy_token1] = ACTIONS(283),
    [aux_sym_entrypoint_token1] = ACTIONS(283),
    [aux_sym_env_token1] = ACTIONS(283),
    [aux_sym_expose_token1] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [aux_sym_from_token1] = ACTIONS(283),
    [aux_sym_healthcheck_token1] = ACTIONS(283),
    [aux_sym_label_token1] = ACTIONS(283),
    [aux_sym_maintainer_token1] = ACTIONS(283),
    [aux_sym_onbuild_token1] = ACTIONS(283),
    [aux_sym_run_token1] = ACTIONS(283),
    [aux_sym_shell_token1] = ACTIONS(283),
    [aux_sym_stopsignal_token1] = ACTIONS(283),
    [aux_sym_user_token1] = ACTIONS(283),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [aux_sym_volume_token1] = ACTIONS(283),
    [aux_sym_workdir_token1] = ACTIONS(283),
    [aux_sym_path_token1] = ACTIONS(379),
    [aux_sym_path_token2] = ACTIONS(379),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(283),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [94] = {
    [aux_sym_from_layer_repeat1] = STATE(94),
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
    [anon_sym_DOLLAR] = ACTIONS(381),
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [aux_sym_from_layer_token3] = ACTIONS(381),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [aux_sym_add_token1] = ACTIONS(384),
    [aux_sym_arg_token1] = ACTIONS(384),
    [aux_sym_cmd_token1] = ACTIONS(384),
    [aux_sym_copy_token1] = ACTIONS(384),
    [aux_sym_entrypoint_token1] = ACTIONS(384),
    [aux_sym_env_token1] = ACTIONS(384),
    [aux_sym_expose_token1] = ACTIONS(384),
    [anon_sym_DQUOTE] = ACTIONS(384),
    [aux_sym_from_token1] = ACTIONS(384),
    [anon_sym_COLON] = ACTIONS(386),
    [aux_sym_healthcheck_token1] = ACTIONS(384),
    [aux_sym_label_token1] = ACTIONS(384),
    [aux_sym_maintainer_token1] = ACTIONS(384),
    [aux_sym_onbuild_token1] = ACTIONS(384),
    [aux_sym_run_token1] = ACTIONS(384),
    [aux_sym_shell_token1] = ACTIONS(384),
    [aux_sym_stopsignal_token1] = ACTIONS(384),
    [aux_sym_user_token1] = ACTIONS(384),
    [anon_sym_DOLLAR] = ACTIONS(384),
    [aux_sym_volume_token1] = ACTIONS(384),
    [aux_sym_workdir_token1] = ACTIONS(384),
    [aux_sym__port_part_token1] = ACTIONS(384),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(384),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [aux_sym_add_token1] = ACTIONS(388),
    [aux_sym_arg_token1] = ACTIONS(388),
    [aux_sym_cmd_token1] = ACTIONS(388),
    [aux_sym_copy_token1] = ACTIONS(388),
    [aux_sym_entrypoint_token1] = ACTIONS(388),
    [aux_sym_env_token1] = ACTIONS(388),
    [aux_sym_expose_token1] = ACTIONS(388),
    [anon_sym_DQUOTE] = ACTIONS(388),
    [aux_sym_from_token1] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(388),
    [aux_sym_healthcheck_token1] = ACTIONS(388),
    [aux_sym_label_token1] = ACTIONS(388),
    [aux_sym_maintainer_token1] = ACTIONS(388),
    [aux_sym_onbuild_token1] = ACTIONS(388),
    [aux_sym_run_token1] = ACTIONS(388),
    [aux_sym_shell_token1] = ACTIONS(388),
    [aux_sym_stopsignal_token1] = ACTIONS(388),
    [aux_sym_user_token1] = ACTIONS(388),
    [anon_sym_DOLLAR] = ACTIONS(388),
    [aux_sym_volume_token1] = ACTIONS(388),
    [aux_sym_workdir_token1] = ACTIONS(388),
    [aux_sym__port_part_token1] = ACTIONS(388),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(388),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [97] = {
    [aux_sym_from_layer_repeat4] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(390),
    [aux_sym_add_token1] = ACTIONS(392),
    [aux_sym_arg_token1] = ACTIONS(392),
    [aux_sym_cmd_token1] = ACTIONS(392),
    [aux_sym_copy_token1] = ACTIONS(392),
    [aux_sym_entrypoint_token1] = ACTIONS(392),
    [aux_sym_env_token1] = ACTIONS(392),
    [aux_sym_expose_token1] = ACTIONS(392),
    [aux_sym_from_token1] = ACTIONS(392),
    [aux_sym_healthcheck_token1] = ACTIONS(392),
    [aux_sym_label_token1] = ACTIONS(392),
    [aux_sym_maintainer_token1] = ACTIONS(392),
    [aux_sym_onbuild_token1] = ACTIONS(392),
    [aux_sym_run_token1] = ACTIONS(392),
    [aux_sym_shell_token1] = ACTIONS(392),
    [aux_sym_stopsignal_token1] = ACTIONS(392),
    [aux_sym_user_token1] = ACTIONS(392),
    [aux_sym_volume_token1] = ACTIONS(392),
    [aux_sym_workdir_token1] = ACTIONS(392),
    [aux_sym_from_layer_token4] = ACTIONS(394),
    [aux_sym_from_layer_token13] = ACTIONS(396),
    [aux_sym_from_layer_token16] = ACTIONS(396),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [98] = {
    [aux_sym_from_layer_repeat3] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(390),
    [aux_sym_add_token1] = ACTIONS(392),
    [aux_sym_arg_token1] = ACTIONS(392),
    [aux_sym_cmd_token1] = ACTIONS(392),
    [aux_sym_copy_token1] = ACTIONS(392),
    [aux_sym_entrypoint_token1] = ACTIONS(392),
    [aux_sym_env_token1] = ACTIONS(392),
    [aux_sym_expose_token1] = ACTIONS(392),
    [aux_sym_from_token1] = ACTIONS(392),
    [aux_sym_healthcheck_token1] = ACTIONS(392),
    [aux_sym_label_token1] = ACTIONS(392),
    [aux_sym_maintainer_token1] = ACTIONS(392),
    [aux_sym_onbuild_token1] = ACTIONS(392),
    [aux_sym_run_token1] = ACTIONS(392),
    [aux_sym_shell_token1] = ACTIONS(392),
    [aux_sym_stopsignal_token1] = ACTIONS(392),
    [aux_sym_user_token1] = ACTIONS(392),
    [aux_sym_volume_token1] = ACTIONS(392),
    [aux_sym_workdir_token1] = ACTIONS(392),
    [aux_sym_from_layer_token4] = ACTIONS(394),
    [aux_sym_from_layer_token9] = ACTIONS(398),
    [aux_sym_from_layer_token12] = ACTIONS(398),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym_add_token1] = ACTIONS(400),
    [aux_sym_arg_token1] = ACTIONS(400),
    [aux_sym_cmd_token1] = ACTIONS(400),
    [aux_sym_copy_token1] = ACTIONS(400),
    [aux_sym_entrypoint_token1] = ACTIONS(400),
    [aux_sym_env_token1] = ACTIONS(400),
    [aux_sym_expose_token1] = ACTIONS(400),
    [anon_sym_DQUOTE] = ACTIONS(400),
    [aux_sym_from_token1] = ACTIONS(400),
    [anon_sym_COLON] = ACTIONS(400),
    [aux_sym_healthcheck_token1] = ACTIONS(400),
    [aux_sym_label_token1] = ACTIONS(400),
    [aux_sym_maintainer_token1] = ACTIONS(400),
    [aux_sym_onbuild_token1] = ACTIONS(400),
    [aux_sym_run_token1] = ACTIONS(400),
    [aux_sym_shell_token1] = ACTIONS(400),
    [aux_sym_stopsignal_token1] = ACTIONS(400),
    [aux_sym_user_token1] = ACTIONS(400),
    [anon_sym_DOLLAR] = ACTIONS(400),
    [aux_sym_volume_token1] = ACTIONS(400),
    [aux_sym_workdir_token1] = ACTIONS(400),
    [aux_sym__port_part_token1] = ACTIONS(400),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(400),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [100] = {
    [aux_sym_path_repeat1] = STATE(100),
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
    [anon_sym_DOLLAR] = ACTIONS(402),
    [aux_sym_volume_token1] = ACTIONS(299),
    [aux_sym_workdir_token1] = ACTIONS(299),
    [aux_sym_path_token1] = ACTIONS(304),
    [aux_sym_path_token2] = ACTIONS(405),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [101] = {
    [aux_sym_path_repeat1] = STATE(100),
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
    [anon_sym_DOLLAR] = ACTIONS(408),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_path_token1] = ACTIONS(410),
    [aux_sym_path_token2] = ACTIONS(412),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [102] = {
    [aux_sym_from_layer_repeat2] = STATE(102),
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
    [aux_sym_from_layer_token4] = ACTIONS(182),
    [aux_sym_from_layer_token5] = ACTIONS(414),
    [aux_sym_from_layer_token8] = ACTIONS(414),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [103] = {
    [aux_sym_from_layer_repeat2] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(417),
    [aux_sym_add_token1] = ACTIONS(419),
    [aux_sym_arg_token1] = ACTIONS(419),
    [aux_sym_cmd_token1] = ACTIONS(419),
    [aux_sym_copy_token1] = ACTIONS(419),
    [aux_sym_entrypoint_token1] = ACTIONS(419),
    [aux_sym_env_token1] = ACTIONS(419),
    [aux_sym_expose_token1] = ACTIONS(419),
    [aux_sym_from_token1] = ACTIONS(419),
    [aux_sym_healthcheck_token1] = ACTIONS(419),
    [aux_sym_label_token1] = ACTIONS(419),
    [aux_sym_maintainer_token1] = ACTIONS(419),
    [aux_sym_onbuild_token1] = ACTIONS(419),
    [aux_sym_run_token1] = ACTIONS(419),
    [aux_sym_shell_token1] = ACTIONS(419),
    [aux_sym_stopsignal_token1] = ACTIONS(419),
    [aux_sym_user_token1] = ACTIONS(419),
    [aux_sym_volume_token1] = ACTIONS(419),
    [aux_sym_workdir_token1] = ACTIONS(419),
    [aux_sym_from_layer_token4] = ACTIONS(421),
    [aux_sym_from_layer_token5] = ACTIONS(423),
    [aux_sym_from_layer_token8] = ACTIONS(423),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [104] = {
    [aux_sym_from_layer_repeat1] = STATE(107),
    [ts_builtin_sym_end] = ACTIONS(425),
    [aux_sym_add_token1] = ACTIONS(427),
    [aux_sym_arg_token1] = ACTIONS(427),
    [aux_sym_cmd_token1] = ACTIONS(427),
    [aux_sym_copy_token1] = ACTIONS(427),
    [aux_sym_entrypoint_token1] = ACTIONS(427),
    [aux_sym_env_token1] = ACTIONS(427),
    [aux_sym_expose_token1] = ACTIONS(427),
    [aux_sym_from_token1] = ACTIONS(427),
    [aux_sym_healthcheck_token1] = ACTIONS(427),
    [aux_sym_label_token1] = ACTIONS(427),
    [aux_sym_maintainer_token1] = ACTIONS(427),
    [aux_sym_onbuild_token1] = ACTIONS(427),
    [aux_sym_run_token1] = ACTIONS(427),
    [aux_sym_shell_token1] = ACTIONS(427),
    [aux_sym_stopsignal_token1] = ACTIONS(427),
    [aux_sym_user_token1] = ACTIONS(427),
    [anon_sym_DOLLAR] = ACTIONS(429),
    [aux_sym_volume_token1] = ACTIONS(427),
    [aux_sym_workdir_token1] = ACTIONS(427),
    [aux_sym_from_layer_token3] = ACTIONS(429),
    [aux_sym_from_layer_token4] = ACTIONS(431),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(425),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [105] = {
    [aux_sym_path_repeat1] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(255),
    [aux_sym_add_token1] = ACTIONS(255),
    [aux_sym_arg_token1] = ACTIONS(255),
    [aux_sym_cmd_token1] = ACTIONS(255),
    [aux_sym_copy_token1] = ACTIONS(255),
    [aux_sym_entrypoint_token1] = ACTIONS(255),
    [aux_sym_env_token1] = ACTIONS(255),
    [aux_sym_expose_token1] = ACTIONS(255),
    [aux_sym_from_token1] = ACTIONS(255),
    [aux_sym_healthcheck_token1] = ACTIONS(255),
    [aux_sym_label_token1] = ACTIONS(255),
    [aux_sym_maintainer_token1] = ACTIONS(255),
    [aux_sym_onbuild_token1] = ACTIONS(255),
    [aux_sym_run_token1] = ACTIONS(255),
    [aux_sym_shell_token1] = ACTIONS(255),
    [aux_sym_stopsignal_token1] = ACTIONS(255),
    [aux_sym_user_token1] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(408),
    [aux_sym_volume_token1] = ACTIONS(255),
    [aux_sym_workdir_token1] = ACTIONS(255),
    [aux_sym_path_token1] = ACTIONS(433),
    [aux_sym_path_token2] = ACTIONS(412),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [106] = {
    [aux_sym_from_layer_repeat3] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(417),
    [aux_sym_add_token1] = ACTIONS(419),
    [aux_sym_arg_token1] = ACTIONS(419),
    [aux_sym_cmd_token1] = ACTIONS(419),
    [aux_sym_copy_token1] = ACTIONS(419),
    [aux_sym_entrypoint_token1] = ACTIONS(419),
    [aux_sym_env_token1] = ACTIONS(419),
    [aux_sym_expose_token1] = ACTIONS(419),
    [aux_sym_from_token1] = ACTIONS(419),
    [aux_sym_healthcheck_token1] = ACTIONS(419),
    [aux_sym_label_token1] = ACTIONS(419),
    [aux_sym_maintainer_token1] = ACTIONS(419),
    [aux_sym_onbuild_token1] = ACTIONS(419),
    [aux_sym_run_token1] = ACTIONS(419),
    [aux_sym_shell_token1] = ACTIONS(419),
    [aux_sym_stopsignal_token1] = ACTIONS(419),
    [aux_sym_user_token1] = ACTIONS(419),
    [aux_sym_volume_token1] = ACTIONS(419),
    [aux_sym_workdir_token1] = ACTIONS(419),
    [aux_sym_from_layer_token4] = ACTIONS(421),
    [aux_sym_from_layer_token9] = ACTIONS(398),
    [aux_sym_from_layer_token12] = ACTIONS(398),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [107] = {
    [aux_sym_from_layer_repeat1] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(390),
    [aux_sym_add_token1] = ACTIONS(392),
    [aux_sym_arg_token1] = ACTIONS(392),
    [aux_sym_cmd_token1] = ACTIONS(392),
    [aux_sym_copy_token1] = ACTIONS(392),
    [aux_sym_entrypoint_token1] = ACTIONS(392),
    [aux_sym_env_token1] = ACTIONS(392),
    [aux_sym_expose_token1] = ACTIONS(392),
    [aux_sym_from_token1] = ACTIONS(392),
    [aux_sym_healthcheck_token1] = ACTIONS(392),
    [aux_sym_label_token1] = ACTIONS(392),
    [aux_sym_maintainer_token1] = ACTIONS(392),
    [aux_sym_onbuild_token1] = ACTIONS(392),
    [aux_sym_run_token1] = ACTIONS(392),
    [aux_sym_shell_token1] = ACTIONS(392),
    [aux_sym_stopsignal_token1] = ACTIONS(392),
    [aux_sym_user_token1] = ACTIONS(392),
    [anon_sym_DOLLAR] = ACTIONS(429),
    [aux_sym_volume_token1] = ACTIONS(392),
    [aux_sym_workdir_token1] = ACTIONS(392),
    [aux_sym_from_layer_token3] = ACTIONS(429),
    [aux_sym_from_layer_token4] = ACTIONS(394),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [108] = {
    [aux_sym_from_layer_repeat3] = STATE(108),
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
    [aux_sym_from_layer_token4] = ACTIONS(139),
    [aux_sym_from_layer_token9] = ACTIONS(435),
    [aux_sym_from_layer_token12] = ACTIONS(435),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [109] = {
    [aux_sym_from_layer_repeat4] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(417),
    [aux_sym_add_token1] = ACTIONS(419),
    [aux_sym_arg_token1] = ACTIONS(419),
    [aux_sym_cmd_token1] = ACTIONS(419),
    [aux_sym_copy_token1] = ACTIONS(419),
    [aux_sym_entrypoint_token1] = ACTIONS(419),
    [aux_sym_env_token1] = ACTIONS(419),
    [aux_sym_expose_token1] = ACTIONS(419),
    [aux_sym_from_token1] = ACTIONS(419),
    [aux_sym_healthcheck_token1] = ACTIONS(419),
    [aux_sym_label_token1] = ACTIONS(419),
    [aux_sym_maintainer_token1] = ACTIONS(419),
    [aux_sym_onbuild_token1] = ACTIONS(419),
    [aux_sym_run_token1] = ACTIONS(419),
    [aux_sym_shell_token1] = ACTIONS(419),
    [aux_sym_stopsignal_token1] = ACTIONS(419),
    [aux_sym_user_token1] = ACTIONS(419),
    [aux_sym_volume_token1] = ACTIONS(419),
    [aux_sym_workdir_token1] = ACTIONS(419),
    [aux_sym_from_layer_token4] = ACTIONS(421),
    [aux_sym_from_layer_token13] = ACTIONS(396),
    [aux_sym_from_layer_token16] = ACTIONS(396),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [110] = {
    [aux_sym_from_layer_repeat2] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(390),
    [aux_sym_add_token1] = ACTIONS(392),
    [aux_sym_arg_token1] = ACTIONS(392),
    [aux_sym_cmd_token1] = ACTIONS(392),
    [aux_sym_copy_token1] = ACTIONS(392),
    [aux_sym_entrypoint_token1] = ACTIONS(392),
    [aux_sym_env_token1] = ACTIONS(392),
    [aux_sym_expose_token1] = ACTIONS(392),
    [aux_sym_from_token1] = ACTIONS(392),
    [aux_sym_healthcheck_token1] = ACTIONS(392),
    [aux_sym_label_token1] = ACTIONS(392),
    [aux_sym_maintainer_token1] = ACTIONS(392),
    [aux_sym_onbuild_token1] = ACTIONS(392),
    [aux_sym_run_token1] = ACTIONS(392),
    [aux_sym_shell_token1] = ACTIONS(392),
    [aux_sym_stopsignal_token1] = ACTIONS(392),
    [aux_sym_user_token1] = ACTIONS(392),
    [aux_sym_volume_token1] = ACTIONS(392),
    [aux_sym_workdir_token1] = ACTIONS(392),
    [aux_sym_from_layer_token4] = ACTIONS(394),
    [aux_sym_from_layer_token5] = ACTIONS(423),
    [aux_sym_from_layer_token8] = ACTIONS(423),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(390),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [111] = {
    [aux_sym_from_layer_repeat4] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(162),
    [aux_sym_add_token1] = ACTIONS(164),
    [aux_sym_arg_token1] = ACTIONS(164),
    [aux_sym_cmd_token1] = ACTIONS(164),
    [aux_sym_copy_token1] = ACTIONS(164),
    [aux_sym_entrypoint_token1] = ACTIONS(164),
    [aux_sym_env_token1] = ACTIONS(164),
    [aux_sym_expose_token1] = ACTIONS(164),
    [aux_sym_from_token1] = ACTIONS(164),
    [aux_sym_healthcheck_token1] = ACTIONS(164),
    [aux_sym_label_token1] = ACTIONS(164),
    [aux_sym_maintainer_token1] = ACTIONS(164),
    [aux_sym_onbuild_token1] = ACTIONS(164),
    [aux_sym_run_token1] = ACTIONS(164),
    [aux_sym_shell_token1] = ACTIONS(164),
    [aux_sym_stopsignal_token1] = ACTIONS(164),
    [aux_sym_user_token1] = ACTIONS(164),
    [aux_sym_volume_token1] = ACTIONS(164),
    [aux_sym_workdir_token1] = ACTIONS(164),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [aux_sym_from_layer_token13] = ACTIONS(438),
    [aux_sym_from_layer_token16] = ACTIONS(438),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(162),
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
    [ts_builtin_sym_end] = ACTIONS(355),
    [aux_sym_add_token1] = ACTIONS(355),
    [aux_sym_arg_token1] = ACTIONS(355),
    [aux_sym_cmd_token1] = ACTIONS(355),
    [aux_sym_copy_token1] = ACTIONS(355),
    [aux_sym_entrypoint_token1] = ACTIONS(355),
    [aux_sym_env_token1] = ACTIONS(355),
    [aux_sym_expose_token1] = ACTIONS(355),
    [aux_sym_from_token1] = ACTIONS(355),
    [anon_sym_COLON] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(355),
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
    [sym__space_no_newline] = ACTIONS(357),
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
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [aux_sym_from_layer_token3] = ACTIONS(199),
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [115] = {
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
    [aux_sym_from_layer_token4] = ACTIONS(189),
    [aux_sym_from_layer_token9] = ACTIONS(187),
    [aux_sym_from_layer_token12] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
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
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [aux_sym_from_layer_token5] = ACTIONS(203),
    [aux_sym_from_layer_token8] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [117] = {
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
    [aux_sym_from_layer_token3] = ACTIONS(195),
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_add_token1] = ACTIONS(199),
    [aux_sym_arg_token1] = ACTIONS(199),
    [aux_sym_cmd_token1] = ACTIONS(199),
    [aux_sym_copy_token1] = ACTIONS(199),
    [aux_sym_entrypoint_token1] = ACTIONS(199),
    [aux_sym_env_token1] = ACTIONS(199),
    [aux_sym_expose_token1] = ACTIONS(199),
    [aux_sym_from_token1] = ACTIONS(199),
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
    [aux_sym_path_token1] = ACTIONS(201),
    [aux_sym_path_token2] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [119] = {
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
    [anon_sym_DOLLAR] = ACTIONS(299),
    [aux_sym_volume_token1] = ACTIONS(299),
    [aux_sym_workdir_token1] = ACTIONS(299),
    [aux_sym_path_token1] = ACTIONS(304),
    [aux_sym_path_token2] = ACTIONS(304),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [120] = {
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
  [121] = {
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
    [aux_sym_from_layer_token3] = ACTIONS(207),
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [122] = {
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
  [123] = {
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
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [aux_sym_add_token1] = ACTIONS(449),
    [aux_sym_arg_token1] = ACTIONS(449),
    [aux_sym_cmd_token1] = ACTIONS(449),
    [aux_sym_copy_token1] = ACTIONS(449),
    [aux_sym_entrypoint_token1] = ACTIONS(449),
    [aux_sym_env_token1] = ACTIONS(449),
    [aux_sym_expose_token1] = ACTIONS(449),
    [aux_sym_from_token1] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(451),
    [anon_sym_AT] = ACTIONS(453),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(449),
    [sym__space_no_newline] = ACTIONS(455),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [125] = {
    [aux_sym__labels] = STATE(131),
    [sym_label_pair] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(457),
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
    [sym_label_key] = ACTIONS(459),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [aux_sym_add_token1] = ACTIONS(154),
    [aux_sym_arg_token1] = ACTIONS(154),
    [aux_sym_cmd_token1] = ACTIONS(154),
    [aux_sym_copy_token1] = ACTIONS(154),
    [aux_sym_entrypoint_token1] = ACTIONS(154),
    [aux_sym_env_token1] = ACTIONS(154),
    [aux_sym_expose_token1] = ACTIONS(154),
    [aux_sym_from_token1] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(154),
    [aux_sym_healthcheck_token1] = ACTIONS(154),
    [aux_sym_label_token1] = ACTIONS(154),
    [aux_sym_maintainer_token1] = ACTIONS(154),
    [aux_sym_onbuild_token1] = ACTIONS(154),
    [aux_sym_run_token1] = ACTIONS(154),
    [aux_sym_shell_token1] = ACTIONS(154),
    [aux_sym_stopsignal_token1] = ACTIONS(154),
    [aux_sym_user_token1] = ACTIONS(154),
    [aux_sym_volume_token1] = ACTIONS(154),
    [aux_sym_workdir_token1] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(154),
    [sym__space_no_newline] = ACTIONS(156),
    [sym_comment] = ACTIONS(5),
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
    [aux_sym_from_layer_token3] = ACTIONS(173),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [128] = {
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
    [aux_sym_from_layer_token4] = ACTIONS(193),
    [aux_sym_from_layer_token13] = ACTIONS(191),
    [aux_sym_from_layer_token16] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [129] = {
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
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [aux_sym_add_token1] = ACTIONS(335),
    [aux_sym_arg_token1] = ACTIONS(335),
    [aux_sym_cmd_token1] = ACTIONS(335),
    [aux_sym_copy_token1] = ACTIONS(335),
    [aux_sym_entrypoint_token1] = ACTIONS(335),
    [aux_sym_env_token1] = ACTIONS(335),
    [aux_sym_expose_token1] = ACTIONS(335),
    [aux_sym_from_token1] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(335),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(335),
    [sym__space_no_newline] = ACTIONS(337),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [131] = {
    [aux_sym__labels] = STATE(131),
    [sym_label_pair] = STATE(131),
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
    [sym_label_key] = ACTIONS(465),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(463),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [132] = {
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
  [133] = {
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
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(484),
    [aux_sym_add_token1] = ACTIONS(484),
    [aux_sym_arg_token1] = ACTIONS(484),
    [aux_sym_cmd_token1] = ACTIONS(484),
    [aux_sym_copy_token1] = ACTIONS(484),
    [aux_sym_entrypoint_token1] = ACTIONS(484),
    [aux_sym_env_token1] = ACTIONS(484),
    [aux_sym_expose_token1] = ACTIONS(484),
    [anon_sym_DQUOTE] = ACTIONS(484),
    [aux_sym_from_token1] = ACTIONS(484),
    [aux_sym_healthcheck_token1] = ACTIONS(484),
    [aux_sym_label_token1] = ACTIONS(484),
    [aux_sym_maintainer_token1] = ACTIONS(484),
    [aux_sym_onbuild_token1] = ACTIONS(484),
    [aux_sym_run_token1] = ACTIONS(484),
    [aux_sym_shell_token1] = ACTIONS(484),
    [aux_sym_stopsignal_token1] = ACTIONS(484),
    [aux_sym_user_token1] = ACTIONS(484),
    [anon_sym_DOLLAR] = ACTIONS(484),
    [aux_sym_volume_token1] = ACTIONS(484),
    [aux_sym_workdir_token1] = ACTIONS(484),
    [aux_sym__port_part_token1] = ACTIONS(484),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(484),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [135] = {
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
    [anon_sym_EQ2] = ACTIONS(488),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(486),
    [sym__space_no_newline] = ACTIONS(490),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
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
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(492),
    [aux_sym_add_token1] = ACTIONS(492),
    [aux_sym_arg_token1] = ACTIONS(492),
    [aux_sym_cmd_token1] = ACTIONS(492),
    [aux_sym_copy_token1] = ACTIONS(492),
    [aux_sym_entrypoint_token1] = ACTIONS(492),
    [aux_sym_env_token1] = ACTIONS(492),
    [aux_sym_expose_token1] = ACTIONS(492),
    [aux_sym_from_token1] = ACTIONS(492),
    [anon_sym_AT] = ACTIONS(494),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(492),
    [sym__space_no_newline] = ACTIONS(496),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [138] = {
    [aux_sym__env_pairs_repeat1] = STATE(139),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(486),
    [sym__space_no_newline] = ACTIONS(498),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [aux_sym__env_pairs_repeat1] = STATE(140),
    [ts_builtin_sym_end] = ACTIONS(500),
    [aux_sym_add_token1] = ACTIONS(500),
    [aux_sym_arg_token1] = ACTIONS(500),
    [aux_sym_cmd_token1] = ACTIONS(500),
    [aux_sym_copy_token1] = ACTIONS(500),
    [aux_sym_entrypoint_token1] = ACTIONS(500),
    [aux_sym_env_token1] = ACTIONS(500),
    [aux_sym_expose_token1] = ACTIONS(500),
    [aux_sym_from_token1] = ACTIONS(500),
    [aux_sym_healthcheck_token1] = ACTIONS(500),
    [aux_sym_label_token1] = ACTIONS(500),
    [aux_sym_maintainer_token1] = ACTIONS(500),
    [aux_sym_onbuild_token1] = ACTIONS(500),
    [aux_sym_run_token1] = ACTIONS(500),
    [aux_sym_shell_token1] = ACTIONS(500),
    [aux_sym_stopsignal_token1] = ACTIONS(500),
    [aux_sym_user_token1] = ACTIONS(500),
    [aux_sym_volume_token1] = ACTIONS(500),
    [aux_sym_workdir_token1] = ACTIONS(500),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(500),
    [sym__space_no_newline] = ACTIONS(498),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [140] = {
    [aux_sym__env_pairs_repeat1] = STATE(140),
    [ts_builtin_sym_end] = ACTIONS(502),
    [aux_sym_add_token1] = ACTIONS(502),
    [aux_sym_arg_token1] = ACTIONS(502),
    [aux_sym_cmd_token1] = ACTIONS(502),
    [aux_sym_copy_token1] = ACTIONS(502),
    [aux_sym_entrypoint_token1] = ACTIONS(502),
    [aux_sym_env_token1] = ACTIONS(502),
    [aux_sym_expose_token1] = ACTIONS(502),
    [aux_sym_from_token1] = ACTIONS(502),
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
    [sym__space_no_newline] = ACTIONS(504),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
    [aux_sym__anything] = STATE(143),
    [ts_builtin_sym_end] = ACTIONS(507),
    [aux_sym_add_token1] = ACTIONS(507),
    [aux_sym_arg_token1] = ACTIONS(507),
    [aux_sym_cmd_token1] = ACTIONS(507),
    [aux_sym_copy_token1] = ACTIONS(507),
    [aux_sym_entrypoint_token1] = ACTIONS(507),
    [aux_sym_env_token1] = ACTIONS(507),
    [aux_sym_expose_token1] = ACTIONS(507),
    [aux_sym_from_token1] = ACTIONS(507),
    [aux_sym_healthcheck_token1] = ACTIONS(507),
    [aux_sym_label_token1] = ACTIONS(507),
    [aux_sym_maintainer_token1] = ACTIONS(507),
    [aux_sym_onbuild_token1] = ACTIONS(507),
    [aux_sym_run_token1] = ACTIONS(507),
    [aux_sym_shell_token1] = ACTIONS(507),
    [aux_sym_stopsignal_token1] = ACTIONS(507),
    [aux_sym_user_token1] = ACTIONS(507),
    [aux_sym_volume_token1] = ACTIONS(507),
    [aux_sym_workdir_token1] = ACTIONS(507),
    [aux_sym__anything_token1] = ACTIONS(509),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(507),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [aux_sym_add_token1] = ACTIONS(511),
    [aux_sym_arg_token1] = ACTIONS(511),
    [aux_sym_cmd_token1] = ACTIONS(511),
    [aux_sym_copy_token1] = ACTIONS(511),
    [aux_sym_entrypoint_token1] = ACTIONS(511),
    [aux_sym_env_token1] = ACTIONS(511),
    [aux_sym_expose_token1] = ACTIONS(511),
    [aux_sym_from_token1] = ACTIONS(511),
    [anon_sym_AT] = ACTIONS(511),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(511),
    [sym__space_no_newline] = ACTIONS(513),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
    [aux_sym__anything] = STATE(143),
    [ts_builtin_sym_end] = ACTIONS(515),
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
    [aux_sym__anything_token1] = ACTIONS(517),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(515),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
    [aux_sym__anything] = STATE(143),
    [ts_builtin_sym_end] = ACTIONS(520),
    [aux_sym_add_token1] = ACTIONS(520),
    [aux_sym_arg_token1] = ACTIONS(520),
    [aux_sym_cmd_token1] = ACTIONS(520),
    [aux_sym_copy_token1] = ACTIONS(520),
    [aux_sym_entrypoint_token1] = ACTIONS(520),
    [aux_sym_env_token1] = ACTIONS(520),
    [aux_sym_expose_token1] = ACTIONS(520),
    [aux_sym_from_token1] = ACTIONS(520),
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
    [aux_sym__anything_token1] = ACTIONS(509),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(520),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [145] = {
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
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(522),
    [aux_sym_add_token1] = ACTIONS(522),
    [aux_sym_arg_token1] = ACTIONS(522),
    [aux_sym_cmd_token1] = ACTIONS(522),
    [aux_sym_copy_token1] = ACTIONS(522),
    [aux_sym_entrypoint_token1] = ACTIONS(522),
    [aux_sym_env_token1] = ACTIONS(522),
    [aux_sym_expose_token1] = ACTIONS(522),
    [aux_sym_from_token1] = ACTIONS(522),
    [anon_sym_AT] = ACTIONS(524),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(522),
    [sym__space_no_newline] = ACTIONS(526),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(528),
    [aux_sym_add_token1] = ACTIONS(528),
    [aux_sym_arg_token1] = ACTIONS(528),
    [aux_sym_cmd_token1] = ACTIONS(528),
    [aux_sym_copy_token1] = ACTIONS(528),
    [aux_sym_entrypoint_token1] = ACTIONS(528),
    [aux_sym_env_token1] = ACTIONS(528),
    [aux_sym_expose_token1] = ACTIONS(528),
    [aux_sym_from_token1] = ACTIONS(528),
    [anon_sym_AT] = ACTIONS(528),
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
  [148] = {
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
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [aux_sym_add_token1] = ACTIONS(449),
    [aux_sym_arg_token1] = ACTIONS(449),
    [aux_sym_cmd_token1] = ACTIONS(449),
    [aux_sym_copy_token1] = ACTIONS(449),
    [aux_sym_entrypoint_token1] = ACTIONS(449),
    [aux_sym_env_token1] = ACTIONS(449),
    [aux_sym_expose_token1] = ACTIONS(449),
    [aux_sym_from_token1] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(453),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(449),
    [sym__space_no_newline] = ACTIONS(455),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [aux_sym__anything] = STATE(150),
    [ts_builtin_sym_end] = ACTIONS(515),
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
    [aux_sym__anything_token1] = ACTIONS(532),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(515),
    [sym_comment] = ACTIONS(515),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
    [aux_sym__anything] = STATE(150),
    [ts_builtin_sym_end] = ACTIONS(535),
    [aux_sym_add_token1] = ACTIONS(535),
    [aux_sym_arg_token1] = ACTIONS(535),
    [aux_sym_cmd_token1] = ACTIONS(535),
    [aux_sym_copy_token1] = ACTIONS(535),
    [aux_sym_entrypoint_token1] = ACTIONS(535),
    [aux_sym_env_token1] = ACTIONS(535),
    [aux_sym_expose_token1] = ACTIONS(535),
    [aux_sym_from_token1] = ACTIONS(535),
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
    [aux_sym__anything_token1] = ACTIONS(537),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(535),
    [sym_comment] = ACTIONS(539),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(541),
    [sym__space_no_newline] = ACTIONS(543),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [aux_sym_add_token1] = ACTIONS(545),
    [aux_sym_arg_token1] = ACTIONS(545),
    [aux_sym_cmd_token1] = ACTIONS(545),
    [aux_sym_copy_token1] = ACTIONS(545),
    [aux_sym_entrypoint_token1] = ACTIONS(545),
    [aux_sym_env_token1] = ACTIONS(545),
    [aux_sym_expose_token1] = ACTIONS(545),
    [aux_sym_from_token1] = ACTIONS(545),
    [anon_sym_COLON] = ACTIONS(547),
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
  [154] = {
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
    [sym__space_no_newline] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(553),
    [aux_sym_add_token1] = ACTIONS(553),
    [aux_sym_arg_token1] = ACTIONS(553),
    [aux_sym_cmd_token1] = ACTIONS(553),
    [aux_sym_copy_token1] = ACTIONS(553),
    [aux_sym_entrypoint_token1] = ACTIONS(553),
    [aux_sym_env_token1] = ACTIONS(553),
    [aux_sym_expose_token1] = ACTIONS(553),
    [aux_sym_from_token1] = ACTIONS(553),
    [anon_sym_COLON] = ACTIONS(553),
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
  [156] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(522),
    [sym__space_no_newline] = ACTIONS(526),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(555),
    [sym__space_no_newline] = ACTIONS(557),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [159] = {
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
    [sym_label_key] = ACTIONS(561),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(559),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [160] = {
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
    [aux_sym__anything_token1] = ACTIONS(565),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(563),
    [sym_comment] = ACTIONS(563),
    [sym_line_continuation] = ACTIONS(5),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(323),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym__space_no_newline] = ACTIONS(325),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [162] = {
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
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(571),
    [aux_sym_add_token1] = ACTIONS(571),
    [aux_sym_arg_token1] = ACTIONS(571),
    [anon_sym_EQ] = ACTIONS(573),
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
  [164] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(449),
    [sym__space_no_newline] = ACTIONS(455),
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
    [aux_sym__anything_token1] = ACTIONS(565),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(563),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [166] = {
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
    [sym__space_no_newline] = ACTIONS(577),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [167] = {
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
    [sym__space_no_newline] = ACTIONS(581),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [aux_sym_add_token1] = ACTIONS(545),
    [aux_sym_arg_token1] = ACTIONS(545),
    [aux_sym_cmd_token1] = ACTIONS(545),
    [aux_sym_copy_token1] = ACTIONS(545),
    [aux_sym_entrypoint_token1] = ACTIONS(545),
    [aux_sym_env_token1] = ACTIONS(545),
    [aux_sym_expose_token1] = ACTIONS(545),
    [aux_sym_from_token1] = ACTIONS(545),
    [anon_sym_COLON] = ACTIONS(583),
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
  [169] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(492),
    [sym__space_no_newline] = ACTIONS(496),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [170] = {
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
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [aux_sym_add_token1] = ACTIONS(502),
    [aux_sym_arg_token1] = ACTIONS(502),
    [aux_sym_cmd_token1] = ACTIONS(502),
    [aux_sym_copy_token1] = ACTIONS(502),
    [aux_sym_entrypoint_token1] = ACTIONS(502),
    [aux_sym_env_token1] = ACTIONS(502),
    [aux_sym_expose_token1] = ACTIONS(502),
    [aux_sym_from_token1] = ACTIONS(502),
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
    [sym__space_no_newline] = ACTIONS(585),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [172] = {
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
    [sym_label_key] = ACTIONS(589),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(587),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(591),
    [aux_sym_add_token1] = ACTIONS(591),
    [aux_sym_arg_token1] = ACTIONS(591),
    [aux_sym_cmd_token1] = ACTIONS(591),
    [aux_sym_copy_token1] = ACTIONS(591),
    [aux_sym_entrypoint_token1] = ACTIONS(591),
    [aux_sym_env_token1] = ACTIONS(591),
    [aux_sym_expose_token1] = ACTIONS(591),
    [aux_sym_from_token1] = ACTIONS(591),
    [anon_sym_COLON] = ACTIONS(591),
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
  [174] = {
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
    [sym_label_key] = ACTIONS(595),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(593),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [175] = {
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
  [176] = {
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
  [177] = {
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
  [178] = {
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
  [179] = {
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
  [180] = {
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
  [181] = {
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
  [182] = {
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
  [183] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(522),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [184] = {
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
  [185] = {
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
  [186] = {
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
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(265),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(265),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [188] = {
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
  [189] = {
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
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [aux_sym_add_token1] = ACTIONS(417),
    [aux_sym_arg_token1] = ACTIONS(417),
    [aux_sym_cmd_token1] = ACTIONS(417),
    [aux_sym_copy_token1] = ACTIONS(417),
    [aux_sym_entrypoint_token1] = ACTIONS(417),
    [aux_sym_env_token1] = ACTIONS(417),
    [aux_sym_expose_token1] = ACTIONS(417),
    [aux_sym_from_token1] = ACTIONS(417),
    [aux_sym_healthcheck_token1] = ACTIONS(417),
    [aux_sym_label_token1] = ACTIONS(417),
    [aux_sym_maintainer_token1] = ACTIONS(417),
    [aux_sym_onbuild_token1] = ACTIONS(417),
    [aux_sym_run_token1] = ACTIONS(417),
    [aux_sym_shell_token1] = ACTIONS(417),
    [aux_sym_stopsignal_token1] = ACTIONS(417),
    [aux_sym_user_token1] = ACTIONS(417),
    [aux_sym_volume_token1] = ACTIONS(417),
    [aux_sym_workdir_token1] = ACTIONS(417),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(417),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [191] = {
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
  [192] = {
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
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(361),
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
    [aux_sym_volume_token1] = ACTIONS(361),
    [aux_sym_workdir_token1] = ACTIONS(361),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [194] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [195] = {
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
  [196] = {
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
  [197] = {
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
  [198] = {
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
  [199] = {
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
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(365),
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
    [aux_sym_volume_token1] = ACTIONS(365),
    [aux_sym_workdir_token1] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [201] = {
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
  [202] = {
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
  [203] = {
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
  [204] = {
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
  [205] = {
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
  [206] = {
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
  [207] = {
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
  [208] = {
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
  [209] = {
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
  [210] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(492),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [211] = {
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
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(390),
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
    [aux_sym_volume_token1] = ACTIONS(390),
    [aux_sym_workdir_token1] = ACTIONS(390),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(390),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [aux_sym_add_token1] = ACTIONS(345),
    [aux_sym_arg_token1] = ACTIONS(345),
    [aux_sym_cmd_token1] = ACTIONS(345),
    [aux_sym_copy_token1] = ACTIONS(345),
    [aux_sym_entrypoint_token1] = ACTIONS(345),
    [aux_sym_env_token1] = ACTIONS(345),
    [aux_sym_expose_token1] = ACTIONS(345),
    [aux_sym_from_token1] = ACTIONS(345),
    [aux_sym_healthcheck_token1] = ACTIONS(345),
    [aux_sym_label_token1] = ACTIONS(345),
    [aux_sym_maintainer_token1] = ACTIONS(345),
    [aux_sym_onbuild_token1] = ACTIONS(345),
    [aux_sym_run_token1] = ACTIONS(345),
    [aux_sym_shell_token1] = ACTIONS(345),
    [aux_sym_stopsignal_token1] = ACTIONS(345),
    [aux_sym_user_token1] = ACTIONS(345),
    [aux_sym_volume_token1] = ACTIONS(345),
    [aux_sym_workdir_token1] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(345),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [214] = {
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
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_add_token1] = ACTIONS(309),
    [aux_sym_arg_token1] = ACTIONS(309),
    [aux_sym_cmd_token1] = ACTIONS(309),
    [aux_sym_copy_token1] = ACTIONS(309),
    [aux_sym_entrypoint_token1] = ACTIONS(309),
    [aux_sym_env_token1] = ACTIONS(309),
    [aux_sym_expose_token1] = ACTIONS(309),
    [aux_sym_from_token1] = ACTIONS(309),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [216] = {
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
  [217] = {
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
  [218] = {
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
  [219] = {
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
  [220] = {
    [sym__hc_interval] = STATE(226),
    [sym__hc_timeout] = STATE(226),
    [sym__hc_start_period] = STATE(226),
    [sym__hc_retries] = STATE(226),
    [sym__hc_options] = STATE(226),
    [sym__hc_command] = STATE(178),
    [aux_sym_healthcheck_repeat1] = STATE(226),
    [sym_hc_none] = ACTIONS(653),
    [anon_sym_DASH_DASHinterval] = ACTIONS(655),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(657),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(659),
    [anon_sym_DASH_DASHretries] = ACTIONS(661),
    [aux_sym__hc_command_token1] = ACTIONS(663),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [221] = {
    [sym_repository] = STATE(253),
    [sym__repository_start] = STATE(236),
    [sym_image] = STATE(112),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(665),
    [anon_sym_DOLLAR] = ACTIONS(667),
    [aux_sym_from_layer_token1] = ACTIONS(669),
    [aux_sym_from_layer_token2] = ACTIONS(667),
    [aux_sym_from_layer_token5] = ACTIONS(671),
    [aux_sym_from_layer_token7] = ACTIONS(671),
    [aux_sym_from_layer_token9] = ACTIONS(673),
    [aux_sym_from_layer_token11] = ACTIONS(673),
    [aux_sym_from_layer_token13] = ACTIONS(675),
    [aux_sym_from_layer_token15] = ACTIONS(675),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [222] = {
    [sym_repository] = STATE(237),
    [sym__repository_start] = STATE(236),
    [sym_image] = STATE(132),
    [anon_sym_DOLLAR] = ACTIONS(667),
    [aux_sym_from_layer_token1] = ACTIONS(669),
    [aux_sym_from_layer_token2] = ACTIONS(667),
    [aux_sym_from_layer_token5] = ACTIONS(671),
    [aux_sym_from_layer_token7] = ACTIONS(671),
    [aux_sym_from_layer_token9] = ACTIONS(673),
    [aux_sym_from_layer_token11] = ACTIONS(673),
    [aux_sym_from_layer_token13] = ACTIONS(675),
    [aux_sym_from_layer_token15] = ACTIONS(675),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [223] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym_mapped_no_lhs] = STATE(186),
    [sym__port] = STATE(95),
    [sym_port] = STATE(95),
    [sym_port_range] = STATE(95),
    [sym__port_part] = STATE(74),
    [aux_sym_expose_repeat1] = STATE(5),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(677),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [224] = {
    [sym__chown] = STATE(225),
    [sym__from_layer] = STATE(225),
    [sym_path] = STATE(66),
    [aux_sym__paths] = STATE(44),
    [aux_sym_copy_repeat1] = STATE(225),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(679),
    [aux_sym__from_layer_token1] = ACTIONS(681),
    [aux_sym_path_token1] = ACTIONS(271),
    [aux_sym_path_token2] = ACTIONS(273),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(683),
  },
  [225] = {
    [sym__chown] = STATE(238),
    [sym__from_layer] = STATE(238),
    [sym_path] = STATE(66),
    [aux_sym__paths] = STATE(64),
    [aux_sym_copy_repeat1] = STATE(238),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(679),
    [aux_sym__from_layer_token1] = ACTIONS(681),
    [aux_sym_path_token1] = ACTIONS(271),
    [aux_sym_path_token2] = ACTIONS(273),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(685),
  },
  [226] = {
    [sym__hc_interval] = STATE(228),
    [sym__hc_timeout] = STATE(228),
    [sym__hc_start_period] = STATE(228),
    [sym__hc_retries] = STATE(228),
    [sym__hc_options] = STATE(228),
    [sym__hc_command] = STATE(204),
    [aux_sym_healthcheck_repeat1] = STATE(228),
    [anon_sym_DASH_DASHinterval] = ACTIONS(655),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(657),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(659),
    [anon_sym_DASH_DASHretries] = ACTIONS(661),
    [aux_sym__hc_command_token1] = ACTIONS(663),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [227] = {
    [sym__repository_continued] = STATE(227),
    [aux_sym_repository_repeat1] = STATE(227),
    [anon_sym_DOLLAR] = ACTIONS(687),
    [aux_sym_from_layer_token1] = ACTIONS(690),
    [aux_sym_from_layer_token2] = ACTIONS(687),
    [aux_sym_from_layer_token5] = ACTIONS(693),
    [aux_sym_from_layer_token7] = ACTIONS(693),
    [aux_sym_from_layer_token9] = ACTIONS(696),
    [aux_sym_from_layer_token11] = ACTIONS(696),
    [aux_sym_from_layer_token13] = ACTIONS(699),
    [aux_sym_from_layer_token15] = ACTIONS(699),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [sym__hc_interval] = STATE(228),
    [sym__hc_timeout] = STATE(228),
    [sym__hc_start_period] = STATE(228),
    [sym__hc_retries] = STATE(228),
    [sym__hc_options] = STATE(228),
    [aux_sym_healthcheck_repeat1] = STATE(228),
    [anon_sym_DASH_DASHinterval] = ACTIONS(702),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(705),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(708),
    [anon_sym_DASH_DASHretries] = ACTIONS(711),
    [aux_sym__hc_command_token1] = ACTIONS(714),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [229] = {
    [sym_digest] = STATE(169),
    [anon_sym_sha256_COLON] = ACTIONS(716),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_from_layer_token1] = ACTIONS(720),
    [aux_sym_from_layer_token2] = ACTIONS(718),
    [aux_sym_from_layer_token5] = ACTIONS(722),
    [aux_sym_from_layer_token7] = ACTIONS(722),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(726),
    [aux_sym_from_layer_token15] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [230] = {
    [sym_digest] = STATE(164),
    [anon_sym_sha256_COLON] = ACTIONS(728),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_from_layer_token1] = ACTIONS(720),
    [aux_sym_from_layer_token2] = ACTIONS(718),
    [aux_sym_from_layer_token5] = ACTIONS(722),
    [aux_sym_from_layer_token7] = ACTIONS(722),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(726),
    [aux_sym_from_layer_token15] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [231] = {
    [sym_digest] = STATE(156),
    [anon_sym_sha256_COLON] = ACTIONS(730),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_from_layer_token1] = ACTIONS(720),
    [aux_sym_from_layer_token2] = ACTIONS(718),
    [aux_sym_from_layer_token5] = ACTIONS(722),
    [aux_sym_from_layer_token7] = ACTIONS(722),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(726),
    [aux_sym_from_layer_token15] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [sym_digest] = STATE(154),
    [anon_sym_sha256_COLON] = ACTIONS(732),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_from_layer_token1] = ACTIONS(720),
    [aux_sym_from_layer_token2] = ACTIONS(718),
    [aux_sym_from_layer_token5] = ACTIONS(722),
    [aux_sym_from_layer_token7] = ACTIONS(722),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(726),
    [aux_sym_from_layer_token15] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [sym_digest] = STATE(166),
    [anon_sym_sha256_COLON] = ACTIONS(734),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_from_layer_token1] = ACTIONS(720),
    [aux_sym_from_layer_token2] = ACTIONS(718),
    [aux_sym_from_layer_token5] = ACTIONS(722),
    [aux_sym_from_layer_token7] = ACTIONS(722),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(726),
    [aux_sym_from_layer_token15] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [234] = {
    [sym__repository_continued] = STATE(227),
    [aux_sym_repository_repeat1] = STATE(227),
    [anon_sym_DOLLAR] = ACTIONS(736),
    [aux_sym_from_layer_token1] = ACTIONS(739),
    [aux_sym_from_layer_token2] = ACTIONS(736),
    [aux_sym_from_layer_token5] = ACTIONS(742),
    [aux_sym_from_layer_token7] = ACTIONS(742),
    [aux_sym_from_layer_token9] = ACTIONS(745),
    [aux_sym_from_layer_token11] = ACTIONS(745),
    [aux_sym_from_layer_token13] = ACTIONS(748),
    [aux_sym_from_layer_token15] = ACTIONS(748),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [sym_digest] = STATE(157),
    [anon_sym_sha256_COLON] = ACTIONS(751),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_from_layer_token1] = ACTIONS(720),
    [aux_sym_from_layer_token2] = ACTIONS(718),
    [aux_sym_from_layer_token5] = ACTIONS(722),
    [aux_sym_from_layer_token7] = ACTIONS(722),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(726),
    [aux_sym_from_layer_token15] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [236] = {
    [sym__repository_continued] = STATE(234),
    [aux_sym_repository_repeat1] = STATE(234),
    [anon_sym_DOLLAR] = ACTIONS(753),
    [aux_sym_from_layer_token1] = ACTIONS(756),
    [aux_sym_from_layer_token2] = ACTIONS(753),
    [aux_sym_from_layer_token5] = ACTIONS(759),
    [aux_sym_from_layer_token7] = ACTIONS(759),
    [aux_sym_from_layer_token9] = ACTIONS(762),
    [aux_sym_from_layer_token11] = ACTIONS(762),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_from_layer_token15] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [237] = {
    [sym_image] = STATE(124),
    [anon_sym_DOLLAR] = ACTIONS(768),
    [aux_sym_from_layer_token1] = ACTIONS(770),
    [aux_sym_from_layer_token2] = ACTIONS(768),
    [aux_sym_from_layer_token5] = ACTIONS(772),
    [aux_sym_from_layer_token7] = ACTIONS(772),
    [aux_sym_from_layer_token9] = ACTIONS(774),
    [aux_sym_from_layer_token11] = ACTIONS(774),
    [aux_sym_from_layer_token13] = ACTIONS(776),
    [aux_sym_from_layer_token15] = ACTIONS(776),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [238] = {
    [sym__chown] = STATE(238),
    [sym__from_layer] = STATE(238),
    [aux_sym_copy_repeat1] = STATE(238),
    [anon_sym_DQUOTE] = ACTIONS(778),
    [anon_sym_DOLLAR] = ACTIONS(778),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(780),
    [aux_sym__from_layer_token1] = ACTIONS(783),
    [aux_sym_path_token1] = ACTIONS(786),
    [aux_sym_path_token2] = ACTIONS(786),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(778),
  },
  [239] = {
    [sym_digest] = STATE(164),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_from_layer_token1] = ACTIONS(720),
    [aux_sym_from_layer_token2] = ACTIONS(718),
    [aux_sym_from_layer_token5] = ACTIONS(722),
    [aux_sym_from_layer_token7] = ACTIONS(722),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(726),
    [aux_sym_from_layer_token15] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [sym_digest] = STATE(166),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_from_layer_token1] = ACTIONS(720),
    [aux_sym_from_layer_token2] = ACTIONS(718),
    [aux_sym_from_layer_token5] = ACTIONS(722),
    [aux_sym_from_layer_token7] = ACTIONS(722),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(726),
    [aux_sym_from_layer_token15] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [241] = {
    [sym_as_name] = STATE(191),
    [anon_sym_DOLLAR] = ACTIONS(788),
    [aux_sym_from_layer_token1] = ACTIONS(790),
    [aux_sym_from_layer_token2] = ACTIONS(788),
    [aux_sym_from_layer_token5] = ACTIONS(792),
    [aux_sym_from_layer_token7] = ACTIONS(792),
    [aux_sym_from_layer_token9] = ACTIONS(794),
    [aux_sym_from_layer_token11] = ACTIONS(794),
    [aux_sym_from_layer_token13] = ACTIONS(796),
    [aux_sym_from_layer_token15] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [242] = {
    [sym_digest] = STATE(167),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_from_layer_token1] = ACTIONS(720),
    [aux_sym_from_layer_token2] = ACTIONS(718),
    [aux_sym_from_layer_token5] = ACTIONS(722),
    [aux_sym_from_layer_token7] = ACTIONS(722),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(726),
    [aux_sym_from_layer_token15] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [243] = {
    [sym_tag] = STATE(148),
    [anon_sym_DOLLAR] = ACTIONS(798),
    [aux_sym_from_layer_token1] = ACTIONS(800),
    [aux_sym_from_layer_token2] = ACTIONS(798),
    [aux_sym_from_layer_token5] = ACTIONS(802),
    [aux_sym_from_layer_token7] = ACTIONS(802),
    [aux_sym_from_layer_token9] = ACTIONS(804),
    [aux_sym_from_layer_token11] = ACTIONS(804),
    [aux_sym_from_layer_token13] = ACTIONS(806),
    [aux_sym_from_layer_token15] = ACTIONS(806),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [sym_digest] = STATE(156),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_from_layer_token1] = ACTIONS(720),
    [aux_sym_from_layer_token2] = ACTIONS(718),
    [aux_sym_from_layer_token5] = ACTIONS(722),
    [aux_sym_from_layer_token7] = ACTIONS(722),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(726),
    [aux_sym_from_layer_token15] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [245] = {
    [sym_as_name] = STATE(183),
    [anon_sym_DOLLAR] = ACTIONS(788),
    [aux_sym_from_layer_token1] = ACTIONS(790),
    [aux_sym_from_layer_token2] = ACTIONS(788),
    [aux_sym_from_layer_token5] = ACTIONS(792),
    [aux_sym_from_layer_token7] = ACTIONS(792),
    [aux_sym_from_layer_token9] = ACTIONS(794),
    [aux_sym_from_layer_token11] = ACTIONS(794),
    [aux_sym_from_layer_token13] = ACTIONS(796),
    [aux_sym_from_layer_token15] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [246] = {
    [sym_as_name] = STATE(219),
    [anon_sym_DOLLAR] = ACTIONS(788),
    [aux_sym_from_layer_token1] = ACTIONS(790),
    [aux_sym_from_layer_token2] = ACTIONS(788),
    [aux_sym_from_layer_token5] = ACTIONS(792),
    [aux_sym_from_layer_token7] = ACTIONS(792),
    [aux_sym_from_layer_token9] = ACTIONS(794),
    [aux_sym_from_layer_token11] = ACTIONS(794),
    [aux_sym_from_layer_token13] = ACTIONS(796),
    [aux_sym_from_layer_token15] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [sym_from_layer] = STATE(512),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [aux_sym_from_layer_token1] = ACTIONS(810),
    [aux_sym_from_layer_token2] = ACTIONS(808),
    [aux_sym_from_layer_token5] = ACTIONS(812),
    [aux_sym_from_layer_token7] = ACTIONS(812),
    [aux_sym_from_layer_token9] = ACTIONS(814),
    [aux_sym_from_layer_token11] = ACTIONS(814),
    [aux_sym_from_layer_token13] = ACTIONS(816),
    [aux_sym_from_layer_token15] = ACTIONS(816),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [sym_as_name] = STATE(217),
    [anon_sym_DOLLAR] = ACTIONS(788),
    [aux_sym_from_layer_token1] = ACTIONS(790),
    [aux_sym_from_layer_token2] = ACTIONS(788),
    [aux_sym_from_layer_token5] = ACTIONS(792),
    [aux_sym_from_layer_token7] = ACTIONS(792),
    [aux_sym_from_layer_token9] = ACTIONS(794),
    [aux_sym_from_layer_token11] = ACTIONS(794),
    [aux_sym_from_layer_token13] = ACTIONS(796),
    [aux_sym_from_layer_token15] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [sym_tag] = STATE(137),
    [anon_sym_DOLLAR] = ACTIONS(798),
    [aux_sym_from_layer_token1] = ACTIONS(800),
    [aux_sym_from_layer_token2] = ACTIONS(798),
    [aux_sym_from_layer_token5] = ACTIONS(802),
    [aux_sym_from_layer_token7] = ACTIONS(802),
    [aux_sym_from_layer_token9] = ACTIONS(804),
    [aux_sym_from_layer_token11] = ACTIONS(804),
    [aux_sym_from_layer_token13] = ACTIONS(806),
    [aux_sym_from_layer_token15] = ACTIONS(806),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [sym_as_name] = STATE(202),
    [anon_sym_DOLLAR] = ACTIONS(788),
    [aux_sym_from_layer_token1] = ACTIONS(790),
    [aux_sym_from_layer_token2] = ACTIONS(788),
    [aux_sym_from_layer_token5] = ACTIONS(792),
    [aux_sym_from_layer_token7] = ACTIONS(792),
    [aux_sym_from_layer_token9] = ACTIONS(794),
    [aux_sym_from_layer_token11] = ACTIONS(794),
    [aux_sym_from_layer_token13] = ACTIONS(796),
    [aux_sym_from_layer_token15] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [251] = {
    [sym_as_name] = STATE(196),
    [anon_sym_DOLLAR] = ACTIONS(788),
    [aux_sym_from_layer_token1] = ACTIONS(790),
    [aux_sym_from_layer_token2] = ACTIONS(788),
    [aux_sym_from_layer_token5] = ACTIONS(792),
    [aux_sym_from_layer_token7] = ACTIONS(792),
    [aux_sym_from_layer_token9] = ACTIONS(794),
    [aux_sym_from_layer_token11] = ACTIONS(794),
    [aux_sym_from_layer_token13] = ACTIONS(796),
    [aux_sym_from_layer_token15] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [sym_digest] = STATE(154),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_from_layer_token1] = ACTIONS(720),
    [aux_sym_from_layer_token2] = ACTIONS(718),
    [aux_sym_from_layer_token5] = ACTIONS(722),
    [aux_sym_from_layer_token7] = ACTIONS(722),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(726),
    [aux_sym_from_layer_token15] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [253] = {
    [sym_image] = STATE(133),
    [anon_sym_DOLLAR] = ACTIONS(768),
    [aux_sym_from_layer_token1] = ACTIONS(770),
    [aux_sym_from_layer_token2] = ACTIONS(768),
    [aux_sym_from_layer_token5] = ACTIONS(772),
    [aux_sym_from_layer_token7] = ACTIONS(772),
    [aux_sym_from_layer_token9] = ACTIONS(774),
    [aux_sym_from_layer_token11] = ACTIONS(774),
    [aux_sym_from_layer_token13] = ACTIONS(776),
    [aux_sym_from_layer_token15] = ACTIONS(776),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [sym_as_name] = STATE(176),
    [anon_sym_DOLLAR] = ACTIONS(788),
    [aux_sym_from_layer_token1] = ACTIONS(790),
    [aux_sym_from_layer_token2] = ACTIONS(788),
    [aux_sym_from_layer_token5] = ACTIONS(792),
    [aux_sym_from_layer_token7] = ACTIONS(792),
    [aux_sym_from_layer_token9] = ACTIONS(794),
    [aux_sym_from_layer_token11] = ACTIONS(794),
    [aux_sym_from_layer_token13] = ACTIONS(796),
    [aux_sym_from_layer_token15] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [255] = {
    [sym_digest] = STATE(169),
    [anon_sym_DOLLAR] = ACTIONS(718),
    [aux_sym_from_layer_token1] = ACTIONS(720),
    [aux_sym_from_layer_token2] = ACTIONS(718),
    [aux_sym_from_layer_token5] = ACTIONS(722),
    [aux_sym_from_layer_token7] = ACTIONS(722),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(726),
    [aux_sym_from_layer_token15] = ACTIONS(726),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [256] = {
    [sym_as_name] = STATE(184),
    [anon_sym_DOLLAR] = ACTIONS(788),
    [aux_sym_from_layer_token1] = ACTIONS(790),
    [aux_sym_from_layer_token2] = ACTIONS(788),
    [aux_sym_from_layer_token5] = ACTIONS(792),
    [aux_sym_from_layer_token7] = ACTIONS(792),
    [aux_sym_from_layer_token9] = ACTIONS(794),
    [aux_sym_from_layer_token11] = ACTIONS(794),
    [aux_sym_from_layer_token13] = ACTIONS(796),
    [aux_sym_from_layer_token15] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [257] = {
    [sym_as_name] = STATE(210),
    [anon_sym_DOLLAR] = ACTIONS(788),
    [aux_sym_from_layer_token1] = ACTIONS(790),
    [aux_sym_from_layer_token2] = ACTIONS(788),
    [aux_sym_from_layer_token5] = ACTIONS(792),
    [aux_sym_from_layer_token7] = ACTIONS(792),
    [aux_sym_from_layer_token9] = ACTIONS(794),
    [aux_sym_from_layer_token11] = ACTIONS(794),
    [aux_sym_from_layer_token13] = ACTIONS(796),
    [aux_sym_from_layer_token15] = ACTIONS(796),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [258] = {
    [sym_tag] = STATE(149),
    [anon_sym_DOLLAR] = ACTIONS(798),
    [aux_sym_from_layer_token1] = ACTIONS(800),
    [aux_sym_from_layer_token2] = ACTIONS(798),
    [aux_sym_from_layer_token5] = ACTIONS(802),
    [aux_sym_from_layer_token7] = ACTIONS(802),
    [aux_sym_from_layer_token9] = ACTIONS(804),
    [aux_sym_from_layer_token11] = ACTIONS(804),
    [aux_sym_from_layer_token13] = ACTIONS(806),
    [aux_sym_from_layer_token15] = ACTIONS(806),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [259] = {
    [sym_tag] = STATE(146),
    [anon_sym_DOLLAR] = ACTIONS(798),
    [aux_sym_from_layer_token1] = ACTIONS(800),
    [aux_sym_from_layer_token2] = ACTIONS(798),
    [aux_sym_from_layer_token5] = ACTIONS(802),
    [aux_sym_from_layer_token7] = ACTIONS(802),
    [aux_sym_from_layer_token9] = ACTIONS(804),
    [aux_sym_from_layer_token11] = ACTIONS(804),
    [aux_sym_from_layer_token13] = ACTIONS(806),
    [aux_sym_from_layer_token15] = ACTIONS(806),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [260] = {
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_from_layer_token1] = ACTIONS(820),
    [aux_sym_from_layer_token2] = ACTIONS(818),
    [aux_sym_from_layer_token5] = ACTIONS(818),
    [aux_sym_from_layer_token7] = ACTIONS(818),
    [aux_sym_from_layer_token9] = ACTIONS(818),
    [aux_sym_from_layer_token11] = ACTIONS(818),
    [aux_sym_from_layer_token13] = ACTIONS(818),
    [aux_sym_from_layer_token15] = ACTIONS(818),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [261] = {
    [sym__port_spec] = STATE(505),
    [sym_mapped_port] = STATE(505),
    [sym__port] = STATE(432),
    [sym_port] = STATE(440),
    [sym_port_range] = STATE(440),
    [sym__port_part] = STATE(420),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym__port_part_token1] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [262] = {
    [anon_sym_DOLLAR] = ACTIONS(828),
    [aux_sym_from_layer_token1] = ACTIONS(830),
    [aux_sym_from_layer_token2] = ACTIONS(828),
    [aux_sym_from_layer_token5] = ACTIONS(828),
    [aux_sym_from_layer_token7] = ACTIONS(828),
    [aux_sym_from_layer_token9] = ACTIONS(828),
    [aux_sym_from_layer_token11] = ACTIONS(828),
    [aux_sym_from_layer_token13] = ACTIONS(828),
    [aux_sym_from_layer_token15] = ACTIONS(828),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [263] = {
    [anon_sym_DOLLAR] = ACTIONS(832),
    [aux_sym_from_layer_token1] = ACTIONS(834),
    [aux_sym_from_layer_token2] = ACTIONS(832),
    [aux_sym_from_layer_token5] = ACTIONS(832),
    [aux_sym_from_layer_token7] = ACTIONS(832),
    [aux_sym_from_layer_token9] = ACTIONS(832),
    [aux_sym_from_layer_token11] = ACTIONS(832),
    [aux_sym_from_layer_token13] = ACTIONS(832),
    [aux_sym_from_layer_token15] = ACTIONS(832),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [264] = {
    [anon_sym_DOLLAR] = ACTIONS(836),
    [aux_sym_from_layer_token1] = ACTIONS(838),
    [aux_sym_from_layer_token2] = ACTIONS(836),
    [aux_sym_from_layer_token5] = ACTIONS(836),
    [aux_sym_from_layer_token7] = ACTIONS(836),
    [aux_sym_from_layer_token9] = ACTIONS(836),
    [aux_sym_from_layer_token11] = ACTIONS(836),
    [aux_sym_from_layer_token13] = ACTIONS(836),
    [aux_sym_from_layer_token15] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [265] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_from_layer_token1] = ACTIONS(197),
    [aux_sym_from_layer_token2] = ACTIONS(195),
    [aux_sym_from_layer_token5] = ACTIONS(195),
    [aux_sym_from_layer_token7] = ACTIONS(195),
    [aux_sym_from_layer_token9] = ACTIONS(195),
    [aux_sym_from_layer_token11] = ACTIONS(195),
    [aux_sym_from_layer_token13] = ACTIONS(195),
    [aux_sym_from_layer_token15] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [266] = {
    [anon_sym_DOLLAR] = ACTIONS(840),
    [aux_sym_from_layer_token1] = ACTIONS(842),
    [aux_sym_from_layer_token2] = ACTIONS(840),
    [aux_sym_from_layer_token5] = ACTIONS(840),
    [aux_sym_from_layer_token7] = ACTIONS(840),
    [aux_sym_from_layer_token9] = ACTIONS(840),
    [aux_sym_from_layer_token11] = ACTIONS(840),
    [aux_sym_from_layer_token13] = ACTIONS(840),
    [aux_sym_from_layer_token15] = ACTIONS(840),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [267] = {
    [anon_sym_DOLLAR] = ACTIONS(844),
    [aux_sym_from_layer_token1] = ACTIONS(846),
    [aux_sym_from_layer_token2] = ACTIONS(844),
    [aux_sym_from_layer_token5] = ACTIONS(844),
    [aux_sym_from_layer_token7] = ACTIONS(844),
    [aux_sym_from_layer_token9] = ACTIONS(844),
    [aux_sym_from_layer_token11] = ACTIONS(844),
    [aux_sym_from_layer_token13] = ACTIONS(844),
    [aux_sym_from_layer_token15] = ACTIONS(844),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [268] = {
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_from_layer_token1] = ACTIONS(201),
    [aux_sym_from_layer_token2] = ACTIONS(199),
    [aux_sym_from_layer_token5] = ACTIONS(199),
    [aux_sym_from_layer_token7] = ACTIONS(199),
    [aux_sym_from_layer_token9] = ACTIONS(199),
    [aux_sym_from_layer_token11] = ACTIONS(199),
    [aux_sym_from_layer_token13] = ACTIONS(199),
    [aux_sym_from_layer_token15] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [269] = {
    [anon_sym_DOLLAR] = ACTIONS(848),
    [aux_sym_from_layer_token1] = ACTIONS(850),
    [aux_sym_from_layer_token2] = ACTIONS(848),
    [aux_sym_from_layer_token5] = ACTIONS(848),
    [aux_sym_from_layer_token7] = ACTIONS(848),
    [aux_sym_from_layer_token9] = ACTIONS(848),
    [aux_sym_from_layer_token11] = ACTIONS(848),
    [aux_sym_from_layer_token13] = ACTIONS(848),
    [aux_sym_from_layer_token15] = ACTIONS(848),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [270] = {
    [anon_sym_DOLLAR] = ACTIONS(852),
    [aux_sym_from_layer_token1] = ACTIONS(854),
    [aux_sym_from_layer_token2] = ACTIONS(852),
    [aux_sym_from_layer_token5] = ACTIONS(852),
    [aux_sym_from_layer_token7] = ACTIONS(852),
    [aux_sym_from_layer_token9] = ACTIONS(852),
    [aux_sym_from_layer_token11] = ACTIONS(852),
    [aux_sym_from_layer_token13] = ACTIONS(852),
    [aux_sym_from_layer_token15] = ACTIONS(852),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [271] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_from_layer_token1] = ACTIONS(209),
    [aux_sym_from_layer_token2] = ACTIONS(207),
    [aux_sym_from_layer_token5] = ACTIONS(207),
    [aux_sym_from_layer_token7] = ACTIONS(207),
    [aux_sym_from_layer_token9] = ACTIONS(207),
    [aux_sym_from_layer_token11] = ACTIONS(207),
    [aux_sym_from_layer_token13] = ACTIONS(207),
    [aux_sym_from_layer_token15] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [272] = {
    [anon_sym_DOLLAR] = ACTIONS(856),
    [aux_sym_from_layer_token1] = ACTIONS(858),
    [aux_sym_from_layer_token2] = ACTIONS(856),
    [aux_sym_from_layer_token5] = ACTIONS(856),
    [aux_sym_from_layer_token7] = ACTIONS(856),
    [aux_sym_from_layer_token9] = ACTIONS(856),
    [aux_sym_from_layer_token11] = ACTIONS(856),
    [aux_sym_from_layer_token13] = ACTIONS(856),
    [aux_sym_from_layer_token15] = ACTIONS(856),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [273] = {
    [anon_sym_DOLLAR] = ACTIONS(860),
    [aux_sym_from_layer_token1] = ACTIONS(862),
    [aux_sym_from_layer_token2] = ACTIONS(860),
    [aux_sym_from_layer_token5] = ACTIONS(860),
    [aux_sym_from_layer_token7] = ACTIONS(860),
    [aux_sym_from_layer_token9] = ACTIONS(860),
    [aux_sym_from_layer_token11] = ACTIONS(860),
    [aux_sym_from_layer_token13] = ACTIONS(860),
    [aux_sym_from_layer_token15] = ACTIONS(860),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [274] = {
    [anon_sym_DOLLAR] = ACTIONS(864),
    [aux_sym_from_layer_token1] = ACTIONS(866),
    [aux_sym_from_layer_token2] = ACTIONS(864),
    [aux_sym_from_layer_token5] = ACTIONS(864),
    [aux_sym_from_layer_token7] = ACTIONS(864),
    [aux_sym_from_layer_token9] = ACTIONS(864),
    [aux_sym_from_layer_token11] = ACTIONS(864),
    [aux_sym_from_layer_token13] = ACTIONS(864),
    [aux_sym_from_layer_token15] = ACTIONS(864),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [275] = {
    [anon_sym_DOLLAR] = ACTIONS(868),
    [aux_sym_from_layer_token1] = ACTIONS(870),
    [aux_sym_from_layer_token2] = ACTIONS(868),
    [aux_sym_from_layer_token5] = ACTIONS(868),
    [aux_sym_from_layer_token7] = ACTIONS(868),
    [aux_sym_from_layer_token9] = ACTIONS(868),
    [aux_sym_from_layer_token11] = ACTIONS(868),
    [aux_sym_from_layer_token13] = ACTIONS(868),
    [aux_sym_from_layer_token15] = ACTIONS(868),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [276] = {
    [sym__port] = STATE(181),
    [sym_port] = STATE(181),
    [sym_port_range] = STATE(181),
    [sym__port_part] = STATE(74),
    [anon_sym_DQUOTE] = ACTIONS(872),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [277] = {
    [sym__port] = STATE(466),
    [sym_port] = STATE(466),
    [sym_port_range] = STATE(466),
    [sym__port_part] = STATE(420),
    [anon_sym_DQUOTE] = ACTIONS(822),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym__port_part_token1] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [278] = {
    [sym__port] = STATE(134),
    [sym_port] = STATE(134),
    [sym_port_range] = STATE(134),
    [sym__port_part] = STATE(74),
    [anon_sym_DQUOTE] = ACTIONS(872),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [anon_sym_DQUOTE] = ACTIONS(874),
    [anon_sym_DOLLAR] = ACTIONS(874),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(874),
    [aux_sym__from_layer_token1] = ACTIONS(874),
    [aux_sym_path_token1] = ACTIONS(876),
    [aux_sym_path_token2] = ACTIONS(876),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(874),
  },
  [280] = {
    [sym_path] = STATE(66),
    [aux_sym__paths] = STATE(50),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [aux_sym_path_token1] = ACTIONS(271),
    [aux_sym_path_token2] = ACTIONS(273),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(878),
  },
  [281] = {
    [anon_sym_DQUOTE] = ACTIONS(880),
    [anon_sym_DOLLAR] = ACTIONS(880),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(880),
    [aux_sym__from_layer_token1] = ACTIONS(880),
    [aux_sym_path_token1] = ACTIONS(882),
    [aux_sym_path_token2] = ACTIONS(882),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(880),
  },
  [282] = {
    [sym_path] = STATE(66),
    [aux_sym__paths] = STATE(43),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [aux_sym_path_token1] = ACTIONS(271),
    [aux_sym_path_token2] = ACTIONS(273),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(884),
  },
  [283] = {
    [sym_chown] = STATE(519),
    [sym_user_name] = STATE(448),
    [sym_user_id] = STATE(447),
    [anon_sym_DOLLAR] = ACTIONS(886),
    [aux_sym_user_name_token1] = ACTIONS(888),
    [aux_sym_user_id_token1] = ACTIONS(890),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [284] = {
    [sym_user_name] = STATE(153),
    [sym_user_id] = STATE(168),
    [anon_sym_DQUOTE] = ACTIONS(892),
    [anon_sym_DOLLAR] = ACTIONS(894),
    [aux_sym_user_name_token1] = ACTIONS(896),
    [aux_sym_user_id_token1] = ACTIONS(898),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [285] = {
    [sym_template_expr_less_than_equals] = STATE(544),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [286] = {
    [sym_variable_default_value] = STATE(568),
    [sym_variable_this_or_null] = STATE(568),
    [anon_sym_RBRACE] = ACTIONS(902),
    [anon_sym_COLON_DASH] = ACTIONS(904),
    [anon_sym_COLON_PLUS] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [287] = {
    [sym_template_expr_less_than_equals] = STATE(560),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [288] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(908),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(908),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(908),
    [anon_sym_DASH_DASHretries] = ACTIONS(908),
    [aux_sym__hc_command_token1] = ACTIONS(908),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [289] = {
    [aux_sym_from_layer_repeat1] = STATE(334),
    [anon_sym_DOLLAR] = ACTIONS(910),
    [aux_sym_from_layer_token3] = ACTIONS(910),
    [aux_sym_from_layer_token4] = ACTIONS(912),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(914),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [290] = {
    [sym_variable_default_value] = STATE(461),
    [sym_variable_this_or_null] = STATE(461),
    [anon_sym_RBRACE] = ACTIONS(916),
    [anon_sym_COLON_DASH] = ACTIONS(904),
    [anon_sym_COLON_PLUS] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [291] = {
    [aux_sym_path_repeat2] = STATE(342),
    [anon_sym_DQUOTE] = ACTIONS(918),
    [anon_sym_DOLLAR] = ACTIONS(920),
    [aux_sym_path_token3] = ACTIONS(922),
    [aux_sym_path_token4] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [292] = {
    [sym_label_value] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(926),
    [aux_sym_label_value_token1] = ACTIONS(928),
    [aux_sym_label_value_token2] = ACTIONS(928),
    [anon_sym_SQUOTE] = ACTIONS(930),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [293] = {
    [aux_sym_from_layer_repeat1] = STATE(299),
    [anon_sym_DOLLAR] = ACTIONS(932),
    [aux_sym_from_layer_token3] = ACTIONS(932),
    [aux_sym_from_layer_token4] = ACTIONS(934),
    [anon_sym_SLASH] = ACTIONS(936),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [294] = {
    [aux_sym_from_layer_repeat2] = STATE(336),
    [aux_sym_from_layer_token4] = ACTIONS(934),
    [aux_sym_from_layer_token5] = ACTIONS(938),
    [aux_sym_from_layer_token8] = ACTIONS(938),
    [anon_sym_SLASH] = ACTIONS(936),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [295] = {
    [aux_sym_from_layer_repeat3] = STATE(337),
    [aux_sym_from_layer_token4] = ACTIONS(934),
    [aux_sym_from_layer_token9] = ACTIONS(940),
    [aux_sym_from_layer_token12] = ACTIONS(940),
    [anon_sym_SLASH] = ACTIONS(936),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [296] = {
    [aux_sym_from_layer_repeat4] = STATE(338),
    [aux_sym_from_layer_token4] = ACTIONS(934),
    [aux_sym_from_layer_token13] = ACTIONS(942),
    [aux_sym_from_layer_token16] = ACTIONS(942),
    [anon_sym_SLASH] = ACTIONS(936),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [297] = {
    [sym_hc_command] = STATE(182),
    [aux_sym__anything] = STATE(144),
    [sym__anything_or_json_array] = STATE(179),
    [aux_sym__anything_token1] = ACTIONS(509),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(944),
  },
  [298] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(946),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(946),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(946),
    [anon_sym_DASH_DASHretries] = ACTIONS(946),
    [aux_sym__hc_command_token1] = ACTIONS(946),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [299] = {
    [aux_sym_from_layer_repeat1] = STATE(299),
    [anon_sym_DOLLAR] = ACTIONS(948),
    [aux_sym_from_layer_token3] = ACTIONS(948),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(173),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [300] = {
    [aux_sym_from_layer_repeat2] = STATE(300),
    [aux_sym_from_layer_token4] = ACTIONS(182),
    [aux_sym_from_layer_token5] = ACTIONS(951),
    [aux_sym_from_layer_token8] = ACTIONS(951),
    [anon_sym_SLASH] = ACTIONS(180),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [301] = {
    [sym_template_expr_less_than_equals] = STATE(473),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [302] = {
    [aux_sym_from_layer_repeat3] = STATE(302),
    [aux_sym_from_layer_token4] = ACTIONS(139),
    [aux_sym_from_layer_token9] = ACTIONS(954),
    [aux_sym_from_layer_token12] = ACTIONS(954),
    [anon_sym_SLASH] = ACTIONS(137),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [303] = {
    [aux_sym_from_layer_repeat4] = STATE(303),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [aux_sym_from_layer_token13] = ACTIONS(957),
    [aux_sym_from_layer_token16] = ACTIONS(957),
    [anon_sym_SLASH] = ACTIONS(162),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [304] = {
    [sym_template_expr_less_than_equals] = STATE(554),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [305] = {
    [sym_template_expr_less_than_equals] = STATE(548),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [306] = {
    [sym_template_expr_less_than_equals] = STATE(542),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [sym_template_expr_less_than_equals] = STATE(477),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [308] = {
    [aux_sym_path_repeat2] = STATE(308),
    [anon_sym_DQUOTE] = ACTIONS(960),
    [anon_sym_DOLLAR] = ACTIONS(962),
    [aux_sym_path_token3] = ACTIONS(965),
    [aux_sym_path_token4] = ACTIONS(967),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [309] = {
    [sym_port] = STATE(533),
    [sym_port_range] = STATE(533),
    [sym__port_part] = STATE(420),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym__port_part_token1] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(970),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(970),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(970),
    [anon_sym_DASH_DASHretries] = ACTIONS(970),
    [aux_sym__hc_command_token1] = ACTIONS(970),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [311] = {
    [aux_sym_from_layer_repeat2] = STATE(321),
    [aux_sym_from_layer_token4] = ACTIONS(972),
    [aux_sym_from_layer_token5] = ACTIONS(974),
    [aux_sym_from_layer_token8] = ACTIONS(974),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(976),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [312] = {
    [aux_sym_from_layer_repeat3] = STATE(320),
    [aux_sym_from_layer_token4] = ACTIONS(972),
    [aux_sym_from_layer_token9] = ACTIONS(978),
    [aux_sym_from_layer_token12] = ACTIONS(978),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(976),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [313] = {
    [aux_sym_from_layer_repeat4] = STATE(319),
    [aux_sym_from_layer_token4] = ACTIONS(972),
    [aux_sym_from_layer_token13] = ACTIONS(980),
    [aux_sym_from_layer_token16] = ACTIONS(980),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(976),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [314] = {
    [sym_template_expr_less_than_equals] = STATE(510),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [315] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(318),
    [aux_sym_from_layer_token14] = ACTIONS(982),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(984),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(984),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(984),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [316] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(986),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(986),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(986),
    [anon_sym_DASH_DASHretries] = ACTIONS(986),
    [aux_sym__hc_command_token1] = ACTIONS(986),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [sym_path] = STATE(188),
    [anon_sym_DQUOTE] = ACTIONS(988),
    [anon_sym_DOLLAR] = ACTIONS(990),
    [aux_sym_path_token1] = ACTIONS(992),
    [aux_sym_path_token2] = ACTIONS(994),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [318] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(318),
    [aux_sym_from_layer_token14] = ACTIONS(996),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(998),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(998),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(998),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [319] = {
    [aux_sym_from_layer_repeat4] = STATE(319),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [aux_sym_from_layer_token13] = ACTIONS(1001),
    [aux_sym_from_layer_token16] = ACTIONS(1001),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [320] = {
    [aux_sym_from_layer_repeat3] = STATE(320),
    [aux_sym_from_layer_token4] = ACTIONS(139),
    [aux_sym_from_layer_token9] = ACTIONS(1004),
    [aux_sym_from_layer_token12] = ACTIONS(1004),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [321] = {
    [aux_sym_from_layer_repeat2] = STATE(321),
    [aux_sym_from_layer_token4] = ACTIONS(182),
    [aux_sym_from_layer_token5] = ACTIONS(1007),
    [aux_sym_from_layer_token8] = ACTIONS(1007),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [322] = {
    [sym_port] = STATE(480),
    [sym_port_range] = STATE(480),
    [sym__port_part] = STATE(420),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym__port_part_token1] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [323] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1010),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1010),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1010),
    [anon_sym_DASH_DASHretries] = ACTIONS(1010),
    [aux_sym__hc_command_token1] = ACTIONS(1010),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [324] = {
    [sym_variable_default_value] = STATE(574),
    [sym_variable_this_or_null] = STATE(574),
    [anon_sym_RBRACE] = ACTIONS(1012),
    [anon_sym_COLON_DASH] = ACTIONS(904),
    [anon_sym_COLON_PLUS] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [325] = {
    [aux_sym_from_layer_repeat1] = STATE(293),
    [anon_sym_DOLLAR] = ACTIONS(932),
    [aux_sym_from_layer_token3] = ACTIONS(932),
    [aux_sym_from_layer_token4] = ACTIONS(1014),
    [anon_sym_SLASH] = ACTIONS(1016),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [326] = {
    [sym_variable_default_value] = STATE(572),
    [sym_variable_this_or_null] = STATE(572),
    [anon_sym_RBRACE] = ACTIONS(1018),
    [anon_sym_COLON_DASH] = ACTIONS(904),
    [anon_sym_COLON_PLUS] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [327] = {
    [sym_template_expr_less_than_equals] = STATE(484),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [328] = {
    [sym_variable_default_value] = STATE(570),
    [sym_variable_this_or_null] = STATE(570),
    [anon_sym_RBRACE] = ACTIONS(1020),
    [anon_sym_COLON_DASH] = ACTIONS(904),
    [anon_sym_COLON_PLUS] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [329] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1022),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1022),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1022),
    [anon_sym_DASH_DASHretries] = ACTIONS(1022),
    [aux_sym__hc_command_token1] = ACTIONS(1022),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [330] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1024),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1024),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1024),
    [anon_sym_DASH_DASHretries] = ACTIONS(1024),
    [aux_sym__hc_command_token1] = ACTIONS(1024),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [331] = {
    [aux_sym_from_layer_repeat4] = STATE(313),
    [aux_sym_from_layer_token4] = ACTIONS(1026),
    [aux_sym_from_layer_token13] = ACTIONS(980),
    [aux_sym_from_layer_token16] = ACTIONS(980),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1028),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [332] = {
    [aux_sym_from_layer_repeat3] = STATE(312),
    [aux_sym_from_layer_token4] = ACTIONS(1026),
    [aux_sym_from_layer_token9] = ACTIONS(978),
    [aux_sym_from_layer_token12] = ACTIONS(978),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1028),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [333] = {
    [aux_sym_from_layer_repeat2] = STATE(311),
    [aux_sym_from_layer_token4] = ACTIONS(1026),
    [aux_sym_from_layer_token5] = ACTIONS(974),
    [aux_sym_from_layer_token8] = ACTIONS(974),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1028),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [334] = {
    [aux_sym_from_layer_repeat1] = STATE(335),
    [anon_sym_DOLLAR] = ACTIONS(910),
    [aux_sym_from_layer_token3] = ACTIONS(910),
    [aux_sym_from_layer_token4] = ACTIONS(1026),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1028),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [335] = {
    [aux_sym_from_layer_repeat1] = STATE(335),
    [anon_sym_DOLLAR] = ACTIONS(1030),
    [aux_sym_from_layer_token3] = ACTIONS(1030),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [336] = {
    [aux_sym_from_layer_repeat2] = STATE(300),
    [aux_sym_from_layer_token4] = ACTIONS(1033),
    [aux_sym_from_layer_token5] = ACTIONS(938),
    [aux_sym_from_layer_token8] = ACTIONS(938),
    [anon_sym_SLASH] = ACTIONS(1035),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [aux_sym_from_layer_repeat3] = STATE(302),
    [aux_sym_from_layer_token4] = ACTIONS(1033),
    [aux_sym_from_layer_token9] = ACTIONS(940),
    [aux_sym_from_layer_token12] = ACTIONS(940),
    [anon_sym_SLASH] = ACTIONS(1035),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [aux_sym_from_layer_repeat4] = STATE(303),
    [aux_sym_from_layer_token4] = ACTIONS(1033),
    [aux_sym_from_layer_token13] = ACTIONS(942),
    [aux_sym_from_layer_token16] = ACTIONS(942),
    [anon_sym_SLASH] = ACTIONS(1035),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [339] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1037),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1037),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1037),
    [anon_sym_DASH_DASHretries] = ACTIONS(1037),
    [aux_sym__hc_command_token1] = ACTIONS(1037),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [340] = {
    [sym_port_protocol] = STATE(407),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(1039),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [341] = {
    [sym_port_protocol] = STATE(412),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(1039),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [342] = {
    [aux_sym_path_repeat2] = STATE(308),
    [anon_sym_DQUOTE] = ACTIONS(1041),
    [anon_sym_DOLLAR] = ACTIONS(920),
    [aux_sym_path_token3] = ACTIONS(1043),
    [aux_sym_path_token4] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [343] = {
    [aux_sym_path_repeat2] = STATE(345),
    [anon_sym_DQUOTE] = ACTIONS(1045),
    [anon_sym_DOLLAR] = ACTIONS(920),
    [aux_sym_path_token3] = ACTIONS(1047),
    [aux_sym_path_token4] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [344] = {
    [sym_variable_default_value] = STATE(538),
    [sym_variable_this_or_null] = STATE(538),
    [anon_sym_RBRACE] = ACTIONS(1049),
    [anon_sym_COLON_DASH] = ACTIONS(904),
    [anon_sym_COLON_PLUS] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [345] = {
    [aux_sym_path_repeat2] = STATE(308),
    [anon_sym_DQUOTE] = ACTIONS(1051),
    [anon_sym_DOLLAR] = ACTIONS(920),
    [aux_sym_path_token3] = ACTIONS(1053),
    [aux_sym_path_token4] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [346] = {
    [sym_variable_default_value] = STATE(545),
    [sym_variable_this_or_null] = STATE(545),
    [anon_sym_RBRACE] = ACTIONS(1055),
    [anon_sym_COLON_DASH] = ACTIONS(904),
    [anon_sym_COLON_PLUS] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [sym_variable_default_value] = STATE(551),
    [sym_variable_this_or_null] = STATE(551),
    [anon_sym_RBRACE] = ACTIONS(1057),
    [anon_sym_COLON_DASH] = ACTIONS(904),
    [anon_sym_COLON_PLUS] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [sym_template_expr_less_than_equals] = STATE(502),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [349] = {
    [sym_template_expr_less_than_equals] = STATE(498),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [350] = {
    [sym_template_expr_less_than_equals] = STATE(576),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(900),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [351] = {
    [sym_variable_default_value] = STATE(557),
    [sym_variable_this_or_null] = STATE(557),
    [anon_sym_RBRACE] = ACTIONS(1059),
    [anon_sym_COLON_DASH] = ACTIONS(904),
    [anon_sym_COLON_PLUS] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [sym_variable_default_value] = STATE(562),
    [sym_variable_this_or_null] = STATE(562),
    [anon_sym_RBRACE] = ACTIONS(1061),
    [anon_sym_COLON_DASH] = ACTIONS(904),
    [anon_sym_COLON_PLUS] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [sym_variable_default_value] = STATE(564),
    [sym_variable_this_or_null] = STATE(564),
    [anon_sym_RBRACE] = ACTIONS(1063),
    [anon_sym_COLON_DASH] = ACTIONS(904),
    [anon_sym_COLON_PLUS] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [sym_variable_default_value] = STATE(566),
    [sym_variable_this_or_null] = STATE(566),
    [anon_sym_RBRACE] = ACTIONS(1065),
    [anon_sym_COLON_DASH] = ACTIONS(904),
    [anon_sym_COLON_PLUS] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [aux_sym_from_layer_token5] = ACTIONS(203),
    [aux_sym_from_layer_token8] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [356] = {
    [aux_sym_from_layer_token4] = ACTIONS(189),
    [aux_sym_from_layer_token9] = ACTIONS(187),
    [aux_sym_from_layer_token12] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [357] = {
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_from_layer_token3] = ACTIONS(173),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [358] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_from_layer_token3] = ACTIONS(207),
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [359] = {
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_from_layer_token3] = ACTIONS(199),
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [360] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_from_layer_token3] = ACTIONS(195),
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [361] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [362] = {
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [363] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [364] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_from_layer_token3] = ACTIONS(207),
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [365] = {
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_from_layer_token3] = ACTIONS(199),
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [366] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_from_layer_token3] = ACTIONS(195),
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [367] = {
    [sym_user_name] = STATE(431),
    [sym_user_id] = STATE(430),
    [aux_sym_user_name_token1] = ACTIONS(1067),
    [aux_sym_user_id_token1] = ACTIONS(1069),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_path_token3] = ACTIONS(197),
    [aux_sym_path_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [369] = {
    [aux_sym_from_layer_token4] = ACTIONS(189),
    [aux_sym_from_layer_token9] = ACTIONS(187),
    [aux_sym_from_layer_token12] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [370] = {
    [aux_sym_from_layer_token4] = ACTIONS(193),
    [aux_sym_from_layer_token13] = ACTIONS(191),
    [aux_sym_from_layer_token16] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [371] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_path_token3] = ACTIONS(209),
    [aux_sym_path_token4] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [372] = {
    [aux_sym__anything] = STATE(144),
    [sym__anything_or_json_array] = STATE(198),
    [aux_sym__anything_token1] = ACTIONS(509),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1071),
  },
  [373] = {
    [anon_sym_DQUOTE] = ACTIONS(960),
    [anon_sym_DOLLAR] = ACTIONS(960),
    [aux_sym_path_token3] = ACTIONS(965),
    [aux_sym_path_token4] = ACTIONS(965),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [374] = {
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [aux_sym_from_layer_token5] = ACTIONS(203),
    [aux_sym_from_layer_token8] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [375] = {
    [sym__env_pairs] = STATE(189),
    [sym_env_pair_eq] = STATE(138),
    [sym_env_pair] = STATE(189),
    [sym_env_key] = ACTIONS(1073),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [376] = {
    [aux_sym__anything] = STATE(144),
    [sym__anything_or_json_array] = STATE(192),
    [aux_sym__anything_token1] = ACTIONS(509),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1075),
  },
  [377] = {
    [aux_sym__anything] = STATE(144),
    [sym__anything_or_json_array] = STATE(175),
    [aux_sym__anything_token1] = ACTIONS(509),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1077),
  },
  [378] = {
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_from_layer_token3] = ACTIONS(173),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(173),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [379] = {
    [aux_sym_from_layer_token4] = ACTIONS(193),
    [aux_sym_from_layer_token13] = ACTIONS(191),
    [aux_sym_from_layer_token16] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [380] = {
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_path_token3] = ACTIONS(201),
    [aux_sym_path_token4] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [381] = {
    [aux_sym_label_value_repeat1] = STATE(392),
    [anon_sym_DQUOTE] = ACTIONS(1079),
    [aux_sym_label_value_token3] = ACTIONS(1081),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [382] = {
    [sym_docker_variable] = STATE(29),
    [anon_sym_LBRACE] = ACTIONS(1083),
    [sym__docker_variable] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [383] = {
    [aux_sym__labels] = STATE(125),
    [sym_label_pair] = STATE(125),
    [sym_label_key] = ACTIONS(1087),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [384] = {
    [sym_docker_variable] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(1089),
    [sym__docker_variable] = ACTIONS(1091),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [385] = {
    [sym_signal_name] = STATE(208),
    [sym_signal_num] = ACTIONS(1093),
    [aux_sym_signal_name_token1] = ACTIONS(1095),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [386] = {
    [sym_docker_variable] = STATE(343),
    [anon_sym_LBRACE] = ACTIONS(1097),
    [sym__docker_variable] = ACTIONS(1099),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [387] = {
    [anon_sym_DOLLAR] = ACTIONS(1101),
    [aux_sym_path_token3] = ACTIONS(1103),
    [aux_sym_path_token4] = ACTIONS(1105),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [388] = {
    [anon_sym_DOLLAR] = ACTIONS(1107),
    [aux_sym_path_token3] = ACTIONS(1109),
    [aux_sym_path_token4] = ACTIONS(1111),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [sym_docker_variable] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(1113),
    [sym__docker_variable] = ACTIONS(1115),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [390] = {
    [sym_docker_variable] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [sym__docker_variable] = ACTIONS(1119),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [391] = {
    [sym_platform] = STATE(222),
    [anon_sym_DOLLAR] = ACTIONS(1121),
    [aux_sym_from_layer_token1] = ACTIONS(1123),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [392] = {
    [aux_sym_label_value_repeat1] = STATE(392),
    [anon_sym_DQUOTE] = ACTIONS(1125),
    [aux_sym_label_value_token3] = ACTIONS(1127),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [393] = {
    [sym_docker_variable] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(1089),
    [sym__docker_variable] = ACTIONS(1091),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [394] = {
    [aux_sym_label_value_repeat2] = STATE(394),
    [anon_sym_SQUOTE] = ACTIONS(1130),
    [aux_sym_label_value_token4] = ACTIONS(1132),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [395] = {
    [sym_docker_variable] = STATE(127),
    [anon_sym_LBRACE] = ACTIONS(1135),
    [sym__docker_variable] = ACTIONS(1137),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [396] = {
    [sym_docker_variable] = STATE(378),
    [anon_sym_LBRACE] = ACTIONS(1139),
    [sym__docker_variable] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [397] = {
    [sym_docker_variable] = STATE(56),
    [anon_sym_LBRACE] = ACTIONS(1083),
    [sym__docker_variable] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [398] = {
    [sym_docker_variable] = STATE(357),
    [anon_sym_LBRACE] = ACTIONS(1143),
    [sym__docker_variable] = ACTIONS(1145),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [399] = {
    [sym_docker_variable] = STATE(424),
    [anon_sym_LBRACE] = ACTIONS(1147),
    [sym__docker_variable] = ACTIONS(1149),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [400] = {
    [anon_sym_DOLLAR] = ACTIONS(1151),
    [aux_sym_port_protocol_token1] = ACTIONS(1153),
    [aux_sym_port_protocol_token2] = ACTIONS(1153),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [401] = {
    [sym_docker_variable] = STATE(340),
    [anon_sym_LBRACE] = ACTIONS(1147),
    [sym__docker_variable] = ACTIONS(1149),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [402] = {
    [sym_docker_variable] = STATE(105),
    [anon_sym_LBRACE] = ACTIONS(1155),
    [sym__docker_variable] = ACTIONS(1157),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [403] = {
    [sym_docker_variable] = STATE(214),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [sym__docker_variable] = ACTIONS(1119),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [404] = {
    [sym_docker_variable] = STATE(291),
    [anon_sym_LBRACE] = ACTIONS(1097),
    [sym__docker_variable] = ACTIONS(1099),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [405] = {
    [sym_docker_variable] = STATE(487),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym__docker_variable] = ACTIONS(1161),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [406] = {
    [anon_sym_DQUOTE] = ACTIONS(375),
    [anon_sym_COLON] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(375),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [407] = {
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [sym_docker_variable] = STATE(289),
    [anon_sym_LBRACE] = ACTIONS(1143),
    [sym__docker_variable] = ACTIONS(1145),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [409] = {
    [sym_docker_variable] = STATE(119),
    [anon_sym_LBRACE] = ACTIONS(1155),
    [sym__docker_variable] = ACTIONS(1157),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [410] = {
    [aux_sym_label_value_repeat2] = STATE(394),
    [anon_sym_SQUOTE] = ACTIONS(1079),
    [aux_sym_label_value_token4] = ACTIONS(1163),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [411] = {
    [sym__port_part] = STATE(450),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym__port_part_token1] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [anon_sym_DOLLAR] = ACTIONS(1165),
    [aux_sym_port_protocol_token1] = ACTIONS(1167),
    [aux_sym_port_protocol_token2] = ACTIONS(1167),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [sym__port_part] = STATE(96),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [sym_docker_variable] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(1169),
    [sym__docker_variable] = ACTIONS(1171),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [416] = {
    [sym_docker_variable] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [sym__docker_variable] = ACTIONS(1119),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [417] = {
    [sym_docker_variable] = STATE(325),
    [anon_sym_LBRACE] = ACTIONS(1139),
    [sym__docker_variable] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [418] = {
    [sym_docker_variable] = STATE(104),
    [anon_sym_LBRACE] = ACTIONS(1135),
    [sym__docker_variable] = ACTIONS(1137),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [419] = {
    [sym_docker_variable] = STATE(373),
    [anon_sym_LBRACE] = ACTIONS(1097),
    [sym__docker_variable] = ACTIONS(1099),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [420] = {
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DASH] = ACTIONS(1173),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [sym_docker_variable] = STATE(46),
    [anon_sym_LBRACE] = ACTIONS(1089),
    [sym__docker_variable] = ACTIONS(1091),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [422] = {
    [sym_docker_variable] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(1113),
    [sym__docker_variable] = ACTIONS(1115),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [423] = {
    [sym_docker_variable] = STATE(76),
    [anon_sym_LBRACE] = ACTIONS(1089),
    [sym__docker_variable] = ACTIONS(1091),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [424] = {
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(377),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [sym_hc_start_period] = STATE(329),
    [aux_sym_hc_interval_token1] = ACTIONS(1175),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [anon_sym_DQUOTE] = ACTIONS(591),
    [anon_sym_COLON] = ACTIONS(591),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_COLON] = ACTIONS(553),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [sym_user_group_id] = STATE(211),
    [aux_sym_user_id_token1] = ACTIONS(1177),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [sym_user_group] = STATE(211),
    [aux_sym_user_name_token1] = ACTIONS(1179),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [anon_sym_DQUOTE] = ACTIONS(1181),
    [anon_sym_COLON] = ACTIONS(1183),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [anon_sym_DQUOTE] = ACTIONS(1181),
    [anon_sym_COLON] = ACTIONS(1185),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [anon_sym_DQUOTE] = ACTIONS(384),
    [anon_sym_COLON] = ACTIONS(1187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [sym_hc_timeout] = STATE(316),
    [aux_sym_hc_interval_token1] = ACTIONS(1189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [anon_sym_COLON] = ACTIONS(553),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(553),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [435] = {
    [anon_sym_COLON] = ACTIONS(591),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(591),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [sym_hc_retries] = STATE(339),
    [aux_sym__port_part_token1] = ACTIONS(1191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [sym_hc_interval] = STATE(298),
    [aux_sym_hc_interval_token1] = ACTIONS(1193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [sym_user_group_id] = STATE(516),
    [aux_sym_user_id_token1] = ACTIONS(1195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [sym_user_group] = STATE(516),
    [aux_sym_user_name_token1] = ACTIONS(1197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [anon_sym_DQUOTE] = ACTIONS(1199),
    [anon_sym_COLON] = ACTIONS(1202),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [aux_sym_label_value_repeat2] = STATE(410),
    [aux_sym_label_value_token4] = ACTIONS(1204),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [442] = {
    [sym_env_pair_eq] = STATE(171),
    [sym_env_key] = ACTIONS(1206),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [aux_sym_label_value_repeat1] = STATE(381),
    [aux_sym_label_value_token3] = ACTIONS(1208),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [444] = {
    [aux_sym__anything] = STATE(141),
    [aux_sym__anything_token1] = ACTIONS(1210),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [sym_user_group_id] = STATE(460),
    [aux_sym_user_id_token1] = ACTIONS(1212),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [anon_sym_DQUOTE] = ACTIONS(400),
    [anon_sym_COLON] = ACTIONS(400),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [anon_sym_COLON] = ACTIONS(1214),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1216),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [anon_sym_COLON] = ACTIONS(1218),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1216),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [sym_user_group] = STATE(460),
    [aux_sym_user_name_token1] = ACTIONS(1220),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [anon_sym_DQUOTE] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(388),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [aux_sym__anything] = STATE(151),
    [aux_sym__anything_token1] = ACTIONS(1222),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [aux_sym_from_token2] = ACTIONS(1224),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1226),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1228),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1230),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [sym_template_expr_percent_signs] = ACTIONS(1232),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [457] = {
    [sym_template_expr_curly_braces] = ACTIONS(1234),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [458] = {
    [aux_sym_from_layer_token6] = ACTIONS(1236),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [459] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1238),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1240),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [anon_sym_RBRACE] = ACTIONS(1242),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1244),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [463] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1246),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [464] = {
    [anon_sym_DQUOTE] = ACTIONS(1041),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1248),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [anon_sym_DQUOTE] = ACTIONS(484),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [sym_template_expr_percent_signs] = ACTIONS(1250),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [470] = {
    [sym_template_expr_curly_braces] = ACTIONS(1252),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [471] = {
    [sym_template_expr_percent_signs] = ACTIONS(1254),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [472] = {
    [sym_template_expr_curly_braces] = ACTIONS(1256),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [473] = {
    [aux_sym_from_layer_token14] = ACTIONS(1258),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [aux_sym_from_layer_token10] = ACTIONS(1260),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [aux_sym_from_layer_token6] = ACTIONS(1262),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [aux_sym_from_token2] = ACTIONS(1264),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [477] = {
    [aux_sym_from_layer_token14] = ACTIONS(1266),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [478] = {
    [aux_sym_from_layer_token10] = ACTIONS(1268),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [sym_template_expr_curly_braces] = ACTIONS(1270),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [480] = {
    [anon_sym_DQUOTE] = ACTIONS(1272),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [anon_sym_DQUOTE] = ACTIONS(633),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [483] = {
    [anon_sym_EQ2] = ACTIONS(488),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [aux_sym_from_layer_token14] = ACTIONS(1274),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [aux_sym_from_layer_token10] = ACTIONS(1276),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [aux_sym_from_layer_token6] = ACTIONS(1278),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1280),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [aux_sym_from_token2] = ACTIONS(1282),
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
    [aux_sym_from_token2] = ACTIONS(1286),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [sym_template_expr_percent_signs] = ACTIONS(1288),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [492] = {
    [sym_template_expr_curly_braces] = ACTIONS(1290),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [493] = {
    [anon_sym_SLASH] = ACTIONS(1292),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [aux_sym_from_layer_token6] = ACTIONS(1294),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [sym_template_expr_percent_signs] = ACTIONS(1296),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [496] = {
    [sym_arg_name] = ACTIONS(1298),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [aux_sym_from_layer_token10] = ACTIONS(1300),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [aux_sym_from_layer_token14] = ACTIONS(1302),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [499] = {
    [aux_sym_from_layer_token10] = ACTIONS(1304),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [500] = {
    [aux_sym_from_layer_token6] = ACTIONS(1306),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1308),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [502] = {
    [aux_sym_from_layer_token14] = ACTIONS(1310),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [503] = {
    [aux_sym_from_token2] = ACTIONS(1312),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [504] = {
    [aux_sym_from_layer_token6] = ACTIONS(1314),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [505] = {
    [anon_sym_DQUOTE] = ACTIONS(1316),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [506] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [507] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(199),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [508] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [509] = {
    [aux_sym_from_layer_token10] = ACTIONS(1318),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [aux_sym_from_layer_token14] = ACTIONS(1320),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [511] = {
    [sym_env_value] = ACTIONS(1322),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [512] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1324),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [513] = {
    [sym_template_expr_percent_signs] = ACTIONS(1326),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [514] = {
    [sym_template_expr_curly_braces] = ACTIONS(1328),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [515] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1330),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [516] = {
    [anon_sym_DQUOTE] = ACTIONS(1332),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [517] = {
    [anon_sym_DQUOTE] = ACTIONS(1334),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [518] = {
    [anon_sym_RBRACE] = ACTIONS(1336),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [519] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1338),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [520] = {
    [aux_sym_from_token2] = ACTIONS(1340),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [521] = {
    [sym_arg_default] = ACTIONS(1342),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [522] = {
    [sym__docker_variable] = ACTIONS(1344),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [523] = {
    [anon_sym_DQUOTE] = ACTIONS(1346),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [524] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1348),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [525] = {
    [anon_sym_RBRACE] = ACTIONS(1350),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [526] = {
    [aux_sym_signal_name_token2] = ACTIONS(1352),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [527] = {
    [anon_sym_SLASH] = ACTIONS(936),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [528] = {
    [aux_sym_from_token2] = ACTIONS(1354),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [529] = {
    [anon_sym_DQUOTE] = ACTIONS(1356),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [530] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1358),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [531] = {
    [aux_sym_label_pair_token1] = ACTIONS(1360),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [532] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1362),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [533] = {
    [anon_sym_DQUOTE] = ACTIONS(1364),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [534] = {
    [aux_sym_from_layer_token6] = ACTIONS(1366),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [535] = {
    [aux_sym_from_layer_token10] = ACTIONS(1368),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [536] = {
    [anon_sym_DQUOTE] = ACTIONS(1051),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [537] = {
    [anon_sym_EQ] = ACTIONS(1370),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [538] = {
    [anon_sym_RBRACE] = ACTIONS(1372),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [539] = {
    [anon_sym_DQUOTE] = ACTIONS(1374),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [540] = {
    [aux_sym_from_layer_token6] = ACTIONS(1376),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [541] = {
    [aux_sym_from_layer_token10] = ACTIONS(1378),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [542] = {
    [aux_sym_from_layer_token14] = ACTIONS(1380),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [543] = {
    [anon_sym_EQ] = ACTIONS(1382),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [544] = {
    [aux_sym_from_layer_token14] = ACTIONS(1384),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [545] = {
    [anon_sym_RBRACE] = ACTIONS(1386),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [546] = {
    [aux_sym_from_layer_token6] = ACTIONS(1388),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [547] = {
    [aux_sym_from_layer_token10] = ACTIONS(1390),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [548] = {
    [aux_sym_from_layer_token14] = ACTIONS(1392),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [549] = {
    [anon_sym_EQ] = ACTIONS(1394),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [550] = {
    [anon_sym_SLASH] = ACTIONS(1035),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [551] = {
    [anon_sym_RBRACE] = ACTIONS(1396),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [552] = {
    [aux_sym_from_layer_token6] = ACTIONS(1398),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [553] = {
    [aux_sym_from_layer_token10] = ACTIONS(1400),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [554] = {
    [aux_sym_from_layer_token14] = ACTIONS(1402),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [555] = {
    [anon_sym_EQ] = ACTIONS(1404),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [556] = {
    [aux_sym_from_token2] = ACTIONS(1406),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [557] = {
    [anon_sym_RBRACE] = ACTIONS(1408),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [558] = {
    [aux_sym_from_layer_token6] = ACTIONS(1410),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [559] = {
    [aux_sym_from_layer_token10] = ACTIONS(1412),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [560] = {
    [aux_sym_from_layer_token14] = ACTIONS(1414),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [561] = {
    [sym_template_expr_percent_signs] = ACTIONS(1416),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [562] = {
    [anon_sym_RBRACE] = ACTIONS(1418),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [563] = {
    [sym_template_expr_curly_braces] = ACTIONS(1420),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [564] = {
    [anon_sym_RBRACE] = ACTIONS(1422),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [565] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1424),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [566] = {
    [anon_sym_RBRACE] = ACTIONS(1426),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [567] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1428),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [568] = {
    [anon_sym_RBRACE] = ACTIONS(1430),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [569] = {
    [sym_template_expr_percent_signs] = ACTIONS(1432),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [570] = {
    [anon_sym_RBRACE] = ACTIONS(1434),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [571] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1436),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [572] = {
    [anon_sym_RBRACE] = ACTIONS(1438),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [573] = {
    [aux_sym_from_token2] = ACTIONS(1440),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [574] = {
    [anon_sym_RBRACE] = ACTIONS(1442),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [575] = {
    [sym_template_expr_curly_braces] = ACTIONS(1444),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [576] = {
    [aux_sym_from_layer_token14] = ACTIONS(1446),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [577] = {
    [sym__docker_variable] = ACTIONS(1448),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [578] = {
    [ts_builtin_sym_end] = ACTIONS(1450),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [579] = {
    [sym_template_expr_curly_braces] = ACTIONS(1452),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [580] = {
    [sym_template_expr_percent_signs] = ACTIONS(1454),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [581] = {
    [aux_sym_from_layer_token10] = ACTIONS(1456),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [582] = {
    [sym__docker_variable] = ACTIONS(1458),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [583] = {
    [sym_template_expr_curly_braces] = ACTIONS(1460),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [584] = {
    [sym_template_expr_percent_signs] = ACTIONS(1462),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [585] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1464),
  },
  [586] = {
    [sym__docker_variable] = ACTIONS(1466),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [587] = {
    [sym_template_expr_curly_braces] = ACTIONS(1468),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [588] = {
    [sym_template_expr_percent_signs] = ACTIONS(1470),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [589] = {
    [aux_sym_from_layer_token6] = ACTIONS(1472),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [590] = {
    [sym__docker_variable] = ACTIONS(1474),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [591] = {
    [sym_template_expr_curly_braces] = ACTIONS(1476),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [592] = {
    [sym_template_expr_percent_signs] = ACTIONS(1478),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [593] = {
    [anon_sym_SLASH] = ACTIONS(1480),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [594] = {
    [sym__docker_variable] = ACTIONS(1482),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [595] = {
    [sym__docker_variable] = ACTIONS(1484),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [596] = {
    [sym__docker_variable] = ACTIONS(1486),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [597] = {
    [sym__docker_variable] = ACTIONS(1488),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [598] = {
    [sym__docker_variable] = ACTIONS(1490),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [599] = {
    [sym__docker_variable] = ACTIONS(1492),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [600] = {
    [sym__docker_variable] = ACTIONS(1494),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(280),
  [11] = {.count = 1, .reusable = true}, SHIFT(496),
  [13] = {.count = 1, .reusable = true}, SHIFT(377),
  [15] = {.count = 1, .reusable = true}, SHIFT(224),
  [17] = {.count = 1, .reusable = true}, SHIFT(376),
  [19] = {.count = 1, .reusable = true}, SHIFT(375),
  [21] = {.count = 1, .reusable = true}, SHIFT(223),
  [23] = {.count = 1, .reusable = true}, SHIFT(221),
  [25] = {.count = 1, .reusable = true}, SHIFT(220),
  [27] = {.count = 1, .reusable = true}, SHIFT(383),
  [29] = {.count = 1, .reusable = true}, SHIFT(451),
  [31] = {.count = 1, .reusable = true}, SHIFT(4),
  [33] = {.count = 1, .reusable = true}, SHIFT(372),
  [35] = {.count = 1, .reusable = true}, SHIFT(585),
  [37] = {.count = 1, .reusable = true}, SHIFT(385),
  [39] = {.count = 1, .reusable = true}, SHIFT(284),
  [41] = {.count = 1, .reusable = true}, SHIFT(282),
  [43] = {.count = 1, .reusable = true}, SHIFT(317),
  [45] = {.count = 1, .reusable = true}, SHIFT(206),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(280),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(496),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(377),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(224),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(376),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(375),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(223),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(221),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(220),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(383),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(451),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(4),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(372),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(585),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(385),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(284),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(282),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(317),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(206),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [110] = {.count = 1, .reusable = true}, SHIFT(261),
  [112] = {.count = 1, .reusable = true}, SHIFT(390),
  [114] = {.count = 1, .reusable = true}, SHIFT(32),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(261),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(390),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(32),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [131] = {.count = 1, .reusable = false}, SHIFT(91),
  [133] = {.count = 1, .reusable = true}, SHIFT(285),
  [135] = {.count = 1, .reusable = true}, SHIFT(267),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(456),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [148] = {.count = 1, .reusable = true}, SHIFT(384),
  [150] = {.count = 1, .reusable = false}, SHIFT(90),
  [152] = {.count = 1, .reusable = true}, SHIFT(260),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [158] = {.count = 1, .reusable = false}, SHIFT(77),
  [160] = {.count = 1, .reusable = true}, SHIFT(262),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2),
  [164] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 2),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(285),
  [169] = {.count = 1, .reusable = true}, SHIFT(456),
  [171] = {.count = 1, .reusable = true}, SHIFT(457),
  [173] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(384),
  [180] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(457),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [211] = {.count = 1, .reusable = false}, SHIFT(126),
  [213] = {.count = 1, .reusable = true}, SHIFT(583),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(413),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(583),
  [222] = {.count = 1, .reusable = true}, SHIFT(397),
  [224] = {.count = 1, .reusable = false}, SHIFT(123),
  [226] = {.count = 1, .reusable = true}, SHIFT(305),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(397),
  [233] = {.count = 1, .reusable = true}, SHIFT(584),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(305),
  [238] = {.count = 1, .reusable = false}, SHIFT(113),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(584),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [247] = {.count = 1, .reusable = false}, SHIFT(142),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [253] = {.count = 1, .reusable = false}, SHIFT(145),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [257] = {.count = 1, .reusable = true}, SHIFT(422),
  [259] = {.count = 1, .reusable = false}, SHIFT(70),
  [261] = {.count = 1, .reusable = false}, SHIFT(422),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_path, 2),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 2),
  [267] = {.count = 1, .reusable = true}, SHIFT(388),
  [269] = {.count = 1, .reusable = true}, SHIFT(389),
  [271] = {.count = 1, .reusable = false}, SHIFT(79),
  [273] = {.count = 1, .reusable = false}, SHIFT(389),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [281] = {.count = 1, .reusable = false}, SHIFT(136),
  [283] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(388),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(389),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(79),
  [294] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(389),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_add, 2),
  [299] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(422),
  [304] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2),
  [306] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(422),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [313] = {.count = 1, .reusable = false}, SHIFT(75),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [317] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [319] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [321] = {.count = 1, .reusable = false}, SHIFT(93),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [327] = {.count = 1, .reusable = false}, SHIFT(162),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [333] = {.count = 1, .reusable = false}, SHIFT(161),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [339] = {.count = 1, .reusable = true}, SHIFT(269),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [343] = {.count = 1, .reusable = true}, SHIFT(414),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_path, 4),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_path, 4),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [353] = {.count = 1, .reusable = false}, SHIFT(170),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [359] = {.count = 1, .reusable = true}, SHIFT(264),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_path, 6),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_path, 6),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_path, 5),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_path, 5),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [379] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [381] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(395),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [386] = {.count = 1, .reusable = true}, SHIFT(278),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [392] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [394] = {.count = 1, .reusable = false}, SHIFT(190),
  [396] = {.count = 1, .reusable = true}, SHIFT(287),
  [398] = {.count = 1, .reusable = true}, SHIFT(592),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [402] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(409),
  [405] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(409),
  [408] = {.count = 1, .reusable = true}, SHIFT(409),
  [410] = {.count = 1, .reusable = false}, SHIFT(213),
  [412] = {.count = 1, .reusable = false}, SHIFT(409),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(591),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [421] = {.count = 1, .reusable = false}, SHIFT(177),
  [423] = {.count = 1, .reusable = true}, SHIFT(591),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [429] = {.count = 1, .reusable = true}, SHIFT(395),
  [431] = {.count = 1, .reusable = false}, SHIFT(212),
  [433] = {.count = 1, .reusable = false}, SHIFT(205),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(592),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(287),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [443] = {.count = 1, .reusable = true}, SHIFT(243),
  [445] = {.count = 1, .reusable = true}, SHIFT(235),
  [447] = {.count = 1, .reusable = false}, SHIFT(452),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [451] = {.count = 1, .reusable = true}, SHIFT(249),
  [453] = {.count = 1, .reusable = true}, SHIFT(229),
  [455] = {.count = 1, .reusable = false}, SHIFT(528),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [459] = {.count = 1, .reusable = false}, SHIFT(531),
  [461] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [463] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels, 2),
  [465] = {.count = 2, .reusable = false}, REDUCE(aux_sym__labels, 2), SHIFT_REPEAT(531),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [470] = {.count = 1, .reusable = true}, SHIFT(259),
  [472] = {.count = 1, .reusable = true}, SHIFT(231),
  [474] = {.count = 1, .reusable = false}, SHIFT(556),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [478] = {.count = 1, .reusable = true}, SHIFT(258),
  [480] = {.count = 1, .reusable = true}, SHIFT(230),
  [482] = {.count = 1, .reusable = false}, SHIFT(476),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 1),
  [488] = {.count = 1, .reusable = true}, SHIFT(511),
  [490] = {.count = 1, .reusable = false}, SHIFT(444),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [494] = {.count = 1, .reusable = true}, SHIFT(233),
  [496] = {.count = 1, .reusable = false}, SHIFT(573),
  [498] = {.count = 1, .reusable = false}, SHIFT(442),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 2),
  [502] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [504] = {.count = 2, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2), SHIFT_REPEAT(442),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [509] = {.count = 1, .reusable = false}, SHIFT(165),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [515] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [517] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(165),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [524] = {.count = 1, .reusable = true}, SHIFT(232),
  [526] = {.count = 1, .reusable = false}, SHIFT(488),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [530] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [532] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(160),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 2),
  [537] = {.count = 1, .reusable = false}, SHIFT(160),
  [539] = {.count = 1, .reusable = true}, SHIFT(218),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair_eq, 3),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair_eq, 3),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_user, 2),
  [547] = {.count = 1, .reusable = true}, SHIFT(429),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [551] = {.count = 1, .reusable = false}, SHIFT(520),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3),
  [561] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3),
  [563] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [565] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [573] = {.count = 1, .reusable = true}, SHIFT(521),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [577] = {.count = 1, .reusable = false}, SHIFT(503),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [581] = {.count = 1, .reusable = false}, SHIFT(490),
  [583] = {.count = 1, .reusable = true}, SHIFT(428),
  [585] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [589] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 3),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 3),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 2),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 2),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_user, 6),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 2),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_env, 2),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 2),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 2),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_run, 2),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 2),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [637] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 2),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [653] = {.count = 1, .reusable = true}, SHIFT(178),
  [655] = {.count = 1, .reusable = true}, SHIFT(555),
  [657] = {.count = 1, .reusable = true}, SHIFT(549),
  [659] = {.count = 1, .reusable = true}, SHIFT(543),
  [661] = {.count = 1, .reusable = true}, SHIFT(537),
  [663] = {.count = 1, .reusable = true}, SHIFT(532),
  [665] = {.count = 1, .reusable = true}, SHIFT(391),
  [667] = {.count = 1, .reusable = true}, SHIFT(393),
  [669] = {.count = 1, .reusable = false}, SHIFT(73),
  [671] = {.count = 1, .reusable = true}, SHIFT(563),
  [673] = {.count = 1, .reusable = true}, SHIFT(561),
  [675] = {.count = 1, .reusable = true}, SHIFT(349),
  [677] = {.count = 1, .reusable = true}, SHIFT(276),
  [679] = {.count = 1, .reusable = true}, SHIFT(283),
  [681] = {.count = 1, .reusable = true}, SHIFT(247),
  [683] = {.count = 1, .reusable = true}, SHIFT(194),
  [685] = {.count = 1, .reusable = true}, SHIFT(215),
  [687] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(417),
  [690] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(493),
  [693] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(492),
  [696] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(491),
  [699] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(301),
  [702] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(555),
  [705] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(549),
  [708] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(543),
  [711] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(537),
  [714] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [716] = {.count = 1, .reusable = true}, SHIFT(252),
  [718] = {.count = 1, .reusable = true}, SHIFT(423),
  [720] = {.count = 1, .reusable = false}, SHIFT(158),
  [722] = {.count = 1, .reusable = true}, SHIFT(470),
  [724] = {.count = 1, .reusable = true}, SHIFT(469),
  [726] = {.count = 1, .reusable = true}, SHIFT(314),
  [728] = {.count = 1, .reusable = true}, SHIFT(244),
  [730] = {.count = 1, .reusable = true}, SHIFT(255),
  [732] = {.count = 1, .reusable = true}, SHIFT(240),
  [734] = {.count = 1, .reusable = true}, SHIFT(242),
  [736] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(417),
  [739] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(493),
  [742] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(492),
  [745] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(491),
  [748] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(301),
  [751] = {.count = 1, .reusable = true}, SHIFT(239),
  [753] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(417),
  [756] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(493),
  [759] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(492),
  [762] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(491),
  [765] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(301),
  [768] = {.count = 1, .reusable = true}, SHIFT(382),
  [770] = {.count = 1, .reusable = false}, SHIFT(130),
  [772] = {.count = 1, .reusable = true}, SHIFT(479),
  [774] = {.count = 1, .reusable = true}, SHIFT(495),
  [776] = {.count = 1, .reusable = true}, SHIFT(307),
  [778] = {.count = 1, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2),
  [780] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(283),
  [783] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(247),
  [786] = {.count = 1, .reusable = false}, REDUCE(aux_sym_copy_repeat1, 2),
  [788] = {.count = 1, .reusable = true}, SHIFT(418),
  [790] = {.count = 1, .reusable = false}, SHIFT(180),
  [792] = {.count = 1, .reusable = true}, SHIFT(575),
  [794] = {.count = 1, .reusable = true}, SHIFT(569),
  [796] = {.count = 1, .reusable = true}, SHIFT(350),
  [798] = {.count = 1, .reusable = true}, SHIFT(421),
  [800] = {.count = 1, .reusable = false}, SHIFT(147),
  [802] = {.count = 1, .reusable = true}, SHIFT(472),
  [804] = {.count = 1, .reusable = true}, SHIFT(471),
  [806] = {.count = 1, .reusable = true}, SHIFT(348),
  [808] = {.count = 1, .reusable = true}, SHIFT(408),
  [810] = {.count = 1, .reusable = false}, SHIFT(515),
  [812] = {.count = 1, .reusable = true}, SHIFT(514),
  [814] = {.count = 1, .reusable = true}, SHIFT(513),
  [816] = {.count = 1, .reusable = true}, SHIFT(327),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [820] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [822] = {.count = 1, .reusable = true}, SHIFT(322),
  [824] = {.count = 1, .reusable = true}, SHIFT(401),
  [826] = {.count = 1, .reusable = true}, SHIFT(341),
  [828] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [830] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [832] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [834] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [838] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [842] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [846] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [850] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [854] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [858] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [862] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [866] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [870] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [872] = {.count = 1, .reusable = true}, SHIFT(309),
  [874] = {.count = 1, .reusable = true}, REDUCE(sym__from_layer, 3),
  [876] = {.count = 1, .reusable = false}, REDUCE(sym__from_layer, 3),
  [878] = {.count = 1, .reusable = true}, SHIFT(201),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym__chown, 3),
  [882] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 3),
  [884] = {.count = 1, .reusable = true}, SHIFT(187),
  [886] = {.count = 1, .reusable = true}, SHIFT(405),
  [888] = {.count = 1, .reusable = true}, SHIFT(434),
  [890] = {.count = 1, .reusable = true}, SHIFT(435),
  [892] = {.count = 1, .reusable = true}, SHIFT(367),
  [894] = {.count = 1, .reusable = true}, SHIFT(403),
  [896] = {.count = 1, .reusable = true}, SHIFT(155),
  [898] = {.count = 1, .reusable = true}, SHIFT(173),
  [900] = {.count = 1, .reusable = true}, SHIFT(315),
  [902] = {.count = 1, .reusable = true}, SHIFT(268),
  [904] = {.count = 1, .reusable = true}, SHIFT(463),
  [906] = {.count = 1, .reusable = true}, SHIFT(462),
  [908] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [910] = {.count = 1, .reusable = true}, SHIFT(398),
  [912] = {.count = 1, .reusable = false}, SHIFT(459),
  [914] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 2),
  [916] = {.count = 1, .reusable = true}, SHIFT(71),
  [918] = {.count = 1, .reusable = true}, SHIFT(75),
  [920] = {.count = 1, .reusable = true}, SHIFT(419),
  [922] = {.count = 1, .reusable = false}, SHIFT(464),
  [924] = {.count = 1, .reusable = false}, SHIFT(419),
  [926] = {.count = 1, .reusable = false}, SHIFT(443),
  [928] = {.count = 1, .reusable = true}, SHIFT(172),
  [930] = {.count = 1, .reusable = true}, SHIFT(441),
  [932] = {.count = 1, .reusable = true}, SHIFT(396),
  [934] = {.count = 1, .reusable = false}, SHIFT(550),
  [936] = {.count = 1, .reusable = true}, SHIFT(270),
  [938] = {.count = 1, .reusable = true}, SHIFT(587),
  [940] = {.count = 1, .reusable = true}, SHIFT(588),
  [942] = {.count = 1, .reusable = true}, SHIFT(304),
  [944] = {.count = 1, .reusable = true}, SHIFT(179),
  [946] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [948] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(396),
  [951] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(587),
  [954] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(588),
  [957] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(304),
  [960] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2),
  [962] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(419),
  [965] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2),
  [967] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(419),
  [970] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [972] = {.count = 1, .reusable = false}, SHIFT(571),
  [974] = {.count = 1, .reusable = true}, SHIFT(579),
  [976] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 4),
  [978] = {.count = 1, .reusable = true}, SHIFT(580),
  [980] = {.count = 1, .reusable = true}, SHIFT(306),
  [982] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [984] = {.count = 1, .reusable = true}, SHIFT(318),
  [986] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [988] = {.count = 1, .reusable = true}, SHIFT(387),
  [990] = {.count = 1, .reusable = true}, SHIFT(402),
  [992] = {.count = 1, .reusable = false}, SHIFT(193),
  [994] = {.count = 1, .reusable = false}, SHIFT(402),
  [996] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [998] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(318),
  [1001] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(306),
  [1004] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(580),
  [1007] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(579),
  [1010] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [1012] = {.count = 1, .reusable = true}, SHIFT(114),
  [1014] = {.count = 1, .reusable = false}, SHIFT(527),
  [1016] = {.count = 1, .reusable = true}, SHIFT(274),
  [1018] = {.count = 1, .reusable = true}, SHIFT(359),
  [1020] = {.count = 1, .reusable = true}, SHIFT(53),
  [1022] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [1024] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [1026] = {.count = 1, .reusable = false}, SHIFT(453),
  [1028] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 3),
  [1030] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(398),
  [1033] = {.count = 1, .reusable = false}, SHIFT(593),
  [1035] = {.count = 1, .reusable = true}, SHIFT(263),
  [1037] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [1039] = {.count = 1, .reusable = true}, SHIFT(400),
  [1041] = {.count = 1, .reusable = true}, SHIFT(82),
  [1043] = {.count = 1, .reusable = false}, SHIFT(517),
  [1045] = {.count = 1, .reusable = true}, SHIFT(213),
  [1047] = {.count = 1, .reusable = false}, SHIFT(536),
  [1049] = {.count = 1, .reusable = true}, SHIFT(63),
  [1051] = {.count = 1, .reusable = true}, SHIFT(209),
  [1053] = {.count = 1, .reusable = false}, SHIFT(539),
  [1055] = {.count = 1, .reusable = true}, SHIFT(23),
  [1057] = {.count = 1, .reusable = true}, SHIFT(118),
  [1059] = {.count = 1, .reusable = true}, SHIFT(380),
  [1061] = {.count = 1, .reusable = true}, SHIFT(507),
  [1063] = {.count = 1, .reusable = true}, SHIFT(365),
  [1065] = {.count = 1, .reusable = true}, SHIFT(362),
  [1067] = {.count = 1, .reusable = true}, SHIFT(427),
  [1069] = {.count = 1, .reusable = true}, SHIFT(426),
  [1071] = {.count = 1, .reusable = true}, SHIFT(198),
  [1073] = {.count = 1, .reusable = true}, SHIFT(135),
  [1075] = {.count = 1, .reusable = true}, SHIFT(192),
  [1077] = {.count = 1, .reusable = true}, SHIFT(175),
  [1079] = {.count = 1, .reusable = true}, SHIFT(174),
  [1081] = {.count = 1, .reusable = true}, SHIFT(392),
  [1083] = {.count = 1, .reusable = true}, SHIFT(598),
  [1085] = {.count = 1, .reusable = true}, SHIFT(54),
  [1087] = {.count = 1, .reusable = true}, SHIFT(531),
  [1089] = {.count = 1, .reusable = true}, SHIFT(582),
  [1091] = {.count = 1, .reusable = true}, SHIFT(22),
  [1093] = {.count = 1, .reusable = true}, SHIFT(208),
  [1095] = {.count = 1, .reusable = true}, SHIFT(526),
  [1097] = {.count = 1, .reusable = true}, SHIFT(590),
  [1099] = {.count = 1, .reusable = true}, SHIFT(368),
  [1101] = {.count = 1, .reusable = true}, SHIFT(386),
  [1103] = {.count = 1, .reusable = false}, SHIFT(529),
  [1105] = {.count = 1, .reusable = false}, SHIFT(386),
  [1107] = {.count = 1, .reusable = true}, SHIFT(404),
  [1109] = {.count = 1, .reusable = false}, SHIFT(523),
  [1111] = {.count = 1, .reusable = false}, SHIFT(404),
  [1113] = {.count = 1, .reusable = true}, SHIFT(522),
  [1115] = {.count = 1, .reusable = true}, SHIFT(87),
  [1117] = {.count = 1, .reusable = true}, SHIFT(577),
  [1119] = {.count = 1, .reusable = true}, SHIFT(45),
  [1121] = {.count = 1, .reusable = true}, SHIFT(415),
  [1123] = {.count = 1, .reusable = true}, SHIFT(266),
  [1125] = {.count = 1, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2),
  [1127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2), SHIFT_REPEAT(392),
  [1130] = {.count = 1, .reusable = true}, REDUCE(aux_sym_label_value_repeat2, 2),
  [1132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_label_value_repeat2, 2), SHIFT_REPEAT(394),
  [1135] = {.count = 1, .reusable = true}, SHIFT(600),
  [1137] = {.count = 1, .reusable = true}, SHIFT(117),
  [1139] = {.count = 1, .reusable = true}, SHIFT(599),
  [1141] = {.count = 1, .reusable = true}, SHIFT(360),
  [1143] = {.count = 1, .reusable = true}, SHIFT(595),
  [1145] = {.count = 1, .reusable = true}, SHIFT(366),
  [1147] = {.count = 1, .reusable = true}, SHIFT(596),
  [1149] = {.count = 1, .reusable = true}, SHIFT(363),
  [1151] = {.count = 1, .reusable = true}, SHIFT(399),
  [1153] = {.count = 1, .reusable = true}, SHIFT(406),
  [1155] = {.count = 1, .reusable = true}, SHIFT(586),
  [1157] = {.count = 1, .reusable = true}, SHIFT(120),
  [1159] = {.count = 1, .reusable = true}, SHIFT(594),
  [1161] = {.count = 1, .reusable = true}, SHIFT(506),
  [1163] = {.count = 1, .reusable = true}, SHIFT(394),
  [1165] = {.count = 1, .reusable = true}, SHIFT(416),
  [1167] = {.count = 1, .reusable = true}, SHIFT(84),
  [1169] = {.count = 1, .reusable = true}, SHIFT(597),
  [1171] = {.count = 1, .reusable = true}, SHIFT(265),
  [1173] = {.count = 1, .reusable = true}, SHIFT(411),
  [1175] = {.count = 1, .reusable = true}, SHIFT(323),
  [1177] = {.count = 1, .reusable = true}, SHIFT(195),
  [1179] = {.count = 1, .reusable = true}, SHIFT(203),
  [1181] = {.count = 1, .reusable = true}, SHIFT(211),
  [1183] = {.count = 1, .reusable = true}, SHIFT(438),
  [1185] = {.count = 1, .reusable = true}, SHIFT(439),
  [1187] = {.count = 1, .reusable = true}, SHIFT(277),
  [1189] = {.count = 1, .reusable = true}, SHIFT(310),
  [1191] = {.count = 1, .reusable = true}, SHIFT(330),
  [1193] = {.count = 1, .reusable = true}, SHIFT(288),
  [1195] = {.count = 1, .reusable = true}, SHIFT(482),
  [1197] = {.count = 1, .reusable = true}, SHIFT(481),
  [1199] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(99),
  [1202] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1204] = {.count = 1, .reusable = true}, SHIFT(410),
  [1206] = {.count = 1, .reusable = true}, SHIFT(483),
  [1208] = {.count = 1, .reusable = true}, SHIFT(381),
  [1210] = {.count = 1, .reusable = true}, SHIFT(165),
  [1212] = {.count = 1, .reusable = true}, SHIFT(468),
  [1214] = {.count = 1, .reusable = true}, SHIFT(445),
  [1216] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 1),
  [1218] = {.count = 1, .reusable = true}, SHIFT(449),
  [1220] = {.count = 1, .reusable = true}, SHIFT(467),
  [1222] = {.count = 1, .reusable = true}, SHIFT(160),
  [1224] = {.count = 1, .reusable = true}, SHIFT(465),
  [1226] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 4),
  [1228] = {.count = 1, .reusable = true}, SHIFT(257),
  [1230] = {.count = 1, .reusable = true}, SHIFT(256),
  [1232] = {.count = 1, .reusable = true}, SHIFT(535),
  [1234] = {.count = 1, .reusable = true}, SHIFT(534),
  [1236] = {.count = 1, .reusable = true}, SHIFT(26),
  [1238] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 3),
  [1240] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 3),
  [1242] = {.count = 1, .reusable = true}, SHIFT(85),
  [1244] = {.count = 1, .reusable = true}, SHIFT(525),
  [1246] = {.count = 1, .reusable = true}, SHIFT(518),
  [1248] = {.count = 1, .reusable = true}, SHIFT(245),
  [1250] = {.count = 1, .reusable = true}, SHIFT(509),
  [1252] = {.count = 1, .reusable = true}, SHIFT(504),
  [1254] = {.count = 1, .reusable = true}, SHIFT(497),
  [1256] = {.count = 1, .reusable = true}, SHIFT(494),
  [1258] = {.count = 1, .reusable = true}, SHIFT(296),
  [1260] = {.count = 1, .reusable = true}, SHIFT(295),
  [1262] = {.count = 1, .reusable = true}, SHIFT(294),
  [1264] = {.count = 1, .reusable = true}, SHIFT(454),
  [1266] = {.count = 1, .reusable = true}, SHIFT(31),
  [1268] = {.count = 1, .reusable = true}, SHIFT(34),
  [1270] = {.count = 1, .reusable = true}, SHIFT(458),
  [1272] = {.count = 1, .reusable = true}, SHIFT(446),
  [1274] = {.count = 1, .reusable = true}, SHIFT(331),
  [1276] = {.count = 1, .reusable = true}, SHIFT(332),
  [1278] = {.count = 1, .reusable = true}, SHIFT(333),
  [1280] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 2),
  [1282] = {.count = 1, .reusable = true}, SHIFT(567),
  [1284] = {.count = 1, .reusable = true}, SHIFT(254),
  [1286] = {.count = 1, .reusable = true}, SHIFT(455),
  [1288] = {.count = 1, .reusable = true}, SHIFT(474),
  [1290] = {.count = 1, .reusable = true}, SHIFT(475),
  [1292] = {.count = 1, .reusable = true}, SHIFT(273),
  [1294] = {.count = 1, .reusable = true}, SHIFT(47),
  [1296] = {.count = 1, .reusable = true}, SHIFT(478),
  [1298] = {.count = 1, .reusable = true}, SHIFT(163),
  [1300] = {.count = 1, .reusable = true}, SHIFT(61),
  [1302] = {.count = 1, .reusable = true}, SHIFT(7),
  [1304] = {.count = 1, .reusable = true}, SHIFT(17),
  [1306] = {.count = 1, .reusable = true}, SHIFT(16),
  [1308] = {.count = 1, .reusable = true}, SHIFT(250),
  [1310] = {.count = 1, .reusable = true}, SHIFT(60),
  [1312] = {.count = 1, .reusable = true}, SHIFT(489),
  [1314] = {.count = 1, .reusable = true}, SHIFT(69),
  [1316] = {.count = 1, .reusable = true}, SHIFT(129),
  [1318] = {.count = 1, .reusable = true}, SHIFT(68),
  [1320] = {.count = 1, .reusable = true}, SHIFT(72),
  [1322] = {.count = 1, .reusable = true}, SHIFT(152),
  [1324] = {.count = 1, .reusable = true}, SHIFT(279),
  [1326] = {.count = 1, .reusable = true}, SHIFT(485),
  [1328] = {.count = 1, .reusable = true}, SHIFT(486),
  [1330] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 1),
  [1332] = {.count = 1, .reusable = true}, SHIFT(185),
  [1334] = {.count = 1, .reusable = true}, SHIFT(81),
  [1336] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1338] = {.count = 1, .reusable = true}, SHIFT(281),
  [1340] = {.count = 1, .reusable = true}, SHIFT(501),
  [1342] = {.count = 1, .reusable = true}, SHIFT(207),
  [1344] = {.count = 1, .reusable = true}, SHIFT(290),
  [1346] = {.count = 1, .reusable = true}, SHIFT(70),
  [1348] = {.count = 1, .reusable = true}, SHIFT(246),
  [1350] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1352] = {.count = 1, .reusable = true}, SHIFT(216),
  [1354] = {.count = 1, .reusable = true}, SHIFT(565),
  [1356] = {.count = 1, .reusable = true}, SHIFT(205),
  [1358] = {.count = 1, .reusable = true}, SHIFT(248),
  [1360] = {.count = 1, .reusable = true}, SHIFT(292),
  [1362] = {.count = 1, .reusable = true}, SHIFT(297),
  [1364] = {.count = 1, .reusable = true}, SHIFT(99),
  [1366] = {.count = 1, .reusable = true}, SHIFT(24),
  [1368] = {.count = 1, .reusable = true}, SHIFT(19),
  [1370] = {.count = 1, .reusable = true}, SHIFT(436),
  [1372] = {.count = 1, .reusable = true}, SHIFT(57),
  [1374] = {.count = 1, .reusable = true}, SHIFT(200),
  [1376] = {.count = 1, .reusable = true}, SHIFT(355),
  [1378] = {.count = 1, .reusable = true}, SHIFT(369),
  [1380] = {.count = 1, .reusable = true}, SHIFT(379),
  [1382] = {.count = 1, .reusable = true}, SHIFT(425),
  [1384] = {.count = 1, .reusable = true}, SHIFT(21),
  [1386] = {.count = 1, .reusable = true}, SHIFT(25),
  [1388] = {.count = 1, .reusable = true}, SHIFT(55),
  [1390] = {.count = 1, .reusable = true}, SHIFT(52),
  [1392] = {.count = 1, .reusable = true}, SHIFT(48),
  [1394] = {.count = 1, .reusable = true}, SHIFT(433),
  [1396] = {.count = 1, .reusable = true}, SHIFT(122),
  [1398] = {.count = 1, .reusable = true}, SHIFT(374),
  [1400] = {.count = 1, .reusable = true}, SHIFT(356),
  [1402] = {.count = 1, .reusable = true}, SHIFT(370),
  [1404] = {.count = 1, .reusable = true}, SHIFT(437),
  [1406] = {.count = 1, .reusable = true}, SHIFT(530),
  [1408] = {.count = 1, .reusable = true}, SHIFT(371),
  [1410] = {.count = 1, .reusable = true}, SHIFT(116),
  [1412] = {.count = 1, .reusable = true}, SHIFT(115),
  [1414] = {.count = 1, .reusable = true}, SHIFT(128),
  [1416] = {.count = 1, .reusable = true}, SHIFT(499),
  [1418] = {.count = 1, .reusable = true}, SHIFT(508),
  [1420] = {.count = 1, .reusable = true}, SHIFT(500),
  [1422] = {.count = 1, .reusable = true}, SHIFT(364),
  [1424] = {.count = 1, .reusable = true}, SHIFT(241),
  [1426] = {.count = 1, .reusable = true}, SHIFT(361),
  [1428] = {.count = 1, .reusable = true}, SHIFT(251),
  [1430] = {.count = 1, .reusable = true}, SHIFT(271),
  [1432] = {.count = 1, .reusable = true}, SHIFT(581),
  [1434] = {.count = 1, .reusable = true}, SHIFT(51),
  [1436] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 5),
  [1438] = {.count = 1, .reusable = true}, SHIFT(358),
  [1440] = {.count = 1, .reusable = true}, SHIFT(524),
  [1442] = {.count = 1, .reusable = true}, SHIFT(121),
  [1444] = {.count = 1, .reusable = true}, SHIFT(589),
  [1446] = {.count = 1, .reusable = true}, SHIFT(97),
  [1448] = {.count = 1, .reusable = true}, SHIFT(344),
  [1450] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1452] = {.count = 1, .reusable = true}, SHIFT(540),
  [1454] = {.count = 1, .reusable = true}, SHIFT(541),
  [1456] = {.count = 1, .reusable = true}, SHIFT(98),
  [1458] = {.count = 1, .reusable = true}, SHIFT(346),
  [1460] = {.count = 1, .reusable = true}, SHIFT(546),
  [1462] = {.count = 1, .reusable = true}, SHIFT(547),
  [1464] = {.count = 1, .reusable = true}, SHIFT(199),
  [1466] = {.count = 1, .reusable = true}, SHIFT(347),
  [1468] = {.count = 1, .reusable = true}, SHIFT(552),
  [1470] = {.count = 1, .reusable = true}, SHIFT(553),
  [1472] = {.count = 1, .reusable = true}, SHIFT(110),
  [1474] = {.count = 1, .reusable = true}, SHIFT(351),
  [1476] = {.count = 1, .reusable = true}, SHIFT(558),
  [1478] = {.count = 1, .reusable = true}, SHIFT(559),
  [1480] = {.count = 1, .reusable = true}, SHIFT(275),
  [1482] = {.count = 1, .reusable = true}, SHIFT(352),
  [1484] = {.count = 1, .reusable = true}, SHIFT(353),
  [1486] = {.count = 1, .reusable = true}, SHIFT(354),
  [1488] = {.count = 1, .reusable = true}, SHIFT(286),
  [1490] = {.count = 1, .reusable = true}, SHIFT(328),
  [1492] = {.count = 1, .reusable = true}, SHIFT(326),
  [1494] = {.count = 1, .reusable = true}, SHIFT(324),
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
