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
#define STATE_COUNT 603
#define SYMBOL_COUNT 184
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
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
  sym_env_key = 49,
  sym_env_value = 50,
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
  aux_sym_label_pair_token1 = 64,
  sym_label_key = 65,
  aux_sym_label_value_token1 = 66,
  aux_sym_label_value_token2 = 67,
  aux_sym_label_value_token3 = 68,
  anon_sym_SQUOTE = 69,
  aux_sym_label_value_token4 = 70,
  sym_signal_num = 71,
  aux_sym_signal_name_token1 = 72,
  aux_sym_signal_name_token2 = 73,
  aux_sym_user_name_token1 = 74,
  aux_sym_user_id_token1 = 75,
  aux_sym_path_token1 = 76,
  aux_sym_path_token2 = 77,
  aux_sym_path_token3 = 78,
  aux_sym_path_token4 = 79,
  aux_sym__anything_token1 = 80,
  anon_sym_LBRACE = 81,
  anon_sym_RBRACE = 82,
  anon_sym_COLON_DASH = 83,
  aux_sym_variable_default_value_token1 = 84,
  anon_sym_COLON_PLUS = 85,
  sym__docker_variable = 86,
  sym_template_expr_curly_braces = 87,
  sym_template_expr_percent_signs = 88,
  aux_sym_template_expr_less_than_equals_token1 = 89,
  aux_sym_template_expr_less_than_equals_token2 = 90,
  aux_sym_template_expr_less_than_equals_token3 = 91,
  sym__space = 92,
  sym__blank_line = 93,
  sym__space_no_newline = 94,
  sym_comment = 95,
  sym_json_array = 96,
  sym_escape = 97,
  sym_line_continuation = 98,
  sym_dockerfile = 99,
  sym__directive = 100,
  sym_add = 101,
  sym_arg = 102,
  sym_cmd = 103,
  sym_copy = 104,
  sym_entrypoint = 105,
  sym_env = 106,
  sym_expose = 107,
  sym_from = 108,
  sym_healthcheck = 109,
  sym_label = 110,
  sym_maintainer = 111,
  sym_onbuild = 112,
  sym_run = 113,
  sym_shell = 114,
  sym_stopsignal = 115,
  sym_user = 116,
  sym_volume = 117,
  sym_workdir = 118,
  sym__chown = 119,
  sym__from_layer = 120,
  sym_from_layer = 121,
  sym_chown = 122,
  sym__env_pairs = 123,
  sym_env_pair_eq = 124,
  sym_env_pair = 125,
  sym__port_spec = 126,
  sym_mapped_port = 127,
  sym_mapped_no_lhs = 128,
  sym__port = 129,
  sym_port = 130,
  sym_port_range = 131,
  sym__port_part = 132,
  sym_port_protocol = 133,
  sym_platform = 134,
  sym_repository = 135,
  sym__repository_start = 136,
  sym__repository_continued = 137,
  sym_image = 138,
  sym_tag = 139,
  sym_digest = 140,
  sym_as_name = 141,
  sym__hc_interval = 142,
  sym_hc_interval = 143,
  sym__hc_timeout = 144,
  sym_hc_timeout = 145,
  sym__hc_start_period = 146,
  sym_hc_start_period = 147,
  sym__hc_retries = 148,
  sym_hc_retries = 149,
  sym__hc_options = 150,
  sym__hc_command = 151,
  sym_hc_command = 152,
  aux_sym__labels = 153,
  sym_label_pair = 154,
  sym_label_value = 155,
  sym_signal_name = 156,
  sym_user_name = 157,
  sym_user_group = 158,
  sym_user_id = 159,
  sym_user_group_id = 160,
  sym_path = 161,
  aux_sym__paths = 162,
  aux_sym__anything = 163,
  sym_docker_variable = 164,
  sym_variable_default_value = 165,
  sym_variable_this_or_null = 166,
  sym_template_expr_less_than_equals = 167,
  sym__anything_or_json_array = 168,
  aux_sym_dockerfile_repeat1 = 169,
  aux_sym_copy_repeat1 = 170,
  aux_sym_expose_repeat1 = 171,
  aux_sym_healthcheck_repeat1 = 172,
  aux_sym_from_layer_repeat1 = 173,
  aux_sym_from_layer_repeat2 = 174,
  aux_sym_from_layer_repeat3 = 175,
  aux_sym_from_layer_repeat4 = 176,
  aux_sym__env_pairs_repeat1 = 177,
  aux_sym_repository_repeat1 = 178,
  aux_sym_label_value_repeat1 = 179,
  aux_sym_label_value_repeat2 = 180,
  aux_sym_path_repeat1 = 181,
  aux_sym_path_repeat2 = 182,
  aux_sym_template_expr_less_than_equals_repeat1 = 183,
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

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [2] = sym_env_value,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '\'') ADVANCE(925);
      if (lookahead == '-') ADVANCE(804);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == '=') ADVANCE(788);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(326);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(322);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(316);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(318);
      if (lookahead == '[') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '{') ADVANCE(1186);
      if (lookahead == '}') ADVANCE(1187);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(935);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      if (lookahead != 0) ADVANCE(1087);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1016);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1050);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1052);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1071);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1022);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1007);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1008);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1053);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1082);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1032);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1075);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1059);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1061);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(1087);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1016);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1050);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1052);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1071);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1022);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1007);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1008);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1053);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1082);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1032);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1075);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1059);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1061);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(936);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(1087);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '-') ADVANCE(803);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(212);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(156);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(197);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(199);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(830);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(864);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(866);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(885);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(836);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(821);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(822);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(867);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(896);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(846);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(889);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(873);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(875);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == '=') ADVANCE(788);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(212);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(156);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(197);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(199);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(212);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(156);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(197);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(199);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1104);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1107);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1108);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1112);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1105);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1102);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1103);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1109);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1114);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1106);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1113);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1110);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1111);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == '`') ADVANCE(70);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1096);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1198);
      if (lookahead != 0) ADVANCE(1101);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(459);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(388);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(443);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(404);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(447);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(431);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(433);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(459);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(388);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(443);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(404);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(447);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(431);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(433);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(459);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(388);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(422);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(443);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(404);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(447);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(431);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(433);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(625);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(644);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(580);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(581);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(655);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(648);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(632);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(634);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(356);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(625);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(644);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(580);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(581);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(655);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(648);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(632);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(634);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(356);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(623);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(625);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(644);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(580);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(581);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(626);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(655);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(605);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(648);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(632);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(634);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(357);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(690);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(724);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(745);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(696);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(681);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(682);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(727);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(756);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(706);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(749);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(733);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(735);
      if (lookahead == '{') ADVANCE(762);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(358);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(690);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(724);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(745);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(696);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(681);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(682);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(727);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(756);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(706);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(749);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(733);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(735);
      if (lookahead == '{') ADVANCE(762);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(358);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(690);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(724);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(745);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(696);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(681);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(682);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(727);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(756);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(706);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(749);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(733);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(735);
      if (lookahead == '{') ADVANCE(762);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(359);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(559);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(488);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(522);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(543);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(494);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(480);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(554);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(504);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(547);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(531);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(533);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(559);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(488);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(522);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(543);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(494);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(480);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(554);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(504);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(547);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(531);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(533);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(559);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(488);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(522);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(543);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(494);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(480);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(554);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(504);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(547);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(531);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(533);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '\n') ADVANCE(1201);
      if (lookahead == '#') ADVANCE(1229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(212);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(156);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(190);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(216);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(197);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(199);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1199);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(264);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(83);
      if (lookahead == '-') ADVANCE(803);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '=') ADVANCE(788);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(156);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(197);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(199);
      if (lookahead == '[') ADVANCE(229);
      if (lookahead == '}') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(1200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(229);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1116);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(230);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1116);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(231);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1116);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1201);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1197);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(923);
      if (lookahead == '\\') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(923);
      if (lookahead != 0) ADVANCE(923);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1197);
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1204);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1204);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1197);
      if (lookahead == '#') ADVANCE(459);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(378);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1197);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(579);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1197);
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '{') ADVANCE(762);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(679);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(1197);
      if (lookahead == '#') ADVANCE(559);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(478);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1197);
      if (lookahead == '#') ADVANCE(1194);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1194);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1194);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1197);
      if (lookahead == '#') ADVANCE(926);
      if (lookahead == '\'') ADVANCE(925);
      if (lookahead == '\\') ADVANCE(927);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(926);
      if (lookahead != 0) ADVANCE(926);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1197);
      if (lookahead == '#') ADVANCE(1193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1193);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1193);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1197);
      if (lookahead == '#') ADVANCE(1192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1192);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1197);
      if (lookahead == '#') ADVANCE(1189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1189);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1197);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(795);
      if (lookahead == '\'') ADVANCE(800);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == ' ') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(800);
      if (lookahead == '\\') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == ' ') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(798);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '#') ADVANCE(922);
      if (lookahead == '\'') ADVANCE(925);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0) ADVANCE(921);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '#') ADVANCE(1099);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '-') ADVANCE(939);
      if (lookahead == '[') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0) ADVANCE(1087);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(937);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '[') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1087);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(935);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(1122);
      if (lookahead == '\\') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '\r' ||
          lookahead == '`') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1099);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(1122);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '\r' ||
          lookahead == '`') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1099);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(255);
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(795);
      if (lookahead == '\'') ADVANCE(798);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '#') ADVANCE(794);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0) ADVANCE(797);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(797);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      if (lookahead == '}') ADVANCE(1187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(930);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '[') ADVANCE(1117);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == '`') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0) ADVANCE(1101);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == '`') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0) ADVANCE(1101);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(932);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(812);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(459);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(680);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == '{') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(559);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '/') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(1116);
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(1116);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '{') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(348);
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '%') ADVANCE(774);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == '{') ADVANCE(762);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(348);
      END_STATE();
    case 73:
      if (lookahead == '#') ADVANCE(1191);
      if (lookahead == '{') ADVANCE(1185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(1191);
      END_STATE();
    case 74:
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(349);
      END_STATE();
    case 75:
      if (lookahead == '\'') ADVANCE(797);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == '+') ADVANCE(1190);
      if (lookahead == '-') ADVANCE(1188);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(113);
      END_STATE();
    case 81:
      if (lookahead == '/') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == '=') ADVANCE(330);
      END_STATE();
    case 83:
      if (lookahead == '>') ADVANCE(783);
      END_STATE();
    case 84:
      if (lookahead == '>') ADVANCE(783);
      if (lookahead != 0) ADVANCE(1196);
      END_STATE();
    case 85:
      if (lookahead == '>') ADVANCE(783);
      if (lookahead != 0) ADVANCE(1195);
      END_STATE();
    case 86:
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1116);
      END_STATE();
    case 87:
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(1116);
      END_STATE();
    case 88:
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(814);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(114);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(811);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(815);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(813);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 127:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 128:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 129:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 130:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1116);
      END_STATE();
    case 131:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1116);
      END_STATE();
    case 132:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(818);
      if (lookahead == '#') ADVANCE(1220);
      if (lookahead == '=') ADVANCE(819);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1197);
      END_STATE();
    case 133:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(782);
      END_STATE();
    case 134:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(787);
      END_STATE();
    case 135:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(785);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 141:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(224);
      END_STATE();
    case 142:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 145:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 146:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 147:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(293);
      END_STATE();
    case 148:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 149:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(816);
      END_STATE();
    case 150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 163:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(931);
      END_STATE();
    case 164:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 165:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 166:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 167:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(157);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 168:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(155);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 176:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(151);
      END_STATE();
    case 177:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(249);
      END_STATE();
    case 178:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 179:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 180:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 181:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 182:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 183:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 184:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 185:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 186:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 187:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 188:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(161);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(208);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 204:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 205:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(808);
      END_STATE();
    case 206:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(807);
      END_STATE();
    case 207:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 208:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 209:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 216:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 217:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 218:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 223:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 224:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 225:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 226:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(237);
      END_STATE();
    case 227:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(209);
      END_STATE();
    case 228:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(795);
      if (lookahead == '\\') ADVANCE(802);
      END_STATE();
    case 229:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1231);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(25);
      END_STATE();
    case 231:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == ']') ADVANCE(1231);
      END_STATE();
    case 232:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 238:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 241:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 242:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 243:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 244:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 245:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 246:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 247:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 248:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 249:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 250:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1099);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(1116);
      END_STATE();
    case 251:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1116);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 252:
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
    case 253:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(933);
      END_STATE();
    case 254:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 255:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 256:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(795);
      if (lookahead == '\\') ADVANCE(256);
      END_STATE();
    case 257:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(797);
      END_STATE();
    case 258:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(57);
      END_STATE();
    case 259:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1116);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 260:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1116);
      END_STATE();
    case 261:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(800);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 262:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(921);
      END_STATE();
    case 263:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1116);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_escape_directive);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_escape_directive);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_escape_directive);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(920);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(940);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_from_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
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
          lookahead == ' ') ADVANCE(302);
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
          lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_arg_default);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__from_layer_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '-') ADVANCE(345);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '{') ADVANCE(769);
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
    case 332:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '2') ADVANCE(333);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '{') ADVANCE(769);
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
    case 333:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '5') ADVANCE(334);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '{') ADVANCE(769);
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
    case 334:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '6') ADVANCE(335);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '{') ADVANCE(769);
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
    case 335:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '{') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(348);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(1218);
      if (lookahead == '{') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == '{') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(348);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead == '{') ADVANCE(769);
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
    case 339:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == '{') ADVANCE(769);
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
    case 340:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(344);
      if (lookahead == '{') ADVANCE(769);
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
    case 341:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'h') ADVANCE(339);
      if (lookahead == '{') ADVANCE(769);
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
    case 342:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'l') ADVANCE(338);
      if (lookahead == '{') ADVANCE(769);
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
    case 343:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(337);
      if (lookahead == '{') ADVANCE(769);
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
    case 344:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == '{') ADVANCE(769);
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
    case 345:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(342);
      if (lookahead == '{') ADVANCE(769);
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
    case 346:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '{') ADVANCE(769);
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
    case 347:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead == '{') ADVANCE(769);
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
    case 348:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(350);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '{') ADVANCE(769);
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
          lookahead != '}') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_from_layer_token2);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_from_layer_token3);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(352);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(353);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(355);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(356);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(357);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(358);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(359);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(360);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(361);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(362);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(364);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(367);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(369);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(370);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(372);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(373);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(374);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(375);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(376);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(377);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(389);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(395);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(390);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(442);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
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
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(460);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(461);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(462);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(464);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(467);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(469);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(470);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(472);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(473);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(474);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(475);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(476);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(477);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(489);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(495);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(490);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(551);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(542);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
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
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(560);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(561);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(562);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(563);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(565);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(568);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(570);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(571);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(573);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(574);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(575);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(576);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(577);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(578);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(590);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(596);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(591);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(652);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(643);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
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
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(660);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(661);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(662);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(663);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(664);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(665);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(666);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(667);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(668);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(669);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(670);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(671);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(672);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(673);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(674);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(675);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(676);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(677);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(678);
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
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(679);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(680);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(709);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(716);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(710);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(720);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(757);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(699);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(715);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(707);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(691);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(703);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(661);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(663);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(713);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(673);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(718);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(671);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(662);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(730);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(689);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(697);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(695);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(704);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(728);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(732);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(729);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(747);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(693);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(678);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(752);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(758);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(669);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(677);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(719);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(694);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(667);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(692);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(701);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(741);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(686);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(755);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(754);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(685);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(702);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(717);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(723);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(743);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(740);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(751);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(712);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(759);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(750);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(737);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(738);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(714);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(760);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(734);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(668);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(676);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(698);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(708);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(700);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(705);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(744);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(664);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
    case 754:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(675);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
    case 755:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(684);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
    case 756:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(731);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
    case 757:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(711);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
    case 758:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(725);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
    case 759:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(666);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
    case 760:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(742);
      if (lookahead == '{') ADVANCE(772);
      if (lookahead != 0 &&
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
    case 761:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(763);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(761);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(764);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(765);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(767);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(768);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(770);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(771);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      if (lookahead == '%') ADVANCE(773);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      if (lookahead == '%') ADVANCE(775);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      if (lookahead == '%') ADVANCE(777);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      if (lookahead == '%') ADVANCE(779);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      if (lookahead == '=') ADVANCE(781);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_from_layer_token14);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      if (lookahead == '=') ADVANCE(784);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      if (lookahead == '=') ADVANCE(786);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_env_key);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_env_key);
      if (lookahead == '"') ADVANCE(789);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(790);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(800);
      if (lookahead == '\'') ADVANCE(800);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(800);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\n') ADVANCE(1211);
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '\'') ADVANCE(796);
      if (lookahead == '\\') ADVANCE(1228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1210);
      if (lookahead != 0) ADVANCE(796);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\n') ADVANCE(1211);
      if (lookahead == '"') ADVANCE(801);
      if (lookahead == '\'') ADVANCE(801);
      if (lookahead == '\\') ADVANCE(1224);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1209);
      if (lookahead != 0) ADVANCE(801);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(1206);
      if (lookahead == '\'') ADVANCE(1210);
      if (lookahead == '\\') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(794);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(795);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(795);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(1209);
      if (lookahead == '\'') ADVANCE(796);
      if (lookahead == '\\') ADVANCE(1228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(796);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(797);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(798);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(798);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(799);
      if (lookahead == '\'') ADVANCE(1209);
      if (lookahead == '\\') ADVANCE(1222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(799);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(800);
      if (lookahead == '\'') ADVANCE(800);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(800);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '"') ADVANCE(801);
      if (lookahead == '\'') ADVANCE(801);
      if (lookahead == '\\') ADVANCE(1224);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(801);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_env_value);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(795);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead != 0) ADVANCE(795);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(947);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(812);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretries);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__hc_command_token1);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '=') ADVANCE(819);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_label_pair_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(817);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_label_key);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(849);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(856);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(850);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(860);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(897);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(839);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(855);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(847);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(831);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(843);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(901);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(903);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(853);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(913);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(828);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(823);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(861);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(886);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(911);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(912);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(902);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(870);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(829);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(837);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(876);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(835);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(844);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(868);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(872);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(862);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(869);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(833);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(918);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(892);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(898);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(909);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(910);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(917);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(859);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(834);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(907);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(832);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(879);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(841);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(881);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(826);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(895);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(894);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(825);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(905);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(842);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(857);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(863);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(883);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(880);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(891);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(852);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(899);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(890);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(877);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(878);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(854);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(900);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(874);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(908);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(916);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(838);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(848);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(840);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(845);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(884);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(904);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(915);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(824);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(871);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(851);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(865);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(906);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(882);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(269);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(274);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(280);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(304);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(276);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(286);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(310);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(298);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(282);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(313);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(278);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(820);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(922);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead == '\\') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(923);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(923);
      if (lookahead == '\\') ADVANCE(924);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_label_value_token4);
      if (lookahead == '\\') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(926);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_label_value_token4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(926);
      if (lookahead == '\\') ADVANCE(927);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(928);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(929);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (lookahead == '+') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(932);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(933);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ':') ADVANCE(934);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(935);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(936);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == '$') ADVANCE(1089);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1220);
      if (lookahead != 0) ADVANCE(937);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '-') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '-') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '/') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '=') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '=') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'a') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'a') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'a') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'c') ADVANCE(956);
      if (lookahead == 'f') ADVANCE(975);
      if (lookahead == 'i') ADVANCE(965);
      if (lookahead == 'p') ADVANCE(960);
      if (lookahead == 'r') ADVANCE(951);
      if (lookahead == 's') ADVANCE(985);
      if (lookahead == 't') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'c') ADVANCE(956);
      if (lookahead == 'f') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'd') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'e') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'e') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'e') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'e') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'f') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'h') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'i') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'i') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'i') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'l') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'l') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'm') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'm') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'm') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'n') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'n') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'o') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'o') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'o') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'o') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'o') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'p') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'r') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'r') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'r') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'r') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'r') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'r') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 's') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 't') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 't') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 't') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 't') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 't') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 't') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'u') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'v') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'w') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1017);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1074);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1056);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1023);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1062);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1058);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1018);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1079);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1070);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1057);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1068);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1087);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == '"') ADVANCE(1220);
      if (lookahead == '$') ADVANCE(1095);
      if (lookahead != 0) ADVANCE(1090);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '#') ADVANCE(1090);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1093);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '#') ADVANCE(1090);
      if (lookahead == '$') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1093);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '$') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1093);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_path_token4);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1098);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1097);
      if (lookahead != 0) ADVANCE(1124);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1098);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1097);
      if (lookahead != 0) ADVANCE(1124);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1098);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1097);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1123);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1100);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1100);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1099);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1130);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1145);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1133);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1140);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1126);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1137);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1166);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1133);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1168);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1184);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1170);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1129);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1155);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1173);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1164);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1138);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1159);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1125);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1119);
      if (lookahead == '"') ADVANCE(1100);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == ',') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1231);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1119);
      if (lookahead == '"') ADVANCE(1100);
      if (lookahead == ',') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1231);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1119);
      if (lookahead == '"') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(1124);
      if (lookahead == ',') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(1231);
      if (lookahead == '`') ADVANCE(69);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1120);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1121);
      if (lookahead == '"') ADVANCE(1100);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1120);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1121);
      if (lookahead == '"') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '`') ADVANCE(69);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1122);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1123);
      if (lookahead == ',') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(1231);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1124);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1122);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(1124);
      if (lookahead == ',') ADVANCE(1121);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(1231);
      if (lookahead == '`') ADVANCE(69);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1115);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1124);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1154);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1124);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1153);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1124);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1146);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'b') ADVANCE(1124);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1180);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'b') ADVANCE(1124);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'c') ADVANCE(1124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1150);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'c') ADVANCE(1124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1143);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'd') ADVANCE(1124);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'd') ADVANCE(1124);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1147);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1131);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1156);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1172);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1124);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1153);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'g') ADVANCE(1124);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'g') ADVANCE(1124);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1163);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'h') ADVANCE(1124);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1132);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'h') ADVANCE(1124);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1136);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1124);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1141);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1124);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1161);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1124);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1160);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1124);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1172);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1124);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1152);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1124);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1162);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'k') ADVANCE(1124);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'k') ADVANCE(1124);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1134);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1124);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1133);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1124);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1124);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1178);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1124);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1181);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1124);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1153);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'm') ADVANCE(1124);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'm') ADVANCE(1124);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1135);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1124);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1124);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1138);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1124);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1179);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1124);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1177);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1124);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1127);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1124);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1157);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1124);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1176);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1124);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1169);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1124);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1149);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1124);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1182);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1124);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1175);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1124);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1165);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1124);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1167);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'r') ADVANCE(1124);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'r') ADVANCE(1124);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1151);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'r') ADVANCE(1124);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1183);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 's') ADVANCE(1124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1144);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 's') ADVANCE(1124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1135);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't') ADVANCE(1124);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't') ADVANCE(1124);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1142);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't') ADVANCE(1124);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1128);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'u') ADVANCE(1124);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1148);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'u') ADVANCE(1124);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1158);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'y') ADVANCE(1124);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'y') ADVANCE(1124);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1171);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1184:
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
          lookahead != 'v') ADVANCE(1124);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1174);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1116);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(763);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1189);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 1191:
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
          lookahead != '}') ADVANCE(1191);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1192);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1193);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1194);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1201);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym__blank_line);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1200);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1203);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1204);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == '"') ADVANCE(794);
      if (lookahead == '\\') ADVANCE(1223);
      if (lookahead != 0) ADVANCE(1206);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == '"') ADVANCE(795);
      if (lookahead == '\'') ADVANCE(798);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == '"') ADVANCE(797);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == '"') ADVANCE(796);
      if (lookahead == '\'') ADVANCE(799);
      if (lookahead == '\\') ADVANCE(1225);
      if (lookahead != 0) ADVANCE(1209);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == '\'') ADVANCE(794);
      if (lookahead == '\\') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1210);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == '\'') ADVANCE(797);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == 'a') ADVANCE(1215);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == 'c') ADVANCE(1212);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == 'p') ADVANCE(1214);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == 's') ADVANCE(1213);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(787);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(785);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'') ADVANCE(1220);
      if (lookahead != 0) ADVANCE(922);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(794);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1220);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1208);
      if (lookahead == ' ') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(799);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1220);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1220);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1207);
      if (lookahead == ' ') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(801);
      if (lookahead == '\\') ADVANCE(793);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1210);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1209);
      if (lookahead == '\'') ADVANCE(801);
      if (lookahead == '\\') ADVANCE(1226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1210);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1211);
      if (lookahead == '"') ADVANCE(796);
      if (lookahead == '\'') ADVANCE(801);
      if (lookahead == '\\') ADVANCE(1225);
      if (lookahead != 0) ADVANCE(1209);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1211);
      if (lookahead == '\'') ADVANCE(796);
      if (lookahead == '\\') ADVANCE(1227);
      if (lookahead != 0) ADVANCE(1210);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(796);
      if (lookahead == '\\') ADVANCE(792);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1210);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1229);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == 'e') ADVANCE(1216);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1230);
      if (lookahead == '\n') ADVANCE(1205);
      if (lookahead == '=') ADVANCE(265);
      if (lookahead != 0) ADVANCE(1220);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_json_array);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 20, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 3},
  [3] = {.lex_state = 3, .external_lex_state = 3},
  [4] = {.lex_state = 3, .external_lex_state = 3},
  [5] = {.lex_state = 3, .external_lex_state = 3},
  [6] = {.lex_state = 3, .external_lex_state = 3},
  [7] = {.lex_state = 3, .external_lex_state = 3},
  [8] = {.lex_state = 21, .external_lex_state = 3},
  [9] = {.lex_state = 8, .external_lex_state = 3},
  [10] = {.lex_state = 11, .external_lex_state = 3},
  [11] = {.lex_state = 8, .external_lex_state = 3},
  [12] = {.lex_state = 14, .external_lex_state = 3},
  [13] = {.lex_state = 14, .external_lex_state = 3},
  [14] = {.lex_state = 8, .external_lex_state = 3},
  [15] = {.lex_state = 17, .external_lex_state = 3},
  [16] = {.lex_state = 11, .external_lex_state = 3},
  [17] = {.lex_state = 17, .external_lex_state = 3},
  [18] = {.lex_state = 11, .external_lex_state = 3},
  [19] = {.lex_state = 14, .external_lex_state = 3},
  [20] = {.lex_state = 17, .external_lex_state = 3},
  [21] = {.lex_state = 8, .external_lex_state = 3},
  [22] = {.lex_state = 11, .external_lex_state = 3},
  [23] = {.lex_state = 17, .external_lex_state = 3},
  [24] = {.lex_state = 8, .external_lex_state = 3},
  [25] = {.lex_state = 8, .external_lex_state = 3},
  [26] = {.lex_state = 8, .external_lex_state = 3},
  [27] = {.lex_state = 14, .external_lex_state = 3},
  [28] = {.lex_state = 9, .external_lex_state = 3},
  [29] = {.lex_state = 3, .external_lex_state = 3},
  [30] = {.lex_state = 15, .external_lex_state = 3},
  [31] = {.lex_state = 15, .external_lex_state = 3},
  [32] = {.lex_state = 9, .external_lex_state = 3},
  [33] = {.lex_state = 18, .external_lex_state = 3},
  [34] = {.lex_state = 18, .external_lex_state = 3},
  [35] = {.lex_state = 12, .external_lex_state = 3},
  [36] = {.lex_state = 12, .external_lex_state = 3},
  [37] = {.lex_state = 12, .external_lex_state = 3},
  [38] = {.lex_state = 3, .external_lex_state = 3},
  [39] = {.lex_state = 18, .external_lex_state = 3},
  [40] = {.lex_state = 9, .external_lex_state = 3},
  [41] = {.lex_state = 15, .external_lex_state = 3},
  [42] = {.lex_state = 2, .external_lex_state = 3},
  [43] = {.lex_state = 12, .external_lex_state = 3},
  [44] = {.lex_state = 2, .external_lex_state = 3},
  [45] = {.lex_state = 2, .external_lex_state = 3},
  [46] = {.lex_state = 3, .external_lex_state = 3},
  [47] = {.lex_state = 2, .external_lex_state = 3},
  [48] = {.lex_state = 9, .external_lex_state = 3},
  [49] = {.lex_state = 9, .external_lex_state = 3},
  [50] = {.lex_state = 9, .external_lex_state = 3},
  [51] = {.lex_state = 2, .external_lex_state = 3},
  [52] = {.lex_state = 1, .external_lex_state = 3},
  [53] = {.lex_state = 8, .external_lex_state = 3},
  [54] = {.lex_state = 8, .external_lex_state = 3},
  [55] = {.lex_state = 14, .external_lex_state = 3},
  [56] = {.lex_state = 18, .external_lex_state = 3},
  [57] = {.lex_state = 15, .external_lex_state = 3},
  [58] = {.lex_state = 11, .external_lex_state = 3},
  [59] = {.lex_state = 9, .external_lex_state = 3},
  [60] = {.lex_state = 3, .external_lex_state = 3},
  [61] = {.lex_state = 17, .external_lex_state = 3},
  [62] = {.lex_state = 1, .external_lex_state = 3},
  [63] = {.lex_state = 14, .external_lex_state = 3},
  [64] = {.lex_state = 3, .external_lex_state = 3},
  [65] = {.lex_state = 11, .external_lex_state = 3},
  [66] = {.lex_state = 17, .external_lex_state = 3},
  [67] = {.lex_state = 1, .external_lex_state = 3},
  [68] = {.lex_state = 3, .external_lex_state = 3},
  [69] = {.lex_state = 11, .external_lex_state = 3},
  [70] = {.lex_state = 14, .external_lex_state = 3},
  [71] = {.lex_state = 3, .external_lex_state = 3},
  [72] = {.lex_state = 17, .external_lex_state = 3},
  [73] = {.lex_state = 1, .external_lex_state = 3},
  [74] = {.lex_state = 1, .external_lex_state = 3},
  [75] = {.lex_state = 5, .external_lex_state = 3},
  [76] = {.lex_state = 3, .external_lex_state = 3},
  [77] = {.lex_state = 1, .external_lex_state = 3},
  [78] = {.lex_state = 3, .external_lex_state = 3},
  [79] = {.lex_state = 8, .external_lex_state = 3},
  [80] = {.lex_state = 5, .external_lex_state = 3},
  [81] = {.lex_state = 1, .external_lex_state = 3},
  [82] = {.lex_state = 1, .external_lex_state = 3},
  [83] = {.lex_state = 1, .external_lex_state = 3},
  [84] = {.lex_state = 1, .external_lex_state = 3},
  [85] = {.lex_state = 8, .external_lex_state = 3},
  [86] = {.lex_state = 5, .external_lex_state = 3},
  [87] = {.lex_state = 1, .external_lex_state = 3},
  [88] = {.lex_state = 1, .external_lex_state = 3},
  [89] = {.lex_state = 1, .external_lex_state = 3},
  [90] = {.lex_state = 17, .external_lex_state = 3},
  [91] = {.lex_state = 11, .external_lex_state = 3},
  [92] = {.lex_state = 14, .external_lex_state = 3},
  [93] = {.lex_state = 3, .external_lex_state = 3},
  [94] = {.lex_state = 5, .external_lex_state = 3},
  [95] = {.lex_state = 3, .external_lex_state = 3},
  [96] = {.lex_state = 10, .external_lex_state = 3},
  [97] = {.lex_state = 10, .external_lex_state = 3},
  [98] = {.lex_state = 16, .external_lex_state = 3},
  [99] = {.lex_state = 13, .external_lex_state = 3},
  [100] = {.lex_state = 19, .external_lex_state = 3},
  [101] = {.lex_state = 3, .external_lex_state = 3},
  [102] = {.lex_state = 2, .external_lex_state = 3},
  [103] = {.lex_state = 13, .external_lex_state = 3},
  [104] = {.lex_state = 16, .external_lex_state = 3},
  [105] = {.lex_state = 2, .external_lex_state = 3},
  [106] = {.lex_state = 16, .external_lex_state = 3},
  [107] = {.lex_state = 19, .external_lex_state = 3},
  [108] = {.lex_state = 13, .external_lex_state = 3},
  [109] = {.lex_state = 10, .external_lex_state = 3},
  [110] = {.lex_state = 19, .external_lex_state = 3},
  [111] = {.lex_state = 3, .external_lex_state = 3},
  [112] = {.lex_state = 2, .external_lex_state = 3},
  [113] = {.lex_state = 2, .external_lex_state = 3},
  [114] = {.lex_state = 6, .external_lex_state = 3},
  [115] = {.lex_state = 10, .external_lex_state = 3},
  [116] = {.lex_state = 19, .external_lex_state = 3},
  [117] = {.lex_state = 16, .external_lex_state = 3},
  [118] = {.lex_state = 6, .external_lex_state = 3},
  [119] = {.lex_state = 10, .external_lex_state = 3},
  [120] = {.lex_state = 4, .external_lex_state = 3},
  [121] = {.lex_state = 13, .external_lex_state = 3},
  [122] = {.lex_state = 3, .external_lex_state = 3},
  [123] = {.lex_state = 3, .external_lex_state = 3},
  [124] = {.lex_state = 10, .external_lex_state = 3},
  [125] = {.lex_state = 2, .external_lex_state = 3},
  [126] = {.lex_state = 6, .external_lex_state = 3},
  [127] = {.lex_state = 4, .external_lex_state = 3},
  [128] = {.lex_state = 6, .external_lex_state = 3},
  [129] = {.lex_state = 10, .external_lex_state = 3},
  [130] = {.lex_state = 2, .external_lex_state = 3},
  [131] = {.lex_state = 6, .external_lex_state = 3},
  [132] = {.lex_state = 6, .external_lex_state = 3},
  [133] = {.lex_state = 2, .external_lex_state = 3},
  [134] = {.lex_state = 6, .external_lex_state = 3},
  [135] = {.lex_state = 2, .external_lex_state = 3},
  [136] = {.lex_state = 6, .external_lex_state = 3},
  [137] = {.lex_state = 7, .external_lex_state = 3},
  [138] = {.lex_state = 5, .external_lex_state = 3},
  [139] = {.lex_state = 5, .external_lex_state = 3},
  [140] = {.lex_state = 7, .external_lex_state = 3},
  [141] = {.lex_state = 5, .external_lex_state = 3},
  [142] = {.lex_state = 5, .external_lex_state = 3},
  [143] = {.lex_state = 5, .external_lex_state = 3},
  [144] = {.lex_state = 5, .external_lex_state = 3},
  [145] = {.lex_state = 5, .external_lex_state = 3},
  [146] = {.lex_state = 7, .external_lex_state = 3},
  [147] = {.lex_state = 5, .external_lex_state = 3},
  [148] = {.lex_state = 5, .external_lex_state = 3},
  [149] = {.lex_state = 7, .external_lex_state = 3},
  [150] = {.lex_state = 5, .external_lex_state = 3},
  [151] = {.lex_state = 5, .external_lex_state = 3},
  [152] = {.lex_state = 7, .external_lex_state = 3},
  [153] = {.lex_state = 5, .external_lex_state = 3},
  [154] = {.lex_state = 5, .external_lex_state = 3},
  [155] = {.lex_state = 3, .external_lex_state = 3},
  [156] = {.lex_state = 5, .external_lex_state = 3},
  [157] = {.lex_state = 7, .external_lex_state = 3},
  [158] = {.lex_state = 3, .external_lex_state = 3},
  [159] = {.lex_state = 5, .external_lex_state = 3},
  [160] = {.lex_state = 5, .external_lex_state = 3},
  [161] = {.lex_state = 5, .external_lex_state = 3},
  [162] = {.lex_state = 3, .external_lex_state = 3},
  [163] = {.lex_state = 4, .external_lex_state = 3},
  [164] = {.lex_state = 3, .external_lex_state = 3},
  [165] = {.lex_state = 4, .external_lex_state = 3},
  [166] = {.lex_state = 7, .external_lex_state = 3},
  [167] = {.lex_state = 5, .external_lex_state = 3},
  [168] = {.lex_state = 5, .external_lex_state = 3},
  [169] = {.lex_state = 5, .external_lex_state = 3},
  [170] = {.lex_state = 3, .external_lex_state = 3},
  [171] = {.lex_state = 5, .external_lex_state = 3},
  [172] = {.lex_state = 5, .external_lex_state = 3},
  [173] = {.lex_state = 5, .external_lex_state = 3},
  [174] = {.lex_state = 5, .external_lex_state = 3},
  [175] = {.lex_state = 5, .external_lex_state = 3},
  [176] = {.lex_state = 4, .external_lex_state = 3},
  [177] = {.lex_state = 3, .external_lex_state = 3},
  [178] = {.lex_state = 3, .external_lex_state = 3},
  [179] = {.lex_state = 3, .external_lex_state = 3},
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
  [222] = {.lex_state = 58, .external_lex_state = 3},
  [223] = {.lex_state = 71, .external_lex_state = 3},
  [224] = {.lex_state = 21, .external_lex_state = 3},
  [225] = {.lex_state = 71, .external_lex_state = 3},
  [226] = {.lex_state = 48, .external_lex_state = 3},
  [227] = {.lex_state = 48, .external_lex_state = 3},
  [228] = {.lex_state = 58, .external_lex_state = 3},
  [229] = {.lex_state = 72, .external_lex_state = 3},
  [230] = {.lex_state = 71, .external_lex_state = 3},
  [231] = {.lex_state = 72, .external_lex_state = 3},
  [232] = {.lex_state = 71, .external_lex_state = 3},
  [233] = {.lex_state = 72, .external_lex_state = 3},
  [234] = {.lex_state = 72, .external_lex_state = 3},
  [235] = {.lex_state = 72, .external_lex_state = 3},
  [236] = {.lex_state = 58, .external_lex_state = 3},
  [237] = {.lex_state = 72, .external_lex_state = 3},
  [238] = {.lex_state = 71, .external_lex_state = 3},
  [239] = {.lex_state = 71, .external_lex_state = 3},
  [240] = {.lex_state = 71, .external_lex_state = 3},
  [241] = {.lex_state = 71, .external_lex_state = 3},
  [242] = {.lex_state = 71, .external_lex_state = 3},
  [243] = {.lex_state = 71, .external_lex_state = 3},
  [244] = {.lex_state = 71, .external_lex_state = 3},
  [245] = {.lex_state = 71, .external_lex_state = 3},
  [246] = {.lex_state = 71, .external_lex_state = 3},
  [247] = {.lex_state = 71, .external_lex_state = 3},
  [248] = {.lex_state = 71, .external_lex_state = 3},
  [249] = {.lex_state = 71, .external_lex_state = 3},
  [250] = {.lex_state = 71, .external_lex_state = 3},
  [251] = {.lex_state = 71, .external_lex_state = 3},
  [252] = {.lex_state = 71, .external_lex_state = 3},
  [253] = {.lex_state = 71, .external_lex_state = 3},
  [254] = {.lex_state = 71, .external_lex_state = 3},
  [255] = {.lex_state = 71, .external_lex_state = 3},
  [256] = {.lex_state = 71, .external_lex_state = 3},
  [257] = {.lex_state = 71, .external_lex_state = 3},
  [258] = {.lex_state = 71, .external_lex_state = 3},
  [259] = {.lex_state = 71, .external_lex_state = 3},
  [260] = {.lex_state = 71, .external_lex_state = 3},
  [261] = {.lex_state = 48, .external_lex_state = 3},
  [262] = {.lex_state = 21, .external_lex_state = 3},
  [263] = {.lex_state = 71, .external_lex_state = 3},
  [264] = {.lex_state = 71, .external_lex_state = 3},
  [265] = {.lex_state = 71, .external_lex_state = 3},
  [266] = {.lex_state = 71, .external_lex_state = 3},
  [267] = {.lex_state = 71, .external_lex_state = 3},
  [268] = {.lex_state = 71, .external_lex_state = 3},
  [269] = {.lex_state = 71, .external_lex_state = 3},
  [270] = {.lex_state = 71, .external_lex_state = 3},
  [271] = {.lex_state = 71, .external_lex_state = 3},
  [272] = {.lex_state = 71, .external_lex_state = 3},
  [273] = {.lex_state = 71, .external_lex_state = 3},
  [274] = {.lex_state = 71, .external_lex_state = 3},
  [275] = {.lex_state = 71, .external_lex_state = 3},
  [276] = {.lex_state = 71, .external_lex_state = 3},
  [277] = {.lex_state = 71, .external_lex_state = 3},
  [278] = {.lex_state = 21, .external_lex_state = 3},
  [279] = {.lex_state = 21, .external_lex_state = 3},
  [280] = {.lex_state = 48, .external_lex_state = 3},
  [281] = {.lex_state = 49, .external_lex_state = 3},
  [282] = {.lex_state = 48, .external_lex_state = 3},
  [283] = {.lex_state = 21, .external_lex_state = 3},
  [284] = {.lex_state = 49, .external_lex_state = 3},
  [285] = {.lex_state = 50, .external_lex_state = 3},
  [286] = {.lex_state = 50, .external_lex_state = 3},
  [287] = {.lex_state = 58, .external_lex_state = 3},
  [288] = {.lex_state = 58, .external_lex_state = 3},
  [289] = {.lex_state = 36, .external_lex_state = 3},
  [290] = {.lex_state = 32, .external_lex_state = 3},
  [291] = {.lex_state = 58, .external_lex_state = 3},
  [292] = {.lex_state = 1091, .external_lex_state = 3},
  [293] = {.lex_state = 45, .external_lex_state = 3},
  [294] = {.lex_state = 65, .external_lex_state = 3},
  [295] = {.lex_state = 67, .external_lex_state = 3},
  [296] = {.lex_state = 68, .external_lex_state = 3},
  [297] = {.lex_state = 66, .external_lex_state = 3},
  [298] = {.lex_state = 59, .external_lex_state = 3},
  [299] = {.lex_state = 58, .external_lex_state = 3},
  [300] = {.lex_state = 65, .external_lex_state = 3},
  [301] = {.lex_state = 67, .external_lex_state = 3},
  [302] = {.lex_state = 36, .external_lex_state = 3},
  [303] = {.lex_state = 68, .external_lex_state = 3},
  [304] = {.lex_state = 66, .external_lex_state = 3},
  [305] = {.lex_state = 58, .external_lex_state = 3},
  [306] = {.lex_state = 36, .external_lex_state = 3},
  [307] = {.lex_state = 36, .external_lex_state = 3},
  [308] = {.lex_state = 36, .external_lex_state = 3},
  [309] = {.lex_state = 1091, .external_lex_state = 3},
  [310] = {.lex_state = 36, .external_lex_state = 3},
  [311] = {.lex_state = 21, .external_lex_state = 3},
  [312] = {.lex_state = 36, .external_lex_state = 3},
  [313] = {.lex_state = 34, .external_lex_state = 3},
  [314] = {.lex_state = 35, .external_lex_state = 3},
  [315] = {.lex_state = 33, .external_lex_state = 3},
  [316] = {.lex_state = 36, .external_lex_state = 3},
  [317] = {.lex_state = 36, .external_lex_state = 3},
  [318] = {.lex_state = 58, .external_lex_state = 3},
  [319] = {.lex_state = 58, .external_lex_state = 3},
  [320] = {.lex_state = 36, .external_lex_state = 3},
  [321] = {.lex_state = 33, .external_lex_state = 3},
  [322] = {.lex_state = 35, .external_lex_state = 3},
  [323] = {.lex_state = 34, .external_lex_state = 3},
  [324] = {.lex_state = 21, .external_lex_state = 3},
  [325] = {.lex_state = 49, .external_lex_state = 3},
  [326] = {.lex_state = 58, .external_lex_state = 3},
  [327] = {.lex_state = 65, .external_lex_state = 3},
  [328] = {.lex_state = 58, .external_lex_state = 3},
  [329] = {.lex_state = 36, .external_lex_state = 3},
  [330] = {.lex_state = 58, .external_lex_state = 3},
  [331] = {.lex_state = 58, .external_lex_state = 3},
  [332] = {.lex_state = 58, .external_lex_state = 3},
  [333] = {.lex_state = 33, .external_lex_state = 3},
  [334] = {.lex_state = 35, .external_lex_state = 3},
  [335] = {.lex_state = 34, .external_lex_state = 3},
  [336] = {.lex_state = 32, .external_lex_state = 3},
  [337] = {.lex_state = 32, .external_lex_state = 3},
  [338] = {.lex_state = 67, .external_lex_state = 3},
  [339] = {.lex_state = 68, .external_lex_state = 3},
  [340] = {.lex_state = 66, .external_lex_state = 3},
  [341] = {.lex_state = 58, .external_lex_state = 3},
  [342] = {.lex_state = 58, .external_lex_state = 3},
  [343] = {.lex_state = 21, .external_lex_state = 3},
  [344] = {.lex_state = 1091, .external_lex_state = 3},
  [345] = {.lex_state = 1091, .external_lex_state = 3},
  [346] = {.lex_state = 36, .external_lex_state = 3},
  [347] = {.lex_state = 1091, .external_lex_state = 3},
  [348] = {.lex_state = 58, .external_lex_state = 3},
  [349] = {.lex_state = 58, .external_lex_state = 3},
  [350] = {.lex_state = 21, .external_lex_state = 3},
  [351] = {.lex_state = 36, .external_lex_state = 3},
  [352] = {.lex_state = 36, .external_lex_state = 3},
  [353] = {.lex_state = 58, .external_lex_state = 3},
  [354] = {.lex_state = 58, .external_lex_state = 3},
  [355] = {.lex_state = 58, .external_lex_state = 3},
  [356] = {.lex_state = 58, .external_lex_state = 3},
  [357] = {.lex_state = 32, .external_lex_state = 3},
  [358] = {.lex_state = 66, .external_lex_state = 3},
  [359] = {.lex_state = 35, .external_lex_state = 3},
  [360] = {.lex_state = 50, .external_lex_state = 3},
  [361] = {.lex_state = 65, .external_lex_state = 3},
  [362] = {.lex_state = 65, .external_lex_state = 3},
  [363] = {.lex_state = 65, .external_lex_state = 3},
  [364] = {.lex_state = 21, .external_lex_state = 3},
  [365] = {.lex_state = 21, .external_lex_state = 3},
  [366] = {.lex_state = 21, .external_lex_state = 3},
  [367] = {.lex_state = 32, .external_lex_state = 3},
  [368] = {.lex_state = 32, .external_lex_state = 3},
  [369] = {.lex_state = 32, .external_lex_state = 3},
  [370] = {.lex_state = 1091, .external_lex_state = 3},
  [371] = {.lex_state = 33, .external_lex_state = 3},
  [372] = {.lex_state = 1091, .external_lex_state = 3},
  [373] = {.lex_state = 34, .external_lex_state = 3},
  [374] = {.lex_state = 59, .external_lex_state = 3},
  [375] = {.lex_state = 68, .external_lex_state = 3},
  [376] = {.lex_state = 1091, .external_lex_state = 3},
  [377] = {.lex_state = 54, .external_lex_state = 3},
  [378] = {.lex_state = 59, .external_lex_state = 3},
  [379] = {.lex_state = 59, .external_lex_state = 3},
  [380] = {.lex_state = 67, .external_lex_state = 3},
  [381] = {.lex_state = 65, .external_lex_state = 3},
  [382] = {.lex_state = 1091, .external_lex_state = 3},
  [383] = {.lex_state = 21, .external_lex_state = 3},
  [384] = {.lex_state = 73, .external_lex_state = 3},
  [385] = {.lex_state = 51, .external_lex_state = 3},
  [386] = {.lex_state = 73, .external_lex_state = 3},
  [387] = {.lex_state = 58, .external_lex_state = 3},
  [388] = {.lex_state = 73, .external_lex_state = 3},
  [389] = {.lex_state = 1092, .external_lex_state = 3},
  [390] = {.lex_state = 1092, .external_lex_state = 3},
  [391] = {.lex_state = 73, .external_lex_state = 3},
  [392] = {.lex_state = 73, .external_lex_state = 3},
  [393] = {.lex_state = 74, .external_lex_state = 3},
  [394] = {.lex_state = 30, .external_lex_state = 3},
  [395] = {.lex_state = 73, .external_lex_state = 3},
  [396] = {.lex_state = 37, .external_lex_state = 3},
  [397] = {.lex_state = 73, .external_lex_state = 3},
  [398] = {.lex_state = 73, .external_lex_state = 3},
  [399] = {.lex_state = 73, .external_lex_state = 3},
  [400] = {.lex_state = 73, .external_lex_state = 3},
  [401] = {.lex_state = 73, .external_lex_state = 3},
  [402] = {.lex_state = 21, .external_lex_state = 3},
  [403] = {.lex_state = 73, .external_lex_state = 3},
  [404] = {.lex_state = 73, .external_lex_state = 3},
  [405] = {.lex_state = 73, .external_lex_state = 3},
  [406] = {.lex_state = 73, .external_lex_state = 3},
  [407] = {.lex_state = 73, .external_lex_state = 3},
  [408] = {.lex_state = 21, .external_lex_state = 3},
  [409] = {.lex_state = 73, .external_lex_state = 3},
  [410] = {.lex_state = 73, .external_lex_state = 3},
  [411] = {.lex_state = 21, .external_lex_state = 3},
  [412] = {.lex_state = 37, .external_lex_state = 3},
  [413] = {.lex_state = 30, .external_lex_state = 3},
  [414] = {.lex_state = 21, .external_lex_state = 3},
  [415] = {.lex_state = 73, .external_lex_state = 3},
  [416] = {.lex_state = 21, .external_lex_state = 3},
  [417] = {.lex_state = 21, .external_lex_state = 3},
  [418] = {.lex_state = 73, .external_lex_state = 3},
  [419] = {.lex_state = 73, .external_lex_state = 3},
  [420] = {.lex_state = 73, .external_lex_state = 3},
  [421] = {.lex_state = 73, .external_lex_state = 3},
  [422] = {.lex_state = 21, .external_lex_state = 3},
  [423] = {.lex_state = 73, .external_lex_state = 3},
  [424] = {.lex_state = 73, .external_lex_state = 3},
  [425] = {.lex_state = 21, .external_lex_state = 3},
  [426] = {.lex_state = 73, .external_lex_state = 3},
  [427] = {.lex_state = 63, .external_lex_state = 3},
  [428] = {.lex_state = 21, .external_lex_state = 3},
  [429] = {.lex_state = 21, .external_lex_state = 3},
  [430] = {.lex_state = 63, .external_lex_state = 3},
  [431] = {.lex_state = 50, .external_lex_state = 3},
  [432] = {.lex_state = 50, .external_lex_state = 3},
  [433] = {.lex_state = 21, .external_lex_state = 3},
  [434] = {.lex_state = 21, .external_lex_state = 3},
  [435] = {.lex_state = 63, .external_lex_state = 3},
  [436] = {.lex_state = 31, .external_lex_state = 3},
  [437] = {.lex_state = 31, .external_lex_state = 3},
  [438] = {.lex_state = 21, .external_lex_state = 3},
  [439] = {.lex_state = 21, .external_lex_state = 3},
  [440] = {.lex_state = 21, .external_lex_state = 3},
  [441] = {.lex_state = 50, .external_lex_state = 3},
  [442] = {.lex_state = 54, .external_lex_state = 3},
  [443] = {.lex_state = 50, .external_lex_state = 3},
  [444] = {.lex_state = 60, .external_lex_state = 3},
  [445] = {.lex_state = 37, .external_lex_state = 3},
  [446] = {.lex_state = 31, .external_lex_state = 3},
  [447] = {.lex_state = 30, .external_lex_state = 3},
  [448] = {.lex_state = 21, .external_lex_state = 3},
  [449] = {.lex_state = 31, .external_lex_state = 3},
  [450] = {.lex_state = 50, .external_lex_state = 3},
  [451] = {.lex_state = 50, .external_lex_state = 3},
  [452] = {.lex_state = 21, .external_lex_state = 3},
  [453] = {.lex_state = 60, .external_lex_state = 3},
  [454] = {.lex_state = 21, .external_lex_state = 3},
  [455] = {.lex_state = 31, .external_lex_state = 3},
  [456] = {.lex_state = 31, .external_lex_state = 3},
  [457] = {.lex_state = 31, .external_lex_state = 3},
  [458] = {.lex_state = 38, .external_lex_state = 3},
  [459] = {.lex_state = 39, .external_lex_state = 3},
  [460] = {.lex_state = 21, .external_lex_state = 3},
  [461] = {.lex_state = 31, .external_lex_state = 3},
  [462] = {.lex_state = 31, .external_lex_state = 3},
  [463] = {.lex_state = 58, .external_lex_state = 3},
  [464] = {.lex_state = 40, .external_lex_state = 3},
  [465] = {.lex_state = 40, .external_lex_state = 3},
  [466] = {.lex_state = 21, .external_lex_state = 3},
  [467] = {.lex_state = 31, .external_lex_state = 3},
  [468] = {.lex_state = 21, .external_lex_state = 3},
  [469] = {.lex_state = 31, .external_lex_state = 3},
  [470] = {.lex_state = 31, .external_lex_state = 3},
  [471] = {.lex_state = 38, .external_lex_state = 3},
  [472] = {.lex_state = 39, .external_lex_state = 3},
  [473] = {.lex_state = 38, .external_lex_state = 3},
  [474] = {.lex_state = 39, .external_lex_state = 3},
  [475] = {.lex_state = 21, .external_lex_state = 3},
  [476] = {.lex_state = 58, .external_lex_state = 3},
  [477] = {.lex_state = 21, .external_lex_state = 3},
  [478] = {.lex_state = 21, .external_lex_state = 3},
  [479] = {.lex_state = 21, .external_lex_state = 3},
  [480] = {.lex_state = 58, .external_lex_state = 3},
  [481] = {.lex_state = 39, .external_lex_state = 3},
  [482] = {.lex_state = 21, .external_lex_state = 3},
  [483] = {.lex_state = 21, .external_lex_state = 3},
  [484] = {.lex_state = 21, .external_lex_state = 3},
  [485] = {.lex_state = 21, .external_lex_state = 3},
  [486] = {.lex_state = 21, .external_lex_state = 3},
  [487] = {.lex_state = 58, .external_lex_state = 3},
  [488] = {.lex_state = 21, .external_lex_state = 3},
  [489] = {.lex_state = 31, .external_lex_state = 3},
  [490] = {.lex_state = 21, .external_lex_state = 3},
  [491] = {.lex_state = 21, .external_lex_state = 3},
  [492] = {.lex_state = 31, .external_lex_state = 3},
  [493] = {.lex_state = 38, .external_lex_state = 3},
  [494] = {.lex_state = 39, .external_lex_state = 3},
  [495] = {.lex_state = 21, .external_lex_state = 3},
  [496] = {.lex_state = 21, .external_lex_state = 3},
  [497] = {.lex_state = 38, .external_lex_state = 3},
  [498] = {.lex_state = 61, .external_lex_state = 3},
  [499] = {.lex_state = 58, .external_lex_state = 3},
  [500] = {.lex_state = 21, .external_lex_state = 3},
  [501] = {.lex_state = 58, .external_lex_state = 3},
  [502] = {.lex_state = 21, .external_lex_state = 3},
  [503] = {.lex_state = 21, .external_lex_state = 3},
  [504] = {.lex_state = 31, .external_lex_state = 3},
  [505] = {.lex_state = 21, .external_lex_state = 3},
  [506] = {.lex_state = 21, .external_lex_state = 3},
  [507] = {.lex_state = 21, .external_lex_state = 3},
  [508] = {.lex_state = 31, .external_lex_state = 3},
  [509] = {.lex_state = 31, .external_lex_state = 3},
  [510] = {.lex_state = 31, .external_lex_state = 3},
  [511] = {.lex_state = 58, .external_lex_state = 3},
  [512] = {.lex_state = 21, .external_lex_state = 3},
  [513] = {.lex_state = 56, .external_lex_state = 3},
  [514] = {.lex_state = 31, .external_lex_state = 3},
  [515] = {.lex_state = 38, .external_lex_state = 3},
  [516] = {.lex_state = 39, .external_lex_state = 3},
  [517] = {.lex_state = 31, .external_lex_state = 3},
  [518] = {.lex_state = 21, .external_lex_state = 3},
  [519] = {.lex_state = 21, .external_lex_state = 3},
  [520] = {.lex_state = 58, .external_lex_state = 3},
  [521] = {.lex_state = 31, .external_lex_state = 3},
  [522] = {.lex_state = 21, .external_lex_state = 3},
  [523] = {.lex_state = 41, .external_lex_state = 3},
  [524] = {.lex_state = 73, .external_lex_state = 3},
  [525] = {.lex_state = 21, .external_lex_state = 3},
  [526] = {.lex_state = 31, .external_lex_state = 3},
  [527] = {.lex_state = 58, .external_lex_state = 3},
  [528] = {.lex_state = 62, .external_lex_state = 3},
  [529] = {.lex_state = 21, .external_lex_state = 3},
  [530] = {.lex_state = 21, .external_lex_state = 3},
  [531] = {.lex_state = 21, .external_lex_state = 3},
  [532] = {.lex_state = 31, .external_lex_state = 3},
  [533] = {.lex_state = 132, .external_lex_state = 3},
  [534] = {.lex_state = 31, .external_lex_state = 3},
  [535] = {.lex_state = 21, .external_lex_state = 3},
  [536] = {.lex_state = 21, .external_lex_state = 3},
  [537] = {.lex_state = 58, .external_lex_state = 3},
  [538] = {.lex_state = 21, .external_lex_state = 3},
  [539] = {.lex_state = 58, .external_lex_state = 3},
  [540] = {.lex_state = 58, .external_lex_state = 3},
  [541] = {.lex_state = 21, .external_lex_state = 3},
  [542] = {.lex_state = 21, .external_lex_state = 3},
  [543] = {.lex_state = 58, .external_lex_state = 3},
  [544] = {.lex_state = 21, .external_lex_state = 3},
  [545] = {.lex_state = 58, .external_lex_state = 3},
  [546] = {.lex_state = 21, .external_lex_state = 3},
  [547] = {.lex_state = 58, .external_lex_state = 3},
  [548] = {.lex_state = 21, .external_lex_state = 3},
  [549] = {.lex_state = 58, .external_lex_state = 3},
  [550] = {.lex_state = 21, .external_lex_state = 3},
  [551] = {.lex_state = 58, .external_lex_state = 3},
  [552] = {.lex_state = 21, .external_lex_state = 3},
  [553] = {.lex_state = 58, .external_lex_state = 3},
  [554] = {.lex_state = 21, .external_lex_state = 3},
  [555] = {.lex_state = 58, .external_lex_state = 3},
  [556] = {.lex_state = 21, .external_lex_state = 3},
  [557] = {.lex_state = 58, .external_lex_state = 3},
  [558] = {.lex_state = 21, .external_lex_state = 3},
  [559] = {.lex_state = 58, .external_lex_state = 3},
  [560] = {.lex_state = 21, .external_lex_state = 3},
  [561] = {.lex_state = 58, .external_lex_state = 3},
  [562] = {.lex_state = 21, .external_lex_state = 3},
  [563] = {.lex_state = 38, .external_lex_state = 3},
  [564] = {.lex_state = 58, .external_lex_state = 3},
  [565] = {.lex_state = 39, .external_lex_state = 3},
  [566] = {.lex_state = 58, .external_lex_state = 3},
  [567] = {.lex_state = 31, .external_lex_state = 3},
  [568] = {.lex_state = 58, .external_lex_state = 3},
  [569] = {.lex_state = 31, .external_lex_state = 3},
  [570] = {.lex_state = 58, .external_lex_state = 3},
  [571] = {.lex_state = 38, .external_lex_state = 3},
  [572] = {.lex_state = 58, .external_lex_state = 3},
  [573] = {.lex_state = 31, .external_lex_state = 3},
  [574] = {.lex_state = 58, .external_lex_state = 3},
  [575] = {.lex_state = 21, .external_lex_state = 3},
  [576] = {.lex_state = 58, .external_lex_state = 3},
  [577] = {.lex_state = 39, .external_lex_state = 3},
  [578] = {.lex_state = 21, .external_lex_state = 3},
  [579] = {.lex_state = 73, .external_lex_state = 3},
  [580] = {.lex_state = 21, .external_lex_state = 3},
  [581] = {.lex_state = 39, .external_lex_state = 3},
  [582] = {.lex_state = 38, .external_lex_state = 3},
  [583] = {.lex_state = 58, .external_lex_state = 3},
  [584] = {.lex_state = 73, .external_lex_state = 3},
  [585] = {.lex_state = 39, .external_lex_state = 3},
  [586] = {.lex_state = 38, .external_lex_state = 3},
  [587] = {.lex_state = 21, .external_lex_state = 3},
  [588] = {.lex_state = 73, .external_lex_state = 3},
  [589] = {.lex_state = 39, .external_lex_state = 3},
  [590] = {.lex_state = 38, .external_lex_state = 3},
  [591] = {.lex_state = 21, .external_lex_state = 3},
  [592] = {.lex_state = 73, .external_lex_state = 3},
  [593] = {.lex_state = 39, .external_lex_state = 3},
  [594] = {.lex_state = 38, .external_lex_state = 3},
  [595] = {.lex_state = 21, .external_lex_state = 3},
  [596] = {.lex_state = 73, .external_lex_state = 3},
  [597] = {.lex_state = 73, .external_lex_state = 3},
  [598] = {.lex_state = 73, .external_lex_state = 3},
  [599] = {.lex_state = 73, .external_lex_state = 3},
  [600] = {.lex_state = 73, .external_lex_state = 3},
  [601] = {.lex_state = 73, .external_lex_state = 3},
  [602] = {.lex_state = 73, .external_lex_state = 3},
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
    [sym_json_array] = ACTIONS(1),
    [sym_escape] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(5),
  },
  [1] = {
    [sym_dockerfile] = STATE(580),
    [sym__directive] = STATE(210),
    [sym_add] = STATE(210),
    [sym_arg] = STATE(210),
    [sym_cmd] = STATE(210),
    [sym_copy] = STATE(210),
    [sym_entrypoint] = STATE(210),
    [sym_env] = STATE(210),
    [sym_expose] = STATE(210),
    [sym_from] = STATE(210),
    [sym_healthcheck] = STATE(210),
    [sym_label] = STATE(210),
    [sym_maintainer] = STATE(210),
    [sym_onbuild] = STATE(210),
    [sym_run] = STATE(210),
    [sym_shell] = STATE(210),
    [sym_stopsignal] = STATE(210),
    [sym_user] = STATE(210),
    [sym_volume] = STATE(210),
    [sym_workdir] = STATE(210),
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
    [sym__directive] = STATE(210),
    [sym_add] = STATE(210),
    [sym_arg] = STATE(210),
    [sym_cmd] = STATE(210),
    [sym_copy] = STATE(210),
    [sym_entrypoint] = STATE(210),
    [sym_env] = STATE(210),
    [sym_expose] = STATE(210),
    [sym_from] = STATE(210),
    [sym_healthcheck] = STATE(210),
    [sym_label] = STATE(210),
    [sym_maintainer] = STATE(210),
    [sym_onbuild] = STATE(210),
    [sym_run] = STATE(210),
    [sym_shell] = STATE(210),
    [sym_stopsignal] = STATE(210),
    [sym_user] = STATE(210),
    [sym_volume] = STATE(210),
    [sym_workdir] = STATE(210),
    [aux_sym_dockerfile_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(49),
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
    [sym__blank_line] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [3] = {
    [sym__directive] = STATE(210),
    [sym_add] = STATE(210),
    [sym_arg] = STATE(210),
    [sym_cmd] = STATE(210),
    [sym_copy] = STATE(210),
    [sym_entrypoint] = STATE(210),
    [sym_env] = STATE(210),
    [sym_expose] = STATE(210),
    [sym_from] = STATE(210),
    [sym_healthcheck] = STATE(210),
    [sym_label] = STATE(210),
    [sym_maintainer] = STATE(210),
    [sym_onbuild] = STATE(210),
    [sym_run] = STATE(210),
    [sym_shell] = STATE(210),
    [sym_stopsignal] = STATE(210),
    [sym_user] = STATE(210),
    [sym_volume] = STATE(210),
    [sym_workdir] = STATE(210),
    [aux_sym_dockerfile_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(53),
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
    [sym__blank_line] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [4] = {
    [sym__directive] = STATE(210),
    [sym_add] = STATE(210),
    [sym_arg] = STATE(210),
    [sym_cmd] = STATE(210),
    [sym_copy] = STATE(210),
    [sym_entrypoint] = STATE(210),
    [sym_env] = STATE(210),
    [sym_expose] = STATE(210),
    [sym_from] = STATE(210),
    [sym_healthcheck] = STATE(210),
    [sym_label] = STATE(210),
    [sym_maintainer] = STATE(210),
    [sym_onbuild] = STATE(210),
    [sym_run] = STATE(210),
    [sym_shell] = STATE(210),
    [sym_stopsignal] = STATE(210),
    [sym_user] = STATE(210),
    [sym_volume] = STATE(210),
    [sym_workdir] = STATE(210),
    [aux_sym_dockerfile_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(55),
    [aux_sym_add_token1] = ACTIONS(57),
    [aux_sym_arg_token1] = ACTIONS(60),
    [aux_sym_cmd_token1] = ACTIONS(63),
    [aux_sym_copy_token1] = ACTIONS(66),
    [aux_sym_entrypoint_token1] = ACTIONS(69),
    [aux_sym_env_token1] = ACTIONS(72),
    [aux_sym_expose_token1] = ACTIONS(75),
    [aux_sym_from_token1] = ACTIONS(78),
    [aux_sym_healthcheck_token1] = ACTIONS(81),
    [aux_sym_label_token1] = ACTIONS(84),
    [aux_sym_maintainer_token1] = ACTIONS(87),
    [aux_sym_onbuild_token1] = ACTIONS(90),
    [aux_sym_run_token1] = ACTIONS(93),
    [aux_sym_shell_token1] = ACTIONS(96),
    [aux_sym_stopsignal_token1] = ACTIONS(99),
    [aux_sym_user_token1] = ACTIONS(102),
    [aux_sym_volume_token1] = ACTIONS(105),
    [aux_sym_workdir_token1] = ACTIONS(108),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(111),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [5] = {
    [sym__directive] = STATE(210),
    [sym_add] = STATE(210),
    [sym_arg] = STATE(210),
    [sym_cmd] = STATE(210),
    [sym_copy] = STATE(210),
    [sym_entrypoint] = STATE(210),
    [sym_env] = STATE(210),
    [sym_expose] = STATE(210),
    [sym_from] = STATE(210),
    [sym_healthcheck] = STATE(210),
    [sym_label] = STATE(210),
    [sym_maintainer] = STATE(210),
    [sym_onbuild] = STATE(210),
    [sym_run] = STATE(210),
    [sym_shell] = STATE(210),
    [sym_stopsignal] = STATE(210),
    [sym_user] = STATE(210),
    [sym_volume] = STATE(210),
    [sym_workdir] = STATE(210),
    [aux_sym_dockerfile_repeat1] = STATE(4),
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
    [sym__blank_line] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [6] = {
    [sym__port_spec] = STATE(7),
    [sym_mapped_port] = STATE(7),
    [sym__port] = STATE(101),
    [sym_port] = STATE(101),
    [sym_port_range] = STATE(101),
    [sym__port_part] = STATE(78),
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
    [anon_sym_DOLLAR] = ACTIONS(120),
    [aux_sym_volume_token1] = ACTIONS(116),
    [aux_sym_workdir_token1] = ACTIONS(116),
    [aux_sym__port_part_token1] = ACTIONS(122),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(116),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [7] = {
    [sym__port_spec] = STATE(7),
    [sym_mapped_port] = STATE(7),
    [sym__port] = STATE(101),
    [sym_port] = STATE(101),
    [sym_port_range] = STATE(101),
    [sym__port_part] = STATE(78),
    [aux_sym_expose_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_add_token1] = ACTIONS(124),
    [aux_sym_arg_token1] = ACTIONS(124),
    [aux_sym_cmd_token1] = ACTIONS(124),
    [aux_sym_copy_token1] = ACTIONS(124),
    [aux_sym_entrypoint_token1] = ACTIONS(124),
    [aux_sym_env_token1] = ACTIONS(124),
    [aux_sym_expose_token1] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [aux_sym_from_token1] = ACTIONS(124),
    [aux_sym_healthcheck_token1] = ACTIONS(124),
    [aux_sym_label_token1] = ACTIONS(124),
    [aux_sym_maintainer_token1] = ACTIONS(124),
    [aux_sym_onbuild_token1] = ACTIONS(124),
    [aux_sym_run_token1] = ACTIONS(124),
    [aux_sym_shell_token1] = ACTIONS(124),
    [aux_sym_stopsignal_token1] = ACTIONS(124),
    [aux_sym_user_token1] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [aux_sym_volume_token1] = ACTIONS(124),
    [aux_sym_workdir_token1] = ACTIONS(124),
    [aux_sym__port_part_token1] = ACTIONS(132),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(124),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [8] = {
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
  [9] = {
    [aux_sym_from_layer_repeat1] = STATE(9),
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
    [anon_sym_DOLLAR] = ACTIONS(139),
    [aux_sym_volume_token1] = ACTIONS(137),
    [aux_sym_workdir_token1] = ACTIONS(137),
    [aux_sym_from_layer_token3] = ACTIONS(139),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(135),
    [aux_sym__repository_start_token1] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym__space_no_newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [10] = {
    [aux_sym_from_layer_repeat4] = STATE(10),
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
    [aux_sym_from_layer_token4] = ACTIONS(144),
    [aux_sym_from_layer_token13] = ACTIONS(146),
    [aux_sym_from_layer_token16] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(142),
    [aux_sym__repository_start_token1] = ACTIONS(142),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [11] = {
    [aux_sym_from_layer_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_add_token1] = ACTIONS(151),
    [aux_sym_arg_token1] = ACTIONS(151),
    [aux_sym_cmd_token1] = ACTIONS(151),
    [aux_sym_copy_token1] = ACTIONS(151),
    [aux_sym_entrypoint_token1] = ACTIONS(151),
    [aux_sym_env_token1] = ACTIONS(151),
    [aux_sym_expose_token1] = ACTIONS(151),
    [aux_sym_from_token1] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(149),
    [aux_sym_healthcheck_token1] = ACTIONS(151),
    [aux_sym_label_token1] = ACTIONS(151),
    [aux_sym_maintainer_token1] = ACTIONS(151),
    [aux_sym_onbuild_token1] = ACTIONS(151),
    [aux_sym_run_token1] = ACTIONS(151),
    [aux_sym_shell_token1] = ACTIONS(151),
    [aux_sym_stopsignal_token1] = ACTIONS(151),
    [aux_sym_user_token1] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [aux_sym_volume_token1] = ACTIONS(151),
    [aux_sym_workdir_token1] = ACTIONS(151),
    [aux_sym_from_layer_token3] = ACTIONS(153),
    [aux_sym_from_layer_token4] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(157),
    [aux_sym__repository_start_token1] = ACTIONS(157),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(149),
    [sym__space_no_newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [12] = {
    [aux_sym_from_layer_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_add_token1] = ACTIONS(151),
    [aux_sym_arg_token1] = ACTIONS(151),
    [aux_sym_cmd_token1] = ACTIONS(151),
    [aux_sym_copy_token1] = ACTIONS(151),
    [aux_sym_entrypoint_token1] = ACTIONS(151),
    [aux_sym_env_token1] = ACTIONS(151),
    [aux_sym_expose_token1] = ACTIONS(151),
    [aux_sym_from_token1] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(149),
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
    [aux_sym_from_layer_token4] = ACTIONS(155),
    [aux_sym_from_layer_token5] = ACTIONS(159),
    [aux_sym_from_layer_token8] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(157),
    [aux_sym__repository_start_token1] = ACTIONS(157),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(149),
    [sym__space_no_newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [13] = {
    [aux_sym_from_layer_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_add_token1] = ACTIONS(163),
    [aux_sym_arg_token1] = ACTIONS(163),
    [aux_sym_cmd_token1] = ACTIONS(163),
    [aux_sym_copy_token1] = ACTIONS(163),
    [aux_sym_entrypoint_token1] = ACTIONS(163),
    [aux_sym_env_token1] = ACTIONS(163),
    [aux_sym_expose_token1] = ACTIONS(163),
    [aux_sym_from_token1] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(161),
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
    [aux_sym_from_layer_token4] = ACTIONS(165),
    [aux_sym_from_layer_token5] = ACTIONS(159),
    [aux_sym_from_layer_token8] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(167),
    [aux_sym__repository_start_token1] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [14] = {
    [aux_sym_from_layer_repeat1] = STATE(11),
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
    [anon_sym_DOLLAR] = ACTIONS(153),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym_from_layer_token3] = ACTIONS(153),
    [aux_sym_from_layer_token4] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(175),
    [aux_sym__repository_start_token1] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [15] = {
    [aux_sym_from_layer_repeat3] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_add_token1] = ACTIONS(151),
    [aux_sym_arg_token1] = ACTIONS(151),
    [aux_sym_cmd_token1] = ACTIONS(151),
    [aux_sym_copy_token1] = ACTIONS(151),
    [aux_sym_entrypoint_token1] = ACTIONS(151),
    [aux_sym_env_token1] = ACTIONS(151),
    [aux_sym_expose_token1] = ACTIONS(151),
    [aux_sym_from_token1] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(149),
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
    [aux_sym_from_layer_token4] = ACTIONS(155),
    [aux_sym_from_layer_token9] = ACTIONS(177),
    [aux_sym_from_layer_token12] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(157),
    [aux_sym__repository_start_token1] = ACTIONS(157),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(149),
    [sym__space_no_newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [16] = {
    [aux_sym_from_layer_repeat4] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_add_token1] = ACTIONS(151),
    [aux_sym_arg_token1] = ACTIONS(151),
    [aux_sym_cmd_token1] = ACTIONS(151),
    [aux_sym_copy_token1] = ACTIONS(151),
    [aux_sym_entrypoint_token1] = ACTIONS(151),
    [aux_sym_env_token1] = ACTIONS(151),
    [aux_sym_expose_token1] = ACTIONS(151),
    [aux_sym_from_token1] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(149),
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
    [aux_sym_from_layer_token4] = ACTIONS(155),
    [aux_sym_from_layer_token13] = ACTIONS(179),
    [aux_sym_from_layer_token16] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(157),
    [aux_sym__repository_start_token1] = ACTIONS(157),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(149),
    [sym__space_no_newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [17] = {
    [aux_sym_from_layer_repeat3] = STATE(17),
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
    [aux_sym_from_layer_token9] = ACTIONS(185),
    [aux_sym_from_layer_token12] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(181),
    [aux_sym__repository_start_token1] = ACTIONS(181),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(181),
    [sym__space_no_newline] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [18] = {
    [aux_sym_from_layer_repeat4] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_add_token1] = ACTIONS(163),
    [aux_sym_arg_token1] = ACTIONS(163),
    [aux_sym_cmd_token1] = ACTIONS(163),
    [aux_sym_copy_token1] = ACTIONS(163),
    [aux_sym_entrypoint_token1] = ACTIONS(163),
    [aux_sym_env_token1] = ACTIONS(163),
    [aux_sym_expose_token1] = ACTIONS(163),
    [aux_sym_from_token1] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(161),
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
    [aux_sym_from_layer_token4] = ACTIONS(165),
    [aux_sym_from_layer_token13] = ACTIONS(179),
    [aux_sym_from_layer_token16] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(167),
    [aux_sym__repository_start_token1] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [19] = {
    [aux_sym_from_layer_repeat2] = STATE(19),
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
    [aux_sym_from_layer_token5] = ACTIONS(192),
    [aux_sym_from_layer_token8] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(188),
    [aux_sym__repository_start_token1] = ACTIONS(188),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(188),
    [sym__space_no_newline] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [20] = {
    [aux_sym_from_layer_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_add_token1] = ACTIONS(163),
    [aux_sym_arg_token1] = ACTIONS(163),
    [aux_sym_cmd_token1] = ACTIONS(163),
    [aux_sym_copy_token1] = ACTIONS(163),
    [aux_sym_entrypoint_token1] = ACTIONS(163),
    [aux_sym_env_token1] = ACTIONS(163),
    [aux_sym_expose_token1] = ACTIONS(163),
    [aux_sym_from_token1] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(161),
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
    [aux_sym_from_layer_token4] = ACTIONS(165),
    [aux_sym_from_layer_token9] = ACTIONS(177),
    [aux_sym_from_layer_token12] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(167),
    [aux_sym__repository_start_token1] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(163),
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
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [aux_sym_from_layer_token13] = ACTIONS(199),
    [aux_sym_from_layer_token16] = ACTIONS(199),
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
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [aux_sym_from_layer_token9] = ACTIONS(203),
    [aux_sym_from_layer_token12] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token1] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [aux_sym_from_layer_token3] = ACTIONS(207),
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token1] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [25] = {
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
    [anon_sym_DOLLAR] = ACTIONS(135),
    [aux_sym_volume_token1] = ACTIONS(137),
    [aux_sym_workdir_token1] = ACTIONS(137),
    [aux_sym_from_layer_token3] = ACTIONS(135),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(135),
    [aux_sym__repository_start_token1] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym__space_no_newline] = ACTIONS(137),
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
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(213),
    [aux_sym_workdir_token1] = ACTIONS(213),
    [aux_sym_from_layer_token3] = ACTIONS(211),
    [aux_sym_from_layer_token4] = ACTIONS(213),
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
    [aux_sym_from_layer_token5] = ACTIONS(215),
    [aux_sym_from_layer_token8] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [aux_sym__repository_start_token1] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [28] = {
    [aux_sym_from_layer_repeat1] = STATE(28),
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
    [anon_sym_DOLLAR] = ACTIONS(219),
    [aux_sym_volume_token1] = ACTIONS(137),
    [aux_sym_workdir_token1] = ACTIONS(137),
    [aux_sym_from_layer_token3] = ACTIONS(219),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym__space_no_newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [29] = {
    [sym_port_protocol] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(222),
    [aux_sym_add_token1] = ACTIONS(222),
    [aux_sym_arg_token1] = ACTIONS(222),
    [aux_sym_cmd_token1] = ACTIONS(222),
    [aux_sym_copy_token1] = ACTIONS(222),
    [aux_sym_entrypoint_token1] = ACTIONS(222),
    [aux_sym_env_token1] = ACTIONS(222),
    [aux_sym_expose_token1] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [aux_sym_from_token1] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [aux_sym_healthcheck_token1] = ACTIONS(222),
    [aux_sym_label_token1] = ACTIONS(222),
    [aux_sym_maintainer_token1] = ACTIONS(222),
    [aux_sym_onbuild_token1] = ACTIONS(222),
    [aux_sym_run_token1] = ACTIONS(222),
    [aux_sym_shell_token1] = ACTIONS(222),
    [aux_sym_stopsignal_token1] = ACTIONS(222),
    [aux_sym_user_token1] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(222),
    [aux_sym_volume_token1] = ACTIONS(222),
    [aux_sym_workdir_token1] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [aux_sym__port_part_token1] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(224),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(222),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [30] = {
    [aux_sym_from_layer_repeat2] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_add_token1] = ACTIONS(151),
    [aux_sym_arg_token1] = ACTIONS(151),
    [aux_sym_cmd_token1] = ACTIONS(151),
    [aux_sym_copy_token1] = ACTIONS(151),
    [aux_sym_entrypoint_token1] = ACTIONS(151),
    [aux_sym_env_token1] = ACTIONS(151),
    [aux_sym_expose_token1] = ACTIONS(151),
    [aux_sym_from_token1] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(149),
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
    [aux_sym_from_layer_token4] = ACTIONS(226),
    [aux_sym_from_layer_token5] = ACTIONS(228),
    [aux_sym_from_layer_token8] = ACTIONS(228),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(149),
    [sym__space_no_newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [31] = {
    [aux_sym_from_layer_repeat2] = STATE(31),
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
    [aux_sym_from_layer_token5] = ACTIONS(230),
    [aux_sym_from_layer_token8] = ACTIONS(230),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(188),
    [sym__space_no_newline] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [32] = {
    [aux_sym_from_layer_repeat1] = STATE(40),
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
    [anon_sym_DOLLAR] = ACTIONS(233),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym_from_layer_token3] = ACTIONS(233),
    [aux_sym_from_layer_token4] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [33] = {
    [aux_sym_from_layer_repeat3] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_add_token1] = ACTIONS(151),
    [aux_sym_arg_token1] = ACTIONS(151),
    [aux_sym_cmd_token1] = ACTIONS(151),
    [aux_sym_copy_token1] = ACTIONS(151),
    [aux_sym_entrypoint_token1] = ACTIONS(151),
    [aux_sym_env_token1] = ACTIONS(151),
    [aux_sym_expose_token1] = ACTIONS(151),
    [aux_sym_from_token1] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(149),
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
    [aux_sym_from_layer_token4] = ACTIONS(226),
    [aux_sym_from_layer_token9] = ACTIONS(237),
    [aux_sym_from_layer_token12] = ACTIONS(237),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(149),
    [sym__space_no_newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [34] = {
    [aux_sym_from_layer_repeat3] = STATE(34),
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
    [aux_sym_from_layer_token9] = ACTIONS(239),
    [aux_sym_from_layer_token12] = ACTIONS(239),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(181),
    [sym__space_no_newline] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [35] = {
    [aux_sym_from_layer_repeat4] = STATE(35),
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
    [aux_sym_from_layer_token4] = ACTIONS(144),
    [aux_sym_from_layer_token13] = ACTIONS(242),
    [aux_sym_from_layer_token16] = ACTIONS(242),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [36] = {
    [aux_sym_from_layer_repeat4] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_add_token1] = ACTIONS(151),
    [aux_sym_arg_token1] = ACTIONS(151),
    [aux_sym_cmd_token1] = ACTIONS(151),
    [aux_sym_copy_token1] = ACTIONS(151),
    [aux_sym_entrypoint_token1] = ACTIONS(151),
    [aux_sym_env_token1] = ACTIONS(151),
    [aux_sym_expose_token1] = ACTIONS(151),
    [aux_sym_from_token1] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(149),
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
    [aux_sym_from_layer_token4] = ACTIONS(226),
    [aux_sym_from_layer_token13] = ACTIONS(245),
    [aux_sym_from_layer_token16] = ACTIONS(245),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(149),
    [sym__space_no_newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [37] = {
    [aux_sym_from_layer_repeat4] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_add_token1] = ACTIONS(163),
    [aux_sym_arg_token1] = ACTIONS(163),
    [aux_sym_cmd_token1] = ACTIONS(163),
    [aux_sym_copy_token1] = ACTIONS(163),
    [aux_sym_entrypoint_token1] = ACTIONS(163),
    [aux_sym_env_token1] = ACTIONS(163),
    [aux_sym_expose_token1] = ACTIONS(163),
    [aux_sym_from_token1] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
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
    [aux_sym_from_layer_token4] = ACTIONS(247),
    [aux_sym_from_layer_token13] = ACTIONS(245),
    [aux_sym_from_layer_token16] = ACTIONS(245),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [38] = {
    [sym_port_protocol] = STATE(76),
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
    [anon_sym_SLASH] = ACTIONS(224),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [39] = {
    [aux_sym_from_layer_repeat3] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_add_token1] = ACTIONS(163),
    [aux_sym_arg_token1] = ACTIONS(163),
    [aux_sym_cmd_token1] = ACTIONS(163),
    [aux_sym_copy_token1] = ACTIONS(163),
    [aux_sym_entrypoint_token1] = ACTIONS(163),
    [aux_sym_env_token1] = ACTIONS(163),
    [aux_sym_expose_token1] = ACTIONS(163),
    [aux_sym_from_token1] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
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
    [aux_sym_from_layer_token4] = ACTIONS(247),
    [aux_sym_from_layer_token9] = ACTIONS(237),
    [aux_sym_from_layer_token12] = ACTIONS(237),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [40] = {
    [aux_sym_from_layer_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_add_token1] = ACTIONS(151),
    [aux_sym_arg_token1] = ACTIONS(151),
    [aux_sym_cmd_token1] = ACTIONS(151),
    [aux_sym_copy_token1] = ACTIONS(151),
    [aux_sym_entrypoint_token1] = ACTIONS(151),
    [aux_sym_env_token1] = ACTIONS(151),
    [aux_sym_expose_token1] = ACTIONS(151),
    [aux_sym_from_token1] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(149),
    [aux_sym_healthcheck_token1] = ACTIONS(151),
    [aux_sym_label_token1] = ACTIONS(151),
    [aux_sym_maintainer_token1] = ACTIONS(151),
    [aux_sym_onbuild_token1] = ACTIONS(151),
    [aux_sym_run_token1] = ACTIONS(151),
    [aux_sym_shell_token1] = ACTIONS(151),
    [aux_sym_stopsignal_token1] = ACTIONS(151),
    [aux_sym_user_token1] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [aux_sym_volume_token1] = ACTIONS(151),
    [aux_sym_workdir_token1] = ACTIONS(151),
    [aux_sym_from_layer_token3] = ACTIONS(233),
    [aux_sym_from_layer_token4] = ACTIONS(226),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(149),
    [sym__space_no_newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [41] = {
    [aux_sym_from_layer_repeat2] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_add_token1] = ACTIONS(163),
    [aux_sym_arg_token1] = ACTIONS(163),
    [aux_sym_cmd_token1] = ACTIONS(163),
    [aux_sym_copy_token1] = ACTIONS(163),
    [aux_sym_entrypoint_token1] = ACTIONS(163),
    [aux_sym_env_token1] = ACTIONS(163),
    [aux_sym_expose_token1] = ACTIONS(163),
    [aux_sym_from_token1] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
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
    [aux_sym_from_layer_token4] = ACTIONS(247),
    [aux_sym_from_layer_token5] = ACTIONS(228),
    [aux_sym_from_layer_token8] = ACTIONS(228),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [42] = {
    [sym_path] = STATE(82),
    [aux_sym__paths] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym_add_token1] = ACTIONS(251),
    [aux_sym_arg_token1] = ACTIONS(251),
    [aux_sym_cmd_token1] = ACTIONS(251),
    [aux_sym_copy_token1] = ACTIONS(251),
    [aux_sym_entrypoint_token1] = ACTIONS(251),
    [aux_sym_env_token1] = ACTIONS(251),
    [aux_sym_expose_token1] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(251),
    [aux_sym_healthcheck_token1] = ACTIONS(251),
    [aux_sym_label_token1] = ACTIONS(251),
    [aux_sym_maintainer_token1] = ACTIONS(251),
    [aux_sym_onbuild_token1] = ACTIONS(251),
    [aux_sym_run_token1] = ACTIONS(251),
    [aux_sym_shell_token1] = ACTIONS(251),
    [aux_sym_stopsignal_token1] = ACTIONS(251),
    [aux_sym_user_token1] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_volume_token1] = ACTIONS(251),
    [aux_sym_workdir_token1] = ACTIONS(251),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(251),
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
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [aux_sym_from_layer_token13] = ACTIONS(199),
    [aux_sym_from_layer_token16] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [44] = {
    [sym_path] = STATE(82),
    [aux_sym__paths] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(261),
    [aux_sym_arg_token1] = ACTIONS(261),
    [aux_sym_cmd_token1] = ACTIONS(261),
    [aux_sym_copy_token1] = ACTIONS(261),
    [aux_sym_entrypoint_token1] = ACTIONS(261),
    [aux_sym_env_token1] = ACTIONS(261),
    [aux_sym_expose_token1] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(261),
    [aux_sym_healthcheck_token1] = ACTIONS(261),
    [aux_sym_label_token1] = ACTIONS(261),
    [aux_sym_maintainer_token1] = ACTIONS(261),
    [aux_sym_onbuild_token1] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(261),
    [aux_sym_shell_token1] = ACTIONS(261),
    [aux_sym_stopsignal_token1] = ACTIONS(261),
    [aux_sym_user_token1] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_volume_token1] = ACTIONS(261),
    [aux_sym_workdir_token1] = ACTIONS(261),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [45] = {
    [sym_path] = STATE(82),
    [aux_sym__paths] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_add_token1] = ACTIONS(263),
    [aux_sym_arg_token1] = ACTIONS(263),
    [aux_sym_cmd_token1] = ACTIONS(263),
    [aux_sym_copy_token1] = ACTIONS(263),
    [aux_sym_entrypoint_token1] = ACTIONS(263),
    [aux_sym_env_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(263),
    [aux_sym_healthcheck_token1] = ACTIONS(263),
    [aux_sym_label_token1] = ACTIONS(263),
    [aux_sym_maintainer_token1] = ACTIONS(263),
    [aux_sym_onbuild_token1] = ACTIONS(263),
    [aux_sym_run_token1] = ACTIONS(263),
    [aux_sym_shell_token1] = ACTIONS(263),
    [aux_sym_stopsignal_token1] = ACTIONS(263),
    [aux_sym_user_token1] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_volume_token1] = ACTIONS(263),
    [aux_sym_workdir_token1] = ACTIONS(263),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [46] = {
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
    [anon_sym_SLASH] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [47] = {
    [sym_path] = STATE(82),
    [aux_sym__paths] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(265),
    [aux_sym_add_token1] = ACTIONS(265),
    [aux_sym_arg_token1] = ACTIONS(265),
    [aux_sym_cmd_token1] = ACTIONS(265),
    [aux_sym_copy_token1] = ACTIONS(265),
    [aux_sym_entrypoint_token1] = ACTIONS(265),
    [aux_sym_env_token1] = ACTIONS(265),
    [aux_sym_expose_token1] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(265),
    [aux_sym_healthcheck_token1] = ACTIONS(265),
    [aux_sym_label_token1] = ACTIONS(265),
    [aux_sym_maintainer_token1] = ACTIONS(265),
    [aux_sym_onbuild_token1] = ACTIONS(265),
    [aux_sym_run_token1] = ACTIONS(265),
    [aux_sym_shell_token1] = ACTIONS(265),
    [aux_sym_stopsignal_token1] = ACTIONS(265),
    [aux_sym_user_token1] = ACTIONS(265),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_volume_token1] = ACTIONS(265),
    [aux_sym_workdir_token1] = ACTIONS(265),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [48] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [49] = {
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
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(213),
    [aux_sym_workdir_token1] = ACTIONS(213),
    [aux_sym_from_layer_token3] = ACTIONS(211),
    [aux_sym_from_layer_token4] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym__space_no_newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [50] = {
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
  [51] = {
    [sym_path] = STATE(82),
    [aux_sym__paths] = STATE(51),
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
  [52] = {
    [aux_sym_path_repeat1] = STATE(62),
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
  [53] = {
    [aux_sym_from_layer_repeat1] = STATE(9),
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
    [anon_sym_DOLLAR] = ACTIONS(153),
    [aux_sym_volume_token1] = ACTIONS(293),
    [aux_sym_workdir_token1] = ACTIONS(293),
    [aux_sym_from_layer_token3] = ACTIONS(153),
    [aux_sym_from_layer_token4] = ACTIONS(295),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [54] = {
    [aux_sym_from_layer_repeat1] = STATE(53),
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
    [anon_sym_DOLLAR] = ACTIONS(153),
    [aux_sym_volume_token1] = ACTIONS(299),
    [aux_sym_workdir_token1] = ACTIONS(299),
    [aux_sym_from_layer_token3] = ACTIONS(153),
    [aux_sym_from_layer_token4] = ACTIONS(301),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(297),
    [sym__space_no_newline] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [55] = {
    [aux_sym_from_layer_repeat2] = STATE(63),
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
    [aux_sym_from_layer_token5] = ACTIONS(159),
    [aux_sym_from_layer_token8] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [56] = {
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
    [aux_sym_from_layer_token9] = ACTIONS(203),
    [aux_sym_from_layer_token12] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [57] = {
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
    [aux_sym_from_layer_token5] = ACTIONS(215),
    [aux_sym_from_layer_token8] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [58] = {
    [aux_sym_from_layer_repeat4] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(303),
    [aux_sym_add_token1] = ACTIONS(305),
    [aux_sym_arg_token1] = ACTIONS(305),
    [aux_sym_cmd_token1] = ACTIONS(305),
    [aux_sym_copy_token1] = ACTIONS(305),
    [aux_sym_entrypoint_token1] = ACTIONS(305),
    [aux_sym_env_token1] = ACTIONS(305),
    [aux_sym_expose_token1] = ACTIONS(305),
    [aux_sym_from_token1] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(303),
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
    [aux_sym_from_layer_token4] = ACTIONS(307),
    [aux_sym_from_layer_token13] = ACTIONS(179),
    [aux_sym_from_layer_token16] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(303),
    [sym__space_no_newline] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [59] = {
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
    [anon_sym_DOLLAR] = ACTIONS(135),
    [aux_sym_volume_token1] = ACTIONS(137),
    [aux_sym_workdir_token1] = ACTIONS(137),
    [aux_sym_from_layer_token3] = ACTIONS(135),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym__space_no_newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [60] = {
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
  [61] = {
    [aux_sym_from_layer_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(303),
    [aux_sym_add_token1] = ACTIONS(305),
    [aux_sym_arg_token1] = ACTIONS(305),
    [aux_sym_cmd_token1] = ACTIONS(305),
    [aux_sym_copy_token1] = ACTIONS(305),
    [aux_sym_entrypoint_token1] = ACTIONS(305),
    [aux_sym_env_token1] = ACTIONS(305),
    [aux_sym_expose_token1] = ACTIONS(305),
    [aux_sym_from_token1] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(303),
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
    [aux_sym_from_layer_token4] = ACTIONS(307),
    [aux_sym_from_layer_token9] = ACTIONS(177),
    [aux_sym_from_layer_token12] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(303),
    [sym__space_no_newline] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [62] = {
    [aux_sym_path_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_add_token1] = ACTIONS(309),
    [aux_sym_arg_token1] = ACTIONS(309),
    [aux_sym_cmd_token1] = ACTIONS(309),
    [aux_sym_copy_token1] = ACTIONS(309),
    [aux_sym_entrypoint_token1] = ACTIONS(309),
    [aux_sym_env_token1] = ACTIONS(309),
    [aux_sym_expose_token1] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [aux_sym_from_token1] = ACTIONS(309),
    [aux_sym_healthcheck_token1] = ACTIONS(309),
    [aux_sym_label_token1] = ACTIONS(309),
    [aux_sym_maintainer_token1] = ACTIONS(309),
    [aux_sym_onbuild_token1] = ACTIONS(309),
    [aux_sym_run_token1] = ACTIONS(309),
    [aux_sym_shell_token1] = ACTIONS(309),
    [aux_sym_stopsignal_token1] = ACTIONS(309),
    [aux_sym_user_token1] = ACTIONS(309),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [aux_sym_volume_token1] = ACTIONS(309),
    [aux_sym_workdir_token1] = ACTIONS(309),
    [aux_sym_path_token1] = ACTIONS(311),
    [aux_sym_path_token2] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(309),
    [sym__space_no_newline] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [63] = {
    [aux_sym_from_layer_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(303),
    [aux_sym_add_token1] = ACTIONS(305),
    [aux_sym_arg_token1] = ACTIONS(305),
    [aux_sym_cmd_token1] = ACTIONS(305),
    [aux_sym_copy_token1] = ACTIONS(305),
    [aux_sym_entrypoint_token1] = ACTIONS(305),
    [aux_sym_env_token1] = ACTIONS(305),
    [aux_sym_expose_token1] = ACTIONS(305),
    [aux_sym_from_token1] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(303),
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
    [aux_sym_from_layer_token4] = ACTIONS(307),
    [aux_sym_from_layer_token5] = ACTIONS(159),
    [aux_sym_from_layer_token8] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(303),
    [sym__space_no_newline] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [64] = {
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
  [65] = {
    [aux_sym_from_layer_repeat4] = STATE(58),
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
    [aux_sym_from_layer_token13] = ACTIONS(179),
    [aux_sym_from_layer_token16] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [66] = {
    [aux_sym_from_layer_repeat3] = STATE(61),
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
    [aux_sym_from_layer_token9] = ACTIONS(177),
    [aux_sym_from_layer_token12] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym__space_no_newline] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
    [aux_sym_path_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(315),
    [aux_sym_add_token1] = ACTIONS(315),
    [aux_sym_arg_token1] = ACTIONS(315),
    [aux_sym_cmd_token1] = ACTIONS(315),
    [aux_sym_copy_token1] = ACTIONS(315),
    [aux_sym_entrypoint_token1] = ACTIONS(315),
    [aux_sym_env_token1] = ACTIONS(315),
    [aux_sym_expose_token1] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [aux_sym_from_token1] = ACTIONS(315),
    [aux_sym_healthcheck_token1] = ACTIONS(315),
    [aux_sym_label_token1] = ACTIONS(315),
    [aux_sym_maintainer_token1] = ACTIONS(315),
    [aux_sym_onbuild_token1] = ACTIONS(315),
    [aux_sym_run_token1] = ACTIONS(315),
    [aux_sym_shell_token1] = ACTIONS(315),
    [aux_sym_stopsignal_token1] = ACTIONS(315),
    [aux_sym_user_token1] = ACTIONS(315),
    [anon_sym_DOLLAR] = ACTIONS(317),
    [aux_sym_volume_token1] = ACTIONS(315),
    [aux_sym_workdir_token1] = ACTIONS(315),
    [aux_sym_path_token1] = ACTIONS(320),
    [aux_sym_path_token2] = ACTIONS(322),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(315),
    [sym__space_no_newline] = ACTIONS(320),
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
    [aux_sym_from_layer_repeat4] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(327),
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
    [aux_sym_from_layer_token4] = ACTIONS(331),
    [aux_sym_from_layer_token13] = ACTIONS(179),
    [aux_sym_from_layer_token16] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(327),
    [sym__space_no_newline] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [70] = {
    [aux_sym_from_layer_repeat2] = STATE(92),
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
    [aux_sym_from_layer_token4] = ACTIONS(337),
    [aux_sym_from_layer_token5] = ACTIONS(159),
    [aux_sym_from_layer_token8] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [71] = {
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
  [72] = {
    [aux_sym_from_layer_repeat3] = STATE(90),
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
    [aux_sym_from_layer_token4] = ACTIONS(337),
    [aux_sym_from_layer_token9] = ACTIONS(177),
    [aux_sym_from_layer_token12] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_add_token1] = ACTIONS(309),
    [aux_sym_arg_token1] = ACTIONS(309),
    [aux_sym_cmd_token1] = ACTIONS(309),
    [aux_sym_copy_token1] = ACTIONS(309),
    [aux_sym_entrypoint_token1] = ACTIONS(309),
    [aux_sym_env_token1] = ACTIONS(309),
    [aux_sym_expose_token1] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [aux_sym_from_token1] = ACTIONS(309),
    [aux_sym_healthcheck_token1] = ACTIONS(309),
    [aux_sym_label_token1] = ACTIONS(309),
    [aux_sym_maintainer_token1] = ACTIONS(309),
    [aux_sym_onbuild_token1] = ACTIONS(309),
    [aux_sym_run_token1] = ACTIONS(309),
    [aux_sym_shell_token1] = ACTIONS(309),
    [aux_sym_stopsignal_token1] = ACTIONS(309),
    [aux_sym_user_token1] = ACTIONS(309),
    [anon_sym_DOLLAR] = ACTIONS(309),
    [aux_sym_volume_token1] = ACTIONS(309),
    [aux_sym_workdir_token1] = ACTIONS(309),
    [aux_sym_path_token1] = ACTIONS(313),
    [aux_sym_path_token2] = ACTIONS(313),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(309),
    [sym__space_no_newline] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [aux_sym_add_token1] = ACTIONS(315),
    [aux_sym_arg_token1] = ACTIONS(315),
    [aux_sym_cmd_token1] = ACTIONS(315),
    [aux_sym_copy_token1] = ACTIONS(315),
    [aux_sym_entrypoint_token1] = ACTIONS(315),
    [aux_sym_env_token1] = ACTIONS(315),
    [aux_sym_expose_token1] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [aux_sym_from_token1] = ACTIONS(315),
    [aux_sym_healthcheck_token1] = ACTIONS(315),
    [aux_sym_label_token1] = ACTIONS(315),
    [aux_sym_maintainer_token1] = ACTIONS(315),
    [aux_sym_onbuild_token1] = ACTIONS(315),
    [aux_sym_run_token1] = ACTIONS(315),
    [aux_sym_shell_token1] = ACTIONS(315),
    [aux_sym_stopsignal_token1] = ACTIONS(315),
    [aux_sym_user_token1] = ACTIONS(315),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [aux_sym_volume_token1] = ACTIONS(315),
    [aux_sym_workdir_token1] = ACTIONS(315),
    [aux_sym_path_token1] = ACTIONS(320),
    [aux_sym_path_token2] = ACTIONS(320),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(315),
    [sym__space_no_newline] = ACTIONS(320),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [75] = {
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
    [aux_sym__repository_start_token1] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(341),
    [sym__space_no_newline] = ACTIONS(343),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [aux_sym_add_token1] = ACTIONS(222),
    [aux_sym_arg_token1] = ACTIONS(222),
    [aux_sym_cmd_token1] = ACTIONS(222),
    [aux_sym_copy_token1] = ACTIONS(222),
    [aux_sym_entrypoint_token1] = ACTIONS(222),
    [aux_sym_env_token1] = ACTIONS(222),
    [aux_sym_expose_token1] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [aux_sym_from_token1] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [aux_sym_healthcheck_token1] = ACTIONS(222),
    [aux_sym_label_token1] = ACTIONS(222),
    [aux_sym_maintainer_token1] = ACTIONS(222),
    [aux_sym_onbuild_token1] = ACTIONS(222),
    [aux_sym_run_token1] = ACTIONS(222),
    [aux_sym_shell_token1] = ACTIONS(222),
    [aux_sym_stopsignal_token1] = ACTIONS(222),
    [aux_sym_user_token1] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(222),
    [aux_sym_volume_token1] = ACTIONS(222),
    [aux_sym_workdir_token1] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [aux_sym__port_part_token1] = ACTIONS(222),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(222),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
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
  [79] = {
    [aux_sym_from_layer_repeat1] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(355),
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
    [anon_sym_DOLLAR] = ACTIONS(153),
    [aux_sym_volume_token1] = ACTIONS(357),
    [aux_sym_workdir_token1] = ACTIONS(357),
    [aux_sym_from_layer_token3] = ACTIONS(153),
    [aux_sym_from_layer_token4] = ACTIONS(359),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(355),
    [sym__space_no_newline] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [80] = {
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
    [aux_sym__repository_start_token1] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(361),
    [sym__space_no_newline] = ACTIONS(363),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [81] = {
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
  [82] = {
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
    [sym__space_no_newline] = ACTIONS(375),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [83] = {
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
    [aux_sym_path_token1] = ACTIONS(379),
    [aux_sym_path_token2] = ACTIONS(379),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(377),
    [sym__space_no_newline] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [aux_sym_add_token1] = ACTIONS(381),
    [aux_sym_arg_token1] = ACTIONS(381),
    [aux_sym_cmd_token1] = ACTIONS(381),
    [aux_sym_copy_token1] = ACTIONS(381),
    [aux_sym_entrypoint_token1] = ACTIONS(381),
    [aux_sym_env_token1] = ACTIONS(381),
    [aux_sym_expose_token1] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [aux_sym_from_token1] = ACTIONS(381),
    [aux_sym_healthcheck_token1] = ACTIONS(381),
    [aux_sym_label_token1] = ACTIONS(381),
    [aux_sym_maintainer_token1] = ACTIONS(381),
    [aux_sym_onbuild_token1] = ACTIONS(381),
    [aux_sym_run_token1] = ACTIONS(381),
    [aux_sym_shell_token1] = ACTIONS(381),
    [aux_sym_stopsignal_token1] = ACTIONS(381),
    [aux_sym_user_token1] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [aux_sym_volume_token1] = ACTIONS(381),
    [aux_sym_workdir_token1] = ACTIONS(381),
    [aux_sym_path_token1] = ACTIONS(383),
    [aux_sym_path_token2] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(381),
    [sym__space_no_newline] = ACTIONS(383),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [85] = {
    [aux_sym_from_layer_repeat1] = STATE(9),
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
    [anon_sym_DOLLAR] = ACTIONS(153),
    [aux_sym_volume_token1] = ACTIONS(335),
    [aux_sym_workdir_token1] = ACTIONS(335),
    [aux_sym_from_layer_token3] = ACTIONS(153),
    [aux_sym_from_layer_token4] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_add_token1] = ACTIONS(161),
    [aux_sym_arg_token1] = ACTIONS(161),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_copy_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_env_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [aux_sym_from_token1] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(161),
    [aux_sym_healthcheck_token1] = ACTIONS(161),
    [aux_sym_label_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_onbuild_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_user_token1] = ACTIONS(161),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(167),
    [aux_sym__repository_start_token1] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
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
    [aux_sym_path_token1] = ACTIONS(213),
    [aux_sym_path_token2] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym__space_no_newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [89] = {
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
  [90] = {
    [aux_sym_from_layer_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(327),
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
    [aux_sym_from_layer_token4] = ACTIONS(331),
    [aux_sym_from_layer_token9] = ACTIONS(177),
    [aux_sym_from_layer_token12] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(327),
    [sym__space_no_newline] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [91] = {
    [aux_sym_from_layer_repeat4] = STATE(69),
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
    [aux_sym_from_layer_token4] = ACTIONS(337),
    [aux_sym_from_layer_token13] = ACTIONS(179),
    [aux_sym_from_layer_token16] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [92] = {
    [aux_sym_from_layer_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(327),
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
    [aux_sym_from_layer_token4] = ACTIONS(331),
    [aux_sym_from_layer_token5] = ACTIONS(159),
    [aux_sym_from_layer_token8] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(327),
    [sym__space_no_newline] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [aux_sym_add_token1] = ACTIONS(385),
    [aux_sym_arg_token1] = ACTIONS(385),
    [aux_sym_cmd_token1] = ACTIONS(385),
    [aux_sym_copy_token1] = ACTIONS(385),
    [aux_sym_entrypoint_token1] = ACTIONS(385),
    [aux_sym_env_token1] = ACTIONS(385),
    [aux_sym_expose_token1] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [aux_sym_from_token1] = ACTIONS(385),
    [anon_sym_COLON] = ACTIONS(385),
    [aux_sym_healthcheck_token1] = ACTIONS(385),
    [aux_sym_label_token1] = ACTIONS(385),
    [aux_sym_maintainer_token1] = ACTIONS(385),
    [aux_sym_onbuild_token1] = ACTIONS(385),
    [aux_sym_run_token1] = ACTIONS(385),
    [aux_sym_shell_token1] = ACTIONS(385),
    [aux_sym_stopsignal_token1] = ACTIONS(385),
    [aux_sym_user_token1] = ACTIONS(385),
    [anon_sym_DOLLAR] = ACTIONS(385),
    [aux_sym_volume_token1] = ACTIONS(385),
    [aux_sym_workdir_token1] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(385),
    [aux_sym__port_part_token1] = ACTIONS(385),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_add_token1] = ACTIONS(149),
    [aux_sym_arg_token1] = ACTIONS(149),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_copy_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_env_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [aux_sym_from_token1] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(149),
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
    [anon_sym_SLASH] = ACTIONS(157),
    [aux_sym__repository_start_token1] = ACTIONS(157),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(149),
    [sym__space_no_newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(5),
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
    [anon_sym_COLON] = ACTIONS(387),
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
    [aux_sym_from_layer_repeat1] = STATE(96),
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
    [anon_sym_DOLLAR] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(137),
    [aux_sym_workdir_token1] = ACTIONS(137),
    [aux_sym_from_layer_token3] = ACTIONS(389),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [97] = {
    [aux_sym_from_layer_repeat1] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(392),
    [aux_sym_add_token1] = ACTIONS(394),
    [aux_sym_arg_token1] = ACTIONS(394),
    [aux_sym_cmd_token1] = ACTIONS(394),
    [aux_sym_copy_token1] = ACTIONS(394),
    [aux_sym_entrypoint_token1] = ACTIONS(394),
    [aux_sym_env_token1] = ACTIONS(394),
    [aux_sym_expose_token1] = ACTIONS(394),
    [aux_sym_from_token1] = ACTIONS(394),
    [aux_sym_healthcheck_token1] = ACTIONS(394),
    [aux_sym_label_token1] = ACTIONS(394),
    [aux_sym_maintainer_token1] = ACTIONS(394),
    [aux_sym_onbuild_token1] = ACTIONS(394),
    [aux_sym_run_token1] = ACTIONS(394),
    [aux_sym_shell_token1] = ACTIONS(394),
    [aux_sym_stopsignal_token1] = ACTIONS(394),
    [aux_sym_user_token1] = ACTIONS(394),
    [anon_sym_DOLLAR] = ACTIONS(396),
    [aux_sym_volume_token1] = ACTIONS(394),
    [aux_sym_workdir_token1] = ACTIONS(394),
    [aux_sym_from_layer_token3] = ACTIONS(396),
    [aux_sym_from_layer_token4] = ACTIONS(398),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(392),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [98] = {
    [aux_sym_from_layer_repeat2] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym_add_token1] = ACTIONS(402),
    [aux_sym_arg_token1] = ACTIONS(402),
    [aux_sym_cmd_token1] = ACTIONS(402),
    [aux_sym_copy_token1] = ACTIONS(402),
    [aux_sym_entrypoint_token1] = ACTIONS(402),
    [aux_sym_env_token1] = ACTIONS(402),
    [aux_sym_expose_token1] = ACTIONS(402),
    [aux_sym_from_token1] = ACTIONS(402),
    [aux_sym_healthcheck_token1] = ACTIONS(402),
    [aux_sym_label_token1] = ACTIONS(402),
    [aux_sym_maintainer_token1] = ACTIONS(402),
    [aux_sym_onbuild_token1] = ACTIONS(402),
    [aux_sym_run_token1] = ACTIONS(402),
    [aux_sym_shell_token1] = ACTIONS(402),
    [aux_sym_stopsignal_token1] = ACTIONS(402),
    [aux_sym_user_token1] = ACTIONS(402),
    [aux_sym_volume_token1] = ACTIONS(402),
    [aux_sym_workdir_token1] = ACTIONS(402),
    [aux_sym_from_layer_token4] = ACTIONS(404),
    [aux_sym_from_layer_token5] = ACTIONS(406),
    [aux_sym_from_layer_token8] = ACTIONS(406),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(400),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [99] = {
    [aux_sym_from_layer_repeat4] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym_add_token1] = ACTIONS(402),
    [aux_sym_arg_token1] = ACTIONS(402),
    [aux_sym_cmd_token1] = ACTIONS(402),
    [aux_sym_copy_token1] = ACTIONS(402),
    [aux_sym_entrypoint_token1] = ACTIONS(402),
    [aux_sym_env_token1] = ACTIONS(402),
    [aux_sym_expose_token1] = ACTIONS(402),
    [aux_sym_from_token1] = ACTIONS(402),
    [aux_sym_healthcheck_token1] = ACTIONS(402),
    [aux_sym_label_token1] = ACTIONS(402),
    [aux_sym_maintainer_token1] = ACTIONS(402),
    [aux_sym_onbuild_token1] = ACTIONS(402),
    [aux_sym_run_token1] = ACTIONS(402),
    [aux_sym_shell_token1] = ACTIONS(402),
    [aux_sym_stopsignal_token1] = ACTIONS(402),
    [aux_sym_user_token1] = ACTIONS(402),
    [aux_sym_volume_token1] = ACTIONS(402),
    [aux_sym_workdir_token1] = ACTIONS(402),
    [aux_sym_from_layer_token4] = ACTIONS(404),
    [aux_sym_from_layer_token13] = ACTIONS(408),
    [aux_sym_from_layer_token16] = ACTIONS(408),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(400),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [100] = {
    [aux_sym_from_layer_repeat3] = STATE(107),
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym_add_token1] = ACTIONS(402),
    [aux_sym_arg_token1] = ACTIONS(402),
    [aux_sym_cmd_token1] = ACTIONS(402),
    [aux_sym_copy_token1] = ACTIONS(402),
    [aux_sym_entrypoint_token1] = ACTIONS(402),
    [aux_sym_env_token1] = ACTIONS(402),
    [aux_sym_expose_token1] = ACTIONS(402),
    [aux_sym_from_token1] = ACTIONS(402),
    [aux_sym_healthcheck_token1] = ACTIONS(402),
    [aux_sym_label_token1] = ACTIONS(402),
    [aux_sym_maintainer_token1] = ACTIONS(402),
    [aux_sym_onbuild_token1] = ACTIONS(402),
    [aux_sym_run_token1] = ACTIONS(402),
    [aux_sym_shell_token1] = ACTIONS(402),
    [aux_sym_stopsignal_token1] = ACTIONS(402),
    [aux_sym_user_token1] = ACTIONS(402),
    [aux_sym_volume_token1] = ACTIONS(402),
    [aux_sym_workdir_token1] = ACTIONS(402),
    [aux_sym_from_layer_token4] = ACTIONS(404),
    [aux_sym_from_layer_token9] = ACTIONS(410),
    [aux_sym_from_layer_token12] = ACTIONS(410),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(400),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [101] = {
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
    [anon_sym_COLON] = ACTIONS(414),
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
  [102] = {
    [aux_sym_path_repeat1] = STATE(102),
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
    [anon_sym_DOLLAR] = ACTIONS(416),
    [aux_sym_volume_token1] = ACTIONS(315),
    [aux_sym_workdir_token1] = ACTIONS(315),
    [aux_sym_path_token1] = ACTIONS(320),
    [aux_sym_path_token2] = ACTIONS(419),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [103] = {
    [aux_sym_from_layer_repeat4] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym_add_token1] = ACTIONS(144),
    [aux_sym_arg_token1] = ACTIONS(144),
    [aux_sym_cmd_token1] = ACTIONS(144),
    [aux_sym_copy_token1] = ACTIONS(144),
    [aux_sym_entrypoint_token1] = ACTIONS(144),
    [aux_sym_env_token1] = ACTIONS(144),
    [aux_sym_expose_token1] = ACTIONS(144),
    [aux_sym_from_token1] = ACTIONS(144),
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
    [aux_sym_from_layer_token4] = ACTIONS(144),
    [aux_sym_from_layer_token13] = ACTIONS(422),
    [aux_sym_from_layer_token16] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [104] = {
    [aux_sym_from_layer_repeat2] = STATE(104),
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
    [aux_sym_from_layer_token5] = ACTIONS(425),
    [aux_sym_from_layer_token8] = ACTIONS(425),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [105] = {
    [aux_sym_path_repeat1] = STATE(102),
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
    [anon_sym_DOLLAR] = ACTIONS(428),
    [aux_sym_volume_token1] = ACTIONS(309),
    [aux_sym_workdir_token1] = ACTIONS(309),
    [aux_sym_path_token1] = ACTIONS(430),
    [aux_sym_path_token2] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [106] = {
    [aux_sym_from_layer_repeat2] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(434),
    [aux_sym_add_token1] = ACTIONS(436),
    [aux_sym_arg_token1] = ACTIONS(436),
    [aux_sym_cmd_token1] = ACTIONS(436),
    [aux_sym_copy_token1] = ACTIONS(436),
    [aux_sym_entrypoint_token1] = ACTIONS(436),
    [aux_sym_env_token1] = ACTIONS(436),
    [aux_sym_expose_token1] = ACTIONS(436),
    [aux_sym_from_token1] = ACTIONS(436),
    [aux_sym_healthcheck_token1] = ACTIONS(436),
    [aux_sym_label_token1] = ACTIONS(436),
    [aux_sym_maintainer_token1] = ACTIONS(436),
    [aux_sym_onbuild_token1] = ACTIONS(436),
    [aux_sym_run_token1] = ACTIONS(436),
    [aux_sym_shell_token1] = ACTIONS(436),
    [aux_sym_stopsignal_token1] = ACTIONS(436),
    [aux_sym_user_token1] = ACTIONS(436),
    [aux_sym_volume_token1] = ACTIONS(436),
    [aux_sym_workdir_token1] = ACTIONS(436),
    [aux_sym_from_layer_token4] = ACTIONS(438),
    [aux_sym_from_layer_token5] = ACTIONS(406),
    [aux_sym_from_layer_token8] = ACTIONS(406),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(434),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [107] = {
    [aux_sym_from_layer_repeat3] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(434),
    [aux_sym_add_token1] = ACTIONS(436),
    [aux_sym_arg_token1] = ACTIONS(436),
    [aux_sym_cmd_token1] = ACTIONS(436),
    [aux_sym_copy_token1] = ACTIONS(436),
    [aux_sym_entrypoint_token1] = ACTIONS(436),
    [aux_sym_env_token1] = ACTIONS(436),
    [aux_sym_expose_token1] = ACTIONS(436),
    [aux_sym_from_token1] = ACTIONS(436),
    [aux_sym_healthcheck_token1] = ACTIONS(436),
    [aux_sym_label_token1] = ACTIONS(436),
    [aux_sym_maintainer_token1] = ACTIONS(436),
    [aux_sym_onbuild_token1] = ACTIONS(436),
    [aux_sym_run_token1] = ACTIONS(436),
    [aux_sym_shell_token1] = ACTIONS(436),
    [aux_sym_stopsignal_token1] = ACTIONS(436),
    [aux_sym_user_token1] = ACTIONS(436),
    [aux_sym_volume_token1] = ACTIONS(436),
    [aux_sym_workdir_token1] = ACTIONS(436),
    [aux_sym_from_layer_token4] = ACTIONS(438),
    [aux_sym_from_layer_token9] = ACTIONS(410),
    [aux_sym_from_layer_token12] = ACTIONS(410),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(434),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [108] = {
    [aux_sym_from_layer_repeat4] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(434),
    [aux_sym_add_token1] = ACTIONS(436),
    [aux_sym_arg_token1] = ACTIONS(436),
    [aux_sym_cmd_token1] = ACTIONS(436),
    [aux_sym_copy_token1] = ACTIONS(436),
    [aux_sym_entrypoint_token1] = ACTIONS(436),
    [aux_sym_env_token1] = ACTIONS(436),
    [aux_sym_expose_token1] = ACTIONS(436),
    [aux_sym_from_token1] = ACTIONS(436),
    [aux_sym_healthcheck_token1] = ACTIONS(436),
    [aux_sym_label_token1] = ACTIONS(436),
    [aux_sym_maintainer_token1] = ACTIONS(436),
    [aux_sym_onbuild_token1] = ACTIONS(436),
    [aux_sym_run_token1] = ACTIONS(436),
    [aux_sym_shell_token1] = ACTIONS(436),
    [aux_sym_stopsignal_token1] = ACTIONS(436),
    [aux_sym_user_token1] = ACTIONS(436),
    [aux_sym_volume_token1] = ACTIONS(436),
    [aux_sym_workdir_token1] = ACTIONS(436),
    [aux_sym_from_layer_token4] = ACTIONS(438),
    [aux_sym_from_layer_token13] = ACTIONS(408),
    [aux_sym_from_layer_token16] = ACTIONS(408),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(434),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [109] = {
    [aux_sym_from_layer_repeat1] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym_add_token1] = ACTIONS(402),
    [aux_sym_arg_token1] = ACTIONS(402),
    [aux_sym_cmd_token1] = ACTIONS(402),
    [aux_sym_copy_token1] = ACTIONS(402),
    [aux_sym_entrypoint_token1] = ACTIONS(402),
    [aux_sym_env_token1] = ACTIONS(402),
    [aux_sym_expose_token1] = ACTIONS(402),
    [aux_sym_from_token1] = ACTIONS(402),
    [aux_sym_healthcheck_token1] = ACTIONS(402),
    [aux_sym_label_token1] = ACTIONS(402),
    [aux_sym_maintainer_token1] = ACTIONS(402),
    [aux_sym_onbuild_token1] = ACTIONS(402),
    [aux_sym_run_token1] = ACTIONS(402),
    [aux_sym_shell_token1] = ACTIONS(402),
    [aux_sym_stopsignal_token1] = ACTIONS(402),
    [aux_sym_user_token1] = ACTIONS(402),
    [anon_sym_DOLLAR] = ACTIONS(396),
    [aux_sym_volume_token1] = ACTIONS(402),
    [aux_sym_workdir_token1] = ACTIONS(402),
    [aux_sym_from_layer_token3] = ACTIONS(396),
    [aux_sym_from_layer_token4] = ACTIONS(404),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(400),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [110] = {
    [aux_sym_from_layer_repeat3] = STATE(110),
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
    [aux_sym_from_layer_token9] = ACTIONS(440),
    [aux_sym_from_layer_token12] = ACTIONS(440),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [111] = {
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
  [112] = {
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
    [aux_sym_path_token1] = ACTIONS(445),
    [aux_sym_path_token2] = ACTIONS(445),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [113] = {
    [aux_sym_path_repeat1] = STATE(105),
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
    [anon_sym_DOLLAR] = ACTIONS(428),
    [aux_sym_volume_token1] = ACTIONS(281),
    [aux_sym_workdir_token1] = ACTIONS(281),
    [aux_sym_path_token1] = ACTIONS(447),
    [aux_sym_path_token2] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [114] = {
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
  [115] = {
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
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(213),
    [aux_sym_workdir_token1] = ACTIONS(213),
    [aux_sym_from_layer_token3] = ACTIONS(211),
    [aux_sym_from_layer_token4] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
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
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [aux_sym_from_layer_token9] = ACTIONS(203),
    [aux_sym_from_layer_token12] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [117] = {
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
    [aux_sym_from_layer_token5] = ACTIONS(215),
    [aux_sym_from_layer_token8] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_add_token1] = ACTIONS(149),
    [aux_sym_arg_token1] = ACTIONS(149),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_copy_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_env_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [aux_sym_from_token1] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(149),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(149),
    [sym__space_no_newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [119] = {
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
  [120] = {
    [aux_sym__labels] = STATE(127),
    [sym_label_pair] = STATE(127),
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
  [121] = {
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
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [aux_sym_from_layer_token13] = ACTIONS(199),
    [aux_sym_from_layer_token16] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [122] = {
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
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [aux_sym_add_token1] = ACTIONS(463),
    [aux_sym_arg_token1] = ACTIONS(463),
    [aux_sym_cmd_token1] = ACTIONS(463),
    [aux_sym_copy_token1] = ACTIONS(463),
    [aux_sym_entrypoint_token1] = ACTIONS(463),
    [aux_sym_env_token1] = ACTIONS(463),
    [aux_sym_expose_token1] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [aux_sym_from_token1] = ACTIONS(463),
    [aux_sym_healthcheck_token1] = ACTIONS(463),
    [aux_sym_label_token1] = ACTIONS(463),
    [aux_sym_maintainer_token1] = ACTIONS(463),
    [aux_sym_onbuild_token1] = ACTIONS(463),
    [aux_sym_run_token1] = ACTIONS(463),
    [aux_sym_shell_token1] = ACTIONS(463),
    [aux_sym_stopsignal_token1] = ACTIONS(463),
    [aux_sym_user_token1] = ACTIONS(463),
    [anon_sym_DOLLAR] = ACTIONS(463),
    [aux_sym_volume_token1] = ACTIONS(463),
    [aux_sym_workdir_token1] = ACTIONS(463),
    [aux_sym__port_part_token1] = ACTIONS(463),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(463),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [124] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [125] = {
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
  [126] = {
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
  [127] = {
    [aux_sym__labels] = STATE(127),
    [sym_label_pair] = STATE(127),
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
    [sym_label_key] = ACTIONS(475),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_add_token1] = ACTIONS(161),
    [aux_sym_arg_token1] = ACTIONS(161),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_copy_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_env_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [aux_sym_from_token1] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [aux_sym_healthcheck_token1] = ACTIONS(161),
    [aux_sym_label_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_onbuild_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_user_token1] = ACTIONS(161),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [129] = {
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
    [anon_sym_DOLLAR] = ACTIONS(135),
    [aux_sym_volume_token1] = ACTIONS(137),
    [aux_sym_workdir_token1] = ACTIONS(137),
    [aux_sym_from_layer_token3] = ACTIONS(135),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_add_token1] = ACTIONS(211),
    [aux_sym_arg_token1] = ACTIONS(211),
    [aux_sym_cmd_token1] = ACTIONS(211),
    [aux_sym_copy_token1] = ACTIONS(211),
    [aux_sym_entrypoint_token1] = ACTIONS(211),
    [aux_sym_env_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
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
    [aux_sym_path_token1] = ACTIONS(213),
    [aux_sym_path_token2] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [aux_sym_add_token1] = ACTIONS(478),
    [aux_sym_arg_token1] = ACTIONS(478),
    [aux_sym_cmd_token1] = ACTIONS(478),
    [aux_sym_copy_token1] = ACTIONS(478),
    [aux_sym_entrypoint_token1] = ACTIONS(478),
    [aux_sym_env_token1] = ACTIONS(478),
    [aux_sym_expose_token1] = ACTIONS(478),
    [aux_sym_from_token1] = ACTIONS(478),
    [anon_sym_COLON] = ACTIONS(480),
    [anon_sym_AT] = ACTIONS(482),
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
    [sym__space_no_newline] = ACTIONS(484),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [132] = {
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
  [133] = {
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
  [134] = {
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
  [135] = {
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
    [anon_sym_DOLLAR] = ACTIONS(315),
    [aux_sym_volume_token1] = ACTIONS(315),
    [aux_sym_workdir_token1] = ACTIONS(315),
    [aux_sym_path_token1] = ACTIONS(320),
    [aux_sym_path_token2] = ACTIONS(320),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [aux_sym_add_token1] = ACTIONS(486),
    [aux_sym_arg_token1] = ACTIONS(486),
    [aux_sym_cmd_token1] = ACTIONS(486),
    [aux_sym_copy_token1] = ACTIONS(486),
    [aux_sym_entrypoint_token1] = ACTIONS(486),
    [aux_sym_env_token1] = ACTIONS(486),
    [aux_sym_expose_token1] = ACTIONS(486),
    [aux_sym_from_token1] = ACTIONS(486),
    [anon_sym_COLON] = ACTIONS(488),
    [anon_sym_AT] = ACTIONS(490),
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
    [sym__space_no_newline] = ACTIONS(492),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
    [aux_sym__anything] = STATE(137),
    [ts_builtin_sym_end] = ACTIONS(494),
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
    [aux_sym__anything_token1] = ACTIONS(498),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(494),
    [sym_comment] = ACTIONS(494),
    [sym_line_continuation] = ACTIONS(5),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [aux_sym_add_token1] = ACTIONS(501),
    [aux_sym_arg_token1] = ACTIONS(501),
    [aux_sym_cmd_token1] = ACTIONS(501),
    [aux_sym_copy_token1] = ACTIONS(501),
    [aux_sym_entrypoint_token1] = ACTIONS(501),
    [aux_sym_env_token1] = ACTIONS(501),
    [aux_sym_expose_token1] = ACTIONS(501),
    [aux_sym_from_token1] = ACTIONS(501),
    [anon_sym_AT] = ACTIONS(503),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(501),
    [sym__space_no_newline] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [aux_sym_add_token1] = ACTIONS(303),
    [aux_sym_arg_token1] = ACTIONS(303),
    [aux_sym_cmd_token1] = ACTIONS(303),
    [aux_sym_copy_token1] = ACTIONS(303),
    [aux_sym_entrypoint_token1] = ACTIONS(303),
    [aux_sym_env_token1] = ACTIONS(303),
    [aux_sym_expose_token1] = ACTIONS(303),
    [aux_sym_from_token1] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(303),
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
    [sym__space_no_newline] = ACTIONS(305),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [140] = {
    [aux_sym__anything] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(507),
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
    [aux_sym__anything_token1] = ACTIONS(511),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(507),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
    [aux_sym__env_pairs_repeat1] = STATE(141),
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
    [sym__space_no_newline] = ACTIONS(515),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(518),
    [aux_sym_add_token1] = ACTIONS(518),
    [aux_sym_arg_token1] = ACTIONS(518),
    [aux_sym_cmd_token1] = ACTIONS(518),
    [aux_sym_copy_token1] = ACTIONS(518),
    [aux_sym_entrypoint_token1] = ACTIONS(518),
    [aux_sym_env_token1] = ACTIONS(518),
    [aux_sym_expose_token1] = ACTIONS(518),
    [aux_sym_from_token1] = ACTIONS(518),
    [anon_sym_AT] = ACTIONS(518),
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
    [anon_sym_EQ2] = ACTIONS(524),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(522),
    [sym__space_no_newline] = ACTIONS(526),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [aux_sym_add_token1] = ACTIONS(465),
    [aux_sym_arg_token1] = ACTIONS(465),
    [aux_sym_cmd_token1] = ACTIONS(465),
    [aux_sym_copy_token1] = ACTIONS(465),
    [aux_sym_entrypoint_token1] = ACTIONS(465),
    [aux_sym_env_token1] = ACTIONS(465),
    [aux_sym_expose_token1] = ACTIONS(465),
    [aux_sym_from_token1] = ACTIONS(465),
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
  [145] = {
    [aux_sym__env_pairs_repeat1] = STATE(141),
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
  [146] = {
    [aux_sym__anything] = STATE(137),
    [ts_builtin_sym_end] = ACTIONS(532),
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
    [aux_sym__anything_token1] = ACTIONS(536),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(532),
    [sym_comment] = ACTIONS(538),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(540),
    [aux_sym_add_token1] = ACTIONS(540),
    [aux_sym_arg_token1] = ACTIONS(540),
    [aux_sym_cmd_token1] = ACTIONS(540),
    [aux_sym_copy_token1] = ACTIONS(540),
    [aux_sym_entrypoint_token1] = ACTIONS(540),
    [aux_sym_env_token1] = ACTIONS(540),
    [aux_sym_expose_token1] = ACTIONS(540),
    [aux_sym_from_token1] = ACTIONS(540),
    [anon_sym_AT] = ACTIONS(540),
    [aux_sym_healthcheck_token1] = ACTIONS(540),
    [aux_sym_label_token1] = ACTIONS(540),
    [aux_sym_maintainer_token1] = ACTIONS(540),
    [aux_sym_onbuild_token1] = ACTIONS(540),
    [aux_sym_run_token1] = ACTIONS(540),
    [aux_sym_shell_token1] = ACTIONS(540),
    [aux_sym_stopsignal_token1] = ACTIONS(540),
    [aux_sym_user_token1] = ACTIONS(540),
    [aux_sym_volume_token1] = ACTIONS(540),
    [aux_sym_workdir_token1] = ACTIONS(540),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(540),
    [sym__space_no_newline] = ACTIONS(542),
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
    [aux_sym__anything] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(494),
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
    [aux_sym__anything_token1] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(494),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(547),
    [aux_sym_add_token1] = ACTIONS(547),
    [aux_sym_arg_token1] = ACTIONS(547),
    [aux_sym_cmd_token1] = ACTIONS(547),
    [aux_sym_copy_token1] = ACTIONS(547),
    [aux_sym_entrypoint_token1] = ACTIONS(547),
    [aux_sym_env_token1] = ACTIONS(547),
    [aux_sym_expose_token1] = ACTIONS(547),
    [aux_sym_from_token1] = ACTIONS(547),
    [anon_sym_AT] = ACTIONS(549),
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
    [sym__space_no_newline] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [aux_sym_add_token1] = ACTIONS(478),
    [aux_sym_arg_token1] = ACTIONS(478),
    [aux_sym_cmd_token1] = ACTIONS(478),
    [aux_sym_copy_token1] = ACTIONS(478),
    [aux_sym_entrypoint_token1] = ACTIONS(478),
    [aux_sym_env_token1] = ACTIONS(478),
    [aux_sym_expose_token1] = ACTIONS(478),
    [aux_sym_from_token1] = ACTIONS(478),
    [anon_sym_AT] = ACTIONS(482),
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
    [sym__space_no_newline] = ACTIONS(484),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
    [aux_sym__anything] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(553),
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
    [aux_sym__anything_token1] = ACTIONS(511),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(553),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [153] = {
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
    [sym__space_no_newline] = ACTIONS(530),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(557),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(557),
    [sym__space_no_newline] = ACTIONS(559),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(561),
    [aux_sym_add_token1] = ACTIONS(561),
    [aux_sym_arg_token1] = ACTIONS(561),
    [aux_sym_cmd_token1] = ACTIONS(561),
    [aux_sym_copy_token1] = ACTIONS(561),
    [aux_sym_entrypoint_token1] = ACTIONS(561),
    [aux_sym_env_token1] = ACTIONS(561),
    [aux_sym_expose_token1] = ACTIONS(561),
    [aux_sym_from_token1] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(563),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(561),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
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
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(569),
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
    [aux_sym__anything_token1] = ACTIONS(571),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(569),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [aux_sym_add_token1] = ACTIONS(573),
    [aux_sym_arg_token1] = ACTIONS(573),
    [aux_sym_cmd_token1] = ACTIONS(573),
    [aux_sym_copy_token1] = ACTIONS(573),
    [aux_sym_entrypoint_token1] = ACTIONS(573),
    [aux_sym_env_token1] = ACTIONS(573),
    [aux_sym_expose_token1] = ACTIONS(573),
    [aux_sym_from_token1] = ACTIONS(573),
    [anon_sym_COLON] = ACTIONS(573),
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
  [159] = {
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
    [sym__space_no_newline] = ACTIONS(484),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [160] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(465),
    [sym__space_no_newline] = ACTIONS(471),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [161] = {
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
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [aux_sym_add_token1] = ACTIONS(579),
    [aux_sym_arg_token1] = ACTIONS(579),
    [anon_sym_EQ] = ACTIONS(581),
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
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [aux_sym_add_token1] = ACTIONS(583),
    [aux_sym_arg_token1] = ACTIONS(583),
    [aux_sym_cmd_token1] = ACTIONS(583),
    [aux_sym_copy_token1] = ACTIONS(583),
    [aux_sym_entrypoint_token1] = ACTIONS(583),
    [aux_sym_env_token1] = ACTIONS(583),
    [aux_sym_expose_token1] = ACTIONS(583),
    [aux_sym_from_token1] = ACTIONS(583),
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
    [sym_label_key] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(583),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(561),
    [aux_sym_add_token1] = ACTIONS(561),
    [aux_sym_arg_token1] = ACTIONS(561),
    [aux_sym_cmd_token1] = ACTIONS(561),
    [aux_sym_copy_token1] = ACTIONS(561),
    [aux_sym_entrypoint_token1] = ACTIONS(561),
    [aux_sym_env_token1] = ACTIONS(561),
    [aux_sym_expose_token1] = ACTIONS(561),
    [aux_sym_from_token1] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(587),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(561),
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
    [sym_label_key] = ACTIONS(591),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(589),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(569),
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
    [aux_sym__anything_token1] = ACTIONS(571),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(569),
    [sym_comment] = ACTIONS(569),
    [sym_line_continuation] = ACTIONS(5),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [aux_sym_add_token1] = ACTIONS(327),
    [aux_sym_arg_token1] = ACTIONS(327),
    [aux_sym_cmd_token1] = ACTIONS(327),
    [aux_sym_copy_token1] = ACTIONS(327),
    [aux_sym_entrypoint_token1] = ACTIONS(327),
    [aux_sym_env_token1] = ACTIONS(327),
    [aux_sym_expose_token1] = ACTIONS(327),
    [aux_sym_from_token1] = ACTIONS(327),
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
  [168] = {
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
    [sym__space_no_newline] = ACTIONS(599),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(601),
    [aux_sym_add_token1] = ACTIONS(601),
    [aux_sym_arg_token1] = ACTIONS(601),
    [aux_sym_cmd_token1] = ACTIONS(601),
    [aux_sym_copy_token1] = ACTIONS(601),
    [aux_sym_entrypoint_token1] = ACTIONS(601),
    [aux_sym_env_token1] = ACTIONS(601),
    [aux_sym_expose_token1] = ACTIONS(601),
    [aux_sym_from_token1] = ACTIONS(601),
    [anon_sym_COLON] = ACTIONS(601),
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
  [171] = {
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
    [sym__space_no_newline] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [172] = {
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
  [173] = {
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
    [sym__space_no_newline] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(501),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(501),
    [sym__space_no_newline] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [175] = {
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
    [sym__space_no_newline] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [176] = {
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
    [sym_label_key] = ACTIONS(611),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(609),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [177] = {
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
  [178] = {
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
  [179] = {
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
  [180] = {
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
  [181] = {
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
  [182] = {
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
  [183] = {
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
  [184] = {
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
  [185] = {
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
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [aux_sym_add_token1] = ACTIONS(116),
    [aux_sym_arg_token1] = ACTIONS(116),
    [aux_sym_cmd_token1] = ACTIONS(116),
    [aux_sym_copy_token1] = ACTIONS(116),
    [aux_sym_entrypoint_token1] = ACTIONS(116),
    [aux_sym_env_token1] = ACTIONS(116),
    [aux_sym_expose_token1] = ACTIONS(116),
    [aux_sym_from_token1] = ACTIONS(116),
    [aux_sym_healthcheck_token1] = ACTIONS(116),
    [aux_sym_label_token1] = ACTIONS(116),
    [aux_sym_maintainer_token1] = ACTIONS(116),
    [aux_sym_onbuild_token1] = ACTIONS(116),
    [aux_sym_run_token1] = ACTIONS(116),
    [aux_sym_shell_token1] = ACTIONS(116),
    [aux_sym_stopsignal_token1] = ACTIONS(116),
    [aux_sym_user_token1] = ACTIONS(116),
    [aux_sym_volume_token1] = ACTIONS(116),
    [aux_sym_workdir_token1] = ACTIONS(116),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(116),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [187] = {
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
  [188] = {
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
  [189] = {
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
  [190] = {
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
  [191] = {
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
  [198] = {
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
  [199] = {
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
  [202] = {
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
  [203] = {
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
  [204] = {
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
  [205] = {
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
  [206] = {
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
  [207] = {
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
    [aux_sym_volume_token1] = ACTIONS(263),
    [aux_sym_workdir_token1] = ACTIONS(263),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [208] = {
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
  [209] = {
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
  [210] = {
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
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(381),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(381),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [212] = {
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
  [213] = {
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
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(501),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym_add_token1] = ACTIONS(400),
    [aux_sym_arg_token1] = ACTIONS(400),
    [aux_sym_cmd_token1] = ACTIONS(400),
    [aux_sym_copy_token1] = ACTIONS(400),
    [aux_sym_entrypoint_token1] = ACTIONS(400),
    [aux_sym_env_token1] = ACTIONS(400),
    [aux_sym_expose_token1] = ACTIONS(400),
    [aux_sym_from_token1] = ACTIONS(400),
    [aux_sym_healthcheck_token1] = ACTIONS(400),
    [aux_sym_label_token1] = ACTIONS(400),
    [aux_sym_maintainer_token1] = ACTIONS(400),
    [aux_sym_onbuild_token1] = ACTIONS(400),
    [aux_sym_run_token1] = ACTIONS(400),
    [aux_sym_shell_token1] = ACTIONS(400),
    [aux_sym_stopsignal_token1] = ACTIONS(400),
    [aux_sym_user_token1] = ACTIONS(400),
    [aux_sym_volume_token1] = ACTIONS(400),
    [aux_sym_workdir_token1] = ACTIONS(400),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(400),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [216] = {
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
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym_add_token1] = ACTIONS(251),
    [aux_sym_arg_token1] = ACTIONS(251),
    [aux_sym_cmd_token1] = ACTIONS(251),
    [aux_sym_copy_token1] = ACTIONS(251),
    [aux_sym_entrypoint_token1] = ACTIONS(251),
    [aux_sym_env_token1] = ACTIONS(251),
    [aux_sym_expose_token1] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(251),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [218] = {
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
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(434),
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
    [aux_sym_volume_token1] = ACTIONS(434),
    [aux_sym_workdir_token1] = ACTIONS(434),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(434),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [220] = {
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
  [221] = {
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
  [222] = {
    [sym__hc_interval] = STATE(228),
    [sym__hc_timeout] = STATE(228),
    [sym__hc_start_period] = STATE(228),
    [sym__hc_retries] = STATE(228),
    [sym__hc_options] = STATE(228),
    [sym__hc_command] = STATE(182),
    [aux_sym_healthcheck_repeat1] = STATE(228),
    [sym_hc_none] = ACTIONS(669),
    [anon_sym_DASH_DASHinterval] = ACTIONS(671),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(673),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(675),
    [anon_sym_DASH_DASHretries] = ACTIONS(677),
    [aux_sym__hc_command_token1] = ACTIONS(679),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [223] = {
    [sym_repository] = STATE(255),
    [sym__repository_start] = STATE(238),
    [sym_image] = STATE(114),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(683),
    [aux_sym_from_layer_token1] = ACTIONS(685),
    [aux_sym_from_layer_token2] = ACTIONS(683),
    [aux_sym_from_layer_token5] = ACTIONS(687),
    [aux_sym_from_layer_token7] = ACTIONS(687),
    [aux_sym_from_layer_token9] = ACTIONS(689),
    [aux_sym_from_layer_token11] = ACTIONS(689),
    [aux_sym_from_layer_token13] = ACTIONS(691),
    [aux_sym_from_layer_token15] = ACTIONS(691),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [224] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym_mapped_no_lhs] = STATE(186),
    [sym__port] = STATE(101),
    [sym_port] = STATE(101),
    [sym_port_range] = STATE(101),
    [sym__port_part] = STATE(78),
    [aux_sym_expose_repeat1] = STATE(6),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(693),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [aux_sym__port_part_token1] = ACTIONS(122),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [225] = {
    [sym_repository] = STATE(239),
    [sym__repository_start] = STATE(238),
    [sym_image] = STATE(126),
    [anon_sym_DOLLAR] = ACTIONS(683),
    [aux_sym_from_layer_token1] = ACTIONS(685),
    [aux_sym_from_layer_token2] = ACTIONS(683),
    [aux_sym_from_layer_token5] = ACTIONS(687),
    [aux_sym_from_layer_token7] = ACTIONS(687),
    [aux_sym_from_layer_token9] = ACTIONS(689),
    [aux_sym_from_layer_token11] = ACTIONS(689),
    [aux_sym_from_layer_token13] = ACTIONS(691),
    [aux_sym_from_layer_token15] = ACTIONS(691),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [226] = {
    [sym__chown] = STATE(227),
    [sym__from_layer] = STATE(227),
    [sym_path] = STATE(82),
    [aux_sym__paths] = STATE(47),
    [aux_sym_copy_repeat1] = STATE(227),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(695),
    [aux_sym__from_layer_token1] = ACTIONS(697),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(699),
    [sym_line_continuation] = ACTIONS(5),
  },
  [227] = {
    [sym__chown] = STATE(261),
    [sym__from_layer] = STATE(261),
    [sym_path] = STATE(82),
    [aux_sym__paths] = STATE(44),
    [aux_sym_copy_repeat1] = STATE(261),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(695),
    [aux_sym__from_layer_token1] = ACTIONS(697),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(701),
    [sym_line_continuation] = ACTIONS(5),
  },
  [228] = {
    [sym__hc_interval] = STATE(236),
    [sym__hc_timeout] = STATE(236),
    [sym__hc_start_period] = STATE(236),
    [sym__hc_retries] = STATE(236),
    [sym__hc_options] = STATE(236),
    [sym__hc_command] = STATE(203),
    [aux_sym_healthcheck_repeat1] = STATE(236),
    [anon_sym_DASH_DASHinterval] = ACTIONS(671),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(673),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(675),
    [anon_sym_DASH_DASHretries] = ACTIONS(677),
    [aux_sym__hc_command_token1] = ACTIONS(679),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [229] = {
    [sym_digest] = STATE(174),
    [anon_sym_sha256_COLON] = ACTIONS(703),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_from_layer_token1] = ACTIONS(707),
    [aux_sym_from_layer_token2] = ACTIONS(705),
    [aux_sym_from_layer_token5] = ACTIONS(709),
    [aux_sym_from_layer_token7] = ACTIONS(709),
    [aux_sym_from_layer_token9] = ACTIONS(711),
    [aux_sym_from_layer_token11] = ACTIONS(711),
    [aux_sym_from_layer_token13] = ACTIONS(713),
    [aux_sym_from_layer_token15] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [230] = {
    [sym__repository_continued] = STATE(232),
    [aux_sym_repository_repeat1] = STATE(232),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token1] = ACTIONS(718),
    [aux_sym_from_layer_token2] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(721),
    [aux_sym_from_layer_token7] = ACTIONS(721),
    [aux_sym_from_layer_token9] = ACTIONS(724),
    [aux_sym_from_layer_token11] = ACTIONS(724),
    [aux_sym_from_layer_token13] = ACTIONS(727),
    [aux_sym_from_layer_token15] = ACTIONS(727),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [231] = {
    [sym_digest] = STATE(160),
    [anon_sym_sha256_COLON] = ACTIONS(730),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_from_layer_token1] = ACTIONS(707),
    [aux_sym_from_layer_token2] = ACTIONS(705),
    [aux_sym_from_layer_token5] = ACTIONS(709),
    [aux_sym_from_layer_token7] = ACTIONS(709),
    [aux_sym_from_layer_token9] = ACTIONS(711),
    [aux_sym_from_layer_token11] = ACTIONS(711),
    [aux_sym_from_layer_token13] = ACTIONS(713),
    [aux_sym_from_layer_token15] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [232] = {
    [sym__repository_continued] = STATE(232),
    [aux_sym_repository_repeat1] = STATE(232),
    [anon_sym_DOLLAR] = ACTIONS(732),
    [aux_sym_from_layer_token1] = ACTIONS(735),
    [aux_sym_from_layer_token2] = ACTIONS(732),
    [aux_sym_from_layer_token5] = ACTIONS(738),
    [aux_sym_from_layer_token7] = ACTIONS(738),
    [aux_sym_from_layer_token9] = ACTIONS(741),
    [aux_sym_from_layer_token11] = ACTIONS(741),
    [aux_sym_from_layer_token13] = ACTIONS(744),
    [aux_sym_from_layer_token15] = ACTIONS(744),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [233] = {
    [sym_digest] = STATE(159),
    [anon_sym_sha256_COLON] = ACTIONS(747),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_from_layer_token1] = ACTIONS(707),
    [aux_sym_from_layer_token2] = ACTIONS(705),
    [aux_sym_from_layer_token5] = ACTIONS(709),
    [aux_sym_from_layer_token7] = ACTIONS(709),
    [aux_sym_from_layer_token9] = ACTIONS(711),
    [aux_sym_from_layer_token11] = ACTIONS(711),
    [aux_sym_from_layer_token13] = ACTIONS(713),
    [aux_sym_from_layer_token15] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [234] = {
    [sym_digest] = STATE(171),
    [anon_sym_sha256_COLON] = ACTIONS(749),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_from_layer_token1] = ACTIONS(707),
    [aux_sym_from_layer_token2] = ACTIONS(705),
    [aux_sym_from_layer_token5] = ACTIONS(709),
    [aux_sym_from_layer_token7] = ACTIONS(709),
    [aux_sym_from_layer_token9] = ACTIONS(711),
    [aux_sym_from_layer_token11] = ACTIONS(711),
    [aux_sym_from_layer_token13] = ACTIONS(713),
    [aux_sym_from_layer_token15] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [235] = {
    [sym_digest] = STATE(168),
    [anon_sym_sha256_COLON] = ACTIONS(751),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_from_layer_token1] = ACTIONS(707),
    [aux_sym_from_layer_token2] = ACTIONS(705),
    [aux_sym_from_layer_token5] = ACTIONS(709),
    [aux_sym_from_layer_token7] = ACTIONS(709),
    [aux_sym_from_layer_token9] = ACTIONS(711),
    [aux_sym_from_layer_token11] = ACTIONS(711),
    [aux_sym_from_layer_token13] = ACTIONS(713),
    [aux_sym_from_layer_token15] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [236] = {
    [sym__hc_interval] = STATE(236),
    [sym__hc_timeout] = STATE(236),
    [sym__hc_start_period] = STATE(236),
    [sym__hc_retries] = STATE(236),
    [sym__hc_options] = STATE(236),
    [aux_sym_healthcheck_repeat1] = STATE(236),
    [anon_sym_DASH_DASHinterval] = ACTIONS(753),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(756),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(759),
    [anon_sym_DASH_DASHretries] = ACTIONS(762),
    [aux_sym__hc_command_token1] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [237] = {
    [sym_digest] = STATE(169),
    [anon_sym_sha256_COLON] = ACTIONS(767),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_from_layer_token1] = ACTIONS(707),
    [aux_sym_from_layer_token2] = ACTIONS(705),
    [aux_sym_from_layer_token5] = ACTIONS(709),
    [aux_sym_from_layer_token7] = ACTIONS(709),
    [aux_sym_from_layer_token9] = ACTIONS(711),
    [aux_sym_from_layer_token11] = ACTIONS(711),
    [aux_sym_from_layer_token13] = ACTIONS(713),
    [aux_sym_from_layer_token15] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [238] = {
    [sym__repository_continued] = STATE(230),
    [aux_sym_repository_repeat1] = STATE(230),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [aux_sym_from_layer_token1] = ACTIONS(772),
    [aux_sym_from_layer_token2] = ACTIONS(769),
    [aux_sym_from_layer_token5] = ACTIONS(775),
    [aux_sym_from_layer_token7] = ACTIONS(775),
    [aux_sym_from_layer_token9] = ACTIONS(778),
    [aux_sym_from_layer_token11] = ACTIONS(778),
    [aux_sym_from_layer_token13] = ACTIONS(781),
    [aux_sym_from_layer_token15] = ACTIONS(781),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [239] = {
    [sym_image] = STATE(131),
    [anon_sym_DOLLAR] = ACTIONS(784),
    [aux_sym_from_layer_token1] = ACTIONS(786),
    [aux_sym_from_layer_token2] = ACTIONS(784),
    [aux_sym_from_layer_token5] = ACTIONS(788),
    [aux_sym_from_layer_token7] = ACTIONS(788),
    [aux_sym_from_layer_token9] = ACTIONS(790),
    [aux_sym_from_layer_token11] = ACTIONS(790),
    [aux_sym_from_layer_token13] = ACTIONS(792),
    [aux_sym_from_layer_token15] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [240] = {
    [sym_tag] = STATE(138),
    [anon_sym_DOLLAR] = ACTIONS(794),
    [aux_sym_from_layer_token1] = ACTIONS(796),
    [aux_sym_from_layer_token2] = ACTIONS(794),
    [aux_sym_from_layer_token5] = ACTIONS(798),
    [aux_sym_from_layer_token7] = ACTIONS(798),
    [aux_sym_from_layer_token9] = ACTIONS(800),
    [aux_sym_from_layer_token11] = ACTIONS(800),
    [aux_sym_from_layer_token13] = ACTIONS(802),
    [aux_sym_from_layer_token15] = ACTIONS(802),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [241] = {
    [sym_digest] = STATE(159),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_from_layer_token1] = ACTIONS(707),
    [aux_sym_from_layer_token2] = ACTIONS(705),
    [aux_sym_from_layer_token5] = ACTIONS(709),
    [aux_sym_from_layer_token7] = ACTIONS(709),
    [aux_sym_from_layer_token9] = ACTIONS(711),
    [aux_sym_from_layer_token11] = ACTIONS(711),
    [aux_sym_from_layer_token13] = ACTIONS(713),
    [aux_sym_from_layer_token15] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [242] = {
    [sym_digest] = STATE(168),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_from_layer_token1] = ACTIONS(707),
    [aux_sym_from_layer_token2] = ACTIONS(705),
    [aux_sym_from_layer_token5] = ACTIONS(709),
    [aux_sym_from_layer_token7] = ACTIONS(709),
    [aux_sym_from_layer_token9] = ACTIONS(711),
    [aux_sym_from_layer_token11] = ACTIONS(711),
    [aux_sym_from_layer_token13] = ACTIONS(713),
    [aux_sym_from_layer_token15] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [243] = {
    [sym_as_name] = STATE(220),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token1] = ACTIONS(806),
    [aux_sym_from_layer_token2] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(808),
    [aux_sym_from_layer_token7] = ACTIONS(808),
    [aux_sym_from_layer_token9] = ACTIONS(810),
    [aux_sym_from_layer_token11] = ACTIONS(810),
    [aux_sym_from_layer_token13] = ACTIONS(812),
    [aux_sym_from_layer_token15] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [244] = {
    [sym_as_name] = STATE(193),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token1] = ACTIONS(806),
    [aux_sym_from_layer_token2] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(808),
    [aux_sym_from_layer_token7] = ACTIONS(808),
    [aux_sym_from_layer_token9] = ACTIONS(810),
    [aux_sym_from_layer_token11] = ACTIONS(810),
    [aux_sym_from_layer_token13] = ACTIONS(812),
    [aux_sym_from_layer_token15] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [245] = {
    [sym_as_name] = STATE(179),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token1] = ACTIONS(806),
    [aux_sym_from_layer_token2] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(808),
    [aux_sym_from_layer_token7] = ACTIONS(808),
    [aux_sym_from_layer_token9] = ACTIONS(810),
    [aux_sym_from_layer_token11] = ACTIONS(810),
    [aux_sym_from_layer_token13] = ACTIONS(812),
    [aux_sym_from_layer_token15] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [246] = {
    [sym_digest] = STATE(171),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_from_layer_token1] = ACTIONS(707),
    [aux_sym_from_layer_token2] = ACTIONS(705),
    [aux_sym_from_layer_token5] = ACTIONS(709),
    [aux_sym_from_layer_token7] = ACTIONS(709),
    [aux_sym_from_layer_token9] = ACTIONS(711),
    [aux_sym_from_layer_token11] = ACTIONS(711),
    [aux_sym_from_layer_token13] = ACTIONS(713),
    [aux_sym_from_layer_token15] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [247] = {
    [sym_as_name] = STATE(205),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token1] = ACTIONS(806),
    [aux_sym_from_layer_token2] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(808),
    [aux_sym_from_layer_token7] = ACTIONS(808),
    [aux_sym_from_layer_token9] = ACTIONS(810),
    [aux_sym_from_layer_token11] = ACTIONS(810),
    [aux_sym_from_layer_token13] = ACTIONS(812),
    [aux_sym_from_layer_token15] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [248] = {
    [sym_digest] = STATE(173),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_from_layer_token1] = ACTIONS(707),
    [aux_sym_from_layer_token2] = ACTIONS(705),
    [aux_sym_from_layer_token5] = ACTIONS(709),
    [aux_sym_from_layer_token7] = ACTIONS(709),
    [aux_sym_from_layer_token9] = ACTIONS(711),
    [aux_sym_from_layer_token11] = ACTIONS(711),
    [aux_sym_from_layer_token13] = ACTIONS(713),
    [aux_sym_from_layer_token15] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [249] = {
    [sym_from_layer] = STATE(514),
    [anon_sym_DOLLAR] = ACTIONS(814),
    [aux_sym_from_layer_token1] = ACTIONS(816),
    [aux_sym_from_layer_token2] = ACTIONS(814),
    [aux_sym_from_layer_token5] = ACTIONS(818),
    [aux_sym_from_layer_token7] = ACTIONS(818),
    [aux_sym_from_layer_token9] = ACTIONS(820),
    [aux_sym_from_layer_token11] = ACTIONS(820),
    [aux_sym_from_layer_token13] = ACTIONS(822),
    [aux_sym_from_layer_token15] = ACTIONS(822),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [250] = {
    [sym_as_name] = STATE(198),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token1] = ACTIONS(806),
    [aux_sym_from_layer_token2] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(808),
    [aux_sym_from_layer_token7] = ACTIONS(808),
    [aux_sym_from_layer_token9] = ACTIONS(810),
    [aux_sym_from_layer_token11] = ACTIONS(810),
    [aux_sym_from_layer_token13] = ACTIONS(812),
    [aux_sym_from_layer_token15] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [251] = {
    [sym_as_name] = STATE(177),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token1] = ACTIONS(806),
    [aux_sym_from_layer_token2] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(808),
    [aux_sym_from_layer_token7] = ACTIONS(808),
    [aux_sym_from_layer_token9] = ACTIONS(810),
    [aux_sym_from_layer_token11] = ACTIONS(810),
    [aux_sym_from_layer_token13] = ACTIONS(812),
    [aux_sym_from_layer_token15] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [252] = {
    [sym_as_name] = STATE(178),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token1] = ACTIONS(806),
    [aux_sym_from_layer_token2] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(808),
    [aux_sym_from_layer_token7] = ACTIONS(808),
    [aux_sym_from_layer_token9] = ACTIONS(810),
    [aux_sym_from_layer_token11] = ACTIONS(810),
    [aux_sym_from_layer_token13] = ACTIONS(812),
    [aux_sym_from_layer_token15] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [253] = {
    [sym_tag] = STATE(144),
    [anon_sym_DOLLAR] = ACTIONS(794),
    [aux_sym_from_layer_token1] = ACTIONS(796),
    [aux_sym_from_layer_token2] = ACTIONS(794),
    [aux_sym_from_layer_token5] = ACTIONS(798),
    [aux_sym_from_layer_token7] = ACTIONS(798),
    [aux_sym_from_layer_token9] = ACTIONS(800),
    [aux_sym_from_layer_token11] = ACTIONS(800),
    [aux_sym_from_layer_token13] = ACTIONS(802),
    [aux_sym_from_layer_token15] = ACTIONS(802),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [254] = {
    [sym_digest] = STATE(169),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_from_layer_token1] = ACTIONS(707),
    [aux_sym_from_layer_token2] = ACTIONS(705),
    [aux_sym_from_layer_token5] = ACTIONS(709),
    [aux_sym_from_layer_token7] = ACTIONS(709),
    [aux_sym_from_layer_token9] = ACTIONS(711),
    [aux_sym_from_layer_token11] = ACTIONS(711),
    [aux_sym_from_layer_token13] = ACTIONS(713),
    [aux_sym_from_layer_token15] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [255] = {
    [sym_image] = STATE(136),
    [anon_sym_DOLLAR] = ACTIONS(784),
    [aux_sym_from_layer_token1] = ACTIONS(786),
    [aux_sym_from_layer_token2] = ACTIONS(784),
    [aux_sym_from_layer_token5] = ACTIONS(788),
    [aux_sym_from_layer_token7] = ACTIONS(788),
    [aux_sym_from_layer_token9] = ACTIONS(790),
    [aux_sym_from_layer_token11] = ACTIONS(790),
    [aux_sym_from_layer_token13] = ACTIONS(792),
    [aux_sym_from_layer_token15] = ACTIONS(792),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [256] = {
    [sym_digest] = STATE(174),
    [anon_sym_DOLLAR] = ACTIONS(705),
    [aux_sym_from_layer_token1] = ACTIONS(707),
    [aux_sym_from_layer_token2] = ACTIONS(705),
    [aux_sym_from_layer_token5] = ACTIONS(709),
    [aux_sym_from_layer_token7] = ACTIONS(709),
    [aux_sym_from_layer_token9] = ACTIONS(711),
    [aux_sym_from_layer_token11] = ACTIONS(711),
    [aux_sym_from_layer_token13] = ACTIONS(713),
    [aux_sym_from_layer_token15] = ACTIONS(713),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [257] = {
    [sym_as_name] = STATE(209),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token1] = ACTIONS(806),
    [aux_sym_from_layer_token2] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(808),
    [aux_sym_from_layer_token7] = ACTIONS(808),
    [aux_sym_from_layer_token9] = ACTIONS(810),
    [aux_sym_from_layer_token11] = ACTIONS(810),
    [aux_sym_from_layer_token13] = ACTIONS(812),
    [aux_sym_from_layer_token15] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [258] = {
    [sym_tag] = STATE(151),
    [anon_sym_DOLLAR] = ACTIONS(794),
    [aux_sym_from_layer_token1] = ACTIONS(796),
    [aux_sym_from_layer_token2] = ACTIONS(794),
    [aux_sym_from_layer_token5] = ACTIONS(798),
    [aux_sym_from_layer_token7] = ACTIONS(798),
    [aux_sym_from_layer_token9] = ACTIONS(800),
    [aux_sym_from_layer_token11] = ACTIONS(800),
    [aux_sym_from_layer_token13] = ACTIONS(802),
    [aux_sym_from_layer_token15] = ACTIONS(802),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [259] = {
    [sym_as_name] = STATE(214),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token1] = ACTIONS(806),
    [aux_sym_from_layer_token2] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(808),
    [aux_sym_from_layer_token7] = ACTIONS(808),
    [aux_sym_from_layer_token9] = ACTIONS(810),
    [aux_sym_from_layer_token11] = ACTIONS(810),
    [aux_sym_from_layer_token13] = ACTIONS(812),
    [aux_sym_from_layer_token15] = ACTIONS(812),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [260] = {
    [sym_tag] = STATE(150),
    [anon_sym_DOLLAR] = ACTIONS(794),
    [aux_sym_from_layer_token1] = ACTIONS(796),
    [aux_sym_from_layer_token2] = ACTIONS(794),
    [aux_sym_from_layer_token5] = ACTIONS(798),
    [aux_sym_from_layer_token7] = ACTIONS(798),
    [aux_sym_from_layer_token9] = ACTIONS(800),
    [aux_sym_from_layer_token11] = ACTIONS(800),
    [aux_sym_from_layer_token13] = ACTIONS(802),
    [aux_sym_from_layer_token15] = ACTIONS(802),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [261] = {
    [sym__chown] = STATE(261),
    [sym__from_layer] = STATE(261),
    [aux_sym_copy_repeat1] = STATE(261),
    [anon_sym_DQUOTE] = ACTIONS(824),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(826),
    [aux_sym__from_layer_token1] = ACTIONS(829),
    [aux_sym_path_token1] = ACTIONS(832),
    [aux_sym_path_token2] = ACTIONS(832),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(824),
    [sym_line_continuation] = ACTIONS(5),
  },
  [262] = {
    [sym__port_spec] = STATE(507),
    [sym_mapped_port] = STATE(507),
    [sym__port] = STATE(434),
    [sym_port] = STATE(440),
    [sym_port_range] = STATE(440),
    [sym__port_part] = STATE(422),
    [anon_sym_DQUOTE] = ACTIONS(834),
    [anon_sym_DOLLAR] = ACTIONS(836),
    [aux_sym__port_part_token1] = ACTIONS(838),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [263] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [264] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [265] = {
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_from_layer_token1] = ACTIONS(213),
    [aux_sym_from_layer_token2] = ACTIONS(211),
    [aux_sym_from_layer_token5] = ACTIONS(211),
    [aux_sym_from_layer_token7] = ACTIONS(211),
    [aux_sym_from_layer_token9] = ACTIONS(211),
    [aux_sym_from_layer_token11] = ACTIONS(211),
    [aux_sym_from_layer_token13] = ACTIONS(211),
    [aux_sym_from_layer_token15] = ACTIONS(211),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [266] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [267] = {
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
  [268] = {
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
  [269] = {
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
  [270] = {
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
  [271] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [272] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [273] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [274] = {
    [anon_sym_DOLLAR] = ACTIONS(872),
    [aux_sym_from_layer_token1] = ACTIONS(874),
    [aux_sym_from_layer_token2] = ACTIONS(872),
    [aux_sym_from_layer_token5] = ACTIONS(872),
    [aux_sym_from_layer_token7] = ACTIONS(872),
    [aux_sym_from_layer_token9] = ACTIONS(872),
    [aux_sym_from_layer_token11] = ACTIONS(872),
    [aux_sym_from_layer_token13] = ACTIONS(872),
    [aux_sym_from_layer_token15] = ACTIONS(872),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [275] = {
    [anon_sym_DOLLAR] = ACTIONS(876),
    [aux_sym_from_layer_token1] = ACTIONS(878),
    [aux_sym_from_layer_token2] = ACTIONS(876),
    [aux_sym_from_layer_token5] = ACTIONS(876),
    [aux_sym_from_layer_token7] = ACTIONS(876),
    [aux_sym_from_layer_token9] = ACTIONS(876),
    [aux_sym_from_layer_token11] = ACTIONS(876),
    [aux_sym_from_layer_token13] = ACTIONS(876),
    [aux_sym_from_layer_token15] = ACTIONS(876),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [276] = {
    [anon_sym_DOLLAR] = ACTIONS(880),
    [aux_sym_from_layer_token1] = ACTIONS(882),
    [aux_sym_from_layer_token2] = ACTIONS(880),
    [aux_sym_from_layer_token5] = ACTIONS(880),
    [aux_sym_from_layer_token7] = ACTIONS(880),
    [aux_sym_from_layer_token9] = ACTIONS(880),
    [aux_sym_from_layer_token11] = ACTIONS(880),
    [aux_sym_from_layer_token13] = ACTIONS(880),
    [aux_sym_from_layer_token15] = ACTIONS(880),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [277] = {
    [anon_sym_DOLLAR] = ACTIONS(884),
    [aux_sym_from_layer_token1] = ACTIONS(886),
    [aux_sym_from_layer_token2] = ACTIONS(884),
    [aux_sym_from_layer_token5] = ACTIONS(884),
    [aux_sym_from_layer_token7] = ACTIONS(884),
    [aux_sym_from_layer_token9] = ACTIONS(884),
    [aux_sym_from_layer_token11] = ACTIONS(884),
    [aux_sym_from_layer_token13] = ACTIONS(884),
    [aux_sym_from_layer_token15] = ACTIONS(884),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [278] = {
    [sym__port] = STATE(208),
    [sym_port] = STATE(208),
    [sym_port_range] = STATE(208),
    [sym__port_part] = STATE(78),
    [anon_sym_DQUOTE] = ACTIONS(888),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [aux_sym__port_part_token1] = ACTIONS(122),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [sym__port] = STATE(468),
    [sym_port] = STATE(468),
    [sym_port_range] = STATE(468),
    [sym__port_part] = STATE(422),
    [anon_sym_DQUOTE] = ACTIONS(834),
    [anon_sym_DOLLAR] = ACTIONS(836),
    [aux_sym__port_part_token1] = ACTIONS(838),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [280] = {
    [anon_sym_DQUOTE] = ACTIONS(890),
    [anon_sym_DOLLAR] = ACTIONS(890),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(890),
    [aux_sym__from_layer_token1] = ACTIONS(890),
    [aux_sym_path_token1] = ACTIONS(892),
    [aux_sym_path_token2] = ACTIONS(892),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(890),
    [sym_line_continuation] = ACTIONS(5),
  },
  [281] = {
    [sym_path] = STATE(82),
    [aux_sym__paths] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(894),
    [sym_line_continuation] = ACTIONS(5),
  },
  [282] = {
    [anon_sym_DQUOTE] = ACTIONS(896),
    [anon_sym_DOLLAR] = ACTIONS(896),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(896),
    [aux_sym__from_layer_token1] = ACTIONS(896),
    [aux_sym_path_token1] = ACTIONS(898),
    [aux_sym_path_token2] = ACTIONS(898),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(896),
    [sym_line_continuation] = ACTIONS(5),
  },
  [283] = {
    [sym__port] = STATE(123),
    [sym_port] = STATE(123),
    [sym_port_range] = STATE(123),
    [sym__port_part] = STATE(78),
    [anon_sym_DQUOTE] = ACTIONS(888),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [aux_sym__port_part_token1] = ACTIONS(122),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [284] = {
    [sym_path] = STATE(82),
    [aux_sym__paths] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(900),
    [sym_line_continuation] = ACTIONS(5),
  },
  [285] = {
    [sym_chown] = STATE(521),
    [sym_user_name] = STATE(449),
    [sym_user_id] = STATE(446),
    [anon_sym_DOLLAR] = ACTIONS(902),
    [aux_sym_user_name_token1] = ACTIONS(904),
    [aux_sym_user_id_token1] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [sym_user_name] = STATE(155),
    [sym_user_id] = STATE(164),
    [anon_sym_DQUOTE] = ACTIONS(908),
    [anon_sym_DOLLAR] = ACTIONS(910),
    [aux_sym_user_name_token1] = ACTIONS(912),
    [aux_sym_user_id_token1] = ACTIONS(914),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [287] = {
    [sym_variable_default_value] = STATE(540),
    [sym_variable_this_or_null] = STATE(540),
    [anon_sym_RBRACE] = ACTIONS(916),
    [anon_sym_COLON_DASH] = ACTIONS(918),
    [anon_sym_COLON_PLUS] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [288] = {
    [sym_variable_default_value] = STATE(570),
    [sym_variable_this_or_null] = STATE(570),
    [anon_sym_RBRACE] = ACTIONS(922),
    [anon_sym_COLON_DASH] = ACTIONS(918),
    [anon_sym_COLON_PLUS] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [289] = {
    [sym_template_expr_less_than_equals] = STATE(562),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(317),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [290] = {
    [aux_sym_from_layer_repeat1] = STATE(336),
    [anon_sym_DOLLAR] = ACTIONS(926),
    [aux_sym_from_layer_token3] = ACTIONS(926),
    [aux_sym_from_layer_token4] = ACTIONS(928),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(930),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [291] = {
    [sym_variable_default_value] = STATE(463),
    [sym_variable_this_or_null] = STATE(463),
    [anon_sym_RBRACE] = ACTIONS(932),
    [anon_sym_COLON_DASH] = ACTIONS(918),
    [anon_sym_COLON_PLUS] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [292] = {
    [aux_sym_path_repeat2] = STATE(344),
    [anon_sym_DQUOTE] = ACTIONS(934),
    [anon_sym_DOLLAR] = ACTIONS(936),
    [aux_sym_path_token3] = ACTIONS(938),
    [aux_sym_path_token4] = ACTIONS(940),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [293] = {
    [sym_label_value] = STATE(176),
    [anon_sym_DQUOTE] = ACTIONS(942),
    [aux_sym_label_value_token1] = ACTIONS(944),
    [aux_sym_label_value_token2] = ACTIONS(944),
    [anon_sym_SQUOTE] = ACTIONS(946),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [294] = {
    [aux_sym_from_layer_repeat1] = STATE(300),
    [anon_sym_DOLLAR] = ACTIONS(948),
    [aux_sym_from_layer_token3] = ACTIONS(948),
    [aux_sym_from_layer_token4] = ACTIONS(950),
    [anon_sym_SLASH] = ACTIONS(952),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [295] = {
    [aux_sym_from_layer_repeat2] = STATE(338),
    [aux_sym_from_layer_token4] = ACTIONS(950),
    [aux_sym_from_layer_token5] = ACTIONS(954),
    [aux_sym_from_layer_token8] = ACTIONS(954),
    [anon_sym_SLASH] = ACTIONS(952),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [296] = {
    [aux_sym_from_layer_repeat3] = STATE(339),
    [aux_sym_from_layer_token4] = ACTIONS(950),
    [aux_sym_from_layer_token9] = ACTIONS(956),
    [aux_sym_from_layer_token12] = ACTIONS(956),
    [anon_sym_SLASH] = ACTIONS(952),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [297] = {
    [aux_sym_from_layer_repeat4] = STATE(340),
    [aux_sym_from_layer_token4] = ACTIONS(950),
    [aux_sym_from_layer_token13] = ACTIONS(958),
    [aux_sym_from_layer_token16] = ACTIONS(958),
    [anon_sym_SLASH] = ACTIONS(952),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [298] = {
    [sym_hc_command] = STATE(196),
    [aux_sym__anything] = STATE(152),
    [sym__anything_or_json_array] = STATE(183),
    [aux_sym__anything_token1] = ACTIONS(511),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(960),
    [sym_line_continuation] = ACTIONS(5),
  },
  [299] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(962),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(962),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(962),
    [anon_sym_DASH_DASHretries] = ACTIONS(962),
    [aux_sym__hc_command_token1] = ACTIONS(962),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [300] = {
    [aux_sym_from_layer_repeat1] = STATE(300),
    [anon_sym_DOLLAR] = ACTIONS(964),
    [aux_sym_from_layer_token3] = ACTIONS(964),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(135),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [301] = {
    [aux_sym_from_layer_repeat2] = STATE(301),
    [aux_sym_from_layer_token4] = ACTIONS(190),
    [aux_sym_from_layer_token5] = ACTIONS(967),
    [aux_sym_from_layer_token8] = ACTIONS(967),
    [anon_sym_SLASH] = ACTIONS(188),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [302] = {
    [sym_template_expr_less_than_equals] = STATE(475),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(317),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [303] = {
    [aux_sym_from_layer_repeat3] = STATE(303),
    [aux_sym_from_layer_token4] = ACTIONS(183),
    [aux_sym_from_layer_token9] = ACTIONS(970),
    [aux_sym_from_layer_token12] = ACTIONS(970),
    [anon_sym_SLASH] = ACTIONS(181),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [304] = {
    [aux_sym_from_layer_repeat4] = STATE(304),
    [aux_sym_from_layer_token4] = ACTIONS(144),
    [aux_sym_from_layer_token13] = ACTIONS(973),
    [aux_sym_from_layer_token16] = ACTIONS(973),
    [anon_sym_SLASH] = ACTIONS(142),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [305] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(976),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(976),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(976),
    [anon_sym_DASH_DASHretries] = ACTIONS(976),
    [aux_sym__hc_command_token1] = ACTIONS(976),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [306] = {
    [sym_template_expr_less_than_equals] = STATE(556),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(317),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [307] = {
    [sym_template_expr_less_than_equals] = STATE(550),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(317),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [308] = {
    [sym_template_expr_less_than_equals] = STATE(479),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(317),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [309] = {
    [aux_sym_path_repeat2] = STATE(309),
    [anon_sym_DQUOTE] = ACTIONS(978),
    [anon_sym_DOLLAR] = ACTIONS(980),
    [aux_sym_path_token3] = ACTIONS(983),
    [aux_sym_path_token4] = ACTIONS(985),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [sym_template_expr_less_than_equals] = STATE(544),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(317),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [311] = {
    [sym_port] = STATE(535),
    [sym_port_range] = STATE(535),
    [sym__port_part] = STATE(422),
    [anon_sym_DOLLAR] = ACTIONS(836),
    [aux_sym__port_part_token1] = ACTIONS(838),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [312] = {
    [sym_template_expr_less_than_equals] = STATE(512),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(317),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [313] = {
    [aux_sym_from_layer_repeat2] = STATE(323),
    [aux_sym_from_layer_token4] = ACTIONS(988),
    [aux_sym_from_layer_token5] = ACTIONS(990),
    [aux_sym_from_layer_token8] = ACTIONS(990),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(992),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [314] = {
    [aux_sym_from_layer_repeat3] = STATE(322),
    [aux_sym_from_layer_token4] = ACTIONS(988),
    [aux_sym_from_layer_token9] = ACTIONS(994),
    [aux_sym_from_layer_token12] = ACTIONS(994),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(992),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [315] = {
    [aux_sym_from_layer_repeat4] = STATE(321),
    [aux_sym_from_layer_token4] = ACTIONS(988),
    [aux_sym_from_layer_token13] = ACTIONS(996),
    [aux_sym_from_layer_token16] = ACTIONS(996),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(992),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [316] = {
    [sym_template_expr_less_than_equals] = STATE(546),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(317),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(320),
    [aux_sym_from_layer_token14] = ACTIONS(998),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(1000),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1000),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(1000),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [318] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1002),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1002),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1002),
    [anon_sym_DASH_DASHretries] = ACTIONS(1002),
    [aux_sym__hc_command_token1] = ACTIONS(1002),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [319] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1004),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1004),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1004),
    [anon_sym_DASH_DASHretries] = ACTIONS(1004),
    [aux_sym__hc_command_token1] = ACTIONS(1004),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(320),
    [aux_sym_from_layer_token14] = ACTIONS(1006),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(1008),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1008),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(1008),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [321] = {
    [aux_sym_from_layer_repeat4] = STATE(321),
    [aux_sym_from_layer_token4] = ACTIONS(144),
    [aux_sym_from_layer_token13] = ACTIONS(1011),
    [aux_sym_from_layer_token16] = ACTIONS(1011),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [322] = {
    [aux_sym_from_layer_repeat3] = STATE(322),
    [aux_sym_from_layer_token4] = ACTIONS(183),
    [aux_sym_from_layer_token9] = ACTIONS(1014),
    [aux_sym_from_layer_token12] = ACTIONS(1014),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [323] = {
    [aux_sym_from_layer_repeat2] = STATE(323),
    [aux_sym_from_layer_token4] = ACTIONS(190),
    [aux_sym_from_layer_token5] = ACTIONS(1017),
    [aux_sym_from_layer_token8] = ACTIONS(1017),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [324] = {
    [sym_port] = STATE(482),
    [sym_port_range] = STATE(482),
    [sym__port_part] = STATE(422),
    [anon_sym_DOLLAR] = ACTIONS(836),
    [aux_sym__port_part_token1] = ACTIONS(838),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [325] = {
    [sym_path] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(1020),
    [anon_sym_DOLLAR] = ACTIONS(1022),
    [aux_sym_path_token1] = ACTIONS(1024),
    [aux_sym_path_token2] = ACTIONS(1026),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [326] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1028),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1028),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1028),
    [anon_sym_DASH_DASHretries] = ACTIONS(1028),
    [aux_sym__hc_command_token1] = ACTIONS(1028),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [327] = {
    [aux_sym_from_layer_repeat1] = STATE(294),
    [anon_sym_DOLLAR] = ACTIONS(948),
    [aux_sym_from_layer_token3] = ACTIONS(948),
    [aux_sym_from_layer_token4] = ACTIONS(1030),
    [anon_sym_SLASH] = ACTIONS(1032),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [328] = {
    [sym_variable_default_value] = STATE(576),
    [sym_variable_this_or_null] = STATE(576),
    [anon_sym_RBRACE] = ACTIONS(1034),
    [anon_sym_COLON_DASH] = ACTIONS(918),
    [anon_sym_COLON_PLUS] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [329] = {
    [sym_template_expr_less_than_equals] = STATE(486),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(317),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [330] = {
    [sym_variable_default_value] = STATE(574),
    [sym_variable_this_or_null] = STATE(574),
    [anon_sym_RBRACE] = ACTIONS(1036),
    [anon_sym_COLON_DASH] = ACTIONS(918),
    [anon_sym_COLON_PLUS] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [331] = {
    [sym_variable_default_value] = STATE(572),
    [sym_variable_this_or_null] = STATE(572),
    [anon_sym_RBRACE] = ACTIONS(1038),
    [anon_sym_COLON_DASH] = ACTIONS(918),
    [anon_sym_COLON_PLUS] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [332] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1040),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1040),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1040),
    [anon_sym_DASH_DASHretries] = ACTIONS(1040),
    [aux_sym__hc_command_token1] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [333] = {
    [aux_sym_from_layer_repeat4] = STATE(315),
    [aux_sym_from_layer_token4] = ACTIONS(1042),
    [aux_sym_from_layer_token13] = ACTIONS(996),
    [aux_sym_from_layer_token16] = ACTIONS(996),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1044),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [334] = {
    [aux_sym_from_layer_repeat3] = STATE(314),
    [aux_sym_from_layer_token4] = ACTIONS(1042),
    [aux_sym_from_layer_token9] = ACTIONS(994),
    [aux_sym_from_layer_token12] = ACTIONS(994),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1044),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [335] = {
    [aux_sym_from_layer_repeat2] = STATE(313),
    [aux_sym_from_layer_token4] = ACTIONS(1042),
    [aux_sym_from_layer_token5] = ACTIONS(990),
    [aux_sym_from_layer_token8] = ACTIONS(990),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1044),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [aux_sym_from_layer_repeat1] = STATE(337),
    [anon_sym_DOLLAR] = ACTIONS(926),
    [aux_sym_from_layer_token3] = ACTIONS(926),
    [aux_sym_from_layer_token4] = ACTIONS(1042),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1044),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [337] = {
    [aux_sym_from_layer_repeat1] = STATE(337),
    [anon_sym_DOLLAR] = ACTIONS(1046),
    [aux_sym_from_layer_token3] = ACTIONS(1046),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [338] = {
    [aux_sym_from_layer_repeat2] = STATE(301),
    [aux_sym_from_layer_token4] = ACTIONS(1049),
    [aux_sym_from_layer_token5] = ACTIONS(954),
    [aux_sym_from_layer_token8] = ACTIONS(954),
    [anon_sym_SLASH] = ACTIONS(1051),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [339] = {
    [aux_sym_from_layer_repeat3] = STATE(303),
    [aux_sym_from_layer_token4] = ACTIONS(1049),
    [aux_sym_from_layer_token9] = ACTIONS(956),
    [aux_sym_from_layer_token12] = ACTIONS(956),
    [anon_sym_SLASH] = ACTIONS(1051),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [340] = {
    [aux_sym_from_layer_repeat4] = STATE(304),
    [aux_sym_from_layer_token4] = ACTIONS(1049),
    [aux_sym_from_layer_token13] = ACTIONS(958),
    [aux_sym_from_layer_token16] = ACTIONS(958),
    [anon_sym_SLASH] = ACTIONS(1051),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [341] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1053),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1053),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1053),
    [anon_sym_DASH_DASHretries] = ACTIONS(1053),
    [aux_sym__hc_command_token1] = ACTIONS(1053),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [342] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1055),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1055),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1055),
    [anon_sym_DASH_DASHretries] = ACTIONS(1055),
    [aux_sym__hc_command_token1] = ACTIONS(1055),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [343] = {
    [sym_port_protocol] = STATE(408),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(1057),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [344] = {
    [aux_sym_path_repeat2] = STATE(309),
    [anon_sym_DQUOTE] = ACTIONS(1059),
    [anon_sym_DOLLAR] = ACTIONS(936),
    [aux_sym_path_token3] = ACTIONS(1061),
    [aux_sym_path_token4] = ACTIONS(940),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [345] = {
    [aux_sym_path_repeat2] = STATE(347),
    [anon_sym_DQUOTE] = ACTIONS(1063),
    [anon_sym_DOLLAR] = ACTIONS(936),
    [aux_sym_path_token3] = ACTIONS(1065),
    [aux_sym_path_token4] = ACTIONS(940),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [346] = {
    [sym_template_expr_less_than_equals] = STATE(503),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(317),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [aux_sym_path_repeat2] = STATE(309),
    [anon_sym_DQUOTE] = ACTIONS(1067),
    [anon_sym_DOLLAR] = ACTIONS(936),
    [aux_sym_path_token3] = ACTIONS(1069),
    [aux_sym_path_token4] = ACTIONS(940),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [sym_variable_default_value] = STATE(547),
    [sym_variable_this_or_null] = STATE(547),
    [anon_sym_RBRACE] = ACTIONS(1071),
    [anon_sym_COLON_DASH] = ACTIONS(918),
    [anon_sym_COLON_PLUS] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [349] = {
    [sym_variable_default_value] = STATE(553),
    [sym_variable_this_or_null] = STATE(553),
    [anon_sym_RBRACE] = ACTIONS(1073),
    [anon_sym_COLON_DASH] = ACTIONS(918),
    [anon_sym_COLON_PLUS] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [sym_port_protocol] = STATE(414),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_COLON] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(1057),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [351] = {
    [sym_template_expr_less_than_equals] = STATE(500),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(317),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [sym_template_expr_less_than_equals] = STATE(578),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(317),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(924),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(924),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [sym_variable_default_value] = STATE(559),
    [sym_variable_this_or_null] = STATE(559),
    [anon_sym_RBRACE] = ACTIONS(1075),
    [anon_sym_COLON_DASH] = ACTIONS(918),
    [anon_sym_COLON_PLUS] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [sym_variable_default_value] = STATE(564),
    [sym_variable_this_or_null] = STATE(564),
    [anon_sym_RBRACE] = ACTIONS(1077),
    [anon_sym_COLON_DASH] = ACTIONS(918),
    [anon_sym_COLON_PLUS] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [sym_variable_default_value] = STATE(566),
    [sym_variable_this_or_null] = STATE(566),
    [anon_sym_RBRACE] = ACTIONS(1079),
    [anon_sym_COLON_DASH] = ACTIONS(918),
    [anon_sym_COLON_PLUS] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [356] = {
    [sym_variable_default_value] = STATE(568),
    [sym_variable_this_or_null] = STATE(568),
    [anon_sym_RBRACE] = ACTIONS(1081),
    [anon_sym_COLON_DASH] = ACTIONS(918),
    [anon_sym_COLON_PLUS] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [357] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_from_layer_token3] = ACTIONS(207),
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [358] = {
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [aux_sym_from_layer_token13] = ACTIONS(199),
    [aux_sym_from_layer_token16] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [359] = {
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [aux_sym_from_layer_token9] = ACTIONS(203),
    [aux_sym_from_layer_token12] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [360] = {
    [sym_user_name] = STATE(438),
    [sym_user_id] = STATE(433),
    [aux_sym_user_name_token1] = ACTIONS(1083),
    [aux_sym_user_id_token1] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [361] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_from_layer_token3] = ACTIONS(195),
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [362] = {
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_from_layer_token3] = ACTIONS(211),
    [aux_sym_from_layer_token4] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(211),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [363] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_from_layer_token3] = ACTIONS(207),
    [aux_sym_from_layer_token4] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [364] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [365] = {
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(211),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [366] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [367] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_from_layer_token3] = ACTIONS(195),
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_from_layer_token3] = ACTIONS(211),
    [aux_sym_from_layer_token4] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [369] = {
    [anon_sym_DOLLAR] = ACTIONS(135),
    [aux_sym_from_layer_token3] = ACTIONS(135),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_path_token3] = ACTIONS(213),
    [aux_sym_path_token4] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [371] = {
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [aux_sym_from_layer_token13] = ACTIONS(199),
    [aux_sym_from_layer_token16] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [372] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [aux_sym_path_token3] = ACTIONS(209),
    [aux_sym_path_token4] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [373] = {
    [aux_sym_from_layer_token4] = ACTIONS(217),
    [aux_sym_from_layer_token5] = ACTIONS(215),
    [aux_sym_from_layer_token8] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [374] = {
    [aux_sym__anything] = STATE(152),
    [sym__anything_or_json_array] = STATE(188),
    [aux_sym__anything_token1] = ACTIONS(511),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1087),
    [sym_line_continuation] = ACTIONS(5),
  },
  [375] = {
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [aux_sym_from_layer_token9] = ACTIONS(203),
    [aux_sym_from_layer_token12] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [376] = {
    [anon_sym_DQUOTE] = ACTIONS(978),
    [anon_sym_DOLLAR] = ACTIONS(978),
    [aux_sym_path_token3] = ACTIONS(983),
    [aux_sym_path_token4] = ACTIONS(983),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [377] = {
    [sym__env_pairs] = STATE(191),
    [sym_env_pair_eq] = STATE(153),
    [sym_env_pair] = STATE(191),
    [sym_env_key] = ACTIONS(1089),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [378] = {
    [aux_sym__anything] = STATE(152),
    [sym__anything_or_json_array] = STATE(195),
    [aux_sym__anything_token1] = ACTIONS(511),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1091),
    [sym_line_continuation] = ACTIONS(5),
  },
  [379] = {
    [aux_sym__anything] = STATE(152),
    [sym__anything_or_json_array] = STATE(199),
    [aux_sym__anything_token1] = ACTIONS(511),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1093),
    [sym_line_continuation] = ACTIONS(5),
  },
  [380] = {
    [aux_sym_from_layer_token4] = ACTIONS(217),
    [aux_sym_from_layer_token5] = ACTIONS(215),
    [aux_sym_from_layer_token8] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [381] = {
    [anon_sym_DOLLAR] = ACTIONS(135),
    [aux_sym_from_layer_token3] = ACTIONS(135),
    [aux_sym_from_layer_token4] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(135),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [382] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_path_token3] = ACTIONS(197),
    [aux_sym_path_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [383] = {
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(385),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [384] = {
    [sym_docker_variable] = STATE(277),
    [anon_sym_LBRACE] = ACTIONS(1095),
    [sym__docker_variable] = ACTIONS(1097),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [385] = {
    [aux_sym__labels] = STATE(120),
    [sym_label_pair] = STATE(120),
    [sym_label_key] = ACTIONS(1099),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [386] = {
    [sym_docker_variable] = STATE(25),
    [anon_sym_LBRACE] = ACTIONS(1101),
    [sym__docker_variable] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [387] = {
    [sym_signal_name] = STATE(190),
    [sym_signal_num] = ACTIONS(1105),
    [aux_sym_signal_name_token1] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [388] = {
    [sym_docker_variable] = STATE(345),
    [anon_sym_LBRACE] = ACTIONS(1109),
    [sym__docker_variable] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [anon_sym_DOLLAR] = ACTIONS(1113),
    [aux_sym_path_token3] = ACTIONS(1115),
    [aux_sym_path_token4] = ACTIONS(1117),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [390] = {
    [anon_sym_DOLLAR] = ACTIONS(1119),
    [aux_sym_path_token3] = ACTIONS(1121),
    [aux_sym_path_token4] = ACTIONS(1123),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [391] = {
    [sym_docker_variable] = STATE(52),
    [anon_sym_LBRACE] = ACTIONS(1125),
    [sym__docker_variable] = ACTIONS(1127),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [392] = {
    [sym_docker_variable] = STATE(29),
    [anon_sym_LBRACE] = ACTIONS(1129),
    [sym__docker_variable] = ACTIONS(1131),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [393] = {
    [sym_platform] = STATE(225),
    [anon_sym_DOLLAR] = ACTIONS(1133),
    [aux_sym_from_layer_token1] = ACTIONS(1135),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [394] = {
    [aux_sym_label_value_repeat1] = STATE(394),
    [anon_sym_DQUOTE] = ACTIONS(1137),
    [aux_sym_label_value_token3] = ACTIONS(1139),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [395] = {
    [sym_docker_variable] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(1101),
    [sym__docker_variable] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [396] = {
    [aux_sym_label_value_repeat2] = STATE(396),
    [anon_sym_SQUOTE] = ACTIONS(1142),
    [aux_sym_label_value_token4] = ACTIONS(1144),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [397] = {
    [sym_docker_variable] = STATE(129),
    [anon_sym_LBRACE] = ACTIONS(1147),
    [sym__docker_variable] = ACTIONS(1149),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [398] = {
    [sym_docker_variable] = STATE(381),
    [anon_sym_LBRACE] = ACTIONS(1151),
    [sym__docker_variable] = ACTIONS(1153),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [sym_docker_variable] = STATE(59),
    [anon_sym_LBRACE] = ACTIONS(1155),
    [sym__docker_variable] = ACTIONS(1157),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [400] = {
    [sym_docker_variable] = STATE(369),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym__docker_variable] = ACTIONS(1161),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [401] = {
    [sym_docker_variable] = STATE(425),
    [anon_sym_LBRACE] = ACTIONS(1163),
    [sym__docker_variable] = ACTIONS(1165),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [anon_sym_DOLLAR] = ACTIONS(1167),
    [aux_sym_port_protocol_token1] = ACTIONS(1169),
    [aux_sym_port_protocol_token2] = ACTIONS(1169),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [403] = {
    [sym_docker_variable] = STATE(343),
    [anon_sym_LBRACE] = ACTIONS(1163),
    [sym__docker_variable] = ACTIONS(1165),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [404] = {
    [sym_docker_variable] = STATE(113),
    [anon_sym_LBRACE] = ACTIONS(1171),
    [sym__docker_variable] = ACTIONS(1173),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [405] = {
    [sym_docker_variable] = STATE(192),
    [anon_sym_LBRACE] = ACTIONS(1129),
    [sym__docker_variable] = ACTIONS(1131),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [406] = {
    [sym_docker_variable] = STATE(292),
    [anon_sym_LBRACE] = ACTIONS(1109),
    [sym__docker_variable] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [407] = {
    [sym_docker_variable] = STATE(489),
    [anon_sym_LBRACE] = ACTIONS(1175),
    [sym__docker_variable] = ACTIONS(1177),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [sym_docker_variable] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(1171),
    [sym__docker_variable] = ACTIONS(1173),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [sym_docker_variable] = STATE(290),
    [anon_sym_LBRACE] = ACTIONS(1159),
    [sym__docker_variable] = ACTIONS(1161),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [sym__port_part] = STATE(452),
    [anon_sym_DOLLAR] = ACTIONS(836),
    [aux_sym__port_part_token1] = ACTIONS(838),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [aux_sym_label_value_repeat2] = STATE(396),
    [anon_sym_SQUOTE] = ACTIONS(1179),
    [aux_sym_label_value_token4] = ACTIONS(1181),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [aux_sym_label_value_repeat1] = STATE(394),
    [anon_sym_DQUOTE] = ACTIONS(1179),
    [aux_sym_label_value_token3] = ACTIONS(1183),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [anon_sym_DQUOTE] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [sym_docker_variable] = STATE(376),
    [anon_sym_LBRACE] = ACTIONS(1109),
    [sym__docker_variable] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [anon_sym_DOLLAR] = ACTIONS(1185),
    [aux_sym_port_protocol_token1] = ACTIONS(1187),
    [aux_sym_port_protocol_token2] = ACTIONS(1187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [sym__port_part] = STATE(95),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [aux_sym__port_part_token1] = ACTIONS(122),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [418] = {
    [sym_docker_variable] = STATE(71),
    [anon_sym_LBRACE] = ACTIONS(1129),
    [sym__docker_variable] = ACTIONS(1131),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [sym_docker_variable] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(1155),
    [sym__docker_variable] = ACTIONS(1157),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [sym_docker_variable] = STATE(327),
    [anon_sym_LBRACE] = ACTIONS(1151),
    [sym__docker_variable] = ACTIONS(1153),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [sym_docker_variable] = STATE(97),
    [anon_sym_LBRACE] = ACTIONS(1147),
    [sym__docker_variable] = ACTIONS(1149),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [anon_sym_DQUOTE] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(351),
    [anon_sym_DASH] = ACTIONS(1189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [423] = {
    [sym_docker_variable] = STATE(54),
    [anon_sym_LBRACE] = ACTIONS(1101),
    [sym__docker_variable] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [sym_docker_variable] = STATE(74),
    [anon_sym_LBRACE] = ACTIONS(1125),
    [sym__docker_variable] = ACTIONS(1127),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [anon_sym_DQUOTE] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(339),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [sym_docker_variable] = STATE(79),
    [anon_sym_LBRACE] = ACTIONS(1101),
    [sym__docker_variable] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [sym_hc_start_period] = STATE(332),
    [aux_sym_hc_interval_token1] = ACTIONS(1191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [anon_sym_DQUOTE] = ACTIONS(601),
    [anon_sym_COLON] = ACTIONS(601),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [anon_sym_DQUOTE] = ACTIONS(573),
    [anon_sym_COLON] = ACTIONS(573),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [sym_hc_timeout] = STATE(319),
    [aux_sym_hc_interval_token1] = ACTIONS(1193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [sym_user_group_id] = STATE(216),
    [aux_sym_user_id_token1] = ACTIONS(1195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [sym_user_group] = STATE(216),
    [aux_sym_user_name_token1] = ACTIONS(1197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [anon_sym_DQUOTE] = ACTIONS(1199),
    [anon_sym_COLON] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [anon_sym_DQUOTE] = ACTIONS(412),
    [anon_sym_COLON] = ACTIONS(1203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [435] = {
    [sym_hc_interval] = STATE(305),
    [aux_sym_hc_interval_token1] = ACTIONS(1205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [anon_sym_COLON] = ACTIONS(573),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(573),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [anon_sym_COLON] = ACTIONS(601),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [anon_sym_DQUOTE] = ACTIONS(1199),
    [anon_sym_COLON] = ACTIONS(1207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [sym_hc_retries] = STATE(342),
    [aux_sym__port_part_token1] = ACTIONS(1209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [anon_sym_DQUOTE] = ACTIONS(1211),
    [anon_sym_COLON] = ACTIONS(1214),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [sym_user_group_id] = STATE(518),
    [aux_sym_user_id_token1] = ACTIONS(1216),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [sym_env_pair_eq] = STATE(175),
    [sym_env_key] = ACTIONS(1218),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [sym_user_group] = STATE(518),
    [aux_sym_user_name_token1] = ACTIONS(1220),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [aux_sym__anything] = STATE(140),
    [aux_sym__anything_token1] = ACTIONS(1222),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [aux_sym_label_value_repeat2] = STATE(412),
    [aux_sym_label_value_token4] = ACTIONS(1224),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [anon_sym_COLON] = ACTIONS(1226),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1228),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [aux_sym_label_value_repeat1] = STATE(413),
    [aux_sym_label_value_token3] = ACTIONS(1230),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [anon_sym_DQUOTE] = ACTIONS(443),
    [anon_sym_COLON] = ACTIONS(443),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [anon_sym_COLON] = ACTIONS(1232),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1228),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [sym_user_group_id] = STATE(462),
    [aux_sym_user_id_token1] = ACTIONS(1234),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [sym_user_group] = STATE(462),
    [aux_sym_user_name_token1] = ACTIONS(1236),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [anon_sym_DQUOTE] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [aux_sym__anything] = STATE(146),
    [aux_sym__anything_token1] = ACTIONS(1238),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [aux_sym_from_token2] = ACTIONS(1240),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1242),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1244),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [457] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1246),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [458] = {
    [sym_template_expr_percent_signs] = ACTIONS(1248),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [459] = {
    [sym_template_expr_curly_braces] = ACTIONS(1250),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [aux_sym_from_layer_token6] = ACTIONS(1252),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1254),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1256),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [anon_sym_RBRACE] = ACTIONS(1258),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [464] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1260),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1262),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [anon_sym_DQUOTE] = ACTIONS(1059),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1264),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [anon_sym_DQUOTE] = ACTIONS(463),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(655),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(651),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [sym_template_expr_percent_signs] = ACTIONS(1266),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [sym_template_expr_curly_braces] = ACTIONS(1268),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [473] = {
    [sym_template_expr_percent_signs] = ACTIONS(1270),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [sym_template_expr_curly_braces] = ACTIONS(1272),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [aux_sym_from_layer_token14] = ACTIONS(1274),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [aux_sym_from_layer_token10] = ACTIONS(1276),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [477] = {
    [aux_sym_from_layer_token6] = ACTIONS(1278),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [478] = {
    [aux_sym_from_token2] = ACTIONS(1280),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [aux_sym_from_layer_token14] = ACTIONS(1282),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [480] = {
    [aux_sym_from_layer_token10] = ACTIONS(1284),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [sym_template_expr_curly_braces] = ACTIONS(1286),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [anon_sym_DQUOTE] = ACTIONS(1288),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [483] = {
    [anon_sym_DQUOTE] = ACTIONS(655),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [anon_sym_DQUOTE] = ACTIONS(651),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [anon_sym_EQ2] = ACTIONS(524),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [aux_sym_from_layer_token14] = ACTIONS(1290),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [aux_sym_from_layer_token10] = ACTIONS(1292),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [aux_sym_from_layer_token6] = ACTIONS(1294),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1296),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [aux_sym_from_token2] = ACTIONS(1298),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [aux_sym_from_layer_token6] = ACTIONS(1300),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [492] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1302),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [493] = {
    [sym_template_expr_percent_signs] = ACTIONS(1304),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [sym_template_expr_curly_braces] = ACTIONS(1306),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [anon_sym_SLASH] = ACTIONS(1308),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [496] = {
    [aux_sym_from_token2] = ACTIONS(1310),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [sym_template_expr_percent_signs] = ACTIONS(1312),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [sym_arg_name] = ACTIONS(1314),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [499] = {
    [aux_sym_from_layer_token10] = ACTIONS(1316),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [500] = {
    [aux_sym_from_layer_token14] = ACTIONS(1318),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [aux_sym_from_layer_token10] = ACTIONS(1320),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [502] = {
    [aux_sym_from_layer_token6] = ACTIONS(1322),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [503] = {
    [aux_sym_from_layer_token14] = ACTIONS(1324),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [504] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1326),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [505] = {
    [aux_sym_from_layer_token6] = ACTIONS(1328),
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
    [anon_sym_DQUOTE] = ACTIONS(1332),
    [sym__space] = ACTIONS(5),
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
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [511] = {
    [aux_sym_from_layer_token10] = ACTIONS(1334),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [512] = {
    [aux_sym_from_layer_token14] = ACTIONS(1336),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [513] = {
    [sym_env_value] = ACTIONS(1338),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [514] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1340),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [515] = {
    [sym_template_expr_percent_signs] = ACTIONS(1342),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [516] = {
    [sym_template_expr_curly_braces] = ACTIONS(1344),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [517] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1346),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [518] = {
    [anon_sym_DQUOTE] = ACTIONS(1348),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [519] = {
    [anon_sym_DQUOTE] = ACTIONS(1350),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [520] = {
    [anon_sym_RBRACE] = ACTIONS(1352),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [521] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1354),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [522] = {
    [aux_sym_from_token2] = ACTIONS(1356),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [523] = {
    [sym_arg_default] = ACTIONS(1358),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [524] = {
    [sym__docker_variable] = ACTIONS(1360),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [525] = {
    [anon_sym_DQUOTE] = ACTIONS(1362),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [526] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1364),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [527] = {
    [anon_sym_RBRACE] = ACTIONS(1366),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [528] = {
    [aux_sym_signal_name_token2] = ACTIONS(1368),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [529] = {
    [anon_sym_SLASH] = ACTIONS(952),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [530] = {
    [aux_sym_from_token2] = ACTIONS(1370),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [531] = {
    [anon_sym_DQUOTE] = ACTIONS(1372),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [532] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1374),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [533] = {
    [aux_sym_label_pair_token1] = ACTIONS(1376),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [534] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1378),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [535] = {
    [anon_sym_DQUOTE] = ACTIONS(1380),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [536] = {
    [aux_sym_from_layer_token6] = ACTIONS(1382),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [537] = {
    [aux_sym_from_layer_token10] = ACTIONS(1384),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [538] = {
    [anon_sym_DQUOTE] = ACTIONS(1067),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [539] = {
    [anon_sym_EQ] = ACTIONS(1386),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [540] = {
    [anon_sym_RBRACE] = ACTIONS(1388),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [541] = {
    [anon_sym_DQUOTE] = ACTIONS(1390),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [542] = {
    [aux_sym_from_layer_token6] = ACTIONS(1392),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [543] = {
    [aux_sym_from_layer_token10] = ACTIONS(1394),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [544] = {
    [aux_sym_from_layer_token14] = ACTIONS(1396),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [545] = {
    [anon_sym_EQ] = ACTIONS(1398),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [546] = {
    [aux_sym_from_layer_token14] = ACTIONS(1400),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [547] = {
    [anon_sym_RBRACE] = ACTIONS(1402),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [548] = {
    [aux_sym_from_layer_token6] = ACTIONS(1404),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [549] = {
    [aux_sym_from_layer_token10] = ACTIONS(1406),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [550] = {
    [aux_sym_from_layer_token14] = ACTIONS(1408),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [551] = {
    [anon_sym_EQ] = ACTIONS(1410),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [552] = {
    [anon_sym_SLASH] = ACTIONS(1051),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [553] = {
    [anon_sym_RBRACE] = ACTIONS(1412),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [554] = {
    [aux_sym_from_layer_token6] = ACTIONS(1414),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [555] = {
    [aux_sym_from_layer_token10] = ACTIONS(1416),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [556] = {
    [aux_sym_from_layer_token14] = ACTIONS(1418),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [557] = {
    [anon_sym_EQ] = ACTIONS(1420),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [558] = {
    [aux_sym_from_token2] = ACTIONS(1422),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [559] = {
    [anon_sym_RBRACE] = ACTIONS(1424),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [560] = {
    [aux_sym_from_layer_token6] = ACTIONS(1426),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [561] = {
    [aux_sym_from_layer_token10] = ACTIONS(1428),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [562] = {
    [aux_sym_from_layer_token14] = ACTIONS(1430),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [563] = {
    [sym_template_expr_percent_signs] = ACTIONS(1432),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [564] = {
    [anon_sym_RBRACE] = ACTIONS(1434),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [565] = {
    [sym_template_expr_curly_braces] = ACTIONS(1436),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [566] = {
    [anon_sym_RBRACE] = ACTIONS(1438),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [567] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1440),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [568] = {
    [anon_sym_RBRACE] = ACTIONS(1442),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [569] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1444),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [570] = {
    [anon_sym_RBRACE] = ACTIONS(1446),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [571] = {
    [sym_template_expr_percent_signs] = ACTIONS(1448),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [572] = {
    [anon_sym_RBRACE] = ACTIONS(1450),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [573] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1452),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [574] = {
    [anon_sym_RBRACE] = ACTIONS(1454),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [575] = {
    [aux_sym_from_token2] = ACTIONS(1456),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [576] = {
    [anon_sym_RBRACE] = ACTIONS(1458),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [577] = {
    [sym_template_expr_curly_braces] = ACTIONS(1460),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [578] = {
    [aux_sym_from_layer_token14] = ACTIONS(1462),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [579] = {
    [sym__docker_variable] = ACTIONS(1464),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [580] = {
    [ts_builtin_sym_end] = ACTIONS(1466),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [581] = {
    [sym_template_expr_curly_braces] = ACTIONS(1468),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [582] = {
    [sym_template_expr_percent_signs] = ACTIONS(1470),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [583] = {
    [aux_sym_from_layer_token10] = ACTIONS(1472),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [584] = {
    [sym__docker_variable] = ACTIONS(1474),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [585] = {
    [sym_template_expr_curly_braces] = ACTIONS(1476),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [586] = {
    [sym_template_expr_percent_signs] = ACTIONS(1478),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [587] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1480),
    [sym_line_continuation] = ACTIONS(5),
  },
  [588] = {
    [sym__docker_variable] = ACTIONS(1482),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [589] = {
    [sym_template_expr_curly_braces] = ACTIONS(1484),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [590] = {
    [sym_template_expr_percent_signs] = ACTIONS(1486),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [591] = {
    [aux_sym_from_layer_token6] = ACTIONS(1488),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [592] = {
    [sym__docker_variable] = ACTIONS(1490),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [593] = {
    [sym_template_expr_curly_braces] = ACTIONS(1492),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [594] = {
    [sym_template_expr_percent_signs] = ACTIONS(1494),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [595] = {
    [anon_sym_SLASH] = ACTIONS(1496),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [596] = {
    [sym__docker_variable] = ACTIONS(1498),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [597] = {
    [sym__docker_variable] = ACTIONS(1500),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [598] = {
    [sym__docker_variable] = ACTIONS(1502),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [599] = {
    [sym__docker_variable] = ACTIONS(1504),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [600] = {
    [sym__docker_variable] = ACTIONS(1506),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [601] = {
    [sym__docker_variable] = ACTIONS(1508),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [602] = {
    [sym__docker_variable] = ACTIONS(1510),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(281),
  [13] = {.count = 1, .reusable = true}, SHIFT(498),
  [15] = {.count = 1, .reusable = true}, SHIFT(379),
  [17] = {.count = 1, .reusable = true}, SHIFT(226),
  [19] = {.count = 1, .reusable = true}, SHIFT(378),
  [21] = {.count = 1, .reusable = true}, SHIFT(377),
  [23] = {.count = 1, .reusable = true}, SHIFT(224),
  [25] = {.count = 1, .reusable = true}, SHIFT(223),
  [27] = {.count = 1, .reusable = true}, SHIFT(222),
  [29] = {.count = 1, .reusable = true}, SHIFT(385),
  [31] = {.count = 1, .reusable = true}, SHIFT(453),
  [33] = {.count = 1, .reusable = true}, SHIFT(8),
  [35] = {.count = 1, .reusable = true}, SHIFT(374),
  [37] = {.count = 1, .reusable = true}, SHIFT(587),
  [39] = {.count = 1, .reusable = true}, SHIFT(387),
  [41] = {.count = 1, .reusable = true}, SHIFT(286),
  [43] = {.count = 1, .reusable = true}, SHIFT(284),
  [45] = {.count = 1, .reusable = true}, SHIFT(325),
  [47] = {.count = 1, .reusable = false}, SHIFT(210),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1),
  [51] = {.count = 1, .reusable = true}, SHIFT(210),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 2, .production_id = 3),
  [55] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(281),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(498),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(379),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(226),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(378),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(377),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(224),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(223),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(222),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(385),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(453),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(8),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(374),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(587),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(387),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(286),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(284),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(325),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(210),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [118] = {.count = 1, .reusable = true}, SHIFT(262),
  [120] = {.count = 1, .reusable = true}, SHIFT(392),
  [122] = {.count = 1, .reusable = true}, SHIFT(38),
  [124] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(262),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(392),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(38),
  [135] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(386),
  [142] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2),
  [144] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 2),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(316),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [153] = {.count = 1, .reusable = true}, SHIFT(386),
  [155] = {.count = 1, .reusable = false}, SHIFT(86),
  [157] = {.count = 1, .reusable = true}, SHIFT(269),
  [159] = {.count = 1, .reusable = true}, SHIFT(459),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [165] = {.count = 1, .reusable = false}, SHIFT(80),
  [167] = {.count = 1, .reusable = true}, SHIFT(263),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [173] = {.count = 1, .reusable = false}, SHIFT(94),
  [175] = {.count = 1, .reusable = true}, SHIFT(272),
  [177] = {.count = 1, .reusable = true}, SHIFT(458),
  [179] = {.count = 1, .reusable = true}, SHIFT(316),
  [181] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 2),
  [185] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(458),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2),
  [190] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 2),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(459),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [215] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [217] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(399),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [224] = {.count = 1, .reusable = true}, SHIFT(416),
  [226] = {.count = 1, .reusable = false}, SHIFT(128),
  [228] = {.count = 1, .reusable = true}, SHIFT(585),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(585),
  [233] = {.count = 1, .reusable = true}, SHIFT(399),
  [235] = {.count = 1, .reusable = false}, SHIFT(118),
  [237] = {.count = 1, .reusable = true}, SHIFT(586),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(586),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(307),
  [245] = {.count = 1, .reusable = true}, SHIFT(307),
  [247] = {.count = 1, .reusable = false}, SHIFT(134),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 2),
  [253] = {.count = 1, .reusable = true}, SHIFT(390),
  [255] = {.count = 1, .reusable = true}, SHIFT(391),
  [257] = {.count = 1, .reusable = false}, SHIFT(77),
  [259] = {.count = 1, .reusable = false}, SHIFT(391),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_add, 2),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 2),
  [267] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(390),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(391),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(77),
  [278] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(391),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [283] = {.count = 1, .reusable = true}, SHIFT(424),
  [285] = {.count = 1, .reusable = false}, SHIFT(73),
  [287] = {.count = 1, .reusable = false}, SHIFT(424),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_path, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [295] = {.count = 1, .reusable = false}, SHIFT(139),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [301] = {.count = 1, .reusable = false}, SHIFT(148),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [307] = {.count = 1, .reusable = false}, SHIFT(147),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [311] = {.count = 1, .reusable = false}, SHIFT(81),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [315] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(424),
  [320] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2),
  [322] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(424),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [331] = {.count = 1, .reusable = false}, SHIFT(156),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [337] = {.count = 1, .reusable = false}, SHIFT(167),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [345] = {.count = 1, .reusable = true}, SHIFT(276),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [353] = {.count = 1, .reusable = true}, SHIFT(417),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [359] = {.count = 1, .reusable = false}, SHIFT(172),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [365] = {.count = 1, .reusable = true}, SHIFT(271),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_path, 4),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_path, 4),
  [371] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [373] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [375] = {.count = 1, .reusable = false}, SHIFT(112),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_path, 6),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_path, 6),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_path, 5),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_path, 5),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [389] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(397),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [396] = {.count = 1, .reusable = true}, SHIFT(397),
  [398] = {.count = 1, .reusable = false}, SHIFT(215),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [404] = {.count = 1, .reusable = false}, SHIFT(219),
  [406] = {.count = 1, .reusable = true}, SHIFT(593),
  [408] = {.count = 1, .reusable = true}, SHIFT(289),
  [410] = {.count = 1, .reusable = true}, SHIFT(594),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [414] = {.count = 1, .reusable = true}, SHIFT(283),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(409),
  [419] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(409),
  [422] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(289),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(593),
  [428] = {.count = 1, .reusable = true}, SHIFT(409),
  [430] = {.count = 1, .reusable = false}, SHIFT(221),
  [432] = {.count = 1, .reusable = false}, SHIFT(409),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [436] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [438] = {.count = 1, .reusable = false}, SHIFT(212),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(594),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [445] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [447] = {.count = 1, .reusable = false}, SHIFT(181),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [451] = {.count = 1, .reusable = true}, SHIFT(253),
  [453] = {.count = 1, .reusable = true}, SHIFT(231),
  [455] = {.count = 1, .reusable = false}, SHIFT(454),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [459] = {.count = 1, .reusable = false}, SHIFT(533),
  [461] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [467] = {.count = 1, .reusable = true}, SHIFT(260),
  [469] = {.count = 1, .reusable = true}, SHIFT(234),
  [471] = {.count = 1, .reusable = false}, SHIFT(558),
  [473] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels, 2),
  [475] = {.count = 2, .reusable = false}, REDUCE(aux_sym__labels, 2), SHIFT_REPEAT(533),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [480] = {.count = 1, .reusable = true}, SHIFT(240),
  [482] = {.count = 1, .reusable = true}, SHIFT(229),
  [484] = {.count = 1, .reusable = false}, SHIFT(530),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [488] = {.count = 1, .reusable = true}, SHIFT(258),
  [490] = {.count = 1, .reusable = true}, SHIFT(233),
  [492] = {.count = 1, .reusable = false}, SHIFT(478),
  [494] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [496] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [498] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(166),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [503] = {.count = 1, .reusable = true}, SHIFT(235),
  [505] = {.count = 1, .reusable = false}, SHIFT(575),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 5),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3, .production_id = 5),
  [511] = {.count = 1, .reusable = false}, SHIFT(157),
  [513] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [515] = {.count = 2, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2), SHIFT_REPEAT(442),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [520] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 1),
  [524] = {.count = 1, .reusable = true}, SHIFT(513),
  [526] = {.count = 1, .reusable = false}, SHIFT(444),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 2),
  [530] = {.count = 1, .reusable = false}, SHIFT(442),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 2),
  [534] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 2),
  [536] = {.count = 1, .reusable = false}, SHIFT(166),
  [538] = {.count = 1, .reusable = true}, SHIFT(200),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [542] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [544] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(157),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [549] = {.count = 1, .reusable = true}, SHIFT(237),
  [551] = {.count = 1, .reusable = false}, SHIFT(490),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [555] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_user, 2),
  [563] = {.count = 1, .reusable = true}, SHIFT(432),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [567] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [569] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [571] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair_eq, 3),
  [577] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair_eq, 3),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [581] = {.count = 1, .reusable = true}, SHIFT(523),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [587] = {.count = 1, .reusable = true}, SHIFT(431),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 3),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 3),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [595] = {.count = 1, .reusable = false}, SHIFT(506),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [599] = {.count = 1, .reusable = false}, SHIFT(522),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [605] = {.count = 1, .reusable = false}, SHIFT(496),
  [607] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3),
  [611] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 2),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_user, 6),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 2),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_run, 2),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 2),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 2),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym_env, 2),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 2),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 2),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [661] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 2),
  [669] = {.count = 1, .reusable = true}, SHIFT(182),
  [671] = {.count = 1, .reusable = true}, SHIFT(557),
  [673] = {.count = 1, .reusable = true}, SHIFT(551),
  [675] = {.count = 1, .reusable = true}, SHIFT(545),
  [677] = {.count = 1, .reusable = true}, SHIFT(539),
  [679] = {.count = 1, .reusable = true}, SHIFT(534),
  [681] = {.count = 1, .reusable = true}, SHIFT(393),
  [683] = {.count = 1, .reusable = true}, SHIFT(395),
  [685] = {.count = 1, .reusable = false}, SHIFT(75),
  [687] = {.count = 1, .reusable = true}, SHIFT(565),
  [689] = {.count = 1, .reusable = true}, SHIFT(563),
  [691] = {.count = 1, .reusable = true}, SHIFT(351),
  [693] = {.count = 1, .reusable = true}, SHIFT(278),
  [695] = {.count = 1, .reusable = true}, SHIFT(285),
  [697] = {.count = 1, .reusable = true}, SHIFT(249),
  [699] = {.count = 1, .reusable = true}, SHIFT(197),
  [701] = {.count = 1, .reusable = true}, SHIFT(201),
  [703] = {.count = 1, .reusable = true}, SHIFT(254),
  [705] = {.count = 1, .reusable = true}, SHIFT(426),
  [707] = {.count = 1, .reusable = false}, SHIFT(154),
  [709] = {.count = 1, .reusable = true}, SHIFT(472),
  [711] = {.count = 1, .reusable = true}, SHIFT(471),
  [713] = {.count = 1, .reusable = true}, SHIFT(312),
  [715] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(420),
  [718] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(495),
  [721] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(494),
  [724] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(493),
  [727] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(302),
  [730] = {.count = 1, .reusable = true}, SHIFT(241),
  [732] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(420),
  [735] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(495),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(494),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(493),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(302),
  [747] = {.count = 1, .reusable = true}, SHIFT(246),
  [749] = {.count = 1, .reusable = true}, SHIFT(256),
  [751] = {.count = 1, .reusable = true}, SHIFT(248),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(557),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(551),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(545),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(539),
  [765] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [767] = {.count = 1, .reusable = true}, SHIFT(242),
  [769] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(420),
  [772] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(495),
  [775] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(494),
  [778] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(493),
  [781] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(302),
  [784] = {.count = 1, .reusable = true}, SHIFT(419),
  [786] = {.count = 1, .reusable = false}, SHIFT(132),
  [788] = {.count = 1, .reusable = true}, SHIFT(481),
  [790] = {.count = 1, .reusable = true}, SHIFT(497),
  [792] = {.count = 1, .reusable = true}, SHIFT(308),
  [794] = {.count = 1, .reusable = true}, SHIFT(423),
  [796] = {.count = 1, .reusable = false}, SHIFT(142),
  [798] = {.count = 1, .reusable = true}, SHIFT(474),
  [800] = {.count = 1, .reusable = true}, SHIFT(473),
  [802] = {.count = 1, .reusable = true}, SHIFT(346),
  [804] = {.count = 1, .reusable = true}, SHIFT(421),
  [806] = {.count = 1, .reusable = false}, SHIFT(180),
  [808] = {.count = 1, .reusable = true}, SHIFT(577),
  [810] = {.count = 1, .reusable = true}, SHIFT(571),
  [812] = {.count = 1, .reusable = true}, SHIFT(352),
  [814] = {.count = 1, .reusable = true}, SHIFT(410),
  [816] = {.count = 1, .reusable = false}, SHIFT(517),
  [818] = {.count = 1, .reusable = true}, SHIFT(516),
  [820] = {.count = 1, .reusable = true}, SHIFT(515),
  [822] = {.count = 1, .reusable = true}, SHIFT(329),
  [824] = {.count = 1, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2),
  [826] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(285),
  [829] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(249),
  [832] = {.count = 1, .reusable = false}, REDUCE(aux_sym_copy_repeat1, 2),
  [834] = {.count = 1, .reusable = true}, SHIFT(324),
  [836] = {.count = 1, .reusable = true}, SHIFT(403),
  [838] = {.count = 1, .reusable = true}, SHIFT(350),
  [840] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [842] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [846] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [850] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [854] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [858] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [862] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [866] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [870] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [874] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [878] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [882] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [886] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [888] = {.count = 1, .reusable = true}, SHIFT(311),
  [890] = {.count = 1, .reusable = true}, REDUCE(sym__from_layer, 3),
  [892] = {.count = 1, .reusable = false}, REDUCE(sym__from_layer, 3),
  [894] = {.count = 1, .reusable = true}, SHIFT(207),
  [896] = {.count = 1, .reusable = true}, REDUCE(sym__chown, 3),
  [898] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 3),
  [900] = {.count = 1, .reusable = true}, SHIFT(217),
  [902] = {.count = 1, .reusable = true}, SHIFT(407),
  [904] = {.count = 1, .reusable = true}, SHIFT(436),
  [906] = {.count = 1, .reusable = true}, SHIFT(437),
  [908] = {.count = 1, .reusable = true}, SHIFT(360),
  [910] = {.count = 1, .reusable = true}, SHIFT(405),
  [912] = {.count = 1, .reusable = true}, SHIFT(158),
  [914] = {.count = 1, .reusable = true}, SHIFT(170),
  [916] = {.count = 1, .reusable = true}, SHIFT(46),
  [918] = {.count = 1, .reusable = true}, SHIFT(465),
  [920] = {.count = 1, .reusable = true}, SHIFT(464),
  [922] = {.count = 1, .reusable = true}, SHIFT(265),
  [924] = {.count = 1, .reusable = true}, SHIFT(317),
  [926] = {.count = 1, .reusable = true}, SHIFT(400),
  [928] = {.count = 1, .reusable = false}, SHIFT(461),
  [930] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 2),
  [932] = {.count = 1, .reusable = true}, SHIFT(88),
  [934] = {.count = 1, .reusable = true}, SHIFT(81),
  [936] = {.count = 1, .reusable = true}, SHIFT(415),
  [938] = {.count = 1, .reusable = false}, SHIFT(466),
  [940] = {.count = 1, .reusable = false}, SHIFT(415),
  [942] = {.count = 1, .reusable = false}, SHIFT(447),
  [944] = {.count = 1, .reusable = true}, SHIFT(163),
  [946] = {.count = 1, .reusable = true}, SHIFT(445),
  [948] = {.count = 1, .reusable = true}, SHIFT(398),
  [950] = {.count = 1, .reusable = false}, SHIFT(552),
  [952] = {.count = 1, .reusable = true}, SHIFT(267),
  [954] = {.count = 1, .reusable = true}, SHIFT(589),
  [956] = {.count = 1, .reusable = true}, SHIFT(590),
  [958] = {.count = 1, .reusable = true}, SHIFT(306),
  [960] = {.count = 1, .reusable = true}, SHIFT(183),
  [962] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [964] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(398),
  [967] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(589),
  [970] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(590),
  [973] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(306),
  [976] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [978] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2),
  [980] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(415),
  [983] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2),
  [985] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(415),
  [988] = {.count = 1, .reusable = false}, SHIFT(573),
  [990] = {.count = 1, .reusable = true}, SHIFT(581),
  [992] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 4),
  [994] = {.count = 1, .reusable = true}, SHIFT(582),
  [996] = {.count = 1, .reusable = true}, SHIFT(310),
  [998] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [1000] = {.count = 1, .reusable = true}, SHIFT(320),
  [1002] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [1004] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [1006] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [1008] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(320),
  [1011] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(310),
  [1014] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(582),
  [1017] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(581),
  [1020] = {.count = 1, .reusable = true}, SHIFT(389),
  [1022] = {.count = 1, .reusable = true}, SHIFT(404),
  [1024] = {.count = 1, .reusable = false}, SHIFT(213),
  [1026] = {.count = 1, .reusable = false}, SHIFT(404),
  [1028] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [1030] = {.count = 1, .reusable = false}, SHIFT(529),
  [1032] = {.count = 1, .reusable = true}, SHIFT(273),
  [1034] = {.count = 1, .reusable = true}, SHIFT(115),
  [1036] = {.count = 1, .reusable = true}, SHIFT(362),
  [1038] = {.count = 1, .reusable = true}, SHIFT(49),
  [1040] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [1042] = {.count = 1, .reusable = false}, SHIFT(455),
  [1044] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 3),
  [1046] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(400),
  [1049] = {.count = 1, .reusable = false}, SHIFT(595),
  [1051] = {.count = 1, .reusable = true}, SHIFT(264),
  [1053] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [1055] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [1057] = {.count = 1, .reusable = true}, SHIFT(402),
  [1059] = {.count = 1, .reusable = true}, SHIFT(84),
  [1061] = {.count = 1, .reusable = false}, SHIFT(519),
  [1063] = {.count = 1, .reusable = true}, SHIFT(221),
  [1065] = {.count = 1, .reusable = false}, SHIFT(538),
  [1067] = {.count = 1, .reusable = true}, SHIFT(211),
  [1069] = {.count = 1, .reusable = false}, SHIFT(541),
  [1071] = {.count = 1, .reusable = true}, SHIFT(26),
  [1073] = {.count = 1, .reusable = true}, SHIFT(130),
  [1075] = {.count = 1, .reusable = true}, SHIFT(370),
  [1077] = {.count = 1, .reusable = true}, SHIFT(509),
  [1079] = {.count = 1, .reusable = true}, SHIFT(368),
  [1081] = {.count = 1, .reusable = true}, SHIFT(365),
  [1083] = {.count = 1, .reusable = true}, SHIFT(429),
  [1085] = {.count = 1, .reusable = true}, SHIFT(428),
  [1087] = {.count = 1, .reusable = true}, SHIFT(188),
  [1089] = {.count = 1, .reusable = true}, SHIFT(143),
  [1091] = {.count = 1, .reusable = true}, SHIFT(195),
  [1093] = {.count = 1, .reusable = true}, SHIFT(199),
  [1095] = {.count = 1, .reusable = true}, SHIFT(599),
  [1097] = {.count = 1, .reusable = true}, SHIFT(266),
  [1099] = {.count = 1, .reusable = true}, SHIFT(533),
  [1101] = {.count = 1, .reusable = true}, SHIFT(584),
  [1103] = {.count = 1, .reusable = true}, SHIFT(24),
  [1105] = {.count = 1, .reusable = true}, SHIFT(190),
  [1107] = {.count = 1, .reusable = true}, SHIFT(528),
  [1109] = {.count = 1, .reusable = true}, SHIFT(592),
  [1111] = {.count = 1, .reusable = true}, SHIFT(372),
  [1113] = {.count = 1, .reusable = true}, SHIFT(388),
  [1115] = {.count = 1, .reusable = false}, SHIFT(531),
  [1117] = {.count = 1, .reusable = false}, SHIFT(388),
  [1119] = {.count = 1, .reusable = true}, SHIFT(406),
  [1121] = {.count = 1, .reusable = false}, SHIFT(525),
  [1123] = {.count = 1, .reusable = false}, SHIFT(406),
  [1125] = {.count = 1, .reusable = true}, SHIFT(524),
  [1127] = {.count = 1, .reusable = true}, SHIFT(89),
  [1129] = {.count = 1, .reusable = true}, SHIFT(579),
  [1131] = {.count = 1, .reusable = true}, SHIFT(60),
  [1133] = {.count = 1, .reusable = true}, SHIFT(384),
  [1135] = {.count = 1, .reusable = true}, SHIFT(268),
  [1137] = {.count = 1, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2),
  [1139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2), SHIFT_REPEAT(394),
  [1142] = {.count = 1, .reusable = true}, REDUCE(aux_sym_label_value_repeat2, 2),
  [1144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_label_value_repeat2, 2), SHIFT_REPEAT(396),
  [1147] = {.count = 1, .reusable = true}, SHIFT(602),
  [1149] = {.count = 1, .reusable = true}, SHIFT(124),
  [1151] = {.count = 1, .reusable = true}, SHIFT(601),
  [1153] = {.count = 1, .reusable = true}, SHIFT(363),
  [1155] = {.count = 1, .reusable = true}, SHIFT(600),
  [1157] = {.count = 1, .reusable = true}, SHIFT(48),
  [1159] = {.count = 1, .reusable = true}, SHIFT(597),
  [1161] = {.count = 1, .reusable = true}, SHIFT(357),
  [1163] = {.count = 1, .reusable = true}, SHIFT(598),
  [1165] = {.count = 1, .reusable = true}, SHIFT(366),
  [1167] = {.count = 1, .reusable = true}, SHIFT(401),
  [1169] = {.count = 1, .reusable = true}, SHIFT(383),
  [1171] = {.count = 1, .reusable = true}, SHIFT(588),
  [1173] = {.count = 1, .reusable = true}, SHIFT(125),
  [1175] = {.count = 1, .reusable = true}, SHIFT(596),
  [1177] = {.count = 1, .reusable = true}, SHIFT(508),
  [1179] = {.count = 1, .reusable = true}, SHIFT(165),
  [1181] = {.count = 1, .reusable = true}, SHIFT(396),
  [1183] = {.count = 1, .reusable = true}, SHIFT(394),
  [1185] = {.count = 1, .reusable = true}, SHIFT(418),
  [1187] = {.count = 1, .reusable = true}, SHIFT(93),
  [1189] = {.count = 1, .reusable = true}, SHIFT(411),
  [1191] = {.count = 1, .reusable = true}, SHIFT(326),
  [1193] = {.count = 1, .reusable = true}, SHIFT(318),
  [1195] = {.count = 1, .reusable = true}, SHIFT(204),
  [1197] = {.count = 1, .reusable = true}, SHIFT(206),
  [1199] = {.count = 1, .reusable = true}, SHIFT(216),
  [1201] = {.count = 1, .reusable = true}, SHIFT(441),
  [1203] = {.count = 1, .reusable = true}, SHIFT(279),
  [1205] = {.count = 1, .reusable = true}, SHIFT(299),
  [1207] = {.count = 1, .reusable = true}, SHIFT(443),
  [1209] = {.count = 1, .reusable = true}, SHIFT(341),
  [1211] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(111),
  [1214] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1216] = {.count = 1, .reusable = true}, SHIFT(484),
  [1218] = {.count = 1, .reusable = true}, SHIFT(485),
  [1220] = {.count = 1, .reusable = true}, SHIFT(483),
  [1222] = {.count = 1, .reusable = true}, SHIFT(157),
  [1224] = {.count = 1, .reusable = true}, SHIFT(412),
  [1226] = {.count = 1, .reusable = true}, SHIFT(450),
  [1228] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 1),
  [1230] = {.count = 1, .reusable = true}, SHIFT(413),
  [1232] = {.count = 1, .reusable = true}, SHIFT(451),
  [1234] = {.count = 1, .reusable = true}, SHIFT(470),
  [1236] = {.count = 1, .reusable = true}, SHIFT(469),
  [1238] = {.count = 1, .reusable = true}, SHIFT(166),
  [1240] = {.count = 1, .reusable = true}, SHIFT(467),
  [1242] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 4),
  [1244] = {.count = 1, .reusable = true}, SHIFT(257),
  [1246] = {.count = 1, .reusable = true}, SHIFT(259),
  [1248] = {.count = 1, .reusable = true}, SHIFT(537),
  [1250] = {.count = 1, .reusable = true}, SHIFT(536),
  [1252] = {.count = 1, .reusable = true}, SHIFT(30),
  [1254] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 3),
  [1256] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 3),
  [1258] = {.count = 1, .reusable = true}, SHIFT(87),
  [1260] = {.count = 1, .reusable = true}, SHIFT(527),
  [1262] = {.count = 1, .reusable = true}, SHIFT(520),
  [1264] = {.count = 1, .reusable = true}, SHIFT(245),
  [1266] = {.count = 1, .reusable = true}, SHIFT(511),
  [1268] = {.count = 1, .reusable = true}, SHIFT(505),
  [1270] = {.count = 1, .reusable = true}, SHIFT(499),
  [1272] = {.count = 1, .reusable = true}, SHIFT(491),
  [1274] = {.count = 1, .reusable = true}, SHIFT(297),
  [1276] = {.count = 1, .reusable = true}, SHIFT(296),
  [1278] = {.count = 1, .reusable = true}, SHIFT(295),
  [1280] = {.count = 1, .reusable = true}, SHIFT(457),
  [1282] = {.count = 1, .reusable = true}, SHIFT(36),
  [1284] = {.count = 1, .reusable = true}, SHIFT(33),
  [1286] = {.count = 1, .reusable = true}, SHIFT(460),
  [1288] = {.count = 1, .reusable = true}, SHIFT(448),
  [1290] = {.count = 1, .reusable = true}, SHIFT(333),
  [1292] = {.count = 1, .reusable = true}, SHIFT(334),
  [1294] = {.count = 1, .reusable = true}, SHIFT(335),
  [1296] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 2),
  [1298] = {.count = 1, .reusable = true}, SHIFT(569),
  [1300] = {.count = 1, .reusable = true}, SHIFT(55),
  [1302] = {.count = 1, .reusable = true}, SHIFT(252),
  [1304] = {.count = 1, .reusable = true}, SHIFT(476),
  [1306] = {.count = 1, .reusable = true}, SHIFT(477),
  [1308] = {.count = 1, .reusable = true}, SHIFT(274),
  [1310] = {.count = 1, .reusable = true}, SHIFT(456),
  [1312] = {.count = 1, .reusable = true}, SHIFT(480),
  [1314] = {.count = 1, .reusable = true}, SHIFT(162),
  [1316] = {.count = 1, .reusable = true}, SHIFT(66),
  [1318] = {.count = 1, .reusable = true}, SHIFT(16),
  [1320] = {.count = 1, .reusable = true}, SHIFT(15),
  [1322] = {.count = 1, .reusable = true}, SHIFT(12),
  [1324] = {.count = 1, .reusable = true}, SHIFT(65),
  [1326] = {.count = 1, .reusable = true}, SHIFT(244),
  [1328] = {.count = 1, .reusable = true}, SHIFT(70),
  [1330] = {.count = 1, .reusable = true}, SHIFT(492),
  [1332] = {.count = 1, .reusable = true}, SHIFT(122),
  [1334] = {.count = 1, .reusable = true}, SHIFT(72),
  [1336] = {.count = 1, .reusable = true}, SHIFT(91),
  [1338] = {.count = 1, .reusable = true}, SHIFT(161),
  [1340] = {.count = 1, .reusable = true}, SHIFT(280),
  [1342] = {.count = 1, .reusable = true}, SHIFT(487),
  [1344] = {.count = 1, .reusable = true}, SHIFT(488),
  [1346] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 1),
  [1348] = {.count = 1, .reusable = true}, SHIFT(185),
  [1350] = {.count = 1, .reusable = true}, SHIFT(83),
  [1352] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1354] = {.count = 1, .reusable = true}, SHIFT(282),
  [1356] = {.count = 1, .reusable = true}, SHIFT(504),
  [1358] = {.count = 1, .reusable = true}, SHIFT(184),
  [1360] = {.count = 1, .reusable = true}, SHIFT(291),
  [1362] = {.count = 1, .reusable = true}, SHIFT(73),
  [1364] = {.count = 1, .reusable = true}, SHIFT(247),
  [1366] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1368] = {.count = 1, .reusable = true}, SHIFT(194),
  [1370] = {.count = 1, .reusable = true}, SHIFT(567),
  [1372] = {.count = 1, .reusable = true}, SHIFT(181),
  [1374] = {.count = 1, .reusable = true}, SHIFT(250),
  [1376] = {.count = 1, .reusable = true}, SHIFT(293),
  [1378] = {.count = 1, .reusable = true}, SHIFT(298),
  [1380] = {.count = 1, .reusable = true}, SHIFT(111),
  [1382] = {.count = 1, .reusable = true}, SHIFT(27),
  [1384] = {.count = 1, .reusable = true}, SHIFT(23),
  [1386] = {.count = 1, .reusable = true}, SHIFT(439),
  [1388] = {.count = 1, .reusable = true}, SHIFT(64),
  [1390] = {.count = 1, .reusable = true}, SHIFT(202),
  [1392] = {.count = 1, .reusable = true}, SHIFT(373),
  [1394] = {.count = 1, .reusable = true}, SHIFT(359),
  [1396] = {.count = 1, .reusable = true}, SHIFT(371),
  [1398] = {.count = 1, .reusable = true}, SHIFT(427),
  [1400] = {.count = 1, .reusable = true}, SHIFT(22),
  [1402] = {.count = 1, .reusable = true}, SHIFT(21),
  [1404] = {.count = 1, .reusable = true}, SHIFT(57),
  [1406] = {.count = 1, .reusable = true}, SHIFT(56),
  [1408] = {.count = 1, .reusable = true}, SHIFT(43),
  [1410] = {.count = 1, .reusable = true}, SHIFT(430),
  [1412] = {.count = 1, .reusable = true}, SHIFT(133),
  [1414] = {.count = 1, .reusable = true}, SHIFT(380),
  [1416] = {.count = 1, .reusable = true}, SHIFT(375),
  [1418] = {.count = 1, .reusable = true}, SHIFT(358),
  [1420] = {.count = 1, .reusable = true}, SHIFT(435),
  [1422] = {.count = 1, .reusable = true}, SHIFT(532),
  [1424] = {.count = 1, .reusable = true}, SHIFT(382),
  [1426] = {.count = 1, .reusable = true}, SHIFT(117),
  [1428] = {.count = 1, .reusable = true}, SHIFT(116),
  [1430] = {.count = 1, .reusable = true}, SHIFT(121),
  [1432] = {.count = 1, .reusable = true}, SHIFT(501),
  [1434] = {.count = 1, .reusable = true}, SHIFT(510),
  [1436] = {.count = 1, .reusable = true}, SHIFT(502),
  [1438] = {.count = 1, .reusable = true}, SHIFT(367),
  [1440] = {.count = 1, .reusable = true}, SHIFT(243),
  [1442] = {.count = 1, .reusable = true}, SHIFT(364),
  [1444] = {.count = 1, .reusable = true}, SHIFT(251),
  [1446] = {.count = 1, .reusable = true}, SHIFT(270),
  [1448] = {.count = 1, .reusable = true}, SHIFT(583),
  [1450] = {.count = 1, .reusable = true}, SHIFT(50),
  [1452] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 5),
  [1454] = {.count = 1, .reusable = true}, SHIFT(361),
  [1456] = {.count = 1, .reusable = true}, SHIFT(526),
  [1458] = {.count = 1, .reusable = true}, SHIFT(119),
  [1460] = {.count = 1, .reusable = true}, SHIFT(591),
  [1462] = {.count = 1, .reusable = true}, SHIFT(99),
  [1464] = {.count = 1, .reusable = true}, SHIFT(287),
  [1466] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1468] = {.count = 1, .reusable = true}, SHIFT(542),
  [1470] = {.count = 1, .reusable = true}, SHIFT(543),
  [1472] = {.count = 1, .reusable = true}, SHIFT(100),
  [1474] = {.count = 1, .reusable = true}, SHIFT(348),
  [1476] = {.count = 1, .reusable = true}, SHIFT(548),
  [1478] = {.count = 1, .reusable = true}, SHIFT(549),
  [1480] = {.count = 1, .reusable = true}, SHIFT(189),
  [1482] = {.count = 1, .reusable = true}, SHIFT(349),
  [1484] = {.count = 1, .reusable = true}, SHIFT(554),
  [1486] = {.count = 1, .reusable = true}, SHIFT(555),
  [1488] = {.count = 1, .reusable = true}, SHIFT(98),
  [1490] = {.count = 1, .reusable = true}, SHIFT(353),
  [1492] = {.count = 1, .reusable = true}, SHIFT(560),
  [1494] = {.count = 1, .reusable = true}, SHIFT(561),
  [1496] = {.count = 1, .reusable = true}, SHIFT(275),
  [1498] = {.count = 1, .reusable = true}, SHIFT(354),
  [1500] = {.count = 1, .reusable = true}, SHIFT(355),
  [1502] = {.count = 1, .reusable = true}, SHIFT(356),
  [1504] = {.count = 1, .reusable = true}, SHIFT(288),
  [1506] = {.count = 1, .reusable = true}, SHIFT(331),
  [1508] = {.count = 1, .reusable = true}, SHIFT(330),
  [1510] = {.count = 1, .reusable = true}, SHIFT(328),
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
