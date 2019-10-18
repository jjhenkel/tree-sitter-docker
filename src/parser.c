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
#define STATE_COUNT 602
#define SYMBOL_COUNT 180
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
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
  sym_env_key = 47,
  sym_env_value = 48,
  anon_sym_DASH = 49,
  aux_sym__port_part_token1 = 50,
  anon_sym_SLASH = 51,
  aux_sym_port_protocol_token1 = 52,
  aux_sym_port_protocol_token2 = 53,
  aux_sym__repository_start_token1 = 54,
  sym_hc_none = 55,
  anon_sym_DASH_DASHinterval = 56,
  aux_sym_hc_interval_token1 = 57,
  anon_sym_DASH_DASHtimeout = 58,
  anon_sym_DASH_DASHstart_DASHperiod = 59,
  anon_sym_DASH_DASHretries = 60,
  aux_sym__hc_command_token1 = 61,
  aux_sym_label_pair_token1 = 62,
  sym_label_key = 63,
  aux_sym_label_value_token1 = 64,
  aux_sym_label_value_token2 = 65,
  aux_sym_label_value_token3 = 66,
  anon_sym_SQUOTE = 67,
  aux_sym_label_value_token4 = 68,
  sym_signal_num = 69,
  aux_sym_signal_name_token1 = 70,
  aux_sym_signal_name_token2 = 71,
  aux_sym_user_name_token1 = 72,
  aux_sym_user_id_token1 = 73,
  aux_sym_path_token1 = 74,
  aux_sym_path_token2 = 75,
  aux_sym_path_token3 = 76,
  aux_sym_path_token4 = 77,
  aux_sym__anything_token1 = 78,
  anon_sym_LBRACE = 79,
  anon_sym_RBRACE = 80,
  anon_sym_COLON_DASH = 81,
  aux_sym_variable_default_value_token1 = 82,
  anon_sym_COLON_PLUS = 83,
  sym__docker_variable = 84,
  sym_template_expr_curly_braces = 85,
  sym_template_expr_percent_signs = 86,
  aux_sym_template_expr_less_than_equals_token1 = 87,
  aux_sym_template_expr_less_than_equals_token2 = 88,
  aux_sym_template_expr_less_than_equals_token3 = 89,
  sym__space = 90,
  sym__blank_line = 91,
  sym__space_no_newline = 92,
  sym_comment = 93,
  sym_line_continuation = 94,
  sym_json_array = 95,
  sym_dockerfile = 96,
  sym__directive = 97,
  sym_add = 98,
  sym_arg = 99,
  sym_cmd = 100,
  sym_copy = 101,
  sym_entrypoint = 102,
  sym_env = 103,
  sym_expose = 104,
  sym_from = 105,
  sym_healthcheck = 106,
  sym_label = 107,
  sym_maintainer = 108,
  sym_onbuild = 109,
  sym_run = 110,
  sym_shell = 111,
  sym_stopsignal = 112,
  sym_user = 113,
  sym_volume = 114,
  sym_workdir = 115,
  sym__chown = 116,
  sym__from_layer = 117,
  sym_from_layer = 118,
  sym_chown = 119,
  sym__env_pairs = 120,
  sym_env_pair = 121,
  sym__port_spec = 122,
  sym_mapped_port = 123,
  sym_mapped_no_lhs = 124,
  sym__port = 125,
  sym_port = 126,
  sym_port_range = 127,
  sym__port_part = 128,
  sym_port_protocol = 129,
  sym_platform = 130,
  sym_repository = 131,
  sym__repository_start = 132,
  sym__repository_continued = 133,
  sym_image = 134,
  sym_tag = 135,
  sym_digest = 136,
  sym_as_name = 137,
  sym__hc_interval = 138,
  sym_hc_interval = 139,
  sym__hc_timeout = 140,
  sym_hc_timeout = 141,
  sym__hc_start_period = 142,
  sym_hc_start_period = 143,
  sym__hc_retries = 144,
  sym_hc_retries = 145,
  sym__hc_options = 146,
  sym__hc_command = 147,
  sym_hc_command = 148,
  aux_sym__labels = 149,
  sym_label_pair = 150,
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
  aux_sym_copy_repeat1 = 166,
  aux_sym_expose_repeat1 = 167,
  aux_sym_healthcheck_repeat1 = 168,
  aux_sym_from_layer_repeat1 = 169,
  aux_sym_from_layer_repeat2 = 170,
  aux_sym_from_layer_repeat3 = 171,
  aux_sym_from_layer_repeat4 = 172,
  aux_sym__env_pairs_repeat1 = 173,
  aux_sym_repository_repeat1 = 174,
  aux_sym_label_value_repeat1 = 175,
  aux_sym_label_value_repeat2 = 176,
  aux_sym_path_repeat1 = 177,
  aux_sym_path_repeat2 = 178,
  aux_sym_template_expr_less_than_equals_repeat1 = 179,
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
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '#') ADVANCE(957);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '%') ADVANCE(789);
      if (lookahead == '\'') ADVANCE(943);
      if (lookahead == '-') ADVANCE(819);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(329);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(325);
      if (lookahead == '[') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '{') ADVANCE(1232);
      if (lookahead == '}') ADVANCE(1233);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1255);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(955);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(1107);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '#') ADVANCE(957);
      if (lookahead == '$') ADVANCE(316);
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
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1255);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1107);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '#') ADVANCE(957);
      if (lookahead == '$') ADVANCE(316);
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
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(956);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(1107);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '-') ADVANCE(818);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(206);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(184);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(191);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(1269);
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
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(206);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(184);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(191);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1257);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(206);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(184);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(191);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1257);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(1269);
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
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (lookahead != 0) ADVANCE(1123);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(1269);
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
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0) ADVANCE(1123);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(705);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(741);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(760);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(711);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(696);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(697);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(771);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(721);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(764);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(748);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(750);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '{') ADVANCE(777);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(705);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(741);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(760);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(711);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(696);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(697);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(771);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(721);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(764);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(748);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(750);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '{') ADVANCE(777);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(705);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(739);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(741);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(760);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(711);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(696);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(697);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(771);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(721);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(764);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(748);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(750);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '{') ADVANCE(777);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '%') ADVANCE(789);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(556);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(507);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(492);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(493);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(517);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(560);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(544);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(546);
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(365);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '%') ADVANCE(789);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(556);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(507);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(492);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(493);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(517);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(560);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(544);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(546);
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(365);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '%') ADVANCE(789);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(501);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(535);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(556);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(507);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(492);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(493);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(517);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(560);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(544);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(546);
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '@') ADVANCE(288);
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
      if (lookahead == '\\') ADVANCE(574);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(367);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '@') ADVANCE(288);
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
      if (lookahead == '\\') ADVANCE(574);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(367);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '<') ADVANCE(127);
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
      if (lookahead == '\\') ADVANCE(574);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(368);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
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
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(455);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(406);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(391);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(392);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(466);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(416);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(459);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(443);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(371);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(363);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(455);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(406);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(391);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(392);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(466);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(416);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(459);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(443);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(371);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(363);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(455);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(406);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(391);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(392);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(466);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(416);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(459);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(443);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(371);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(364);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1253);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(87);
      if (lookahead == '-') ADVANCE(818);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(181);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(150);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(191);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(193);
      if (lookahead == '[') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '}') ADVANCE(781);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(1254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(223);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(224);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(1137);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1137);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == ' ') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(811);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(34);
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\\') ADVANCE(936);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(938);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(225);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '#') ADVANCE(940);
      if (lookahead == '\\') ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(940);
      if (lookahead != 0) ADVANCE(940);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1258);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1258);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '{') ADVANCE(777);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(694);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '%') ADVANCE(789);
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(491);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(574);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(593);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(371);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(390);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(1249);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(1247);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1249);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1249);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(945);
      if (lookahead == '\'') ADVANCE(943);
      if (lookahead == '\\') ADVANCE(947);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(945);
      if (lookahead != 0) ADVANCE(945);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(1246);
      if (lookahead == '\\') ADVANCE(1244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1246);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1246);
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
      if (lookahead == '#') ADVANCE(1243);
      if (lookahead == '\\') ADVANCE(1241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1243);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1243);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(1252);
      if (lookahead == '#') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"') ADVANCE(809);
      if (lookahead == '\'') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == ' ') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(805);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(813);
      END_STATE();
    case 52:
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == '"') ADVANCE(1140);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1121);
      END_STATE();
    case 53:
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == '"') ADVANCE(1140);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1121);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '\'') ADVANCE(943);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0) ADVANCE(938);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '#') ADVANCE(957);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '-') ADVANCE(959);
      if (lookahead == '[') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0) ADVANCE(1107);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '#') ADVANCE(957);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '[') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0) ADVANCE(1107);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(955);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(954);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(249);
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(809);
      if (lookahead == '\'') ADVANCE(813);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '#') ADVANCE(808);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0) ADVANCE(812);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '%') ADVANCE(791);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '}') ADVANCE(1233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(950);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '[') ADVANCE(1142);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0) ADVANCE(1123);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(952);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(827);
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0) ADVANCE(1123);
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(695);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '{') ADVANCE(777);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '%') ADVANCE(789);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 73:
      if (lookahead == '#') ADVANCE(573);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(574);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 74:
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '/') ADVANCE(821);
      if (lookahead == '\\') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 75:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '%') ADVANCE(789);
      if (lookahead == '-') ADVANCE(340);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(347);
      if (lookahead == '{') ADVANCE(777);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 76:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '%') ADVANCE(789);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(347);
      if (lookahead == 's') ADVANCE(351);
      if (lookahead == '{') ADVANCE(777);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 77:
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
    case 78:
      if (lookahead == '#') ADVANCE(360);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '\\') ADVANCE(359);
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
          lookahead != '}') ADVANCE(360);
      END_STATE();
    case 79:
      if (lookahead == '#') ADVANCE(1137);
      END_STATE();
    case 80:
      if (lookahead == '\'') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '+') ADVANCE(1238);
      if (lookahead == '-') ADVANCE(1234);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == '/') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '=') ADVANCE(339);
      END_STATE();
    case 87:
      if (lookahead == '>') ADVANCE(798);
      END_STATE();
    case 88:
      if (lookahead == '>') ADVANCE(798);
      if (lookahead != 0) ADVANCE(1251);
      END_STATE();
    case 89:
      if (lookahead == '>') ADVANCE(798);
      if (lookahead != 0) ADVANCE(1250);
      END_STATE();
    case 90:
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1137);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(829);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(826);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(828);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 124:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 125:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1137);
      END_STATE();
    case 126:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(833);
      if (lookahead == '#') ADVANCE(1269);
      if (lookahead == '=') ADVANCE(834);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1252);
      END_STATE();
    case 127:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(797);
      END_STATE();
    case 128:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(802);
      END_STATE();
    case 129:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(800);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 135:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(218);
      END_STATE();
    case 136:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 138:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 139:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 140:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(290);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 143:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(831);
      END_STATE();
    case 144:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 145:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 146:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 147:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 157:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(951);
      END_STATE();
    case 158:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(227);
      END_STATE();
    case 159:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 160:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 161:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(151);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 162:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(149);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 170:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(145);
      END_STATE();
    case 171:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(243);
      END_STATE();
    case 172:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 173:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 174:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 175:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 176:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 177:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 178:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 179:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 180:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 181:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(144);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 182:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(202);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 191:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 192:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 195:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 196:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 198:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 199:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(823);
      END_STATE();
    case 200:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(822);
      END_STATE();
    case 201:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 202:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 203:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(197);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 210:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 211:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 212:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(229);
      END_STATE();
    case 215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 217:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 218:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 219:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 220:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(231);
      END_STATE();
    case 221:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 222:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(817);
      END_STATE();
    case 223:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1279);
      END_STATE();
    case 224:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(25);
      END_STATE();
    case 225:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(1279);
      END_STATE();
    case 226:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 227:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 228:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 229:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 231:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 232:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 238:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 241:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 242:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 243:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
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
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1137);
      END_STATE();
    case 245:
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
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 246:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(953);
      END_STATE();
    case 248:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 249:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 250:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(250);
      END_STATE();
    case 251:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(812);
      END_STATE();
    case 252:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(64);
      END_STATE();
    case 253:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1137);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 254:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 255:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(938);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(935);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(960);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_from_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__from_layer_token1);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '2') ADVANCE(342);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '5') ADVANCE(343);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '6') ADVANCE(344);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(1267);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '=') ADVANCE(284);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(347);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'h') ADVANCE(349);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(348);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(356);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(352);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(353);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(361);
      if (lookahead == '%') ADVANCE(793);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '\\') ADVANCE(359);
      if (lookahead != 0 &&
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
          lookahead != '}') ADVANCE(360);
      END_STATE();
    case 360:
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
          lookahead != '}') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_from_layer_token2);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_from_layer_token3);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(363);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(364);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(365);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(366);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(367);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(368);
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
    case 369:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(370);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(372);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(373);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(374);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(376);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(380);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(381);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(384);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(387);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(389);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(401);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(407);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(402);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(454);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
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
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '\\') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(473);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(474);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(475);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(477);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(481);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(482);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(488);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(490);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(502);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(508);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(503);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(564);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
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
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(1266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
    case 575:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(575);
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
    case 576:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(576);
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
    case 577:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(577);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(579);
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
    case 580:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(580);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(583);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(584);
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
    case 585:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(586);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(587);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(322);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(589);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(590);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(591);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(312);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(592);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1258);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
    case 615:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
          lookahead != '}') ADVANCE(674);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
    case 633:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(657);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\\') ADVANCE(675);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(676);
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
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(677);
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
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(678);
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
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(679);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(680);
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
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(681);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(682);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(684);
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
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(685);
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
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(688);
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
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(689);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(690);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(691);
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
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(692);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(693);
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
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(694);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(702);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(724);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(731);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(725);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(735);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(772);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(714);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(730);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(722);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(706);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(718);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(676);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(678);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(728);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(688);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(698);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(736);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(761);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(677);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(745);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(704);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(712);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(751);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(710);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(719);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(743);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(747);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(737);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(744);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(762);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(708);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(693);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(767);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(773);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(684);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(685);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(692);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(734);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(709);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(682);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(707);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(754);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(716);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(768);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(756);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(701);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(770);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(769);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(700);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(717);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(732);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(758);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(755);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(766);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(727);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(774);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(765);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(752);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(753);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(729);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(775);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(749);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(683);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(689);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(713);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(723);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(715);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(720);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(759);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(679);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(690);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(699);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(746);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(726);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(740);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(681);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(757);
      if (lookahead == '{') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(695);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(778);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(776);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(779);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(780);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(782);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(783);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(785);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(786);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      if (lookahead == '%') ADVANCE(788);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      if (lookahead == '%') ADVANCE(790);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      if (lookahead == '%') ADVANCE(792);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      if (lookahead == '%') ADVANCE(794);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      if (lookahead == '=') ADVANCE(796);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_from_layer_token14);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      if (lookahead == '=') ADVANCE(799);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      if (lookahead == '=') ADVANCE(801);
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
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '"') ADVANCE(815);
      if (lookahead == '\'') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(815);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\n') ADVANCE(1265);
      if (lookahead == '"') ADVANCE(1263);
      if (lookahead == '\'') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(1277);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1264);
      if (lookahead != 0) ADVANCE(810);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\n') ADVANCE(1265);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\'') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(1273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1263);
      if (lookahead != 0) ADVANCE(816);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(1260);
      if (lookahead == '\'') ADVANCE(1264);
      if (lookahead == '\\') ADVANCE(1270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(808);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(809);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(1263);
      if (lookahead == '\'') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(1277);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(810);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(812);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(812);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(813);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(813);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(814);
      if (lookahead == '\'') ADVANCE(1263);
      if (lookahead == '\\') ADVANCE(1271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(814);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(815);
      if (lookahead == '\'') ADVANCE(815);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(815);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(816);
      if (lookahead == '\'') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(1273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(816);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(809);
      if (lookahead == '\\') ADVANCE(222);
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
          lookahead == ' ') ADVANCE(259);
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
          lookahead == ' ') ADVANCE(262);
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
          lookahead == ' ') ADVANCE(266);
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
          lookahead == ' ') ADVANCE(275);
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
          lookahead == ' ') ADVANCE(306);
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
          lookahead == ' ') ADVANCE(269);
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
          lookahead == ' ') ADVANCE(283);
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
          lookahead == ' ') ADVANCE(315);
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
          lookahead == ' ') ADVANCE(297);
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
          lookahead == ' ') ADVANCE(309);
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
          lookahead == ' ') ADVANCE(278);
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
          lookahead == ' ') ADVANCE(319);
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
          lookahead == ' ') ADVANCE(303);
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
          lookahead == ' ') ADVANCE(322);
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
          lookahead == ' ') ADVANCE(272);
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
          lookahead == ' ') ADVANCE(300);
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
          lookahead == ' ') ADVANCE(312);
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
          lookahead == ' ') ADVANCE(294);
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
      if (lookahead == '\\') ADVANCE(33);
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
      if (lookahead == '\\') ADVANCE(1268);
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
      if (lookahead == '\\') ADVANCE(255);
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
      if (lookahead == '+') ADVANCE(247);
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
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '$') ADVANCE(1109);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1269);
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
      if (lookahead == '=') ADVANCE(339);
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
      if (lookahead == '=') ADVANCE(338);
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
      if (lookahead == '=') ADVANCE(284);
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
          lookahead == '') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1107);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1108);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
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
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead != 0) ADVANCE(1269);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '"') ADVANCE(1269);
      if (lookahead == '$') ADVANCE(1117);
      if (lookahead != 0) ADVANCE(1110);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1278);
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
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '$') ADVANCE(1116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1115);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '#') ADVANCE(1110);
      if (lookahead == '$') ADVANCE(316);
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
      if (lookahead == '$') ADVANCE(316);
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
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead != 0) ADVANCE(1269);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0) ADVANCE(1145);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1141);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(245);
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
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1121);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1145);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(26);
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
      if (lookahead == '\\') ADVANCE(26);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1140);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1141);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == ',') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(1279);
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
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == ']') ADVANCE(1279);
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
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1279);
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
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == ',') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1279);
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
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1279);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
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
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1137);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(778);
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
          lookahead == ' ') ADVANCE(22);
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
          lookahead == ' ') ADVANCE(1257);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1254);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1256);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1254);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1257);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1258);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1259);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '"') ADVANCE(808);
      if (lookahead == '\\') ADVANCE(1272);
      if (lookahead != 0) ADVANCE(1260);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '"') ADVANCE(809);
      if (lookahead == '\'') ADVANCE(813);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '"') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '"') ADVANCE(810);
      if (lookahead == '\'') ADVANCE(814);
      if (lookahead == '\\') ADVANCE(1274);
      if (lookahead != 0) ADVANCE(1263);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\'') ADVANCE(808);
      if (lookahead == '\\') ADVANCE(1276);
      if (lookahead != 0) ADVANCE(1264);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\'') ADVANCE(812);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(802);
      if (lookahead != 0) ADVANCE(1269);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(800);
      if (lookahead != 0) ADVANCE(1269);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'') ADVANCE(1269);
      if (lookahead != 0) ADVANCE(937);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead != 0) ADVANCE(1269);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(808);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1269);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1262);
      if (lookahead == ' ') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(814);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1269);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1269);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1261);
      if (lookahead == ' ') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(807);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1264);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1263);
      if (lookahead == '\'') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(1275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1264);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1265);
      if (lookahead == '"') ADVANCE(810);
      if (lookahead == '\'') ADVANCE(816);
      if (lookahead == '\\') ADVANCE(1274);
      if (lookahead != 0) ADVANCE(1263);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1265);
      if (lookahead == '\'') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(1276);
      if (lookahead != 0) ADVANCE(1264);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(810);
      if (lookahead == '\\') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1264);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(1278);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 1279:
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
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 19},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 13},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 20},
  [103] = {.lex_state = 20},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 14},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 20},
  [132] = {.lex_state = 20},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 7},
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
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 3},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 65},
  [223] = {.lex_state = 75},
  [224] = {.lex_state = 75},
  [225] = {.lex_state = 57},
  [226] = {.lex_state = 21},
  [227] = {.lex_state = 65},
  [228] = {.lex_state = 57},
  [229] = {.lex_state = 75},
  [230] = {.lex_state = 76},
  [231] = {.lex_state = 76},
  [232] = {.lex_state = 76},
  [233] = {.lex_state = 75},
  [234] = {.lex_state = 76},
  [235] = {.lex_state = 76},
  [236] = {.lex_state = 65},
  [237] = {.lex_state = 75},
  [238] = {.lex_state = 76},
  [239] = {.lex_state = 75},
  [240] = {.lex_state = 75},
  [241] = {.lex_state = 75},
  [242] = {.lex_state = 75},
  [243] = {.lex_state = 75},
  [244] = {.lex_state = 75},
  [245] = {.lex_state = 75},
  [246] = {.lex_state = 75},
  [247] = {.lex_state = 75},
  [248] = {.lex_state = 75},
  [249] = {.lex_state = 75},
  [250] = {.lex_state = 57},
  [251] = {.lex_state = 75},
  [252] = {.lex_state = 75},
  [253] = {.lex_state = 75},
  [254] = {.lex_state = 75},
  [255] = {.lex_state = 75},
  [256] = {.lex_state = 75},
  [257] = {.lex_state = 75},
  [258] = {.lex_state = 75},
  [259] = {.lex_state = 75},
  [260] = {.lex_state = 75},
  [261] = {.lex_state = 75},
  [262] = {.lex_state = 75},
  [263] = {.lex_state = 75},
  [264] = {.lex_state = 75},
  [265] = {.lex_state = 75},
  [266] = {.lex_state = 75},
  [267] = {.lex_state = 75},
  [268] = {.lex_state = 75},
  [269] = {.lex_state = 75},
  [270] = {.lex_state = 21},
  [271] = {.lex_state = 75},
  [272] = {.lex_state = 75},
  [273] = {.lex_state = 75},
  [274] = {.lex_state = 75},
  [275] = {.lex_state = 75},
  [276] = {.lex_state = 75},
  [277] = {.lex_state = 75},
  [278] = {.lex_state = 57},
  [279] = {.lex_state = 21},
  [280] = {.lex_state = 21},
  [281] = {.lex_state = 57},
  [282] = {.lex_state = 58},
  [283] = {.lex_state = 21},
  [284] = {.lex_state = 58},
  [285] = {.lex_state = 59},
  [286] = {.lex_state = 59},
  [287] = {.lex_state = 39},
  [288] = {.lex_state = 71},
  [289] = {.lex_state = 65},
  [290] = {.lex_state = 43},
  [291] = {.lex_state = 43},
  [292] = {.lex_state = 39},
  [293] = {.lex_state = 74},
  [294] = {.lex_state = 71},
  [295] = {.lex_state = 72},
  [296] = {.lex_state = 73},
  [297] = {.lex_state = 42},
  [298] = {.lex_state = 41},
  [299] = {.lex_state = 40},
  [300] = {.lex_state = 74},
  [301] = {.lex_state = 41},
  [302] = {.lex_state = 43},
  [303] = {.lex_state = 43},
  [304] = {.lex_state = 43},
  [305] = {.lex_state = 43},
  [306] = {.lex_state = 43},
  [307] = {.lex_state = 42},
  [308] = {.lex_state = 1113},
  [309] = {.lex_state = 65},
  [310] = {.lex_state = 1113},
  [311] = {.lex_state = 54},
  [312] = {.lex_state = 39},
  [313] = {.lex_state = 40},
  [314] = {.lex_state = 41},
  [315] = {.lex_state = 66},
  [316] = {.lex_state = 21},
  [317] = {.lex_state = 74},
  [318] = {.lex_state = 43},
  [319] = {.lex_state = 71},
  [320] = {.lex_state = 72},
  [321] = {.lex_state = 73},
  [322] = {.lex_state = 43},
  [323] = {.lex_state = 65},
  [324] = {.lex_state = 40},
  [325] = {.lex_state = 58},
  [326] = {.lex_state = 43},
  [327] = {.lex_state = 65},
  [328] = {.lex_state = 42},
  [329] = {.lex_state = 65},
  [330] = {.lex_state = 65},
  [331] = {.lex_state = 65},
  [332] = {.lex_state = 21},
  [333] = {.lex_state = 65},
  [334] = {.lex_state = 65},
  [335] = {.lex_state = 65},
  [336] = {.lex_state = 72},
  [337] = {.lex_state = 73},
  [338] = {.lex_state = 21},
  [339] = {.lex_state = 43},
  [340] = {.lex_state = 1113},
  [341] = {.lex_state = 21},
  [342] = {.lex_state = 43},
  [343] = {.lex_state = 65},
  [344] = {.lex_state = 65},
  [345] = {.lex_state = 65},
  [346] = {.lex_state = 65},
  [347] = {.lex_state = 65},
  [348] = {.lex_state = 65},
  [349] = {.lex_state = 43},
  [350] = {.lex_state = 65},
  [351] = {.lex_state = 1113},
  [352] = {.lex_state = 65},
  [353] = {.lex_state = 1113},
  [354] = {.lex_state = 65},
  [355] = {.lex_state = 43},
  [356] = {.lex_state = 65},
  [357] = {.lex_state = 1113},
  [358] = {.lex_state = 74},
  [359] = {.lex_state = 74},
  [360] = {.lex_state = 74},
  [361] = {.lex_state = 59},
  [362] = {.lex_state = 21},
  [363] = {.lex_state = 21},
  [364] = {.lex_state = 42},
  [365] = {.lex_state = 42},
  [366] = {.lex_state = 73},
  [367] = {.lex_state = 1113},
  [368] = {.lex_state = 1113},
  [369] = {.lex_state = 21},
  [370] = {.lex_state = 71},
  [371] = {.lex_state = 42},
  [372] = {.lex_state = 72},
  [373] = {.lex_state = 74},
  [374] = {.lex_state = 1113},
  [375] = {.lex_state = 66},
  [376] = {.lex_state = 41},
  [377] = {.lex_state = 40},
  [378] = {.lex_state = 39},
  [379] = {.lex_state = 66},
  [380] = {.lex_state = 42},
  [381] = {.lex_state = 66},
  [382] = {.lex_state = 44},
  [383] = {.lex_state = 77},
  [384] = {.lex_state = 60},
  [385] = {.lex_state = 65},
  [386] = {.lex_state = 77},
  [387] = {.lex_state = 1114},
  [388] = {.lex_state = 1114},
  [389] = {.lex_state = 77},
  [390] = {.lex_state = 37},
  [391] = {.lex_state = 77},
  [392] = {.lex_state = 44},
  [393] = {.lex_state = 78},
  [394] = {.lex_state = 77},
  [395] = {.lex_state = 77},
  [396] = {.lex_state = 77},
  [397] = {.lex_state = 77},
  [398] = {.lex_state = 77},
  [399] = {.lex_state = 77},
  [400] = {.lex_state = 77},
  [401] = {.lex_state = 21},
  [402] = {.lex_state = 77},
  [403] = {.lex_state = 77},
  [404] = {.lex_state = 77},
  [405] = {.lex_state = 77},
  [406] = {.lex_state = 77},
  [407] = {.lex_state = 77},
  [408] = {.lex_state = 37},
  [409] = {.lex_state = 21},
  [410] = {.lex_state = 21},
  [411] = {.lex_state = 77},
  [412] = {.lex_state = 77},
  [413] = {.lex_state = 21},
  [414] = {.lex_state = 21},
  [415] = {.lex_state = 77},
  [416] = {.lex_state = 77},
  [417] = {.lex_state = 77},
  [418] = {.lex_state = 61},
  [419] = {.lex_state = 77},
  [420] = {.lex_state = 21},
  [421] = {.lex_state = 21},
  [422] = {.lex_state = 77},
  [423] = {.lex_state = 21},
  [424] = {.lex_state = 77},
  [425] = {.lex_state = 21},
  [426] = {.lex_state = 77},
  [427] = {.lex_state = 21},
  [428] = {.lex_state = 21},
  [429] = {.lex_state = 21},
  [430] = {.lex_state = 69},
  [431] = {.lex_state = 21},
  [432] = {.lex_state = 59},
  [433] = {.lex_state = 38},
  [434] = {.lex_state = 38},
  [435] = {.lex_state = 59},
  [436] = {.lex_state = 59},
  [437] = {.lex_state = 69},
  [438] = {.lex_state = 59},
  [439] = {.lex_state = 69},
  [440] = {.lex_state = 59},
  [441] = {.lex_state = 21},
  [442] = {.lex_state = 59},
  [443] = {.lex_state = 61},
  [444] = {.lex_state = 44},
  [445] = {.lex_state = 21},
  [446] = {.lex_state = 70},
  [447] = {.lex_state = 38},
  [448] = {.lex_state = 38},
  [449] = {.lex_state = 21},
  [450] = {.lex_state = 70},
  [451] = {.lex_state = 21},
  [452] = {.lex_state = 37},
  [453] = {.lex_state = 21},
  [454] = {.lex_state = 21},
  [455] = {.lex_state = 126},
  [456] = {.lex_state = 21},
  [457] = {.lex_state = 38},
  [458] = {.lex_state = 45},
  [459] = {.lex_state = 21},
  [460] = {.lex_state = 21},
  [461] = {.lex_state = 38},
  [462] = {.lex_state = 38},
  [463] = {.lex_state = 65},
  [464] = {.lex_state = 46},
  [465] = {.lex_state = 46},
  [466] = {.lex_state = 21},
  [467] = {.lex_state = 21},
  [468] = {.lex_state = 38},
  [469] = {.lex_state = 38},
  [470] = {.lex_state = 38},
  [471] = {.lex_state = 45},
  [472] = {.lex_state = 47},
  [473] = {.lex_state = 45},
  [474] = {.lex_state = 47},
  [475] = {.lex_state = 21},
  [476] = {.lex_state = 65},
  [477] = {.lex_state = 21},
  [478] = {.lex_state = 21},
  [479] = {.lex_state = 21},
  [480] = {.lex_state = 65},
  [481] = {.lex_state = 47},
  [482] = {.lex_state = 21},
  [483] = {.lex_state = 21},
  [484] = {.lex_state = 21},
  [485] = {.lex_state = 21},
  [486] = {.lex_state = 65},
  [487] = {.lex_state = 21},
  [488] = {.lex_state = 38},
  [489] = {.lex_state = 21},
  [490] = {.lex_state = 21},
  [491] = {.lex_state = 45},
  [492] = {.lex_state = 21},
  [493] = {.lex_state = 21},
  [494] = {.lex_state = 65},
  [495] = {.lex_state = 45},
  [496] = {.lex_state = 47},
  [497] = {.lex_state = 38},
  [498] = {.lex_state = 21},
  [499] = {.lex_state = 65},
  [500] = {.lex_state = 21},
  [501] = {.lex_state = 21},
  [502] = {.lex_state = 21},
  [503] = {.lex_state = 21},
  [504] = {.lex_state = 38},
  [505] = {.lex_state = 21},
  [506] = {.lex_state = 65},
  [507] = {.lex_state = 38},
  [508] = {.lex_state = 38},
  [509] = {.lex_state = 38},
  [510] = {.lex_state = 21},
  [511] = {.lex_state = 63},
  [512] = {.lex_state = 38},
  [513] = {.lex_state = 45},
  [514] = {.lex_state = 47},
  [515] = {.lex_state = 38},
  [516] = {.lex_state = 21},
  [517] = {.lex_state = 21},
  [518] = {.lex_state = 21},
  [519] = {.lex_state = 38},
  [520] = {.lex_state = 65},
  [521] = {.lex_state = 48},
  [522] = {.lex_state = 77},
  [523] = {.lex_state = 21},
  [524] = {.lex_state = 65},
  [525] = {.lex_state = 38},
  [526] = {.lex_state = 68},
  [527] = {.lex_state = 38},
  [528] = {.lex_state = 21},
  [529] = {.lex_state = 38},
  [530] = {.lex_state = 21},
  [531] = {.lex_state = 21},
  [532] = {.lex_state = 38},
  [533] = {.lex_state = 21},
  [534] = {.lex_state = 21},
  [535] = {.lex_state = 38},
  [536] = {.lex_state = 21},
  [537] = {.lex_state = 21},
  [538] = {.lex_state = 21},
  [539] = {.lex_state = 65},
  [540] = {.lex_state = 21},
  [541] = {.lex_state = 21},
  [542] = {.lex_state = 65},
  [543] = {.lex_state = 21},
  [544] = {.lex_state = 21},
  [545] = {.lex_state = 65},
  [546] = {.lex_state = 65},
  [547] = {.lex_state = 21},
  [548] = {.lex_state = 65},
  [549] = {.lex_state = 21},
  [550] = {.lex_state = 21},
  [551] = {.lex_state = 21},
  [552] = {.lex_state = 65},
  [553] = {.lex_state = 21},
  [554] = {.lex_state = 65},
  [555] = {.lex_state = 21},
  [556] = {.lex_state = 45},
  [557] = {.lex_state = 21},
  [558] = {.lex_state = 65},
  [559] = {.lex_state = 21},
  [560] = {.lex_state = 65},
  [561] = {.lex_state = 21},
  [562] = {.lex_state = 47},
  [563] = {.lex_state = 65},
  [564] = {.lex_state = 47},
  [565] = {.lex_state = 65},
  [566] = {.lex_state = 21},
  [567] = {.lex_state = 65},
  [568] = {.lex_state = 38},
  [569] = {.lex_state = 65},
  [570] = {.lex_state = 38},
  [571] = {.lex_state = 65},
  [572] = {.lex_state = 45},
  [573] = {.lex_state = 65},
  [574] = {.lex_state = 21},
  [575] = {.lex_state = 65},
  [576] = {.lex_state = 38},
  [577] = {.lex_state = 21},
  [578] = {.lex_state = 77},
  [579] = {.lex_state = 47},
  [580] = {.lex_state = 47},
  [581] = {.lex_state = 45},
  [582] = {.lex_state = 21},
  [583] = {.lex_state = 77},
  [584] = {.lex_state = 47},
  [585] = {.lex_state = 45},
  [586] = {.lex_state = 67},
  [587] = {.lex_state = 77},
  [588] = {.lex_state = 47},
  [589] = {.lex_state = 45},
  [590] = {.lex_state = 21},
  [591] = {.lex_state = 77},
  [592] = {.lex_state = 47},
  [593] = {.lex_state = 45},
  [594] = {.lex_state = 65},
  [595] = {.lex_state = 77},
  [596] = {.lex_state = 77},
  [597] = {.lex_state = 77},
  [598] = {.lex_state = 77},
  [599] = {.lex_state = 77},
  [600] = {.lex_state = 77},
  [601] = {.lex_state = 77},
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
    [sym_dockerfile] = STATE(574),
    [sym__directive] = STATE(214),
    [sym_add] = STATE(214),
    [sym_arg] = STATE(214),
    [sym_cmd] = STATE(214),
    [sym_copy] = STATE(214),
    [sym_entrypoint] = STATE(214),
    [sym_env] = STATE(214),
    [sym_expose] = STATE(214),
    [sym_from] = STATE(214),
    [sym_healthcheck] = STATE(214),
    [sym_label] = STATE(214),
    [sym_maintainer] = STATE(214),
    [sym_onbuild] = STATE(214),
    [sym_run] = STATE(214),
    [sym_shell] = STATE(214),
    [sym_stopsignal] = STATE(214),
    [sym_user] = STATE(214),
    [sym_volume] = STATE(214),
    [sym_workdir] = STATE(214),
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
    [sym__directive] = STATE(214),
    [sym_add] = STATE(214),
    [sym_arg] = STATE(214),
    [sym_cmd] = STATE(214),
    [sym_copy] = STATE(214),
    [sym_entrypoint] = STATE(214),
    [sym_env] = STATE(214),
    [sym_expose] = STATE(214),
    [sym_from] = STATE(214),
    [sym_healthcheck] = STATE(214),
    [sym_label] = STATE(214),
    [sym_maintainer] = STATE(214),
    [sym_onbuild] = STATE(214),
    [sym_run] = STATE(214),
    [sym_shell] = STATE(214),
    [sym_stopsignal] = STATE(214),
    [sym_user] = STATE(214),
    [sym_volume] = STATE(214),
    [sym_workdir] = STATE(214),
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
    [sym__directive] = STATE(214),
    [sym_add] = STATE(214),
    [sym_arg] = STATE(214),
    [sym_cmd] = STATE(214),
    [sym_copy] = STATE(214),
    [sym_entrypoint] = STATE(214),
    [sym_env] = STATE(214),
    [sym_expose] = STATE(214),
    [sym_from] = STATE(214),
    [sym_healthcheck] = STATE(214),
    [sym_label] = STATE(214),
    [sym_maintainer] = STATE(214),
    [sym_onbuild] = STATE(214),
    [sym_run] = STATE(214),
    [sym_shell] = STATE(214),
    [sym_stopsignal] = STATE(214),
    [sym_user] = STATE(214),
    [sym_volume] = STATE(214),
    [sym_workdir] = STATE(214),
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
  [5] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym__port] = STATE(94),
    [sym_port] = STATE(94),
    [sym_port_range] = STATE(94),
    [sym__port_part] = STATE(83),
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
    [sym__port] = STATE(94),
    [sym_port] = STATE(94),
    [sym_port_range] = STATE(94),
    [sym__port_part] = STATE(83),
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
    [aux_sym_from_layer_repeat2] = STATE(9),
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
    [aux_sym_from_layer_token5] = ACTIONS(133),
    [aux_sym_from_layer_token8] = ACTIONS(133),
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
    [aux_sym_from_layer_repeat2] = STATE(9),
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
    [aux_sym_from_layer_token4] = ACTIONS(146),
    [aux_sym_from_layer_token5] = ACTIONS(148),
    [aux_sym_from_layer_token8] = ACTIONS(148),
    [anon_sym_SLASH] = ACTIONS(144),
    [aux_sym__repository_start_token1] = ACTIONS(144),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [10] = {
    [aux_sym_from_layer_repeat4] = STATE(10),
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
    [aux_sym_from_layer_token4] = ACTIONS(153),
    [aux_sym_from_layer_token13] = ACTIONS(155),
    [aux_sym_from_layer_token16] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token1] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [11] = {
    [aux_sym_from_layer_repeat3] = STATE(8),
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
    [aux_sym_from_layer_token9] = ACTIONS(158),
    [aux_sym_from_layer_token12] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(135),
    [aux_sym__repository_start_token1] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [12] = {
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
    [aux_sym_from_layer_token13] = ACTIONS(160),
    [aux_sym_from_layer_token16] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(135),
    [aux_sym__repository_start_token1] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [13] = {
    [aux_sym_from_layer_repeat1] = STATE(13),
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
    [anon_sym_DOLLAR] = ACTIONS(166),
    [aux_sym_volume_token1] = ACTIONS(164),
    [aux_sym_workdir_token1] = ACTIONS(164),
    [aux_sym_from_layer_token3] = ACTIONS(166),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(162),
    [aux_sym__repository_start_token1] = ACTIONS(162),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(162),
    [sym__space_no_newline] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [14] = {
    [aux_sym_from_layer_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(171),
    [aux_sym_arg_token1] = ACTIONS(171),
    [aux_sym_cmd_token1] = ACTIONS(171),
    [aux_sym_copy_token1] = ACTIONS(171),
    [aux_sym_entrypoint_token1] = ACTIONS(171),
    [aux_sym_env_token1] = ACTIONS(171),
    [aux_sym_expose_token1] = ACTIONS(171),
    [aux_sym_from_token1] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(169),
    [aux_sym_healthcheck_token1] = ACTIONS(171),
    [aux_sym_label_token1] = ACTIONS(171),
    [aux_sym_maintainer_token1] = ACTIONS(171),
    [aux_sym_onbuild_token1] = ACTIONS(171),
    [aux_sym_run_token1] = ACTIONS(171),
    [aux_sym_shell_token1] = ACTIONS(171),
    [aux_sym_stopsignal_token1] = ACTIONS(171),
    [aux_sym_user_token1] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym_from_layer_token3] = ACTIONS(173),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(177),
    [aux_sym__repository_start_token1] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [15] = {
    [aux_sym_from_layer_repeat1] = STATE(14),
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
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_volume_token1] = ACTIONS(181),
    [aux_sym_workdir_token1] = ACTIONS(181),
    [aux_sym_from_layer_token3] = ACTIONS(173),
    [aux_sym_from_layer_token4] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(185),
    [aux_sym__repository_start_token1] = ACTIONS(185),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(179),
    [sym__space_no_newline] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [16] = {
    [aux_sym_from_layer_repeat4] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(171),
    [aux_sym_arg_token1] = ACTIONS(171),
    [aux_sym_cmd_token1] = ACTIONS(171),
    [aux_sym_copy_token1] = ACTIONS(171),
    [aux_sym_entrypoint_token1] = ACTIONS(171),
    [aux_sym_env_token1] = ACTIONS(171),
    [aux_sym_expose_token1] = ACTIONS(171),
    [aux_sym_from_token1] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(169),
    [aux_sym_healthcheck_token1] = ACTIONS(171),
    [aux_sym_label_token1] = ACTIONS(171),
    [aux_sym_maintainer_token1] = ACTIONS(171),
    [aux_sym_onbuild_token1] = ACTIONS(171),
    [aux_sym_run_token1] = ACTIONS(171),
    [aux_sym_shell_token1] = ACTIONS(171),
    [aux_sym_stopsignal_token1] = ACTIONS(171),
    [aux_sym_user_token1] = ACTIONS(171),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [aux_sym_from_layer_token13] = ACTIONS(160),
    [aux_sym_from_layer_token16] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(177),
    [aux_sym__repository_start_token1] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [17] = {
    [aux_sym_from_layer_repeat3] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(171),
    [aux_sym_arg_token1] = ACTIONS(171),
    [aux_sym_cmd_token1] = ACTIONS(171),
    [aux_sym_copy_token1] = ACTIONS(171),
    [aux_sym_entrypoint_token1] = ACTIONS(171),
    [aux_sym_env_token1] = ACTIONS(171),
    [aux_sym_expose_token1] = ACTIONS(171),
    [aux_sym_from_token1] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(169),
    [aux_sym_healthcheck_token1] = ACTIONS(171),
    [aux_sym_label_token1] = ACTIONS(171),
    [aux_sym_maintainer_token1] = ACTIONS(171),
    [aux_sym_onbuild_token1] = ACTIONS(171),
    [aux_sym_run_token1] = ACTIONS(171),
    [aux_sym_shell_token1] = ACTIONS(171),
    [aux_sym_stopsignal_token1] = ACTIONS(171),
    [aux_sym_user_token1] = ACTIONS(171),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [aux_sym_from_layer_token9] = ACTIONS(158),
    [aux_sym_from_layer_token12] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(177),
    [aux_sym__repository_start_token1] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [18] = {
    [aux_sym_from_layer_repeat2] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(171),
    [aux_sym_arg_token1] = ACTIONS(171),
    [aux_sym_cmd_token1] = ACTIONS(171),
    [aux_sym_copy_token1] = ACTIONS(171),
    [aux_sym_entrypoint_token1] = ACTIONS(171),
    [aux_sym_env_token1] = ACTIONS(171),
    [aux_sym_expose_token1] = ACTIONS(171),
    [aux_sym_from_token1] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(169),
    [aux_sym_healthcheck_token1] = ACTIONS(171),
    [aux_sym_label_token1] = ACTIONS(171),
    [aux_sym_maintainer_token1] = ACTIONS(171),
    [aux_sym_onbuild_token1] = ACTIONS(171),
    [aux_sym_run_token1] = ACTIONS(171),
    [aux_sym_shell_token1] = ACTIONS(171),
    [aux_sym_stopsignal_token1] = ACTIONS(171),
    [aux_sym_user_token1] = ACTIONS(171),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym_from_layer_token4] = ACTIONS(175),
    [aux_sym_from_layer_token5] = ACTIONS(133),
    [aux_sym_from_layer_token8] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(177),
    [aux_sym__repository_start_token1] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
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
    [aux_sym_from_layer_token3] = ACTIONS(191),
    [aux_sym_from_layer_token4] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token1] = ACTIONS(191),
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
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [aux_sym_from_layer_token5] = ACTIONS(195),
    [aux_sym_from_layer_token8] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token1] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [22] = {
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
    [anon_sym_DOLLAR] = ACTIONS(162),
    [aux_sym_volume_token1] = ACTIONS(164),
    [aux_sym_workdir_token1] = ACTIONS(164),
    [aux_sym_from_layer_token3] = ACTIONS(162),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(162),
    [aux_sym__repository_start_token1] = ACTIONS(162),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(162),
    [sym__space_no_newline] = ACTIONS(164),
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
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [aux_sym_from_layer_token3] = ACTIONS(203),
    [aux_sym_from_layer_token4] = ACTIONS(205),
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
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [aux_sym_from_layer_token13] = ACTIONS(207),
    [aux_sym_from_layer_token16] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token1] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [26] = {
    [aux_sym_from_layer_repeat3] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(171),
    [aux_sym_arg_token1] = ACTIONS(171),
    [aux_sym_cmd_token1] = ACTIONS(171),
    [aux_sym_copy_token1] = ACTIONS(171),
    [aux_sym_entrypoint_token1] = ACTIONS(171),
    [aux_sym_env_token1] = ACTIONS(171),
    [aux_sym_expose_token1] = ACTIONS(171),
    [aux_sym_from_token1] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(169),
    [aux_sym_healthcheck_token1] = ACTIONS(171),
    [aux_sym_label_token1] = ACTIONS(171),
    [aux_sym_maintainer_token1] = ACTIONS(171),
    [aux_sym_onbuild_token1] = ACTIONS(171),
    [aux_sym_run_token1] = ACTIONS(171),
    [aux_sym_shell_token1] = ACTIONS(171),
    [aux_sym_stopsignal_token1] = ACTIONS(171),
    [aux_sym_user_token1] = ACTIONS(171),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym_from_layer_token4] = ACTIONS(211),
    [aux_sym_from_layer_token9] = ACTIONS(213),
    [aux_sym_from_layer_token12] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [27] = {
    [aux_sym_from_layer_repeat1] = STATE(28),
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
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(181),
    [aux_sym_workdir_token1] = ACTIONS(181),
    [aux_sym_from_layer_token3] = ACTIONS(215),
    [aux_sym_from_layer_token4] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(179),
    [sym__space_no_newline] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [28] = {
    [aux_sym_from_layer_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(171),
    [aux_sym_arg_token1] = ACTIONS(171),
    [aux_sym_cmd_token1] = ACTIONS(171),
    [aux_sym_copy_token1] = ACTIONS(171),
    [aux_sym_entrypoint_token1] = ACTIONS(171),
    [aux_sym_env_token1] = ACTIONS(171),
    [aux_sym_expose_token1] = ACTIONS(171),
    [aux_sym_from_token1] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(169),
    [aux_sym_healthcheck_token1] = ACTIONS(171),
    [aux_sym_label_token1] = ACTIONS(171),
    [aux_sym_maintainer_token1] = ACTIONS(171),
    [aux_sym_onbuild_token1] = ACTIONS(171),
    [aux_sym_run_token1] = ACTIONS(171),
    [aux_sym_shell_token1] = ACTIONS(171),
    [aux_sym_stopsignal_token1] = ACTIONS(171),
    [aux_sym_user_token1] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym_from_layer_token3] = ACTIONS(215),
    [aux_sym_from_layer_token4] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [29] = {
    [aux_sym_from_layer_repeat2] = STATE(35),
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
    [aux_sym_from_layer_token4] = ACTIONS(219),
    [aux_sym_from_layer_token5] = ACTIONS(221),
    [aux_sym_from_layer_token8] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [30] = {
    [aux_sym_from_layer_repeat4] = STATE(31),
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
    [aux_sym_from_layer_token4] = ACTIONS(219),
    [aux_sym_from_layer_token13] = ACTIONS(223),
    [aux_sym_from_layer_token16] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [31] = {
    [aux_sym_from_layer_repeat4] = STATE(31),
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
    [aux_sym_from_layer_token4] = ACTIONS(153),
    [aux_sym_from_layer_token13] = ACTIONS(225),
    [aux_sym_from_layer_token16] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [32] = {
    [aux_sym_from_layer_repeat2] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(171),
    [aux_sym_arg_token1] = ACTIONS(171),
    [aux_sym_cmd_token1] = ACTIONS(171),
    [aux_sym_copy_token1] = ACTIONS(171),
    [aux_sym_entrypoint_token1] = ACTIONS(171),
    [aux_sym_env_token1] = ACTIONS(171),
    [aux_sym_expose_token1] = ACTIONS(171),
    [aux_sym_from_token1] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(169),
    [aux_sym_healthcheck_token1] = ACTIONS(171),
    [aux_sym_label_token1] = ACTIONS(171),
    [aux_sym_maintainer_token1] = ACTIONS(171),
    [aux_sym_onbuild_token1] = ACTIONS(171),
    [aux_sym_run_token1] = ACTIONS(171),
    [aux_sym_shell_token1] = ACTIONS(171),
    [aux_sym_stopsignal_token1] = ACTIONS(171),
    [aux_sym_user_token1] = ACTIONS(171),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym_from_layer_token4] = ACTIONS(211),
    [aux_sym_from_layer_token5] = ACTIONS(221),
    [aux_sym_from_layer_token8] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [33] = {
    [aux_sym_from_layer_repeat3] = STATE(33),
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
    [aux_sym_from_layer_token9] = ACTIONS(228),
    [aux_sym_from_layer_token12] = ACTIONS(228),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [34] = {
    [aux_sym_from_layer_repeat4] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(171),
    [aux_sym_arg_token1] = ACTIONS(171),
    [aux_sym_cmd_token1] = ACTIONS(171),
    [aux_sym_copy_token1] = ACTIONS(171),
    [aux_sym_entrypoint_token1] = ACTIONS(171),
    [aux_sym_env_token1] = ACTIONS(171),
    [aux_sym_expose_token1] = ACTIONS(171),
    [aux_sym_from_token1] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(169),
    [aux_sym_healthcheck_token1] = ACTIONS(171),
    [aux_sym_label_token1] = ACTIONS(171),
    [aux_sym_maintainer_token1] = ACTIONS(171),
    [aux_sym_onbuild_token1] = ACTIONS(171),
    [aux_sym_run_token1] = ACTIONS(171),
    [aux_sym_shell_token1] = ACTIONS(171),
    [aux_sym_stopsignal_token1] = ACTIONS(171),
    [aux_sym_user_token1] = ACTIONS(171),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym_from_layer_token4] = ACTIONS(211),
    [aux_sym_from_layer_token13] = ACTIONS(223),
    [aux_sym_from_layer_token16] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
    [aux_sym_from_layer_repeat2] = STATE(35),
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
    [aux_sym_from_layer_token4] = ACTIONS(146),
    [aux_sym_from_layer_token5] = ACTIONS(231),
    [aux_sym_from_layer_token8] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [36] = {
    [aux_sym_from_layer_repeat1] = STATE(36),
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
    [anon_sym_DOLLAR] = ACTIONS(234),
    [aux_sym_volume_token1] = ACTIONS(164),
    [aux_sym_workdir_token1] = ACTIONS(164),
    [aux_sym_from_layer_token3] = ACTIONS(234),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(162),
    [sym__space_no_newline] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [sym_port_protocol] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(237),
    [aux_sym_add_token1] = ACTIONS(237),
    [aux_sym_arg_token1] = ACTIONS(237),
    [aux_sym_cmd_token1] = ACTIONS(237),
    [aux_sym_copy_token1] = ACTIONS(237),
    [aux_sym_entrypoint_token1] = ACTIONS(237),
    [aux_sym_env_token1] = ACTIONS(237),
    [aux_sym_expose_token1] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [aux_sym_from_token1] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(237),
    [aux_sym_healthcheck_token1] = ACTIONS(237),
    [aux_sym_label_token1] = ACTIONS(237),
    [aux_sym_maintainer_token1] = ACTIONS(237),
    [aux_sym_onbuild_token1] = ACTIONS(237),
    [aux_sym_run_token1] = ACTIONS(237),
    [aux_sym_shell_token1] = ACTIONS(237),
    [aux_sym_stopsignal_token1] = ACTIONS(237),
    [aux_sym_user_token1] = ACTIONS(237),
    [anon_sym_DOLLAR] = ACTIONS(237),
    [aux_sym_volume_token1] = ACTIONS(237),
    [aux_sym_workdir_token1] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [aux_sym__port_part_token1] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(239),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(237),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [38] = {
    [aux_sym_from_layer_repeat3] = STATE(33),
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
    [aux_sym_from_layer_token4] = ACTIONS(219),
    [aux_sym_from_layer_token9] = ACTIONS(213),
    [aux_sym_from_layer_token12] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [sym_port_protocol] = STATE(80),
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
    [anon_sym_SLASH] = ACTIONS(239),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
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
    [aux_sym_from_layer_token3] = ACTIONS(191),
    [aux_sym_from_layer_token4] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym__space_no_newline] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [41] = {
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
  [42] = {
    [sym_path] = STATE(92),
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
    [sym_path] = STATE(92),
    [aux_sym__paths] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(257),
    [aux_sym_add_token1] = ACTIONS(257),
    [aux_sym_arg_token1] = ACTIONS(257),
    [aux_sym_cmd_token1] = ACTIONS(257),
    [aux_sym_copy_token1] = ACTIONS(257),
    [aux_sym_entrypoint_token1] = ACTIONS(257),
    [aux_sym_env_token1] = ACTIONS(257),
    [aux_sym_expose_token1] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [aux_sym_from_token1] = ACTIONS(257),
    [aux_sym_healthcheck_token1] = ACTIONS(257),
    [aux_sym_label_token1] = ACTIONS(257),
    [aux_sym_maintainer_token1] = ACTIONS(257),
    [aux_sym_onbuild_token1] = ACTIONS(257),
    [aux_sym_run_token1] = ACTIONS(257),
    [aux_sym_shell_token1] = ACTIONS(257),
    [aux_sym_stopsignal_token1] = ACTIONS(257),
    [aux_sym_user_token1] = ACTIONS(257),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_volume_token1] = ACTIONS(257),
    [aux_sym_workdir_token1] = ACTIONS(257),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [44] = {
    [aux_sym_path_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_add_token1] = ACTIONS(267),
    [aux_sym_arg_token1] = ACTIONS(267),
    [aux_sym_cmd_token1] = ACTIONS(267),
    [aux_sym_copy_token1] = ACTIONS(267),
    [aux_sym_entrypoint_token1] = ACTIONS(267),
    [aux_sym_env_token1] = ACTIONS(267),
    [aux_sym_expose_token1] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [aux_sym_from_token1] = ACTIONS(267),
    [aux_sym_healthcheck_token1] = ACTIONS(267),
    [aux_sym_label_token1] = ACTIONS(267),
    [aux_sym_maintainer_token1] = ACTIONS(267),
    [aux_sym_onbuild_token1] = ACTIONS(267),
    [aux_sym_run_token1] = ACTIONS(267),
    [aux_sym_shell_token1] = ACTIONS(267),
    [aux_sym_stopsignal_token1] = ACTIONS(267),
    [aux_sym_user_token1] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(267),
    [aux_sym_workdir_token1] = ACTIONS(267),
    [aux_sym_path_token1] = ACTIONS(271),
    [aux_sym_path_token2] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym__space_no_newline] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [45] = {
    [aux_sym_from_layer_repeat4] = STATE(47),
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
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [aux_sym_from_layer_token4] = ACTIONS(281),
    [aux_sym_from_layer_token13] = ACTIONS(160),
    [aux_sym_from_layer_token16] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(277),
    [sym__space_no_newline] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
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
    [aux_sym_from_layer_repeat4] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(283),
    [aux_sym_add_token1] = ACTIONS(285),
    [aux_sym_arg_token1] = ACTIONS(285),
    [aux_sym_cmd_token1] = ACTIONS(285),
    [aux_sym_copy_token1] = ACTIONS(285),
    [aux_sym_entrypoint_token1] = ACTIONS(285),
    [aux_sym_env_token1] = ACTIONS(285),
    [aux_sym_expose_token1] = ACTIONS(285),
    [aux_sym_from_token1] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(283),
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
    [aux_sym_from_layer_token4] = ACTIONS(287),
    [aux_sym_from_layer_token13] = ACTIONS(160),
    [aux_sym_from_layer_token16] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(283),
    [sym__space_no_newline] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [48] = {
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
  [49] = {
    [sym_path] = STATE(92),
    [aux_sym__paths] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_add_token1] = ACTIONS(289),
    [aux_sym_arg_token1] = ACTIONS(289),
    [aux_sym_cmd_token1] = ACTIONS(289),
    [aux_sym_copy_token1] = ACTIONS(289),
    [aux_sym_entrypoint_token1] = ACTIONS(289),
    [aux_sym_env_token1] = ACTIONS(289),
    [aux_sym_expose_token1] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [aux_sym_from_token1] = ACTIONS(289),
    [aux_sym_healthcheck_token1] = ACTIONS(289),
    [aux_sym_label_token1] = ACTIONS(289),
    [aux_sym_maintainer_token1] = ACTIONS(289),
    [aux_sym_onbuild_token1] = ACTIONS(289),
    [aux_sym_run_token1] = ACTIONS(289),
    [aux_sym_shell_token1] = ACTIONS(289),
    [aux_sym_stopsignal_token1] = ACTIONS(289),
    [aux_sym_user_token1] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_volume_token1] = ACTIONS(289),
    [aux_sym_workdir_token1] = ACTIONS(289),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [50] = {
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
    [anon_sym_DOLLAR] = ACTIONS(162),
    [aux_sym_volume_token1] = ACTIONS(164),
    [aux_sym_workdir_token1] = ACTIONS(164),
    [aux_sym_from_layer_token3] = ACTIONS(162),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(162),
    [sym__space_no_newline] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [51] = {
    [sym_path] = STATE(92),
    [aux_sym__paths] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(291),
    [aux_sym_add_token1] = ACTIONS(291),
    [aux_sym_arg_token1] = ACTIONS(291),
    [aux_sym_cmd_token1] = ACTIONS(291),
    [aux_sym_copy_token1] = ACTIONS(291),
    [aux_sym_entrypoint_token1] = ACTIONS(291),
    [aux_sym_env_token1] = ACTIONS(291),
    [aux_sym_expose_token1] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [aux_sym_from_token1] = ACTIONS(291),
    [aux_sym_healthcheck_token1] = ACTIONS(291),
    [aux_sym_label_token1] = ACTIONS(291),
    [aux_sym_maintainer_token1] = ACTIONS(291),
    [aux_sym_onbuild_token1] = ACTIONS(291),
    [aux_sym_run_token1] = ACTIONS(291),
    [aux_sym_shell_token1] = ACTIONS(291),
    [aux_sym_stopsignal_token1] = ACTIONS(291),
    [aux_sym_user_token1] = ACTIONS(291),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_volume_token1] = ACTIONS(291),
    [aux_sym_workdir_token1] = ACTIONS(291),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [52] = {
    [sym_path] = STATE(92),
    [aux_sym__paths] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(293),
    [aux_sym_add_token1] = ACTIONS(293),
    [aux_sym_arg_token1] = ACTIONS(293),
    [aux_sym_cmd_token1] = ACTIONS(293),
    [aux_sym_copy_token1] = ACTIONS(293),
    [aux_sym_entrypoint_token1] = ACTIONS(293),
    [aux_sym_env_token1] = ACTIONS(293),
    [aux_sym_expose_token1] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [aux_sym_from_token1] = ACTIONS(293),
    [aux_sym_healthcheck_token1] = ACTIONS(293),
    [aux_sym_label_token1] = ACTIONS(293),
    [aux_sym_maintainer_token1] = ACTIONS(293),
    [aux_sym_onbuild_token1] = ACTIONS(293),
    [aux_sym_run_token1] = ACTIONS(293),
    [aux_sym_shell_token1] = ACTIONS(293),
    [aux_sym_stopsignal_token1] = ACTIONS(293),
    [aux_sym_user_token1] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_volume_token1] = ACTIONS(293),
    [aux_sym_workdir_token1] = ACTIONS(293),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [53] = {
    [aux_sym_from_layer_repeat1] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(295),
    [aux_sym_add_token1] = ACTIONS(297),
    [aux_sym_arg_token1] = ACTIONS(297),
    [aux_sym_cmd_token1] = ACTIONS(297),
    [aux_sym_copy_token1] = ACTIONS(297),
    [aux_sym_entrypoint_token1] = ACTIONS(297),
    [aux_sym_env_token1] = ACTIONS(297),
    [aux_sym_expose_token1] = ACTIONS(297),
    [aux_sym_from_token1] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(295),
    [aux_sym_healthcheck_token1] = ACTIONS(297),
    [aux_sym_label_token1] = ACTIONS(297),
    [aux_sym_maintainer_token1] = ACTIONS(297),
    [aux_sym_onbuild_token1] = ACTIONS(297),
    [aux_sym_run_token1] = ACTIONS(297),
    [aux_sym_shell_token1] = ACTIONS(297),
    [aux_sym_stopsignal_token1] = ACTIONS(297),
    [aux_sym_user_token1] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_volume_token1] = ACTIONS(297),
    [aux_sym_workdir_token1] = ACTIONS(297),
    [aux_sym_from_layer_token3] = ACTIONS(173),
    [aux_sym_from_layer_token4] = ACTIONS(299),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym__space_no_newline] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [54] = {
    [aux_sym_from_layer_repeat1] = STATE(13),
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
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [aux_sym_from_layer_token3] = ACTIONS(173),
    [aux_sym_from_layer_token4] = ACTIONS(281),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(277),
    [sym__space_no_newline] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [55] = {
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
  [56] = {
    [aux_sym_path_repeat1] = STATE(57),
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
    [anon_sym_DOLLAR] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(301),
    [aux_sym_workdir_token1] = ACTIONS(301),
    [aux_sym_path_token1] = ACTIONS(303),
    [aux_sym_path_token2] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym__space_no_newline] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [57] = {
    [aux_sym_path_repeat1] = STATE(57),
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
    [aux_sym_healthcheck_token1] = ACTIONS(307),
    [aux_sym_label_token1] = ACTIONS(307),
    [aux_sym_maintainer_token1] = ACTIONS(307),
    [aux_sym_onbuild_token1] = ACTIONS(307),
    [aux_sym_run_token1] = ACTIONS(307),
    [aux_sym_shell_token1] = ACTIONS(307),
    [aux_sym_stopsignal_token1] = ACTIONS(307),
    [aux_sym_user_token1] = ACTIONS(307),
    [anon_sym_DOLLAR] = ACTIONS(309),
    [aux_sym_volume_token1] = ACTIONS(307),
    [aux_sym_workdir_token1] = ACTIONS(307),
    [aux_sym_path_token1] = ACTIONS(312),
    [aux_sym_path_token2] = ACTIONS(314),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(307),
    [sym__space_no_newline] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [58] = {
    [aux_sym_from_layer_repeat2] = STATE(64),
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
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [aux_sym_from_layer_token4] = ACTIONS(281),
    [aux_sym_from_layer_token5] = ACTIONS(133),
    [aux_sym_from_layer_token8] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(277),
    [sym__space_no_newline] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [59] = {
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
    [aux_sym_from_layer_token3] = ACTIONS(203),
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [60] = {
    [aux_sym_from_layer_repeat3] = STATE(65),
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
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [aux_sym_from_layer_token4] = ACTIONS(281),
    [aux_sym_from_layer_token9] = ACTIONS(158),
    [aux_sym_from_layer_token12] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(277),
    [sym__space_no_newline] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [61] = {
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
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [aux_sym_from_layer_token5] = ACTIONS(195),
    [aux_sym_from_layer_token8] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [62] = {
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
  [63] = {
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
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [aux_sym_from_layer_token13] = ACTIONS(207),
    [aux_sym_from_layer_token16] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [64] = {
    [aux_sym_from_layer_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(283),
    [aux_sym_add_token1] = ACTIONS(285),
    [aux_sym_arg_token1] = ACTIONS(285),
    [aux_sym_cmd_token1] = ACTIONS(285),
    [aux_sym_copy_token1] = ACTIONS(285),
    [aux_sym_entrypoint_token1] = ACTIONS(285),
    [aux_sym_env_token1] = ACTIONS(285),
    [aux_sym_expose_token1] = ACTIONS(285),
    [aux_sym_from_token1] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(283),
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
    [aux_sym_from_layer_token4] = ACTIONS(287),
    [aux_sym_from_layer_token5] = ACTIONS(133),
    [aux_sym_from_layer_token8] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(283),
    [sym__space_no_newline] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [65] = {
    [aux_sym_from_layer_repeat3] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(283),
    [aux_sym_add_token1] = ACTIONS(285),
    [aux_sym_arg_token1] = ACTIONS(285),
    [aux_sym_cmd_token1] = ACTIONS(285),
    [aux_sym_copy_token1] = ACTIONS(285),
    [aux_sym_entrypoint_token1] = ACTIONS(285),
    [aux_sym_env_token1] = ACTIONS(285),
    [aux_sym_expose_token1] = ACTIONS(285),
    [aux_sym_from_token1] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(283),
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
    [aux_sym_from_layer_token4] = ACTIONS(287),
    [aux_sym_from_layer_token9] = ACTIONS(158),
    [aux_sym_from_layer_token12] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(283),
    [sym__space_no_newline] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [66] = {
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
    [aux_sym_path_token1] = ACTIONS(305),
    [aux_sym_path_token2] = ACTIONS(305),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym__space_no_newline] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
    [aux_sym_from_layer_repeat1] = STATE(13),
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
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_volume_token1] = ACTIONS(319),
    [aux_sym_workdir_token1] = ACTIONS(319),
    [aux_sym_from_layer_token3] = ACTIONS(173),
    [aux_sym_from_layer_token4] = ACTIONS(321),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [68] = {
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
  [69] = {
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
    [aux_sym__repository_start_token1] = ACTIONS(327),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym__space_no_newline] = ACTIONS(325),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [70] = {
    [aux_sym_from_layer_repeat4] = STATE(10),
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
    [aux_sym_from_layer_token13] = ACTIONS(160),
    [aux_sym_from_layer_token16] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [71] = {
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
    [aux_sym_path_token1] = ACTIONS(337),
    [aux_sym_path_token2] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(335),
    [sym__space_no_newline] = ACTIONS(337),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [72] = {
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
    [aux_sym_path_token1] = ACTIONS(341),
    [aux_sym_path_token2] = ACTIONS(341),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(339),
    [sym__space_no_newline] = ACTIONS(341),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [73] = {
    [aux_sym_from_layer_repeat2] = STATE(9),
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
    [aux_sym_from_layer_token5] = ACTIONS(133),
    [aux_sym_from_layer_token8] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [74] = {
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
  [75] = {
    [aux_sym_from_layer_repeat4] = STATE(70),
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
    [aux_sym_from_layer_token4] = ACTIONS(321),
    [aux_sym_from_layer_token13] = ACTIONS(160),
    [aux_sym_from_layer_token16] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [76] = {
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
  [77] = {
    [aux_sym_from_layer_repeat3] = STATE(8),
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
    [aux_sym_from_layer_token9] = ACTIONS(158),
    [aux_sym_from_layer_token12] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym_add_token1] = ACTIONS(347),
    [aux_sym_arg_token1] = ACTIONS(347),
    [aux_sym_cmd_token1] = ACTIONS(347),
    [aux_sym_copy_token1] = ACTIONS(347),
    [aux_sym_entrypoint_token1] = ACTIONS(347),
    [aux_sym_env_token1] = ACTIONS(347),
    [aux_sym_expose_token1] = ACTIONS(347),
    [aux_sym_from_token1] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(349),
    [anon_sym_AT] = ACTIONS(347),
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
    [anon_sym_SLASH] = ACTIONS(351),
    [aux_sym__repository_start_token1] = ACTIONS(351),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(347),
    [sym__space_no_newline] = ACTIONS(349),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [79] = {
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
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [aux_sym_add_token1] = ACTIONS(237),
    [aux_sym_arg_token1] = ACTIONS(237),
    [aux_sym_cmd_token1] = ACTIONS(237),
    [aux_sym_copy_token1] = ACTIONS(237),
    [aux_sym_entrypoint_token1] = ACTIONS(237),
    [aux_sym_env_token1] = ACTIONS(237),
    [aux_sym_expose_token1] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [aux_sym_from_token1] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(237),
    [aux_sym_healthcheck_token1] = ACTIONS(237),
    [aux_sym_label_token1] = ACTIONS(237),
    [aux_sym_maintainer_token1] = ACTIONS(237),
    [aux_sym_onbuild_token1] = ACTIONS(237),
    [aux_sym_run_token1] = ACTIONS(237),
    [aux_sym_shell_token1] = ACTIONS(237),
    [aux_sym_stopsignal_token1] = ACTIONS(237),
    [aux_sym_user_token1] = ACTIONS(237),
    [anon_sym_DOLLAR] = ACTIONS(237),
    [aux_sym_volume_token1] = ACTIONS(237),
    [aux_sym_workdir_token1] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [aux_sym__port_part_token1] = ACTIONS(237),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(237),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [81] = {
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
  [82] = {
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
    [anon_sym_COLON] = ACTIONS(357),
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
    [anon_sym_DASH] = ACTIONS(357),
    [aux_sym__port_part_token1] = ACTIONS(357),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [aux_sym_add_token1] = ACTIONS(359),
    [aux_sym_arg_token1] = ACTIONS(359),
    [aux_sym_cmd_token1] = ACTIONS(359),
    [aux_sym_copy_token1] = ACTIONS(359),
    [aux_sym_entrypoint_token1] = ACTIONS(359),
    [aux_sym_env_token1] = ACTIONS(359),
    [aux_sym_expose_token1] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [aux_sym_from_token1] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(359),
    [aux_sym_healthcheck_token1] = ACTIONS(359),
    [aux_sym_label_token1] = ACTIONS(359),
    [aux_sym_maintainer_token1] = ACTIONS(359),
    [aux_sym_onbuild_token1] = ACTIONS(359),
    [aux_sym_run_token1] = ACTIONS(359),
    [aux_sym_shell_token1] = ACTIONS(359),
    [aux_sym_stopsignal_token1] = ACTIONS(359),
    [aux_sym_user_token1] = ACTIONS(359),
    [anon_sym_DOLLAR] = ACTIONS(359),
    [aux_sym_volume_token1] = ACTIONS(359),
    [aux_sym_workdir_token1] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(361),
    [aux_sym__port_part_token1] = ACTIONS(359),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [84] = {
    [aux_sym_from_layer_repeat3] = STATE(77),
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
    [aux_sym_from_layer_token4] = ACTIONS(321),
    [aux_sym_from_layer_token9] = ACTIONS(158),
    [aux_sym_from_layer_token12] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [85] = {
    [aux_sym_from_layer_repeat2] = STATE(73),
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
    [aux_sym_from_layer_token4] = ACTIONS(321),
    [aux_sym_from_layer_token5] = ACTIONS(133),
    [aux_sym_from_layer_token8] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [86] = {
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
    [anon_sym_DASH] = ACTIONS(363),
    [aux_sym__port_part_token1] = ACTIONS(363),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(363),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [87] = {
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
  [88] = {
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
    [anon_sym_COLON] = ACTIONS(365),
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
    [anon_sym_DASH] = ACTIONS(365),
    [aux_sym__port_part_token1] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [89] = {
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
    [aux_sym_path_token1] = ACTIONS(312),
    [aux_sym_path_token2] = ACTIONS(312),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(307),
    [sym__space_no_newline] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(169),
    [aux_sym_arg_token1] = ACTIONS(169),
    [aux_sym_cmd_token1] = ACTIONS(169),
    [aux_sym_copy_token1] = ACTIONS(169),
    [aux_sym_entrypoint_token1] = ACTIONS(169),
    [aux_sym_env_token1] = ACTIONS(169),
    [aux_sym_expose_token1] = ACTIONS(169),
    [aux_sym_from_token1] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(169),
    [aux_sym_healthcheck_token1] = ACTIONS(169),
    [aux_sym_label_token1] = ACTIONS(169),
    [aux_sym_maintainer_token1] = ACTIONS(169),
    [aux_sym_onbuild_token1] = ACTIONS(169),
    [aux_sym_run_token1] = ACTIONS(169),
    [aux_sym_shell_token1] = ACTIONS(169),
    [aux_sym_stopsignal_token1] = ACTIONS(169),
    [aux_sym_user_token1] = ACTIONS(169),
    [aux_sym_volume_token1] = ACTIONS(169),
    [aux_sym_workdir_token1] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(177),
    [aux_sym__repository_start_token1] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [91] = {
    [aux_sym_from_layer_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(367),
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
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_volume_token1] = ACTIONS(369),
    [aux_sym_workdir_token1] = ACTIONS(369),
    [aux_sym_from_layer_token3] = ACTIONS(173),
    [aux_sym_from_layer_token4] = ACTIONS(371),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(367),
    [sym__space_no_newline] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [92] = {
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
  [93] = {
    [aux_sym_from_layer_repeat2] = STATE(99),
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
    [aux_sym_from_layer_token4] = ACTIONS(383),
    [aux_sym_from_layer_token5] = ACTIONS(385),
    [aux_sym_from_layer_token8] = ACTIONS(385),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(387),
    [aux_sym_add_token1] = ACTIONS(387),
    [aux_sym_arg_token1] = ACTIONS(387),
    [aux_sym_cmd_token1] = ACTIONS(387),
    [aux_sym_copy_token1] = ACTIONS(387),
    [aux_sym_entrypoint_token1] = ACTIONS(387),
    [aux_sym_env_token1] = ACTIONS(387),
    [aux_sym_expose_token1] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [aux_sym_from_token1] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(389),
    [aux_sym_healthcheck_token1] = ACTIONS(387),
    [aux_sym_label_token1] = ACTIONS(387),
    [aux_sym_maintainer_token1] = ACTIONS(387),
    [aux_sym_onbuild_token1] = ACTIONS(387),
    [aux_sym_run_token1] = ACTIONS(387),
    [aux_sym_shell_token1] = ACTIONS(387),
    [aux_sym_stopsignal_token1] = ACTIONS(387),
    [aux_sym_user_token1] = ACTIONS(387),
    [anon_sym_DOLLAR] = ACTIONS(387),
    [aux_sym_volume_token1] = ACTIONS(387),
    [aux_sym_workdir_token1] = ACTIONS(387),
    [aux_sym__port_part_token1] = ACTIONS(387),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [95] = {
    [aux_sym_from_layer_repeat4] = STATE(111),
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
    [aux_sym_from_layer_token4] = ACTIONS(383),
    [aux_sym_from_layer_token13] = ACTIONS(391),
    [aux_sym_from_layer_token16] = ACTIONS(391),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [96] = {
    [aux_sym_from_layer_repeat3] = STATE(106),
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
    [aux_sym_from_layer_token4] = ACTIONS(383),
    [aux_sym_from_layer_token9] = ACTIONS(393),
    [aux_sym_from_layer_token12] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [97] = {
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
    [anon_sym_COLON] = ACTIONS(395),
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
  [98] = {
    [aux_sym_path_repeat1] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_add_token1] = ACTIONS(267),
    [aux_sym_arg_token1] = ACTIONS(267),
    [aux_sym_cmd_token1] = ACTIONS(267),
    [aux_sym_copy_token1] = ACTIONS(267),
    [aux_sym_entrypoint_token1] = ACTIONS(267),
    [aux_sym_env_token1] = ACTIONS(267),
    [aux_sym_expose_token1] = ACTIONS(267),
    [aux_sym_from_token1] = ACTIONS(267),
    [aux_sym_healthcheck_token1] = ACTIONS(267),
    [aux_sym_label_token1] = ACTIONS(267),
    [aux_sym_maintainer_token1] = ACTIONS(267),
    [aux_sym_onbuild_token1] = ACTIONS(267),
    [aux_sym_run_token1] = ACTIONS(267),
    [aux_sym_shell_token1] = ACTIONS(267),
    [aux_sym_stopsignal_token1] = ACTIONS(267),
    [aux_sym_user_token1] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(397),
    [aux_sym_volume_token1] = ACTIONS(267),
    [aux_sym_workdir_token1] = ACTIONS(267),
    [aux_sym_path_token1] = ACTIONS(399),
    [aux_sym_path_token2] = ACTIONS(401),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [99] = {
    [aux_sym_from_layer_repeat2] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(403),
    [aux_sym_add_token1] = ACTIONS(405),
    [aux_sym_arg_token1] = ACTIONS(405),
    [aux_sym_cmd_token1] = ACTIONS(405),
    [aux_sym_copy_token1] = ACTIONS(405),
    [aux_sym_entrypoint_token1] = ACTIONS(405),
    [aux_sym_env_token1] = ACTIONS(405),
    [aux_sym_expose_token1] = ACTIONS(405),
    [aux_sym_from_token1] = ACTIONS(405),
    [aux_sym_healthcheck_token1] = ACTIONS(405),
    [aux_sym_label_token1] = ACTIONS(405),
    [aux_sym_maintainer_token1] = ACTIONS(405),
    [aux_sym_onbuild_token1] = ACTIONS(405),
    [aux_sym_run_token1] = ACTIONS(405),
    [aux_sym_shell_token1] = ACTIONS(405),
    [aux_sym_stopsignal_token1] = ACTIONS(405),
    [aux_sym_user_token1] = ACTIONS(405),
    [aux_sym_volume_token1] = ACTIONS(405),
    [aux_sym_workdir_token1] = ACTIONS(405),
    [aux_sym_from_layer_token4] = ACTIONS(407),
    [aux_sym_from_layer_token5] = ACTIONS(385),
    [aux_sym_from_layer_token8] = ACTIONS(385),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(403),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [100] = {
    [aux_sym_from_layer_repeat1] = STATE(103),
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
    [anon_sym_DOLLAR] = ACTIONS(409),
    [aux_sym_volume_token1] = ACTIONS(381),
    [aux_sym_workdir_token1] = ACTIONS(381),
    [aux_sym_from_layer_token3] = ACTIONS(409),
    [aux_sym_from_layer_token4] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [101] = {
    [aux_sym_path_repeat1] = STATE(107),
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
    [anon_sym_DOLLAR] = ACTIONS(397),
    [aux_sym_volume_token1] = ACTIONS(301),
    [aux_sym_workdir_token1] = ACTIONS(301),
    [aux_sym_path_token1] = ACTIONS(411),
    [aux_sym_path_token2] = ACTIONS(401),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [102] = {
    [aux_sym_from_layer_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(413),
    [aux_sym_add_token1] = ACTIONS(415),
    [aux_sym_arg_token1] = ACTIONS(415),
    [aux_sym_cmd_token1] = ACTIONS(415),
    [aux_sym_copy_token1] = ACTIONS(415),
    [aux_sym_entrypoint_token1] = ACTIONS(415),
    [aux_sym_env_token1] = ACTIONS(415),
    [aux_sym_expose_token1] = ACTIONS(415),
    [aux_sym_from_token1] = ACTIONS(415),
    [aux_sym_healthcheck_token1] = ACTIONS(415),
    [aux_sym_label_token1] = ACTIONS(415),
    [aux_sym_maintainer_token1] = ACTIONS(415),
    [aux_sym_onbuild_token1] = ACTIONS(415),
    [aux_sym_run_token1] = ACTIONS(415),
    [aux_sym_shell_token1] = ACTIONS(415),
    [aux_sym_stopsignal_token1] = ACTIONS(415),
    [aux_sym_user_token1] = ACTIONS(415),
    [anon_sym_DOLLAR] = ACTIONS(409),
    [aux_sym_volume_token1] = ACTIONS(415),
    [aux_sym_workdir_token1] = ACTIONS(415),
    [aux_sym_from_layer_token3] = ACTIONS(409),
    [aux_sym_from_layer_token4] = ACTIONS(417),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(413),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [103] = {
    [aux_sym_from_layer_repeat1] = STATE(103),
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
    [anon_sym_DOLLAR] = ACTIONS(419),
    [aux_sym_volume_token1] = ACTIONS(164),
    [aux_sym_workdir_token1] = ACTIONS(164),
    [aux_sym_from_layer_token3] = ACTIONS(419),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [104] = {
    [aux_sym_from_layer_repeat2] = STATE(104),
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
    [aux_sym_from_layer_token4] = ACTIONS(146),
    [aux_sym_from_layer_token5] = ACTIONS(422),
    [aux_sym_from_layer_token8] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [105] = {
    [aux_sym_from_layer_repeat3] = STATE(105),
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
    [aux_sym_from_layer_token9] = ACTIONS(425),
    [aux_sym_from_layer_token12] = ACTIONS(425),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [106] = {
    [aux_sym_from_layer_repeat3] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(403),
    [aux_sym_add_token1] = ACTIONS(405),
    [aux_sym_arg_token1] = ACTIONS(405),
    [aux_sym_cmd_token1] = ACTIONS(405),
    [aux_sym_copy_token1] = ACTIONS(405),
    [aux_sym_entrypoint_token1] = ACTIONS(405),
    [aux_sym_env_token1] = ACTIONS(405),
    [aux_sym_expose_token1] = ACTIONS(405),
    [aux_sym_from_token1] = ACTIONS(405),
    [aux_sym_healthcheck_token1] = ACTIONS(405),
    [aux_sym_label_token1] = ACTIONS(405),
    [aux_sym_maintainer_token1] = ACTIONS(405),
    [aux_sym_onbuild_token1] = ACTIONS(405),
    [aux_sym_run_token1] = ACTIONS(405),
    [aux_sym_shell_token1] = ACTIONS(405),
    [aux_sym_stopsignal_token1] = ACTIONS(405),
    [aux_sym_user_token1] = ACTIONS(405),
    [aux_sym_volume_token1] = ACTIONS(405),
    [aux_sym_workdir_token1] = ACTIONS(405),
    [aux_sym_from_layer_token4] = ACTIONS(407),
    [aux_sym_from_layer_token9] = ACTIONS(393),
    [aux_sym_from_layer_token12] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(403),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [107] = {
    [aux_sym_path_repeat1] = STATE(107),
    [ts_builtin_sym_end] = ACTIONS(307),
    [aux_sym_add_token1] = ACTIONS(307),
    [aux_sym_arg_token1] = ACTIONS(307),
    [aux_sym_cmd_token1] = ACTIONS(307),
    [aux_sym_copy_token1] = ACTIONS(307),
    [aux_sym_entrypoint_token1] = ACTIONS(307),
    [aux_sym_env_token1] = ACTIONS(307),
    [aux_sym_expose_token1] = ACTIONS(307),
    [aux_sym_from_token1] = ACTIONS(307),
    [aux_sym_healthcheck_token1] = ACTIONS(307),
    [aux_sym_label_token1] = ACTIONS(307),
    [aux_sym_maintainer_token1] = ACTIONS(307),
    [aux_sym_onbuild_token1] = ACTIONS(307),
    [aux_sym_run_token1] = ACTIONS(307),
    [aux_sym_shell_token1] = ACTIONS(307),
    [aux_sym_stopsignal_token1] = ACTIONS(307),
    [aux_sym_user_token1] = ACTIONS(307),
    [anon_sym_DOLLAR] = ACTIONS(428),
    [aux_sym_volume_token1] = ACTIONS(307),
    [aux_sym_workdir_token1] = ACTIONS(307),
    [aux_sym_path_token1] = ACTIONS(312),
    [aux_sym_path_token2] = ACTIONS(431),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [108] = {
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
    [aux_sym_path_token1] = ACTIONS(434),
    [aux_sym_path_token2] = ACTIONS(434),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [109] = {
    [aux_sym_from_layer_repeat4] = STATE(109),
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
    [aux_sym_from_layer_token4] = ACTIONS(153),
    [aux_sym_from_layer_token13] = ACTIONS(436),
    [aux_sym_from_layer_token16] = ACTIONS(436),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [aux_sym_add_token1] = ACTIONS(439),
    [aux_sym_arg_token1] = ACTIONS(439),
    [aux_sym_cmd_token1] = ACTIONS(439),
    [aux_sym_copy_token1] = ACTIONS(439),
    [aux_sym_entrypoint_token1] = ACTIONS(439),
    [aux_sym_env_token1] = ACTIONS(439),
    [aux_sym_expose_token1] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [aux_sym_from_token1] = ACTIONS(439),
    [anon_sym_COLON] = ACTIONS(439),
    [aux_sym_healthcheck_token1] = ACTIONS(439),
    [aux_sym_label_token1] = ACTIONS(439),
    [aux_sym_maintainer_token1] = ACTIONS(439),
    [aux_sym_onbuild_token1] = ACTIONS(439),
    [aux_sym_run_token1] = ACTIONS(439),
    [aux_sym_shell_token1] = ACTIONS(439),
    [aux_sym_stopsignal_token1] = ACTIONS(439),
    [aux_sym_user_token1] = ACTIONS(439),
    [anon_sym_DOLLAR] = ACTIONS(439),
    [aux_sym_volume_token1] = ACTIONS(439),
    [aux_sym_workdir_token1] = ACTIONS(439),
    [aux_sym__port_part_token1] = ACTIONS(439),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [111] = {
    [aux_sym_from_layer_repeat4] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(403),
    [aux_sym_add_token1] = ACTIONS(405),
    [aux_sym_arg_token1] = ACTIONS(405),
    [aux_sym_cmd_token1] = ACTIONS(405),
    [aux_sym_copy_token1] = ACTIONS(405),
    [aux_sym_entrypoint_token1] = ACTIONS(405),
    [aux_sym_env_token1] = ACTIONS(405),
    [aux_sym_expose_token1] = ACTIONS(405),
    [aux_sym_from_token1] = ACTIONS(405),
    [aux_sym_healthcheck_token1] = ACTIONS(405),
    [aux_sym_label_token1] = ACTIONS(405),
    [aux_sym_maintainer_token1] = ACTIONS(405),
    [aux_sym_onbuild_token1] = ACTIONS(405),
    [aux_sym_run_token1] = ACTIONS(405),
    [aux_sym_shell_token1] = ACTIONS(405),
    [aux_sym_stopsignal_token1] = ACTIONS(405),
    [aux_sym_user_token1] = ACTIONS(405),
    [aux_sym_volume_token1] = ACTIONS(405),
    [aux_sym_workdir_token1] = ACTIONS(405),
    [aux_sym_from_layer_token4] = ACTIONS(407),
    [aux_sym_from_layer_token13] = ACTIONS(391),
    [aux_sym_from_layer_token16] = ACTIONS(391),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(403),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [112] = {
    [aux_sym__anything] = STATE(112),
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
    [aux_sym__anything_token1] = ACTIONS(443),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(441),
    [sym__space_no_newline] = ACTIONS(446),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
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
  [115] = {
    [aux_sym__labels] = STATE(115),
    [sym_label_pair] = STATE(115),
    [ts_builtin_sym_end] = ACTIONS(448),
    [aux_sym_add_token1] = ACTIONS(448),
    [aux_sym_arg_token1] = ACTIONS(448),
    [aux_sym_cmd_token1] = ACTIONS(448),
    [aux_sym_copy_token1] = ACTIONS(448),
    [aux_sym_entrypoint_token1] = ACTIONS(448),
    [aux_sym_env_token1] = ACTIONS(448),
    [aux_sym_expose_token1] = ACTIONS(448),
    [aux_sym_from_token1] = ACTIONS(448),
    [aux_sym_healthcheck_token1] = ACTIONS(448),
    [aux_sym_label_token1] = ACTIONS(448),
    [aux_sym_maintainer_token1] = ACTIONS(448),
    [aux_sym_onbuild_token1] = ACTIONS(448),
    [aux_sym_run_token1] = ACTIONS(448),
    [aux_sym_shell_token1] = ACTIONS(448),
    [aux_sym_stopsignal_token1] = ACTIONS(448),
    [aux_sym_user_token1] = ACTIONS(448),
    [aux_sym_volume_token1] = ACTIONS(448),
    [aux_sym_workdir_token1] = ACTIONS(448),
    [sym_label_key] = ACTIONS(450),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(448),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [aux_sym_add_token1] = ACTIONS(453),
    [aux_sym_arg_token1] = ACTIONS(453),
    [aux_sym_cmd_token1] = ACTIONS(453),
    [aux_sym_copy_token1] = ACTIONS(453),
    [aux_sym_entrypoint_token1] = ACTIONS(453),
    [aux_sym_env_token1] = ACTIONS(453),
    [aux_sym_expose_token1] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [aux_sym_from_token1] = ACTIONS(453),
    [aux_sym_healthcheck_token1] = ACTIONS(453),
    [aux_sym_label_token1] = ACTIONS(453),
    [aux_sym_maintainer_token1] = ACTIONS(453),
    [aux_sym_onbuild_token1] = ACTIONS(453),
    [aux_sym_run_token1] = ACTIONS(453),
    [aux_sym_shell_token1] = ACTIONS(453),
    [aux_sym_stopsignal_token1] = ACTIONS(453),
    [aux_sym_user_token1] = ACTIONS(453),
    [anon_sym_DOLLAR] = ACTIONS(453),
    [aux_sym_volume_token1] = ACTIONS(453),
    [aux_sym_workdir_token1] = ACTIONS(453),
    [aux_sym__port_part_token1] = ACTIONS(453),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
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
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [aux_sym_from_layer_token13] = ACTIONS(207),
    [aux_sym_from_layer_token16] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [118] = {
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
  [119] = {
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
  [120] = {
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
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [aux_sym_from_layer_token5] = ACTIONS(195),
    [aux_sym_from_layer_token8] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [121] = {
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
  [122] = {
    [aux_sym__anything] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(455),
    [aux_sym_add_token1] = ACTIONS(455),
    [aux_sym_arg_token1] = ACTIONS(455),
    [aux_sym_cmd_token1] = ACTIONS(455),
    [aux_sym_copy_token1] = ACTIONS(455),
    [aux_sym_entrypoint_token1] = ACTIONS(455),
    [aux_sym_env_token1] = ACTIONS(455),
    [aux_sym_expose_token1] = ACTIONS(455),
    [aux_sym_from_token1] = ACTIONS(455),
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
    [aux_sym__anything_token1] = ACTIONS(457),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(455),
    [sym__space_no_newline] = ACTIONS(459),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [aux_sym_add_token1] = ACTIONS(307),
    [aux_sym_arg_token1] = ACTIONS(307),
    [aux_sym_cmd_token1] = ACTIONS(307),
    [aux_sym_copy_token1] = ACTIONS(307),
    [aux_sym_entrypoint_token1] = ACTIONS(307),
    [aux_sym_env_token1] = ACTIONS(307),
    [aux_sym_expose_token1] = ACTIONS(307),
    [aux_sym_from_token1] = ACTIONS(307),
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
    [aux_sym_path_token1] = ACTIONS(312),
    [aux_sym_path_token2] = ACTIONS(312),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [124] = {
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
    [aux_sym_from_layer_token3] = ACTIONS(191),
    [aux_sym_from_layer_token4] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [125] = {
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
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [aux_sym_add_token1] = ACTIONS(461),
    [aux_sym_arg_token1] = ACTIONS(461),
    [aux_sym_cmd_token1] = ACTIONS(461),
    [aux_sym_copy_token1] = ACTIONS(461),
    [aux_sym_entrypoint_token1] = ACTIONS(461),
    [aux_sym_env_token1] = ACTIONS(461),
    [aux_sym_expose_token1] = ACTIONS(461),
    [aux_sym_from_token1] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(463),
    [anon_sym_AT] = ACTIONS(465),
    [aux_sym_healthcheck_token1] = ACTIONS(461),
    [aux_sym_label_token1] = ACTIONS(461),
    [aux_sym_maintainer_token1] = ACTIONS(461),
    [aux_sym_onbuild_token1] = ACTIONS(461),
    [aux_sym_run_token1] = ACTIONS(461),
    [aux_sym_shell_token1] = ACTIONS(461),
    [aux_sym_stopsignal_token1] = ACTIONS(461),
    [aux_sym_user_token1] = ACTIONS(461),
    [aux_sym_volume_token1] = ACTIONS(461),
    [aux_sym_workdir_token1] = ACTIONS(461),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(461),
    [sym__space_no_newline] = ACTIONS(467),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [aux_sym_add_token1] = ACTIONS(469),
    [aux_sym_arg_token1] = ACTIONS(469),
    [aux_sym_cmd_token1] = ACTIONS(469),
    [aux_sym_copy_token1] = ACTIONS(469),
    [aux_sym_entrypoint_token1] = ACTIONS(469),
    [aux_sym_env_token1] = ACTIONS(469),
    [aux_sym_expose_token1] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [aux_sym_from_token1] = ACTIONS(469),
    [aux_sym_healthcheck_token1] = ACTIONS(469),
    [aux_sym_label_token1] = ACTIONS(469),
    [aux_sym_maintainer_token1] = ACTIONS(469),
    [aux_sym_onbuild_token1] = ACTIONS(469),
    [aux_sym_run_token1] = ACTIONS(469),
    [aux_sym_shell_token1] = ACTIONS(469),
    [aux_sym_stopsignal_token1] = ACTIONS(469),
    [aux_sym_user_token1] = ACTIONS(469),
    [anon_sym_DOLLAR] = ACTIONS(469),
    [aux_sym_volume_token1] = ACTIONS(469),
    [aux_sym_workdir_token1] = ACTIONS(469),
    [aux_sym__port_part_token1] = ACTIONS(469),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [128] = {
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
    [anon_sym_DOLLAR] = ACTIONS(162),
    [aux_sym_volume_token1] = ACTIONS(164),
    [aux_sym_workdir_token1] = ACTIONS(164),
    [aux_sym_from_layer_token3] = ACTIONS(162),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(169),
    [aux_sym_arg_token1] = ACTIONS(169),
    [aux_sym_cmd_token1] = ACTIONS(169),
    [aux_sym_copy_token1] = ACTIONS(169),
    [aux_sym_entrypoint_token1] = ACTIONS(169),
    [aux_sym_env_token1] = ACTIONS(169),
    [aux_sym_expose_token1] = ACTIONS(169),
    [aux_sym_from_token1] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(169),
    [aux_sym_healthcheck_token1] = ACTIONS(169),
    [aux_sym_label_token1] = ACTIONS(169),
    [aux_sym_maintainer_token1] = ACTIONS(169),
    [aux_sym_onbuild_token1] = ACTIONS(169),
    [aux_sym_run_token1] = ACTIONS(169),
    [aux_sym_shell_token1] = ACTIONS(169),
    [aux_sym_stopsignal_token1] = ACTIONS(169),
    [aux_sym_user_token1] = ACTIONS(169),
    [aux_sym_volume_token1] = ACTIONS(169),
    [aux_sym_workdir_token1] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [aux_sym_add_token1] = ACTIONS(347),
    [aux_sym_arg_token1] = ACTIONS(347),
    [aux_sym_cmd_token1] = ACTIONS(347),
    [aux_sym_copy_token1] = ACTIONS(347),
    [aux_sym_entrypoint_token1] = ACTIONS(347),
    [aux_sym_env_token1] = ACTIONS(347),
    [aux_sym_expose_token1] = ACTIONS(347),
    [aux_sym_from_token1] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_AT] = ACTIONS(347),
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
  [131] = {
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
    [aux_sym_from_layer_token3] = ACTIONS(203),
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [132] = {
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
  [133] = {
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
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [aux_sym_add_token1] = ACTIONS(479),
    [aux_sym_arg_token1] = ACTIONS(479),
    [aux_sym_cmd_token1] = ACTIONS(479),
    [aux_sym_copy_token1] = ACTIONS(479),
    [aux_sym_entrypoint_token1] = ACTIONS(479),
    [aux_sym_env_token1] = ACTIONS(479),
    [aux_sym_expose_token1] = ACTIONS(479),
    [aux_sym_from_token1] = ACTIONS(479),
    [anon_sym_COLON] = ACTIONS(481),
    [anon_sym_AT] = ACTIONS(483),
    [aux_sym_healthcheck_token1] = ACTIONS(479),
    [aux_sym_label_token1] = ACTIONS(479),
    [aux_sym_maintainer_token1] = ACTIONS(479),
    [aux_sym_onbuild_token1] = ACTIONS(479),
    [aux_sym_run_token1] = ACTIONS(479),
    [aux_sym_shell_token1] = ACTIONS(479),
    [aux_sym_stopsignal_token1] = ACTIONS(479),
    [aux_sym_user_token1] = ACTIONS(479),
    [aux_sym_volume_token1] = ACTIONS(479),
    [aux_sym_workdir_token1] = ACTIONS(479),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(479),
    [sym__space_no_newline] = ACTIONS(485),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym_add_token1] = ACTIONS(487),
    [aux_sym_arg_token1] = ACTIONS(487),
    [aux_sym_cmd_token1] = ACTIONS(487),
    [aux_sym_copy_token1] = ACTIONS(487),
    [aux_sym_entrypoint_token1] = ACTIONS(487),
    [aux_sym_env_token1] = ACTIONS(487),
    [aux_sym_expose_token1] = ACTIONS(487),
    [aux_sym_from_token1] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(489),
    [anon_sym_AT] = ACTIONS(491),
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
    [sym__space_no_newline] = ACTIONS(493),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [aux_sym__labels] = STATE(115),
    [sym_label_pair] = STATE(115),
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
    [sym_label_key] = ACTIONS(497),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
    [aux_sym__anything] = STATE(137),
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
    [aux_sym__anything_token1] = ACTIONS(499),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(441),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [aux_sym_add_token1] = ACTIONS(502),
    [aux_sym_arg_token1] = ACTIONS(502),
    [aux_sym_cmd_token1] = ACTIONS(502),
    [aux_sym_copy_token1] = ACTIONS(502),
    [aux_sym_entrypoint_token1] = ACTIONS(502),
    [aux_sym_env_token1] = ACTIONS(502),
    [aux_sym_expose_token1] = ACTIONS(502),
    [aux_sym_from_token1] = ACTIONS(502),
    [anon_sym_AT] = ACTIONS(504),
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
    [sym__space_no_newline] = ACTIONS(506),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [aux_sym__env_pairs_repeat1] = STATE(142),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(508),
    [sym__space_no_newline] = ACTIONS(510),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(512),
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
    [aux_sym__anything_token1] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(512),
    [sym__space_no_newline] = ACTIONS(514),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
    [aux_sym__anything] = STATE(151),
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
  [142] = {
    [aux_sym__env_pairs_repeat1] = STATE(145),
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
    [sym__space_no_newline] = ACTIONS(510),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(524),
    [aux_sym_add_token1] = ACTIONS(524),
    [aux_sym_arg_token1] = ACTIONS(524),
    [anon_sym_EQ] = ACTIONS(526),
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
    [sym__space_no_newline] = ACTIONS(528),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
    [aux_sym__anything] = STATE(137),
    [ts_builtin_sym_end] = ACTIONS(530),
    [aux_sym_add_token1] = ACTIONS(530),
    [aux_sym_arg_token1] = ACTIONS(530),
    [aux_sym_cmd_token1] = ACTIONS(530),
    [aux_sym_copy_token1] = ACTIONS(530),
    [aux_sym_entrypoint_token1] = ACTIONS(530),
    [aux_sym_env_token1] = ACTIONS(530),
    [aux_sym_expose_token1] = ACTIONS(530),
    [aux_sym_from_token1] = ACTIONS(530),
    [aux_sym_healthcheck_token1] = ACTIONS(530),
    [aux_sym_label_token1] = ACTIONS(530),
    [aux_sym_maintainer_token1] = ACTIONS(530),
    [aux_sym_onbuild_token1] = ACTIONS(530),
    [aux_sym_run_token1] = ACTIONS(530),
    [aux_sym_shell_token1] = ACTIONS(530),
    [aux_sym_stopsignal_token1] = ACTIONS(530),
    [aux_sym_user_token1] = ACTIONS(530),
    [aux_sym_volume_token1] = ACTIONS(530),
    [aux_sym_workdir_token1] = ACTIONS(530),
    [aux_sym__anything_token1] = ACTIONS(532),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(530),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [145] = {
    [aux_sym__env_pairs_repeat1] = STATE(145),
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
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [aux_sym_add_token1] = ACTIONS(277),
    [aux_sym_arg_token1] = ACTIONS(277),
    [aux_sym_cmd_token1] = ACTIONS(277),
    [aux_sym_copy_token1] = ACTIONS(277),
    [aux_sym_entrypoint_token1] = ACTIONS(277),
    [aux_sym_env_token1] = ACTIONS(277),
    [aux_sym_expose_token1] = ACTIONS(277),
    [aux_sym_from_token1] = ACTIONS(277),
    [anon_sym_AT] = ACTIONS(277),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(277),
    [sym__space_no_newline] = ACTIONS(279),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [aux_sym_add_token1] = ACTIONS(539),
    [aux_sym_arg_token1] = ACTIONS(539),
    [aux_sym_cmd_token1] = ACTIONS(539),
    [aux_sym_copy_token1] = ACTIONS(539),
    [aux_sym_entrypoint_token1] = ACTIONS(539),
    [aux_sym_env_token1] = ACTIONS(539),
    [aux_sym_expose_token1] = ACTIONS(539),
    [aux_sym_from_token1] = ACTIONS(539),
    [anon_sym_AT] = ACTIONS(539),
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
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [aux_sym_add_token1] = ACTIONS(461),
    [aux_sym_arg_token1] = ACTIONS(461),
    [aux_sym_cmd_token1] = ACTIONS(461),
    [aux_sym_copy_token1] = ACTIONS(461),
    [aux_sym_entrypoint_token1] = ACTIONS(461),
    [aux_sym_env_token1] = ACTIONS(461),
    [aux_sym_expose_token1] = ACTIONS(461),
    [aux_sym_from_token1] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(465),
    [aux_sym_healthcheck_token1] = ACTIONS(461),
    [aux_sym_label_token1] = ACTIONS(461),
    [aux_sym_maintainer_token1] = ACTIONS(461),
    [aux_sym_onbuild_token1] = ACTIONS(461),
    [aux_sym_run_token1] = ACTIONS(461),
    [aux_sym_shell_token1] = ACTIONS(461),
    [aux_sym_stopsignal_token1] = ACTIONS(461),
    [aux_sym_user_token1] = ACTIONS(461),
    [aux_sym_volume_token1] = ACTIONS(461),
    [aux_sym_workdir_token1] = ACTIONS(461),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(461),
    [sym__space_no_newline] = ACTIONS(467),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [aux_sym_add_token1] = ACTIONS(487),
    [aux_sym_arg_token1] = ACTIONS(487),
    [aux_sym_cmd_token1] = ACTIONS(487),
    [aux_sym_copy_token1] = ACTIONS(487),
    [aux_sym_entrypoint_token1] = ACTIONS(487),
    [aux_sym_env_token1] = ACTIONS(487),
    [aux_sym_expose_token1] = ACTIONS(487),
    [aux_sym_from_token1] = ACTIONS(487),
    [anon_sym_AT] = ACTIONS(491),
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
    [sym__space_no_newline] = ACTIONS(493),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [aux_sym_add_token1] = ACTIONS(283),
    [aux_sym_arg_token1] = ACTIONS(283),
    [aux_sym_cmd_token1] = ACTIONS(283),
    [aux_sym_copy_token1] = ACTIONS(283),
    [aux_sym_entrypoint_token1] = ACTIONS(283),
    [aux_sym_env_token1] = ACTIONS(283),
    [aux_sym_expose_token1] = ACTIONS(283),
    [aux_sym_from_token1] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(283),
    [aux_sym_healthcheck_token1] = ACTIONS(283),
    [aux_sym_label_token1] = ACTIONS(283),
    [aux_sym_maintainer_token1] = ACTIONS(283),
    [aux_sym_onbuild_token1] = ACTIONS(283),
    [aux_sym_run_token1] = ACTIONS(283),
    [aux_sym_shell_token1] = ACTIONS(283),
    [aux_sym_stopsignal_token1] = ACTIONS(283),
    [aux_sym_user_token1] = ACTIONS(283),
    [aux_sym_volume_token1] = ACTIONS(283),
    [aux_sym_workdir_token1] = ACTIONS(283),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(283),
    [sym__space_no_newline] = ACTIONS(285),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
    [aux_sym__anything] = STATE(151),
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
    [aux_sym__anything_token1] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(441),
    [sym_comment] = ACTIONS(441),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(546),
    [aux_sym_add_token1] = ACTIONS(546),
    [aux_sym_arg_token1] = ACTIONS(546),
    [aux_sym_cmd_token1] = ACTIONS(546),
    [aux_sym_copy_token1] = ACTIONS(546),
    [aux_sym_entrypoint_token1] = ACTIONS(546),
    [aux_sym_env_token1] = ACTIONS(546),
    [aux_sym_expose_token1] = ACTIONS(546),
    [aux_sym_from_token1] = ACTIONS(546),
    [anon_sym_AT] = ACTIONS(546),
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
    [sym__space_no_newline] = ACTIONS(548),
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
    [sym__space_no_newline] = ACTIONS(506),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [155] = {
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
    [sym__space_no_newline] = ACTIONS(556),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(512),
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
    [aux_sym__anything_token1] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(512),
    [sym_comment] = ACTIONS(512),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(558),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(558),
    [sym__space_no_newline] = ACTIONS(560),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(562),
    [aux_sym_add_token1] = ACTIONS(562),
    [aux_sym_arg_token1] = ACTIONS(562),
    [aux_sym_cmd_token1] = ACTIONS(562),
    [aux_sym_copy_token1] = ACTIONS(562),
    [aux_sym_entrypoint_token1] = ACTIONS(562),
    [aux_sym_env_token1] = ACTIONS(562),
    [aux_sym_expose_token1] = ACTIONS(562),
    [aux_sym_from_token1] = ACTIONS(562),
    [aux_sym_healthcheck_token1] = ACTIONS(562),
    [aux_sym_label_token1] = ACTIONS(562),
    [aux_sym_maintainer_token1] = ACTIONS(562),
    [aux_sym_onbuild_token1] = ACTIONS(562),
    [aux_sym_run_token1] = ACTIONS(562),
    [aux_sym_shell_token1] = ACTIONS(562),
    [aux_sym_stopsignal_token1] = ACTIONS(562),
    [aux_sym_user_token1] = ACTIONS(562),
    [aux_sym_volume_token1] = ACTIONS(562),
    [aux_sym_workdir_token1] = ACTIONS(562),
    [sym_label_key] = ACTIONS(564),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(562),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(566),
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
    [sym_label_key] = ACTIONS(568),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(566),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(570),
    [aux_sym_add_token1] = ACTIONS(570),
    [aux_sym_arg_token1] = ACTIONS(570),
    [aux_sym_cmd_token1] = ACTIONS(570),
    [aux_sym_copy_token1] = ACTIONS(570),
    [aux_sym_entrypoint_token1] = ACTIONS(570),
    [aux_sym_env_token1] = ACTIONS(570),
    [aux_sym_expose_token1] = ACTIONS(570),
    [aux_sym_from_token1] = ACTIONS(570),
    [anon_sym_COLON] = ACTIONS(570),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(570),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [161] = {
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
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(576),
    [aux_sym_add_token1] = ACTIONS(576),
    [aux_sym_arg_token1] = ACTIONS(576),
    [aux_sym_cmd_token1] = ACTIONS(576),
    [aux_sym_copy_token1] = ACTIONS(576),
    [aux_sym_entrypoint_token1] = ACTIONS(576),
    [aux_sym_env_token1] = ACTIONS(576),
    [aux_sym_expose_token1] = ACTIONS(576),
    [aux_sym_from_token1] = ACTIONS(576),
    [anon_sym_COLON] = ACTIONS(576),
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
  [163] = {
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
    [sym_label_key] = ACTIONS(580),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(578),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [164] = {
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
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(582),
    [aux_sym_add_token1] = ACTIONS(582),
    [aux_sym_arg_token1] = ACTIONS(582),
    [aux_sym_cmd_token1] = ACTIONS(582),
    [aux_sym_copy_token1] = ACTIONS(582),
    [aux_sym_entrypoint_token1] = ACTIONS(582),
    [aux_sym_env_token1] = ACTIONS(582),
    [aux_sym_expose_token1] = ACTIONS(582),
    [aux_sym_from_token1] = ACTIONS(582),
    [anon_sym_COLON] = ACTIONS(584),
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
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(582),
    [aux_sym_add_token1] = ACTIONS(582),
    [aux_sym_arg_token1] = ACTIONS(582),
    [aux_sym_cmd_token1] = ACTIONS(582),
    [aux_sym_copy_token1] = ACTIONS(582),
    [aux_sym_entrypoint_token1] = ACTIONS(582),
    [aux_sym_env_token1] = ACTIONS(582),
    [aux_sym_expose_token1] = ACTIONS(582),
    [aux_sym_from_token1] = ACTIONS(582),
    [anon_sym_COLON] = ACTIONS(586),
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
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [aux_sym_add_token1] = ACTIONS(461),
    [aux_sym_arg_token1] = ACTIONS(461),
    [aux_sym_cmd_token1] = ACTIONS(461),
    [aux_sym_copy_token1] = ACTIONS(461),
    [aux_sym_entrypoint_token1] = ACTIONS(461),
    [aux_sym_env_token1] = ACTIONS(461),
    [aux_sym_expose_token1] = ACTIONS(461),
    [aux_sym_from_token1] = ACTIONS(461),
    [aux_sym_healthcheck_token1] = ACTIONS(461),
    [aux_sym_label_token1] = ACTIONS(461),
    [aux_sym_maintainer_token1] = ACTIONS(461),
    [aux_sym_onbuild_token1] = ACTIONS(461),
    [aux_sym_run_token1] = ACTIONS(461),
    [aux_sym_shell_token1] = ACTIONS(461),
    [aux_sym_stopsignal_token1] = ACTIONS(461),
    [aux_sym_user_token1] = ACTIONS(461),
    [aux_sym_volume_token1] = ACTIONS(461),
    [aux_sym_workdir_token1] = ACTIONS(461),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(461),
    [sym__space_no_newline] = ACTIONS(467),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(588),
    [aux_sym_add_token1] = ACTIONS(588),
    [aux_sym_arg_token1] = ACTIONS(588),
    [anon_sym_EQ] = ACTIONS(590),
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
  [169] = {
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
  [170] = {
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
  [171] = {
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
  [172] = {
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
    [sym__space_no_newline] = ACTIONS(493),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
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
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(512),
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
    [aux_sym__anything_token1] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(512),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(600),
    [sym__space_no_newline] = ACTIONS(602),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(604),
    [sym__space_no_newline] = ACTIONS(606),
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
  [180] = {
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
  [183] = {
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
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(335),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(335),
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
    [ts_builtin_sym_end] = ACTIONS(558),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(558),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [187] = {
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
  [188] = {
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
  [189] = {
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
  [190] = {
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
  [191] = {
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
  [192] = {
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
  [193] = {
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
  [194] = {
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
  [195] = {
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
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [aux_sym_add_token1] = ACTIONS(257),
    [aux_sym_arg_token1] = ACTIONS(257),
    [aux_sym_cmd_token1] = ACTIONS(257),
    [aux_sym_copy_token1] = ACTIONS(257),
    [aux_sym_entrypoint_token1] = ACTIONS(257),
    [aux_sym_env_token1] = ACTIONS(257),
    [aux_sym_expose_token1] = ACTIONS(257),
    [aux_sym_from_token1] = ACTIONS(257),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(257),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [197] = {
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
  [198] = {
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
  [199] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [200] = {
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
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [aux_sym_add_token1] = ACTIONS(339),
    [aux_sym_arg_token1] = ACTIONS(339),
    [aux_sym_cmd_token1] = ACTIONS(339),
    [aux_sym_copy_token1] = ACTIONS(339),
    [aux_sym_entrypoint_token1] = ACTIONS(339),
    [aux_sym_env_token1] = ACTIONS(339),
    [aux_sym_expose_token1] = ACTIONS(339),
    [aux_sym_from_token1] = ACTIONS(339),
    [aux_sym_healthcheck_token1] = ACTIONS(339),
    [aux_sym_label_token1] = ACTIONS(339),
    [aux_sym_maintainer_token1] = ACTIONS(339),
    [aux_sym_onbuild_token1] = ACTIONS(339),
    [aux_sym_run_token1] = ACTIONS(339),
    [aux_sym_shell_token1] = ACTIONS(339),
    [aux_sym_stopsignal_token1] = ACTIONS(339),
    [aux_sym_user_token1] = ACTIONS(339),
    [aux_sym_volume_token1] = ACTIONS(339),
    [aux_sym_workdir_token1] = ACTIONS(339),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(339),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [202] = {
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
  [203] = {
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
  [204] = {
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
  [205] = {
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
  [206] = {
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
  [207] = {
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
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [aux_sym_add_token1] = ACTIONS(291),
    [aux_sym_arg_token1] = ACTIONS(291),
    [aux_sym_cmd_token1] = ACTIONS(291),
    [aux_sym_copy_token1] = ACTIONS(291),
    [aux_sym_entrypoint_token1] = ACTIONS(291),
    [aux_sym_env_token1] = ACTIONS(291),
    [aux_sym_expose_token1] = ACTIONS(291),
    [aux_sym_from_token1] = ACTIONS(291),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [209] = {
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
  [210] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [211] = {
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
  [212] = {
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
  [213] = {
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
    [ts_builtin_sym_end] = ACTIONS(289),
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
    [aux_sym_volume_token1] = ACTIONS(289),
    [aux_sym_workdir_token1] = ACTIONS(289),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(289),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(403),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(403),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [219] = {
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
  [220] = {
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
  [221] = {
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
  [222] = {
    [sym__hc_interval] = STATE(227),
    [sym__hc_timeout] = STATE(227),
    [sym__hc_start_period] = STATE(227),
    [sym__hc_retries] = STATE(227),
    [sym__hc_options] = STATE(227),
    [sym__hc_command] = STATE(213),
    [aux_sym_healthcheck_repeat1] = STATE(227),
    [sym_hc_none] = ACTIONS(664),
    [anon_sym_DASH_DASHinterval] = ACTIONS(666),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(668),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(670),
    [anon_sym_DASH_DASHretries] = ACTIONS(672),
    [aux_sym__hc_command_token1] = ACTIONS(674),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [223] = {
    [sym_repository] = STATE(261),
    [sym__repository_start] = STATE(237),
    [sym_image] = STATE(133),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(676),
    [anon_sym_DOLLAR] = ACTIONS(678),
    [aux_sym_from_layer_token1] = ACTIONS(680),
    [aux_sym_from_layer_token2] = ACTIONS(678),
    [aux_sym_from_layer_token5] = ACTIONS(682),
    [aux_sym_from_layer_token7] = ACTIONS(682),
    [aux_sym_from_layer_token9] = ACTIONS(684),
    [aux_sym_from_layer_token11] = ACTIONS(684),
    [aux_sym_from_layer_token13] = ACTIONS(686),
    [aux_sym_from_layer_token15] = ACTIONS(686),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [224] = {
    [sym_repository] = STATE(245),
    [sym__repository_start] = STATE(237),
    [sym_image] = STATE(126),
    [anon_sym_DOLLAR] = ACTIONS(678),
    [aux_sym_from_layer_token1] = ACTIONS(680),
    [aux_sym_from_layer_token2] = ACTIONS(678),
    [aux_sym_from_layer_token5] = ACTIONS(682),
    [aux_sym_from_layer_token7] = ACTIONS(682),
    [aux_sym_from_layer_token9] = ACTIONS(684),
    [aux_sym_from_layer_token11] = ACTIONS(684),
    [aux_sym_from_layer_token13] = ACTIONS(686),
    [aux_sym_from_layer_token15] = ACTIONS(686),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [225] = {
    [sym__chown] = STATE(228),
    [sym__from_layer] = STATE(228),
    [sym_path] = STATE(92),
    [aux_sym__paths] = STATE(43),
    [aux_sym_copy_repeat1] = STATE(228),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(688),
    [aux_sym__from_layer_token1] = ACTIONS(690),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(692),
  },
  [226] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym_mapped_no_lhs] = STATE(183),
    [sym__port] = STATE(94),
    [sym_port] = STATE(94),
    [sym_port_range] = STATE(94),
    [sym__port_part] = STATE(83),
    [aux_sym_expose_repeat1] = STATE(5),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(694),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [227] = {
    [sym__hc_interval] = STATE(236),
    [sym__hc_timeout] = STATE(236),
    [sym__hc_start_period] = STATE(236),
    [sym__hc_retries] = STATE(236),
    [sym__hc_options] = STATE(236),
    [sym__hc_command] = STATE(209),
    [aux_sym_healthcheck_repeat1] = STATE(236),
    [anon_sym_DASH_DASHinterval] = ACTIONS(666),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(668),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(670),
    [anon_sym_DASH_DASHretries] = ACTIONS(672),
    [aux_sym__hc_command_token1] = ACTIONS(674),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [228] = {
    [sym__chown] = STATE(250),
    [sym__from_layer] = STATE(250),
    [sym_path] = STATE(92),
    [aux_sym__paths] = STATE(51),
    [aux_sym_copy_repeat1] = STATE(250),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(688),
    [aux_sym__from_layer_token1] = ACTIONS(690),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(696),
  },
  [229] = {
    [sym__repository_continued] = STATE(233),
    [aux_sym_repository_repeat1] = STATE(233),
    [anon_sym_DOLLAR] = ACTIONS(698),
    [aux_sym_from_layer_token1] = ACTIONS(701),
    [aux_sym_from_layer_token2] = ACTIONS(698),
    [aux_sym_from_layer_token5] = ACTIONS(704),
    [aux_sym_from_layer_token7] = ACTIONS(704),
    [aux_sym_from_layer_token9] = ACTIONS(707),
    [aux_sym_from_layer_token11] = ACTIONS(707),
    [aux_sym_from_layer_token13] = ACTIONS(710),
    [aux_sym_from_layer_token15] = ACTIONS(710),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [230] = {
    [sym_digest] = STATE(157),
    [anon_sym_sha256_COLON] = ACTIONS(713),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(717),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(719),
    [aux_sym_from_layer_token7] = ACTIONS(719),
    [aux_sym_from_layer_token9] = ACTIONS(721),
    [aux_sym_from_layer_token11] = ACTIONS(721),
    [aux_sym_from_layer_token13] = ACTIONS(723),
    [aux_sym_from_layer_token15] = ACTIONS(723),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [231] = {
    [sym_digest] = STATE(154),
    [anon_sym_sha256_COLON] = ACTIONS(725),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(717),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(719),
    [aux_sym_from_layer_token7] = ACTIONS(719),
    [aux_sym_from_layer_token9] = ACTIONS(721),
    [aux_sym_from_layer_token11] = ACTIONS(721),
    [aux_sym_from_layer_token13] = ACTIONS(723),
    [aux_sym_from_layer_token15] = ACTIONS(723),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [sym_digest] = STATE(173),
    [anon_sym_sha256_COLON] = ACTIONS(727),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(717),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(719),
    [aux_sym_from_layer_token7] = ACTIONS(719),
    [aux_sym_from_layer_token9] = ACTIONS(721),
    [aux_sym_from_layer_token11] = ACTIONS(721),
    [aux_sym_from_layer_token13] = ACTIONS(723),
    [aux_sym_from_layer_token15] = ACTIONS(723),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [sym__repository_continued] = STATE(233),
    [aux_sym_repository_repeat1] = STATE(233),
    [anon_sym_DOLLAR] = ACTIONS(729),
    [aux_sym_from_layer_token1] = ACTIONS(732),
    [aux_sym_from_layer_token2] = ACTIONS(729),
    [aux_sym_from_layer_token5] = ACTIONS(735),
    [aux_sym_from_layer_token7] = ACTIONS(735),
    [aux_sym_from_layer_token9] = ACTIONS(738),
    [aux_sym_from_layer_token11] = ACTIONS(738),
    [aux_sym_from_layer_token13] = ACTIONS(741),
    [aux_sym_from_layer_token15] = ACTIONS(741),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [234] = {
    [sym_digest] = STATE(172),
    [anon_sym_sha256_COLON] = ACTIONS(744),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(717),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(719),
    [aux_sym_from_layer_token7] = ACTIONS(719),
    [aux_sym_from_layer_token9] = ACTIONS(721),
    [aux_sym_from_layer_token11] = ACTIONS(721),
    [aux_sym_from_layer_token13] = ACTIONS(723),
    [aux_sym_from_layer_token15] = ACTIONS(723),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [sym_digest] = STATE(167),
    [anon_sym_sha256_COLON] = ACTIONS(746),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(717),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(719),
    [aux_sym_from_layer_token7] = ACTIONS(719),
    [aux_sym_from_layer_token9] = ACTIONS(721),
    [aux_sym_from_layer_token11] = ACTIONS(721),
    [aux_sym_from_layer_token13] = ACTIONS(723),
    [aux_sym_from_layer_token15] = ACTIONS(723),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [236] = {
    [sym__hc_interval] = STATE(236),
    [sym__hc_timeout] = STATE(236),
    [sym__hc_start_period] = STATE(236),
    [sym__hc_retries] = STATE(236),
    [sym__hc_options] = STATE(236),
    [aux_sym_healthcheck_repeat1] = STATE(236),
    [anon_sym_DASH_DASHinterval] = ACTIONS(748),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(751),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(754),
    [anon_sym_DASH_DASHretries] = ACTIONS(757),
    [aux_sym__hc_command_token1] = ACTIONS(760),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [237] = {
    [sym__repository_continued] = STATE(229),
    [aux_sym_repository_repeat1] = STATE(229),
    [anon_sym_DOLLAR] = ACTIONS(762),
    [aux_sym_from_layer_token1] = ACTIONS(765),
    [aux_sym_from_layer_token2] = ACTIONS(762),
    [aux_sym_from_layer_token5] = ACTIONS(768),
    [aux_sym_from_layer_token7] = ACTIONS(768),
    [aux_sym_from_layer_token9] = ACTIONS(771),
    [aux_sym_from_layer_token11] = ACTIONS(771),
    [aux_sym_from_layer_token13] = ACTIONS(774),
    [aux_sym_from_layer_token15] = ACTIONS(774),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [238] = {
    [sym_digest] = STATE(161),
    [anon_sym_sha256_COLON] = ACTIONS(777),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(717),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(719),
    [aux_sym_from_layer_token7] = ACTIONS(719),
    [aux_sym_from_layer_token9] = ACTIONS(721),
    [aux_sym_from_layer_token11] = ACTIONS(721),
    [aux_sym_from_layer_token13] = ACTIONS(723),
    [aux_sym_from_layer_token15] = ACTIONS(723),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [239] = {
    [sym_digest] = STATE(173),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(717),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(719),
    [aux_sym_from_layer_token7] = ACTIONS(719),
    [aux_sym_from_layer_token9] = ACTIONS(721),
    [aux_sym_from_layer_token11] = ACTIONS(721),
    [aux_sym_from_layer_token13] = ACTIONS(723),
    [aux_sym_from_layer_token15] = ACTIONS(723),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
    [sym_digest] = STATE(175),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(717),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(719),
    [aux_sym_from_layer_token7] = ACTIONS(719),
    [aux_sym_from_layer_token9] = ACTIONS(721),
    [aux_sym_from_layer_token11] = ACTIONS(721),
    [aux_sym_from_layer_token13] = ACTIONS(723),
    [aux_sym_from_layer_token15] = ACTIONS(723),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [241] = {
    [sym_as_name] = STATE(215),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_from_layer_token1] = ACTIONS(781),
    [aux_sym_from_layer_token2] = ACTIONS(779),
    [aux_sym_from_layer_token5] = ACTIONS(783),
    [aux_sym_from_layer_token7] = ACTIONS(783),
    [aux_sym_from_layer_token9] = ACTIONS(785),
    [aux_sym_from_layer_token11] = ACTIONS(785),
    [aux_sym_from_layer_token13] = ACTIONS(787),
    [aux_sym_from_layer_token15] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [242] = {
    [sym_from_layer] = STATE(512),
    [anon_sym_DOLLAR] = ACTIONS(789),
    [aux_sym_from_layer_token1] = ACTIONS(791),
    [aux_sym_from_layer_token2] = ACTIONS(789),
    [aux_sym_from_layer_token5] = ACTIONS(793),
    [aux_sym_from_layer_token7] = ACTIONS(793),
    [aux_sym_from_layer_token9] = ACTIONS(795),
    [aux_sym_from_layer_token11] = ACTIONS(795),
    [aux_sym_from_layer_token13] = ACTIONS(797),
    [aux_sym_from_layer_token15] = ACTIONS(797),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [243] = {
    [sym_as_name] = STATE(199),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_from_layer_token1] = ACTIONS(781),
    [aux_sym_from_layer_token2] = ACTIONS(779),
    [aux_sym_from_layer_token5] = ACTIONS(783),
    [aux_sym_from_layer_token7] = ACTIONS(783),
    [aux_sym_from_layer_token9] = ACTIONS(785),
    [aux_sym_from_layer_token11] = ACTIONS(785),
    [aux_sym_from_layer_token13] = ACTIONS(787),
    [aux_sym_from_layer_token15] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [244] = {
    [sym_as_name] = STATE(186),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_from_layer_token1] = ACTIONS(781),
    [aux_sym_from_layer_token2] = ACTIONS(779),
    [aux_sym_from_layer_token5] = ACTIONS(783),
    [aux_sym_from_layer_token7] = ACTIONS(783),
    [aux_sym_from_layer_token9] = ACTIONS(785),
    [aux_sym_from_layer_token11] = ACTIONS(785),
    [aux_sym_from_layer_token13] = ACTIONS(787),
    [aux_sym_from_layer_token15] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [245] = {
    [sym_image] = STATE(135),
    [anon_sym_DOLLAR] = ACTIONS(799),
    [aux_sym_from_layer_token1] = ACTIONS(801),
    [aux_sym_from_layer_token2] = ACTIONS(799),
    [aux_sym_from_layer_token5] = ACTIONS(803),
    [aux_sym_from_layer_token7] = ACTIONS(803),
    [aux_sym_from_layer_token9] = ACTIONS(805),
    [aux_sym_from_layer_token11] = ACTIONS(805),
    [aux_sym_from_layer_token13] = ACTIONS(807),
    [aux_sym_from_layer_token15] = ACTIONS(807),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [246] = {
    [sym_as_name] = STATE(205),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_from_layer_token1] = ACTIONS(781),
    [aux_sym_from_layer_token2] = ACTIONS(779),
    [aux_sym_from_layer_token5] = ACTIONS(783),
    [aux_sym_from_layer_token7] = ACTIONS(783),
    [aux_sym_from_layer_token9] = ACTIONS(785),
    [aux_sym_from_layer_token11] = ACTIONS(785),
    [aux_sym_from_layer_token13] = ACTIONS(787),
    [aux_sym_from_layer_token15] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [sym_as_name] = STATE(182),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_from_layer_token1] = ACTIONS(781),
    [aux_sym_from_layer_token2] = ACTIONS(779),
    [aux_sym_from_layer_token5] = ACTIONS(783),
    [aux_sym_from_layer_token7] = ACTIONS(783),
    [aux_sym_from_layer_token9] = ACTIONS(785),
    [aux_sym_from_layer_token11] = ACTIONS(785),
    [aux_sym_from_layer_token13] = ACTIONS(787),
    [aux_sym_from_layer_token15] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [sym_as_name] = STATE(210),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_from_layer_token1] = ACTIONS(781),
    [aux_sym_from_layer_token2] = ACTIONS(779),
    [aux_sym_from_layer_token5] = ACTIONS(783),
    [aux_sym_from_layer_token7] = ACTIONS(783),
    [aux_sym_from_layer_token9] = ACTIONS(785),
    [aux_sym_from_layer_token11] = ACTIONS(785),
    [aux_sym_from_layer_token13] = ACTIONS(787),
    [aux_sym_from_layer_token15] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [sym_digest] = STATE(161),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(717),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(719),
    [aux_sym_from_layer_token7] = ACTIONS(719),
    [aux_sym_from_layer_token9] = ACTIONS(721),
    [aux_sym_from_layer_token11] = ACTIONS(721),
    [aux_sym_from_layer_token13] = ACTIONS(723),
    [aux_sym_from_layer_token15] = ACTIONS(723),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [sym__chown] = STATE(250),
    [sym__from_layer] = STATE(250),
    [aux_sym_copy_repeat1] = STATE(250),
    [anon_sym_DQUOTE] = ACTIONS(809),
    [anon_sym_DOLLAR] = ACTIONS(809),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(811),
    [aux_sym__from_layer_token1] = ACTIONS(814),
    [aux_sym_path_token1] = ACTIONS(817),
    [aux_sym_path_token2] = ACTIONS(817),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(809),
  },
  [251] = {
    [sym_as_name] = STATE(180),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_from_layer_token1] = ACTIONS(781),
    [aux_sym_from_layer_token2] = ACTIONS(779),
    [aux_sym_from_layer_token5] = ACTIONS(783),
    [aux_sym_from_layer_token7] = ACTIONS(783),
    [aux_sym_from_layer_token9] = ACTIONS(785),
    [aux_sym_from_layer_token11] = ACTIONS(785),
    [aux_sym_from_layer_token13] = ACTIONS(787),
    [aux_sym_from_layer_token15] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [252] = {
    [sym_digest] = STATE(154),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(717),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(719),
    [aux_sym_from_layer_token7] = ACTIONS(719),
    [aux_sym_from_layer_token9] = ACTIONS(721),
    [aux_sym_from_layer_token11] = ACTIONS(721),
    [aux_sym_from_layer_token13] = ACTIONS(723),
    [aux_sym_from_layer_token15] = ACTIONS(723),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [253] = {
    [sym_digest] = STATE(157),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(717),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(719),
    [aux_sym_from_layer_token7] = ACTIONS(719),
    [aux_sym_from_layer_token9] = ACTIONS(721),
    [aux_sym_from_layer_token11] = ACTIONS(721),
    [aux_sym_from_layer_token13] = ACTIONS(723),
    [aux_sym_from_layer_token15] = ACTIONS(723),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [254] = {
    [sym_tag] = STATE(148),
    [anon_sym_DOLLAR] = ACTIONS(819),
    [aux_sym_from_layer_token1] = ACTIONS(821),
    [aux_sym_from_layer_token2] = ACTIONS(819),
    [aux_sym_from_layer_token5] = ACTIONS(823),
    [aux_sym_from_layer_token7] = ACTIONS(823),
    [aux_sym_from_layer_token9] = ACTIONS(825),
    [aux_sym_from_layer_token11] = ACTIONS(825),
    [aux_sym_from_layer_token13] = ACTIONS(827),
    [aux_sym_from_layer_token15] = ACTIONS(827),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [255] = {
    [sym_as_name] = STATE(207),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_from_layer_token1] = ACTIONS(781),
    [aux_sym_from_layer_token2] = ACTIONS(779),
    [aux_sym_from_layer_token5] = ACTIONS(783),
    [aux_sym_from_layer_token7] = ACTIONS(783),
    [aux_sym_from_layer_token9] = ACTIONS(785),
    [aux_sym_from_layer_token11] = ACTIONS(785),
    [aux_sym_from_layer_token13] = ACTIONS(787),
    [aux_sym_from_layer_token15] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [256] = {
    [sym_digest] = STATE(172),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(717),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(719),
    [aux_sym_from_layer_token7] = ACTIONS(719),
    [aux_sym_from_layer_token9] = ACTIONS(721),
    [aux_sym_from_layer_token11] = ACTIONS(721),
    [aux_sym_from_layer_token13] = ACTIONS(723),
    [aux_sym_from_layer_token15] = ACTIONS(723),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [257] = {
    [sym_tag] = STATE(149),
    [anon_sym_DOLLAR] = ACTIONS(819),
    [aux_sym_from_layer_token1] = ACTIONS(821),
    [aux_sym_from_layer_token2] = ACTIONS(819),
    [aux_sym_from_layer_token5] = ACTIONS(823),
    [aux_sym_from_layer_token7] = ACTIONS(823),
    [aux_sym_from_layer_token9] = ACTIONS(825),
    [aux_sym_from_layer_token11] = ACTIONS(825),
    [aux_sym_from_layer_token13] = ACTIONS(827),
    [aux_sym_from_layer_token15] = ACTIONS(827),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [258] = {
    [sym_tag] = STATE(138),
    [anon_sym_DOLLAR] = ACTIONS(819),
    [aux_sym_from_layer_token1] = ACTIONS(821),
    [aux_sym_from_layer_token2] = ACTIONS(819),
    [aux_sym_from_layer_token5] = ACTIONS(823),
    [aux_sym_from_layer_token7] = ACTIONS(823),
    [aux_sym_from_layer_token9] = ACTIONS(825),
    [aux_sym_from_layer_token11] = ACTIONS(825),
    [aux_sym_from_layer_token13] = ACTIONS(827),
    [aux_sym_from_layer_token15] = ACTIONS(827),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [259] = {
    [sym_as_name] = STATE(191),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [aux_sym_from_layer_token1] = ACTIONS(781),
    [aux_sym_from_layer_token2] = ACTIONS(779),
    [aux_sym_from_layer_token5] = ACTIONS(783),
    [aux_sym_from_layer_token7] = ACTIONS(783),
    [aux_sym_from_layer_token9] = ACTIONS(785),
    [aux_sym_from_layer_token11] = ACTIONS(785),
    [aux_sym_from_layer_token13] = ACTIONS(787),
    [aux_sym_from_layer_token15] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [260] = {
    [sym_tag] = STATE(153),
    [anon_sym_DOLLAR] = ACTIONS(819),
    [aux_sym_from_layer_token1] = ACTIONS(821),
    [aux_sym_from_layer_token2] = ACTIONS(819),
    [aux_sym_from_layer_token5] = ACTIONS(823),
    [aux_sym_from_layer_token7] = ACTIONS(823),
    [aux_sym_from_layer_token9] = ACTIONS(825),
    [aux_sym_from_layer_token11] = ACTIONS(825),
    [aux_sym_from_layer_token13] = ACTIONS(827),
    [aux_sym_from_layer_token15] = ACTIONS(827),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [261] = {
    [sym_image] = STATE(134),
    [anon_sym_DOLLAR] = ACTIONS(799),
    [aux_sym_from_layer_token1] = ACTIONS(801),
    [aux_sym_from_layer_token2] = ACTIONS(799),
    [aux_sym_from_layer_token5] = ACTIONS(803),
    [aux_sym_from_layer_token7] = ACTIONS(803),
    [aux_sym_from_layer_token9] = ACTIONS(805),
    [aux_sym_from_layer_token11] = ACTIONS(805),
    [aux_sym_from_layer_token13] = ACTIONS(807),
    [aux_sym_from_layer_token15] = ACTIONS(807),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [262] = {
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
  [263] = {
    [anon_sym_DOLLAR] = ACTIONS(829),
    [aux_sym_from_layer_token1] = ACTIONS(831),
    [aux_sym_from_layer_token2] = ACTIONS(829),
    [aux_sym_from_layer_token5] = ACTIONS(829),
    [aux_sym_from_layer_token7] = ACTIONS(829),
    [aux_sym_from_layer_token9] = ACTIONS(829),
    [aux_sym_from_layer_token11] = ACTIONS(829),
    [aux_sym_from_layer_token13] = ACTIONS(829),
    [aux_sym_from_layer_token15] = ACTIONS(829),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [264] = {
    [anon_sym_DOLLAR] = ACTIONS(833),
    [aux_sym_from_layer_token1] = ACTIONS(835),
    [aux_sym_from_layer_token2] = ACTIONS(833),
    [aux_sym_from_layer_token5] = ACTIONS(833),
    [aux_sym_from_layer_token7] = ACTIONS(833),
    [aux_sym_from_layer_token9] = ACTIONS(833),
    [aux_sym_from_layer_token11] = ACTIONS(833),
    [aux_sym_from_layer_token13] = ACTIONS(833),
    [aux_sym_from_layer_token15] = ACTIONS(833),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [265] = {
    [anon_sym_DOLLAR] = ACTIONS(837),
    [aux_sym_from_layer_token1] = ACTIONS(839),
    [aux_sym_from_layer_token2] = ACTIONS(837),
    [aux_sym_from_layer_token5] = ACTIONS(837),
    [aux_sym_from_layer_token7] = ACTIONS(837),
    [aux_sym_from_layer_token9] = ACTIONS(837),
    [aux_sym_from_layer_token11] = ACTIONS(837),
    [aux_sym_from_layer_token13] = ACTIONS(837),
    [aux_sym_from_layer_token15] = ACTIONS(837),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [266] = {
    [anon_sym_DOLLAR] = ACTIONS(841),
    [aux_sym_from_layer_token1] = ACTIONS(843),
    [aux_sym_from_layer_token2] = ACTIONS(841),
    [aux_sym_from_layer_token5] = ACTIONS(841),
    [aux_sym_from_layer_token7] = ACTIONS(841),
    [aux_sym_from_layer_token9] = ACTIONS(841),
    [aux_sym_from_layer_token11] = ACTIONS(841),
    [aux_sym_from_layer_token13] = ACTIONS(841),
    [aux_sym_from_layer_token15] = ACTIONS(841),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [267] = {
    [anon_sym_DOLLAR] = ACTIONS(845),
    [aux_sym_from_layer_token1] = ACTIONS(847),
    [aux_sym_from_layer_token2] = ACTIONS(845),
    [aux_sym_from_layer_token5] = ACTIONS(845),
    [aux_sym_from_layer_token7] = ACTIONS(845),
    [aux_sym_from_layer_token9] = ACTIONS(845),
    [aux_sym_from_layer_token11] = ACTIONS(845),
    [aux_sym_from_layer_token13] = ACTIONS(845),
    [aux_sym_from_layer_token15] = ACTIONS(845),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [268] = {
    [anon_sym_DOLLAR] = ACTIONS(849),
    [aux_sym_from_layer_token1] = ACTIONS(851),
    [aux_sym_from_layer_token2] = ACTIONS(849),
    [aux_sym_from_layer_token5] = ACTIONS(849),
    [aux_sym_from_layer_token7] = ACTIONS(849),
    [aux_sym_from_layer_token9] = ACTIONS(849),
    [aux_sym_from_layer_token11] = ACTIONS(849),
    [aux_sym_from_layer_token13] = ACTIONS(849),
    [aux_sym_from_layer_token15] = ACTIONS(849),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [269] = {
    [anon_sym_DOLLAR] = ACTIONS(853),
    [aux_sym_from_layer_token1] = ACTIONS(855),
    [aux_sym_from_layer_token2] = ACTIONS(853),
    [aux_sym_from_layer_token5] = ACTIONS(853),
    [aux_sym_from_layer_token7] = ACTIONS(853),
    [aux_sym_from_layer_token9] = ACTIONS(853),
    [aux_sym_from_layer_token11] = ACTIONS(853),
    [aux_sym_from_layer_token13] = ACTIONS(853),
    [aux_sym_from_layer_token15] = ACTIONS(853),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [270] = {
    [sym__port_spec] = STATE(505),
    [sym_mapped_port] = STATE(505),
    [sym__port] = STATE(431),
    [sym_port] = STATE(441),
    [sym_port_range] = STATE(441),
    [sym__port_part] = STATE(425),
    [anon_sym_DQUOTE] = ACTIONS(857),
    [anon_sym_DOLLAR] = ACTIONS(859),
    [aux_sym__port_part_token1] = ACTIONS(861),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [271] = {
    [anon_sym_DOLLAR] = ACTIONS(863),
    [aux_sym_from_layer_token1] = ACTIONS(865),
    [aux_sym_from_layer_token2] = ACTIONS(863),
    [aux_sym_from_layer_token5] = ACTIONS(863),
    [aux_sym_from_layer_token7] = ACTIONS(863),
    [aux_sym_from_layer_token9] = ACTIONS(863),
    [aux_sym_from_layer_token11] = ACTIONS(863),
    [aux_sym_from_layer_token13] = ACTIONS(863),
    [aux_sym_from_layer_token15] = ACTIONS(863),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [272] = {
    [anon_sym_DOLLAR] = ACTIONS(867),
    [aux_sym_from_layer_token1] = ACTIONS(869),
    [aux_sym_from_layer_token2] = ACTIONS(867),
    [aux_sym_from_layer_token5] = ACTIONS(867),
    [aux_sym_from_layer_token7] = ACTIONS(867),
    [aux_sym_from_layer_token9] = ACTIONS(867),
    [aux_sym_from_layer_token11] = ACTIONS(867),
    [aux_sym_from_layer_token13] = ACTIONS(867),
    [aux_sym_from_layer_token15] = ACTIONS(867),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [273] = {
    [anon_sym_DOLLAR] = ACTIONS(871),
    [aux_sym_from_layer_token1] = ACTIONS(873),
    [aux_sym_from_layer_token2] = ACTIONS(871),
    [aux_sym_from_layer_token5] = ACTIONS(871),
    [aux_sym_from_layer_token7] = ACTIONS(871),
    [aux_sym_from_layer_token9] = ACTIONS(871),
    [aux_sym_from_layer_token11] = ACTIONS(871),
    [aux_sym_from_layer_token13] = ACTIONS(871),
    [aux_sym_from_layer_token15] = ACTIONS(871),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [274] = {
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_from_layer_token1] = ACTIONS(193),
    [aux_sym_from_layer_token2] = ACTIONS(191),
    [aux_sym_from_layer_token5] = ACTIONS(191),
    [aux_sym_from_layer_token7] = ACTIONS(191),
    [aux_sym_from_layer_token9] = ACTIONS(191),
    [aux_sym_from_layer_token11] = ACTIONS(191),
    [aux_sym_from_layer_token13] = ACTIONS(191),
    [aux_sym_from_layer_token15] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [275] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_from_layer_token1] = ACTIONS(205),
    [aux_sym_from_layer_token2] = ACTIONS(203),
    [aux_sym_from_layer_token5] = ACTIONS(203),
    [aux_sym_from_layer_token7] = ACTIONS(203),
    [aux_sym_from_layer_token9] = ACTIONS(203),
    [aux_sym_from_layer_token11] = ACTIONS(203),
    [aux_sym_from_layer_token13] = ACTIONS(203),
    [aux_sym_from_layer_token15] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [276] = {
    [anon_sym_DOLLAR] = ACTIONS(875),
    [aux_sym_from_layer_token1] = ACTIONS(877),
    [aux_sym_from_layer_token2] = ACTIONS(875),
    [aux_sym_from_layer_token5] = ACTIONS(875),
    [aux_sym_from_layer_token7] = ACTIONS(875),
    [aux_sym_from_layer_token9] = ACTIONS(875),
    [aux_sym_from_layer_token11] = ACTIONS(875),
    [aux_sym_from_layer_token13] = ACTIONS(875),
    [aux_sym_from_layer_token15] = ACTIONS(875),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [277] = {
    [anon_sym_DOLLAR] = ACTIONS(879),
    [aux_sym_from_layer_token1] = ACTIONS(881),
    [aux_sym_from_layer_token2] = ACTIONS(879),
    [aux_sym_from_layer_token5] = ACTIONS(879),
    [aux_sym_from_layer_token7] = ACTIONS(879),
    [aux_sym_from_layer_token9] = ACTIONS(879),
    [aux_sym_from_layer_token11] = ACTIONS(879),
    [aux_sym_from_layer_token13] = ACTIONS(879),
    [aux_sym_from_layer_token15] = ACTIONS(879),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [278] = {
    [anon_sym_DQUOTE] = ACTIONS(883),
    [anon_sym_DOLLAR] = ACTIONS(883),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(883),
    [aux_sym__from_layer_token1] = ACTIONS(883),
    [aux_sym_path_token1] = ACTIONS(885),
    [aux_sym_path_token2] = ACTIONS(885),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(883),
  },
  [279] = {
    [sym__port] = STATE(127),
    [sym_port] = STATE(127),
    [sym_port_range] = STATE(127),
    [sym__port_part] = STATE(83),
    [anon_sym_DQUOTE] = ACTIONS(887),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [280] = {
    [sym__port] = STATE(467),
    [sym_port] = STATE(467),
    [sym_port_range] = STATE(467),
    [sym__port_part] = STATE(425),
    [anon_sym_DQUOTE] = ACTIONS(857),
    [anon_sym_DOLLAR] = ACTIONS(859),
    [aux_sym__port_part_token1] = ACTIONS(861),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [281] = {
    [anon_sym_DQUOTE] = ACTIONS(889),
    [anon_sym_DOLLAR] = ACTIONS(889),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(889),
    [aux_sym__from_layer_token1] = ACTIONS(889),
    [aux_sym_path_token1] = ACTIONS(891),
    [aux_sym_path_token2] = ACTIONS(891),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(889),
  },
  [282] = {
    [sym_path] = STATE(92),
    [aux_sym__paths] = STATE(52),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(893),
  },
  [283] = {
    [sym__port] = STATE(192),
    [sym_port] = STATE(192),
    [sym_port_range] = STATE(192),
    [sym__port_part] = STATE(83),
    [anon_sym_DQUOTE] = ACTIONS(887),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [284] = {
    [sym_path] = STATE(92),
    [aux_sym__paths] = STATE(49),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(895),
  },
  [285] = {
    [sym_user_name] = STATE(165),
    [sym_user_id] = STATE(166),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [anon_sym_DOLLAR] = ACTIONS(899),
    [aux_sym_user_name_token1] = ACTIONS(901),
    [aux_sym_user_id_token1] = ACTIONS(903),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [sym_chown] = STATE(519),
    [sym_user_name] = STATE(448),
    [sym_user_id] = STATE(447),
    [anon_sym_DOLLAR] = ACTIONS(905),
    [aux_sym_user_name_token1] = ACTIONS(907),
    [aux_sym_user_id_token1] = ACTIONS(909),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [287] = {
    [aux_sym_from_layer_repeat2] = STATE(287),
    [aux_sym_from_layer_token4] = ACTIONS(146),
    [aux_sym_from_layer_token5] = ACTIONS(911),
    [aux_sym_from_layer_token8] = ACTIONS(911),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [288] = {
    [aux_sym_from_layer_repeat2] = STATE(319),
    [aux_sym_from_layer_token4] = ACTIONS(914),
    [aux_sym_from_layer_token5] = ACTIONS(916),
    [aux_sym_from_layer_token8] = ACTIONS(916),
    [anon_sym_SLASH] = ACTIONS(918),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [289] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(920),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(920),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(920),
    [anon_sym_DASH_DASHretries] = ACTIONS(920),
    [aux_sym__hc_command_token1] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [290] = {
    [sym_template_expr_less_than_equals] = STATE(516),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(326),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [291] = {
    [sym_template_expr_less_than_equals] = STATE(502),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(326),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [292] = {
    [aux_sym_from_layer_repeat2] = STATE(312),
    [aux_sym_from_layer_token4] = ACTIONS(924),
    [aux_sym_from_layer_token5] = ACTIONS(926),
    [aux_sym_from_layer_token8] = ACTIONS(926),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(928),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [293] = {
    [aux_sym_from_layer_repeat1] = STATE(317),
    [anon_sym_DOLLAR] = ACTIONS(930),
    [aux_sym_from_layer_token3] = ACTIONS(930),
    [aux_sym_from_layer_token4] = ACTIONS(932),
    [anon_sym_SLASH] = ACTIONS(934),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [294] = {
    [aux_sym_from_layer_repeat2] = STATE(288),
    [aux_sym_from_layer_token4] = ACTIONS(932),
    [aux_sym_from_layer_token5] = ACTIONS(916),
    [aux_sym_from_layer_token8] = ACTIONS(916),
    [anon_sym_SLASH] = ACTIONS(934),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [295] = {
    [aux_sym_from_layer_repeat3] = STATE(336),
    [aux_sym_from_layer_token4] = ACTIONS(932),
    [aux_sym_from_layer_token9] = ACTIONS(936),
    [aux_sym_from_layer_token12] = ACTIONS(936),
    [anon_sym_SLASH] = ACTIONS(934),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [296] = {
    [aux_sym_from_layer_repeat4] = STATE(337),
    [aux_sym_from_layer_token4] = ACTIONS(932),
    [aux_sym_from_layer_token13] = ACTIONS(938),
    [aux_sym_from_layer_token16] = ACTIONS(938),
    [anon_sym_SLASH] = ACTIONS(934),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [297] = {
    [aux_sym_from_layer_repeat1] = STATE(297),
    [anon_sym_DOLLAR] = ACTIONS(940),
    [aux_sym_from_layer_token3] = ACTIONS(940),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [298] = {
    [aux_sym_from_layer_repeat4] = STATE(314),
    [aux_sym_from_layer_token4] = ACTIONS(924),
    [aux_sym_from_layer_token13] = ACTIONS(943),
    [aux_sym_from_layer_token16] = ACTIONS(943),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(928),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [299] = {
    [aux_sym_from_layer_repeat3] = STATE(299),
    [aux_sym_from_layer_token4] = ACTIONS(139),
    [aux_sym_from_layer_token9] = ACTIONS(945),
    [aux_sym_from_layer_token12] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [300] = {
    [aux_sym_from_layer_repeat1] = STATE(293),
    [anon_sym_DOLLAR] = ACTIONS(930),
    [aux_sym_from_layer_token3] = ACTIONS(930),
    [aux_sym_from_layer_token4] = ACTIONS(948),
    [anon_sym_SLASH] = ACTIONS(950),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [301] = {
    [aux_sym_from_layer_repeat4] = STATE(301),
    [aux_sym_from_layer_token4] = ACTIONS(153),
    [aux_sym_from_layer_token13] = ACTIONS(952),
    [aux_sym_from_layer_token16] = ACTIONS(952),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [302] = {
    [sym_template_expr_less_than_equals] = STATE(561),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(326),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [303] = {
    [sym_template_expr_less_than_equals] = STATE(555),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(326),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [304] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(304),
    [aux_sym_from_layer_token14] = ACTIONS(955),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(957),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(957),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(957),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [305] = {
    [sym_template_expr_less_than_equals] = STATE(549),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(326),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [306] = {
    [sym_template_expr_less_than_equals] = STATE(543),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(326),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [aux_sym_from_layer_repeat1] = STATE(328),
    [anon_sym_DOLLAR] = ACTIONS(960),
    [aux_sym_from_layer_token3] = ACTIONS(960),
    [aux_sym_from_layer_token4] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(964),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [308] = {
    [aux_sym_path_repeat2] = STATE(308),
    [anon_sym_DQUOTE] = ACTIONS(966),
    [anon_sym_DOLLAR] = ACTIONS(968),
    [aux_sym_path_token3] = ACTIONS(971),
    [aux_sym_path_token4] = ACTIONS(973),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [309] = {
    [sym_variable_default_value] = STATE(463),
    [sym_variable_this_or_null] = STATE(463),
    [anon_sym_RBRACE] = ACTIONS(976),
    [anon_sym_COLON_DASH] = ACTIONS(978),
    [anon_sym_COLON_PLUS] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [aux_sym_path_repeat2] = STATE(340),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [anon_sym_DOLLAR] = ACTIONS(984),
    [aux_sym_path_token3] = ACTIONS(986),
    [aux_sym_path_token4] = ACTIONS(988),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [311] = {
    [sym_label_value] = STATE(158),
    [anon_sym_DQUOTE] = ACTIONS(990),
    [aux_sym_label_value_token1] = ACTIONS(992),
    [aux_sym_label_value_token2] = ACTIONS(992),
    [anon_sym_SQUOTE] = ACTIONS(994),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [312] = {
    [aux_sym_from_layer_repeat2] = STATE(287),
    [aux_sym_from_layer_token4] = ACTIONS(996),
    [aux_sym_from_layer_token5] = ACTIONS(926),
    [aux_sym_from_layer_token8] = ACTIONS(926),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(998),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [313] = {
    [aux_sym_from_layer_repeat3] = STATE(299),
    [aux_sym_from_layer_token4] = ACTIONS(996),
    [aux_sym_from_layer_token9] = ACTIONS(1000),
    [aux_sym_from_layer_token12] = ACTIONS(1000),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(998),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [314] = {
    [aux_sym_from_layer_repeat4] = STATE(301),
    [aux_sym_from_layer_token4] = ACTIONS(996),
    [aux_sym_from_layer_token13] = ACTIONS(943),
    [aux_sym_from_layer_token16] = ACTIONS(943),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(998),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [315] = {
    [sym_hc_command] = STATE(177),
    [aux_sym__anything] = STATE(144),
    [sym__anything_or_json_array] = STATE(200),
    [aux_sym__anything_token1] = ACTIONS(532),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1002),
  },
  [316] = {
    [sym_port] = STATE(534),
    [sym_port_range] = STATE(534),
    [sym__port_part] = STATE(425),
    [anon_sym_DOLLAR] = ACTIONS(859),
    [aux_sym__port_part_token1] = ACTIONS(861),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [aux_sym_from_layer_repeat1] = STATE(317),
    [anon_sym_DOLLAR] = ACTIONS(1004),
    [aux_sym_from_layer_token3] = ACTIONS(1004),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(162),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [318] = {
    [sym_template_expr_less_than_equals] = STATE(475),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(326),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [319] = {
    [aux_sym_from_layer_repeat2] = STATE(319),
    [aux_sym_from_layer_token4] = ACTIONS(146),
    [aux_sym_from_layer_token5] = ACTIONS(1007),
    [aux_sym_from_layer_token8] = ACTIONS(1007),
    [anon_sym_SLASH] = ACTIONS(144),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [320] = {
    [aux_sym_from_layer_repeat3] = STATE(320),
    [aux_sym_from_layer_token4] = ACTIONS(139),
    [aux_sym_from_layer_token9] = ACTIONS(1010),
    [aux_sym_from_layer_token12] = ACTIONS(1010),
    [anon_sym_SLASH] = ACTIONS(137),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [321] = {
    [aux_sym_from_layer_repeat4] = STATE(321),
    [aux_sym_from_layer_token4] = ACTIONS(153),
    [aux_sym_from_layer_token13] = ACTIONS(1013),
    [aux_sym_from_layer_token16] = ACTIONS(1013),
    [anon_sym_SLASH] = ACTIONS(151),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [322] = {
    [sym_template_expr_less_than_equals] = STATE(479),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(326),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [323] = {
    [sym_variable_default_value] = STATE(575),
    [sym_variable_this_or_null] = STATE(575),
    [anon_sym_RBRACE] = ACTIONS(1016),
    [anon_sym_COLON_DASH] = ACTIONS(978),
    [anon_sym_COLON_PLUS] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [324] = {
    [aux_sym_from_layer_repeat3] = STATE(313),
    [aux_sym_from_layer_token4] = ACTIONS(924),
    [aux_sym_from_layer_token9] = ACTIONS(1000),
    [aux_sym_from_layer_token12] = ACTIONS(1000),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(928),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [325] = {
    [sym_path] = STATE(220),
    [anon_sym_DQUOTE] = ACTIONS(1018),
    [anon_sym_DOLLAR] = ACTIONS(1020),
    [aux_sym_path_token1] = ACTIONS(1022),
    [aux_sym_path_token2] = ACTIONS(1024),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [326] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(304),
    [aux_sym_from_layer_token14] = ACTIONS(1026),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(1028),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1028),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(1028),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [327] = {
    [sym_variable_default_value] = STATE(573),
    [sym_variable_this_or_null] = STATE(573),
    [anon_sym_RBRACE] = ACTIONS(1030),
    [anon_sym_COLON_DASH] = ACTIONS(978),
    [anon_sym_COLON_PLUS] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [328] = {
    [aux_sym_from_layer_repeat1] = STATE(297),
    [anon_sym_DOLLAR] = ACTIONS(960),
    [aux_sym_from_layer_token3] = ACTIONS(960),
    [aux_sym_from_layer_token4] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(928),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [329] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1032),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1032),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1032),
    [anon_sym_DASH_DASHretries] = ACTIONS(1032),
    [aux_sym__hc_command_token1] = ACTIONS(1032),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [330] = {
    [sym_variable_default_value] = STATE(571),
    [sym_variable_this_or_null] = STATE(571),
    [anon_sym_RBRACE] = ACTIONS(1034),
    [anon_sym_COLON_DASH] = ACTIONS(978),
    [anon_sym_COLON_PLUS] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [331] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1036),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1036),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1036),
    [anon_sym_DASH_DASHretries] = ACTIONS(1036),
    [aux_sym__hc_command_token1] = ACTIONS(1036),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [332] = {
    [sym_port] = STATE(482),
    [sym_port_range] = STATE(482),
    [sym__port_part] = STATE(425),
    [anon_sym_DOLLAR] = ACTIONS(859),
    [aux_sym__port_part_token1] = ACTIONS(861),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [333] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1038),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1038),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1038),
    [anon_sym_DASH_DASHretries] = ACTIONS(1038),
    [aux_sym__hc_command_token1] = ACTIONS(1038),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [334] = {
    [sym_variable_default_value] = STATE(569),
    [sym_variable_this_or_null] = STATE(569),
    [anon_sym_RBRACE] = ACTIONS(1040),
    [anon_sym_COLON_DASH] = ACTIONS(978),
    [anon_sym_COLON_PLUS] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [335] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1042),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1042),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1042),
    [anon_sym_DASH_DASHretries] = ACTIONS(1042),
    [aux_sym__hc_command_token1] = ACTIONS(1042),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [aux_sym_from_layer_repeat3] = STATE(320),
    [aux_sym_from_layer_token4] = ACTIONS(914),
    [aux_sym_from_layer_token9] = ACTIONS(936),
    [aux_sym_from_layer_token12] = ACTIONS(936),
    [anon_sym_SLASH] = ACTIONS(918),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [aux_sym_from_layer_repeat4] = STATE(321),
    [aux_sym_from_layer_token4] = ACTIONS(914),
    [aux_sym_from_layer_token13] = ACTIONS(938),
    [aux_sym_from_layer_token16] = ACTIONS(938),
    [anon_sym_SLASH] = ACTIONS(918),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [sym_port_protocol] = STATE(421),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(1044),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [339] = {
    [sym_template_expr_less_than_equals] = STATE(485),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(326),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [340] = {
    [aux_sym_path_repeat2] = STATE(308),
    [anon_sym_DQUOTE] = ACTIONS(1046),
    [anon_sym_DOLLAR] = ACTIONS(984),
    [aux_sym_path_token3] = ACTIONS(1048),
    [aux_sym_path_token4] = ACTIONS(988),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [341] = {
    [sym_port_protocol] = STATE(414),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(1044),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [342] = {
    [sym_template_expr_less_than_equals] = STATE(551),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(326),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [343] = {
    [sym_variable_default_value] = STATE(567),
    [sym_variable_this_or_null] = STATE(567),
    [anon_sym_RBRACE] = ACTIONS(1050),
    [anon_sym_COLON_DASH] = ACTIONS(978),
    [anon_sym_COLON_PLUS] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [344] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1052),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1052),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1052),
    [anon_sym_DASH_DASHretries] = ACTIONS(1052),
    [aux_sym__hc_command_token1] = ACTIONS(1052),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [345] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1054),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1054),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1054),
    [anon_sym_DASH_DASHretries] = ACTIONS(1054),
    [aux_sym__hc_command_token1] = ACTIONS(1054),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [346] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1056),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1056),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1056),
    [anon_sym_DASH_DASHretries] = ACTIONS(1056),
    [aux_sym__hc_command_token1] = ACTIONS(1056),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [sym_variable_default_value] = STATE(565),
    [sym_variable_this_or_null] = STATE(565),
    [anon_sym_RBRACE] = ACTIONS(1058),
    [anon_sym_COLON_DASH] = ACTIONS(978),
    [anon_sym_COLON_PLUS] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [sym_variable_default_value] = STATE(563),
    [sym_variable_this_or_null] = STATE(563),
    [anon_sym_RBRACE] = ACTIONS(1060),
    [anon_sym_COLON_DASH] = ACTIONS(978),
    [anon_sym_COLON_PLUS] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [349] = {
    [sym_template_expr_less_than_equals] = STATE(590),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(326),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [350] = {
    [sym_variable_default_value] = STATE(558),
    [sym_variable_this_or_null] = STATE(558),
    [anon_sym_RBRACE] = ACTIONS(1062),
    [anon_sym_COLON_DASH] = ACTIONS(978),
    [anon_sym_COLON_PLUS] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [351] = {
    [aux_sym_path_repeat2] = STATE(353),
    [anon_sym_DQUOTE] = ACTIONS(1064),
    [anon_sym_DOLLAR] = ACTIONS(984),
    [aux_sym_path_token3] = ACTIONS(1066),
    [aux_sym_path_token4] = ACTIONS(988),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [sym_variable_default_value] = STATE(539),
    [sym_variable_this_or_null] = STATE(539),
    [anon_sym_RBRACE] = ACTIONS(1068),
    [anon_sym_COLON_DASH] = ACTIONS(978),
    [anon_sym_COLON_PLUS] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [aux_sym_path_repeat2] = STATE(308),
    [anon_sym_DQUOTE] = ACTIONS(1070),
    [anon_sym_DOLLAR] = ACTIONS(984),
    [aux_sym_path_token3] = ACTIONS(1072),
    [aux_sym_path_token4] = ACTIONS(988),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [sym_variable_default_value] = STATE(546),
    [sym_variable_this_or_null] = STATE(546),
    [anon_sym_RBRACE] = ACTIONS(1074),
    [anon_sym_COLON_DASH] = ACTIONS(978),
    [anon_sym_COLON_PLUS] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [sym_template_expr_less_than_equals] = STATE(498),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(326),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(922),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [356] = {
    [sym_variable_default_value] = STATE(552),
    [sym_variable_this_or_null] = STATE(552),
    [anon_sym_RBRACE] = ACTIONS(1076),
    [anon_sym_COLON_DASH] = ACTIONS(978),
    [anon_sym_COLON_PLUS] = ACTIONS(980),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [357] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_path_token3] = ACTIONS(205),
    [aux_sym_path_token4] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [358] = {
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_from_layer_token3] = ACTIONS(191),
    [aux_sym_from_layer_token4] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(191),
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
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_from_layer_token3] = ACTIONS(203),
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [361] = {
    [sym_user_name] = STATE(428),
    [sym_user_id] = STATE(427),
    [aux_sym_user_name_token1] = ACTIONS(1078),
    [aux_sym_user_id_token1] = ACTIONS(1080),
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
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [364] = {
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_from_layer_token3] = ACTIONS(191),
    [aux_sym_from_layer_token4] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(193),
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
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [aux_sym_from_layer_token13] = ACTIONS(207),
    [aux_sym_from_layer_token16] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [367] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_DOLLAR] = ACTIONS(191),
    [aux_sym_path_token3] = ACTIONS(193),
    [aux_sym_path_token4] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_path_token3] = ACTIONS(201),
    [aux_sym_path_token4] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [369] = {
    [anon_sym_DQUOTE] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_SLASH] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [aux_sym_from_layer_token5] = ACTIONS(195),
    [aux_sym_from_layer_token8] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [371] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_from_layer_token3] = ACTIONS(203),
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [372] = {
    [aux_sym_from_layer_token4] = ACTIONS(189),
    [aux_sym_from_layer_token9] = ACTIONS(187),
    [aux_sym_from_layer_token12] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [373] = {
    [anon_sym_DOLLAR] = ACTIONS(162),
    [aux_sym_from_layer_token3] = ACTIONS(162),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(162),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [374] = {
    [anon_sym_DQUOTE] = ACTIONS(966),
    [anon_sym_DOLLAR] = ACTIONS(966),
    [aux_sym_path_token3] = ACTIONS(971),
    [aux_sym_path_token4] = ACTIONS(971),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [375] = {
    [aux_sym__anything] = STATE(144),
    [sym__anything_or_json_array] = STATE(181),
    [aux_sym__anything_token1] = ACTIONS(532),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1082),
  },
  [376] = {
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [aux_sym_from_layer_token13] = ACTIONS(207),
    [aux_sym_from_layer_token16] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [377] = {
    [aux_sym_from_layer_token4] = ACTIONS(189),
    [aux_sym_from_layer_token9] = ACTIONS(187),
    [aux_sym_from_layer_token12] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [378] = {
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [aux_sym_from_layer_token5] = ACTIONS(195),
    [aux_sym_from_layer_token8] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [379] = {
    [aux_sym__anything] = STATE(144),
    [sym__anything_or_json_array] = STATE(194),
    [aux_sym__anything_token1] = ACTIONS(532),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1084),
  },
  [380] = {
    [anon_sym_DOLLAR] = ACTIONS(162),
    [aux_sym_from_layer_token3] = ACTIONS(162),
    [aux_sym_from_layer_token4] = ACTIONS(164),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [381] = {
    [aux_sym__anything] = STATE(144),
    [sym__anything_or_json_array] = STATE(204),
    [aux_sym__anything_token1] = ACTIONS(532),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1086),
  },
  [382] = {
    [aux_sym_label_value_repeat2] = STATE(392),
    [anon_sym_SQUOTE] = ACTIONS(1088),
    [aux_sym_label_value_token4] = ACTIONS(1090),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [383] = {
    [sym_docker_variable] = STATE(300),
    [anon_sym_LBRACE] = ACTIONS(1092),
    [sym__docker_variable] = ACTIONS(1094),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [384] = {
    [aux_sym__labels] = STATE(136),
    [sym_label_pair] = STATE(136),
    [sym_label_key] = ACTIONS(1096),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [385] = {
    [sym_signal_name] = STATE(187),
    [sym_signal_num] = ACTIONS(1098),
    [aux_sym_signal_name_token1] = ACTIONS(1100),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [386] = {
    [sym_docker_variable] = STATE(351),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [sym__docker_variable] = ACTIONS(1104),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [387] = {
    [anon_sym_DOLLAR] = ACTIONS(1106),
    [aux_sym_path_token3] = ACTIONS(1108),
    [aux_sym_path_token4] = ACTIONS(1110),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [388] = {
    [anon_sym_DOLLAR] = ACTIONS(1112),
    [aux_sym_path_token3] = ACTIONS(1114),
    [aux_sym_path_token4] = ACTIONS(1116),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [sym_docker_variable] = STATE(44),
    [anon_sym_LBRACE] = ACTIONS(1118),
    [sym__docker_variable] = ACTIONS(1120),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [390] = {
    [aux_sym_label_value_repeat1] = STATE(390),
    [anon_sym_DQUOTE] = ACTIONS(1122),
    [aux_sym_label_value_token3] = ACTIONS(1124),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [391] = {
    [sym_docker_variable] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(1127),
    [sym__docker_variable] = ACTIONS(1129),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [392] = {
    [aux_sym_label_value_repeat2] = STATE(392),
    [anon_sym_SQUOTE] = ACTIONS(1131),
    [aux_sym_label_value_token4] = ACTIONS(1133),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [393] = {
    [sym_platform] = STATE(224),
    [anon_sym_DOLLAR] = ACTIONS(1136),
    [aux_sym_from_layer_token1] = ACTIONS(1138),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [394] = {
    [sym_docker_variable] = STATE(102),
    [anon_sym_LBRACE] = ACTIONS(1140),
    [sym__docker_variable] = ACTIONS(1142),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [395] = {
    [sym_docker_variable] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(1144),
    [sym__docker_variable] = ACTIONS(1146),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [396] = {
    [sym_docker_variable] = STATE(128),
    [anon_sym_LBRACE] = ACTIONS(1140),
    [sym__docker_variable] = ACTIONS(1142),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [397] = {
    [sym_docker_variable] = STATE(373),
    [anon_sym_LBRACE] = ACTIONS(1092),
    [sym__docker_variable] = ACTIONS(1094),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [398] = {
    [sym_docker_variable] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(1148),
    [sym__docker_variable] = ACTIONS(1150),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [399] = {
    [sym_docker_variable] = STATE(380),
    [anon_sym_LBRACE] = ACTIONS(1152),
    [sym__docker_variable] = ACTIONS(1154),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [400] = {
    [sym_docker_variable] = STATE(423),
    [anon_sym_LBRACE] = ACTIONS(1156),
    [sym__docker_variable] = ACTIONS(1158),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [401] = {
    [anon_sym_DOLLAR] = ACTIONS(1160),
    [aux_sym_port_protocol_token1] = ACTIONS(1162),
    [aux_sym_port_protocol_token2] = ACTIONS(1162),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [sym_docker_variable] = STATE(341),
    [anon_sym_LBRACE] = ACTIONS(1156),
    [sym__docker_variable] = ACTIONS(1158),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [403] = {
    [sym_docker_variable] = STATE(98),
    [anon_sym_LBRACE] = ACTIONS(1164),
    [sym__docker_variable] = ACTIONS(1166),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [404] = {
    [sym_docker_variable] = STATE(202),
    [anon_sym_LBRACE] = ACTIONS(1127),
    [sym__docker_variable] = ACTIONS(1129),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [405] = {
    [sym_docker_variable] = STATE(310),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [sym__docker_variable] = ACTIONS(1104),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [406] = {
    [sym_docker_variable] = STATE(488),
    [anon_sym_LBRACE] = ACTIONS(1168),
    [sym__docker_variable] = ACTIONS(1170),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [407] = {
    [sym_docker_variable] = STATE(307),
    [anon_sym_LBRACE] = ACTIONS(1152),
    [sym__docker_variable] = ACTIONS(1154),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [408] = {
    [aux_sym_label_value_repeat1] = STATE(390),
    [anon_sym_DQUOTE] = ACTIONS(1088),
    [aux_sym_label_value_token3] = ACTIONS(1172),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [409] = {
    [anon_sym_DOLLAR] = ACTIONS(1174),
    [aux_sym_port_protocol_token1] = ACTIONS(1176),
    [aux_sym_port_protocol_token2] = ACTIONS(1176),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [sym__port_part] = STATE(97),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [sym_docker_variable] = STATE(22),
    [anon_sym_LBRACE] = ACTIONS(1144),
    [sym__docker_variable] = ACTIONS(1146),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [412] = {
    [sym_docker_variable] = STATE(89),
    [anon_sym_LBRACE] = ACTIONS(1118),
    [sym__docker_variable] = ACTIONS(1120),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [413] = {
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [anon_sym_DQUOTE] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(363),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [sym_docker_variable] = STATE(272),
    [anon_sym_LBRACE] = ACTIONS(1178),
    [sym__docker_variable] = ACTIONS(1180),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [416] = {
    [sym_docker_variable] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(1148),
    [sym__docker_variable] = ACTIONS(1150),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [417] = {
    [sym_docker_variable] = STATE(82),
    [anon_sym_LBRACE] = ACTIONS(1127),
    [sym__docker_variable] = ACTIONS(1129),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [418] = {
    [sym__env_pairs] = STATE(188),
    [sym_env_pair] = STATE(139),
    [sym_env_key] = ACTIONS(1182),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [sym_docker_variable] = STATE(123),
    [anon_sym_LBRACE] = ACTIONS(1164),
    [sym__docker_variable] = ACTIONS(1166),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [420] = {
    [sym__port_part] = STATE(449),
    [anon_sym_DOLLAR] = ACTIONS(859),
    [aux_sym__port_part_token1] = ACTIONS(861),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [sym_docker_variable] = STATE(374),
    [anon_sym_LBRACE] = ACTIONS(1102),
    [sym__docker_variable] = ACTIONS(1104),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [423] = {
    [anon_sym_DQUOTE] = ACTIONS(357),
    [anon_sym_COLON] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(357),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [sym_docker_variable] = STATE(91),
    [anon_sym_LBRACE] = ACTIONS(1144),
    [sym__docker_variable] = ACTIONS(1146),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [425] = {
    [anon_sym_DQUOTE] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(1184),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [sym_docker_variable] = STATE(53),
    [anon_sym_LBRACE] = ACTIONS(1144),
    [sym__docker_variable] = ACTIONS(1146),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [427] = {
    [anon_sym_DQUOTE] = ACTIONS(1186),
    [anon_sym_COLON] = ACTIONS(1188),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [anon_sym_DQUOTE] = ACTIONS(1186),
    [anon_sym_COLON] = ACTIONS(1190),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [sym_hc_retries] = STATE(346),
    [aux_sym__port_part_token1] = ACTIONS(1192),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [sym_hc_start_period] = STATE(344),
    [aux_sym_hc_interval_token1] = ACTIONS(1194),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [anon_sym_DQUOTE] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(1196),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [sym_user_group] = STATE(193),
    [aux_sym_user_name_token1] = ACTIONS(1198),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [anon_sym_COLON] = ACTIONS(570),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(570),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [anon_sym_COLON] = ACTIONS(576),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(576),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [435] = {
    [sym_user_group_id] = STATE(462),
    [aux_sym_user_id_token1] = ACTIONS(1200),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [sym_user_group] = STATE(462),
    [aux_sym_user_name_token1] = ACTIONS(1202),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [sym_hc_timeout] = STATE(331),
    [aux_sym_hc_interval_token1] = ACTIONS(1204),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [sym_user_group_id] = STATE(193),
    [aux_sym_user_id_token1] = ACTIONS(1206),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [sym_hc_interval] = STATE(335),
    [aux_sym_hc_interval_token1] = ACTIONS(1208),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [sym_user_group_id] = STATE(517),
    [aux_sym_user_id_token1] = ACTIONS(1210),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [anon_sym_DQUOTE] = ACTIONS(1212),
    [anon_sym_COLON] = ACTIONS(1215),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [sym_user_group] = STATE(517),
    [aux_sym_user_name_token1] = ACTIONS(1217),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [sym_env_pair] = STATE(155),
    [sym_env_key] = ACTIONS(1182),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [aux_sym_label_value_repeat2] = STATE(382),
    [aux_sym_label_value_token4] = ACTIONS(1219),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [445] = {
    [anon_sym_DQUOTE] = ACTIONS(439),
    [anon_sym_COLON] = ACTIONS(439),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [aux_sym__anything] = STATE(122),
    [aux_sym__anything_token1] = ACTIONS(1221),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [anon_sym_COLON] = ACTIONS(1223),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1225),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [anon_sym_COLON] = ACTIONS(1227),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1225),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(395),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [aux_sym__anything] = STATE(141),
    [aux_sym__anything_token1] = ACTIONS(1229),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [anon_sym_DQUOTE] = ACTIONS(570),
    [anon_sym_COLON] = ACTIONS(570),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [aux_sym_label_value_repeat1] = STATE(408),
    [aux_sym_label_value_token3] = ACTIONS(1231),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [453] = {
    [anon_sym_DQUOTE] = ACTIONS(576),
    [anon_sym_COLON] = ACTIONS(576),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [aux_sym_from_token2] = ACTIONS(1233),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [aux_sym_label_pair_token1] = ACTIONS(1235),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [anon_sym_SLASH] = ACTIONS(934),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [457] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1237),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [458] = {
    [sym_template_expr_percent_signs] = ACTIONS(1239),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [459] = {
    [aux_sym_from_layer_token6] = ACTIONS(1241),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [aux_sym_from_token2] = ACTIONS(1243),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1245),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1247),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [anon_sym_RBRACE] = ACTIONS(1249),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [464] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1251),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [465] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1253),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [466] = {
    [anon_sym_DQUOTE] = ACTIONS(1046),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [anon_sym_DQUOTE] = ACTIONS(469),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(610),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(628),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1255),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [sym_template_expr_percent_signs] = ACTIONS(1257),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [472] = {
    [sym_template_expr_curly_braces] = ACTIONS(1259),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [473] = {
    [sym_template_expr_percent_signs] = ACTIONS(1261),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [474] = {
    [sym_template_expr_curly_braces] = ACTIONS(1263),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [475] = {
    [aux_sym_from_layer_token14] = ACTIONS(1265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [aux_sym_from_layer_token10] = ACTIONS(1267),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [477] = {
    [aux_sym_from_layer_token6] = ACTIONS(1269),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [478] = {
    [aux_sym_from_token2] = ACTIONS(1271),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [aux_sym_from_layer_token14] = ACTIONS(1273),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [480] = {
    [aux_sym_from_layer_token10] = ACTIONS(1275),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [sym_template_expr_curly_braces] = ACTIONS(1277),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [482] = {
    [anon_sym_DQUOTE] = ACTIONS(1279),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [483] = {
    [anon_sym_DQUOTE] = ACTIONS(610),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [aux_sym_from_layer_token14] = ACTIONS(1281),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [aux_sym_from_layer_token10] = ACTIONS(1283),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [aux_sym_from_layer_token6] = ACTIONS(1285),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1287),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [aux_sym_from_layer_token6] = ACTIONS(1289),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [anon_sym_SLASH] = ACTIONS(1291),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [sym_template_expr_percent_signs] = ACTIONS(1293),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [492] = {
    [aux_sym_from_layer_token6] = ACTIONS(1295),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [493] = {
    [anon_sym_SLASH] = ACTIONS(1297),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [aux_sym_from_layer_token10] = ACTIONS(1299),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [sym_template_expr_percent_signs] = ACTIONS(1301),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [496] = {
    [sym_template_expr_curly_braces] = ACTIONS(1303),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [497] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1305),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [aux_sym_from_layer_token14] = ACTIONS(1307),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [499] = {
    [aux_sym_from_layer_token10] = ACTIONS(1309),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [500] = {
    [aux_sym_from_layer_token6] = ACTIONS(1311),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [aux_sym_from_token2] = ACTIONS(1313),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [502] = {
    [aux_sym_from_layer_token14] = ACTIONS(1315),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [503] = {
    [aux_sym_from_layer_token6] = ACTIONS(1317),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [504] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1319),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [505] = {
    [anon_sym_DQUOTE] = ACTIONS(1321),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [506] = {
    [aux_sym_from_layer_token10] = ACTIONS(1323),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [507] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [508] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(199),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [509] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [aux_sym_from_token2] = ACTIONS(1325),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [511] = {
    [sym_env_value] = ACTIONS(1327),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [512] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1329),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [513] = {
    [sym_template_expr_percent_signs] = ACTIONS(1331),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [514] = {
    [sym_template_expr_curly_braces] = ACTIONS(1333),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [515] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1335),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [516] = {
    [aux_sym_from_layer_token14] = ACTIONS(1337),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [517] = {
    [anon_sym_DQUOTE] = ACTIONS(1339),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [518] = {
    [anon_sym_DQUOTE] = ACTIONS(1341),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [519] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1343),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [520] = {
    [anon_sym_RBRACE] = ACTIONS(1345),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [521] = {
    [sym_arg_default] = ACTIONS(1347),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [522] = {
    [sym__docker_variable] = ACTIONS(1349),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [523] = {
    [anon_sym_DQUOTE] = ACTIONS(1351),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [524] = {
    [anon_sym_RBRACE] = ACTIONS(1353),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [525] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1355),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [526] = {
    [aux_sym_signal_name_token2] = ACTIONS(1357),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [527] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1359),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [528] = {
    [aux_sym_from_token2] = ACTIONS(1361),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [529] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1363),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [530] = {
    [anon_sym_DQUOTE] = ACTIONS(1365),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [531] = {
    [aux_sym_from_token2] = ACTIONS(1367),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [532] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1369),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [533] = {
    [anon_sym_EQ] = ACTIONS(1371),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [534] = {
    [anon_sym_DQUOTE] = ACTIONS(1373),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [535] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1375),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [536] = {
    [aux_sym_from_layer_token6] = ACTIONS(1377),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [537] = {
    [anon_sym_DQUOTE] = ACTIONS(1070),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [538] = {
    [anon_sym_EQ] = ACTIONS(1379),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [539] = {
    [anon_sym_RBRACE] = ACTIONS(1381),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [540] = {
    [anon_sym_DQUOTE] = ACTIONS(1383),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [541] = {
    [aux_sym_from_layer_token6] = ACTIONS(1385),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [542] = {
    [aux_sym_from_layer_token10] = ACTIONS(1387),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [543] = {
    [aux_sym_from_layer_token14] = ACTIONS(1389),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [544] = {
    [anon_sym_EQ] = ACTIONS(1391),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [545] = {
    [aux_sym_from_layer_token10] = ACTIONS(1393),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [546] = {
    [anon_sym_RBRACE] = ACTIONS(1395),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [547] = {
    [aux_sym_from_layer_token6] = ACTIONS(1397),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [548] = {
    [aux_sym_from_layer_token10] = ACTIONS(1399),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [549] = {
    [aux_sym_from_layer_token14] = ACTIONS(1401),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [550] = {
    [anon_sym_EQ] = ACTIONS(1403),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [551] = {
    [aux_sym_from_layer_token14] = ACTIONS(1405),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [552] = {
    [anon_sym_RBRACE] = ACTIONS(1407),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [553] = {
    [aux_sym_from_layer_token6] = ACTIONS(1409),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [554] = {
    [aux_sym_from_layer_token10] = ACTIONS(1411),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [555] = {
    [aux_sym_from_layer_token14] = ACTIONS(1413),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [556] = {
    [sym_template_expr_percent_signs] = ACTIONS(1415),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [557] = {
    [anon_sym_SLASH] = ACTIONS(918),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [558] = {
    [anon_sym_RBRACE] = ACTIONS(1417),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [559] = {
    [aux_sym_from_layer_token6] = ACTIONS(1419),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [560] = {
    [aux_sym_from_layer_token10] = ACTIONS(1421),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [561] = {
    [aux_sym_from_layer_token14] = ACTIONS(1423),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [562] = {
    [sym_template_expr_curly_braces] = ACTIONS(1425),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [563] = {
    [anon_sym_RBRACE] = ACTIONS(1427),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [564] = {
    [sym_template_expr_curly_braces] = ACTIONS(1429),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [565] = {
    [anon_sym_RBRACE] = ACTIONS(1431),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [566] = {
    [aux_sym_from_token2] = ACTIONS(1433),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [567] = {
    [anon_sym_RBRACE] = ACTIONS(1435),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [568] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1437),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [569] = {
    [anon_sym_RBRACE] = ACTIONS(1439),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [570] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1441),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [571] = {
    [anon_sym_RBRACE] = ACTIONS(1443),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [572] = {
    [sym_template_expr_percent_signs] = ACTIONS(1445),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [573] = {
    [anon_sym_RBRACE] = ACTIONS(1447),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [574] = {
    [ts_builtin_sym_end] = ACTIONS(1449),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [575] = {
    [anon_sym_RBRACE] = ACTIONS(1451),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [576] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1453),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [577] = {
    [aux_sym_from_token2] = ACTIONS(1455),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [578] = {
    [sym__docker_variable] = ACTIONS(1457),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [579] = {
    [sym_template_expr_curly_braces] = ACTIONS(1459),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [580] = {
    [sym_template_expr_curly_braces] = ACTIONS(1461),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [581] = {
    [sym_template_expr_percent_signs] = ACTIONS(1463),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [582] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1465),
  },
  [583] = {
    [sym__docker_variable] = ACTIONS(1467),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [584] = {
    [sym_template_expr_curly_braces] = ACTIONS(1469),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [585] = {
    [sym_template_expr_percent_signs] = ACTIONS(1471),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [586] = {
    [sym_arg_name] = ACTIONS(1473),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [587] = {
    [sym__docker_variable] = ACTIONS(1475),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [588] = {
    [sym_template_expr_curly_braces] = ACTIONS(1477),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [589] = {
    [sym_template_expr_percent_signs] = ACTIONS(1479),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [590] = {
    [aux_sym_from_layer_token14] = ACTIONS(1481),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [591] = {
    [sym__docker_variable] = ACTIONS(1483),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [592] = {
    [sym_template_expr_curly_braces] = ACTIONS(1485),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [593] = {
    [sym_template_expr_percent_signs] = ACTIONS(1487),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [594] = {
    [aux_sym_from_layer_token10] = ACTIONS(1489),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [595] = {
    [sym__docker_variable] = ACTIONS(1491),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [596] = {
    [sym__docker_variable] = ACTIONS(1493),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [597] = {
    [sym__docker_variable] = ACTIONS(1495),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [598] = {
    [sym__docker_variable] = ACTIONS(1497),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [599] = {
    [sym__docker_variable] = ACTIONS(1499),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [600] = {
    [sym__docker_variable] = ACTIONS(1501),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [601] = {
    [sym__docker_variable] = ACTIONS(1503),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(282),
  [11] = {.count = 1, .reusable = true}, SHIFT(586),
  [13] = {.count = 1, .reusable = true}, SHIFT(381),
  [15] = {.count = 1, .reusable = true}, SHIFT(225),
  [17] = {.count = 1, .reusable = true}, SHIFT(379),
  [19] = {.count = 1, .reusable = true}, SHIFT(418),
  [21] = {.count = 1, .reusable = true}, SHIFT(226),
  [23] = {.count = 1, .reusable = true}, SHIFT(223),
  [25] = {.count = 1, .reusable = true}, SHIFT(222),
  [27] = {.count = 1, .reusable = true}, SHIFT(384),
  [29] = {.count = 1, .reusable = true}, SHIFT(450),
  [31] = {.count = 1, .reusable = true}, SHIFT(4),
  [33] = {.count = 1, .reusable = true}, SHIFT(375),
  [35] = {.count = 1, .reusable = true}, SHIFT(582),
  [37] = {.count = 1, .reusable = true}, SHIFT(385),
  [39] = {.count = 1, .reusable = true}, SHIFT(285),
  [41] = {.count = 1, .reusable = true}, SHIFT(284),
  [43] = {.count = 1, .reusable = true}, SHIFT(325),
  [45] = {.count = 1, .reusable = true}, SHIFT(214),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(282),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(586),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(381),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(225),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(379),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(418),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(226),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(223),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(222),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(384),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(450),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(4),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(375),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(582),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(385),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(285),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(284),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(325),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(214),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [110] = {.count = 1, .reusable = true}, SHIFT(270),
  [112] = {.count = 1, .reusable = true}, SHIFT(391),
  [114] = {.count = 1, .reusable = true}, SHIFT(39),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(270),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(391),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(39),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [131] = {.count = 1, .reusable = false}, SHIFT(69),
  [133] = {.count = 1, .reusable = true}, SHIFT(564),
  [135] = {.count = 1, .reusable = true}, SHIFT(271),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(458),
  [144] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2),
  [146] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 2),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(564),
  [151] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2),
  [153] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 2),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(342),
  [158] = {.count = 1, .reusable = true}, SHIFT(458),
  [160] = {.count = 1, .reusable = true}, SHIFT(342),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [164] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(411),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [173] = {.count = 1, .reusable = true}, SHIFT(411),
  [175] = {.count = 1, .reusable = false}, SHIFT(74),
  [177] = {.count = 1, .reusable = true}, SHIFT(266),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [183] = {.count = 1, .reusable = false}, SHIFT(90),
  [185] = {.count = 1, .reusable = true}, SHIFT(269),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [195] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [197] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [211] = {.count = 1, .reusable = false}, SHIFT(113),
  [213] = {.count = 1, .reusable = true}, SHIFT(585),
  [215] = {.count = 1, .reusable = true}, SHIFT(398),
  [217] = {.count = 1, .reusable = false}, SHIFT(129),
  [219] = {.count = 1, .reusable = false}, SHIFT(114),
  [221] = {.count = 1, .reusable = true}, SHIFT(584),
  [223] = {.count = 1, .reusable = true}, SHIFT(305),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(305),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(585),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(584),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(398),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [239] = {.count = 1, .reusable = true}, SHIFT(409),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(388),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(389),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(71),
  [254] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(389),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 2),
  [259] = {.count = 1, .reusable = true}, SHIFT(388),
  [261] = {.count = 1, .reusable = true}, SHIFT(389),
  [263] = {.count = 1, .reusable = false}, SHIFT(71),
  [265] = {.count = 1, .reusable = false}, SHIFT(389),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [269] = {.count = 1, .reusable = true}, SHIFT(412),
  [271] = {.count = 1, .reusable = false}, SHIFT(66),
  [273] = {.count = 1, .reusable = false}, SHIFT(412),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_path, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [281] = {.count = 1, .reusable = false}, SHIFT(150),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [287] = {.count = 1, .reusable = false}, SHIFT(152),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_add, 2),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [299] = {.count = 1, .reusable = false}, SHIFT(146),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [303] = {.count = 1, .reusable = false}, SHIFT(76),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [307] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(412),
  [312] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2),
  [314] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(412),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [321] = {.count = 1, .reusable = false}, SHIFT(164),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [327] = {.count = 1, .reusable = true}, SHIFT(273),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [333] = {.count = 1, .reusable = false}, SHIFT(170),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_path, 6),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_path, 6),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_path, 4),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_path, 4),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [351] = {.count = 1, .reusable = true}, SHIFT(263),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_path, 5),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_path, 5),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [361] = {.count = 1, .reusable = true}, SHIFT(410),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [371] = {.count = 1, .reusable = false}, SHIFT(171),
  [373] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [375] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [377] = {.count = 1, .reusable = false}, SHIFT(108),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [383] = {.count = 1, .reusable = false}, SHIFT(218),
  [385] = {.count = 1, .reusable = true}, SHIFT(592),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [389] = {.count = 1, .reusable = true}, SHIFT(279),
  [391] = {.count = 1, .reusable = true}, SHIFT(302),
  [393] = {.count = 1, .reusable = true}, SHIFT(593),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [397] = {.count = 1, .reusable = true}, SHIFT(419),
  [399] = {.count = 1, .reusable = false}, SHIFT(197),
  [401] = {.count = 1, .reusable = false}, SHIFT(419),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [407] = {.count = 1, .reusable = false}, SHIFT(206),
  [409] = {.count = 1, .reusable = true}, SHIFT(396),
  [411] = {.count = 1, .reusable = false}, SHIFT(219),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [417] = {.count = 1, .reusable = false}, SHIFT(212),
  [419] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(396),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(592),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(593),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(419),
  [431] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(419),
  [434] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [436] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(302),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [441] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [443] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(140),
  [446] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [448] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels, 2),
  [450] = {.count = 2, .reusable = false}, REDUCE(aux_sym__labels, 2), SHIFT_REPEAT(455),
  [453] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [457] = {.count = 1, .reusable = false}, SHIFT(140),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3, .production_id = 4),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [463] = {.count = 1, .reusable = true}, SHIFT(258),
  [465] = {.count = 1, .reusable = true}, SHIFT(231),
  [467] = {.count = 1, .reusable = false}, SHIFT(460),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [473] = {.count = 1, .reusable = true}, SHIFT(254),
  [475] = {.count = 1, .reusable = true}, SHIFT(235),
  [477] = {.count = 1, .reusable = false}, SHIFT(454),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [481] = {.count = 1, .reusable = true}, SHIFT(257),
  [483] = {.count = 1, .reusable = true}, SHIFT(234),
  [485] = {.count = 1, .reusable = false}, SHIFT(478),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [489] = {.count = 1, .reusable = true}, SHIFT(260),
  [491] = {.count = 1, .reusable = true}, SHIFT(232),
  [493] = {.count = 1, .reusable = false}, SHIFT(531),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [497] = {.count = 1, .reusable = false}, SHIFT(455),
  [499] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(174),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [504] = {.count = 1, .reusable = true}, SHIFT(230),
  [506] = {.count = 1, .reusable = false}, SHIFT(566),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 1),
  [510] = {.count = 1, .reusable = false}, SHIFT(443),
  [512] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [514] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 2),
  [518] = {.count = 1, .reusable = false}, SHIFT(156),
  [520] = {.count = 1, .reusable = true}, SHIFT(195),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 2),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 1),
  [526] = {.count = 1, .reusable = true}, SHIFT(511),
  [528] = {.count = 1, .reusable = false}, SHIFT(446),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [532] = {.count = 1, .reusable = false}, SHIFT(174),
  [534] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [536] = {.count = 2, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2), SHIFT_REPEAT(443),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [541] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [543] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(156),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [548] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [552] = {.count = 1, .reusable = true}, SHIFT(238),
  [554] = {.count = 1, .reusable = false}, SHIFT(577),
  [556] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [560] = {.count = 1, .reusable = false}, SHIFT(528),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3),
  [564] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [568] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [574] = {.count = 1, .reusable = false}, SHIFT(510),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 3),
  [580] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 3),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_user, 2),
  [584] = {.count = 1, .reusable = true}, SHIFT(432),
  [586] = {.count = 1, .reusable = true}, SHIFT(438),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [590] = {.count = 1, .reusable = true}, SHIFT(521),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [594] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [598] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [602] = {.count = 1, .reusable = false}, SHIFT(501),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3),
  [606] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 2),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_run, 2),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 2),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 2),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_env, 2),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 2),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_user, 6),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 2),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 2),
  [658] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 2),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [664] = {.count = 1, .reusable = true}, SHIFT(213),
  [666] = {.count = 1, .reusable = true}, SHIFT(550),
  [668] = {.count = 1, .reusable = true}, SHIFT(544),
  [670] = {.count = 1, .reusable = true}, SHIFT(538),
  [672] = {.count = 1, .reusable = true}, SHIFT(533),
  [674] = {.count = 1, .reusable = true}, SHIFT(532),
  [676] = {.count = 1, .reusable = true}, SHIFT(393),
  [678] = {.count = 1, .reusable = true}, SHIFT(395),
  [680] = {.count = 1, .reusable = false}, SHIFT(78),
  [682] = {.count = 1, .reusable = true}, SHIFT(562),
  [684] = {.count = 1, .reusable = true}, SHIFT(556),
  [686] = {.count = 1, .reusable = true}, SHIFT(355),
  [688] = {.count = 1, .reusable = true}, SHIFT(286),
  [690] = {.count = 1, .reusable = true}, SHIFT(242),
  [692] = {.count = 1, .reusable = true}, SHIFT(196),
  [694] = {.count = 1, .reusable = true}, SHIFT(283),
  [696] = {.count = 1, .reusable = true}, SHIFT(208),
  [698] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(383),
  [701] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(493),
  [704] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(481),
  [707] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(491),
  [710] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(318),
  [713] = {.count = 1, .reusable = true}, SHIFT(249),
  [715] = {.count = 1, .reusable = true}, SHIFT(424),
  [717] = {.count = 1, .reusable = false}, SHIFT(169),
  [719] = {.count = 1, .reusable = true}, SHIFT(472),
  [721] = {.count = 1, .reusable = true}, SHIFT(471),
  [723] = {.count = 1, .reusable = true}, SHIFT(290),
  [725] = {.count = 1, .reusable = true}, SHIFT(239),
  [727] = {.count = 1, .reusable = true}, SHIFT(253),
  [729] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(383),
  [732] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(493),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(481),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(491),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(318),
  [744] = {.count = 1, .reusable = true}, SHIFT(252),
  [746] = {.count = 1, .reusable = true}, SHIFT(256),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(550),
  [751] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(544),
  [754] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(538),
  [757] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(533),
  [760] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [762] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(383),
  [765] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(493),
  [768] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(481),
  [771] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(491),
  [774] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(318),
  [777] = {.count = 1, .reusable = true}, SHIFT(240),
  [779] = {.count = 1, .reusable = true}, SHIFT(394),
  [781] = {.count = 1, .reusable = false}, SHIFT(189),
  [783] = {.count = 1, .reusable = true}, SHIFT(579),
  [785] = {.count = 1, .reusable = true}, SHIFT(572),
  [787] = {.count = 1, .reusable = true}, SHIFT(349),
  [789] = {.count = 1, .reusable = true}, SHIFT(407),
  [791] = {.count = 1, .reusable = false}, SHIFT(515),
  [793] = {.count = 1, .reusable = true}, SHIFT(514),
  [795] = {.count = 1, .reusable = true}, SHIFT(513),
  [797] = {.count = 1, .reusable = true}, SHIFT(339),
  [799] = {.count = 1, .reusable = true}, SHIFT(416),
  [801] = {.count = 1, .reusable = false}, SHIFT(130),
  [803] = {.count = 1, .reusable = true}, SHIFT(496),
  [805] = {.count = 1, .reusable = true}, SHIFT(495),
  [807] = {.count = 1, .reusable = true}, SHIFT(322),
  [809] = {.count = 1, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2),
  [811] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(286),
  [814] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(242),
  [817] = {.count = 1, .reusable = false}, REDUCE(aux_sym_copy_repeat1, 2),
  [819] = {.count = 1, .reusable = true}, SHIFT(426),
  [821] = {.count = 1, .reusable = false}, SHIFT(147),
  [823] = {.count = 1, .reusable = true}, SHIFT(474),
  [825] = {.count = 1, .reusable = true}, SHIFT(473),
  [827] = {.count = 1, .reusable = true}, SHIFT(291),
  [829] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [831] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [835] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [839] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [843] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [851] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [855] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [857] = {.count = 1, .reusable = true}, SHIFT(332),
  [859] = {.count = 1, .reusable = true}, SHIFT(402),
  [861] = {.count = 1, .reusable = true}, SHIFT(338),
  [863] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [865] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [869] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [873] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [877] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [879] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [881] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [883] = {.count = 1, .reusable = true}, REDUCE(sym__chown, 3),
  [885] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 3),
  [887] = {.count = 1, .reusable = true}, SHIFT(316),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym__from_layer, 3),
  [891] = {.count = 1, .reusable = false}, REDUCE(sym__from_layer, 3),
  [893] = {.count = 1, .reusable = true}, SHIFT(216),
  [895] = {.count = 1, .reusable = true}, SHIFT(217),
  [897] = {.count = 1, .reusable = true}, SHIFT(361),
  [899] = {.count = 1, .reusable = true}, SHIFT(404),
  [901] = {.count = 1, .reusable = true}, SHIFT(160),
  [903] = {.count = 1, .reusable = true}, SHIFT(162),
  [905] = {.count = 1, .reusable = true}, SHIFT(406),
  [907] = {.count = 1, .reusable = true}, SHIFT(433),
  [909] = {.count = 1, .reusable = true}, SHIFT(434),
  [911] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(580),
  [914] = {.count = 1, .reusable = false}, SHIFT(490),
  [916] = {.count = 1, .reusable = true}, SHIFT(588),
  [918] = {.count = 1, .reusable = true}, SHIFT(268),
  [920] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [922] = {.count = 1, .reusable = true}, SHIFT(326),
  [924] = {.count = 1, .reusable = false}, SHIFT(525),
  [926] = {.count = 1, .reusable = true}, SHIFT(580),
  [928] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 3),
  [930] = {.count = 1, .reusable = true}, SHIFT(397),
  [932] = {.count = 1, .reusable = false}, SHIFT(557),
  [934] = {.count = 1, .reusable = true}, SHIFT(276),
  [936] = {.count = 1, .reusable = true}, SHIFT(589),
  [938] = {.count = 1, .reusable = true}, SHIFT(303),
  [940] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(399),
  [943] = {.count = 1, .reusable = true}, SHIFT(306),
  [945] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(581),
  [948] = {.count = 1, .reusable = false}, SHIFT(456),
  [950] = {.count = 1, .reusable = true}, SHIFT(267),
  [952] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(306),
  [955] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [957] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(304),
  [960] = {.count = 1, .reusable = true}, SHIFT(399),
  [962] = {.count = 1, .reusable = false}, SHIFT(461),
  [964] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 2),
  [966] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2),
  [968] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(422),
  [971] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2),
  [973] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(422),
  [976] = {.count = 1, .reusable = true}, SHIFT(79),
  [978] = {.count = 1, .reusable = true}, SHIFT(465),
  [980] = {.count = 1, .reusable = true}, SHIFT(464),
  [982] = {.count = 1, .reusable = true}, SHIFT(76),
  [984] = {.count = 1, .reusable = true}, SHIFT(422),
  [986] = {.count = 1, .reusable = false}, SHIFT(466),
  [988] = {.count = 1, .reusable = false}, SHIFT(422),
  [990] = {.count = 1, .reusable = false}, SHIFT(452),
  [992] = {.count = 1, .reusable = true}, SHIFT(159),
  [994] = {.count = 1, .reusable = true}, SHIFT(444),
  [996] = {.count = 1, .reusable = false}, SHIFT(576),
  [998] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 4),
  [1000] = {.count = 1, .reusable = true}, SHIFT(581),
  [1002] = {.count = 1, .reusable = true}, SHIFT(200),
  [1004] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(397),
  [1007] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(588),
  [1010] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(589),
  [1013] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(303),
  [1016] = {.count = 1, .reusable = true}, SHIFT(132),
  [1018] = {.count = 1, .reusable = true}, SHIFT(387),
  [1020] = {.count = 1, .reusable = true}, SHIFT(403),
  [1022] = {.count = 1, .reusable = false}, SHIFT(184),
  [1024] = {.count = 1, .reusable = false}, SHIFT(403),
  [1026] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [1028] = {.count = 1, .reusable = true}, SHIFT(304),
  [1030] = {.count = 1, .reusable = true}, SHIFT(359),
  [1032] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [1034] = {.count = 1, .reusable = true}, SHIFT(41),
  [1036] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [1038] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [1040] = {.count = 1, .reusable = true}, SHIFT(262),
  [1042] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [1044] = {.count = 1, .reusable = true}, SHIFT(401),
  [1046] = {.count = 1, .reusable = true}, SHIFT(81),
  [1048] = {.count = 1, .reusable = false}, SHIFT(518),
  [1050] = {.count = 1, .reusable = true}, SHIFT(362),
  [1052] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [1054] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [1056] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [1058] = {.count = 1, .reusable = true}, SHIFT(365),
  [1060] = {.count = 1, .reusable = true}, SHIFT(508),
  [1062] = {.count = 1, .reusable = true}, SHIFT(368),
  [1064] = {.count = 1, .reusable = true}, SHIFT(219),
  [1066] = {.count = 1, .reusable = false}, SHIFT(537),
  [1068] = {.count = 1, .reusable = true}, SHIFT(55),
  [1070] = {.count = 1, .reusable = true}, SHIFT(211),
  [1072] = {.count = 1, .reusable = false}, SHIFT(540),
  [1074] = {.count = 1, .reusable = true}, SHIFT(23),
  [1076] = {.count = 1, .reusable = true}, SHIFT(119),
  [1078] = {.count = 1, .reusable = true}, SHIFT(451),
  [1080] = {.count = 1, .reusable = true}, SHIFT(453),
  [1082] = {.count = 1, .reusable = true}, SHIFT(181),
  [1084] = {.count = 1, .reusable = true}, SHIFT(194),
  [1086] = {.count = 1, .reusable = true}, SHIFT(204),
  [1088] = {.count = 1, .reusable = true}, SHIFT(163),
  [1090] = {.count = 1, .reusable = true}, SHIFT(392),
  [1092] = {.count = 1, .reusable = true}, SHIFT(600),
  [1094] = {.count = 1, .reusable = true}, SHIFT(360),
  [1096] = {.count = 1, .reusable = true}, SHIFT(455),
  [1098] = {.count = 1, .reusable = true}, SHIFT(187),
  [1100] = {.count = 1, .reusable = true}, SHIFT(526),
  [1102] = {.count = 1, .reusable = true}, SHIFT(591),
  [1104] = {.count = 1, .reusable = true}, SHIFT(357),
  [1106] = {.count = 1, .reusable = true}, SHIFT(386),
  [1108] = {.count = 1, .reusable = false}, SHIFT(530),
  [1110] = {.count = 1, .reusable = false}, SHIFT(386),
  [1112] = {.count = 1, .reusable = true}, SHIFT(405),
  [1114] = {.count = 1, .reusable = false}, SHIFT(523),
  [1116] = {.count = 1, .reusable = false}, SHIFT(405),
  [1118] = {.count = 1, .reusable = true}, SHIFT(522),
  [1120] = {.count = 1, .reusable = true}, SHIFT(87),
  [1122] = {.count = 1, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2),
  [1124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2), SHIFT_REPEAT(390),
  [1127] = {.count = 1, .reusable = true}, SHIFT(578),
  [1129] = {.count = 1, .reusable = true}, SHIFT(46),
  [1131] = {.count = 1, .reusable = true}, REDUCE(aux_sym_label_value_repeat2, 2),
  [1133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_label_value_repeat2, 2), SHIFT_REPEAT(392),
  [1136] = {.count = 1, .reusable = true}, SHIFT(415),
  [1138] = {.count = 1, .reusable = true}, SHIFT(277),
  [1140] = {.count = 1, .reusable = true}, SHIFT(601),
  [1142] = {.count = 1, .reusable = true}, SHIFT(131),
  [1144] = {.count = 1, .reusable = true}, SHIFT(583),
  [1146] = {.count = 1, .reusable = true}, SHIFT(24),
  [1148] = {.count = 1, .reusable = true}, SHIFT(599),
  [1150] = {.count = 1, .reusable = true}, SHIFT(59),
  [1152] = {.count = 1, .reusable = true}, SHIFT(596),
  [1154] = {.count = 1, .reusable = true}, SHIFT(371),
  [1156] = {.count = 1, .reusable = true}, SHIFT(597),
  [1158] = {.count = 1, .reusable = true}, SHIFT(363),
  [1160] = {.count = 1, .reusable = true}, SHIFT(400),
  [1162] = {.count = 1, .reusable = true}, SHIFT(413),
  [1164] = {.count = 1, .reusable = true}, SHIFT(587),
  [1166] = {.count = 1, .reusable = true}, SHIFT(121),
  [1168] = {.count = 1, .reusable = true}, SHIFT(595),
  [1170] = {.count = 1, .reusable = true}, SHIFT(507),
  [1172] = {.count = 1, .reusable = true}, SHIFT(390),
  [1174] = {.count = 1, .reusable = true}, SHIFT(417),
  [1176] = {.count = 1, .reusable = true}, SHIFT(88),
  [1178] = {.count = 1, .reusable = true}, SHIFT(598),
  [1180] = {.count = 1, .reusable = true}, SHIFT(275),
  [1182] = {.count = 1, .reusable = true}, SHIFT(143),
  [1184] = {.count = 1, .reusable = true}, SHIFT(420),
  [1186] = {.count = 1, .reusable = true}, SHIFT(193),
  [1188] = {.count = 1, .reusable = true}, SHIFT(440),
  [1190] = {.count = 1, .reusable = true}, SHIFT(442),
  [1192] = {.count = 1, .reusable = true}, SHIFT(345),
  [1194] = {.count = 1, .reusable = true}, SHIFT(333),
  [1196] = {.count = 1, .reusable = true}, SHIFT(280),
  [1198] = {.count = 1, .reusable = true}, SHIFT(178),
  [1200] = {.count = 1, .reusable = true}, SHIFT(469),
  [1202] = {.count = 1, .reusable = true}, SHIFT(468),
  [1204] = {.count = 1, .reusable = true}, SHIFT(329),
  [1206] = {.count = 1, .reusable = true}, SHIFT(190),
  [1208] = {.count = 1, .reusable = true}, SHIFT(289),
  [1210] = {.count = 1, .reusable = true}, SHIFT(484),
  [1212] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(110),
  [1215] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1217] = {.count = 1, .reusable = true}, SHIFT(483),
  [1219] = {.count = 1, .reusable = true}, SHIFT(382),
  [1221] = {.count = 1, .reusable = true}, SHIFT(140),
  [1223] = {.count = 1, .reusable = true}, SHIFT(435),
  [1225] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 1),
  [1227] = {.count = 1, .reusable = true}, SHIFT(436),
  [1229] = {.count = 1, .reusable = true}, SHIFT(156),
  [1231] = {.count = 1, .reusable = true}, SHIFT(408),
  [1233] = {.count = 1, .reusable = true}, SHIFT(470),
  [1235] = {.count = 1, .reusable = true}, SHIFT(311),
  [1237] = {.count = 1, .reusable = true}, SHIFT(241),
  [1239] = {.count = 1, .reusable = true}, SHIFT(545),
  [1241] = {.count = 1, .reusable = true}, SHIFT(32),
  [1243] = {.count = 1, .reusable = true}, SHIFT(535),
  [1245] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 3),
  [1247] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 3),
  [1249] = {.count = 1, .reusable = true}, SHIFT(68),
  [1251] = {.count = 1, .reusable = true}, SHIFT(524),
  [1253] = {.count = 1, .reusable = true}, SHIFT(520),
  [1255] = {.count = 1, .reusable = true}, SHIFT(243),
  [1257] = {.count = 1, .reusable = true}, SHIFT(506),
  [1259] = {.count = 1, .reusable = true}, SHIFT(503),
  [1261] = {.count = 1, .reusable = true}, SHIFT(494),
  [1263] = {.count = 1, .reusable = true}, SHIFT(492),
  [1265] = {.count = 1, .reusable = true}, SHIFT(296),
  [1267] = {.count = 1, .reusable = true}, SHIFT(295),
  [1269] = {.count = 1, .reusable = true}, SHIFT(294),
  [1271] = {.count = 1, .reusable = true}, SHIFT(457),
  [1273] = {.count = 1, .reusable = true}, SHIFT(34),
  [1275] = {.count = 1, .reusable = true}, SHIFT(26),
  [1277] = {.count = 1, .reusable = true}, SHIFT(477),
  [1279] = {.count = 1, .reusable = true}, SHIFT(445),
  [1281] = {.count = 1, .reusable = true}, SHIFT(298),
  [1283] = {.count = 1, .reusable = true}, SHIFT(324),
  [1285] = {.count = 1, .reusable = true}, SHIFT(292),
  [1287] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 2),
  [1289] = {.count = 1, .reusable = true}, SHIFT(93),
  [1291] = {.count = 1, .reusable = true}, SHIFT(264),
  [1293] = {.count = 1, .reusable = true}, SHIFT(476),
  [1295] = {.count = 1, .reusable = true}, SHIFT(58),
  [1297] = {.count = 1, .reusable = true}, SHIFT(265),
  [1299] = {.count = 1, .reusable = true}, SHIFT(60),
  [1301] = {.count = 1, .reusable = true}, SHIFT(480),
  [1303] = {.count = 1, .reusable = true}, SHIFT(459),
  [1305] = {.count = 1, .reusable = true}, SHIFT(251),
  [1307] = {.count = 1, .reusable = true}, SHIFT(16),
  [1309] = {.count = 1, .reusable = true}, SHIFT(17),
  [1311] = {.count = 1, .reusable = true}, SHIFT(18),
  [1313] = {.count = 1, .reusable = true}, SHIFT(527),
  [1315] = {.count = 1, .reusable = true}, SHIFT(45),
  [1317] = {.count = 1, .reusable = true}, SHIFT(85),
  [1319] = {.count = 1, .reusable = true}, SHIFT(259),
  [1321] = {.count = 1, .reusable = true}, SHIFT(116),
  [1323] = {.count = 1, .reusable = true}, SHIFT(84),
  [1325] = {.count = 1, .reusable = true}, SHIFT(497),
  [1327] = {.count = 1, .reusable = true}, SHIFT(176),
  [1329] = {.count = 1, .reusable = true}, SHIFT(281),
  [1331] = {.count = 1, .reusable = true}, SHIFT(486),
  [1333] = {.count = 1, .reusable = true}, SHIFT(487),
  [1335] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 1),
  [1337] = {.count = 1, .reusable = true}, SHIFT(75),
  [1339] = {.count = 1, .reusable = true}, SHIFT(203),
  [1341] = {.count = 1, .reusable = true}, SHIFT(72),
  [1343] = {.count = 1, .reusable = true}, SHIFT(278),
  [1345] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1347] = {.count = 1, .reusable = true}, SHIFT(221),
  [1349] = {.count = 1, .reusable = true}, SHIFT(309),
  [1351] = {.count = 1, .reusable = true}, SHIFT(66),
  [1353] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1355] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 4),
  [1357] = {.count = 1, .reusable = true}, SHIFT(198),
  [1359] = {.count = 1, .reusable = true}, SHIFT(247),
  [1361] = {.count = 1, .reusable = true}, SHIFT(504),
  [1363] = {.count = 1, .reusable = true}, SHIFT(255),
  [1365] = {.count = 1, .reusable = true}, SHIFT(197),
  [1367] = {.count = 1, .reusable = true}, SHIFT(568),
  [1369] = {.count = 1, .reusable = true}, SHIFT(315),
  [1371] = {.count = 1, .reusable = true}, SHIFT(429),
  [1373] = {.count = 1, .reusable = true}, SHIFT(110),
  [1375] = {.count = 1, .reusable = true}, SHIFT(244),
  [1377] = {.count = 1, .reusable = true}, SHIFT(21),
  [1379] = {.count = 1, .reusable = true}, SHIFT(430),
  [1381] = {.count = 1, .reusable = true}, SHIFT(48),
  [1383] = {.count = 1, .reusable = true}, SHIFT(201),
  [1385] = {.count = 1, .reusable = true}, SHIFT(378),
  [1387] = {.count = 1, .reusable = true}, SHIFT(377),
  [1389] = {.count = 1, .reusable = true}, SHIFT(376),
  [1391] = {.count = 1, .reusable = true}, SHIFT(437),
  [1393] = {.count = 1, .reusable = true}, SHIFT(19),
  [1395] = {.count = 1, .reusable = true}, SHIFT(20),
  [1397] = {.count = 1, .reusable = true}, SHIFT(61),
  [1399] = {.count = 1, .reusable = true}, SHIFT(62),
  [1401] = {.count = 1, .reusable = true}, SHIFT(63),
  [1403] = {.count = 1, .reusable = true}, SHIFT(439),
  [1405] = {.count = 1, .reusable = true}, SHIFT(25),
  [1407] = {.count = 1, .reusable = true}, SHIFT(125),
  [1409] = {.count = 1, .reusable = true}, SHIFT(370),
  [1411] = {.count = 1, .reusable = true}, SHIFT(372),
  [1413] = {.count = 1, .reusable = true}, SHIFT(366),
  [1415] = {.count = 1, .reusable = true}, SHIFT(499),
  [1417] = {.count = 1, .reusable = true}, SHIFT(367),
  [1419] = {.count = 1, .reusable = true}, SHIFT(120),
  [1421] = {.count = 1, .reusable = true}, SHIFT(118),
  [1423] = {.count = 1, .reusable = true}, SHIFT(117),
  [1425] = {.count = 1, .reusable = true}, SHIFT(500),
  [1427] = {.count = 1, .reusable = true}, SHIFT(509),
  [1429] = {.count = 1, .reusable = true}, SHIFT(536),
  [1431] = {.count = 1, .reusable = true}, SHIFT(364),
  [1433] = {.count = 1, .reusable = true}, SHIFT(570),
  [1435] = {.count = 1, .reusable = true}, SHIFT(369),
  [1437] = {.count = 1, .reusable = true}, SHIFT(248),
  [1439] = {.count = 1, .reusable = true}, SHIFT(274),
  [1441] = {.count = 1, .reusable = true}, SHIFT(246),
  [1443] = {.count = 1, .reusable = true}, SHIFT(40),
  [1445] = {.count = 1, .reusable = true}, SHIFT(594),
  [1447] = {.count = 1, .reusable = true}, SHIFT(358),
  [1449] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1451] = {.count = 1, .reusable = true}, SHIFT(124),
  [1453] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 5),
  [1455] = {.count = 1, .reusable = true}, SHIFT(529),
  [1457] = {.count = 1, .reusable = true}, SHIFT(352),
  [1459] = {.count = 1, .reusable = true}, SHIFT(489),
  [1461] = {.count = 1, .reusable = true}, SHIFT(541),
  [1463] = {.count = 1, .reusable = true}, SHIFT(542),
  [1465] = {.count = 1, .reusable = true}, SHIFT(185),
  [1467] = {.count = 1, .reusable = true}, SHIFT(354),
  [1469] = {.count = 1, .reusable = true}, SHIFT(547),
  [1471] = {.count = 1, .reusable = true}, SHIFT(548),
  [1473] = {.count = 1, .reusable = true}, SHIFT(168),
  [1475] = {.count = 1, .reusable = true}, SHIFT(356),
  [1477] = {.count = 1, .reusable = true}, SHIFT(553),
  [1479] = {.count = 1, .reusable = true}, SHIFT(554),
  [1481] = {.count = 1, .reusable = true}, SHIFT(95),
  [1483] = {.count = 1, .reusable = true}, SHIFT(350),
  [1485] = {.count = 1, .reusable = true}, SHIFT(559),
  [1487] = {.count = 1, .reusable = true}, SHIFT(560),
  [1489] = {.count = 1, .reusable = true}, SHIFT(96),
  [1491] = {.count = 1, .reusable = true}, SHIFT(348),
  [1493] = {.count = 1, .reusable = true}, SHIFT(347),
  [1495] = {.count = 1, .reusable = true}, SHIFT(343),
  [1497] = {.count = 1, .reusable = true}, SHIFT(334),
  [1499] = {.count = 1, .reusable = true}, SHIFT(330),
  [1501] = {.count = 1, .reusable = true}, SHIFT(327),
  [1503] = {.count = 1, .reusable = true}, SHIFT(323),
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
