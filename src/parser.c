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
#define STATE_COUNT 608
#define SYMBOL_COUNT 180
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 14

enum {
  sym_escape_directive = 1,
  aux_sym_add_token1 = 2,
  aux_sym_arg_token1 = 3,
  anon_sym_EQ = 4,
  aux_sym_cmd_token1 = 5,
  aux_sym_copy_token1 = 6,
  aux_sym_entrypoint_token1 = 7,
  aux_sym_env_token1 = 8,
  aux_sym_expose_token1 = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_from_token1 = 11,
  anon_sym_DASH_DASHplatform_EQ = 12,
  anon_sym_COLON = 13,
  anon_sym_AT = 14,
  anon_sym_sha256_COLON = 15,
  aux_sym_from_token2 = 16,
  aux_sym_healthcheck_token1 = 17,
  aux_sym_label_token1 = 18,
  aux_sym_maintainer_token1 = 19,
  aux_sym_onbuild_token1 = 20,
  aux_sym_run_token1 = 21,
  aux_sym_shell_token1 = 22,
  aux_sym_stopsignal_token1 = 23,
  aux_sym_user_token1 = 24,
  anon_sym_DOLLAR = 25,
  aux_sym_volume_token1 = 26,
  aux_sym_workdir_token1 = 27,
  sym_arg_name = 28,
  sym_arg_default = 29,
  anon_sym_DASH_DASHchown_EQ = 30,
  aux_sym__from_layer_token1 = 31,
  aux_sym_from_layer_token1 = 32,
  aux_sym_from_layer_token2 = 33,
  aux_sym_from_layer_token3 = 34,
  aux_sym_from_layer_token4 = 35,
  aux_sym_from_layer_token5 = 36,
  aux_sym_from_layer_token6 = 37,
  aux_sym_from_layer_token7 = 38,
  aux_sym_from_layer_token8 = 39,
  aux_sym_from_layer_token9 = 40,
  aux_sym_from_layer_token10 = 41,
  aux_sym_from_layer_token11 = 42,
  aux_sym_from_layer_token12 = 43,
  aux_sym_from_layer_token13 = 44,
  aux_sym_from_layer_token14 = 45,
  aux_sym_from_layer_token15 = 46,
  aux_sym_from_layer_token16 = 47,
  anon_sym_EQ2 = 48,
  aux_sym_env_key_token1 = 49,
  aux_sym_env_value_token1 = 50,
  anon_sym_DASH = 51,
  aux_sym__port_part_token1 = 52,
  anon_sym_SLASH = 53,
  aux_sym_port_protocol_token1 = 54,
  aux_sym_port_protocol_token2 = 55,
  aux_sym__repository_start_token1 = 56,
  sym_hc_none = 57,
  anon_sym_DASH_DASHinterval = 58,
  aux_sym_hc_interval_token1 = 59,
  anon_sym_DASH_DASHtimeout = 60,
  anon_sym_DASH_DASHstart_DASHperiod = 61,
  anon_sym_DASH_DASHretries = 62,
  aux_sym__hc_command_token1 = 63,
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
  sym_json_array = 89,
  sym_escape = 90,
  sym_line_continuation = 91,
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
  sym__from_layer = 113,
  sym_from_layer = 114,
  sym_chown = 115,
  sym__env_pairs = 116,
  sym_env_pair_eq = 117,
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
  sym__labels = 148,
  sym_label_pair_eq = 149,
  sym_label_pair = 150,
  sym_label_key = 151,
  sym_label_value = 152,
  sym_signal_name = 153,
  sym_user_name = 154,
  sym_user_group = 155,
  sym_user_id = 156,
  sym_user_group_id = 157,
  sym_path = 158,
  aux_sym__paths = 159,
  aux_sym__anything = 160,
  sym_docker_variable = 161,
  sym_variable_default_value = 162,
  sym_variable_this_or_null = 163,
  sym_template_expr_less_than_equals = 164,
  sym__anything_or_json_array = 165,
  aux_sym_dockerfile_repeat1 = 166,
  aux_sym_copy_repeat1 = 167,
  aux_sym_expose_repeat1 = 168,
  aux_sym_healthcheck_repeat1 = 169,
  aux_sym_from_layer_repeat1 = 170,
  aux_sym_from_layer_repeat2 = 171,
  aux_sym_from_layer_repeat3 = 172,
  aux_sym_from_layer_repeat4 = 173,
  aux_sym__env_pairs_repeat1 = 174,
  aux_sym_repository_repeat1 = 175,
  aux_sym__labels_repeat1 = 176,
  aux_sym_path_repeat1 = 177,
  aux_sym_path_repeat2 = 178,
  aux_sym_template_expr_less_than_equals_repeat1 = 179,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_escape_directive] = "escape_directive",
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
  [aux_sym_env_key_token1] = "env_key_token1",
  [aux_sym_env_value_token1] = "env_value_token1",
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
  [sym_json_array] = "json_array",
  [sym_escape] = "escape",
  [sym_line_continuation] = "line_continuation",
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
  [sym__labels] = "_labels",
  [sym_label_pair_eq] = "label_pair",
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
  [aux_sym_copy_repeat1] = "copy_repeat1",
  [aux_sym_expose_repeat1] = "expose_repeat1",
  [aux_sym_healthcheck_repeat1] = "healthcheck_repeat1",
  [aux_sym_from_layer_repeat1] = "from_layer_repeat1",
  [aux_sym_from_layer_repeat2] = "from_layer_repeat2",
  [aux_sym_from_layer_repeat3] = "from_layer_repeat3",
  [aux_sym_from_layer_repeat4] = "from_layer_repeat4",
  [aux_sym__env_pairs_repeat1] = "_env_pairs_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym__labels_repeat1] = "_labels_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_path_repeat2] = "path_repeat2",
  [aux_sym_template_expr_less_than_equals_repeat1] = "template_expr_less_than_equals_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_directive] = {
    .visible = true,
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
  [aux_sym_env_key_token1] = {
    .visible = false,
    .named = false,
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
  [sym_json_array] = {
    .visible = true,
    .named = true,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
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
  [sym__labels] = {
    .visible = false,
    .named = true,
  },
  [sym_label_pair_eq] = {
    .visible = true,
    .named = true,
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
  [aux_sym__labels_repeat1] = {
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
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_directives, 0},
  [1] =
    {field_directives, 0, .inherited = true},
  [2] =
    {field_directives, 1, .inherited = true},
  [3] =
    {field_directives, 0, .inherited = true},
    {field_directives, 1, .inherited = true},
};

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [2] = sym_env_value,
  },
  [6] = {
    [2] = sym_label_value,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(817);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '%') ADVANCE(765);
      if (lookahead == '-') ADVANCE(795);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == '=') ADVANCE(779);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(313);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(307);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(309);
      if (lookahead == '[') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == '{') ADVANCE(1066);
      if (lookahead == '}') ADVANCE(1067);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1082);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      if (lookahead != 0) ADVANCE(967);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(817);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(896);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(930);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(932);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(951);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(902);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(887);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(888);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(933);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(962);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(912);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(955);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(939);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(941);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1082);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(967);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(817);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(896);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(930);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(932);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(951);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(902);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(887);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(888);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(933);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(962);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(912);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(955);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(939);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(941);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(816);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(967);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '-') ADVANCE(794);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '=') ADVANCE(264);
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
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '=') ADVANCE(779);
      if (lookahead == '@') ADVANCE(282);
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
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1083);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '@') ADVANCE(282);
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
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1083);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(984);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(987);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(992);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(985);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(982);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(983);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(989);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(994);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(986);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(993);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(990);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(991);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '`') ADVANCE(65);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(976);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1078);
      if (lookahead != 0) ADVANCE(981);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == '%') ADVANCE(765);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(534);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(485);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(470);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(471);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(495);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(538);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(522);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(524);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(345);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == '%') ADVANCE(765);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(534);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(485);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(470);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(471);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(495);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(538);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(522);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(524);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(345);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == '%') ADVANCE(765);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(479);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(534);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(485);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(470);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(471);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(495);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(538);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(522);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(524);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(346);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(614);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(616);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(635);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(586);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(572);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(617);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(596);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(639);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(623);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(625);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(614);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(616);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(635);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(586);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(572);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(617);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(596);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(639);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(623);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(625);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(614);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(616);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(635);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(586);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(571);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(572);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(617);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(596);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(639);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(623);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(625);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(671);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(715);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(736);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(687);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(672);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(673);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(718);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(697);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(740);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(724);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(726);
      if (lookahead == '{') ADVANCE(753);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(349);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(671);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(715);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(736);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(687);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(672);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(673);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(718);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(697);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(740);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(724);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(726);
      if (lookahead == '{') ADVANCE(753);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(349);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(671);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(715);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(736);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(687);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(672);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(673);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(718);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(697);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(740);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(724);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(726);
      if (lookahead == '{') ADVANCE(753);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(350);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(434);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(385);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(371);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(416);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(395);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(422);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(424);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(343);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '@') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(434);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(385);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(371);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(416);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(395);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(422);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(424);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(343);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(415);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(434);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(385);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(371);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(416);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(395);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(422);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(424);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(344);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '\n') ADVANCE(1081);
      if (lookahead == '#') ADVANCE(1108);
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
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1079);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(256);
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '%') ADVANCE(767);
      if (lookahead == '-') ADVANCE(794);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '=') ADVANCE(779);
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
      if (lookahead == '}') ADVANCE(757);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(1080);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(223);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(996);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(224);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(996);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(225);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(996);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1081);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1077);
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == ':') ADVANCE(279);
      if (lookahead == '=') ADVANCE(779);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1084);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1084);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1077);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == '%') ADVANCE(765);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(469);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1077);
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(570);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1077);
      if (lookahead == '#') ADVANCE(671);
      if (lookahead == '{') ADVANCE(753);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(670);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1077);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1077);
      if (lookahead == '#') ADVANCE(1074);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1074);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(1077);
      if (lookahead == '#') ADVANCE(1072);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1072);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1077);
      if (lookahead == '#') ADVANCE(1069);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1069);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1077);
      if (lookahead == '#') ADVANCE(1073);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1073);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1077);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"') ADVANCE(786);
      if (lookahead == '\'') ADVANCE(791);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(791);
      if (lookahead == '\\') ADVANCE(782);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == ' ') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(789);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(817);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '-') ADVANCE(819);
      if (lookahead == '[') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0) ADVANCE(967);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(817);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '[') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(967);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(814);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '#') ADVANCE(979);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(1002);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\r' ||
          lookahead == '`') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(979);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(1002);
      if (lookahead == '\\') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '\r' ||
          lookahead == '`') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(979);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(786);
      if (lookahead == '\'') ADVANCE(789);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(785);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0) ADVANCE(788);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(788);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == '[') ADVANCE(997);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '`') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0) ADVANCE(981);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '`') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0) ADVANCE(981);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(78);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '=') ADVANCE(264);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      if (lookahead == '}') ADVANCE(1067);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(812);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == '%') ADVANCE(765);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(551);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(671);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == '{') ADVANCE(753);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '/') ADVANCE(797);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(996);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(996);
      if (lookahead == '`') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '%') ADVANCE(765);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == '{') ADVANCE(753);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '%') ADVANCE(765);
      if (lookahead == '<') ADVANCE(127);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == '{') ADVANCE(753);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(1071);
      if (lookahead == '{') ADVANCE(1065);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(1071);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(340);
      END_STATE();
    case 70:
      if (lookahead == '\'') ADVANCE(788);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '+') ADVANCE(1070);
      if (lookahead == '-') ADVANCE(1068);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == '/') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(321);
      END_STATE();
    case 78:
      if (lookahead == '>') ADVANCE(774);
      END_STATE();
    case 79:
      if (lookahead == '>') ADVANCE(774);
      if (lookahead != 0) ADVANCE(1076);
      END_STATE();
    case 80:
      if (lookahead == '>') ADVANCE(774);
      if (lookahead != 0) ADVANCE(1075);
      END_STATE();
    case 81:
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(996);
      END_STATE();
    case 82:
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(996);
      END_STATE();
    case 83:
      if (lookahead == '`') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(805);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(802);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(806);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(804);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 122:
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 123:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 124:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead == '=') ADVANCE(259);
      END_STATE();
    case 125:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(996);
      END_STATE();
    case 126:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(996);
      END_STATE();
    case 127:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(773);
      END_STATE();
    case 128:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(778);
      END_STATE();
    case 129:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(776);
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
          lookahead == 's') ADVANCE(284);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 143:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(807);
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
          lookahead == 'e') ADVANCE(801);
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
          lookahead == 'g') ADVANCE(811);
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
          lookahead == 'p') ADVANCE(799);
      END_STATE();
    case 200:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(798);
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
          lookahead == '\r') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(786);
      if (lookahead == '\\') ADVANCE(793);
      END_STATE();
    case 223:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(223);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(1110);
      END_STATE();
    case 224:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(24);
      END_STATE();
    case 225:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead == ',') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1110);
      END_STATE();
    case 226:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 227:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 228:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 229:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 231:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 232:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(297);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 238:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 241:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 242:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 243:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 244:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(979);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(996);
      END_STATE();
    case 245:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(996);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
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
          lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      END_STATE();
    case 248:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 249:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == '\\') ADVANCE(249);
      END_STATE();
    case 250:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(788);
      END_STATE();
    case 251:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(52);
      END_STATE();
    case 252:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(996);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 253:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(996);
      END_STATE();
    case 254:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(791);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 255:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(996);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_escape_directive);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_escape_directive);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_escape_directive);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
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
          lookahead == ' ') ADVANCE(268);
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
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_from_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
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
          lookahead == ' ') ADVANCE(299);
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
          lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__from_layer_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '-') ADVANCE(336);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '2') ADVANCE(324);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '5') ADVANCE(325);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '6') ADVANCE(326);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(1098);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'h') ADVANCE(330);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(329);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'm') ADVANCE(328);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == 't') ADVANCE(331);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(341);
      if (lookahead == '%') ADVANCE(769);
      if (lookahead == '<') ADVANCE(129);
      if (lookahead == '{') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 340:
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
          lookahead != '}') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_from_layer_token2);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_from_layer_token3);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(343);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(344);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(345);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(346);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(347);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(348);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(349);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(350);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(351);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(352);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(353);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(354);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(356);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(357);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(360);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(361);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(363);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(364);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(365);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(366);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(367);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(368);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(380);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(381);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(442);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
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
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(451);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(452);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(453);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(454);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(456);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(457);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(460);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(461);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(463);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(464);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(465);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(466);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(467);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(468);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(480);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(481);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(542);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
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
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(533);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(552);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(553);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(554);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(555);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(557);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(558);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(559);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(561);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(562);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(564);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(565);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(566);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(567);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(568);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(569);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 574:
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(587);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 612:
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(582);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(643);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 626:
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(634);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 651:
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
          lookahead != '}') ADVANCE(651);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(652);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(653);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(654);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(655);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(657);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(658);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(659);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(661);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(662);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(663);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(664);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(665);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(666);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(667);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(668);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(669);
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
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(670);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(678);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(700);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(707);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(701);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(711);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(748);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(690);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(706);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(698);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(682);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(694);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(652);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(654);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(704);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(664);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(712);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(653);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(721);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(680);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(688);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(727);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(686);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(719);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(713);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(738);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(684);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(669);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(743);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(749);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(660);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(661);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(668);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(710);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(685);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(658);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(683);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(730);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(692);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(744);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(732);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(677);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(746);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(745);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(676);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(656);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(693);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(708);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(714);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(734);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(731);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(703);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(750);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(741);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(728);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(729);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(705);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(751);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(725);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(659);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(665);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(667);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(699);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(691);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(735);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(655);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(666);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(675);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(722);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(702);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(716);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(657);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(733);
      if (lookahead == '{') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(671);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(754);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(752);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(755);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(756);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(758);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(759);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(761);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(762);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      if (lookahead == '%') ADVANCE(764);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      if (lookahead == '%') ADVANCE(766);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      if (lookahead == '%') ADVANCE(768);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      if (lookahead == '%') ADVANCE(770);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      if (lookahead == '=') ADVANCE(772);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_from_layer_token14);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      if (lookahead == '=') ADVANCE(775);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      if (lookahead == '=') ADVANCE(777);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(780);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(781);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"') ADVANCE(791);
      if (lookahead == '\'') ADVANCE(791);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(791);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\n') ADVANCE(1091);
      if (lookahead == '"') ADVANCE(1089);
      if (lookahead == '\'') ADVANCE(787);
      if (lookahead == '\\') ADVANCE(1107);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1090);
      if (lookahead != 0) ADVANCE(787);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\n') ADVANCE(1091);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(792);
      if (lookahead == '\\') ADVANCE(1103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1089);
      if (lookahead != 0) ADVANCE(792);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(1086);
      if (lookahead == '\'') ADVANCE(1090);
      if (lookahead == '\\') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(785);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(786);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(1089);
      if (lookahead == '\'') ADVANCE(787);
      if (lookahead == '\\') ADVANCE(1107);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(788);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(789);
      if (lookahead == '\'') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(789);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(790);
      if (lookahead == '\'') ADVANCE(1089);
      if (lookahead == '\\') ADVANCE(1101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(791);
      if (lookahead == '\'') ADVANCE(791);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(791);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(792);
      if (lookahead == '\'') ADVANCE(792);
      if (lookahead == '\\') ADVANCE(1103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(792);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(786);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead != 0) ADVANCE(786);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(827);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretries);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__hc_command_token1);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(809);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (lookahead == '+') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(812);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ':') ADVANCE(814);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(816);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == '$') ADVANCE(969);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1099);
      if (lookahead != 0) ADVANCE(817);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '-') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '-') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '/') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '=') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '=') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'a') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'a') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'a') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'c') ADVANCE(836);
      if (lookahead == 'f') ADVANCE(855);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead == 'p') ADVANCE(840);
      if (lookahead == 'r') ADVANCE(831);
      if (lookahead == 's') ADVANCE(865);
      if (lookahead == 't') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'c') ADVANCE(836);
      if (lookahead == 'f') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'd') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'e') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'e') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'e') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'e') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'e') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'f') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'h') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'i') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'l') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'l') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'm') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'm') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'm') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'n') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'o') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'o') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'o') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'o') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'p') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'r') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'r') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'r') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'r') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'r') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'r') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 's') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 't') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 't') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 't') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 't') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 't') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 't') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'u') ADVANCE(862);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'v') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'w') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(897);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(903);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(898);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(959);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(965);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(950);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(967);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == '"') ADVANCE(1099);
      if (lookahead == '$') ADVANCE(975);
      if (lookahead != 0) ADVANCE(970);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '#') ADVANCE(970);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(973);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '#') ADVANCE(970);
      if (lookahead == '$') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(973);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '$') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(973);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_path_token4);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(978);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(977);
      if (lookahead != 0) ADVANCE(1004);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(978);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(977);
      if (lookahead != 0) ADVANCE(1004);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1004);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(978);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(977);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1003);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(980);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(980);
      if (lookahead == '\\') ADVANCE(245);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(979);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1025);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1013);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1020);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1006);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1017);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1046);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1013);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1048);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1064);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1050);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1009);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1035);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1044);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1018);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1005);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(998);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(999);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '#') ADVANCE(1004);
      if (lookahead == ',') ADVANCE(1001);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(998);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(999);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == ',') ADVANCE(1001);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1110);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(998);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(999);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(1004);
      if (lookahead == ',') ADVANCE(1001);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(64);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1000);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1001);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1000);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1001);
      if (lookahead == '"') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1004);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '`') ADVANCE(64);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1002);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1003);
      if (lookahead == ',') ADVANCE(1001);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == ']') ADVANCE(1110);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1004);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1002);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(1004);
      if (lookahead == ',') ADVANCE(1001);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == ']') ADVANCE(1110);
      if (lookahead == '`') ADVANCE(64);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1004);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1004);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1005);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(995);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1004);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1034);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1004);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1004);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1026);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'b') ADVANCE(1004);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'b') ADVANCE(1004);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1019);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'c') ADVANCE(1004);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1030);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'c') ADVANCE(1004);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1023);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'd') ADVANCE(1004);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'd') ADVANCE(1004);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1027);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1004);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1004);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1011);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1004);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1036);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1004);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1052);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1004);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'g') ADVANCE(1004);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'g') ADVANCE(1004);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'h') ADVANCE(1004);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1012);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'h') ADVANCE(1004);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1016);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1004);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1021);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1004);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1041);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1004);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1004);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1052);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1004);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1032);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1004);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'k') ADVANCE(1004);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'k') ADVANCE(1004);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1014);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1004);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1013);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1004);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1004);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1004);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1061);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1004);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'm') ADVANCE(1004);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'm') ADVANCE(1004);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1015);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1004);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1004);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1018);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1004);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1059);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1004);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1057);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1004);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1007);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1004);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1037);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1004);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1056);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1004);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1049);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1004);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1029);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1004);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1062);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1004);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1004);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1045);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1004);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1047);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'r') ADVANCE(1004);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'r') ADVANCE(1004);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'r') ADVANCE(1004);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1063);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 's') ADVANCE(1004);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1024);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 's') ADVANCE(1004);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1015);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't') ADVANCE(1004);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't') ADVANCE(1004);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1022);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't') ADVANCE(1004);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1008);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'u') ADVANCE(1004);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1028);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'u') ADVANCE(1004);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1038);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'y') ADVANCE(1004);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'y') ADVANCE(1004);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1051);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != 'V' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't' &&
          lookahead != 'v') ADVANCE(1004);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1054);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(996);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(754);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1069);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 1071:
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
          lookahead != '}') ADVANCE(1071);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1072);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1073);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1074);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1080);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1081);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__blank_line);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1080);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1082);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1080);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1083);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1084);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == '"') ADVANCE(785);
      if (lookahead == '\\') ADVANCE(1102);
      if (lookahead != 0) ADVANCE(1086);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == '"') ADVANCE(786);
      if (lookahead == '\'') ADVANCE(789);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == '"') ADVANCE(788);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == '"') ADVANCE(787);
      if (lookahead == '\'') ADVANCE(790);
      if (lookahead == '\\') ADVANCE(1104);
      if (lookahead != 0) ADVANCE(1089);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == '\'') ADVANCE(785);
      if (lookahead == '\\') ADVANCE(1106);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == '\'') ADVANCE(788);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == 'a') ADVANCE(1095);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == 'c') ADVANCE(1092);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == 'p') ADVANCE(1094);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == 's') ADVANCE(1093);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(778);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(776);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(785);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1099);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1088);
      if (lookahead == ' ') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(790);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1099);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1086);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1099);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1087);
      if (lookahead == ' ') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(792);
      if (lookahead == '\\') ADVANCE(784);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1090);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1089);
      if (lookahead == '\'') ADVANCE(792);
      if (lookahead == '\\') ADVANCE(1105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1090);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1091);
      if (lookahead == '"') ADVANCE(787);
      if (lookahead == '\'') ADVANCE(792);
      if (lookahead == '\\') ADVANCE(1104);
      if (lookahead != 0) ADVANCE(1089);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1091);
      if (lookahead == '\'') ADVANCE(787);
      if (lookahead == '\\') ADVANCE(1106);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(787);
      if (lookahead == '\\') ADVANCE(783);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1090);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1108);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == 'e') ADVANCE(1096);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead == '\n') ADVANCE(1085);
      if (lookahead == '=') ADVANCE(257);
      if (lookahead != 0) ADVANCE(1099);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_json_array);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 3},
  [3] = {.lex_state = 3, .external_lex_state = 3},
  [4] = {.lex_state = 3, .external_lex_state = 3},
  [5] = {.lex_state = 3, .external_lex_state = 3},
  [6] = {.lex_state = 20, .external_lex_state = 3},
  [7] = {.lex_state = 3, .external_lex_state = 3},
  [8] = {.lex_state = 3, .external_lex_state = 3},
  [9] = {.lex_state = 7, .external_lex_state = 3},
  [10] = {.lex_state = 10, .external_lex_state = 3},
  [11] = {.lex_state = 7, .external_lex_state = 3},
  [12] = {.lex_state = 13, .external_lex_state = 3},
  [13] = {.lex_state = 16, .external_lex_state = 3},
  [14] = {.lex_state = 13, .external_lex_state = 3},
  [15] = {.lex_state = 7, .external_lex_state = 3},
  [16] = {.lex_state = 10, .external_lex_state = 3},
  [17] = {.lex_state = 16, .external_lex_state = 3},
  [18] = {.lex_state = 13, .external_lex_state = 3},
  [19] = {.lex_state = 16, .external_lex_state = 3},
  [20] = {.lex_state = 10, .external_lex_state = 3},
  [21] = {.lex_state = 16, .external_lex_state = 3},
  [22] = {.lex_state = 16, .external_lex_state = 3},
  [23] = {.lex_state = 16, .external_lex_state = 3},
  [24] = {.lex_state = 16, .external_lex_state = 3},
  [25] = {.lex_state = 13, .external_lex_state = 3},
  [26] = {.lex_state = 7, .external_lex_state = 3},
  [27] = {.lex_state = 10, .external_lex_state = 3},
  [28] = {.lex_state = 8, .external_lex_state = 3},
  [29] = {.lex_state = 8, .external_lex_state = 3},
  [30] = {.lex_state = 11, .external_lex_state = 3},
  [31] = {.lex_state = 17, .external_lex_state = 3},
  [32] = {.lex_state = 17, .external_lex_state = 3},
  [33] = {.lex_state = 11, .external_lex_state = 3},
  [34] = {.lex_state = 14, .external_lex_state = 3},
  [35] = {.lex_state = 3, .external_lex_state = 3},
  [36] = {.lex_state = 17, .external_lex_state = 3},
  [37] = {.lex_state = 14, .external_lex_state = 3},
  [38] = {.lex_state = 14, .external_lex_state = 3},
  [39] = {.lex_state = 8, .external_lex_state = 3},
  [40] = {.lex_state = 11, .external_lex_state = 3},
  [41] = {.lex_state = 3, .external_lex_state = 3},
  [42] = {.lex_state = 3, .external_lex_state = 3},
  [43] = {.lex_state = 13, .external_lex_state = 3},
  [44] = {.lex_state = 2, .external_lex_state = 3},
  [45] = {.lex_state = 14, .external_lex_state = 3},
  [46] = {.lex_state = 2, .external_lex_state = 3},
  [47] = {.lex_state = 8, .external_lex_state = 3},
  [48] = {.lex_state = 11, .external_lex_state = 3},
  [49] = {.lex_state = 1, .external_lex_state = 3},
  [50] = {.lex_state = 13, .external_lex_state = 3},
  [51] = {.lex_state = 17, .external_lex_state = 3},
  [52] = {.lex_state = 17, .external_lex_state = 3},
  [53] = {.lex_state = 16, .external_lex_state = 3},
  [54] = {.lex_state = 17, .external_lex_state = 3},
  [55] = {.lex_state = 3, .external_lex_state = 3},
  [56] = {.lex_state = 1, .external_lex_state = 3},
  [57] = {.lex_state = 3, .external_lex_state = 3},
  [58] = {.lex_state = 2, .external_lex_state = 3},
  [59] = {.lex_state = 10, .external_lex_state = 3},
  [60] = {.lex_state = 16, .external_lex_state = 3},
  [61] = {.lex_state = 7, .external_lex_state = 3},
  [62] = {.lex_state = 10, .external_lex_state = 3},
  [63] = {.lex_state = 2, .external_lex_state = 3},
  [64] = {.lex_state = 7, .external_lex_state = 3},
  [65] = {.lex_state = 1, .external_lex_state = 3},
  [66] = {.lex_state = 2, .external_lex_state = 3},
  [67] = {.lex_state = 17, .external_lex_state = 3},
  [68] = {.lex_state = 3, .external_lex_state = 3},
  [69] = {.lex_state = 4, .external_lex_state = 3},
  [70] = {.lex_state = 1, .external_lex_state = 3},
  [71] = {.lex_state = 16, .external_lex_state = 3},
  [72] = {.lex_state = 13, .external_lex_state = 3},
  [73] = {.lex_state = 1, .external_lex_state = 3},
  [74] = {.lex_state = 1, .external_lex_state = 3},
  [75] = {.lex_state = 4, .external_lex_state = 3},
  [76] = {.lex_state = 4, .external_lex_state = 3},
  [77] = {.lex_state = 16, .external_lex_state = 3},
  [78] = {.lex_state = 10, .external_lex_state = 3},
  [79] = {.lex_state = 1, .external_lex_state = 3},
  [80] = {.lex_state = 1, .external_lex_state = 3},
  [81] = {.lex_state = 7, .external_lex_state = 3},
  [82] = {.lex_state = 3, .external_lex_state = 3},
  [83] = {.lex_state = 3, .external_lex_state = 3},
  [84] = {.lex_state = 3, .external_lex_state = 3},
  [85] = {.lex_state = 1, .external_lex_state = 3},
  [86] = {.lex_state = 4, .external_lex_state = 3},
  [87] = {.lex_state = 1, .external_lex_state = 3},
  [88] = {.lex_state = 13, .external_lex_state = 3},
  [89] = {.lex_state = 7, .external_lex_state = 3},
  [90] = {.lex_state = 10, .external_lex_state = 3},
  [91] = {.lex_state = 3, .external_lex_state = 3},
  [92] = {.lex_state = 1, .external_lex_state = 3},
  [93] = {.lex_state = 1, .external_lex_state = 3},
  [94] = {.lex_state = 1, .external_lex_state = 3},
  [95] = {.lex_state = 3, .external_lex_state = 3},
  [96] = {.lex_state = 9, .external_lex_state = 3},
  [97] = {.lex_state = 9, .external_lex_state = 3},
  [98] = {.lex_state = 2, .external_lex_state = 3},
  [99] = {.lex_state = 12, .external_lex_state = 3},
  [100] = {.lex_state = 2, .external_lex_state = 3},
  [101] = {.lex_state = 2, .external_lex_state = 3},
  [102] = {.lex_state = 18, .external_lex_state = 3},
  [103] = {.lex_state = 12, .external_lex_state = 3},
  [104] = {.lex_state = 18, .external_lex_state = 3},
  [105] = {.lex_state = 15, .external_lex_state = 3},
  [106] = {.lex_state = 9, .external_lex_state = 3},
  [107] = {.lex_state = 15, .external_lex_state = 3},
  [108] = {.lex_state = 3, .external_lex_state = 3},
  [109] = {.lex_state = 2, .external_lex_state = 3},
  [110] = {.lex_state = 3, .external_lex_state = 3},
  [111] = {.lex_state = 18, .external_lex_state = 3},
  [112] = {.lex_state = 15, .external_lex_state = 3},
  [113] = {.lex_state = 12, .external_lex_state = 3},
  [114] = {.lex_state = 18, .external_lex_state = 3},
  [115] = {.lex_state = 12, .external_lex_state = 3},
  [116] = {.lex_state = 5, .external_lex_state = 3},
  [117] = {.lex_state = 5, .external_lex_state = 3},
  [118] = {.lex_state = 15, .external_lex_state = 3},
  [119] = {.lex_state = 5, .external_lex_state = 3},
  [120] = {.lex_state = 5, .external_lex_state = 3},
  [121] = {.lex_state = 5, .external_lex_state = 3},
  [122] = {.lex_state = 5, .external_lex_state = 3},
  [123] = {.lex_state = 3, .external_lex_state = 3},
  [124] = {.lex_state = 3, .external_lex_state = 3},
  [125] = {.lex_state = 5, .external_lex_state = 3},
  [126] = {.lex_state = 2, .external_lex_state = 3},
  [127] = {.lex_state = 2, .external_lex_state = 3},
  [128] = {.lex_state = 2, .external_lex_state = 3},
  [129] = {.lex_state = 2, .external_lex_state = 3},
  [130] = {.lex_state = 18, .external_lex_state = 3},
  [131] = {.lex_state = 18, .external_lex_state = 3},
  [132] = {.lex_state = 18, .external_lex_state = 3},
  [133] = {.lex_state = 9, .external_lex_state = 3},
  [134] = {.lex_state = 5, .external_lex_state = 3},
  [135] = {.lex_state = 6, .external_lex_state = 3},
  [136] = {.lex_state = 4, .external_lex_state = 3},
  [137] = {.lex_state = 4, .external_lex_state = 3},
  [138] = {.lex_state = 4, .external_lex_state = 3},
  [139] = {.lex_state = 6, .external_lex_state = 3},
  [140] = {.lex_state = 4, .external_lex_state = 3},
  [141] = {.lex_state = 4, .external_lex_state = 3},
  [142] = {.lex_state = 4, .external_lex_state = 3},
  [143] = {.lex_state = 4, .external_lex_state = 3},
  [144] = {.lex_state = 4, .external_lex_state = 3},
  [145] = {.lex_state = 6, .external_lex_state = 3},
  [146] = {.lex_state = 4, .external_lex_state = 3},
  [147] = {.lex_state = 4, .external_lex_state = 3},
  [148] = {.lex_state = 4, .external_lex_state = 3},
  [149] = {.lex_state = 4, .external_lex_state = 3},
  [150] = {.lex_state = 4, .external_lex_state = 3},
  [151] = {.lex_state = 6, .external_lex_state = 3},
  [152] = {.lex_state = 4, .external_lex_state = 3},
  [153] = {.lex_state = 4, .external_lex_state = 3},
  [154] = {.lex_state = 6, .external_lex_state = 3},
  [155] = {.lex_state = 6, .external_lex_state = 3},
  [156] = {.lex_state = 4, .external_lex_state = 3},
  [157] = {.lex_state = 4, .external_lex_state = 3},
  [158] = {.lex_state = 4, .external_lex_state = 3},
  [159] = {.lex_state = 4, .external_lex_state = 3},
  [160] = {.lex_state = 6, .external_lex_state = 3},
  [161] = {.lex_state = 4, .external_lex_state = 3},
  [162] = {.lex_state = 4, .external_lex_state = 3},
  [163] = {.lex_state = 4, .external_lex_state = 3},
  [164] = {.lex_state = 4, .external_lex_state = 3},
  [165] = {.lex_state = 4, .external_lex_state = 3},
  [166] = {.lex_state = 4, .external_lex_state = 3},
  [167] = {.lex_state = 4, .external_lex_state = 3},
  [168] = {.lex_state = 3, .external_lex_state = 3},
  [169] = {.lex_state = 3, .external_lex_state = 3},
  [170] = {.lex_state = 4, .external_lex_state = 3},
  [171] = {.lex_state = 3, .external_lex_state = 3},
  [172] = {.lex_state = 4, .external_lex_state = 3},
  [173] = {.lex_state = 4, .external_lex_state = 3},
  [174] = {.lex_state = 4, .external_lex_state = 3},
  [175] = {.lex_state = 4, .external_lex_state = 3},
  [176] = {.lex_state = 4, .external_lex_state = 3},
  [177] = {.lex_state = 3, .external_lex_state = 3},
  [178] = {.lex_state = 6, .external_lex_state = 3},
  [179] = {.lex_state = 4, .external_lex_state = 3},
  [180] = {.lex_state = 3, .external_lex_state = 3},
  [181] = {.lex_state = 3, .external_lex_state = 3},
  [182] = {.lex_state = 3, .external_lex_state = 3},
  [183] = {.lex_state = 3, .external_lex_state = 3},
  [184] = {.lex_state = 3, .external_lex_state = 3},
  [185] = {.lex_state = 3, .external_lex_state = 3},
  [186] = {.lex_state = 3, .external_lex_state = 3},
  [187] = {.lex_state = 3, .external_lex_state = 3},
  [188] = {.lex_state = 3, .external_lex_state = 3},
  [189] = {.lex_state = 3, .external_lex_state = 3},
  [190] = {.lex_state = 3, .external_lex_state = 3},
  [191] = {.lex_state = 3, .external_lex_state = 3},
  [192] = {.lex_state = 3, .external_lex_state = 3},
  [193] = {.lex_state = 3, .external_lex_state = 3},
  [194] = {.lex_state = 3, .external_lex_state = 3},
  [195] = {.lex_state = 3, .external_lex_state = 3},
  [196] = {.lex_state = 3, .external_lex_state = 3},
  [197] = {.lex_state = 3, .external_lex_state = 3},
  [198] = {.lex_state = 3, .external_lex_state = 3},
  [199] = {.lex_state = 3, .external_lex_state = 3},
  [200] = {.lex_state = 3, .external_lex_state = 3},
  [201] = {.lex_state = 3, .external_lex_state = 3},
  [202] = {.lex_state = 3, .external_lex_state = 3},
  [203] = {.lex_state = 3, .external_lex_state = 3},
  [204] = {.lex_state = 3, .external_lex_state = 3},
  [205] = {.lex_state = 3, .external_lex_state = 3},
  [206] = {.lex_state = 3, .external_lex_state = 3},
  [207] = {.lex_state = 3, .external_lex_state = 3},
  [208] = {.lex_state = 3, .external_lex_state = 3},
  [209] = {.lex_state = 3, .external_lex_state = 3},
  [210] = {.lex_state = 3, .external_lex_state = 3},
  [211] = {.lex_state = 3, .external_lex_state = 3},
  [212] = {.lex_state = 3, .external_lex_state = 3},
  [213] = {.lex_state = 3, .external_lex_state = 3},
  [214] = {.lex_state = 3, .external_lex_state = 3},
  [215] = {.lex_state = 3, .external_lex_state = 3},
  [216] = {.lex_state = 3, .external_lex_state = 3},
  [217] = {.lex_state = 3, .external_lex_state = 3},
  [218] = {.lex_state = 3, .external_lex_state = 3},
  [219] = {.lex_state = 3, .external_lex_state = 3},
  [220] = {.lex_state = 3, .external_lex_state = 3},
  [221] = {.lex_state = 3, .external_lex_state = 3},
  [222] = {.lex_state = 3, .external_lex_state = 3},
  [223] = {.lex_state = 3, .external_lex_state = 3},
  [224] = {.lex_state = 3, .external_lex_state = 3},
  [225] = {.lex_state = 3, .external_lex_state = 3},
  [226] = {.lex_state = 3, .external_lex_state = 3},
  [227] = {.lex_state = 66, .external_lex_state = 3},
  [228] = {.lex_state = 55, .external_lex_state = 3},
  [229] = {.lex_state = 20, .external_lex_state = 3},
  [230] = {.lex_state = 55, .external_lex_state = 3},
  [231] = {.lex_state = 66, .external_lex_state = 3},
  [232] = {.lex_state = 42, .external_lex_state = 3},
  [233] = {.lex_state = 42, .external_lex_state = 3},
  [234] = {.lex_state = 67, .external_lex_state = 3},
  [235] = {.lex_state = 67, .external_lex_state = 3},
  [236] = {.lex_state = 67, .external_lex_state = 3},
  [237] = {.lex_state = 66, .external_lex_state = 3},
  [238] = {.lex_state = 67, .external_lex_state = 3},
  [239] = {.lex_state = 55, .external_lex_state = 3},
  [240] = {.lex_state = 67, .external_lex_state = 3},
  [241] = {.lex_state = 66, .external_lex_state = 3},
  [242] = {.lex_state = 66, .external_lex_state = 3},
  [243] = {.lex_state = 67, .external_lex_state = 3},
  [244] = {.lex_state = 66, .external_lex_state = 3},
  [245] = {.lex_state = 42, .external_lex_state = 3},
  [246] = {.lex_state = 66, .external_lex_state = 3},
  [247] = {.lex_state = 66, .external_lex_state = 3},
  [248] = {.lex_state = 66, .external_lex_state = 3},
  [249] = {.lex_state = 66, .external_lex_state = 3},
  [250] = {.lex_state = 66, .external_lex_state = 3},
  [251] = {.lex_state = 66, .external_lex_state = 3},
  [252] = {.lex_state = 66, .external_lex_state = 3},
  [253] = {.lex_state = 66, .external_lex_state = 3},
  [254] = {.lex_state = 66, .external_lex_state = 3},
  [255] = {.lex_state = 66, .external_lex_state = 3},
  [256] = {.lex_state = 66, .external_lex_state = 3},
  [257] = {.lex_state = 66, .external_lex_state = 3},
  [258] = {.lex_state = 66, .external_lex_state = 3},
  [259] = {.lex_state = 66, .external_lex_state = 3},
  [260] = {.lex_state = 66, .external_lex_state = 3},
  [261] = {.lex_state = 66, .external_lex_state = 3},
  [262] = {.lex_state = 66, .external_lex_state = 3},
  [263] = {.lex_state = 66, .external_lex_state = 3},
  [264] = {.lex_state = 66, .external_lex_state = 3},
  [265] = {.lex_state = 66, .external_lex_state = 3},
  [266] = {.lex_state = 66, .external_lex_state = 3},
  [267] = {.lex_state = 66, .external_lex_state = 3},
  [268] = {.lex_state = 66, .external_lex_state = 3},
  [269] = {.lex_state = 66, .external_lex_state = 3},
  [270] = {.lex_state = 66, .external_lex_state = 3},
  [271] = {.lex_state = 20, .external_lex_state = 3},
  [272] = {.lex_state = 66, .external_lex_state = 3},
  [273] = {.lex_state = 66, .external_lex_state = 3},
  [274] = {.lex_state = 66, .external_lex_state = 3},
  [275] = {.lex_state = 66, .external_lex_state = 3},
  [276] = {.lex_state = 66, .external_lex_state = 3},
  [277] = {.lex_state = 66, .external_lex_state = 3},
  [278] = {.lex_state = 66, .external_lex_state = 3},
  [279] = {.lex_state = 66, .external_lex_state = 3},
  [280] = {.lex_state = 66, .external_lex_state = 3},
  [281] = {.lex_state = 66, .external_lex_state = 3},
  [282] = {.lex_state = 66, .external_lex_state = 3},
  [283] = {.lex_state = 42, .external_lex_state = 3},
  [284] = {.lex_state = 43, .external_lex_state = 3},
  [285] = {.lex_state = 43, .external_lex_state = 3},
  [286] = {.lex_state = 20, .external_lex_state = 3},
  [287] = {.lex_state = 20, .external_lex_state = 3},
  [288] = {.lex_state = 42, .external_lex_state = 3},
  [289] = {.lex_state = 20, .external_lex_state = 3},
  [290] = {.lex_state = 44, .external_lex_state = 3},
  [291] = {.lex_state = 44, .external_lex_state = 3},
  [292] = {.lex_state = 63, .external_lex_state = 3},
  [293] = {.lex_state = 34, .external_lex_state = 3},
  [294] = {.lex_state = 34, .external_lex_state = 3},
  [295] = {.lex_state = 47, .external_lex_state = 3},
  [296] = {.lex_state = 20, .external_lex_state = 3},
  [297] = {.lex_state = 63, .external_lex_state = 3},
  [298] = {.lex_state = 62, .external_lex_state = 3},
  [299] = {.lex_state = 60, .external_lex_state = 3},
  [300] = {.lex_state = 61, .external_lex_state = 3},
  [301] = {.lex_state = 33, .external_lex_state = 3},
  [302] = {.lex_state = 47, .external_lex_state = 3},
  [303] = {.lex_state = 30, .external_lex_state = 3},
  [304] = {.lex_state = 31, .external_lex_state = 3},
  [305] = {.lex_state = 32, .external_lex_state = 3},
  [306] = {.lex_state = 30, .external_lex_state = 3},
  [307] = {.lex_state = 32, .external_lex_state = 3},
  [308] = {.lex_state = 34, .external_lex_state = 3},
  [309] = {.lex_state = 971, .external_lex_state = 3},
  [310] = {.lex_state = 34, .external_lex_state = 3},
  [311] = {.lex_state = 34, .external_lex_state = 3},
  [312] = {.lex_state = 55, .external_lex_state = 3},
  [313] = {.lex_state = 33, .external_lex_state = 3},
  [314] = {.lex_state = 971, .external_lex_state = 3},
  [315] = {.lex_state = 43, .external_lex_state = 3},
  [316] = {.lex_state = 34, .external_lex_state = 3},
  [317] = {.lex_state = 55, .external_lex_state = 3},
  [318] = {.lex_state = 55, .external_lex_state = 3},
  [319] = {.lex_state = 32, .external_lex_state = 3},
  [320] = {.lex_state = 30, .external_lex_state = 3},
  [321] = {.lex_state = 31, .external_lex_state = 3},
  [322] = {.lex_state = 55, .external_lex_state = 3},
  [323] = {.lex_state = 55, .external_lex_state = 3},
  [324] = {.lex_state = 55, .external_lex_state = 3},
  [325] = {.lex_state = 55, .external_lex_state = 3},
  [326] = {.lex_state = 55, .external_lex_state = 3},
  [327] = {.lex_state = 53, .external_lex_state = 3},
  [328] = {.lex_state = 20, .external_lex_state = 3},
  [329] = {.lex_state = 63, .external_lex_state = 3},
  [330] = {.lex_state = 34, .external_lex_state = 3},
  [331] = {.lex_state = 34, .external_lex_state = 3},
  [332] = {.lex_state = 62, .external_lex_state = 3},
  [333] = {.lex_state = 55, .external_lex_state = 3},
  [334] = {.lex_state = 60, .external_lex_state = 3},
  [335] = {.lex_state = 55, .external_lex_state = 3},
  [336] = {.lex_state = 61, .external_lex_state = 3},
  [337] = {.lex_state = 55, .external_lex_state = 3},
  [338] = {.lex_state = 20, .external_lex_state = 3},
  [339] = {.lex_state = 55, .external_lex_state = 3},
  [340] = {.lex_state = 55, .external_lex_state = 3},
  [341] = {.lex_state = 55, .external_lex_state = 3},
  [342] = {.lex_state = 55, .external_lex_state = 3},
  [343] = {.lex_state = 55, .external_lex_state = 3},
  [344] = {.lex_state = 62, .external_lex_state = 3},
  [345] = {.lex_state = 60, .external_lex_state = 3},
  [346] = {.lex_state = 61, .external_lex_state = 3},
  [347] = {.lex_state = 34, .external_lex_state = 3},
  [348] = {.lex_state = 55, .external_lex_state = 3},
  [349] = {.lex_state = 55, .external_lex_state = 3},
  [350] = {.lex_state = 971, .external_lex_state = 3},
  [351] = {.lex_state = 33, .external_lex_state = 3},
  [352] = {.lex_state = 34, .external_lex_state = 3},
  [353] = {.lex_state = 55, .external_lex_state = 3},
  [354] = {.lex_state = 971, .external_lex_state = 3},
  [355] = {.lex_state = 55, .external_lex_state = 3},
  [356] = {.lex_state = 971, .external_lex_state = 3},
  [357] = {.lex_state = 20, .external_lex_state = 3},
  [358] = {.lex_state = 34, .external_lex_state = 3},
  [359] = {.lex_state = 34, .external_lex_state = 3},
  [360] = {.lex_state = 34, .external_lex_state = 3},
  [361] = {.lex_state = 34, .external_lex_state = 3},
  [362] = {.lex_state = 31, .external_lex_state = 3},
  [363] = {.lex_state = 20, .external_lex_state = 3},
  [364] = {.lex_state = 971, .external_lex_state = 3},
  [365] = {.lex_state = 20, .external_lex_state = 3},
  [366] = {.lex_state = 31, .external_lex_state = 3},
  [367] = {.lex_state = 63, .external_lex_state = 3},
  [368] = {.lex_state = 53, .external_lex_state = 3},
  [369] = {.lex_state = 53, .external_lex_state = 3},
  [370] = {.lex_state = 30, .external_lex_state = 3},
  [371] = {.lex_state = 63, .external_lex_state = 3},
  [372] = {.lex_state = 63, .external_lex_state = 3},
  [373] = {.lex_state = 32, .external_lex_state = 3},
  [374] = {.lex_state = 20, .external_lex_state = 3},
  [375] = {.lex_state = 971, .external_lex_state = 3},
  [376] = {.lex_state = 53, .external_lex_state = 3},
  [377] = {.lex_state = 33, .external_lex_state = 3},
  [378] = {.lex_state = 63, .external_lex_state = 3},
  [379] = {.lex_state = 62, .external_lex_state = 3},
  [380] = {.lex_state = 60, .external_lex_state = 3},
  [381] = {.lex_state = 33, .external_lex_state = 3},
  [382] = {.lex_state = 61, .external_lex_state = 3},
  [383] = {.lex_state = 971, .external_lex_state = 3},
  [384] = {.lex_state = 971, .external_lex_state = 3},
  [385] = {.lex_state = 33, .external_lex_state = 3},
  [386] = {.lex_state = 33, .external_lex_state = 3},
  [387] = {.lex_state = 44, .external_lex_state = 3},
  [388] = {.lex_state = 68, .external_lex_state = 3},
  [389] = {.lex_state = 68, .external_lex_state = 3},
  [390] = {.lex_state = 68, .external_lex_state = 3},
  [391] = {.lex_state = 68, .external_lex_state = 3},
  [392] = {.lex_state = 68, .external_lex_state = 3},
  [393] = {.lex_state = 68, .external_lex_state = 3},
  [394] = {.lex_state = 68, .external_lex_state = 3},
  [395] = {.lex_state = 68, .external_lex_state = 3},
  [396] = {.lex_state = 47, .external_lex_state = 3},
  [397] = {.lex_state = 68, .external_lex_state = 3},
  [398] = {.lex_state = 68, .external_lex_state = 3},
  [399] = {.lex_state = 68, .external_lex_state = 3},
  [400] = {.lex_state = 68, .external_lex_state = 3},
  [401] = {.lex_state = 20, .external_lex_state = 3},
  [402] = {.lex_state = 68, .external_lex_state = 3},
  [403] = {.lex_state = 47, .external_lex_state = 3},
  [404] = {.lex_state = 68, .external_lex_state = 3},
  [405] = {.lex_state = 20, .external_lex_state = 3},
  [406] = {.lex_state = 20, .external_lex_state = 3},
  [407] = {.lex_state = 20, .external_lex_state = 3},
  [408] = {.lex_state = 972, .external_lex_state = 3},
  [409] = {.lex_state = 68, .external_lex_state = 3},
  [410] = {.lex_state = 68, .external_lex_state = 3},
  [411] = {.lex_state = 68, .external_lex_state = 3},
  [412] = {.lex_state = 68, .external_lex_state = 3},
  [413] = {.lex_state = 69, .external_lex_state = 3},
  [414] = {.lex_state = 68, .external_lex_state = 3},
  [415] = {.lex_state = 68, .external_lex_state = 3},
  [416] = {.lex_state = 972, .external_lex_state = 3},
  [417] = {.lex_state = 68, .external_lex_state = 3},
  [418] = {.lex_state = 20, .external_lex_state = 3},
  [419] = {.lex_state = 55, .external_lex_state = 3},
  [420] = {.lex_state = 68, .external_lex_state = 3},
  [421] = {.lex_state = 20, .external_lex_state = 3},
  [422] = {.lex_state = 20, .external_lex_state = 3},
  [423] = {.lex_state = 68, .external_lex_state = 3},
  [424] = {.lex_state = 68, .external_lex_state = 3},
  [425] = {.lex_state = 20, .external_lex_state = 3},
  [426] = {.lex_state = 68, .external_lex_state = 3},
  [427] = {.lex_state = 68, .external_lex_state = 3},
  [428] = {.lex_state = 20, .external_lex_state = 3},
  [429] = {.lex_state = 20, .external_lex_state = 3},
  [430] = {.lex_state = 20, .external_lex_state = 3},
  [431] = {.lex_state = 54, .external_lex_state = 3},
  [432] = {.lex_state = 29, .external_lex_state = 3},
  [433] = {.lex_state = 29, .external_lex_state = 3},
  [434] = {.lex_state = 29, .external_lex_state = 3},
  [435] = {.lex_state = 29, .external_lex_state = 3},
  [436] = {.lex_state = 51, .external_lex_state = 3},
  [437] = {.lex_state = 54, .external_lex_state = 3},
  [438] = {.lex_state = 20, .external_lex_state = 3},
  [439] = {.lex_state = 20, .external_lex_state = 3},
  [440] = {.lex_state = 58, .external_lex_state = 3},
  [441] = {.lex_state = 29, .external_lex_state = 3},
  [442] = {.lex_state = 29, .external_lex_state = 3},
  [443] = {.lex_state = 58, .external_lex_state = 3},
  [444] = {.lex_state = 58, .external_lex_state = 3},
  [445] = {.lex_state = 20, .external_lex_state = 3},
  [446] = {.lex_state = 51, .external_lex_state = 3},
  [447] = {.lex_state = 54, .external_lex_state = 3},
  [448] = {.lex_state = 20, .external_lex_state = 3},
  [449] = {.lex_state = 20, .external_lex_state = 3},
  [450] = {.lex_state = 44, .external_lex_state = 3},
  [451] = {.lex_state = 44, .external_lex_state = 3},
  [452] = {.lex_state = 20, .external_lex_state = 3},
  [453] = {.lex_state = 20, .external_lex_state = 3},
  [454] = {.lex_state = 44, .external_lex_state = 3},
  [455] = {.lex_state = 44, .external_lex_state = 3},
  [456] = {.lex_state = 44, .external_lex_state = 3},
  [457] = {.lex_state = 44, .external_lex_state = 3},
  [458] = {.lex_state = 20, .external_lex_state = 3},
  [459] = {.lex_state = 20, .external_lex_state = 3},
  [460] = {.lex_state = 35, .external_lex_state = 3},
  [461] = {.lex_state = 20, .external_lex_state = 3},
  [462] = {.lex_state = 20, .external_lex_state = 3},
  [463] = {.lex_state = 55, .external_lex_state = 3},
  [464] = {.lex_state = 29, .external_lex_state = 3},
  [465] = {.lex_state = 29, .external_lex_state = 3},
  [466] = {.lex_state = 20, .external_lex_state = 3},
  [467] = {.lex_state = 20, .external_lex_state = 3},
  [468] = {.lex_state = 29, .external_lex_state = 3},
  [469] = {.lex_state = 20, .external_lex_state = 3},
  [470] = {.lex_state = 29, .external_lex_state = 3},
  [471] = {.lex_state = 55, .external_lex_state = 3},
  [472] = {.lex_state = 55, .external_lex_state = 3},
  [473] = {.lex_state = 20, .external_lex_state = 3},
  [474] = {.lex_state = 20, .external_lex_state = 3},
  [475] = {.lex_state = 55, .external_lex_state = 3},
  [476] = {.lex_state = 20, .external_lex_state = 3},
  [477] = {.lex_state = 20, .external_lex_state = 3},
  [478] = {.lex_state = 55, .external_lex_state = 3},
  [479] = {.lex_state = 36, .external_lex_state = 3},
  [480] = {.lex_state = 20, .external_lex_state = 3},
  [481] = {.lex_state = 20, .external_lex_state = 3},
  [482] = {.lex_state = 29, .external_lex_state = 3},
  [483] = {.lex_state = 20, .external_lex_state = 3},
  [484] = {.lex_state = 20, .external_lex_state = 3},
  [485] = {.lex_state = 37, .external_lex_state = 3},
  [486] = {.lex_state = 35, .external_lex_state = 3},
  [487] = {.lex_state = 20, .external_lex_state = 3},
  [488] = {.lex_state = 29, .external_lex_state = 3},
  [489] = {.lex_state = 29, .external_lex_state = 3},
  [490] = {.lex_state = 55, .external_lex_state = 3},
  [491] = {.lex_state = 36, .external_lex_state = 3},
  [492] = {.lex_state = 55, .external_lex_state = 3},
  [493] = {.lex_state = 20, .external_lex_state = 3},
  [494] = {.lex_state = 20, .external_lex_state = 3},
  [495] = {.lex_state = 29, .external_lex_state = 3},
  [496] = {.lex_state = 37, .external_lex_state = 3},
  [497] = {.lex_state = 35, .external_lex_state = 3},
  [498] = {.lex_state = 37, .external_lex_state = 3},
  [499] = {.lex_state = 35, .external_lex_state = 3},
  [500] = {.lex_state = 55, .external_lex_state = 3},
  [501] = {.lex_state = 20, .external_lex_state = 3},
  [502] = {.lex_state = 20, .external_lex_state = 3},
  [503] = {.lex_state = 20, .external_lex_state = 3},
  [504] = {.lex_state = 55, .external_lex_state = 3},
  [505] = {.lex_state = 20, .external_lex_state = 3},
  [506] = {.lex_state = 20, .external_lex_state = 3},
  [507] = {.lex_state = 20, .external_lex_state = 3},
  [508] = {.lex_state = 20, .external_lex_state = 3},
  [509] = {.lex_state = 55, .external_lex_state = 3},
  [510] = {.lex_state = 20, .external_lex_state = 3},
  [511] = {.lex_state = 20, .external_lex_state = 3},
  [512] = {.lex_state = 29, .external_lex_state = 3},
  [513] = {.lex_state = 29, .external_lex_state = 3},
  [514] = {.lex_state = 29, .external_lex_state = 3},
  [515] = {.lex_state = 29, .external_lex_state = 3},
  [516] = {.lex_state = 20, .external_lex_state = 3},
  [517] = {.lex_state = 29, .external_lex_state = 3},
  [518] = {.lex_state = 29, .external_lex_state = 3},
  [519] = {.lex_state = 20, .external_lex_state = 3},
  [520] = {.lex_state = 20, .external_lex_state = 3},
  [521] = {.lex_state = 20, .external_lex_state = 3},
  [522] = {.lex_state = 29, .external_lex_state = 3},
  [523] = {.lex_state = 29, .external_lex_state = 3},
  [524] = {.lex_state = 20, .external_lex_state = 3},
  [525] = {.lex_state = 29, .external_lex_state = 3},
  [526] = {.lex_state = 20, .external_lex_state = 3},
  [527] = {.lex_state = 37, .external_lex_state = 3},
  [528] = {.lex_state = 35, .external_lex_state = 3},
  [529] = {.lex_state = 20, .external_lex_state = 3},
  [530] = {.lex_state = 37, .external_lex_state = 3},
  [531] = {.lex_state = 35, .external_lex_state = 3},
  [532] = {.lex_state = 56, .external_lex_state = 3},
  [533] = {.lex_state = 37, .external_lex_state = 3},
  [534] = {.lex_state = 20, .external_lex_state = 3},
  [535] = {.lex_state = 20, .external_lex_state = 3},
  [536] = {.lex_state = 20, .external_lex_state = 3},
  [537] = {.lex_state = 20, .external_lex_state = 3},
  [538] = {.lex_state = 29, .external_lex_state = 3},
  [539] = {.lex_state = 20, .external_lex_state = 3},
  [540] = {.lex_state = 20, .external_lex_state = 3},
  [541] = {.lex_state = 29, .external_lex_state = 3},
  [542] = {.lex_state = 37, .external_lex_state = 3},
  [543] = {.lex_state = 20, .external_lex_state = 3},
  [544] = {.lex_state = 35, .external_lex_state = 3},
  [545] = {.lex_state = 55, .external_lex_state = 3},
  [546] = {.lex_state = 20, .external_lex_state = 3},
  [547] = {.lex_state = 20, .external_lex_state = 3},
  [548] = {.lex_state = 20, .external_lex_state = 3},
  [549] = {.lex_state = 55, .external_lex_state = 3},
  [550] = {.lex_state = 29, .external_lex_state = 3},
  [551] = {.lex_state = 20, .external_lex_state = 3},
  [552] = {.lex_state = 55, .external_lex_state = 3},
  [553] = {.lex_state = 20, .external_lex_state = 3},
  [554] = {.lex_state = 20, .external_lex_state = 3},
  [555] = {.lex_state = 55, .external_lex_state = 3},
  [556] = {.lex_state = 20, .external_lex_state = 3},
  [557] = {.lex_state = 29, .external_lex_state = 3},
  [558] = {.lex_state = 55, .external_lex_state = 3},
  [559] = {.lex_state = 20, .external_lex_state = 3},
  [560] = {.lex_state = 20, .external_lex_state = 3},
  [561] = {.lex_state = 55, .external_lex_state = 3},
  [562] = {.lex_state = 38, .external_lex_state = 3},
  [563] = {.lex_state = 68, .external_lex_state = 3},
  [564] = {.lex_state = 55, .external_lex_state = 3},
  [565] = {.lex_state = 20, .external_lex_state = 3},
  [566] = {.lex_state = 20, .external_lex_state = 3},
  [567] = {.lex_state = 55, .external_lex_state = 3},
  [568] = {.lex_state = 20, .external_lex_state = 3},
  [569] = {.lex_state = 55, .external_lex_state = 3},
  [570] = {.lex_state = 57, .external_lex_state = 3},
  [571] = {.lex_state = 55, .external_lex_state = 3},
  [572] = {.lex_state = 55, .external_lex_state = 3},
  [573] = {.lex_state = 55, .external_lex_state = 3},
  [574] = {.lex_state = 29, .external_lex_state = 3},
  [575] = {.lex_state = 55, .external_lex_state = 3},
  [576] = {.lex_state = 29, .external_lex_state = 3},
  [577] = {.lex_state = 55, .external_lex_state = 3},
  [578] = {.lex_state = 55, .external_lex_state = 3},
  [579] = {.lex_state = 55, .external_lex_state = 3},
  [580] = {.lex_state = 55, .external_lex_state = 3},
  [581] = {.lex_state = 55, .external_lex_state = 3},
  [582] = {.lex_state = 55, .external_lex_state = 3},
  [583] = {.lex_state = 55, .external_lex_state = 3},
  [584] = {.lex_state = 68, .external_lex_state = 3},
  [585] = {.lex_state = 37, .external_lex_state = 3},
  [586] = {.lex_state = 35, .external_lex_state = 3},
  [587] = {.lex_state = 37, .external_lex_state = 3},
  [588] = {.lex_state = 35, .external_lex_state = 3},
  [589] = {.lex_state = 68, .external_lex_state = 3},
  [590] = {.lex_state = 35, .external_lex_state = 3},
  [591] = {.lex_state = 37, .external_lex_state = 3},
  [592] = {.lex_state = 20, .external_lex_state = 3},
  [593] = {.lex_state = 68, .external_lex_state = 3},
  [594] = {.lex_state = 35, .external_lex_state = 3},
  [595] = {.lex_state = 37, .external_lex_state = 3},
  [596] = {.lex_state = 20, .external_lex_state = 3},
  [597] = {.lex_state = 68, .external_lex_state = 3},
  [598] = {.lex_state = 35, .external_lex_state = 3},
  [599] = {.lex_state = 37, .external_lex_state = 3},
  [600] = {.lex_state = 20, .external_lex_state = 3},
  [601] = {.lex_state = 68, .external_lex_state = 3},
  [602] = {.lex_state = 68, .external_lex_state = 3},
  [603] = {.lex_state = 68, .external_lex_state = 3},
  [604] = {.lex_state = 68, .external_lex_state = 3},
  [605] = {.lex_state = 68, .external_lex_state = 3},
  [606] = {.lex_state = 68, .external_lex_state = 3},
  [607] = {.lex_state = 68, .external_lex_state = 3},
};

enum {
  ts_external_token_escape_directive = 0,
  ts_external_token_escape = 1,
  ts_external_token_line_continuation = 2,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_escape_directive] = sym_escape_directive,
  [ts_external_token_escape] = sym_escape,
  [ts_external_token_line_continuation] = sym_line_continuation,
};

static bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_escape] = true,
    [ts_external_token_line_continuation] = true,
  },
  [2] = {
    [ts_external_token_escape_directive] = true,
    [ts_external_token_line_continuation] = true,
  },
  [3] = {
    [ts_external_token_line_continuation] = true,
  },
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
    [sym_json_array] = ACTIONS(1),
    [sym_escape] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(5),
  },
  [1] = {
    [sym_dockerfile] = STATE(592),
    [sym__directive] = STATE(225),
    [sym_add] = STATE(225),
    [sym_arg] = STATE(225),
    [sym_cmd] = STATE(225),
    [sym_copy] = STATE(225),
    [sym_entrypoint] = STATE(225),
    [sym_env] = STATE(225),
    [sym_expose] = STATE(225),
    [sym_from] = STATE(225),
    [sym_healthcheck] = STATE(225),
    [sym_label] = STATE(225),
    [sym_maintainer] = STATE(225),
    [sym_onbuild] = STATE(225),
    [sym_run] = STATE(225),
    [sym_shell] = STATE(225),
    [sym_stopsignal] = STATE(225),
    [sym_user] = STATE(225),
    [sym_volume] = STATE(225),
    [sym_workdir] = STATE(225),
    [aux_sym_dockerfile_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_escape_directive] = ACTIONS(9),
    [aux_sym_add_token1] = ACTIONS(11),
    [aux_sym_arg_token1] = ACTIONS(13),
    [aux_sym_cmd_token1] = ACTIONS(15),
    [aux_sym_copy_token1] = ACTIONS(17),
    [aux_sym_entrypoint_token1] = ACTIONS(19),
    [aux_sym_env_token1] = ACTIONS(21),
    [aux_sym_expose_token1] = ACTIONS(23),
    [aux_sym_from_token1] = ACTIONS(25),
    [aux_sym_healthcheck_token1] = ACTIONS(27),
    [aux_sym_label_token1] = ACTIONS(29),
    [aux_sym_maintainer_token1] = ACTIONS(31),
    [aux_sym_onbuild_token1] = ACTIONS(33),
    [aux_sym_run_token1] = ACTIONS(35),
    [aux_sym_shell_token1] = ACTIONS(37),
    [aux_sym_stopsignal_token1] = ACTIONS(39),
    [aux_sym_user_token1] = ACTIONS(41),
    [aux_sym_volume_token1] = ACTIONS(43),
    [aux_sym_workdir_token1] = ACTIONS(45),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [2] = {
    [sym__directive] = STATE(225),
    [sym_add] = STATE(225),
    [sym_arg] = STATE(225),
    [sym_cmd] = STATE(225),
    [sym_copy] = STATE(225),
    [sym_entrypoint] = STATE(225),
    [sym_env] = STATE(225),
    [sym_expose] = STATE(225),
    [sym_from] = STATE(225),
    [sym_healthcheck] = STATE(225),
    [sym_label] = STATE(225),
    [sym_maintainer] = STATE(225),
    [sym_onbuild] = STATE(225),
    [sym_run] = STATE(225),
    [sym_shell] = STATE(225),
    [sym_stopsignal] = STATE(225),
    [sym_user] = STATE(225),
    [sym_volume] = STATE(225),
    [sym_workdir] = STATE(225),
    [aux_sym_dockerfile_repeat1] = STATE(2),
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
  [3] = {
    [sym__directive] = STATE(225),
    [sym_add] = STATE(225),
    [sym_arg] = STATE(225),
    [sym_cmd] = STATE(225),
    [sym_copy] = STATE(225),
    [sym_entrypoint] = STATE(225),
    [sym_env] = STATE(225),
    [sym_expose] = STATE(225),
    [sym_from] = STATE(225),
    [sym_healthcheck] = STATE(225),
    [sym_label] = STATE(225),
    [sym_maintainer] = STATE(225),
    [sym_onbuild] = STATE(225),
    [sym_run] = STATE(225),
    [sym_shell] = STATE(225),
    [sym_stopsignal] = STATE(225),
    [sym_user] = STATE(225),
    [sym_volume] = STATE(225),
    [sym_workdir] = STATE(225),
    [aux_sym_dockerfile_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_add_token1] = ACTIONS(11),
    [aux_sym_arg_token1] = ACTIONS(13),
    [aux_sym_cmd_token1] = ACTIONS(15),
    [aux_sym_copy_token1] = ACTIONS(17),
    [aux_sym_entrypoint_token1] = ACTIONS(19),
    [aux_sym_env_token1] = ACTIONS(21),
    [aux_sym_expose_token1] = ACTIONS(23),
    [aux_sym_from_token1] = ACTIONS(25),
    [aux_sym_healthcheck_token1] = ACTIONS(27),
    [aux_sym_label_token1] = ACTIONS(29),
    [aux_sym_maintainer_token1] = ACTIONS(31),
    [aux_sym_onbuild_token1] = ACTIONS(33),
    [aux_sym_run_token1] = ACTIONS(35),
    [aux_sym_shell_token1] = ACTIONS(37),
    [aux_sym_stopsignal_token1] = ACTIONS(39),
    [aux_sym_user_token1] = ACTIONS(41),
    [aux_sym_volume_token1] = ACTIONS(43),
    [aux_sym_workdir_token1] = ACTIONS(45),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(110),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [4] = {
    [sym__directive] = STATE(225),
    [sym_add] = STATE(225),
    [sym_arg] = STATE(225),
    [sym_cmd] = STATE(225),
    [sym_copy] = STATE(225),
    [sym_entrypoint] = STATE(225),
    [sym_env] = STATE(225),
    [sym_expose] = STATE(225),
    [sym_from] = STATE(225),
    [sym_healthcheck] = STATE(225),
    [sym_label] = STATE(225),
    [sym_maintainer] = STATE(225),
    [sym_onbuild] = STATE(225),
    [sym_run] = STATE(225),
    [sym_shell] = STATE(225),
    [sym_stopsignal] = STATE(225),
    [sym_user] = STATE(225),
    [sym_volume] = STATE(225),
    [sym_workdir] = STATE(225),
    [aux_sym_dockerfile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(112),
    [aux_sym_add_token1] = ACTIONS(11),
    [aux_sym_arg_token1] = ACTIONS(13),
    [aux_sym_cmd_token1] = ACTIONS(15),
    [aux_sym_copy_token1] = ACTIONS(17),
    [aux_sym_entrypoint_token1] = ACTIONS(19),
    [aux_sym_env_token1] = ACTIONS(21),
    [aux_sym_expose_token1] = ACTIONS(23),
    [aux_sym_from_token1] = ACTIONS(25),
    [aux_sym_healthcheck_token1] = ACTIONS(27),
    [aux_sym_label_token1] = ACTIONS(29),
    [aux_sym_maintainer_token1] = ACTIONS(31),
    [aux_sym_onbuild_token1] = ACTIONS(33),
    [aux_sym_run_token1] = ACTIONS(35),
    [aux_sym_shell_token1] = ACTIONS(37),
    [aux_sym_stopsignal_token1] = ACTIONS(39),
    [aux_sym_user_token1] = ACTIONS(41),
    [aux_sym_volume_token1] = ACTIONS(43),
    [aux_sym_workdir_token1] = ACTIONS(45),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(110),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [5] = {
    [sym__directive] = STATE(225),
    [sym_add] = STATE(225),
    [sym_arg] = STATE(225),
    [sym_cmd] = STATE(225),
    [sym_copy] = STATE(225),
    [sym_entrypoint] = STATE(225),
    [sym_env] = STATE(225),
    [sym_expose] = STATE(225),
    [sym_from] = STATE(225),
    [sym_healthcheck] = STATE(225),
    [sym_label] = STATE(225),
    [sym_maintainer] = STATE(225),
    [sym_onbuild] = STATE(225),
    [sym_run] = STATE(225),
    [sym_shell] = STATE(225),
    [sym_stopsignal] = STATE(225),
    [sym_user] = STATE(225),
    [sym_volume] = STATE(225),
    [sym_workdir] = STATE(225),
    [aux_sym_dockerfile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(114),
    [aux_sym_add_token1] = ACTIONS(11),
    [aux_sym_arg_token1] = ACTIONS(13),
    [aux_sym_cmd_token1] = ACTIONS(15),
    [aux_sym_copy_token1] = ACTIONS(17),
    [aux_sym_entrypoint_token1] = ACTIONS(19),
    [aux_sym_env_token1] = ACTIONS(21),
    [aux_sym_expose_token1] = ACTIONS(23),
    [aux_sym_from_token1] = ACTIONS(25),
    [aux_sym_healthcheck_token1] = ACTIONS(27),
    [aux_sym_label_token1] = ACTIONS(29),
    [aux_sym_maintainer_token1] = ACTIONS(31),
    [aux_sym_onbuild_token1] = ACTIONS(33),
    [aux_sym_run_token1] = ACTIONS(35),
    [aux_sym_shell_token1] = ACTIONS(37),
    [aux_sym_stopsignal_token1] = ACTIONS(39),
    [aux_sym_user_token1] = ACTIONS(41),
    [aux_sym_volume_token1] = ACTIONS(43),
    [aux_sym_workdir_token1] = ACTIONS(45),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(110),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [6] = {
    [sym_add] = STATE(204),
    [sym_arg] = STATE(204),
    [sym_cmd] = STATE(204),
    [sym_copy] = STATE(204),
    [sym_entrypoint] = STATE(204),
    [sym_env] = STATE(204),
    [sym_expose] = STATE(204),
    [sym_healthcheck] = STATE(204),
    [sym_label] = STATE(204),
    [sym_run] = STATE(204),
    [sym_shell] = STATE(204),
    [sym_stopsignal] = STATE(204),
    [sym_user] = STATE(204),
    [sym_volume] = STATE(204),
    [sym_workdir] = STATE(204),
    [aux_sym_add_token1] = ACTIONS(11),
    [aux_sym_arg_token1] = ACTIONS(13),
    [aux_sym_cmd_token1] = ACTIONS(15),
    [aux_sym_copy_token1] = ACTIONS(17),
    [aux_sym_entrypoint_token1] = ACTIONS(19),
    [aux_sym_env_token1] = ACTIONS(21),
    [aux_sym_expose_token1] = ACTIONS(23),
    [aux_sym_healthcheck_token1] = ACTIONS(27),
    [aux_sym_label_token1] = ACTIONS(29),
    [aux_sym_run_token1] = ACTIONS(35),
    [aux_sym_shell_token1] = ACTIONS(37),
    [aux_sym_stopsignal_token1] = ACTIONS(39),
    [aux_sym_user_token1] = ACTIONS(41),
    [aux_sym_volume_token1] = ACTIONS(43),
    [aux_sym_workdir_token1] = ACTIONS(45),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [7] = {
    [sym__port_spec] = STATE(7),
    [sym_mapped_port] = STATE(7),
    [sym__port] = STATE(95),
    [sym_port] = STATE(95),
    [sym_port_range] = STATE(95),
    [sym__port_part] = STATE(91),
    [aux_sym_expose_repeat1] = STATE(7),
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
  [8] = {
    [sym__port_spec] = STATE(7),
    [sym_mapped_port] = STATE(7),
    [sym__port] = STATE(95),
    [sym_port] = STATE(95),
    [sym_port_range] = STATE(95),
    [sym__port_part] = STATE(91),
    [aux_sym_expose_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(127),
    [aux_sym_arg_token1] = ACTIONS(127),
    [aux_sym_cmd_token1] = ACTIONS(127),
    [aux_sym_copy_token1] = ACTIONS(127),
    [aux_sym_entrypoint_token1] = ACTIONS(127),
    [aux_sym_env_token1] = ACTIONS(127),
    [aux_sym_expose_token1] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [aux_sym_from_token1] = ACTIONS(127),
    [aux_sym_healthcheck_token1] = ACTIONS(127),
    [aux_sym_label_token1] = ACTIONS(127),
    [aux_sym_maintainer_token1] = ACTIONS(127),
    [aux_sym_onbuild_token1] = ACTIONS(127),
    [aux_sym_run_token1] = ACTIONS(127),
    [aux_sym_shell_token1] = ACTIONS(127),
    [aux_sym_stopsignal_token1] = ACTIONS(127),
    [aux_sym_user_token1] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(127),
    [aux_sym_workdir_token1] = ACTIONS(127),
    [aux_sym__port_part_token1] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [9] = {
    [aux_sym_from_layer_repeat3] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(135),
    [aux_sym_add_token1] = ACTIONS(137),
    [aux_sym_arg_token1] = ACTIONS(137),
    [aux_sym_cmd_token1] = ACTIONS(137),
    [aux_sym_copy_token1] = ACTIONS(137),
    [aux_sym_entrypoint_token1] = ACTIONS(137),
    [aux_sym_env_token1] = ACTIONS(137),
    [aux_sym_expose_token1] = ACTIONS(137),
    [aux_sym_from_token1] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(135),
    [aux_sym_healthcheck_token1] = ACTIONS(137),
    [aux_sym_label_token1] = ACTIONS(137),
    [aux_sym_maintainer_token1] = ACTIONS(137),
    [aux_sym_onbuild_token1] = ACTIONS(137),
    [aux_sym_run_token1] = ACTIONS(137),
    [aux_sym_shell_token1] = ACTIONS(137),
    [aux_sym_stopsignal_token1] = ACTIONS(137),
    [aux_sym_user_token1] = ACTIONS(137),
    [aux_sym_volume_token1] = ACTIONS(137),
    [aux_sym_workdir_token1] = ACTIONS(137),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [aux_sym_from_layer_token9] = ACTIONS(139),
    [aux_sym_from_layer_token12] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(135),
    [aux_sym__repository_start_token1] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym__space_no_newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [10] = {
    [aux_sym_from_layer_repeat4] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_add_token1] = ACTIONS(144),
    [aux_sym_arg_token1] = ACTIONS(144),
    [aux_sym_cmd_token1] = ACTIONS(144),
    [aux_sym_copy_token1] = ACTIONS(144),
    [aux_sym_entrypoint_token1] = ACTIONS(144),
    [aux_sym_env_token1] = ACTIONS(144),
    [aux_sym_expose_token1] = ACTIONS(144),
    [aux_sym_from_token1] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(142),
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
    [aux_sym_from_layer_token4] = ACTIONS(146),
    [aux_sym_from_layer_token13] = ACTIONS(148),
    [aux_sym_from_layer_token16] = ACTIONS(148),
    [anon_sym_SLASH] = ACTIONS(150),
    [aux_sym__repository_start_token1] = ACTIONS(150),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [11] = {
    [aux_sym_from_layer_repeat3] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_add_token1] = ACTIONS(144),
    [aux_sym_arg_token1] = ACTIONS(144),
    [aux_sym_cmd_token1] = ACTIONS(144),
    [aux_sym_copy_token1] = ACTIONS(144),
    [aux_sym_entrypoint_token1] = ACTIONS(144),
    [aux_sym_env_token1] = ACTIONS(144),
    [aux_sym_expose_token1] = ACTIONS(144),
    [aux_sym_from_token1] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(142),
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
    [aux_sym_from_layer_token4] = ACTIONS(146),
    [aux_sym_from_layer_token9] = ACTIONS(152),
    [aux_sym_from_layer_token12] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(150),
    [aux_sym__repository_start_token1] = ACTIONS(150),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [12] = {
    [aux_sym_from_layer_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_add_token1] = ACTIONS(144),
    [aux_sym_arg_token1] = ACTIONS(144),
    [aux_sym_cmd_token1] = ACTIONS(144),
    [aux_sym_copy_token1] = ACTIONS(144),
    [aux_sym_entrypoint_token1] = ACTIONS(144),
    [aux_sym_env_token1] = ACTIONS(144),
    [aux_sym_expose_token1] = ACTIONS(144),
    [aux_sym_from_token1] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(142),
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
    [aux_sym_from_layer_token4] = ACTIONS(146),
    [aux_sym_from_layer_token5] = ACTIONS(154),
    [aux_sym_from_layer_token8] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(150),
    [aux_sym__repository_start_token1] = ACTIONS(150),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [13] = {
    [aux_sym_from_layer_repeat1] = STATE(13),
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
    [anon_sym_DOLLAR] = ACTIONS(160),
    [aux_sym_volume_token1] = ACTIONS(158),
    [aux_sym_workdir_token1] = ACTIONS(158),
    [aux_sym_from_layer_token3] = ACTIONS(160),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(156),
    [aux_sym__repository_start_token1] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym__space_no_newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [14] = {
    [aux_sym_from_layer_repeat2] = STATE(12),
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
    [aux_sym_from_layer_token4] = ACTIONS(167),
    [aux_sym_from_layer_token5] = ACTIONS(154),
    [aux_sym_from_layer_token8] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token1] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [15] = {
    [aux_sym_from_layer_repeat3] = STATE(11),
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
    [aux_sym_from_layer_token4] = ACTIONS(167),
    [aux_sym_from_layer_token9] = ACTIONS(152),
    [aux_sym_from_layer_token12] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token1] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [16] = {
    [aux_sym_from_layer_repeat4] = STATE(10),
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
    [aux_sym_from_layer_token4] = ACTIONS(167),
    [aux_sym_from_layer_token13] = ACTIONS(148),
    [aux_sym_from_layer_token16] = ACTIONS(148),
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token1] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [17] = {
    [aux_sym_from_layer_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(171),
    [aux_sym_add_token1] = ACTIONS(173),
    [aux_sym_arg_token1] = ACTIONS(173),
    [aux_sym_cmd_token1] = ACTIONS(173),
    [aux_sym_copy_token1] = ACTIONS(173),
    [aux_sym_entrypoint_token1] = ACTIONS(173),
    [aux_sym_env_token1] = ACTIONS(173),
    [aux_sym_expose_token1] = ACTIONS(173),
    [aux_sym_from_token1] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(171),
    [aux_sym_healthcheck_token1] = ACTIONS(173),
    [aux_sym_label_token1] = ACTIONS(173),
    [aux_sym_maintainer_token1] = ACTIONS(173),
    [aux_sym_onbuild_token1] = ACTIONS(173),
    [aux_sym_run_token1] = ACTIONS(173),
    [aux_sym_shell_token1] = ACTIONS(173),
    [aux_sym_stopsignal_token1] = ACTIONS(173),
    [aux_sym_user_token1] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(175),
    [aux_sym_volume_token1] = ACTIONS(173),
    [aux_sym_workdir_token1] = ACTIONS(173),
    [aux_sym_from_layer_token3] = ACTIONS(175),
    [aux_sym_from_layer_token4] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [aux_sym__repository_start_token1] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(171),
    [sym__space_no_newline] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [18] = {
    [aux_sym_from_layer_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(181),
    [aux_sym_add_token1] = ACTIONS(183),
    [aux_sym_arg_token1] = ACTIONS(183),
    [aux_sym_cmd_token1] = ACTIONS(183),
    [aux_sym_copy_token1] = ACTIONS(183),
    [aux_sym_entrypoint_token1] = ACTIONS(183),
    [aux_sym_env_token1] = ACTIONS(183),
    [aux_sym_expose_token1] = ACTIONS(183),
    [aux_sym_from_token1] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(181),
    [aux_sym_healthcheck_token1] = ACTIONS(183),
    [aux_sym_label_token1] = ACTIONS(183),
    [aux_sym_maintainer_token1] = ACTIONS(183),
    [aux_sym_onbuild_token1] = ACTIONS(183),
    [aux_sym_run_token1] = ACTIONS(183),
    [aux_sym_shell_token1] = ACTIONS(183),
    [aux_sym_stopsignal_token1] = ACTIONS(183),
    [aux_sym_user_token1] = ACTIONS(183),
    [aux_sym_volume_token1] = ACTIONS(183),
    [aux_sym_workdir_token1] = ACTIONS(183),
    [aux_sym_from_layer_token4] = ACTIONS(183),
    [aux_sym_from_layer_token5] = ACTIONS(185),
    [aux_sym_from_layer_token8] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(181),
    [aux_sym__repository_start_token1] = ACTIONS(181),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(181),
    [sym__space_no_newline] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [19] = {
    [aux_sym_from_layer_repeat1] = STATE(13),
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
    [anon_sym_DOLLAR] = ACTIONS(175),
    [aux_sym_volume_token1] = ACTIONS(165),
    [aux_sym_workdir_token1] = ACTIONS(165),
    [aux_sym_from_layer_token3] = ACTIONS(175),
    [aux_sym_from_layer_token4] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token1] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [20] = {
    [aux_sym_from_layer_repeat4] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(188),
    [aux_sym_add_token1] = ACTIONS(190),
    [aux_sym_arg_token1] = ACTIONS(190),
    [aux_sym_cmd_token1] = ACTIONS(190),
    [aux_sym_copy_token1] = ACTIONS(190),
    [aux_sym_entrypoint_token1] = ACTIONS(190),
    [aux_sym_env_token1] = ACTIONS(190),
    [aux_sym_expose_token1] = ACTIONS(190),
    [aux_sym_from_token1] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(190),
    [anon_sym_AT] = ACTIONS(188),
    [aux_sym_healthcheck_token1] = ACTIONS(190),
    [aux_sym_label_token1] = ACTIONS(190),
    [aux_sym_maintainer_token1] = ACTIONS(190),
    [aux_sym_onbuild_token1] = ACTIONS(190),
    [aux_sym_run_token1] = ACTIONS(190),
    [aux_sym_shell_token1] = ACTIONS(190),
    [aux_sym_stopsignal_token1] = ACTIONS(190),
    [aux_sym_user_token1] = ACTIONS(190),
    [aux_sym_volume_token1] = ACTIONS(190),
    [aux_sym_workdir_token1] = ACTIONS(190),
    [aux_sym_from_layer_token4] = ACTIONS(190),
    [aux_sym_from_layer_token13] = ACTIONS(192),
    [aux_sym_from_layer_token16] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(188),
    [aux_sym__repository_start_token1] = ACTIONS(188),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(188),
    [sym__space_no_newline] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [aux_sym_from_layer_token3] = ACTIONS(195),
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token1] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [aux_sym_from_layer_token3] = ACTIONS(199),
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token1] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [aux_sym_from_layer_token3] = ACTIONS(203),
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token1] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [24] = {
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
    [anon_sym_DOLLAR] = ACTIONS(156),
    [aux_sym_volume_token1] = ACTIONS(158),
    [aux_sym_workdir_token1] = ACTIONS(158),
    [aux_sym_from_layer_token3] = ACTIONS(156),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(156),
    [aux_sym__repository_start_token1] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym__space_no_newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [aux_sym_from_layer_token5] = ACTIONS(207),
    [aux_sym_from_layer_token8] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token1] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_add_token1] = ACTIONS(213),
    [aux_sym_arg_token1] = ACTIONS(213),
    [aux_sym_cmd_token1] = ACTIONS(213),
    [aux_sym_copy_token1] = ACTIONS(213),
    [aux_sym_entrypoint_token1] = ACTIONS(213),
    [aux_sym_env_token1] = ACTIONS(213),
    [aux_sym_expose_token1] = ACTIONS(213),
    [aux_sym_from_token1] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(211),
    [aux_sym_healthcheck_token1] = ACTIONS(213),
    [aux_sym_label_token1] = ACTIONS(213),
    [aux_sym_maintainer_token1] = ACTIONS(213),
    [aux_sym_onbuild_token1] = ACTIONS(213),
    [aux_sym_run_token1] = ACTIONS(213),
    [aux_sym_shell_token1] = ACTIONS(213),
    [aux_sym_stopsignal_token1] = ACTIONS(213),
    [aux_sym_user_token1] = ACTIONS(213),
    [aux_sym_volume_token1] = ACTIONS(213),
    [aux_sym_workdir_token1] = ACTIONS(213),
    [aux_sym_from_layer_token4] = ACTIONS(213),
    [aux_sym_from_layer_token9] = ACTIONS(211),
    [aux_sym_from_layer_token12] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(211),
    [aux_sym__repository_start_token1] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym__space_no_newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym_add_token1] = ACTIONS(217),
    [aux_sym_arg_token1] = ACTIONS(217),
    [aux_sym_cmd_token1] = ACTIONS(217),
    [aux_sym_copy_token1] = ACTIONS(217),
    [aux_sym_entrypoint_token1] = ACTIONS(217),
    [aux_sym_env_token1] = ACTIONS(217),
    [aux_sym_expose_token1] = ACTIONS(217),
    [aux_sym_from_token1] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(215),
    [aux_sym_healthcheck_token1] = ACTIONS(217),
    [aux_sym_label_token1] = ACTIONS(217),
    [aux_sym_maintainer_token1] = ACTIONS(217),
    [aux_sym_onbuild_token1] = ACTIONS(217),
    [aux_sym_run_token1] = ACTIONS(217),
    [aux_sym_shell_token1] = ACTIONS(217),
    [aux_sym_stopsignal_token1] = ACTIONS(217),
    [aux_sym_user_token1] = ACTIONS(217),
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [aux_sym_from_layer_token4] = ACTIONS(217),
    [aux_sym_from_layer_token13] = ACTIONS(215),
    [aux_sym_from_layer_token16] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [aux_sym__repository_start_token1] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [28] = {
    [aux_sym_from_layer_repeat3] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_add_token1] = ACTIONS(144),
    [aux_sym_arg_token1] = ACTIONS(144),
    [aux_sym_cmd_token1] = ACTIONS(144),
    [aux_sym_copy_token1] = ACTIONS(144),
    [aux_sym_entrypoint_token1] = ACTIONS(144),
    [aux_sym_env_token1] = ACTIONS(144),
    [aux_sym_expose_token1] = ACTIONS(144),
    [aux_sym_from_token1] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
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
    [aux_sym_from_layer_token4] = ACTIONS(219),
    [aux_sym_from_layer_token9] = ACTIONS(221),
    [aux_sym_from_layer_token12] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [29] = {
    [aux_sym_from_layer_repeat3] = STATE(28),
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
    [aux_sym_from_layer_token4] = ACTIONS(223),
    [aux_sym_from_layer_token9] = ACTIONS(221),
    [aux_sym_from_layer_token12] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [30] = {
    [aux_sym_from_layer_repeat4] = STATE(33),
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
    [aux_sym_from_layer_token4] = ACTIONS(223),
    [aux_sym_from_layer_token13] = ACTIONS(225),
    [aux_sym_from_layer_token16] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [31] = {
    [aux_sym_from_layer_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(171),
    [aux_sym_add_token1] = ACTIONS(173),
    [aux_sym_arg_token1] = ACTIONS(173),
    [aux_sym_cmd_token1] = ACTIONS(173),
    [aux_sym_copy_token1] = ACTIONS(173),
    [aux_sym_entrypoint_token1] = ACTIONS(173),
    [aux_sym_env_token1] = ACTIONS(173),
    [aux_sym_expose_token1] = ACTIONS(173),
    [aux_sym_from_token1] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(171),
    [aux_sym_healthcheck_token1] = ACTIONS(173),
    [aux_sym_label_token1] = ACTIONS(173),
    [aux_sym_maintainer_token1] = ACTIONS(173),
    [aux_sym_onbuild_token1] = ACTIONS(173),
    [aux_sym_run_token1] = ACTIONS(173),
    [aux_sym_shell_token1] = ACTIONS(173),
    [aux_sym_stopsignal_token1] = ACTIONS(173),
    [aux_sym_user_token1] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym_volume_token1] = ACTIONS(173),
    [aux_sym_workdir_token1] = ACTIONS(173),
    [aux_sym_from_layer_token3] = ACTIONS(227),
    [aux_sym_from_layer_token4] = ACTIONS(229),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(171),
    [sym__space_no_newline] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [32] = {
    [aux_sym_from_layer_repeat1] = STATE(32),
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
    [anon_sym_DOLLAR] = ACTIONS(231),
    [aux_sym_volume_token1] = ACTIONS(158),
    [aux_sym_workdir_token1] = ACTIONS(158),
    [aux_sym_from_layer_token3] = ACTIONS(231),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym__space_no_newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [33] = {
    [aux_sym_from_layer_repeat4] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_add_token1] = ACTIONS(144),
    [aux_sym_arg_token1] = ACTIONS(144),
    [aux_sym_cmd_token1] = ACTIONS(144),
    [aux_sym_copy_token1] = ACTIONS(144),
    [aux_sym_entrypoint_token1] = ACTIONS(144),
    [aux_sym_env_token1] = ACTIONS(144),
    [aux_sym_expose_token1] = ACTIONS(144),
    [aux_sym_from_token1] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
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
    [aux_sym_from_layer_token4] = ACTIONS(219),
    [aux_sym_from_layer_token13] = ACTIONS(225),
    [aux_sym_from_layer_token16] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [34] = {
    [aux_sym_from_layer_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_add_token1] = ACTIONS(144),
    [aux_sym_arg_token1] = ACTIONS(144),
    [aux_sym_cmd_token1] = ACTIONS(144),
    [aux_sym_copy_token1] = ACTIONS(144),
    [aux_sym_entrypoint_token1] = ACTIONS(144),
    [aux_sym_env_token1] = ACTIONS(144),
    [aux_sym_expose_token1] = ACTIONS(144),
    [aux_sym_from_token1] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
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
    [aux_sym_from_layer_token4] = ACTIONS(219),
    [aux_sym_from_layer_token5] = ACTIONS(234),
    [aux_sym_from_layer_token8] = ACTIONS(234),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [35] = {
    [sym_port_protocol] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(236),
    [aux_sym_add_token1] = ACTIONS(236),
    [aux_sym_arg_token1] = ACTIONS(236),
    [aux_sym_cmd_token1] = ACTIONS(236),
    [aux_sym_copy_token1] = ACTIONS(236),
    [aux_sym_entrypoint_token1] = ACTIONS(236),
    [aux_sym_env_token1] = ACTIONS(236),
    [aux_sym_expose_token1] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [aux_sym_from_token1] = ACTIONS(236),
    [anon_sym_COLON] = ACTIONS(236),
    [aux_sym_healthcheck_token1] = ACTIONS(236),
    [aux_sym_label_token1] = ACTIONS(236),
    [aux_sym_maintainer_token1] = ACTIONS(236),
    [aux_sym_onbuild_token1] = ACTIONS(236),
    [aux_sym_run_token1] = ACTIONS(236),
    [aux_sym_shell_token1] = ACTIONS(236),
    [aux_sym_stopsignal_token1] = ACTIONS(236),
    [aux_sym_user_token1] = ACTIONS(236),
    [anon_sym_DOLLAR] = ACTIONS(236),
    [aux_sym_volume_token1] = ACTIONS(236),
    [aux_sym_workdir_token1] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [aux_sym__port_part_token1] = ACTIONS(236),
    [anon_sym_SLASH] = ACTIONS(238),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(236),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [36] = {
    [aux_sym_from_layer_repeat1] = STATE(32),
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
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym_volume_token1] = ACTIONS(165),
    [aux_sym_workdir_token1] = ACTIONS(165),
    [aux_sym_from_layer_token3] = ACTIONS(227),
    [aux_sym_from_layer_token4] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [37] = {
    [aux_sym_from_layer_repeat2] = STATE(34),
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
    [aux_sym_from_layer_token4] = ACTIONS(223),
    [aux_sym_from_layer_token5] = ACTIONS(234),
    [aux_sym_from_layer_token8] = ACTIONS(234),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [38] = {
    [aux_sym_from_layer_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(181),
    [aux_sym_add_token1] = ACTIONS(183),
    [aux_sym_arg_token1] = ACTIONS(183),
    [aux_sym_cmd_token1] = ACTIONS(183),
    [aux_sym_copy_token1] = ACTIONS(183),
    [aux_sym_entrypoint_token1] = ACTIONS(183),
    [aux_sym_env_token1] = ACTIONS(183),
    [aux_sym_expose_token1] = ACTIONS(183),
    [aux_sym_from_token1] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [aux_sym_healthcheck_token1] = ACTIONS(183),
    [aux_sym_label_token1] = ACTIONS(183),
    [aux_sym_maintainer_token1] = ACTIONS(183),
    [aux_sym_onbuild_token1] = ACTIONS(183),
    [aux_sym_run_token1] = ACTIONS(183),
    [aux_sym_shell_token1] = ACTIONS(183),
    [aux_sym_stopsignal_token1] = ACTIONS(183),
    [aux_sym_user_token1] = ACTIONS(183),
    [aux_sym_volume_token1] = ACTIONS(183),
    [aux_sym_workdir_token1] = ACTIONS(183),
    [aux_sym_from_layer_token4] = ACTIONS(183),
    [aux_sym_from_layer_token5] = ACTIONS(240),
    [aux_sym_from_layer_token8] = ACTIONS(240),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(181),
    [sym__space_no_newline] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [39] = {
    [aux_sym_from_layer_repeat3] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(135),
    [aux_sym_add_token1] = ACTIONS(137),
    [aux_sym_arg_token1] = ACTIONS(137),
    [aux_sym_cmd_token1] = ACTIONS(137),
    [aux_sym_copy_token1] = ACTIONS(137),
    [aux_sym_entrypoint_token1] = ACTIONS(137),
    [aux_sym_env_token1] = ACTIONS(137),
    [aux_sym_expose_token1] = ACTIONS(137),
    [aux_sym_from_token1] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(135),
    [aux_sym_healthcheck_token1] = ACTIONS(137),
    [aux_sym_label_token1] = ACTIONS(137),
    [aux_sym_maintainer_token1] = ACTIONS(137),
    [aux_sym_onbuild_token1] = ACTIONS(137),
    [aux_sym_run_token1] = ACTIONS(137),
    [aux_sym_shell_token1] = ACTIONS(137),
    [aux_sym_stopsignal_token1] = ACTIONS(137),
    [aux_sym_user_token1] = ACTIONS(137),
    [aux_sym_volume_token1] = ACTIONS(137),
    [aux_sym_workdir_token1] = ACTIONS(137),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [aux_sym_from_layer_token9] = ACTIONS(243),
    [aux_sym_from_layer_token12] = ACTIONS(243),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym__space_no_newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [40] = {
    [aux_sym_from_layer_repeat4] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(188),
    [aux_sym_add_token1] = ACTIONS(190),
    [aux_sym_arg_token1] = ACTIONS(190),
    [aux_sym_cmd_token1] = ACTIONS(190),
    [aux_sym_copy_token1] = ACTIONS(190),
    [aux_sym_entrypoint_token1] = ACTIONS(190),
    [aux_sym_env_token1] = ACTIONS(190),
    [aux_sym_expose_token1] = ACTIONS(190),
    [aux_sym_from_token1] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_AT] = ACTIONS(188),
    [aux_sym_healthcheck_token1] = ACTIONS(190),
    [aux_sym_label_token1] = ACTIONS(190),
    [aux_sym_maintainer_token1] = ACTIONS(190),
    [aux_sym_onbuild_token1] = ACTIONS(190),
    [aux_sym_run_token1] = ACTIONS(190),
    [aux_sym_shell_token1] = ACTIONS(190),
    [aux_sym_stopsignal_token1] = ACTIONS(190),
    [aux_sym_user_token1] = ACTIONS(190),
    [aux_sym_volume_token1] = ACTIONS(190),
    [aux_sym_workdir_token1] = ACTIONS(190),
    [aux_sym_from_layer_token4] = ACTIONS(190),
    [aux_sym_from_layer_token13] = ACTIONS(246),
    [aux_sym_from_layer_token16] = ACTIONS(246),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(188),
    [sym__space_no_newline] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [41] = {
    [sym_port_protocol] = STATE(83),
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
    [anon_sym_COLON] = ACTIONS(249),
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
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym__port_part_token1] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(238),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [42] = {
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
  [43] = {
    [aux_sym_from_layer_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym_add_token1] = ACTIONS(253),
    [aux_sym_arg_token1] = ACTIONS(253),
    [aux_sym_cmd_token1] = ACTIONS(253),
    [aux_sym_copy_token1] = ACTIONS(253),
    [aux_sym_entrypoint_token1] = ACTIONS(253),
    [aux_sym_env_token1] = ACTIONS(253),
    [aux_sym_expose_token1] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(251),
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
    [aux_sym_from_layer_token4] = ACTIONS(255),
    [aux_sym_from_layer_token5] = ACTIONS(154),
    [aux_sym_from_layer_token8] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(251),
    [sym__space_no_newline] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [44] = {
    [sym_path] = STATE(74),
    [aux_sym__paths] = STATE(46),
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
  [45] = {
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
    [aux_sym_from_layer_token5] = ACTIONS(207),
    [aux_sym_from_layer_token8] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [46] = {
    [sym_path] = STATE(74),
    [aux_sym__paths] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_add_token1] = ACTIONS(267),
    [aux_sym_arg_token1] = ACTIONS(267),
    [aux_sym_cmd_token1] = ACTIONS(267),
    [aux_sym_copy_token1] = ACTIONS(267),
    [aux_sym_entrypoint_token1] = ACTIONS(267),
    [aux_sym_env_token1] = ACTIONS(267),
    [aux_sym_expose_token1] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [aux_sym_from_token1] = ACTIONS(267),
    [aux_sym_healthcheck_token1] = ACTIONS(267),
    [aux_sym_label_token1] = ACTIONS(267),
    [aux_sym_maintainer_token1] = ACTIONS(267),
    [aux_sym_onbuild_token1] = ACTIONS(267),
    [aux_sym_run_token1] = ACTIONS(267),
    [aux_sym_shell_token1] = ACTIONS(267),
    [aux_sym_stopsignal_token1] = ACTIONS(267),
    [aux_sym_user_token1] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(272),
    [aux_sym_volume_token1] = ACTIONS(267),
    [aux_sym_workdir_token1] = ACTIONS(267),
    [aux_sym_path_token1] = ACTIONS(275),
    [aux_sym_path_token2] = ACTIONS(278),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_add_token1] = ACTIONS(213),
    [aux_sym_arg_token1] = ACTIONS(213),
    [aux_sym_cmd_token1] = ACTIONS(213),
    [aux_sym_copy_token1] = ACTIONS(213),
    [aux_sym_entrypoint_token1] = ACTIONS(213),
    [aux_sym_env_token1] = ACTIONS(213),
    [aux_sym_expose_token1] = ACTIONS(213),
    [aux_sym_from_token1] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(211),
    [aux_sym_healthcheck_token1] = ACTIONS(213),
    [aux_sym_label_token1] = ACTIONS(213),
    [aux_sym_maintainer_token1] = ACTIONS(213),
    [aux_sym_onbuild_token1] = ACTIONS(213),
    [aux_sym_run_token1] = ACTIONS(213),
    [aux_sym_shell_token1] = ACTIONS(213),
    [aux_sym_stopsignal_token1] = ACTIONS(213),
    [aux_sym_user_token1] = ACTIONS(213),
    [aux_sym_volume_token1] = ACTIONS(213),
    [aux_sym_workdir_token1] = ACTIONS(213),
    [aux_sym_from_layer_token4] = ACTIONS(213),
    [aux_sym_from_layer_token9] = ACTIONS(211),
    [aux_sym_from_layer_token12] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym__space_no_newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym_add_token1] = ACTIONS(217),
    [aux_sym_arg_token1] = ACTIONS(217),
    [aux_sym_cmd_token1] = ACTIONS(217),
    [aux_sym_copy_token1] = ACTIONS(217),
    [aux_sym_entrypoint_token1] = ACTIONS(217),
    [aux_sym_env_token1] = ACTIONS(217),
    [aux_sym_expose_token1] = ACTIONS(217),
    [aux_sym_from_token1] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(215),
    [aux_sym_healthcheck_token1] = ACTIONS(217),
    [aux_sym_label_token1] = ACTIONS(217),
    [aux_sym_maintainer_token1] = ACTIONS(217),
    [aux_sym_onbuild_token1] = ACTIONS(217),
    [aux_sym_run_token1] = ACTIONS(217),
    [aux_sym_shell_token1] = ACTIONS(217),
    [aux_sym_stopsignal_token1] = ACTIONS(217),
    [aux_sym_user_token1] = ACTIONS(217),
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [aux_sym_from_layer_token4] = ACTIONS(217),
    [aux_sym_from_layer_token13] = ACTIONS(215),
    [aux_sym_from_layer_token16] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [49] = {
    [aux_sym_path_repeat1] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym_add_token1] = ACTIONS(281),
    [aux_sym_arg_token1] = ACTIONS(281),
    [aux_sym_cmd_token1] = ACTIONS(281),
    [aux_sym_copy_token1] = ACTIONS(281),
    [aux_sym_entrypoint_token1] = ACTIONS(281),
    [aux_sym_env_token1] = ACTIONS(281),
    [aux_sym_expose_token1] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [aux_sym_from_token1] = ACTIONS(281),
    [aux_sym_healthcheck_token1] = ACTIONS(281),
    [aux_sym_label_token1] = ACTIONS(281),
    [aux_sym_maintainer_token1] = ACTIONS(281),
    [aux_sym_onbuild_token1] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(281),
    [aux_sym_shell_token1] = ACTIONS(281),
    [aux_sym_stopsignal_token1] = ACTIONS(281),
    [aux_sym_user_token1] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [aux_sym_volume_token1] = ACTIONS(281),
    [aux_sym_workdir_token1] = ACTIONS(281),
    [aux_sym_path_token1] = ACTIONS(285),
    [aux_sym_path_token2] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(281),
    [sym__space_no_newline] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [50] = {
    [aux_sym_from_layer_repeat2] = STATE(43),
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
    [aux_sym_from_layer_token4] = ACTIONS(295),
    [aux_sym_from_layer_token5] = ACTIONS(154),
    [aux_sym_from_layer_token8] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [51] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [52] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [53] = {
    [aux_sym_from_layer_repeat1] = STATE(60),
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
    [anon_sym_DOLLAR] = ACTIONS(175),
    [aux_sym_volume_token1] = ACTIONS(299),
    [aux_sym_workdir_token1] = ACTIONS(299),
    [aux_sym_from_layer_token3] = ACTIONS(175),
    [aux_sym_from_layer_token4] = ACTIONS(301),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(297),
    [sym__space_no_newline] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [sym_line_continuation] = ACTIONS(5),
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
    [aux_sym_path_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(303),
    [aux_sym_add_token1] = ACTIONS(303),
    [aux_sym_arg_token1] = ACTIONS(303),
    [aux_sym_cmd_token1] = ACTIONS(303),
    [aux_sym_copy_token1] = ACTIONS(303),
    [aux_sym_entrypoint_token1] = ACTIONS(303),
    [aux_sym_env_token1] = ACTIONS(303),
    [aux_sym_expose_token1] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [aux_sym_from_token1] = ACTIONS(303),
    [aux_sym_healthcheck_token1] = ACTIONS(303),
    [aux_sym_label_token1] = ACTIONS(303),
    [aux_sym_maintainer_token1] = ACTIONS(303),
    [aux_sym_onbuild_token1] = ACTIONS(303),
    [aux_sym_run_token1] = ACTIONS(303),
    [aux_sym_shell_token1] = ACTIONS(303),
    [aux_sym_stopsignal_token1] = ACTIONS(303),
    [aux_sym_user_token1] = ACTIONS(303),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [aux_sym_volume_token1] = ACTIONS(303),
    [aux_sym_workdir_token1] = ACTIONS(303),
    [aux_sym_path_token1] = ACTIONS(305),
    [aux_sym_path_token2] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(303),
    [sym__space_no_newline] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [57] = {
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
  [58] = {
    [sym_path] = STATE(74),
    [aux_sym__paths] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_add_token1] = ACTIONS(309),
    [aux_sym_arg_token1] = ACTIONS(309),
    [aux_sym_cmd_token1] = ACTIONS(309),
    [aux_sym_copy_token1] = ACTIONS(309),
    [aux_sym_entrypoint_token1] = ACTIONS(309),
    [aux_sym_env_token1] = ACTIONS(309),
    [aux_sym_expose_token1] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [aux_sym_from_token1] = ACTIONS(309),
    [aux_sym_healthcheck_token1] = ACTIONS(309),
    [aux_sym_label_token1] = ACTIONS(309),
    [aux_sym_maintainer_token1] = ACTIONS(309),
    [aux_sym_onbuild_token1] = ACTIONS(309),
    [aux_sym_run_token1] = ACTIONS(309),
    [aux_sym_shell_token1] = ACTIONS(309),
    [aux_sym_stopsignal_token1] = ACTIONS(309),
    [aux_sym_user_token1] = ACTIONS(309),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_volume_token1] = ACTIONS(309),
    [aux_sym_workdir_token1] = ACTIONS(309),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [59] = {
    [aux_sym_from_layer_repeat4] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym_add_token1] = ACTIONS(253),
    [aux_sym_arg_token1] = ACTIONS(253),
    [aux_sym_cmd_token1] = ACTIONS(253),
    [aux_sym_copy_token1] = ACTIONS(253),
    [aux_sym_entrypoint_token1] = ACTIONS(253),
    [aux_sym_env_token1] = ACTIONS(253),
    [aux_sym_expose_token1] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(251),
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
    [aux_sym_from_layer_token4] = ACTIONS(255),
    [aux_sym_from_layer_token13] = ACTIONS(148),
    [aux_sym_from_layer_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(251),
    [sym__space_no_newline] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [60] = {
    [aux_sym_from_layer_repeat1] = STATE(13),
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
    [anon_sym_DOLLAR] = ACTIONS(175),
    [aux_sym_volume_token1] = ACTIONS(293),
    [aux_sym_workdir_token1] = ACTIONS(293),
    [aux_sym_from_layer_token3] = ACTIONS(175),
    [aux_sym_from_layer_token4] = ACTIONS(295),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [61] = {
    [aux_sym_from_layer_repeat3] = STATE(64),
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
    [aux_sym_from_layer_token4] = ACTIONS(295),
    [aux_sym_from_layer_token9] = ACTIONS(152),
    [aux_sym_from_layer_token12] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [62] = {
    [aux_sym_from_layer_repeat4] = STATE(59),
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
    [aux_sym_from_layer_token4] = ACTIONS(295),
    [aux_sym_from_layer_token13] = ACTIONS(148),
    [aux_sym_from_layer_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [63] = {
    [sym_path] = STATE(74),
    [aux_sym__paths] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(311),
    [aux_sym_add_token1] = ACTIONS(311),
    [aux_sym_arg_token1] = ACTIONS(311),
    [aux_sym_cmd_token1] = ACTIONS(311),
    [aux_sym_copy_token1] = ACTIONS(311),
    [aux_sym_entrypoint_token1] = ACTIONS(311),
    [aux_sym_env_token1] = ACTIONS(311),
    [aux_sym_expose_token1] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [aux_sym_from_token1] = ACTIONS(311),
    [aux_sym_healthcheck_token1] = ACTIONS(311),
    [aux_sym_label_token1] = ACTIONS(311),
    [aux_sym_maintainer_token1] = ACTIONS(311),
    [aux_sym_onbuild_token1] = ACTIONS(311),
    [aux_sym_run_token1] = ACTIONS(311),
    [aux_sym_shell_token1] = ACTIONS(311),
    [aux_sym_stopsignal_token1] = ACTIONS(311),
    [aux_sym_user_token1] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [64] = {
    [aux_sym_from_layer_repeat3] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym_add_token1] = ACTIONS(253),
    [aux_sym_arg_token1] = ACTIONS(253),
    [aux_sym_cmd_token1] = ACTIONS(253),
    [aux_sym_copy_token1] = ACTIONS(253),
    [aux_sym_entrypoint_token1] = ACTIONS(253),
    [aux_sym_env_token1] = ACTIONS(253),
    [aux_sym_expose_token1] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(251),
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
    [aux_sym_from_layer_token4] = ACTIONS(255),
    [aux_sym_from_layer_token9] = ACTIONS(152),
    [aux_sym_from_layer_token12] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(251),
    [sym__space_no_newline] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [65] = {
    [aux_sym_path_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(313),
    [aux_sym_add_token1] = ACTIONS(313),
    [aux_sym_arg_token1] = ACTIONS(313),
    [aux_sym_cmd_token1] = ACTIONS(313),
    [aux_sym_copy_token1] = ACTIONS(313),
    [aux_sym_entrypoint_token1] = ACTIONS(313),
    [aux_sym_env_token1] = ACTIONS(313),
    [aux_sym_expose_token1] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [aux_sym_from_token1] = ACTIONS(313),
    [aux_sym_healthcheck_token1] = ACTIONS(313),
    [aux_sym_label_token1] = ACTIONS(313),
    [aux_sym_maintainer_token1] = ACTIONS(313),
    [aux_sym_onbuild_token1] = ACTIONS(313),
    [aux_sym_run_token1] = ACTIONS(313),
    [aux_sym_shell_token1] = ACTIONS(313),
    [aux_sym_stopsignal_token1] = ACTIONS(313),
    [aux_sym_user_token1] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [aux_sym_volume_token1] = ACTIONS(313),
    [aux_sym_workdir_token1] = ACTIONS(313),
    [aux_sym_path_token1] = ACTIONS(318),
    [aux_sym_path_token2] = ACTIONS(320),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(313),
    [sym__space_no_newline] = ACTIONS(318),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [66] = {
    [sym_path] = STATE(74),
    [aux_sym__paths] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(323),
    [aux_sym_add_token1] = ACTIONS(323),
    [aux_sym_arg_token1] = ACTIONS(323),
    [aux_sym_cmd_token1] = ACTIONS(323),
    [aux_sym_copy_token1] = ACTIONS(323),
    [aux_sym_entrypoint_token1] = ACTIONS(323),
    [aux_sym_env_token1] = ACTIONS(323),
    [aux_sym_expose_token1] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [aux_sym_from_token1] = ACTIONS(323),
    [aux_sym_healthcheck_token1] = ACTIONS(323),
    [aux_sym_label_token1] = ACTIONS(323),
    [aux_sym_maintainer_token1] = ACTIONS(323),
    [aux_sym_onbuild_token1] = ACTIONS(323),
    [aux_sym_run_token1] = ACTIONS(323),
    [aux_sym_shell_token1] = ACTIONS(323),
    [aux_sym_stopsignal_token1] = ACTIONS(323),
    [aux_sym_user_token1] = ACTIONS(323),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_volume_token1] = ACTIONS(323),
    [aux_sym_workdir_token1] = ACTIONS(323),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
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
    [anon_sym_DOLLAR] = ACTIONS(156),
    [aux_sym_volume_token1] = ACTIONS(158),
    [aux_sym_workdir_token1] = ACTIONS(158),
    [aux_sym_from_layer_token3] = ACTIONS(156),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym__space_no_newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [68] = {
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
    [anon_sym_COLON] = ACTIONS(325),
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
    [anon_sym_DASH] = ACTIONS(325),
    [aux_sym__port_part_token1] = ACTIONS(325),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(325),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [aux_sym_add_token1] = ACTIONS(327),
    [aux_sym_arg_token1] = ACTIONS(327),
    [aux_sym_cmd_token1] = ACTIONS(327),
    [aux_sym_copy_token1] = ACTIONS(327),
    [aux_sym_entrypoint_token1] = ACTIONS(327),
    [aux_sym_env_token1] = ACTIONS(327),
    [aux_sym_expose_token1] = ACTIONS(327),
    [aux_sym_from_token1] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(327),
    [aux_sym_healthcheck_token1] = ACTIONS(327),
    [aux_sym_label_token1] = ACTIONS(327),
    [aux_sym_maintainer_token1] = ACTIONS(327),
    [aux_sym_onbuild_token1] = ACTIONS(327),
    [aux_sym_run_token1] = ACTIONS(327),
    [aux_sym_shell_token1] = ACTIONS(327),
    [aux_sym_stopsignal_token1] = ACTIONS(327),
    [aux_sym_user_token1] = ACTIONS(327),
    [aux_sym_volume_token1] = ACTIONS(327),
    [aux_sym_workdir_token1] = ACTIONS(327),
    [anon_sym_SLASH] = ACTIONS(331),
    [aux_sym__repository_start_token1] = ACTIONS(331),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(327),
    [sym__space_no_newline] = ACTIONS(329),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [70] = {
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
    [aux_sym_path_token2] = ACTIONS(335),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [71] = {
    [aux_sym_from_layer_repeat1] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(337),
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
    [anon_sym_DOLLAR] = ACTIONS(175),
    [aux_sym_volume_token1] = ACTIONS(339),
    [aux_sym_workdir_token1] = ACTIONS(339),
    [aux_sym_from_layer_token3] = ACTIONS(175),
    [aux_sym_from_layer_token4] = ACTIONS(341),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(337),
    [sym__space_no_newline] = ACTIONS(339),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [72] = {
    [aux_sym_from_layer_repeat2] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(343),
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
    [aux_sym_from_layer_token4] = ACTIONS(347),
    [aux_sym_from_layer_token5] = ACTIONS(154),
    [aux_sym_from_layer_token8] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(343),
    [sym__space_no_newline] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [73] = {
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
    [sym__space_no_newline] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [74] = {
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
    [sym__space_no_newline] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_add_token1] = ACTIONS(142),
    [aux_sym_arg_token1] = ACTIONS(142),
    [aux_sym_cmd_token1] = ACTIONS(142),
    [aux_sym_copy_token1] = ACTIONS(142),
    [aux_sym_entrypoint_token1] = ACTIONS(142),
    [aux_sym_env_token1] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(142),
    [aux_sym_healthcheck_token1] = ACTIONS(142),
    [aux_sym_label_token1] = ACTIONS(142),
    [aux_sym_maintainer_token1] = ACTIONS(142),
    [aux_sym_onbuild_token1] = ACTIONS(142),
    [aux_sym_run_token1] = ACTIONS(142),
    [aux_sym_shell_token1] = ACTIONS(142),
    [aux_sym_stopsignal_token1] = ACTIONS(142),
    [aux_sym_user_token1] = ACTIONS(142),
    [aux_sym_volume_token1] = ACTIONS(142),
    [aux_sym_workdir_token1] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(150),
    [aux_sym__repository_start_token1] = ACTIONS(150),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_add_token1] = ACTIONS(163),
    [aux_sym_arg_token1] = ACTIONS(163),
    [aux_sym_cmd_token1] = ACTIONS(163),
    [aux_sym_copy_token1] = ACTIONS(163),
    [aux_sym_entrypoint_token1] = ACTIONS(163),
    [aux_sym_env_token1] = ACTIONS(163),
    [aux_sym_expose_token1] = ACTIONS(163),
    [aux_sym_from_token1] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(163),
    [aux_sym_healthcheck_token1] = ACTIONS(163),
    [aux_sym_label_token1] = ACTIONS(163),
    [aux_sym_maintainer_token1] = ACTIONS(163),
    [aux_sym_onbuild_token1] = ACTIONS(163),
    [aux_sym_run_token1] = ACTIONS(163),
    [aux_sym_shell_token1] = ACTIONS(163),
    [aux_sym_stopsignal_token1] = ACTIONS(163),
    [aux_sym_user_token1] = ACTIONS(163),
    [aux_sym_volume_token1] = ACTIONS(163),
    [aux_sym_workdir_token1] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token1] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [77] = {
    [aux_sym_from_layer_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(343),
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
    [anon_sym_DOLLAR] = ACTIONS(175),
    [aux_sym_volume_token1] = ACTIONS(345),
    [aux_sym_workdir_token1] = ACTIONS(345),
    [aux_sym_from_layer_token3] = ACTIONS(175),
    [aux_sym_from_layer_token4] = ACTIONS(347),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(343),
    [sym__space_no_newline] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [78] = {
    [aux_sym_from_layer_repeat4] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(343),
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
    [aux_sym_from_layer_token4] = ACTIONS(347),
    [aux_sym_from_layer_token13] = ACTIONS(148),
    [aux_sym_from_layer_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(343),
    [sym__space_no_newline] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [aux_sym_add_token1] = ACTIONS(303),
    [aux_sym_arg_token1] = ACTIONS(303),
    [aux_sym_cmd_token1] = ACTIONS(303),
    [aux_sym_copy_token1] = ACTIONS(303),
    [aux_sym_entrypoint_token1] = ACTIONS(303),
    [aux_sym_env_token1] = ACTIONS(303),
    [aux_sym_expose_token1] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [aux_sym_from_token1] = ACTIONS(303),
    [aux_sym_healthcheck_token1] = ACTIONS(303),
    [aux_sym_label_token1] = ACTIONS(303),
    [aux_sym_maintainer_token1] = ACTIONS(303),
    [aux_sym_onbuild_token1] = ACTIONS(303),
    [aux_sym_run_token1] = ACTIONS(303),
    [aux_sym_shell_token1] = ACTIONS(303),
    [aux_sym_stopsignal_token1] = ACTIONS(303),
    [aux_sym_user_token1] = ACTIONS(303),
    [anon_sym_DOLLAR] = ACTIONS(303),
    [aux_sym_volume_token1] = ACTIONS(303),
    [aux_sym_workdir_token1] = ACTIONS(303),
    [aux_sym_path_token1] = ACTIONS(307),
    [aux_sym_path_token2] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(303),
    [sym__space_no_newline] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [aux_sym_add_token1] = ACTIONS(313),
    [aux_sym_arg_token1] = ACTIONS(313),
    [aux_sym_cmd_token1] = ACTIONS(313),
    [aux_sym_copy_token1] = ACTIONS(313),
    [aux_sym_entrypoint_token1] = ACTIONS(313),
    [aux_sym_env_token1] = ACTIONS(313),
    [aux_sym_expose_token1] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [aux_sym_from_token1] = ACTIONS(313),
    [aux_sym_healthcheck_token1] = ACTIONS(313),
    [aux_sym_label_token1] = ACTIONS(313),
    [aux_sym_maintainer_token1] = ACTIONS(313),
    [aux_sym_onbuild_token1] = ACTIONS(313),
    [aux_sym_run_token1] = ACTIONS(313),
    [aux_sym_shell_token1] = ACTIONS(313),
    [aux_sym_stopsignal_token1] = ACTIONS(313),
    [aux_sym_user_token1] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [aux_sym_volume_token1] = ACTIONS(313),
    [aux_sym_workdir_token1] = ACTIONS(313),
    [aux_sym_path_token1] = ACTIONS(318),
    [aux_sym_path_token2] = ACTIONS(318),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(313),
    [sym__space_no_newline] = ACTIONS(318),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [81] = {
    [aux_sym_from_layer_repeat3] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(343),
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
    [aux_sym_from_layer_token4] = ACTIONS(347),
    [aux_sym_from_layer_token9] = ACTIONS(152),
    [aux_sym_from_layer_token12] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(343),
    [sym__space_no_newline] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [82] = {
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
    [anon_sym_DASH] = ACTIONS(359),
    [aux_sym__port_part_token1] = ACTIONS(359),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [aux_sym_add_token1] = ACTIONS(236),
    [aux_sym_arg_token1] = ACTIONS(236),
    [aux_sym_cmd_token1] = ACTIONS(236),
    [aux_sym_copy_token1] = ACTIONS(236),
    [aux_sym_entrypoint_token1] = ACTIONS(236),
    [aux_sym_env_token1] = ACTIONS(236),
    [aux_sym_expose_token1] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [aux_sym_from_token1] = ACTIONS(236),
    [anon_sym_COLON] = ACTIONS(236),
    [aux_sym_healthcheck_token1] = ACTIONS(236),
    [aux_sym_label_token1] = ACTIONS(236),
    [aux_sym_maintainer_token1] = ACTIONS(236),
    [aux_sym_onbuild_token1] = ACTIONS(236),
    [aux_sym_run_token1] = ACTIONS(236),
    [aux_sym_shell_token1] = ACTIONS(236),
    [aux_sym_stopsignal_token1] = ACTIONS(236),
    [aux_sym_user_token1] = ACTIONS(236),
    [anon_sym_DOLLAR] = ACTIONS(236),
    [aux_sym_volume_token1] = ACTIONS(236),
    [aux_sym_workdir_token1] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [aux_sym__port_part_token1] = ACTIONS(236),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(236),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [84] = {
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
    [anon_sym_COLON] = ACTIONS(361),
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
    [anon_sym_DASH] = ACTIONS(361),
    [aux_sym__port_part_token1] = ACTIONS(361),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [85] = {
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
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_add_token1] = ACTIONS(363),
    [aux_sym_arg_token1] = ACTIONS(363),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_copy_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_env_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(363),
    [aux_sym_healthcheck_token1] = ACTIONS(363),
    [aux_sym_label_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_onbuild_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_shell_token1] = ACTIONS(363),
    [aux_sym_stopsignal_token1] = ACTIONS(363),
    [aux_sym_user_token1] = ACTIONS(363),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [anon_sym_SLASH] = ACTIONS(367),
    [aux_sym__repository_start_token1] = ACTIONS(367),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(363),
    [sym__space_no_newline] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [87] = {
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
  [88] = {
    [aux_sym_from_layer_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(373),
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
    [aux_sym_from_layer_token4] = ACTIONS(377),
    [aux_sym_from_layer_token5] = ACTIONS(154),
    [aux_sym_from_layer_token8] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(373),
    [sym__space_no_newline] = ACTIONS(375),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [89] = {
    [aux_sym_from_layer_repeat3] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(373),
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
    [aux_sym_from_layer_token4] = ACTIONS(377),
    [aux_sym_from_layer_token9] = ACTIONS(152),
    [aux_sym_from_layer_token12] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(373),
    [sym__space_no_newline] = ACTIONS(375),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [90] = {
    [aux_sym_from_layer_repeat4] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(373),
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
    [aux_sym_from_layer_token4] = ACTIONS(377),
    [aux_sym_from_layer_token13] = ACTIONS(148),
    [aux_sym_from_layer_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(373),
    [sym__space_no_newline] = ACTIONS(375),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [aux_sym_add_token1] = ACTIONS(379),
    [aux_sym_arg_token1] = ACTIONS(379),
    [aux_sym_cmd_token1] = ACTIONS(379),
    [aux_sym_copy_token1] = ACTIONS(379),
    [aux_sym_entrypoint_token1] = ACTIONS(379),
    [aux_sym_env_token1] = ACTIONS(379),
    [aux_sym_expose_token1] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [aux_sym_from_token1] = ACTIONS(379),
    [anon_sym_COLON] = ACTIONS(379),
    [aux_sym_healthcheck_token1] = ACTIONS(379),
    [aux_sym_label_token1] = ACTIONS(379),
    [aux_sym_maintainer_token1] = ACTIONS(379),
    [aux_sym_onbuild_token1] = ACTIONS(379),
    [aux_sym_run_token1] = ACTIONS(379),
    [aux_sym_shell_token1] = ACTIONS(379),
    [aux_sym_stopsignal_token1] = ACTIONS(379),
    [aux_sym_user_token1] = ACTIONS(379),
    [anon_sym_DOLLAR] = ACTIONS(379),
    [aux_sym_volume_token1] = ACTIONS(379),
    [aux_sym_workdir_token1] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(381),
    [aux_sym__port_part_token1] = ACTIONS(379),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [92] = {
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
  [93] = {
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
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [aux_sym_add_token1] = ACTIONS(383),
    [aux_sym_arg_token1] = ACTIONS(383),
    [aux_sym_cmd_token1] = ACTIONS(383),
    [aux_sym_copy_token1] = ACTIONS(383),
    [aux_sym_entrypoint_token1] = ACTIONS(383),
    [aux_sym_env_token1] = ACTIONS(383),
    [aux_sym_expose_token1] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [aux_sym_from_token1] = ACTIONS(383),
    [aux_sym_healthcheck_token1] = ACTIONS(383),
    [aux_sym_label_token1] = ACTIONS(383),
    [aux_sym_maintainer_token1] = ACTIONS(383),
    [aux_sym_onbuild_token1] = ACTIONS(383),
    [aux_sym_run_token1] = ACTIONS(383),
    [aux_sym_shell_token1] = ACTIONS(383),
    [aux_sym_stopsignal_token1] = ACTIONS(383),
    [aux_sym_user_token1] = ACTIONS(383),
    [anon_sym_DOLLAR] = ACTIONS(383),
    [aux_sym_volume_token1] = ACTIONS(383),
    [aux_sym_workdir_token1] = ACTIONS(383),
    [aux_sym_path_token1] = ACTIONS(385),
    [aux_sym_path_token2] = ACTIONS(385),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(383),
    [sym__space_no_newline] = ACTIONS(385),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [95] = {
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
  [96] = {
    [aux_sym_from_layer_repeat3] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(391),
    [aux_sym_add_token1] = ACTIONS(393),
    [aux_sym_arg_token1] = ACTIONS(393),
    [aux_sym_cmd_token1] = ACTIONS(393),
    [aux_sym_copy_token1] = ACTIONS(393),
    [aux_sym_entrypoint_token1] = ACTIONS(393),
    [aux_sym_env_token1] = ACTIONS(393),
    [aux_sym_expose_token1] = ACTIONS(393),
    [aux_sym_from_token1] = ACTIONS(393),
    [aux_sym_healthcheck_token1] = ACTIONS(393),
    [aux_sym_label_token1] = ACTIONS(393),
    [aux_sym_maintainer_token1] = ACTIONS(393),
    [aux_sym_onbuild_token1] = ACTIONS(393),
    [aux_sym_run_token1] = ACTIONS(393),
    [aux_sym_shell_token1] = ACTIONS(393),
    [aux_sym_stopsignal_token1] = ACTIONS(393),
    [aux_sym_user_token1] = ACTIONS(393),
    [aux_sym_volume_token1] = ACTIONS(393),
    [aux_sym_workdir_token1] = ACTIONS(393),
    [aux_sym_from_layer_token4] = ACTIONS(395),
    [aux_sym_from_layer_token9] = ACTIONS(397),
    [aux_sym_from_layer_token12] = ACTIONS(397),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [97] = {
    [aux_sym_from_layer_repeat3] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(135),
    [aux_sym_add_token1] = ACTIONS(137),
    [aux_sym_arg_token1] = ACTIONS(137),
    [aux_sym_cmd_token1] = ACTIONS(137),
    [aux_sym_copy_token1] = ACTIONS(137),
    [aux_sym_entrypoint_token1] = ACTIONS(137),
    [aux_sym_env_token1] = ACTIONS(137),
    [aux_sym_expose_token1] = ACTIONS(137),
    [aux_sym_from_token1] = ACTIONS(137),
    [aux_sym_healthcheck_token1] = ACTIONS(137),
    [aux_sym_label_token1] = ACTIONS(137),
    [aux_sym_maintainer_token1] = ACTIONS(137),
    [aux_sym_onbuild_token1] = ACTIONS(137),
    [aux_sym_run_token1] = ACTIONS(137),
    [aux_sym_shell_token1] = ACTIONS(137),
    [aux_sym_stopsignal_token1] = ACTIONS(137),
    [aux_sym_user_token1] = ACTIONS(137),
    [aux_sym_volume_token1] = ACTIONS(137),
    [aux_sym_workdir_token1] = ACTIONS(137),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [aux_sym_from_layer_token9] = ACTIONS(399),
    [aux_sym_from_layer_token12] = ACTIONS(399),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [98] = {
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
    [anon_sym_DOLLAR] = ACTIONS(267),
    [aux_sym_volume_token1] = ACTIONS(267),
    [aux_sym_workdir_token1] = ACTIONS(267),
    [aux_sym_path_token1] = ACTIONS(402),
    [aux_sym_path_token2] = ACTIONS(402),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [99] = {
    [aux_sym_from_layer_repeat4] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(188),
    [aux_sym_add_token1] = ACTIONS(190),
    [aux_sym_arg_token1] = ACTIONS(190),
    [aux_sym_cmd_token1] = ACTIONS(190),
    [aux_sym_copy_token1] = ACTIONS(190),
    [aux_sym_entrypoint_token1] = ACTIONS(190),
    [aux_sym_env_token1] = ACTIONS(190),
    [aux_sym_expose_token1] = ACTIONS(190),
    [aux_sym_from_token1] = ACTIONS(190),
    [aux_sym_healthcheck_token1] = ACTIONS(190),
    [aux_sym_label_token1] = ACTIONS(190),
    [aux_sym_maintainer_token1] = ACTIONS(190),
    [aux_sym_onbuild_token1] = ACTIONS(190),
    [aux_sym_run_token1] = ACTIONS(190),
    [aux_sym_shell_token1] = ACTIONS(190),
    [aux_sym_stopsignal_token1] = ACTIONS(190),
    [aux_sym_user_token1] = ACTIONS(190),
    [aux_sym_volume_token1] = ACTIONS(190),
    [aux_sym_workdir_token1] = ACTIONS(190),
    [aux_sym_from_layer_token4] = ACTIONS(190),
    [aux_sym_from_layer_token13] = ACTIONS(404),
    [aux_sym_from_layer_token16] = ACTIONS(404),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [100] = {
    [aux_sym_path_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(313),
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
    [anon_sym_DOLLAR] = ACTIONS(407),
    [aux_sym_volume_token1] = ACTIONS(313),
    [aux_sym_workdir_token1] = ACTIONS(313),
    [aux_sym_path_token1] = ACTIONS(318),
    [aux_sym_path_token2] = ACTIONS(410),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [101] = {
    [aux_sym_path_repeat1] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(281),
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
    [anon_sym_DOLLAR] = ACTIONS(413),
    [aux_sym_volume_token1] = ACTIONS(281),
    [aux_sym_workdir_token1] = ACTIONS(281),
    [aux_sym_path_token1] = ACTIONS(415),
    [aux_sym_path_token2] = ACTIONS(417),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [102] = {
    [aux_sym_from_layer_repeat1] = STATE(111),
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
    [anon_sym_DOLLAR] = ACTIONS(423),
    [aux_sym_volume_token1] = ACTIONS(421),
    [aux_sym_workdir_token1] = ACTIONS(421),
    [aux_sym_from_layer_token3] = ACTIONS(423),
    [aux_sym_from_layer_token4] = ACTIONS(425),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(419),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [103] = {
    [aux_sym_from_layer_repeat4] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(427),
    [aux_sym_add_token1] = ACTIONS(429),
    [aux_sym_arg_token1] = ACTIONS(429),
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
    [aux_sym_from_layer_token4] = ACTIONS(431),
    [aux_sym_from_layer_token13] = ACTIONS(433),
    [aux_sym_from_layer_token16] = ACTIONS(433),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(427),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [104] = {
    [aux_sym_from_layer_repeat1] = STATE(104),
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
    [anon_sym_DOLLAR] = ACTIONS(435),
    [aux_sym_volume_token1] = ACTIONS(158),
    [aux_sym_workdir_token1] = ACTIONS(158),
    [aux_sym_from_layer_token3] = ACTIONS(435),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [105] = {
    [aux_sym_from_layer_repeat2] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(181),
    [aux_sym_add_token1] = ACTIONS(183),
    [aux_sym_arg_token1] = ACTIONS(183),
    [aux_sym_cmd_token1] = ACTIONS(183),
    [aux_sym_copy_token1] = ACTIONS(183),
    [aux_sym_entrypoint_token1] = ACTIONS(183),
    [aux_sym_env_token1] = ACTIONS(183),
    [aux_sym_expose_token1] = ACTIONS(183),
    [aux_sym_from_token1] = ACTIONS(183),
    [aux_sym_healthcheck_token1] = ACTIONS(183),
    [aux_sym_label_token1] = ACTIONS(183),
    [aux_sym_maintainer_token1] = ACTIONS(183),
    [aux_sym_onbuild_token1] = ACTIONS(183),
    [aux_sym_run_token1] = ACTIONS(183),
    [aux_sym_shell_token1] = ACTIONS(183),
    [aux_sym_stopsignal_token1] = ACTIONS(183),
    [aux_sym_user_token1] = ACTIONS(183),
    [aux_sym_volume_token1] = ACTIONS(183),
    [aux_sym_workdir_token1] = ACTIONS(183),
    [aux_sym_from_layer_token4] = ACTIONS(183),
    [aux_sym_from_layer_token5] = ACTIONS(438),
    [aux_sym_from_layer_token8] = ACTIONS(438),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [106] = {
    [aux_sym_from_layer_repeat3] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(427),
    [aux_sym_add_token1] = ACTIONS(429),
    [aux_sym_arg_token1] = ACTIONS(429),
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
    [aux_sym_from_layer_token4] = ACTIONS(431),
    [aux_sym_from_layer_token9] = ACTIONS(397),
    [aux_sym_from_layer_token12] = ACTIONS(397),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(427),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [107] = {
    [aux_sym_from_layer_repeat2] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(427),
    [aux_sym_add_token1] = ACTIONS(429),
    [aux_sym_arg_token1] = ACTIONS(429),
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
    [aux_sym_from_layer_token4] = ACTIONS(431),
    [aux_sym_from_layer_token5] = ACTIONS(441),
    [aux_sym_from_layer_token8] = ACTIONS(441),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(427),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [aux_sym_add_token1] = ACTIONS(443),
    [aux_sym_arg_token1] = ACTIONS(443),
    [aux_sym_cmd_token1] = ACTIONS(443),
    [aux_sym_copy_token1] = ACTIONS(443),
    [aux_sym_entrypoint_token1] = ACTIONS(443),
    [aux_sym_env_token1] = ACTIONS(443),
    [aux_sym_expose_token1] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [aux_sym_from_token1] = ACTIONS(443),
    [anon_sym_COLON] = ACTIONS(443),
    [aux_sym_healthcheck_token1] = ACTIONS(443),
    [aux_sym_label_token1] = ACTIONS(443),
    [aux_sym_maintainer_token1] = ACTIONS(443),
    [aux_sym_onbuild_token1] = ACTIONS(443),
    [aux_sym_run_token1] = ACTIONS(443),
    [aux_sym_shell_token1] = ACTIONS(443),
    [aux_sym_stopsignal_token1] = ACTIONS(443),
    [aux_sym_user_token1] = ACTIONS(443),
    [anon_sym_DOLLAR] = ACTIONS(443),
    [aux_sym_volume_token1] = ACTIONS(443),
    [aux_sym_workdir_token1] = ACTIONS(443),
    [aux_sym__port_part_token1] = ACTIONS(443),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(443),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [109] = {
    [aux_sym_path_repeat1] = STATE(100),
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
    [anon_sym_DOLLAR] = ACTIONS(413),
    [aux_sym_volume_token1] = ACTIONS(303),
    [aux_sym_workdir_token1] = ACTIONS(303),
    [aux_sym_path_token1] = ACTIONS(445),
    [aux_sym_path_token2] = ACTIONS(417),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [aux_sym_add_token1] = ACTIONS(447),
    [aux_sym_arg_token1] = ACTIONS(447),
    [aux_sym_cmd_token1] = ACTIONS(447),
    [aux_sym_copy_token1] = ACTIONS(447),
    [aux_sym_entrypoint_token1] = ACTIONS(447),
    [aux_sym_env_token1] = ACTIONS(447),
    [aux_sym_expose_token1] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [aux_sym_from_token1] = ACTIONS(447),
    [anon_sym_COLON] = ACTIONS(447),
    [aux_sym_healthcheck_token1] = ACTIONS(447),
    [aux_sym_label_token1] = ACTIONS(447),
    [aux_sym_maintainer_token1] = ACTIONS(447),
    [aux_sym_onbuild_token1] = ACTIONS(447),
    [aux_sym_run_token1] = ACTIONS(447),
    [aux_sym_shell_token1] = ACTIONS(447),
    [aux_sym_stopsignal_token1] = ACTIONS(447),
    [aux_sym_user_token1] = ACTIONS(447),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [aux_sym_volume_token1] = ACTIONS(447),
    [aux_sym_workdir_token1] = ACTIONS(447),
    [aux_sym__port_part_token1] = ACTIONS(447),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(447),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [111] = {
    [aux_sym_from_layer_repeat1] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(391),
    [aux_sym_add_token1] = ACTIONS(393),
    [aux_sym_arg_token1] = ACTIONS(393),
    [aux_sym_cmd_token1] = ACTIONS(393),
    [aux_sym_copy_token1] = ACTIONS(393),
    [aux_sym_entrypoint_token1] = ACTIONS(393),
    [aux_sym_env_token1] = ACTIONS(393),
    [aux_sym_expose_token1] = ACTIONS(393),
    [aux_sym_from_token1] = ACTIONS(393),
    [aux_sym_healthcheck_token1] = ACTIONS(393),
    [aux_sym_label_token1] = ACTIONS(393),
    [aux_sym_maintainer_token1] = ACTIONS(393),
    [aux_sym_onbuild_token1] = ACTIONS(393),
    [aux_sym_run_token1] = ACTIONS(393),
    [aux_sym_shell_token1] = ACTIONS(393),
    [aux_sym_stopsignal_token1] = ACTIONS(393),
    [aux_sym_user_token1] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(423),
    [aux_sym_volume_token1] = ACTIONS(393),
    [aux_sym_workdir_token1] = ACTIONS(393),
    [aux_sym_from_layer_token3] = ACTIONS(423),
    [aux_sym_from_layer_token4] = ACTIONS(395),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [112] = {
    [aux_sym_from_layer_repeat2] = STATE(107),
    [ts_builtin_sym_end] = ACTIONS(391),
    [aux_sym_add_token1] = ACTIONS(393),
    [aux_sym_arg_token1] = ACTIONS(393),
    [aux_sym_cmd_token1] = ACTIONS(393),
    [aux_sym_copy_token1] = ACTIONS(393),
    [aux_sym_entrypoint_token1] = ACTIONS(393),
    [aux_sym_env_token1] = ACTIONS(393),
    [aux_sym_expose_token1] = ACTIONS(393),
    [aux_sym_from_token1] = ACTIONS(393),
    [aux_sym_healthcheck_token1] = ACTIONS(393),
    [aux_sym_label_token1] = ACTIONS(393),
    [aux_sym_maintainer_token1] = ACTIONS(393),
    [aux_sym_onbuild_token1] = ACTIONS(393),
    [aux_sym_run_token1] = ACTIONS(393),
    [aux_sym_shell_token1] = ACTIONS(393),
    [aux_sym_stopsignal_token1] = ACTIONS(393),
    [aux_sym_user_token1] = ACTIONS(393),
    [aux_sym_volume_token1] = ACTIONS(393),
    [aux_sym_workdir_token1] = ACTIONS(393),
    [aux_sym_from_layer_token4] = ACTIONS(395),
    [aux_sym_from_layer_token5] = ACTIONS(441),
    [aux_sym_from_layer_token8] = ACTIONS(441),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [113] = {
    [aux_sym_from_layer_repeat4] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(391),
    [aux_sym_add_token1] = ACTIONS(393),
    [aux_sym_arg_token1] = ACTIONS(393),
    [aux_sym_cmd_token1] = ACTIONS(393),
    [aux_sym_copy_token1] = ACTIONS(393),
    [aux_sym_entrypoint_token1] = ACTIONS(393),
    [aux_sym_env_token1] = ACTIONS(393),
    [aux_sym_expose_token1] = ACTIONS(393),
    [aux_sym_from_token1] = ACTIONS(393),
    [aux_sym_healthcheck_token1] = ACTIONS(393),
    [aux_sym_label_token1] = ACTIONS(393),
    [aux_sym_maintainer_token1] = ACTIONS(393),
    [aux_sym_onbuild_token1] = ACTIONS(393),
    [aux_sym_run_token1] = ACTIONS(393),
    [aux_sym_shell_token1] = ACTIONS(393),
    [aux_sym_stopsignal_token1] = ACTIONS(393),
    [aux_sym_user_token1] = ACTIONS(393),
    [aux_sym_volume_token1] = ACTIONS(393),
    [aux_sym_workdir_token1] = ACTIONS(393),
    [aux_sym_from_layer_token4] = ACTIONS(395),
    [aux_sym_from_layer_token13] = ACTIONS(433),
    [aux_sym_from_layer_token16] = ACTIONS(433),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [114] = {
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
    [anon_sym_DOLLAR] = ACTIONS(156),
    [aux_sym_volume_token1] = ACTIONS(158),
    [aux_sym_workdir_token1] = ACTIONS(158),
    [aux_sym_from_layer_token3] = ACTIONS(156),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym_add_token1] = ACTIONS(217),
    [aux_sym_arg_token1] = ACTIONS(217),
    [aux_sym_cmd_token1] = ACTIONS(217),
    [aux_sym_copy_token1] = ACTIONS(217),
    [aux_sym_entrypoint_token1] = ACTIONS(217),
    [aux_sym_env_token1] = ACTIONS(217),
    [aux_sym_expose_token1] = ACTIONS(217),
    [aux_sym_from_token1] = ACTIONS(217),
    [aux_sym_healthcheck_token1] = ACTIONS(217),
    [aux_sym_label_token1] = ACTIONS(217),
    [aux_sym_maintainer_token1] = ACTIONS(217),
    [aux_sym_onbuild_token1] = ACTIONS(217),
    [aux_sym_run_token1] = ACTIONS(217),
    [aux_sym_shell_token1] = ACTIONS(217),
    [aux_sym_stopsignal_token1] = ACTIONS(217),
    [aux_sym_user_token1] = ACTIONS(217),
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [aux_sym_from_layer_token4] = ACTIONS(217),
    [aux_sym_from_layer_token13] = ACTIONS(215),
    [aux_sym_from_layer_token16] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [116] = {
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
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [aux_sym_add_token1] = ACTIONS(327),
    [aux_sym_arg_token1] = ACTIONS(327),
    [aux_sym_cmd_token1] = ACTIONS(327),
    [aux_sym_copy_token1] = ACTIONS(327),
    [aux_sym_entrypoint_token1] = ACTIONS(327),
    [aux_sym_env_token1] = ACTIONS(327),
    [aux_sym_expose_token1] = ACTIONS(327),
    [aux_sym_from_token1] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(327),
    [aux_sym_healthcheck_token1] = ACTIONS(327),
    [aux_sym_label_token1] = ACTIONS(327),
    [aux_sym_maintainer_token1] = ACTIONS(327),
    [aux_sym_onbuild_token1] = ACTIONS(327),
    [aux_sym_run_token1] = ACTIONS(327),
    [aux_sym_shell_token1] = ACTIONS(327),
    [aux_sym_stopsignal_token1] = ACTIONS(327),
    [aux_sym_user_token1] = ACTIONS(327),
    [aux_sym_volume_token1] = ACTIONS(327),
    [aux_sym_workdir_token1] = ACTIONS(327),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(327),
    [sym__space_no_newline] = ACTIONS(329),
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
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [aux_sym_from_layer_token5] = ACTIONS(207),
    [aux_sym_from_layer_token8] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [aux_sym_add_token1] = ACTIONS(457),
    [aux_sym_arg_token1] = ACTIONS(457),
    [aux_sym_cmd_token1] = ACTIONS(457),
    [aux_sym_copy_token1] = ACTIONS(457),
    [aux_sym_entrypoint_token1] = ACTIONS(457),
    [aux_sym_env_token1] = ACTIONS(457),
    [aux_sym_expose_token1] = ACTIONS(457),
    [aux_sym_from_token1] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(459),
    [anon_sym_AT] = ACTIONS(461),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(457),
    [sym__space_no_newline] = ACTIONS(463),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_add_token1] = ACTIONS(142),
    [aux_sym_arg_token1] = ACTIONS(142),
    [aux_sym_cmd_token1] = ACTIONS(142),
    [aux_sym_copy_token1] = ACTIONS(142),
    [aux_sym_entrypoint_token1] = ACTIONS(142),
    [aux_sym_env_token1] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [aux_sym_healthcheck_token1] = ACTIONS(142),
    [aux_sym_label_token1] = ACTIONS(142),
    [aux_sym_maintainer_token1] = ACTIONS(142),
    [aux_sym_onbuild_token1] = ACTIONS(142),
    [aux_sym_run_token1] = ACTIONS(142),
    [aux_sym_shell_token1] = ACTIONS(142),
    [aux_sym_stopsignal_token1] = ACTIONS(142),
    [aux_sym_user_token1] = ACTIONS(142),
    [aux_sym_volume_token1] = ACTIONS(142),
    [aux_sym_workdir_token1] = ACTIONS(142),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [aux_sym_add_token1] = ACTIONS(465),
    [aux_sym_arg_token1] = ACTIONS(465),
    [aux_sym_cmd_token1] = ACTIONS(465),
    [aux_sym_copy_token1] = ACTIONS(465),
    [aux_sym_entrypoint_token1] = ACTIONS(465),
    [aux_sym_env_token1] = ACTIONS(465),
    [aux_sym_expose_token1] = ACTIONS(465),
    [aux_sym_from_token1] = ACTIONS(465),
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_AT] = ACTIONS(469),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(465),
    [sym__space_no_newline] = ACTIONS(471),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [aux_sym_add_token1] = ACTIONS(473),
    [aux_sym_arg_token1] = ACTIONS(473),
    [aux_sym_cmd_token1] = ACTIONS(473),
    [aux_sym_copy_token1] = ACTIONS(473),
    [aux_sym_entrypoint_token1] = ACTIONS(473),
    [aux_sym_env_token1] = ACTIONS(473),
    [aux_sym_expose_token1] = ACTIONS(473),
    [aux_sym_from_token1] = ACTIONS(473),
    [anon_sym_COLON] = ACTIONS(475),
    [anon_sym_AT] = ACTIONS(477),
    [aux_sym_healthcheck_token1] = ACTIONS(473),
    [aux_sym_label_token1] = ACTIONS(473),
    [aux_sym_maintainer_token1] = ACTIONS(473),
    [aux_sym_onbuild_token1] = ACTIONS(473),
    [aux_sym_run_token1] = ACTIONS(473),
    [aux_sym_shell_token1] = ACTIONS(473),
    [aux_sym_stopsignal_token1] = ACTIONS(473),
    [aux_sym_user_token1] = ACTIONS(473),
    [aux_sym_volume_token1] = ACTIONS(473),
    [aux_sym_workdir_token1] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(473),
    [sym__space_no_newline] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [aux_sym_add_token1] = ACTIONS(481),
    [aux_sym_arg_token1] = ACTIONS(481),
    [aux_sym_cmd_token1] = ACTIONS(481),
    [aux_sym_copy_token1] = ACTIONS(481),
    [aux_sym_entrypoint_token1] = ACTIONS(481),
    [aux_sym_env_token1] = ACTIONS(481),
    [aux_sym_expose_token1] = ACTIONS(481),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [aux_sym_from_token1] = ACTIONS(481),
    [aux_sym_healthcheck_token1] = ACTIONS(481),
    [aux_sym_label_token1] = ACTIONS(481),
    [aux_sym_maintainer_token1] = ACTIONS(481),
    [aux_sym_onbuild_token1] = ACTIONS(481),
    [aux_sym_run_token1] = ACTIONS(481),
    [aux_sym_shell_token1] = ACTIONS(481),
    [aux_sym_stopsignal_token1] = ACTIONS(481),
    [aux_sym_user_token1] = ACTIONS(481),
    [anon_sym_DOLLAR] = ACTIONS(481),
    [aux_sym_volume_token1] = ACTIONS(481),
    [aux_sym_workdir_token1] = ACTIONS(481),
    [aux_sym__port_part_token1] = ACTIONS(481),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [aux_sym_add_token1] = ACTIONS(483),
    [aux_sym_arg_token1] = ACTIONS(483),
    [aux_sym_cmd_token1] = ACTIONS(483),
    [aux_sym_copy_token1] = ACTIONS(483),
    [aux_sym_entrypoint_token1] = ACTIONS(483),
    [aux_sym_env_token1] = ACTIONS(483),
    [aux_sym_expose_token1] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [aux_sym_from_token1] = ACTIONS(483),
    [aux_sym_healthcheck_token1] = ACTIONS(483),
    [aux_sym_label_token1] = ACTIONS(483),
    [aux_sym_maintainer_token1] = ACTIONS(483),
    [aux_sym_onbuild_token1] = ACTIONS(483),
    [aux_sym_run_token1] = ACTIONS(483),
    [aux_sym_shell_token1] = ACTIONS(483),
    [aux_sym_stopsignal_token1] = ACTIONS(483),
    [aux_sym_user_token1] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [aux_sym_volume_token1] = ACTIONS(483),
    [aux_sym_workdir_token1] = ACTIONS(483),
    [aux_sym__port_part_token1] = ACTIONS(483),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_add_token1] = ACTIONS(163),
    [aux_sym_arg_token1] = ACTIONS(163),
    [aux_sym_cmd_token1] = ACTIONS(163),
    [aux_sym_copy_token1] = ACTIONS(163),
    [aux_sym_entrypoint_token1] = ACTIONS(163),
    [aux_sym_env_token1] = ACTIONS(163),
    [aux_sym_expose_token1] = ACTIONS(163),
    [aux_sym_from_token1] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(163),
    [aux_sym_healthcheck_token1] = ACTIONS(163),
    [aux_sym_label_token1] = ACTIONS(163),
    [aux_sym_maintainer_token1] = ACTIONS(163),
    [aux_sym_onbuild_token1] = ACTIONS(163),
    [aux_sym_run_token1] = ACTIONS(163),
    [aux_sym_shell_token1] = ACTIONS(163),
    [aux_sym_stopsignal_token1] = ACTIONS(163),
    [aux_sym_user_token1] = ACTIONS(163),
    [aux_sym_volume_token1] = ACTIONS(163),
    [aux_sym_workdir_token1] = ACTIONS(163),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [126] = {
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
  [127] = {
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
    [ts_builtin_sym_end] = ACTIONS(313),
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
    [anon_sym_DOLLAR] = ACTIONS(313),
    [aux_sym_volume_token1] = ACTIONS(313),
    [aux_sym_workdir_token1] = ACTIONS(313),
    [aux_sym_path_token1] = ACTIONS(318),
    [aux_sym_path_token2] = ACTIONS(318),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [130] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [132] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_add_token1] = ACTIONS(213),
    [aux_sym_arg_token1] = ACTIONS(213),
    [aux_sym_cmd_token1] = ACTIONS(213),
    [aux_sym_copy_token1] = ACTIONS(213),
    [aux_sym_entrypoint_token1] = ACTIONS(213),
    [aux_sym_env_token1] = ACTIONS(213),
    [aux_sym_expose_token1] = ACTIONS(213),
    [aux_sym_from_token1] = ACTIONS(213),
    [aux_sym_healthcheck_token1] = ACTIONS(213),
    [aux_sym_label_token1] = ACTIONS(213),
    [aux_sym_maintainer_token1] = ACTIONS(213),
    [aux_sym_onbuild_token1] = ACTIONS(213),
    [aux_sym_run_token1] = ACTIONS(213),
    [aux_sym_shell_token1] = ACTIONS(213),
    [aux_sym_stopsignal_token1] = ACTIONS(213),
    [aux_sym_user_token1] = ACTIONS(213),
    [aux_sym_volume_token1] = ACTIONS(213),
    [aux_sym_workdir_token1] = ACTIONS(213),
    [aux_sym_from_layer_token4] = ACTIONS(213),
    [aux_sym_from_layer_token9] = ACTIONS(211),
    [aux_sym_from_layer_token12] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_add_token1] = ACTIONS(363),
    [aux_sym_arg_token1] = ACTIONS(363),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_copy_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_env_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_AT] = ACTIONS(363),
    [aux_sym_healthcheck_token1] = ACTIONS(363),
    [aux_sym_label_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_onbuild_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_shell_token1] = ACTIONS(363),
    [aux_sym_stopsignal_token1] = ACTIONS(363),
    [aux_sym_user_token1] = ACTIONS(363),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(363),
    [sym__space_no_newline] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [135] = {
    [aux_sym__anything] = STATE(139),
    [ts_builtin_sym_end] = ACTIONS(485),
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
    [aux_sym__anything_token1] = ACTIONS(489),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(485),
    [sym_comment] = ACTIONS(491),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [aux_sym__labels_repeat1] = STATE(138),
    [ts_builtin_sym_end] = ACTIONS(493),
    [aux_sym_add_token1] = ACTIONS(493),
    [aux_sym_arg_token1] = ACTIONS(493),
    [aux_sym_cmd_token1] = ACTIONS(493),
    [aux_sym_copy_token1] = ACTIONS(493),
    [aux_sym_entrypoint_token1] = ACTIONS(493),
    [aux_sym_env_token1] = ACTIONS(493),
    [aux_sym_expose_token1] = ACTIONS(493),
    [aux_sym_from_token1] = ACTIONS(493),
    [aux_sym_healthcheck_token1] = ACTIONS(493),
    [aux_sym_label_token1] = ACTIONS(493),
    [aux_sym_maintainer_token1] = ACTIONS(493),
    [aux_sym_onbuild_token1] = ACTIONS(493),
    [aux_sym_run_token1] = ACTIONS(493),
    [aux_sym_shell_token1] = ACTIONS(493),
    [aux_sym_stopsignal_token1] = ACTIONS(493),
    [aux_sym_user_token1] = ACTIONS(493),
    [aux_sym_volume_token1] = ACTIONS(493),
    [aux_sym_workdir_token1] = ACTIONS(493),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(493),
    [sym__space_no_newline] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
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
  [138] = {
    [aux_sym__labels_repeat1] = STATE(138),
    [ts_builtin_sym_end] = ACTIONS(497),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(497),
    [sym__space_no_newline] = ACTIONS(499),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [aux_sym__anything] = STATE(139),
    [ts_builtin_sym_end] = ACTIONS(502),
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
    [aux_sym__anything_token1] = ACTIONS(506),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(502),
    [sym_comment] = ACTIONS(502),
    [sym_line_continuation] = ACTIONS(5),
  },
  [140] = {
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
    [anon_sym_EQ2] = ACTIONS(511),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(509),
    [sym__space_no_newline] = ACTIONS(513),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [aux_sym_add_token1] = ACTIONS(515),
    [aux_sym_arg_token1] = ACTIONS(515),
    [aux_sym_cmd_token1] = ACTIONS(515),
    [aux_sym_copy_token1] = ACTIONS(515),
    [aux_sym_entrypoint_token1] = ACTIONS(515),
    [aux_sym_env_token1] = ACTIONS(515),
    [aux_sym_expose_token1] = ACTIONS(515),
    [aux_sym_from_token1] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(517),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(515),
    [sym__space_no_newline] = ACTIONS(519),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [aux_sym_add_token1] = ACTIONS(521),
    [aux_sym_arg_token1] = ACTIONS(521),
    [aux_sym_cmd_token1] = ACTIONS(521),
    [aux_sym_copy_token1] = ACTIONS(521),
    [aux_sym_entrypoint_token1] = ACTIONS(521),
    [aux_sym_env_token1] = ACTIONS(521),
    [aux_sym_expose_token1] = ACTIONS(521),
    [aux_sym_from_token1] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(523),
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
    [sym__space_no_newline] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [aux_sym_add_token1] = ACTIONS(473),
    [aux_sym_arg_token1] = ACTIONS(473),
    [aux_sym_cmd_token1] = ACTIONS(473),
    [aux_sym_copy_token1] = ACTIONS(473),
    [aux_sym_entrypoint_token1] = ACTIONS(473),
    [aux_sym_env_token1] = ACTIONS(473),
    [aux_sym_expose_token1] = ACTIONS(473),
    [aux_sym_from_token1] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(477),
    [aux_sym_healthcheck_token1] = ACTIONS(473),
    [aux_sym_label_token1] = ACTIONS(473),
    [aux_sym_maintainer_token1] = ACTIONS(473),
    [aux_sym_onbuild_token1] = ACTIONS(473),
    [aux_sym_run_token1] = ACTIONS(473),
    [aux_sym_shell_token1] = ACTIONS(473),
    [aux_sym_stopsignal_token1] = ACTIONS(473),
    [aux_sym_user_token1] = ACTIONS(473),
    [aux_sym_volume_token1] = ACTIONS(473),
    [aux_sym_workdir_token1] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(473),
    [sym__space_no_newline] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [aux_sym_add_token1] = ACTIONS(527),
    [aux_sym_arg_token1] = ACTIONS(527),
    [aux_sym_cmd_token1] = ACTIONS(527),
    [aux_sym_copy_token1] = ACTIONS(527),
    [aux_sym_entrypoint_token1] = ACTIONS(527),
    [aux_sym_env_token1] = ACTIONS(527),
    [aux_sym_expose_token1] = ACTIONS(527),
    [aux_sym_from_token1] = ACTIONS(527),
    [anon_sym_AT] = ACTIONS(527),
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
    [sym__space_no_newline] = ACTIONS(529),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [145] = {
    [aux_sym__anything] = STATE(154),
    [ts_builtin_sym_end] = ACTIONS(531),
    [aux_sym_add_token1] = ACTIONS(533),
    [aux_sym_arg_token1] = ACTIONS(533),
    [aux_sym_cmd_token1] = ACTIONS(533),
    [aux_sym_copy_token1] = ACTIONS(533),
    [aux_sym_entrypoint_token1] = ACTIONS(533),
    [aux_sym_env_token1] = ACTIONS(533),
    [aux_sym_expose_token1] = ACTIONS(533),
    [aux_sym_from_token1] = ACTIONS(533),
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
    [aux_sym__anything_token1] = ACTIONS(535),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(531),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [146] = {
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
    [sym__space_no_newline] = ACTIONS(537),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [aux_sym__labels_repeat1] = STATE(136),
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
    [sym__space_no_newline] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
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
  [149] = {
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
    [anon_sym_EQ2] = ACTIONS(541),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(541),
    [sym__space_no_newline] = ACTIONS(543),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [aux_sym_add_token1] = ACTIONS(545),
    [aux_sym_arg_token1] = ACTIONS(545),
    [aux_sym_cmd_token1] = ACTIONS(545),
    [aux_sym_copy_token1] = ACTIONS(545),
    [aux_sym_entrypoint_token1] = ACTIONS(545),
    [aux_sym_env_token1] = ACTIONS(545),
    [aux_sym_expose_token1] = ACTIONS(545),
    [aux_sym_from_token1] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(545),
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
  [151] = {
    [aux_sym__anything] = STATE(154),
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
    [aux_sym__anything_token1] = ACTIONS(535),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(549),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
    [aux_sym__env_pairs_repeat1] = STATE(153),
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
    [sym__space_no_newline] = ACTIONS(537),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [153] = {
    [aux_sym__env_pairs_repeat1] = STATE(153),
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
  [154] = {
    [aux_sym__anything] = STATE(154),
    [ts_builtin_sym_end] = ACTIONS(502),
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
    [aux_sym__anything_token1] = ACTIONS(560),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(502),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [155] = {
    [aux_sym__anything] = STATE(154),
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
    [aux_sym__anything_token1] = ACTIONS(535),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(563),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym_add_token1] = ACTIONS(251),
    [aux_sym_arg_token1] = ACTIONS(251),
    [aux_sym_cmd_token1] = ACTIONS(251),
    [aux_sym_copy_token1] = ACTIONS(251),
    [aux_sym_entrypoint_token1] = ACTIONS(251),
    [aux_sym_env_token1] = ACTIONS(251),
    [aux_sym_expose_token1] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(251),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(251),
    [sym__space_no_newline] = ACTIONS(253),
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
    [sym__space_no_newline] = ACTIONS(573),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(497),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(497),
    [sym__space_no_newline] = ACTIONS(575),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(577),
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
    [aux_sym__anything_token1] = ACTIONS(579),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(577),
    [sym_comment] = ACTIONS(577),
    [sym_line_continuation] = ACTIONS(5),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [aux_sym_add_token1] = ACTIONS(473),
    [aux_sym_arg_token1] = ACTIONS(473),
    [aux_sym_cmd_token1] = ACTIONS(473),
    [aux_sym_copy_token1] = ACTIONS(473),
    [aux_sym_entrypoint_token1] = ACTIONS(473),
    [aux_sym_env_token1] = ACTIONS(473),
    [aux_sym_expose_token1] = ACTIONS(473),
    [aux_sym_from_token1] = ACTIONS(473),
    [aux_sym_healthcheck_token1] = ACTIONS(473),
    [aux_sym_label_token1] = ACTIONS(473),
    [aux_sym_maintainer_token1] = ACTIONS(473),
    [aux_sym_onbuild_token1] = ACTIONS(473),
    [aux_sym_run_token1] = ACTIONS(473),
    [aux_sym_shell_token1] = ACTIONS(473),
    [aux_sym_stopsignal_token1] = ACTIONS(473),
    [aux_sym_user_token1] = ACTIONS(473),
    [aux_sym_volume_token1] = ACTIONS(473),
    [aux_sym_workdir_token1] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(473),
    [sym__space_no_newline] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [162] = {
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
    [sym__space_no_newline] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [163] = {
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
  [164] = {
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
  [165] = {
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
  [166] = {
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
    [sym__space_no_newline] = ACTIONS(591),
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
    [sym__space_no_newline] = ACTIONS(595),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(597),
    [aux_sym_add_token1] = ACTIONS(597),
    [aux_sym_arg_token1] = ACTIONS(597),
    [aux_sym_cmd_token1] = ACTIONS(597),
    [aux_sym_copy_token1] = ACTIONS(597),
    [aux_sym_entrypoint_token1] = ACTIONS(597),
    [aux_sym_env_token1] = ACTIONS(597),
    [aux_sym_expose_token1] = ACTIONS(597),
    [aux_sym_from_token1] = ACTIONS(597),
    [anon_sym_COLON] = ACTIONS(597),
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
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(599),
    [aux_sym_add_token1] = ACTIONS(599),
    [aux_sym_arg_token1] = ACTIONS(599),
    [aux_sym_cmd_token1] = ACTIONS(599),
    [aux_sym_copy_token1] = ACTIONS(599),
    [aux_sym_entrypoint_token1] = ACTIONS(599),
    [aux_sym_env_token1] = ACTIONS(599),
    [aux_sym_expose_token1] = ACTIONS(599),
    [aux_sym_from_token1] = ACTIONS(599),
    [anon_sym_COLON] = ACTIONS(601),
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
  [170] = {
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
    [sym__space_no_newline] = ACTIONS(603),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(605),
    [aux_sym_add_token1] = ACTIONS(605),
    [aux_sym_arg_token1] = ACTIONS(605),
    [aux_sym_cmd_token1] = ACTIONS(605),
    [aux_sym_copy_token1] = ACTIONS(605),
    [aux_sym_entrypoint_token1] = ACTIONS(605),
    [aux_sym_env_token1] = ACTIONS(605),
    [aux_sym_expose_token1] = ACTIONS(605),
    [aux_sym_from_token1] = ACTIONS(605),
    [anon_sym_COLON] = ACTIONS(605),
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
  [172] = {
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
    [sym__space_no_newline] = ACTIONS(345),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
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
    [sym__space_no_newline] = ACTIONS(609),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [174] = {
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
  [175] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(515),
    [sym__space_no_newline] = ACTIONS(519),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(373),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(373),
    [sym__space_no_newline] = ACTIONS(375),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(615),
    [aux_sym_add_token1] = ACTIONS(615),
    [aux_sym_arg_token1] = ACTIONS(615),
    [anon_sym_EQ] = ACTIONS(617),
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
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(577),
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
    [aux_sym__anything_token1] = ACTIONS(579),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(577),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [179] = {
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
    [sym__space_no_newline] = ACTIONS(621),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(599),
    [aux_sym_add_token1] = ACTIONS(599),
    [aux_sym_arg_token1] = ACTIONS(599),
    [aux_sym_cmd_token1] = ACTIONS(599),
    [aux_sym_copy_token1] = ACTIONS(599),
    [aux_sym_entrypoint_token1] = ACTIONS(599),
    [aux_sym_env_token1] = ACTIONS(599),
    [aux_sym_expose_token1] = ACTIONS(599),
    [aux_sym_from_token1] = ACTIONS(599),
    [anon_sym_COLON] = ACTIONS(623),
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
  [181] = {
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
  [182] = {
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
  [183] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(515),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [186] = {
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
  [191] = {
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
  [192] = {
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
  [193] = {
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
  [194] = {
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
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [aux_sym_add_token1] = ACTIONS(391),
    [aux_sym_arg_token1] = ACTIONS(391),
    [aux_sym_cmd_token1] = ACTIONS(391),
    [aux_sym_copy_token1] = ACTIONS(391),
    [aux_sym_entrypoint_token1] = ACTIONS(391),
    [aux_sym_env_token1] = ACTIONS(391),
    [aux_sym_expose_token1] = ACTIONS(391),
    [aux_sym_from_token1] = ACTIONS(391),
    [aux_sym_healthcheck_token1] = ACTIONS(391),
    [aux_sym_label_token1] = ACTIONS(391),
    [aux_sym_maintainer_token1] = ACTIONS(391),
    [aux_sym_onbuild_token1] = ACTIONS(391),
    [aux_sym_run_token1] = ACTIONS(391),
    [aux_sym_shell_token1] = ACTIONS(391),
    [aux_sym_stopsignal_token1] = ACTIONS(391),
    [aux_sym_user_token1] = ACTIONS(391),
    [aux_sym_volume_token1] = ACTIONS(391),
    [aux_sym_workdir_token1] = ACTIONS(391),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(391),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [199] = {
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
  [202] = {
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
  [203] = {
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
  [204] = {
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
  [205] = {
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
  [206] = {
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
  [211] = {
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
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(383),
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
    [aux_sym_volume_token1] = ACTIONS(383),
    [aux_sym_workdir_token1] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(383),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [213] = {
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
  [214] = {
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
  [215] = {
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
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(427),
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
    [aux_sym_volume_token1] = ACTIONS(427),
    [aux_sym_workdir_token1] = ACTIONS(427),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(427),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [217] = {
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
  [218] = {
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
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(349),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(349),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [220] = {
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
  [221] = {
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
  [222] = {
    [ts_builtin_sym_end] = ACTIONS(677),
    [aux_sym_add_token1] = ACTIONS(677),
    [aux_sym_arg_token1] = ACTIONS(677),
    [aux_sym_cmd_token1] = ACTIONS(677),
    [aux_sym_copy_token1] = ACTIONS(677),
    [aux_sym_entrypoint_token1] = ACTIONS(677),
    [aux_sym_env_token1] = ACTIONS(677),
    [aux_sym_expose_token1] = ACTIONS(677),
    [aux_sym_from_token1] = ACTIONS(677),
    [aux_sym_healthcheck_token1] = ACTIONS(677),
    [aux_sym_label_token1] = ACTIONS(677),
    [aux_sym_maintainer_token1] = ACTIONS(677),
    [aux_sym_onbuild_token1] = ACTIONS(677),
    [aux_sym_run_token1] = ACTIONS(677),
    [aux_sym_shell_token1] = ACTIONS(677),
    [aux_sym_stopsignal_token1] = ACTIONS(677),
    [aux_sym_user_token1] = ACTIONS(677),
    [aux_sym_volume_token1] = ACTIONS(677),
    [aux_sym_workdir_token1] = ACTIONS(677),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(677),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(679),
    [aux_sym_add_token1] = ACTIONS(679),
    [aux_sym_arg_token1] = ACTIONS(679),
    [aux_sym_cmd_token1] = ACTIONS(679),
    [aux_sym_copy_token1] = ACTIONS(679),
    [aux_sym_entrypoint_token1] = ACTIONS(679),
    [aux_sym_env_token1] = ACTIONS(679),
    [aux_sym_expose_token1] = ACTIONS(679),
    [aux_sym_from_token1] = ACTIONS(679),
    [aux_sym_healthcheck_token1] = ACTIONS(679),
    [aux_sym_label_token1] = ACTIONS(679),
    [aux_sym_maintainer_token1] = ACTIONS(679),
    [aux_sym_onbuild_token1] = ACTIONS(679),
    [aux_sym_run_token1] = ACTIONS(679),
    [aux_sym_shell_token1] = ACTIONS(679),
    [aux_sym_stopsignal_token1] = ACTIONS(679),
    [aux_sym_user_token1] = ACTIONS(679),
    [aux_sym_volume_token1] = ACTIONS(679),
    [aux_sym_workdir_token1] = ACTIONS(679),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(679),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [224] = {
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
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(681),
    [aux_sym_add_token1] = ACTIONS(681),
    [aux_sym_arg_token1] = ACTIONS(681),
    [aux_sym_cmd_token1] = ACTIONS(681),
    [aux_sym_copy_token1] = ACTIONS(681),
    [aux_sym_entrypoint_token1] = ACTIONS(681),
    [aux_sym_env_token1] = ACTIONS(681),
    [aux_sym_expose_token1] = ACTIONS(681),
    [aux_sym_from_token1] = ACTIONS(681),
    [aux_sym_healthcheck_token1] = ACTIONS(681),
    [aux_sym_label_token1] = ACTIONS(681),
    [aux_sym_maintainer_token1] = ACTIONS(681),
    [aux_sym_onbuild_token1] = ACTIONS(681),
    [aux_sym_run_token1] = ACTIONS(681),
    [aux_sym_shell_token1] = ACTIONS(681),
    [aux_sym_stopsignal_token1] = ACTIONS(681),
    [aux_sym_user_token1] = ACTIONS(681),
    [aux_sym_volume_token1] = ACTIONS(681),
    [aux_sym_workdir_token1] = ACTIONS(681),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(681),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [226] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_add_token1] = ACTIONS(127),
    [aux_sym_arg_token1] = ACTIONS(127),
    [aux_sym_cmd_token1] = ACTIONS(127),
    [aux_sym_copy_token1] = ACTIONS(127),
    [aux_sym_entrypoint_token1] = ACTIONS(127),
    [aux_sym_env_token1] = ACTIONS(127),
    [aux_sym_expose_token1] = ACTIONS(127),
    [aux_sym_from_token1] = ACTIONS(127),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [227] = {
    [sym_repository] = STATE(246),
    [sym__repository_start] = STATE(242),
    [sym_image] = STATE(121),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(683),
    [anon_sym_DOLLAR] = ACTIONS(685),
    [aux_sym_from_layer_token1] = ACTIONS(687),
    [aux_sym_from_layer_token2] = ACTIONS(685),
    [aux_sym_from_layer_token5] = ACTIONS(689),
    [aux_sym_from_layer_token7] = ACTIONS(689),
    [aux_sym_from_layer_token9] = ACTIONS(691),
    [aux_sym_from_layer_token11] = ACTIONS(691),
    [aux_sym_from_layer_token13] = ACTIONS(693),
    [aux_sym_from_layer_token15] = ACTIONS(693),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [228] = {
    [sym__hc_interval] = STATE(230),
    [sym__hc_timeout] = STATE(230),
    [sym__hc_start_period] = STATE(230),
    [sym__hc_retries] = STATE(230),
    [sym__hc_options] = STATE(230),
    [sym__hc_command] = STATE(217),
    [aux_sym_healthcheck_repeat1] = STATE(230),
    [sym_hc_none] = ACTIONS(695),
    [anon_sym_DASH_DASHinterval] = ACTIONS(697),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(699),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(701),
    [anon_sym_DASH_DASHretries] = ACTIONS(703),
    [aux_sym__hc_command_token1] = ACTIONS(705),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [229] = {
    [sym__port_spec] = STATE(8),
    [sym_mapped_port] = STATE(8),
    [sym_mapped_no_lhs] = STATE(226),
    [sym__port] = STATE(95),
    [sym_port] = STATE(95),
    [sym_port_range] = STATE(95),
    [sym__port_part] = STATE(91),
    [aux_sym_expose_repeat1] = STATE(8),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(707),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym__port_part_token1] = ACTIONS(133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [230] = {
    [sym__hc_interval] = STATE(239),
    [sym__hc_timeout] = STATE(239),
    [sym__hc_start_period] = STATE(239),
    [sym__hc_retries] = STATE(239),
    [sym__hc_options] = STATE(239),
    [sym__hc_command] = STATE(207),
    [aux_sym_healthcheck_repeat1] = STATE(239),
    [anon_sym_DASH_DASHinterval] = ACTIONS(697),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(699),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(701),
    [anon_sym_DASH_DASHretries] = ACTIONS(703),
    [aux_sym__hc_command_token1] = ACTIONS(705),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [231] = {
    [sym_repository] = STATE(257),
    [sym__repository_start] = STATE(242),
    [sym_image] = STATE(122),
    [anon_sym_DOLLAR] = ACTIONS(685),
    [aux_sym_from_layer_token1] = ACTIONS(687),
    [aux_sym_from_layer_token2] = ACTIONS(685),
    [aux_sym_from_layer_token5] = ACTIONS(689),
    [aux_sym_from_layer_token7] = ACTIONS(689),
    [aux_sym_from_layer_token9] = ACTIONS(691),
    [aux_sym_from_layer_token11] = ACTIONS(691),
    [aux_sym_from_layer_token13] = ACTIONS(693),
    [aux_sym_from_layer_token15] = ACTIONS(693),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [232] = {
    [sym__chown] = STATE(245),
    [sym__from_layer] = STATE(245),
    [sym_path] = STATE(74),
    [aux_sym__paths] = STATE(63),
    [aux_sym_copy_repeat1] = STATE(245),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(709),
    [aux_sym__from_layer_token1] = ACTIONS(711),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(713),
    [sym_line_continuation] = ACTIONS(5),
  },
  [233] = {
    [sym__chown] = STATE(232),
    [sym__from_layer] = STATE(232),
    [sym_path] = STATE(74),
    [aux_sym__paths] = STATE(44),
    [aux_sym_copy_repeat1] = STATE(232),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(709),
    [aux_sym__from_layer_token1] = ACTIONS(711),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(715),
    [sym_line_continuation] = ACTIONS(5),
  },
  [234] = {
    [sym_digest] = STATE(166),
    [anon_sym_sha256_COLON] = ACTIONS(717),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [aux_sym_from_layer_token1] = ACTIONS(721),
    [aux_sym_from_layer_token2] = ACTIONS(719),
    [aux_sym_from_layer_token5] = ACTIONS(723),
    [aux_sym_from_layer_token7] = ACTIONS(723),
    [aux_sym_from_layer_token9] = ACTIONS(725),
    [aux_sym_from_layer_token11] = ACTIONS(725),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [235] = {
    [sym_digest] = STATE(163),
    [anon_sym_sha256_COLON] = ACTIONS(729),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [aux_sym_from_layer_token1] = ACTIONS(721),
    [aux_sym_from_layer_token2] = ACTIONS(719),
    [aux_sym_from_layer_token5] = ACTIONS(723),
    [aux_sym_from_layer_token7] = ACTIONS(723),
    [aux_sym_from_layer_token9] = ACTIONS(725),
    [aux_sym_from_layer_token11] = ACTIONS(725),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [236] = {
    [sym_digest] = STATE(175),
    [anon_sym_sha256_COLON] = ACTIONS(731),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [aux_sym_from_layer_token1] = ACTIONS(721),
    [aux_sym_from_layer_token2] = ACTIONS(719),
    [aux_sym_from_layer_token5] = ACTIONS(723),
    [aux_sym_from_layer_token7] = ACTIONS(723),
    [aux_sym_from_layer_token9] = ACTIONS(725),
    [aux_sym_from_layer_token11] = ACTIONS(725),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [237] = {
    [sym__repository_continued] = STATE(241),
    [aux_sym_repository_repeat1] = STATE(241),
    [anon_sym_DOLLAR] = ACTIONS(733),
    [aux_sym_from_layer_token1] = ACTIONS(736),
    [aux_sym_from_layer_token2] = ACTIONS(733),
    [aux_sym_from_layer_token5] = ACTIONS(739),
    [aux_sym_from_layer_token7] = ACTIONS(739),
    [aux_sym_from_layer_token9] = ACTIONS(742),
    [aux_sym_from_layer_token11] = ACTIONS(742),
    [aux_sym_from_layer_token13] = ACTIONS(745),
    [aux_sym_from_layer_token15] = ACTIONS(745),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [238] = {
    [sym_digest] = STATE(161),
    [anon_sym_sha256_COLON] = ACTIONS(748),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [aux_sym_from_layer_token1] = ACTIONS(721),
    [aux_sym_from_layer_token2] = ACTIONS(719),
    [aux_sym_from_layer_token5] = ACTIONS(723),
    [aux_sym_from_layer_token7] = ACTIONS(723),
    [aux_sym_from_layer_token9] = ACTIONS(725),
    [aux_sym_from_layer_token11] = ACTIONS(725),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [239] = {
    [sym__hc_interval] = STATE(239),
    [sym__hc_timeout] = STATE(239),
    [sym__hc_start_period] = STATE(239),
    [sym__hc_retries] = STATE(239),
    [sym__hc_options] = STATE(239),
    [aux_sym_healthcheck_repeat1] = STATE(239),
    [anon_sym_DASH_DASHinterval] = ACTIONS(750),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(753),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(756),
    [anon_sym_DASH_DASHretries] = ACTIONS(759),
    [aux_sym__hc_command_token1] = ACTIONS(762),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [240] = {
    [sym_digest] = STATE(162),
    [anon_sym_sha256_COLON] = ACTIONS(764),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [aux_sym_from_layer_token1] = ACTIONS(721),
    [aux_sym_from_layer_token2] = ACTIONS(719),
    [aux_sym_from_layer_token5] = ACTIONS(723),
    [aux_sym_from_layer_token7] = ACTIONS(723),
    [aux_sym_from_layer_token9] = ACTIONS(725),
    [aux_sym_from_layer_token11] = ACTIONS(725),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [241] = {
    [sym__repository_continued] = STATE(241),
    [aux_sym_repository_repeat1] = STATE(241),
    [anon_sym_DOLLAR] = ACTIONS(766),
    [aux_sym_from_layer_token1] = ACTIONS(769),
    [aux_sym_from_layer_token2] = ACTIONS(766),
    [aux_sym_from_layer_token5] = ACTIONS(772),
    [aux_sym_from_layer_token7] = ACTIONS(772),
    [aux_sym_from_layer_token9] = ACTIONS(775),
    [aux_sym_from_layer_token11] = ACTIONS(775),
    [aux_sym_from_layer_token13] = ACTIONS(778),
    [aux_sym_from_layer_token15] = ACTIONS(778),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [242] = {
    [sym__repository_continued] = STATE(237),
    [aux_sym_repository_repeat1] = STATE(237),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [aux_sym_from_layer_token1] = ACTIONS(784),
    [aux_sym_from_layer_token2] = ACTIONS(781),
    [aux_sym_from_layer_token5] = ACTIONS(787),
    [aux_sym_from_layer_token7] = ACTIONS(787),
    [aux_sym_from_layer_token9] = ACTIONS(790),
    [aux_sym_from_layer_token11] = ACTIONS(790),
    [aux_sym_from_layer_token13] = ACTIONS(793),
    [aux_sym_from_layer_token15] = ACTIONS(793),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [243] = {
    [sym_digest] = STATE(179),
    [anon_sym_sha256_COLON] = ACTIONS(796),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [aux_sym_from_layer_token1] = ACTIONS(721),
    [aux_sym_from_layer_token2] = ACTIONS(719),
    [aux_sym_from_layer_token5] = ACTIONS(723),
    [aux_sym_from_layer_token7] = ACTIONS(723),
    [aux_sym_from_layer_token9] = ACTIONS(725),
    [aux_sym_from_layer_token11] = ACTIONS(725),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [244] = {
    [sym_as_name] = STATE(215),
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [245] = {
    [sym__chown] = STATE(245),
    [sym__from_layer] = STATE(245),
    [aux_sym_copy_repeat1] = STATE(245),
    [anon_sym_DQUOTE] = ACTIONS(808),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(810),
    [aux_sym__from_layer_token1] = ACTIONS(813),
    [aux_sym_path_token1] = ACTIONS(816),
    [aux_sym_path_token2] = ACTIONS(816),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(808),
    [sym_line_continuation] = ACTIONS(5),
  },
  [246] = {
    [sym_image] = STATE(119),
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_from_layer_token1] = ACTIONS(820),
    [aux_sym_from_layer_token2] = ACTIONS(818),
    [aux_sym_from_layer_token5] = ACTIONS(822),
    [aux_sym_from_layer_token7] = ACTIONS(822),
    [aux_sym_from_layer_token9] = ACTIONS(824),
    [aux_sym_from_layer_token11] = ACTIONS(824),
    [aux_sym_from_layer_token13] = ACTIONS(826),
    [aux_sym_from_layer_token15] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [247] = {
    [sym_digest] = STATE(175),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [aux_sym_from_layer_token1] = ACTIONS(721),
    [aux_sym_from_layer_token2] = ACTIONS(719),
    [aux_sym_from_layer_token5] = ACTIONS(723),
    [aux_sym_from_layer_token7] = ACTIONS(723),
    [aux_sym_from_layer_token9] = ACTIONS(725),
    [aux_sym_from_layer_token11] = ACTIONS(725),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [248] = {
    [sym_as_name] = STATE(214),
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [249] = {
    [sym_as_name] = STATE(218),
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [250] = {
    [sym_digest] = STATE(164),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [aux_sym_from_layer_token1] = ACTIONS(721),
    [aux_sym_from_layer_token2] = ACTIONS(719),
    [aux_sym_from_layer_token5] = ACTIONS(723),
    [aux_sym_from_layer_token7] = ACTIONS(723),
    [aux_sym_from_layer_token9] = ACTIONS(725),
    [aux_sym_from_layer_token11] = ACTIONS(725),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [251] = {
    [sym_tag] = STATE(137),
    [anon_sym_DOLLAR] = ACTIONS(828),
    [aux_sym_from_layer_token1] = ACTIONS(830),
    [aux_sym_from_layer_token2] = ACTIONS(828),
    [aux_sym_from_layer_token5] = ACTIONS(832),
    [aux_sym_from_layer_token7] = ACTIONS(832),
    [aux_sym_from_layer_token9] = ACTIONS(834),
    [aux_sym_from_layer_token11] = ACTIONS(834),
    [aux_sym_from_layer_token13] = ACTIONS(836),
    [aux_sym_from_layer_token15] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [252] = {
    [sym_as_name] = STATE(183),
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [253] = {
    [sym_as_name] = STATE(189),
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [254] = {
    [sym_digest] = STATE(162),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [aux_sym_from_layer_token1] = ACTIONS(721),
    [aux_sym_from_layer_token2] = ACTIONS(719),
    [aux_sym_from_layer_token5] = ACTIONS(723),
    [aux_sym_from_layer_token7] = ACTIONS(723),
    [aux_sym_from_layer_token9] = ACTIONS(725),
    [aux_sym_from_layer_token11] = ACTIONS(725),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [255] = {
    [sym_digest] = STATE(179),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [aux_sym_from_layer_token1] = ACTIONS(721),
    [aux_sym_from_layer_token2] = ACTIONS(719),
    [aux_sym_from_layer_token5] = ACTIONS(723),
    [aux_sym_from_layer_token7] = ACTIONS(723),
    [aux_sym_from_layer_token9] = ACTIONS(725),
    [aux_sym_from_layer_token11] = ACTIONS(725),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [256] = {
    [sym_as_name] = STATE(224),
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [257] = {
    [sym_image] = STATE(116),
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_from_layer_token1] = ACTIONS(820),
    [aux_sym_from_layer_token2] = ACTIONS(818),
    [aux_sym_from_layer_token5] = ACTIONS(822),
    [aux_sym_from_layer_token7] = ACTIONS(822),
    [aux_sym_from_layer_token9] = ACTIONS(824),
    [aux_sym_from_layer_token11] = ACTIONS(824),
    [aux_sym_from_layer_token13] = ACTIONS(826),
    [aux_sym_from_layer_token15] = ACTIONS(826),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [258] = {
    [sym_tag] = STATE(143),
    [anon_sym_DOLLAR] = ACTIONS(828),
    [aux_sym_from_layer_token1] = ACTIONS(830),
    [aux_sym_from_layer_token2] = ACTIONS(828),
    [aux_sym_from_layer_token5] = ACTIONS(832),
    [aux_sym_from_layer_token7] = ACTIONS(832),
    [aux_sym_from_layer_token9] = ACTIONS(834),
    [aux_sym_from_layer_token11] = ACTIONS(834),
    [aux_sym_from_layer_token13] = ACTIONS(836),
    [aux_sym_from_layer_token15] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [259] = {
    [sym_as_name] = STATE(197),
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [260] = {
    [sym_from_layer] = STATE(541),
    [anon_sym_DOLLAR] = ACTIONS(838),
    [aux_sym_from_layer_token1] = ACTIONS(840),
    [aux_sym_from_layer_token2] = ACTIONS(838),
    [aux_sym_from_layer_token5] = ACTIONS(842),
    [aux_sym_from_layer_token7] = ACTIONS(842),
    [aux_sym_from_layer_token9] = ACTIONS(844),
    [aux_sym_from_layer_token11] = ACTIONS(844),
    [aux_sym_from_layer_token13] = ACTIONS(846),
    [aux_sym_from_layer_token15] = ACTIONS(846),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [261] = {
    [sym_as_name] = STATE(192),
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [262] = {
    [sym_tag] = STATE(141),
    [anon_sym_DOLLAR] = ACTIONS(828),
    [aux_sym_from_layer_token1] = ACTIONS(830),
    [aux_sym_from_layer_token2] = ACTIONS(828),
    [aux_sym_from_layer_token5] = ACTIONS(832),
    [aux_sym_from_layer_token7] = ACTIONS(832),
    [aux_sym_from_layer_token9] = ACTIONS(834),
    [aux_sym_from_layer_token11] = ACTIONS(834),
    [aux_sym_from_layer_token13] = ACTIONS(836),
    [aux_sym_from_layer_token15] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [263] = {
    [sym_digest] = STATE(166),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [aux_sym_from_layer_token1] = ACTIONS(721),
    [aux_sym_from_layer_token2] = ACTIONS(719),
    [aux_sym_from_layer_token5] = ACTIONS(723),
    [aux_sym_from_layer_token7] = ACTIONS(723),
    [aux_sym_from_layer_token9] = ACTIONS(725),
    [aux_sym_from_layer_token11] = ACTIONS(725),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [264] = {
    [sym_digest] = STATE(163),
    [anon_sym_DOLLAR] = ACTIONS(719),
    [aux_sym_from_layer_token1] = ACTIONS(721),
    [aux_sym_from_layer_token2] = ACTIONS(719),
    [aux_sym_from_layer_token5] = ACTIONS(723),
    [aux_sym_from_layer_token7] = ACTIONS(723),
    [aux_sym_from_layer_token9] = ACTIONS(725),
    [aux_sym_from_layer_token11] = ACTIONS(725),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [265] = {
    [sym_tag] = STATE(142),
    [anon_sym_DOLLAR] = ACTIONS(828),
    [aux_sym_from_layer_token1] = ACTIONS(830),
    [aux_sym_from_layer_token2] = ACTIONS(828),
    [aux_sym_from_layer_token5] = ACTIONS(832),
    [aux_sym_from_layer_token7] = ACTIONS(832),
    [aux_sym_from_layer_token9] = ACTIONS(834),
    [aux_sym_from_layer_token11] = ACTIONS(834),
    [aux_sym_from_layer_token13] = ACTIONS(836),
    [aux_sym_from_layer_token15] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [266] = {
    [sym_as_name] = STATE(196),
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [267] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [268] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [269] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [270] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [271] = {
    [sym__port_spec] = STATE(537),
    [sym_mapped_port] = STATE(537),
    [sym__port] = STATE(438),
    [sym_port] = STATE(439),
    [sym_port_range] = STATE(439),
    [sym__port_part] = STATE(425),
    [anon_sym_DQUOTE] = ACTIONS(860),
    [anon_sym_DOLLAR] = ACTIONS(862),
    [aux_sym__port_part_token1] = ACTIONS(864),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [272] = {
    [anon_sym_DOLLAR] = ACTIONS(866),
    [aux_sym_from_layer_token1] = ACTIONS(868),
    [aux_sym_from_layer_token2] = ACTIONS(866),
    [aux_sym_from_layer_token5] = ACTIONS(866),
    [aux_sym_from_layer_token7] = ACTIONS(866),
    [aux_sym_from_layer_token9] = ACTIONS(866),
    [aux_sym_from_layer_token11] = ACTIONS(866),
    [aux_sym_from_layer_token13] = ACTIONS(866),
    [aux_sym_from_layer_token15] = ACTIONS(866),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [273] = {
    [anon_sym_DOLLAR] = ACTIONS(870),
    [aux_sym_from_layer_token1] = ACTIONS(872),
    [aux_sym_from_layer_token2] = ACTIONS(870),
    [aux_sym_from_layer_token5] = ACTIONS(870),
    [aux_sym_from_layer_token7] = ACTIONS(870),
    [aux_sym_from_layer_token9] = ACTIONS(870),
    [aux_sym_from_layer_token11] = ACTIONS(870),
    [aux_sym_from_layer_token13] = ACTIONS(870),
    [aux_sym_from_layer_token15] = ACTIONS(870),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [274] = {
    [anon_sym_DOLLAR] = ACTIONS(874),
    [aux_sym_from_layer_token1] = ACTIONS(876),
    [aux_sym_from_layer_token2] = ACTIONS(874),
    [aux_sym_from_layer_token5] = ACTIONS(874),
    [aux_sym_from_layer_token7] = ACTIONS(874),
    [aux_sym_from_layer_token9] = ACTIONS(874),
    [aux_sym_from_layer_token11] = ACTIONS(874),
    [aux_sym_from_layer_token13] = ACTIONS(874),
    [aux_sym_from_layer_token15] = ACTIONS(874),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [275] = {
    [anon_sym_DOLLAR] = ACTIONS(878),
    [aux_sym_from_layer_token1] = ACTIONS(880),
    [aux_sym_from_layer_token2] = ACTIONS(878),
    [aux_sym_from_layer_token5] = ACTIONS(878),
    [aux_sym_from_layer_token7] = ACTIONS(878),
    [aux_sym_from_layer_token9] = ACTIONS(878),
    [aux_sym_from_layer_token11] = ACTIONS(878),
    [aux_sym_from_layer_token13] = ACTIONS(878),
    [aux_sym_from_layer_token15] = ACTIONS(878),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [276] = {
    [anon_sym_DOLLAR] = ACTIONS(882),
    [aux_sym_from_layer_token1] = ACTIONS(884),
    [aux_sym_from_layer_token2] = ACTIONS(882),
    [aux_sym_from_layer_token5] = ACTIONS(882),
    [aux_sym_from_layer_token7] = ACTIONS(882),
    [aux_sym_from_layer_token9] = ACTIONS(882),
    [aux_sym_from_layer_token11] = ACTIONS(882),
    [aux_sym_from_layer_token13] = ACTIONS(882),
    [aux_sym_from_layer_token15] = ACTIONS(882),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [277] = {
    [anon_sym_DOLLAR] = ACTIONS(886),
    [aux_sym_from_layer_token1] = ACTIONS(888),
    [aux_sym_from_layer_token2] = ACTIONS(886),
    [aux_sym_from_layer_token5] = ACTIONS(886),
    [aux_sym_from_layer_token7] = ACTIONS(886),
    [aux_sym_from_layer_token9] = ACTIONS(886),
    [aux_sym_from_layer_token11] = ACTIONS(886),
    [aux_sym_from_layer_token13] = ACTIONS(886),
    [aux_sym_from_layer_token15] = ACTIONS(886),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [278] = {
    [anon_sym_DOLLAR] = ACTIONS(890),
    [aux_sym_from_layer_token1] = ACTIONS(892),
    [aux_sym_from_layer_token2] = ACTIONS(890),
    [aux_sym_from_layer_token5] = ACTIONS(890),
    [aux_sym_from_layer_token7] = ACTIONS(890),
    [aux_sym_from_layer_token9] = ACTIONS(890),
    [aux_sym_from_layer_token11] = ACTIONS(890),
    [aux_sym_from_layer_token13] = ACTIONS(890),
    [aux_sym_from_layer_token15] = ACTIONS(890),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [anon_sym_DOLLAR] = ACTIONS(894),
    [aux_sym_from_layer_token1] = ACTIONS(896),
    [aux_sym_from_layer_token2] = ACTIONS(894),
    [aux_sym_from_layer_token5] = ACTIONS(894),
    [aux_sym_from_layer_token7] = ACTIONS(894),
    [aux_sym_from_layer_token9] = ACTIONS(894),
    [aux_sym_from_layer_token11] = ACTIONS(894),
    [aux_sym_from_layer_token13] = ACTIONS(894),
    [aux_sym_from_layer_token15] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [280] = {
    [anon_sym_DOLLAR] = ACTIONS(898),
    [aux_sym_from_layer_token1] = ACTIONS(900),
    [aux_sym_from_layer_token2] = ACTIONS(898),
    [aux_sym_from_layer_token5] = ACTIONS(898),
    [aux_sym_from_layer_token7] = ACTIONS(898),
    [aux_sym_from_layer_token9] = ACTIONS(898),
    [aux_sym_from_layer_token11] = ACTIONS(898),
    [aux_sym_from_layer_token13] = ACTIONS(898),
    [aux_sym_from_layer_token15] = ACTIONS(898),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [281] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [282] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [283] = {
    [anon_sym_DQUOTE] = ACTIONS(902),
    [anon_sym_DOLLAR] = ACTIONS(902),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(902),
    [aux_sym__from_layer_token1] = ACTIONS(902),
    [aux_sym_path_token1] = ACTIONS(904),
    [aux_sym_path_token2] = ACTIONS(904),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(902),
    [sym_line_continuation] = ACTIONS(5),
  },
  [284] = {
    [sym_path] = STATE(74),
    [aux_sym__paths] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(906),
    [sym_line_continuation] = ACTIONS(5),
  },
  [285] = {
    [sym_path] = STATE(74),
    [aux_sym__paths] = STATE(66),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_path_token1] = ACTIONS(263),
    [aux_sym_path_token2] = ACTIONS(265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(908),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [sym__port] = STATE(191),
    [sym_port] = STATE(191),
    [sym_port_range] = STATE(191),
    [sym__port_part] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(910),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym__port_part_token1] = ACTIONS(133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [287] = {
    [sym__port] = STATE(462),
    [sym_port] = STATE(462),
    [sym_port_range] = STATE(462),
    [sym__port_part] = STATE(425),
    [anon_sym_DQUOTE] = ACTIONS(860),
    [anon_sym_DOLLAR] = ACTIONS(862),
    [aux_sym__port_part_token1] = ACTIONS(864),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [288] = {
    [anon_sym_DQUOTE] = ACTIONS(912),
    [anon_sym_DOLLAR] = ACTIONS(912),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(912),
    [aux_sym__from_layer_token1] = ACTIONS(912),
    [aux_sym_path_token1] = ACTIONS(914),
    [aux_sym_path_token2] = ACTIONS(914),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(912),
    [sym_line_continuation] = ACTIONS(5),
  },
  [289] = {
    [sym__port] = STATE(123),
    [sym_port] = STATE(123),
    [sym_port_range] = STATE(123),
    [sym__port_part] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(910),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym__port_part_token1] = ACTIONS(133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [290] = {
    [sym_user_name] = STATE(169),
    [sym_user_id] = STATE(180),
    [anon_sym_DQUOTE] = ACTIONS(916),
    [anon_sym_DOLLAR] = ACTIONS(918),
    [aux_sym_user_name_token1] = ACTIONS(920),
    [aux_sym_user_id_token1] = ACTIONS(922),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [291] = {
    [sym_chown] = STATE(557),
    [sym_user_name] = STATE(434),
    [sym_user_id] = STATE(435),
    [anon_sym_DOLLAR] = ACTIONS(924),
    [aux_sym_user_name_token1] = ACTIONS(926),
    [aux_sym_user_id_token1] = ACTIONS(928),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [292] = {
    [aux_sym_from_layer_repeat1] = STATE(297),
    [anon_sym_DOLLAR] = ACTIONS(930),
    [aux_sym_from_layer_token3] = ACTIONS(930),
    [aux_sym_from_layer_token4] = ACTIONS(932),
    [anon_sym_SLASH] = ACTIONS(934),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [293] = {
    [sym_template_expr_less_than_equals] = STATE(475),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(936),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [294] = {
    [sym_template_expr_less_than_equals] = STATE(463),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(936),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [295] = {
    [sym__env_pairs] = STATE(206),
    [sym_env_pair_eq] = STATE(146),
    [sym_env_pair] = STATE(206),
    [sym_env_key] = STATE(140),
    [aux_sym_env_key_token1] = ACTIONS(938),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [296] = {
    [sym_port_protocol] = STATE(406),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_COLON] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(940),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [297] = {
    [aux_sym_from_layer_repeat1] = STATE(329),
    [anon_sym_DOLLAR] = ACTIONS(930),
    [aux_sym_from_layer_token3] = ACTIONS(930),
    [aux_sym_from_layer_token4] = ACTIONS(942),
    [anon_sym_SLASH] = ACTIONS(944),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [298] = {
    [aux_sym_from_layer_repeat2] = STATE(344),
    [aux_sym_from_layer_token4] = ACTIONS(942),
    [aux_sym_from_layer_token5] = ACTIONS(946),
    [aux_sym_from_layer_token8] = ACTIONS(946),
    [anon_sym_SLASH] = ACTIONS(944),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [299] = {
    [aux_sym_from_layer_repeat3] = STATE(345),
    [aux_sym_from_layer_token4] = ACTIONS(942),
    [aux_sym_from_layer_token9] = ACTIONS(948),
    [aux_sym_from_layer_token12] = ACTIONS(948),
    [anon_sym_SLASH] = ACTIONS(944),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [300] = {
    [aux_sym_from_layer_repeat4] = STATE(346),
    [aux_sym_from_layer_token4] = ACTIONS(942),
    [aux_sym_from_layer_token13] = ACTIONS(950),
    [aux_sym_from_layer_token16] = ACTIONS(950),
    [anon_sym_SLASH] = ACTIONS(944),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [301] = {
    [aux_sym_from_layer_repeat1] = STATE(313),
    [anon_sym_DOLLAR] = ACTIONS(952),
    [aux_sym_from_layer_token3] = ACTIONS(952),
    [aux_sym_from_layer_token4] = ACTIONS(954),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(956),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [302] = {
    [sym__labels] = STATE(209),
    [sym_label_pair_eq] = STATE(147),
    [sym_label_pair] = STATE(209),
    [sym_label_key] = STATE(433),
    [aux_sym_env_key_token1] = ACTIONS(958),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [303] = {
    [aux_sym_from_layer_repeat3] = STATE(320),
    [aux_sym_from_layer_token4] = ACTIONS(954),
    [aux_sym_from_layer_token9] = ACTIONS(960),
    [aux_sym_from_layer_token12] = ACTIONS(960),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(956),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [304] = {
    [aux_sym_from_layer_repeat4] = STATE(304),
    [aux_sym_from_layer_token4] = ACTIONS(190),
    [aux_sym_from_layer_token13] = ACTIONS(962),
    [aux_sym_from_layer_token16] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [305] = {
    [aux_sym_from_layer_repeat2] = STATE(319),
    [aux_sym_from_layer_token4] = ACTIONS(954),
    [aux_sym_from_layer_token5] = ACTIONS(965),
    [aux_sym_from_layer_token8] = ACTIONS(965),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(956),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [306] = {
    [aux_sym_from_layer_repeat3] = STATE(306),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [aux_sym_from_layer_token9] = ACTIONS(967),
    [aux_sym_from_layer_token12] = ACTIONS(967),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [307] = {
    [aux_sym_from_layer_repeat2] = STATE(307),
    [aux_sym_from_layer_token4] = ACTIONS(183),
    [aux_sym_from_layer_token5] = ACTIONS(970),
    [aux_sym_from_layer_token8] = ACTIONS(970),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [308] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(347),
    [aux_sym_from_layer_token14] = ACTIONS(973),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(975),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(975),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(975),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [309] = {
    [aux_sym_path_repeat2] = STATE(314),
    [anon_sym_DQUOTE] = ACTIONS(977),
    [anon_sym_DOLLAR] = ACTIONS(979),
    [aux_sym_path_token3] = ACTIONS(981),
    [aux_sym_path_token4] = ACTIONS(983),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [sym_template_expr_less_than_equals] = STATE(561),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(936),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [311] = {
    [sym_template_expr_less_than_equals] = STATE(555),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(936),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [312] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(985),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(985),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(985),
    [anon_sym_DASH_DASHretries] = ACTIONS(985),
    [aux_sym__hc_command_token1] = ACTIONS(985),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [313] = {
    [aux_sym_from_layer_repeat1] = STATE(313),
    [anon_sym_DOLLAR] = ACTIONS(987),
    [aux_sym_from_layer_token3] = ACTIONS(987),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [314] = {
    [aux_sym_path_repeat2] = STATE(314),
    [anon_sym_DQUOTE] = ACTIONS(990),
    [anon_sym_DOLLAR] = ACTIONS(992),
    [aux_sym_path_token3] = ACTIONS(995),
    [aux_sym_path_token4] = ACTIONS(997),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [315] = {
    [sym_path] = STATE(193),
    [anon_sym_DQUOTE] = ACTIONS(1000),
    [anon_sym_DOLLAR] = ACTIONS(1002),
    [aux_sym_path_token1] = ACTIONS(1004),
    [aux_sym_path_token2] = ACTIONS(1006),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [316] = {
    [sym_template_expr_less_than_equals] = STATE(549),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(936),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1008),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1008),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1008),
    [anon_sym_DASH_DASHretries] = ACTIONS(1008),
    [aux_sym__hc_command_token1] = ACTIONS(1008),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [318] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1010),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1010),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1010),
    [anon_sym_DASH_DASHretries] = ACTIONS(1010),
    [aux_sym__hc_command_token1] = ACTIONS(1010),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [319] = {
    [aux_sym_from_layer_repeat2] = STATE(307),
    [aux_sym_from_layer_token4] = ACTIONS(1012),
    [aux_sym_from_layer_token5] = ACTIONS(965),
    [aux_sym_from_layer_token8] = ACTIONS(965),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1014),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [aux_sym_from_layer_repeat3] = STATE(306),
    [aux_sym_from_layer_token4] = ACTIONS(1012),
    [aux_sym_from_layer_token9] = ACTIONS(960),
    [aux_sym_from_layer_token12] = ACTIONS(960),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1014),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [321] = {
    [aux_sym_from_layer_repeat4] = STATE(304),
    [aux_sym_from_layer_token4] = ACTIONS(1012),
    [aux_sym_from_layer_token13] = ACTIONS(1016),
    [aux_sym_from_layer_token16] = ACTIONS(1016),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1014),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [322] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1018),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1018),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1018),
    [anon_sym_DASH_DASHretries] = ACTIONS(1018),
    [aux_sym__hc_command_token1] = ACTIONS(1018),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [323] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1020),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1020),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1020),
    [anon_sym_DASH_DASHretries] = ACTIONS(1020),
    [aux_sym__hc_command_token1] = ACTIONS(1020),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [324] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1022),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1022),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1022),
    [anon_sym_DASH_DASHretries] = ACTIONS(1022),
    [aux_sym__hc_command_token1] = ACTIONS(1022),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [325] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1024),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1024),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1024),
    [anon_sym_DASH_DASHretries] = ACTIONS(1024),
    [aux_sym__hc_command_token1] = ACTIONS(1024),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [326] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1026),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1026),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1026),
    [anon_sym_DASH_DASHretries] = ACTIONS(1026),
    [aux_sym__hc_command_token1] = ACTIONS(1026),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [327] = {
    [sym_hc_command] = STATE(210),
    [aux_sym__anything] = STATE(155),
    [sym__anything_or_json_array] = STATE(208),
    [aux_sym__anything_token1] = ACTIONS(535),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1028),
    [sym_line_continuation] = ACTIONS(5),
  },
  [328] = {
    [sym_port] = STATE(540),
    [sym_port_range] = STATE(540),
    [sym__port_part] = STATE(425),
    [anon_sym_DOLLAR] = ACTIONS(862),
    [aux_sym__port_part_token1] = ACTIONS(864),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [329] = {
    [aux_sym_from_layer_repeat1] = STATE(329),
    [anon_sym_DOLLAR] = ACTIONS(1030),
    [aux_sym_from_layer_token3] = ACTIONS(1030),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(156),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [330] = {
    [sym_template_expr_less_than_equals] = STATE(492),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(936),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [331] = {
    [sym_template_expr_less_than_equals] = STATE(478),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(936),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [332] = {
    [aux_sym_from_layer_repeat2] = STATE(332),
    [aux_sym_from_layer_token4] = ACTIONS(183),
    [aux_sym_from_layer_token5] = ACTIONS(1033),
    [aux_sym_from_layer_token8] = ACTIONS(1033),
    [anon_sym_SLASH] = ACTIONS(181),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [333] = {
    [sym_variable_default_value] = STATE(581),
    [sym_variable_this_or_null] = STATE(581),
    [anon_sym_RBRACE] = ACTIONS(1036),
    [anon_sym_COLON_DASH] = ACTIONS(1038),
    [anon_sym_COLON_PLUS] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [334] = {
    [aux_sym_from_layer_repeat3] = STATE(334),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [aux_sym_from_layer_token9] = ACTIONS(1042),
    [aux_sym_from_layer_token12] = ACTIONS(1042),
    [anon_sym_SLASH] = ACTIONS(135),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [335] = {
    [sym_variable_default_value] = STATE(579),
    [sym_variable_this_or_null] = STATE(579),
    [anon_sym_RBRACE] = ACTIONS(1045),
    [anon_sym_COLON_DASH] = ACTIONS(1038),
    [anon_sym_COLON_PLUS] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [aux_sym_from_layer_repeat4] = STATE(336),
    [aux_sym_from_layer_token4] = ACTIONS(190),
    [aux_sym_from_layer_token13] = ACTIONS(1047),
    [aux_sym_from_layer_token16] = ACTIONS(1047),
    [anon_sym_SLASH] = ACTIONS(188),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [337] = {
    [sym_variable_default_value] = STATE(577),
    [sym_variable_this_or_null] = STATE(577),
    [anon_sym_RBRACE] = ACTIONS(1050),
    [anon_sym_COLON_DASH] = ACTIONS(1038),
    [anon_sym_COLON_PLUS] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [338] = {
    [sym_port_protocol] = STATE(401),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_COLON] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_SLASH] = ACTIONS(940),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [339] = {
    [sym_variable_default_value] = STATE(575),
    [sym_variable_this_or_null] = STATE(575),
    [anon_sym_RBRACE] = ACTIONS(1052),
    [anon_sym_COLON_DASH] = ACTIONS(1038),
    [anon_sym_COLON_PLUS] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [340] = {
    [sym_variable_default_value] = STATE(573),
    [sym_variable_this_or_null] = STATE(573),
    [anon_sym_RBRACE] = ACTIONS(1054),
    [anon_sym_COLON_DASH] = ACTIONS(1038),
    [anon_sym_COLON_PLUS] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [341] = {
    [sym_variable_default_value] = STATE(571),
    [sym_variable_this_or_null] = STATE(571),
    [anon_sym_RBRACE] = ACTIONS(1056),
    [anon_sym_COLON_DASH] = ACTIONS(1038),
    [anon_sym_COLON_PLUS] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [342] = {
    [sym_variable_default_value] = STATE(569),
    [sym_variable_this_or_null] = STATE(569),
    [anon_sym_RBRACE] = ACTIONS(1058),
    [anon_sym_COLON_DASH] = ACTIONS(1038),
    [anon_sym_COLON_PLUS] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [343] = {
    [sym_variable_default_value] = STATE(564),
    [sym_variable_this_or_null] = STATE(564),
    [anon_sym_RBRACE] = ACTIONS(1060),
    [anon_sym_COLON_DASH] = ACTIONS(1038),
    [anon_sym_COLON_PLUS] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [344] = {
    [aux_sym_from_layer_repeat2] = STATE(332),
    [aux_sym_from_layer_token4] = ACTIONS(1062),
    [aux_sym_from_layer_token5] = ACTIONS(946),
    [aux_sym_from_layer_token8] = ACTIONS(946),
    [anon_sym_SLASH] = ACTIONS(1064),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [345] = {
    [aux_sym_from_layer_repeat3] = STATE(334),
    [aux_sym_from_layer_token4] = ACTIONS(1062),
    [aux_sym_from_layer_token9] = ACTIONS(948),
    [aux_sym_from_layer_token12] = ACTIONS(948),
    [anon_sym_SLASH] = ACTIONS(1064),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [346] = {
    [aux_sym_from_layer_repeat4] = STATE(336),
    [aux_sym_from_layer_token4] = ACTIONS(1062),
    [aux_sym_from_layer_token13] = ACTIONS(950),
    [aux_sym_from_layer_token16] = ACTIONS(950),
    [anon_sym_SLASH] = ACTIONS(1064),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(347),
    [aux_sym_from_layer_token14] = ACTIONS(1066),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(1068),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1068),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(1068),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [sym_variable_default_value] = STATE(558),
    [sym_variable_this_or_null] = STATE(558),
    [anon_sym_RBRACE] = ACTIONS(1071),
    [anon_sym_COLON_DASH] = ACTIONS(1038),
    [anon_sym_COLON_PLUS] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [349] = {
    [sym_variable_default_value] = STATE(552),
    [sym_variable_this_or_null] = STATE(552),
    [anon_sym_RBRACE] = ACTIONS(1073),
    [anon_sym_COLON_DASH] = ACTIONS(1038),
    [anon_sym_COLON_PLUS] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [aux_sym_path_repeat2] = STATE(314),
    [anon_sym_DQUOTE] = ACTIONS(1075),
    [anon_sym_DOLLAR] = ACTIONS(979),
    [aux_sym_path_token3] = ACTIONS(1077),
    [aux_sym_path_token4] = ACTIONS(983),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [351] = {
    [aux_sym_from_layer_repeat1] = STATE(301),
    [anon_sym_DOLLAR] = ACTIONS(952),
    [aux_sym_from_layer_token3] = ACTIONS(952),
    [aux_sym_from_layer_token4] = ACTIONS(1079),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1081),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [sym_template_expr_less_than_equals] = STATE(509),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(936),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [sym_variable_default_value] = STATE(490),
    [sym_variable_this_or_null] = STATE(490),
    [anon_sym_RBRACE] = ACTIONS(1083),
    [anon_sym_COLON_DASH] = ACTIONS(1038),
    [anon_sym_COLON_PLUS] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [aux_sym_path_repeat2] = STATE(309),
    [anon_sym_DQUOTE] = ACTIONS(1085),
    [anon_sym_DOLLAR] = ACTIONS(979),
    [aux_sym_path_token3] = ACTIONS(1087),
    [aux_sym_path_token4] = ACTIONS(983),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [sym_variable_default_value] = STATE(545),
    [sym_variable_this_or_null] = STATE(545),
    [anon_sym_RBRACE] = ACTIONS(1089),
    [anon_sym_COLON_DASH] = ACTIONS(1038),
    [anon_sym_COLON_PLUS] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [356] = {
    [aux_sym_path_repeat2] = STATE(350),
    [anon_sym_DQUOTE] = ACTIONS(1091),
    [anon_sym_DOLLAR] = ACTIONS(979),
    [aux_sym_path_token3] = ACTIONS(1093),
    [aux_sym_path_token4] = ACTIONS(983),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [357] = {
    [sym_port] = STATE(507),
    [sym_port_range] = STATE(507),
    [sym__port_part] = STATE(425),
    [anon_sym_DOLLAR] = ACTIONS(862),
    [aux_sym__port_part_token1] = ACTIONS(864),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [358] = {
    [sym_template_expr_less_than_equals] = STATE(567),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(936),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [359] = {
    [sym_template_expr_less_than_equals] = STATE(504),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(936),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [360] = {
    [sym_template_expr_less_than_equals] = STATE(500),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(936),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [361] = {
    [sym_template_expr_less_than_equals] = STATE(572),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(308),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(936),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(936),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [362] = {
    [aux_sym_from_layer_repeat4] = STATE(321),
    [aux_sym_from_layer_token4] = ACTIONS(954),
    [aux_sym_from_layer_token13] = ACTIONS(1016),
    [aux_sym_from_layer_token16] = ACTIONS(1016),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(956),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_path_token3] = ACTIONS(201),
    [aux_sym_path_token4] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [365] = {
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [366] = {
    [aux_sym_from_layer_token4] = ACTIONS(217),
    [aux_sym_from_layer_token13] = ACTIONS(215),
    [aux_sym_from_layer_token16] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [367] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_from_layer_token3] = ACTIONS(195),
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [aux_sym__anything] = STATE(155),
    [sym__anything_or_json_array] = STATE(188),
    [aux_sym__anything_token1] = ACTIONS(535),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1095),
    [sym_line_continuation] = ACTIONS(5),
  },
  [369] = {
    [aux_sym__anything] = STATE(155),
    [sym__anything_or_json_array] = STATE(181),
    [aux_sym__anything_token1] = ACTIONS(535),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1097),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [aux_sym_from_layer_token4] = ACTIONS(213),
    [aux_sym_from_layer_token9] = ACTIONS(211),
    [aux_sym_from_layer_token12] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [371] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_from_layer_token3] = ACTIONS(203),
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [372] = {
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_from_layer_token3] = ACTIONS(199),
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [373] = {
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [aux_sym_from_layer_token5] = ACTIONS(207),
    [aux_sym_from_layer_token8] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [374] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [375] = {
    [anon_sym_DQUOTE] = ACTIONS(990),
    [anon_sym_DOLLAR] = ACTIONS(990),
    [aux_sym_path_token3] = ACTIONS(995),
    [aux_sym_path_token4] = ACTIONS(995),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [376] = {
    [aux_sym__anything] = STATE(155),
    [sym__anything_or_json_array] = STATE(203),
    [aux_sym__anything_token1] = ACTIONS(535),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1099),
    [sym_line_continuation] = ACTIONS(5),
  },
  [377] = {
    [anon_sym_DOLLAR] = ACTIONS(156),
    [aux_sym_from_layer_token3] = ACTIONS(156),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [378] = {
    [anon_sym_DOLLAR] = ACTIONS(156),
    [aux_sym_from_layer_token3] = ACTIONS(156),
    [aux_sym_from_layer_token4] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(156),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [379] = {
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [aux_sym_from_layer_token5] = ACTIONS(207),
    [aux_sym_from_layer_token8] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [380] = {
    [aux_sym_from_layer_token4] = ACTIONS(213),
    [aux_sym_from_layer_token9] = ACTIONS(211),
    [aux_sym_from_layer_token12] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(211),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [381] = {
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_from_layer_token3] = ACTIONS(199),
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [382] = {
    [aux_sym_from_layer_token4] = ACTIONS(217),
    [aux_sym_from_layer_token13] = ACTIONS(215),
    [aux_sym_from_layer_token16] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [383] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_path_token3] = ACTIONS(197),
    [aux_sym_path_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [384] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_path_token3] = ACTIONS(205),
    [aux_sym_path_token4] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [385] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_from_layer_token3] = ACTIONS(203),
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [386] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_from_layer_token3] = ACTIONS(195),
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [387] = {
    [sym_user_name] = STATE(448),
    [sym_user_id] = STATE(449),
    [aux_sym_user_name_token1] = ACTIONS(1101),
    [aux_sym_user_id_token1] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [388] = {
    [sym_docker_variable] = STATE(24),
    [anon_sym_LBRACE] = ACTIONS(1105),
    [sym__docker_variable] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [sym_docker_variable] = STATE(53),
    [anon_sym_LBRACE] = ACTIONS(1105),
    [sym__docker_variable] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [390] = {
    [sym_docker_variable] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(1109),
    [sym__docker_variable] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [391] = {
    [sym_docker_variable] = STATE(351),
    [anon_sym_LBRACE] = ACTIONS(1113),
    [sym__docker_variable] = ACTIONS(1115),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [392] = {
    [sym_docker_variable] = STATE(67),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [sym__docker_variable] = ACTIONS(1119),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [393] = {
    [sym_docker_variable] = STATE(68),
    [anon_sym_LBRACE] = ACTIONS(1121),
    [sym__docker_variable] = ACTIONS(1123),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [394] = {
    [sym_docker_variable] = STATE(512),
    [anon_sym_LBRACE] = ACTIONS(1125),
    [sym__docker_variable] = ACTIONS(1127),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [395] = {
    [sym_docker_variable] = STATE(378),
    [anon_sym_LBRACE] = ACTIONS(1129),
    [sym__docker_variable] = ACTIONS(1131),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [396] = {
    [sym_label_pair_eq] = STATE(159),
    [sym_label_key] = STATE(494),
    [aux_sym_env_key_token1] = ACTIONS(1133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [397] = {
    [sym_docker_variable] = STATE(114),
    [anon_sym_LBRACE] = ACTIONS(1135),
    [sym__docker_variable] = ACTIONS(1137),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [398] = {
    [sym_docker_variable] = STATE(354),
    [anon_sym_LBRACE] = ACTIONS(1139),
    [sym__docker_variable] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [sym_docker_variable] = STATE(221),
    [anon_sym_LBRACE] = ACTIONS(1121),
    [sym__docker_variable] = ACTIONS(1123),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [400] = {
    [sym_docker_variable] = STATE(292),
    [anon_sym_LBRACE] = ACTIONS(1129),
    [sym__docker_variable] = ACTIONS(1131),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [401] = {
    [anon_sym_DQUOTE] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_DASH] = ACTIONS(361),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [sym_docker_variable] = STATE(418),
    [anon_sym_LBRACE] = ACTIONS(1143),
    [sym__docker_variable] = ACTIONS(1145),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [403] = {
    [sym_env_pair_eq] = STATE(170),
    [sym_env_key] = STATE(508),
    [aux_sym_env_key_token1] = ACTIONS(1147),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [404] = {
    [sym_docker_variable] = STATE(102),
    [anon_sym_LBRACE] = ACTIONS(1135),
    [sym__docker_variable] = ACTIONS(1137),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [405] = {
    [anon_sym_DOLLAR] = ACTIONS(1149),
    [aux_sym_port_protocol_token1] = ACTIONS(1151),
    [aux_sym_port_protocol_token2] = ACTIONS(1151),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [406] = {
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_COLON] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [407] = {
    [anon_sym_DQUOTE] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [anon_sym_DOLLAR] = ACTIONS(1153),
    [aux_sym_path_token3] = ACTIONS(1155),
    [aux_sym_path_token4] = ACTIONS(1157),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [sym_docker_variable] = STATE(377),
    [anon_sym_LBRACE] = ACTIONS(1113),
    [sym__docker_variable] = ACTIONS(1115),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [sym_docker_variable] = STATE(356),
    [anon_sym_LBRACE] = ACTIONS(1139),
    [sym__docker_variable] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [sym_docker_variable] = STATE(71),
    [anon_sym_LBRACE] = ACTIONS(1105),
    [sym__docker_variable] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [sym_docker_variable] = STATE(17),
    [anon_sym_LBRACE] = ACTIONS(1105),
    [sym__docker_variable] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [sym_platform] = STATE(231),
    [anon_sym_DOLLAR] = ACTIONS(1159),
    [aux_sym_from_layer_token1] = ACTIONS(1161),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [sym_docker_variable] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(1121),
    [sym__docker_variable] = ACTIONS(1123),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [sym_docker_variable] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(1109),
    [sym__docker_variable] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [anon_sym_DOLLAR] = ACTIONS(1163),
    [aux_sym_path_token3] = ACTIONS(1165),
    [aux_sym_path_token4] = ACTIONS(1167),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [sym_docker_variable] = STATE(338),
    [anon_sym_LBRACE] = ACTIONS(1143),
    [sym__docker_variable] = ACTIONS(1145),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [418] = {
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [sym_signal_name] = STATE(200),
    [sym_signal_num] = ACTIONS(1169),
    [aux_sym_signal_name_token1] = ACTIONS(1171),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [sym_docker_variable] = STATE(101),
    [anon_sym_LBRACE] = ACTIONS(1173),
    [sym__docker_variable] = ACTIONS(1175),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [anon_sym_DOLLAR] = ACTIONS(1177),
    [aux_sym_port_protocol_token1] = ACTIONS(1179),
    [aux_sym_port_protocol_token2] = ACTIONS(1179),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [sym__port_part] = STATE(110),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym__port_part_token1] = ACTIONS(133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [423] = {
    [sym_docker_variable] = STATE(375),
    [anon_sym_LBRACE] = ACTIONS(1139),
    [sym__docker_variable] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [sym_docker_variable] = STATE(275),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [sym__docker_variable] = ACTIONS(1183),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [anon_sym_DQUOTE] = ACTIONS(379),
    [anon_sym_COLON] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(1185),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [sym_docker_variable] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(1117),
    [sym__docker_variable] = ACTIONS(1119),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [sym_docker_variable] = STATE(129),
    [anon_sym_LBRACE] = ACTIONS(1173),
    [sym__docker_variable] = ACTIONS(1175),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [sym__port_part] = STATE(429),
    [anon_sym_DOLLAR] = ACTIONS(862),
    [aux_sym__port_part_token1] = ACTIONS(864),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_COLON] = ACTIONS(447),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [anon_sym_DQUOTE] = ACTIONS(597),
    [anon_sym_COLON] = ACTIONS(597),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [aux_sym__anything] = STATE(135),
    [aux_sym__anything_token1] = ACTIONS(1187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [anon_sym_EQ2] = ACTIONS(1189),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1189),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [anon_sym_EQ2] = ACTIONS(1191),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1193),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [anon_sym_COLON] = ACTIONS(1195),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1197),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [435] = {
    [anon_sym_COLON] = ACTIONS(1199),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1197),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [sym_env_value] = STATE(174),
    [aux_sym_env_value_token1] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [aux_sym__anything] = STATE(151),
    [aux_sym__anything_token1] = ACTIONS(1203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [anon_sym_DQUOTE] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(1205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [anon_sym_DQUOTE] = ACTIONS(1207),
    [anon_sym_COLON] = ACTIONS(1210),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [sym_hc_interval] = STATE(325),
    [aux_sym_hc_interval_token1] = ACTIONS(1212),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [anon_sym_COLON] = ACTIONS(597),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(597),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [anon_sym_COLON] = ACTIONS(605),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [sym_hc_timeout] = STATE(323),
    [aux_sym_hc_interval_token1] = ACTIONS(1214),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [sym_hc_start_period] = STATE(318),
    [aux_sym_hc_interval_token1] = ACTIONS(1216),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [sym_hc_retries] = STATE(312),
    [aux_sym__port_part_token1] = ACTIONS(1218),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [sym_label_value] = STATE(167),
    [aux_sym_env_value_token1] = ACTIONS(1220),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [aux_sym__anything] = STATE(145),
    [aux_sym__anything_token1] = ACTIONS(1203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [anon_sym_DQUOTE] = ACTIONS(1222),
    [anon_sym_COLON] = ACTIONS(1224),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [anon_sym_DQUOTE] = ACTIONS(1222),
    [anon_sym_COLON] = ACTIONS(1226),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [sym_user_group] = STATE(211),
    [aux_sym_user_name_token1] = ACTIONS(1228),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [sym_user_group_id] = STATE(211),
    [aux_sym_user_id_token1] = ACTIONS(1230),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [anon_sym_DQUOTE] = ACTIONS(605),
    [anon_sym_COLON] = ACTIONS(605),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_COLON] = ACTIONS(443),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [sym_user_group_id] = STATE(474),
    [aux_sym_user_id_token1] = ACTIONS(1232),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [sym_user_group] = STATE(474),
    [aux_sym_user_name_token1] = ACTIONS(1234),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [sym_user_group_id] = STATE(489),
    [aux_sym_user_id_token1] = ACTIONS(1236),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [457] = {
    [sym_user_group] = STATE(489),
    [aux_sym_user_name_token1] = ACTIONS(1238),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [458] = {
    [aux_sym_from_layer_token6] = ACTIONS(1240),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [459] = {
    [aux_sym_from_layer_token10] = ACTIONS(1242),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [sym_template_expr_curly_braces] = ACTIONS(1244),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [anon_sym_SLASH] = ACTIONS(1064),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [anon_sym_DQUOTE] = ACTIONS(481),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [aux_sym_from_layer_token14] = ACTIONS(1246),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [464] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(657),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(649),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [aux_sym_from_layer_token10] = ACTIONS(1248),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [aux_sym_from_layer_token6] = ACTIONS(1250),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1252),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [aux_sym_from_token2] = ACTIONS(1254),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1256),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [anon_sym_RBRACE] = ACTIONS(1258),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [anon_sym_RBRACE] = ACTIONS(1260),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [473] = {
    [anon_sym_DQUOTE] = ACTIONS(1262),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [anon_sym_DQUOTE] = ACTIONS(1264),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [aux_sym_from_layer_token14] = ACTIONS(1266),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [aux_sym_from_layer_token10] = ACTIONS(1268),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [477] = {
    [aux_sym_from_layer_token6] = ACTIONS(1270),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [478] = {
    [aux_sym_from_layer_token14] = ACTIONS(1272),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1274),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [480] = {
    [aux_sym_from_token2] = ACTIONS(1276),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [anon_sym_SLASH] = ACTIONS(944),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1278),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [483] = {
    [anon_sym_DQUOTE] = ACTIONS(657),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [anon_sym_DQUOTE] = ACTIONS(649),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [sym_template_expr_percent_signs] = ACTIONS(1280),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [sym_template_expr_curly_braces] = ACTIONS(1282),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [aux_sym_from_token2] = ACTIONS(1284),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1286),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1288),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [anon_sym_RBRACE] = ACTIONS(1290),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1292),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [492] = {
    [aux_sym_from_layer_token14] = ACTIONS(1294),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [493] = {
    [anon_sym_DQUOTE] = ACTIONS(977),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [anon_sym_EQ2] = ACTIONS(1191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1296),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [496] = {
    [sym_template_expr_percent_signs] = ACTIONS(1298),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [sym_template_expr_curly_braces] = ACTIONS(1300),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [sym_template_expr_percent_signs] = ACTIONS(1302),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [499] = {
    [sym_template_expr_curly_braces] = ACTIONS(1304),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [500] = {
    [aux_sym_from_layer_token14] = ACTIONS(1306),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [aux_sym_from_layer_token10] = ACTIONS(1308),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [502] = {
    [aux_sym_from_layer_token6] = ACTIONS(1310),
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
    [aux_sym_from_layer_token14] = ACTIONS(1314),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [505] = {
    [aux_sym_from_layer_token10] = ACTIONS(1316),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [506] = {
    [aux_sym_from_layer_token6] = ACTIONS(1318),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [507] = {
    [anon_sym_DQUOTE] = ACTIONS(1320),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [508] = {
    [anon_sym_EQ2] = ACTIONS(511),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [509] = {
    [aux_sym_from_layer_token14] = ACTIONS(1322),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [aux_sym_from_layer_token10] = ACTIONS(1324),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [511] = {
    [aux_sym_from_layer_token6] = ACTIONS(1326),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [512] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1328),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [513] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [514] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [515] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(199),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [516] = {
    [aux_sym_from_token2] = ACTIONS(1330),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [517] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1332),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [518] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1334),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [519] = {
    [aux_sym_from_token2] = ACTIONS(1336),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [520] = {
    [anon_sym_SLASH] = ACTIONS(1338),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [521] = {
    [aux_sym_from_layer_token10] = ACTIONS(1340),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [522] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1342),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [523] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1344),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [524] = {
    [aux_sym_from_token2] = ACTIONS(1346),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [525] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1348),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [526] = {
    [aux_sym_from_token2] = ACTIONS(1350),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [527] = {
    [sym_template_expr_percent_signs] = ACTIONS(1352),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [528] = {
    [sym_template_expr_curly_braces] = ACTIONS(1354),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [529] = {
    [anon_sym_SLASH] = ACTIONS(1356),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [530] = {
    [sym_template_expr_percent_signs] = ACTIONS(1358),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [531] = {
    [sym_template_expr_curly_braces] = ACTIONS(1360),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [532] = {
    [sym_arg_name] = ACTIONS(1362),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [533] = {
    [sym_template_expr_percent_signs] = ACTIONS(1364),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [534] = {
    [aux_sym_from_layer_token6] = ACTIONS(1366),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [535] = {
    [anon_sym_EQ2] = ACTIONS(1189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [536] = {
    [anon_sym_DQUOTE] = ACTIONS(1368),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [537] = {
    [anon_sym_DQUOTE] = ACTIONS(1370),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [538] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1372),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [539] = {
    [aux_sym_from_token2] = ACTIONS(1374),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [540] = {
    [anon_sym_DQUOTE] = ACTIONS(1376),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [541] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1378),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [542] = {
    [sym_template_expr_percent_signs] = ACTIONS(1380),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [543] = {
    [anon_sym_DQUOTE] = ACTIONS(1075),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [544] = {
    [sym_template_expr_curly_braces] = ACTIONS(1382),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [545] = {
    [anon_sym_RBRACE] = ACTIONS(1384),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [546] = {
    [anon_sym_DQUOTE] = ACTIONS(1386),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [547] = {
    [aux_sym_from_layer_token6] = ACTIONS(1388),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [548] = {
    [aux_sym_from_layer_token10] = ACTIONS(1390),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [549] = {
    [aux_sym_from_layer_token14] = ACTIONS(1392),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [550] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1394),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [551] = {
    [anon_sym_EQ2] = ACTIONS(541),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [552] = {
    [anon_sym_RBRACE] = ACTIONS(1396),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [553] = {
    [aux_sym_from_layer_token6] = ACTIONS(1398),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [554] = {
    [aux_sym_from_layer_token10] = ACTIONS(1400),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [555] = {
    [aux_sym_from_layer_token14] = ACTIONS(1402),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [556] = {
    [aux_sym_from_layer_token6] = ACTIONS(1404),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [557] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1406),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [558] = {
    [anon_sym_RBRACE] = ACTIONS(1408),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [559] = {
    [aux_sym_from_layer_token6] = ACTIONS(1410),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [560] = {
    [aux_sym_from_layer_token10] = ACTIONS(1412),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [561] = {
    [aux_sym_from_layer_token14] = ACTIONS(1414),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [562] = {
    [sym_arg_default] = ACTIONS(1416),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [563] = {
    [sym__docker_variable] = ACTIONS(1418),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [564] = {
    [anon_sym_RBRACE] = ACTIONS(1420),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [565] = {
    [aux_sym_from_layer_token6] = ACTIONS(1422),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [566] = {
    [aux_sym_from_layer_token10] = ACTIONS(1424),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [567] = {
    [aux_sym_from_layer_token14] = ACTIONS(1426),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [568] = {
    [anon_sym_DQUOTE] = ACTIONS(1428),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [569] = {
    [anon_sym_RBRACE] = ACTIONS(1430),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [570] = {
    [aux_sym_signal_name_token2] = ACTIONS(1432),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [571] = {
    [anon_sym_RBRACE] = ACTIONS(1434),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [572] = {
    [aux_sym_from_layer_token14] = ACTIONS(1436),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [573] = {
    [anon_sym_RBRACE] = ACTIONS(1438),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [574] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1440),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [575] = {
    [anon_sym_RBRACE] = ACTIONS(1442),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [576] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1444),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [577] = {
    [anon_sym_RBRACE] = ACTIONS(1446),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [578] = {
    [anon_sym_EQ] = ACTIONS(1448),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [579] = {
    [anon_sym_RBRACE] = ACTIONS(1450),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [580] = {
    [anon_sym_EQ] = ACTIONS(1452),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [581] = {
    [anon_sym_RBRACE] = ACTIONS(1454),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [582] = {
    [anon_sym_EQ] = ACTIONS(1456),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [583] = {
    [anon_sym_EQ] = ACTIONS(1458),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [584] = {
    [sym__docker_variable] = ACTIONS(1460),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [585] = {
    [sym_template_expr_percent_signs] = ACTIONS(1462),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [586] = {
    [sym_template_expr_curly_braces] = ACTIONS(1464),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [587] = {
    [sym_template_expr_percent_signs] = ACTIONS(1466),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [588] = {
    [sym_template_expr_curly_braces] = ACTIONS(1468),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [589] = {
    [sym__docker_variable] = ACTIONS(1470),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [590] = {
    [sym_template_expr_curly_braces] = ACTIONS(1472),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [591] = {
    [sym_template_expr_percent_signs] = ACTIONS(1474),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [592] = {
    [ts_builtin_sym_end] = ACTIONS(1476),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [593] = {
    [sym__docker_variable] = ACTIONS(1478),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [594] = {
    [sym_template_expr_curly_braces] = ACTIONS(1480),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [595] = {
    [sym_template_expr_percent_signs] = ACTIONS(1482),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [596] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1484),
    [sym_line_continuation] = ACTIONS(5),
  },
  [597] = {
    [sym__docker_variable] = ACTIONS(1486),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [598] = {
    [sym_template_expr_curly_braces] = ACTIONS(1488),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [599] = {
    [sym_template_expr_percent_signs] = ACTIONS(1490),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [600] = {
    [aux_sym_from_layer_token10] = ACTIONS(1492),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [601] = {
    [sym__docker_variable] = ACTIONS(1494),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [602] = {
    [sym__docker_variable] = ACTIONS(1496),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [603] = {
    [sym__docker_variable] = ACTIONS(1498),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [604] = {
    [sym__docker_variable] = ACTIONS(1500),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [605] = {
    [sym__docker_variable] = ACTIONS(1502),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [606] = {
    [sym__docker_variable] = ACTIONS(1504),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [607] = {
    [sym__docker_variable] = ACTIONS(1506),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(285),
  [13] = {.count = 1, .reusable = true}, SHIFT(532),
  [15] = {.count = 1, .reusable = true}, SHIFT(368),
  [17] = {.count = 1, .reusable = true}, SHIFT(233),
  [19] = {.count = 1, .reusable = true}, SHIFT(369),
  [21] = {.count = 1, .reusable = true}, SHIFT(295),
  [23] = {.count = 1, .reusable = true}, SHIFT(229),
  [25] = {.count = 1, .reusable = true}, SHIFT(227),
  [27] = {.count = 1, .reusable = true}, SHIFT(228),
  [29] = {.count = 1, .reusable = true}, SHIFT(302),
  [31] = {.count = 1, .reusable = true}, SHIFT(431),
  [33] = {.count = 1, .reusable = true}, SHIFT(6),
  [35] = {.count = 1, .reusable = true}, SHIFT(376),
  [37] = {.count = 1, .reusable = true}, SHIFT(596),
  [39] = {.count = 1, .reusable = true}, SHIFT(419),
  [41] = {.count = 1, .reusable = true}, SHIFT(290),
  [43] = {.count = 1, .reusable = true}, SHIFT(284),
  [45] = {.count = 1, .reusable = true}, SHIFT(315),
  [47] = {.count = 1, .reusable = false}, SHIFT(225),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(285),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(532),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(368),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(233),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(369),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(295),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(229),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(227),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(228),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(302),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(431),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(6),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(376),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(596),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(419),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(290),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(284),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(315),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(225),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1),
  [110] = {.count = 1, .reusable = true}, SHIFT(225),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 2, .production_id = 3),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(271),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(414),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(41),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [129] = {.count = 1, .reusable = true}, SHIFT(271),
  [131] = {.count = 1, .reusable = true}, SHIFT(414),
  [133] = {.count = 1, .reusable = true}, SHIFT(41),
  [135] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 2),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(485),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [146] = {.count = 1, .reusable = false}, SHIFT(69),
  [148] = {.count = 1, .reusable = true}, SHIFT(294),
  [150] = {.count = 1, .reusable = true}, SHIFT(273),
  [152] = {.count = 1, .reusable = true}, SHIFT(485),
  [154] = {.count = 1, .reusable = true}, SHIFT(486),
  [156] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [158] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(388),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [167] = {.count = 1, .reusable = false}, SHIFT(75),
  [169] = {.count = 1, .reusable = true}, SHIFT(277),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [175] = {.count = 1, .reusable = true}, SHIFT(388),
  [177] = {.count = 1, .reusable = false}, SHIFT(76),
  [179] = {.count = 1, .reusable = true}, SHIFT(270),
  [181] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 2),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(486),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2),
  [190] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 2),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(294),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [211] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [213] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [215] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [217] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [219] = {.count = 1, .reusable = false}, SHIFT(117),
  [221] = {.count = 1, .reusable = true}, SHIFT(591),
  [223] = {.count = 1, .reusable = false}, SHIFT(120),
  [225] = {.count = 1, .reusable = true}, SHIFT(311),
  [227] = {.count = 1, .reusable = true}, SHIFT(392),
  [229] = {.count = 1, .reusable = false}, SHIFT(125),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(392),
  [234] = {.count = 1, .reusable = true}, SHIFT(590),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [238] = {.count = 1, .reusable = true}, SHIFT(421),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(590),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(591),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(311),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [255] = {.count = 1, .reusable = false}, SHIFT(150),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 2),
  [259] = {.count = 1, .reusable = true}, SHIFT(416),
  [261] = {.count = 1, .reusable = true}, SHIFT(415),
  [263] = {.count = 1, .reusable = false}, SHIFT(70),
  [265] = {.count = 1, .reusable = false}, SHIFT(415),
  [267] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(416),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(415),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(70),
  [278] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(415),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [283] = {.count = 1, .reusable = true}, SHIFT(390),
  [285] = {.count = 1, .reusable = false}, SHIFT(79),
  [287] = {.count = 1, .reusable = false}, SHIFT(390),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_path, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [295] = {.count = 1, .reusable = false}, SHIFT(156),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [301] = {.count = 1, .reusable = false}, SHIFT(148),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [305] = {.count = 1, .reusable = false}, SHIFT(73),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 2),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [313] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(390),
  [318] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2),
  [320] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(390),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_add, 2),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [331] = {.count = 1, .reusable = true}, SHIFT(279),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [341] = {.count = 1, .reusable = false}, SHIFT(172),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [347] = {.count = 1, .reusable = false}, SHIFT(176),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_path, 4),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_path, 4),
  [353] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [355] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [357] = {.count = 1, .reusable = false}, SHIFT(98),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [367] = {.count = 1, .reusable = true}, SHIFT(272),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_path, 6),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_path, 6),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [377] = {.count = 1, .reusable = false}, SHIFT(158),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [381] = {.count = 1, .reusable = true}, SHIFT(422),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_path, 5),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_path, 5),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [389] = {.count = 1, .reusable = true}, SHIFT(289),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [395] = {.count = 1, .reusable = false}, SHIFT(216),
  [397] = {.count = 1, .reusable = true}, SHIFT(599),
  [399] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(599),
  [402] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [404] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(358),
  [407] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(427),
  [410] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(427),
  [413] = {.count = 1, .reusable = true}, SHIFT(427),
  [415] = {.count = 1, .reusable = false}, SHIFT(220),
  [417] = {.count = 1, .reusable = false}, SHIFT(427),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [423] = {.count = 1, .reusable = true}, SHIFT(397),
  [425] = {.count = 1, .reusable = false}, SHIFT(198),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [431] = {.count = 1, .reusable = false}, SHIFT(184),
  [433] = {.count = 1, .reusable = true}, SHIFT(358),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(397),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(598),
  [441] = {.count = 1, .reusable = true}, SHIFT(598),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [445] = {.count = 1, .reusable = false}, SHIFT(219),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [451] = {.count = 1, .reusable = true}, SHIFT(262),
  [453] = {.count = 1, .reusable = true}, SHIFT(236),
  [455] = {.count = 1, .reusable = false}, SHIFT(469),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [459] = {.count = 1, .reusable = true}, SHIFT(251),
  [461] = {.count = 1, .reusable = true}, SHIFT(235),
  [463] = {.count = 1, .reusable = false}, SHIFT(503),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [467] = {.count = 1, .reusable = true}, SHIFT(258),
  [469] = {.count = 1, .reusable = true}, SHIFT(238),
  [471] = {.count = 1, .reusable = false}, SHIFT(526),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [475] = {.count = 1, .reusable = true}, SHIFT(265),
  [477] = {.count = 1, .reusable = true}, SHIFT(240),
  [479] = {.count = 1, .reusable = false}, SHIFT(487),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [483] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 2),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 2),
  [489] = {.count = 1, .reusable = false}, SHIFT(160),
  [491] = {.count = 1, .reusable = true}, SHIFT(222),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym__labels, 2),
  [495] = {.count = 1, .reusable = false}, SHIFT(396),
  [497] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels_repeat1, 2),
  [499] = {.count = 2, .reusable = false}, REDUCE(aux_sym__labels_repeat1, 2), SHIFT_REPEAT(396),
  [502] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [504] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [506] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(160),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 1),
  [511] = {.count = 1, .reusable = true}, SHIFT(436),
  [513] = {.count = 1, .reusable = false}, SHIFT(437),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [517] = {.count = 1, .reusable = true}, SHIFT(234),
  [519] = {.count = 1, .reusable = false}, SHIFT(524),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [523] = {.count = 1, .reusable = true}, SHIFT(243),
  [525] = {.count = 1, .reusable = false}, SHIFT(519),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3, .production_id = 6),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3, .production_id = 6),
  [535] = {.count = 1, .reusable = false}, SHIFT(178),
  [537] = {.count = 1, .reusable = false}, SHIFT(403),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym__labels, 1),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_env_key, 1),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym_env_key, 1),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 5),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3, .production_id = 5),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 2),
  [555] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [557] = {.count = 2, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2), SHIFT_REPEAT(403),
  [560] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(178),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 1),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 1),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [573] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [575] = {.count = 1, .reusable = false}, REDUCE(aux_sym__labels_repeat1, 2),
  [577] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [579] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [583] = {.count = 1, .reusable = false}, SHIFT(539),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [587] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [591] = {.count = 1, .reusable = false}, SHIFT(516),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair_eq, 3),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair_eq, 3),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_user, 2),
  [601] = {.count = 1, .reusable = true}, SHIFT(450),
  [603] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [609] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair_eq, 3),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair_eq, 3),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [617] = {.count = 1, .reusable = true}, SHIFT(562),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [621] = {.count = 1, .reusable = false}, SHIFT(480),
  [623] = {.count = 1, .reusable = true}, SHIFT(451),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 2),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 2),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 2),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_user, 6),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 2),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 2),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym_run, 2),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 2),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_env, 2),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 2),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [681] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [683] = {.count = 1, .reusable = true}, SHIFT(413),
  [685] = {.count = 1, .reusable = true}, SHIFT(412),
  [687] = {.count = 1, .reusable = false}, SHIFT(86),
  [689] = {.count = 1, .reusable = true}, SHIFT(588),
  [691] = {.count = 1, .reusable = true}, SHIFT(585),
  [693] = {.count = 1, .reusable = true}, SHIFT(330),
  [695] = {.count = 1, .reusable = true}, SHIFT(217),
  [697] = {.count = 1, .reusable = true}, SHIFT(583),
  [699] = {.count = 1, .reusable = true}, SHIFT(582),
  [701] = {.count = 1, .reusable = true}, SHIFT(580),
  [703] = {.count = 1, .reusable = true}, SHIFT(578),
  [705] = {.count = 1, .reusable = true}, SHIFT(576),
  [707] = {.count = 1, .reusable = true}, SHIFT(286),
  [709] = {.count = 1, .reusable = true}, SHIFT(291),
  [711] = {.count = 1, .reusable = true}, SHIFT(260),
  [713] = {.count = 1, .reusable = true}, SHIFT(186),
  [715] = {.count = 1, .reusable = true}, SHIFT(190),
  [717] = {.count = 1, .reusable = true}, SHIFT(250),
  [719] = {.count = 1, .reusable = true}, SHIFT(411),
  [721] = {.count = 1, .reusable = false}, SHIFT(165),
  [723] = {.count = 1, .reusable = true}, SHIFT(497),
  [725] = {.count = 1, .reusable = true}, SHIFT(496),
  [727] = {.count = 1, .reusable = true}, SHIFT(293),
  [729] = {.count = 1, .reusable = true}, SHIFT(254),
  [731] = {.count = 1, .reusable = true}, SHIFT(255),
  [733] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(400),
  [736] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(529),
  [739] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(528),
  [742] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(527),
  [745] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(360),
  [748] = {.count = 1, .reusable = true}, SHIFT(264),
  [750] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(583),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(582),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(580),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(578),
  [762] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [764] = {.count = 1, .reusable = true}, SHIFT(247),
  [766] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(400),
  [769] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(529),
  [772] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(528),
  [775] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(527),
  [778] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(360),
  [781] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(400),
  [784] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(529),
  [787] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(528),
  [790] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(527),
  [793] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(360),
  [796] = {.count = 1, .reusable = true}, SHIFT(263),
  [798] = {.count = 1, .reusable = true}, SHIFT(404),
  [800] = {.count = 1, .reusable = false}, SHIFT(223),
  [802] = {.count = 1, .reusable = true}, SHIFT(460),
  [804] = {.count = 1, .reusable = true}, SHIFT(533),
  [806] = {.count = 1, .reusable = true}, SHIFT(361),
  [808] = {.count = 1, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2),
  [810] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(291),
  [813] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(260),
  [816] = {.count = 1, .reusable = false}, REDUCE(aux_sym_copy_repeat1, 2),
  [818] = {.count = 1, .reusable = true}, SHIFT(426),
  [820] = {.count = 1, .reusable = false}, SHIFT(134),
  [822] = {.count = 1, .reusable = true}, SHIFT(531),
  [824] = {.count = 1, .reusable = true}, SHIFT(530),
  [826] = {.count = 1, .reusable = true}, SHIFT(359),
  [828] = {.count = 1, .reusable = true}, SHIFT(389),
  [830] = {.count = 1, .reusable = false}, SHIFT(144),
  [832] = {.count = 1, .reusable = true}, SHIFT(499),
  [834] = {.count = 1, .reusable = true}, SHIFT(498),
  [836] = {.count = 1, .reusable = true}, SHIFT(331),
  [838] = {.count = 1, .reusable = true}, SHIFT(391),
  [840] = {.count = 1, .reusable = false}, SHIFT(550),
  [842] = {.count = 1, .reusable = true}, SHIFT(544),
  [844] = {.count = 1, .reusable = true}, SHIFT(542),
  [846] = {.count = 1, .reusable = true}, SHIFT(352),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [850] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [854] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [858] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [860] = {.count = 1, .reusable = true}, SHIFT(357),
  [862] = {.count = 1, .reusable = true}, SHIFT(417),
  [864] = {.count = 1, .reusable = true}, SHIFT(296),
  [866] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [868] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [870] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [872] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [874] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [876] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [878] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [880] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [882] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [884] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [886] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [888] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [890] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [892] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [894] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [896] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [898] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [900] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [902] = {.count = 1, .reusable = true}, REDUCE(sym__from_layer, 3),
  [904] = {.count = 1, .reusable = false}, REDUCE(sym__from_layer, 3),
  [906] = {.count = 1, .reusable = true}, SHIFT(194),
  [908] = {.count = 1, .reusable = true}, SHIFT(185),
  [910] = {.count = 1, .reusable = true}, SHIFT(328),
  [912] = {.count = 1, .reusable = true}, REDUCE(sym__chown, 3),
  [914] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 3),
  [916] = {.count = 1, .reusable = true}, SHIFT(387),
  [918] = {.count = 1, .reusable = true}, SHIFT(399),
  [920] = {.count = 1, .reusable = true}, SHIFT(168),
  [922] = {.count = 1, .reusable = true}, SHIFT(171),
  [924] = {.count = 1, .reusable = true}, SHIFT(394),
  [926] = {.count = 1, .reusable = true}, SHIFT(441),
  [928] = {.count = 1, .reusable = true}, SHIFT(442),
  [930] = {.count = 1, .reusable = true}, SHIFT(395),
  [932] = {.count = 1, .reusable = false}, SHIFT(481),
  [934] = {.count = 1, .reusable = true}, SHIFT(268),
  [936] = {.count = 1, .reusable = true}, SHIFT(308),
  [938] = {.count = 1, .reusable = true}, SHIFT(149),
  [940] = {.count = 1, .reusable = true}, SHIFT(405),
  [942] = {.count = 1, .reusable = false}, SHIFT(461),
  [944] = {.count = 1, .reusable = true}, SHIFT(269),
  [946] = {.count = 1, .reusable = true}, SHIFT(594),
  [948] = {.count = 1, .reusable = true}, SHIFT(595),
  [950] = {.count = 1, .reusable = true}, SHIFT(310),
  [952] = {.count = 1, .reusable = true}, SHIFT(409),
  [954] = {.count = 1, .reusable = false}, SHIFT(470),
  [956] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 3),
  [958] = {.count = 1, .reusable = true}, SHIFT(432),
  [960] = {.count = 1, .reusable = true}, SHIFT(587),
  [962] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(316),
  [965] = {.count = 1, .reusable = true}, SHIFT(586),
  [967] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(587),
  [970] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(586),
  [973] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [975] = {.count = 1, .reusable = true}, SHIFT(347),
  [977] = {.count = 1, .reusable = true}, SHIFT(94),
  [979] = {.count = 1, .reusable = true}, SHIFT(423),
  [981] = {.count = 1, .reusable = false}, SHIFT(473),
  [983] = {.count = 1, .reusable = false}, SHIFT(423),
  [985] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [987] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(409),
  [990] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2),
  [992] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(423),
  [995] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2),
  [997] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(423),
  [1000] = {.count = 1, .reusable = true}, SHIFT(408),
  [1002] = {.count = 1, .reusable = true}, SHIFT(420),
  [1004] = {.count = 1, .reusable = false}, SHIFT(199),
  [1006] = {.count = 1, .reusable = false}, SHIFT(420),
  [1008] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [1010] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [1012] = {.count = 1, .reusable = false}, SHIFT(517),
  [1014] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 4),
  [1016] = {.count = 1, .reusable = true}, SHIFT(316),
  [1018] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [1020] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [1022] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [1024] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [1026] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [1028] = {.count = 1, .reusable = true}, SHIFT(208),
  [1030] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(395),
  [1033] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(594),
  [1036] = {.count = 1, .reusable = true}, SHIFT(131),
  [1038] = {.count = 1, .reusable = true}, SHIFT(479),
  [1040] = {.count = 1, .reusable = true}, SHIFT(491),
  [1042] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(595),
  [1045] = {.count = 1, .reusable = true}, SHIFT(371),
  [1047] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(310),
  [1050] = {.count = 1, .reusable = true}, SHIFT(52),
  [1052] = {.count = 1, .reusable = true}, SHIFT(282),
  [1054] = {.count = 1, .reusable = true}, SHIFT(363),
  [1056] = {.count = 1, .reusable = true}, SHIFT(385),
  [1058] = {.count = 1, .reusable = true}, SHIFT(514),
  [1060] = {.count = 1, .reusable = true}, SHIFT(384),
  [1062] = {.count = 1, .reusable = false}, SHIFT(520),
  [1064] = {.count = 1, .reusable = true}, SHIFT(280),
  [1066] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [1068] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(347),
  [1071] = {.count = 1, .reusable = true}, SHIFT(127),
  [1073] = {.count = 1, .reusable = true}, SHIFT(23),
  [1075] = {.count = 1, .reusable = true}, SHIFT(212),
  [1077] = {.count = 1, .reusable = false}, SHIFT(546),
  [1079] = {.count = 1, .reusable = false}, SHIFT(488),
  [1081] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 2),
  [1083] = {.count = 1, .reusable = true}, SHIFT(85),
  [1085] = {.count = 1, .reusable = true}, SHIFT(73),
  [1087] = {.count = 1, .reusable = false}, SHIFT(493),
  [1089] = {.count = 1, .reusable = true}, SHIFT(57),
  [1091] = {.count = 1, .reusable = true}, SHIFT(219),
  [1093] = {.count = 1, .reusable = false}, SHIFT(543),
  [1095] = {.count = 1, .reusable = true}, SHIFT(188),
  [1097] = {.count = 1, .reusable = true}, SHIFT(181),
  [1099] = {.count = 1, .reusable = true}, SHIFT(203),
  [1101] = {.count = 1, .reusable = true}, SHIFT(430),
  [1103] = {.count = 1, .reusable = true}, SHIFT(452),
  [1105] = {.count = 1, .reusable = true}, SHIFT(589),
  [1107] = {.count = 1, .reusable = true}, SHIFT(21),
  [1109] = {.count = 1, .reusable = true}, SHIFT(563),
  [1111] = {.count = 1, .reusable = true}, SHIFT(92),
  [1113] = {.count = 1, .reusable = true}, SHIFT(602),
  [1115] = {.count = 1, .reusable = true}, SHIFT(386),
  [1117] = {.count = 1, .reusable = true}, SHIFT(605),
  [1119] = {.count = 1, .reusable = true}, SHIFT(54),
  [1121] = {.count = 1, .reusable = true}, SHIFT(584),
  [1123] = {.count = 1, .reusable = true}, SHIFT(42),
  [1125] = {.count = 1, .reusable = true}, SHIFT(601),
  [1127] = {.count = 1, .reusable = true}, SHIFT(513),
  [1129] = {.count = 1, .reusable = true}, SHIFT(606),
  [1131] = {.count = 1, .reusable = true}, SHIFT(367),
  [1133] = {.count = 1, .reusable = true}, SHIFT(535),
  [1135] = {.count = 1, .reusable = true}, SHIFT(607),
  [1137] = {.count = 1, .reusable = true}, SHIFT(132),
  [1139] = {.count = 1, .reusable = true}, SHIFT(597),
  [1141] = {.count = 1, .reusable = true}, SHIFT(383),
  [1143] = {.count = 1, .reusable = true}, SHIFT(603),
  [1145] = {.count = 1, .reusable = true}, SHIFT(374),
  [1147] = {.count = 1, .reusable = true}, SHIFT(551),
  [1149] = {.count = 1, .reusable = true}, SHIFT(402),
  [1151] = {.count = 1, .reusable = true}, SHIFT(407),
  [1153] = {.count = 1, .reusable = true}, SHIFT(410),
  [1155] = {.count = 1, .reusable = false}, SHIFT(536),
  [1157] = {.count = 1, .reusable = false}, SHIFT(410),
  [1159] = {.count = 1, .reusable = true}, SHIFT(424),
  [1161] = {.count = 1, .reusable = true}, SHIFT(276),
  [1163] = {.count = 1, .reusable = true}, SHIFT(398),
  [1165] = {.count = 1, .reusable = false}, SHIFT(568),
  [1167] = {.count = 1, .reusable = false}, SHIFT(398),
  [1169] = {.count = 1, .reusable = true}, SHIFT(200),
  [1171] = {.count = 1, .reusable = true}, SHIFT(570),
  [1173] = {.count = 1, .reusable = true}, SHIFT(593),
  [1175] = {.count = 1, .reusable = true}, SHIFT(128),
  [1177] = {.count = 1, .reusable = true}, SHIFT(393),
  [1179] = {.count = 1, .reusable = true}, SHIFT(82),
  [1181] = {.count = 1, .reusable = true}, SHIFT(604),
  [1183] = {.count = 1, .reusable = true}, SHIFT(281),
  [1185] = {.count = 1, .reusable = true}, SHIFT(428),
  [1187] = {.count = 1, .reusable = true}, SHIFT(160),
  [1189] = {.count = 1, .reusable = true}, REDUCE(sym_label_key, 1),
  [1191] = {.count = 1, .reusable = true}, SHIFT(446),
  [1193] = {.count = 1, .reusable = true}, SHIFT(447),
  [1195] = {.count = 1, .reusable = true}, SHIFT(457),
  [1197] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 1),
  [1199] = {.count = 1, .reusable = true}, SHIFT(456),
  [1201] = {.count = 1, .reusable = true}, SHIFT(157),
  [1203] = {.count = 1, .reusable = true}, SHIFT(178),
  [1205] = {.count = 1, .reusable = true}, SHIFT(287),
  [1207] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(108),
  [1210] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1212] = {.count = 1, .reusable = true}, SHIFT(326),
  [1214] = {.count = 1, .reusable = true}, SHIFT(324),
  [1216] = {.count = 1, .reusable = true}, SHIFT(322),
  [1218] = {.count = 1, .reusable = true}, SHIFT(317),
  [1220] = {.count = 1, .reusable = true}, SHIFT(173),
  [1222] = {.count = 1, .reusable = true}, SHIFT(211),
  [1224] = {.count = 1, .reusable = true}, SHIFT(455),
  [1226] = {.count = 1, .reusable = true}, SHIFT(454),
  [1228] = {.count = 1, .reusable = true}, SHIFT(205),
  [1230] = {.count = 1, .reusable = true}, SHIFT(201),
  [1232] = {.count = 1, .reusable = true}, SHIFT(484),
  [1234] = {.count = 1, .reusable = true}, SHIFT(483),
  [1236] = {.count = 1, .reusable = true}, SHIFT(465),
  [1238] = {.count = 1, .reusable = true}, SHIFT(464),
  [1240] = {.count = 1, .reusable = true}, SHIFT(50),
  [1242] = {.count = 1, .reusable = true}, SHIFT(15),
  [1244] = {.count = 1, .reusable = true}, SHIFT(556),
  [1246] = {.count = 1, .reusable = true}, SHIFT(27),
  [1248] = {.count = 1, .reusable = true}, SHIFT(26),
  [1250] = {.count = 1, .reusable = true}, SHIFT(25),
  [1252] = {.count = 1, .reusable = true}, SHIFT(253),
  [1254] = {.count = 1, .reusable = true}, SHIFT(518),
  [1256] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 4),
  [1258] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1260] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1262] = {.count = 1, .reusable = true}, SHIFT(87),
  [1264] = {.count = 1, .reusable = true}, SHIFT(195),
  [1266] = {.count = 1, .reusable = true}, SHIFT(78),
  [1268] = {.count = 1, .reusable = true}, SHIFT(81),
  [1270] = {.count = 1, .reusable = true}, SHIFT(72),
  [1272] = {.count = 1, .reusable = true}, SHIFT(62),
  [1274] = {.count = 1, .reusable = true}, SHIFT(472),
  [1276] = {.count = 1, .reusable = true}, SHIFT(574),
  [1278] = {.count = 1, .reusable = true}, SHIFT(252),
  [1280] = {.count = 1, .reusable = true}, SHIFT(466),
  [1282] = {.count = 1, .reusable = true}, SHIFT(467),
  [1284] = {.count = 1, .reusable = true}, SHIFT(468),
  [1286] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 3),
  [1288] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 3),
  [1290] = {.count = 1, .reusable = true}, SHIFT(93),
  [1292] = {.count = 1, .reusable = true}, SHIFT(471),
  [1294] = {.count = 1, .reusable = true}, SHIFT(16),
  [1296] = {.count = 1, .reusable = true}, SHIFT(256),
  [1298] = {.count = 1, .reusable = true}, SHIFT(476),
  [1300] = {.count = 1, .reusable = true}, SHIFT(477),
  [1302] = {.count = 1, .reusable = true}, SHIFT(521),
  [1304] = {.count = 1, .reusable = true}, SHIFT(458),
  [1306] = {.count = 1, .reusable = true}, SHIFT(300),
  [1308] = {.count = 1, .reusable = true}, SHIFT(299),
  [1310] = {.count = 1, .reusable = true}, SHIFT(298),
  [1312] = {.count = 1, .reusable = true}, SHIFT(482),
  [1314] = {.count = 1, .reusable = true}, SHIFT(30),
  [1316] = {.count = 1, .reusable = true}, SHIFT(29),
  [1318] = {.count = 1, .reusable = true}, SHIFT(37),
  [1320] = {.count = 1, .reusable = true}, SHIFT(453),
  [1322] = {.count = 1, .reusable = true}, SHIFT(362),
  [1324] = {.count = 1, .reusable = true}, SHIFT(303),
  [1326] = {.count = 1, .reusable = true}, SHIFT(305),
  [1328] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 2),
  [1330] = {.count = 1, .reusable = true}, SHIFT(538),
  [1332] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 5),
  [1334] = {.count = 1, .reusable = true}, SHIFT(244),
  [1336] = {.count = 1, .reusable = true}, SHIFT(525),
  [1338] = {.count = 1, .reusable = true}, SHIFT(274),
  [1340] = {.count = 1, .reusable = true}, SHIFT(61),
  [1342] = {.count = 1, .reusable = true}, SHIFT(248),
  [1344] = {.count = 1, .reusable = true}, SHIFT(259),
  [1346] = {.count = 1, .reusable = true}, SHIFT(522),
  [1348] = {.count = 1, .reusable = true}, SHIFT(249),
  [1350] = {.count = 1, .reusable = true}, SHIFT(495),
  [1352] = {.count = 1, .reusable = true}, SHIFT(501),
  [1354] = {.count = 1, .reusable = true}, SHIFT(502),
  [1356] = {.count = 1, .reusable = true}, SHIFT(278),
  [1358] = {.count = 1, .reusable = true}, SHIFT(505),
  [1360] = {.count = 1, .reusable = true}, SHIFT(506),
  [1362] = {.count = 1, .reusable = true}, SHIFT(177),
  [1364] = {.count = 1, .reusable = true}, SHIFT(600),
  [1366] = {.count = 1, .reusable = true}, SHIFT(14),
  [1368] = {.count = 1, .reusable = true}, SHIFT(220),
  [1370] = {.count = 1, .reusable = true}, SHIFT(124),
  [1372] = {.count = 1, .reusable = true}, SHIFT(261),
  [1374] = {.count = 1, .reusable = true}, SHIFT(523),
  [1376] = {.count = 1, .reusable = true}, SHIFT(108),
  [1378] = {.count = 1, .reusable = true}, SHIFT(283),
  [1380] = {.count = 1, .reusable = true}, SHIFT(510),
  [1382] = {.count = 1, .reusable = true}, SHIFT(511),
  [1384] = {.count = 1, .reusable = true}, SHIFT(55),
  [1386] = {.count = 1, .reusable = true}, SHIFT(213),
  [1388] = {.count = 1, .reusable = true}, SHIFT(373),
  [1390] = {.count = 1, .reusable = true}, SHIFT(370),
  [1392] = {.count = 1, .reusable = true}, SHIFT(366),
  [1394] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 1),
  [1396] = {.count = 1, .reusable = true}, SHIFT(22),
  [1398] = {.count = 1, .reusable = true}, SHIFT(45),
  [1400] = {.count = 1, .reusable = true}, SHIFT(47),
  [1402] = {.count = 1, .reusable = true}, SHIFT(48),
  [1404] = {.count = 1, .reusable = true}, SHIFT(112),
  [1406] = {.count = 1, .reusable = true}, SHIFT(288),
  [1408] = {.count = 1, .reusable = true}, SHIFT(126),
  [1410] = {.count = 1, .reusable = true}, SHIFT(379),
  [1412] = {.count = 1, .reusable = true}, SHIFT(380),
  [1414] = {.count = 1, .reusable = true}, SHIFT(382),
  [1416] = {.count = 1, .reusable = true}, SHIFT(187),
  [1418] = {.count = 1, .reusable = true}, SHIFT(353),
  [1420] = {.count = 1, .reusable = true}, SHIFT(364),
  [1422] = {.count = 1, .reusable = true}, SHIFT(118),
  [1424] = {.count = 1, .reusable = true}, SHIFT(133),
  [1426] = {.count = 1, .reusable = true}, SHIFT(115),
  [1428] = {.count = 1, .reusable = true}, SHIFT(79),
  [1430] = {.count = 1, .reusable = true}, SHIFT(515),
  [1432] = {.count = 1, .reusable = true}, SHIFT(182),
  [1434] = {.count = 1, .reusable = true}, SHIFT(381),
  [1436] = {.count = 1, .reusable = true}, SHIFT(113),
  [1438] = {.count = 1, .reusable = true}, SHIFT(365),
  [1440] = {.count = 1, .reusable = true}, SHIFT(266),
  [1442] = {.count = 1, .reusable = true}, SHIFT(267),
  [1444] = {.count = 1, .reusable = true}, SHIFT(327),
  [1446] = {.count = 1, .reusable = true}, SHIFT(51),
  [1448] = {.count = 1, .reusable = true}, SHIFT(445),
  [1450] = {.count = 1, .reusable = true}, SHIFT(372),
  [1452] = {.count = 1, .reusable = true}, SHIFT(444),
  [1454] = {.count = 1, .reusable = true}, SHIFT(130),
  [1456] = {.count = 1, .reusable = true}, SHIFT(443),
  [1458] = {.count = 1, .reusable = true}, SHIFT(440),
  [1460] = {.count = 1, .reusable = true}, SHIFT(355),
  [1462] = {.count = 1, .reusable = true}, SHIFT(459),
  [1464] = {.count = 1, .reusable = true}, SHIFT(547),
  [1466] = {.count = 1, .reusable = true}, SHIFT(548),
  [1468] = {.count = 1, .reusable = true}, SHIFT(534),
  [1470] = {.count = 1, .reusable = true}, SHIFT(349),
  [1472] = {.count = 1, .reusable = true}, SHIFT(553),
  [1474] = {.count = 1, .reusable = true}, SHIFT(554),
  [1476] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1478] = {.count = 1, .reusable = true}, SHIFT(348),
  [1480] = {.count = 1, .reusable = true}, SHIFT(559),
  [1482] = {.count = 1, .reusable = true}, SHIFT(560),
  [1484] = {.count = 1, .reusable = true}, SHIFT(202),
  [1486] = {.count = 1, .reusable = true}, SHIFT(343),
  [1488] = {.count = 1, .reusable = true}, SHIFT(565),
  [1490] = {.count = 1, .reusable = true}, SHIFT(566),
  [1492] = {.count = 1, .reusable = true}, SHIFT(96),
  [1494] = {.count = 1, .reusable = true}, SHIFT(342),
  [1496] = {.count = 1, .reusable = true}, SHIFT(341),
  [1498] = {.count = 1, .reusable = true}, SHIFT(340),
  [1500] = {.count = 1, .reusable = true}, SHIFT(339),
  [1502] = {.count = 1, .reusable = true}, SHIFT(337),
  [1504] = {.count = 1, .reusable = true}, SHIFT(335),
  [1506] = {.count = 1, .reusable = true}, SHIFT(333),
};

void *tree_sitter_docker_external_scanner_create(void);
void tree_sitter_docker_external_scanner_destroy(void *);
bool tree_sitter_docker_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_docker_external_scanner_serialize(void *, char *);
void tree_sitter_docker_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_docker(void) {
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
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_docker_external_scanner_create,
      tree_sitter_docker_external_scanner_destroy,
      tree_sitter_docker_external_scanner_scan,
      tree_sitter_docker_external_scanner_serialize,
      tree_sitter_docker_external_scanner_deserialize,
    },
  };
  return &language;
}
