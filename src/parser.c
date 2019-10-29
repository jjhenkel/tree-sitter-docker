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
#define STATE_COUNT 617
#define SYMBOL_COUNT 200
#define ALIAS_COUNT 0
#define TOKEN_COUNT 105
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
  aux_sym_arg_default_token1 = 29,
  anon_sym_SQUOTE = 30,
  aux_sym_arg_default_token2 = 31,
  aux_sym_arg_default_token3 = 32,
  anon_sym_DASH_DASHchown_EQ = 33,
  aux_sym__from_layer_token1 = 34,
  aux_sym_from_layer_token1 = 35,
  aux_sym_from_layer_token2 = 36,
  aux_sym_from_layer_token3 = 37,
  aux_sym_from_layer_token4 = 38,
  aux_sym_from_layer_token5 = 39,
  aux_sym_from_layer_token6 = 40,
  aux_sym_from_layer_token7 = 41,
  aux_sym_from_layer_token8 = 42,
  aux_sym_from_layer_token9 = 43,
  aux_sym_from_layer_token10 = 44,
  aux_sym_from_layer_token11 = 45,
  aux_sym_from_layer_token12 = 46,
  aux_sym_from_layer_token13 = 47,
  aux_sym_from_layer_token14 = 48,
  aux_sym_from_layer_token15 = 49,
  aux_sym_from_layer_token16 = 50,
  anon_sym_EQ2 = 51,
  aux_sym_env_key_token1 = 52,
  aux_sym_env_value_token1 = 53,
  anon_sym_DASH = 54,
  aux_sym__port_part_token1 = 55,
  anon_sym_SLASH = 56,
  aux_sym_port_protocol_token1 = 57,
  aux_sym_port_protocol_token2 = 58,
  aux_sym_platform_token1 = 59,
  aux_sym__repository_start_token1 = 60,
  aux_sym__repository_start_token2 = 61,
  aux_sym__repository_start_token3 = 62,
  aux_sym__repository_start_token4 = 63,
  aux_sym__repository_start_token5 = 64,
  aux_sym__repository_start_token6 = 65,
  aux_sym__repository_start_token7 = 66,
  aux_sym__repository_start_token8 = 67,
  aux_sym__repository_start_token9 = 68,
  aux_sym__repository_start_token10 = 69,
  sym_hc_none = 70,
  anon_sym_DASH_DASHinterval = 71,
  aux_sym_hc_interval_token1 = 72,
  anon_sym_DASH_DASHtimeout = 73,
  anon_sym_DASH_DASHstart_DASHperiod = 74,
  anon_sym_DASH_DASHretries = 75,
  aux_sym__hc_command_token1 = 76,
  sym_signal_num = 77,
  aux_sym_signal_name_token1 = 78,
  aux_sym_signal_name_token2 = 79,
  aux_sym_user_name_token1 = 80,
  aux_sym_user_id_token1 = 81,
  aux_sym_path_token1 = 82,
  aux_sym_path_token2 = 83,
  aux_sym_path_token3 = 84,
  aux_sym_path_token4 = 85,
  aux_sym__anything_token1 = 86,
  anon_sym_LBRACE = 87,
  anon_sym_RBRACE = 88,
  anon_sym_COLON_DASH = 89,
  aux_sym_variable_default_value_token1 = 90,
  anon_sym_COLON_PLUS = 91,
  sym__docker_variable = 92,
  sym_template_expr_curly_braces = 93,
  sym_template_expr_percent_signs = 94,
  aux_sym_template_expr_less_than_equals_token1 = 95,
  aux_sym_template_expr_less_than_equals_token2 = 96,
  aux_sym_template_expr_less_than_equals_token3 = 97,
  sym__space = 98,
  sym__blank_line = 99,
  sym__space_no_newline = 100,
  sym_comment = 101,
  sym_json_array = 102,
  sym_escape = 103,
  sym_line_continuation = 104,
  sym_dockerfile = 105,
  sym__directive = 106,
  sym_add = 107,
  sym_arg = 108,
  sym_cmd = 109,
  sym_copy = 110,
  sym_entrypoint = 111,
  sym_env = 112,
  sym_expose = 113,
  sym_from = 114,
  sym_healthcheck = 115,
  sym_label = 116,
  sym_maintainer = 117,
  sym_onbuild = 118,
  sym_run = 119,
  sym_shell = 120,
  sym_stopsignal = 121,
  sym_user = 122,
  sym_volume = 123,
  sym_workdir = 124,
  sym_arg_default = 125,
  sym__chown = 126,
  sym__from_layer = 127,
  sym_from_layer = 128,
  sym_chown = 129,
  sym__env_pairs = 130,
  sym_env_pair_eq = 131,
  sym_env_pair = 132,
  sym_env_key = 133,
  sym_env_value = 134,
  sym__port_spec = 135,
  sym_mapped_port = 136,
  sym_mapped_no_lhs = 137,
  sym__port = 138,
  sym_port = 139,
  sym_port_range = 140,
  sym__port_part = 141,
  sym_port_protocol = 142,
  sym_platform = 143,
  sym_repository = 144,
  sym__repository_start = 145,
  sym__repository_continued = 146,
  sym_image = 147,
  sym_tag = 148,
  sym_digest = 149,
  sym_as_name = 150,
  sym__hc_interval = 151,
  sym_hc_interval = 152,
  sym__hc_timeout = 153,
  sym_hc_timeout = 154,
  sym__hc_start_period = 155,
  sym_hc_start_period = 156,
  sym__hc_retries = 157,
  sym_hc_retries = 158,
  sym__hc_options = 159,
  sym__hc_command = 160,
  sym_hc_command = 161,
  sym__labels = 162,
  sym_label_pair_eq = 163,
  sym_label_pair = 164,
  sym_label_key = 165,
  sym_label_value = 166,
  sym_signal_name = 167,
  sym_user_name = 168,
  sym_user_group = 169,
  sym_user_id = 170,
  sym_user_group_id = 171,
  sym_path = 172,
  aux_sym__paths = 173,
  aux_sym__anything = 174,
  sym_docker_variable = 175,
  sym_variable_default_value = 176,
  sym_variable_this_or_null = 177,
  sym_template_expr_less_than_equals = 178,
  sym__anything_or_json_array = 179,
  aux_sym_dockerfile_repeat1 = 180,
  aux_sym_copy_repeat1 = 181,
  aux_sym_expose_repeat1 = 182,
  aux_sym_healthcheck_repeat1 = 183,
  aux_sym_arg_default_repeat1 = 184,
  aux_sym_arg_default_repeat2 = 185,
  aux_sym_from_layer_repeat1 = 186,
  aux_sym_from_layer_repeat2 = 187,
  aux_sym_from_layer_repeat3 = 188,
  aux_sym_from_layer_repeat4 = 189,
  aux_sym__env_pairs_repeat1 = 190,
  aux_sym_repository_repeat1 = 191,
  aux_sym__repository_start_repeat1 = 192,
  aux_sym__repository_start_repeat2 = 193,
  aux_sym__repository_start_repeat3 = 194,
  aux_sym__repository_start_repeat4 = 195,
  aux_sym__labels_repeat1 = 196,
  aux_sym_path_repeat1 = 197,
  aux_sym_path_repeat2 = 198,
  aux_sym_template_expr_less_than_equals_repeat1 = 199,
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
  [aux_sym_arg_default_token1] = "arg_default_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_arg_default_token2] = "arg_default_token2",
  [aux_sym_arg_default_token3] = "arg_default_token3",
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
  [sym_arg_default] = "arg_default",
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
  [aux_sym_arg_default_repeat1] = "arg_default_repeat1",
  [aux_sym_arg_default_repeat2] = "arg_default_repeat2",
  [aux_sym_from_layer_repeat1] = "from_layer_repeat1",
  [aux_sym_from_layer_repeat2] = "from_layer_repeat2",
  [aux_sym_from_layer_repeat3] = "from_layer_repeat3",
  [aux_sym_from_layer_repeat4] = "from_layer_repeat4",
  [aux_sym__env_pairs_repeat1] = "_env_pairs_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym__repository_start_repeat1] = "_repository_start_repeat1",
  [aux_sym__repository_start_repeat2] = "_repository_start_repeat2",
  [aux_sym__repository_start_repeat3] = "_repository_start_repeat3",
  [aux_sym__repository_start_repeat4] = "_repository_start_repeat4",
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
  [aux_sym_arg_default_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_arg_default_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_default_token3] = {
    .visible = false,
    .named = false,
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
  [sym_arg_default] = {
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
  [aux_sym_arg_default_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_default_repeat2] = {
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
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '\'') ADVANCE(328);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '@') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(324);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(316);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '{') ADVANCE(1101);
      if (lookahead == '}') ADVANCE(1102);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(850);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      if (lookahead != 0) ADVANCE(1002);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(931);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(965);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(967);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(986);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(937);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(922);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(923);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(968);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(997);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(947);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(990);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(974);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(976);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(1002);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(931);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(965);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(967);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(986);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(937);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(922);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(923);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(968);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(997);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(947);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(990);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(974);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(976);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(851);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(1002);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '=') ADVANCE(271);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(211);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(155);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(136);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(215);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(196);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(198);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '@') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(211);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(155);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(136);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(215);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(196);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(198);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '@') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(211);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(155);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(136);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(215);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(196);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(198);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1019);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1022);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1023);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1027);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1020);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1017);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1018);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1024);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1029);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1021);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1028);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1025);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1026);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == '`') ADVANCE(67);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1011);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1113);
      if (lookahead != 0) ADVANCE(1016);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '@') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(584);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(605);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(556);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(542);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(587);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(616);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(566);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(609);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(593);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(595);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(418);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '@') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(584);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(605);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(556);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(542);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(587);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(616);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(566);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(609);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(593);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(595);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(418);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(584);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(605);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(556);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(542);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(587);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(616);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(566);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(609);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(593);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(595);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(419);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '@') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(684);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(705);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(656);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(641);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(642);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(687);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(666);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(709);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(693);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(695);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(420);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '@') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(684);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(705);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(656);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(641);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(642);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(687);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(666);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(709);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(693);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(695);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(420);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(684);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(705);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(656);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(641);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(642);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(687);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(666);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(709);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(693);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(695);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(421);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(740);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '@') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(750);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(784);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(805);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(756);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(741);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(742);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(816);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(766);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(809);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(793);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(795);
      if (lookahead == '{') ADVANCE(348);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(422);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(740);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '@') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(750);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(784);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(805);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(756);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(741);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(742);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(816);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(766);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(809);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(793);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(795);
      if (lookahead == '{') ADVANCE(348);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(422);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(740);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(750);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(784);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(805);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(756);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(741);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(742);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(816);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(766);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(809);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(793);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(795);
      if (lookahead == '{') ADVANCE(348);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(423);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '@') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(485);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(506);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(457);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(443);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(517);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(467);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(510);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(494);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(496);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '@') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(485);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(506);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(457);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(443);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(517);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(467);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(510);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(494);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(496);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(485);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(506);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(457);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(443);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(517);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(467);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(510);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(494);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(496);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(417);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '\n') ADVANCE(1116);
      if (lookahead == '#') ADVANCE(1147);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(211);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(155);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(136);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(215);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(196);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(198);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1114);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(263);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(81);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '=') ADVANCE(271);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(155);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(196);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(198);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '}') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(1115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(228);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(229);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(230);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(1116);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(331);
      if (lookahead == '\'') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '#') ADVANCE(1109);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '?') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1109);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '#') ADVANCE(342);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(343);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(344);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(340);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(341);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '{') ADVANCE(348);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(345);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(346);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(338);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '#') ADVANCE(1108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1108);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '#') ADVANCE(1107);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1107);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1112);
      if (lookahead == '#') ADVANCE(1104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1104);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(384);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '-') ADVANCE(854);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0) ADVANCE(1002);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '[') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1002);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(850);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(1014);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(1037);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead == '\r' ||
          lookahead == '`') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1014);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(1037);
      if (lookahead == '\\') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead == '\r' ||
          lookahead == '`') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1014);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == '%') ADVANCE(362);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '=') ADVANCE(374);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      if (lookahead == '}') ADVANCE(1102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(845);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == '[') ADVANCE(1032);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == '`') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0) ADVANCE(1016);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == '`') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0) ADVANCE(1016);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(847);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(1138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(838);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(621);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(740);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == '{') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(522);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '/') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(1031);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(1031);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '{') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(400);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '{') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '%') ADVANCE(360);
      if (lookahead == '<') ADVANCE(130);
      if (lookahead == '{') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(335);
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(1106);
      if (lookahead == '{') ADVANCE(1100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(1106);
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(413);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(413);
      END_STATE();
    case 73:
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == '+') ADVANCE(1105);
      if (lookahead == '-') ADVANCE(1103);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(333);
      END_STATE();
    case 81:
      if (lookahead == '>') ADVANCE(369);
      END_STATE();
    case 82:
      if (lookahead == '>') ADVANCE(369);
      if (lookahead != 0) ADVANCE(1111);
      END_STATE();
    case 83:
      if (lookahead == '>') ADVANCE(369);
      if (lookahead != 0) ADVANCE(1110);
      END_STATE();
    case 84:
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1031);
      END_STATE();
    case 85:
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(1031);
      END_STATE();
    case 86:
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(840);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(837);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(841);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(839);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 125:
      if (lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 126:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 127:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead == '=') ADVANCE(266);
      END_STATE();
    case 128:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1031);
      END_STATE();
    case 129:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1031);
      END_STATE();
    case 130:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(368);
      END_STATE();
    case 131:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(834);
      END_STATE();
    case 132:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(832);
      END_STATE();
    case 133:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(371);
      END_STATE();
    case 134:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(373);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 140:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 141:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 143:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 144:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 145:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 146:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(147);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      END_STATE();
    case 147:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 148:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(842);
      END_STATE();
    case 149:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 162:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(846);
      END_STATE();
    case 163:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 164:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 165:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 166:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(156);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 167:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 168:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 169:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 170:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 171:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 175:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(150);
      END_STATE();
    case 176:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(248);
      END_STATE();
    case 177:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 178:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 179:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 180:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 181:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(247);
      END_STATE();
    case 182:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 183:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 184:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 185:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 186:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 187:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 196:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 203:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 204:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(394);
      END_STATE();
    case 205:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(393);
      END_STATE();
    case 206:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 207:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 208:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(202);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 215:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 216:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      END_STATE();
    case 217:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      END_STATE();
    case 218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 219:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(234);
      END_STATE();
    case 220:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(245);
      END_STATE();
    case 221:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 222:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 223:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 224:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 225:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(236);
      END_STATE();
    case 226:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 227:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(388);
      END_STATE();
    case 228:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == ',') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(1149);
      END_STATE();
    case 229:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(24);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead == ',') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1149);
      END_STATE();
    case 231:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 232:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(273);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 238:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 241:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 242:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 243:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 244:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 245:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 246:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 247:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 248:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 249:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1014);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(1031);
      END_STATE();
    case 250:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 251:
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
    case 252:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(848);
      END_STATE();
    case 253:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 254:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(254);
      END_STATE();
    case 255:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(383);
      END_STATE();
    case 256:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 257:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(329);
      END_STATE();
    case 258:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(326);
      END_STATE();
    case 259:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 260:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1031);
      END_STATE();
    case 261:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 262:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1031);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_escape_directive);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_escape_directive);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_escape_directive);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(855);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_from_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
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
          lookahead == ' ') ADVANCE(296);
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
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '\\') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_arg_default_token2);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_arg_default_token2);
      if (lookahead == '\\') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_arg_default_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__from_layer_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '%') ADVANCE(364);
      if (lookahead == '<') ADVANCE(1134);
      if (lookahead == '{') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(336);
      if (lookahead == '%') ADVANCE(364);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '{') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_from_layer_token2);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_from_layer_token3);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(337);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(366);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(358);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(347);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(350);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(351);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(353);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(354);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(356);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(357);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      if (lookahead == '%') ADVANCE(359);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      if (lookahead == '%') ADVANCE(361);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      if (lookahead == '%') ADVANCE(363);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      if (lookahead == '%') ADVANCE(365);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      if (lookahead == '=') ADVANCE(367);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_from_layer_token14);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      if (lookahead == '=') ADVANCE(370);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      if (lookahead == '=') ADVANCE(372);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(375);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '"') ADVANCE(1124);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == '\\') ADVANCE(1146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1125);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(387);
      if (lookahead == '\\') ADVANCE(1142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(1121);
      if (lookahead == '\'') ADVANCE(1125);
      if (lookahead == '\\') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(1124);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == '\\') ADVANCE(1146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(1124);
      if (lookahead == '\\') ADVANCE(1140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(387);
      if (lookahead == '\\') ADVANCE(1142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(862);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '2') ADVANCE(397);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '5') ADVANCE(398);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '6') ADVANCE(399);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(1133);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(396);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(408);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == 'm') ADVANCE(401);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == 't') ADVANCE(404);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(414);
      if (lookahead == '%') ADVANCE(828);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '{') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(412);
      END_STATE();
    case 413:
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
          lookahead != '}') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(416);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(417);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(418);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(419);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(420);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(421);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(422);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(423);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(424);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(425);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(428);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(429);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(430);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(431);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(432);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(433);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(434);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(435);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(436);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(437);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(438);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(439);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(440);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(441);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(452);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(458);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(453);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(514);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
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
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(523);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(524);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(527);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(528);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(529);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(530);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(531);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(532);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(533);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(534);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(535);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(536);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(537);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(538);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(539);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(540);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(551);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(557);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(613);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(604);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
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
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(621);
      END_STATE();
    case 622:
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
          lookahead != '}') ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(623);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(624);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(627);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(628);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(629);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(630);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(631);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(632);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(633);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(634);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(635);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(636);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(637);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(638);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(639);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(640);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(651);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(657);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(713);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
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
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(704);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(721);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(722);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(723);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(725);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(726);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(727);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(728);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(729);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(730);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(731);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(732);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(733);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(734);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(735);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(736);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(737);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(738);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(739);
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
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(747);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(776);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(770);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(780);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(817);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(759);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(775);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(767);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(751);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(763);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(722);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(724);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(773);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(734);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(781);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(806);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(778);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(723);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(790);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(749);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(757);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(796);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(755);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(764);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(788);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(792);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(789);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(807);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(753);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(739);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(812);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(818);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(730);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(731);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(738);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(779);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(754);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(728);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(752);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(799);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(761);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(813);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(801);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(746);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(815);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(814);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(745);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(726);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(762);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(777);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(803);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(811);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(772);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(819);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(810);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(797);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(798);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(774);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(820);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(794);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(729);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(735);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(737);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(758);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(768);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(760);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(765);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(804);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(725);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(744);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(791);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(771);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(785);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(727);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(802);
      if (lookahead == '{') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(740);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(821);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(822);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(824);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(825);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '%') ADVANCE(827);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '%') ADVANCE(829);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '=') ADVANCE(831);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '=') ADVANCE(833);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(838);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretries);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym__hc_command_token1);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(843);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(844);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (lookahead == '+') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(847);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(848);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ':') ADVANCE(849);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(850);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(851);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '$') ADVANCE(1004);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1138);
      if (lookahead != 0) ADVANCE(852);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '-') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '-') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '/') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '=') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '=') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'a') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'a') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'a') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'c') ADVANCE(871);
      if (lookahead == 'f') ADVANCE(890);
      if (lookahead == 'i') ADVANCE(880);
      if (lookahead == 'p') ADVANCE(875);
      if (lookahead == 'r') ADVANCE(866);
      if (lookahead == 's') ADVANCE(900);
      if (lookahead == 't') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'c') ADVANCE(871);
      if (lookahead == 'f') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'd') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'e') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'e') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'e') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'e') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'e') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'f') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'h') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'i') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'i') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'i') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'l') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'l') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'm') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'm') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'm') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'n') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'o') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'o') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'o') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'o') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'o') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'p') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'r') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'r') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'r') ADVANCE(874);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'r') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 's') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'u') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'v') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'w') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(940);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(932);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(938);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(933);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(994);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(964);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(939);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(946);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(985);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(1002);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '"') ADVANCE(1138);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead != 0) ADVANCE(1005);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '#') ADVANCE(1005);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1008);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '#') ADVANCE(1005);
      if (lookahead == '$') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1008);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '$') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1008);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_path_token4);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1013);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1012);
      if (lookahead != 0) ADVANCE(1039);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1013);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1012);
      if (lookahead != 0) ADVANCE(1039);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1013);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1012);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1038);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1015);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1015);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1014);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1045);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead == 'a') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1048);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1041);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1052);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1081);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1048);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1083);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1099);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead == 'n') ADVANCE(1044);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1070);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead == 'o') ADVANCE(1088);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1079);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1074);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1040);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(66);
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
          lookahead == ' ') ADVANCE(1033);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1034);
      if (lookahead == '"') ADVANCE(1015);
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == ',') ADVANCE(1036);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1149);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1033);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1034);
      if (lookahead == '"') ADVANCE(1015);
      if (lookahead == ',') ADVANCE(1036);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1149);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1033);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1034);
      if (lookahead == '"') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == ',') ADVANCE(1036);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1149);
      if (lookahead == '`') ADVANCE(66);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1036);
      if (lookahead == '"') ADVANCE(1015);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1039);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1035);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1036);
      if (lookahead == '"') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '`') ADVANCE(66);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1037);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1038);
      if (lookahead == ',') ADVANCE(1036);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == ']') ADVANCE(1149);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(66);
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
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == ',') ADVANCE(1036);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == ']') ADVANCE(1149);
      if (lookahead == '`') ADVANCE(66);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1040);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1030);
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
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1039);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1069);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1039);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1068);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1039);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1061);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'b') ADVANCE(1039);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1095);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'b') ADVANCE(1039);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1054);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'c') ADVANCE(1039);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1065);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'c') ADVANCE(1039);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'd') ADVANCE(1039);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'd') ADVANCE(1039);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1062);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1046);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1071);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1087);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1039);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1068);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'g') ADVANCE(1039);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'g') ADVANCE(1039);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1078);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'h') ADVANCE(1039);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1047);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'h') ADVANCE(1039);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1051);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1039);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1056);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1039);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1076);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1039);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1075);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1039);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1087);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1039);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1067);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1039);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1077);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'k') ADVANCE(1039);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'k') ADVANCE(1039);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1049);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1039);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1048);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1039);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1039);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1093);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1039);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1096);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1039);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1068);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'm') ADVANCE(1039);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'm') ADVANCE(1039);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1050);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1094);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1092);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1042);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1039);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1072);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1039);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1091);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1039);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1084);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1039);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1064);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1039);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1097);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1039);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1090);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1039);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1080);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1039);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1082);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'r') ADVANCE(1039);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'r') ADVANCE(1039);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1066);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'r') ADVANCE(1039);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1098);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 's') ADVANCE(1039);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1059);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 's') ADVANCE(1039);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1050);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't') ADVANCE(1039);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't') ADVANCE(1039);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1057);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't') ADVANCE(1039);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1043);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'u') ADVANCE(1039);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1063);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'u') ADVANCE(1039);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1073);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'y') ADVANCE(1039);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'y') ADVANCE(1039);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1086);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
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
          lookahead != 'T' &&
          lookahead != 'V' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't' &&
          lookahead != 'v') ADVANCE(1039);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1089);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '`') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1031);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(349);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1104);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 1106:
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
          lookahead != '}') ADVANCE(1106);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1107);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1108);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1109);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1116);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__blank_line);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1115);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1117);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1115);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1118);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1119);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(1141);
      if (lookahead != 0) ADVANCE(1121);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == '\\') ADVANCE(1143);
      if (lookahead != 0) ADVANCE(1124);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '\'') ADVANCE(380);
      if (lookahead == '\\') ADVANCE(1145);
      if (lookahead != 0) ADVANCE(1125);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == 'a') ADVANCE(1130);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == 'c') ADVANCE(1127);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == 'e') ADVANCE(1148);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == 'p') ADVANCE(1129);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == 's') ADVANCE(1128);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(834);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(832);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(371);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(373);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1138);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1138);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1138);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1123);
      if (lookahead == ' ') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1138);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1138);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1122);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(387);
      if (lookahead == '\\') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1125);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1124);
      if (lookahead == '\'') ADVANCE(387);
      if (lookahead == '\\') ADVANCE(1144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1125);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(387);
      if (lookahead == '\\') ADVANCE(1143);
      if (lookahead != 0) ADVANCE(1124);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == '\\') ADVANCE(1145);
      if (lookahead != 0) ADVANCE(1125);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(382);
      if (lookahead == '\\') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1125);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1147);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == 'e') ADVANCE(1131);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1148);
      if (lookahead == '\n') ADVANCE(1120);
      if (lookahead == '=') ADVANCE(264);
      if (lookahead != 0) ADVANCE(1138);
      END_STATE();
    case 1149:
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
  [6] = {.lex_state = 3, .external_lex_state = 3},
  [7] = {.lex_state = 20, .external_lex_state = 3},
  [8] = {.lex_state = 3, .external_lex_state = 3},
  [9] = {.lex_state = 7, .external_lex_state = 3},
  [10] = {.lex_state = 10, .external_lex_state = 3},
  [11] = {.lex_state = 10, .external_lex_state = 3},
  [12] = {.lex_state = 7, .external_lex_state = 3},
  [13] = {.lex_state = 13, .external_lex_state = 3},
  [14] = {.lex_state = 13, .external_lex_state = 3},
  [15] = {.lex_state = 16, .external_lex_state = 3},
  [16] = {.lex_state = 16, .external_lex_state = 3},
  [17] = {.lex_state = 16, .external_lex_state = 3},
  [18] = {.lex_state = 13, .external_lex_state = 3},
  [19] = {.lex_state = 7, .external_lex_state = 3},
  [20] = {.lex_state = 10, .external_lex_state = 3},
  [21] = {.lex_state = 16, .external_lex_state = 3},
  [22] = {.lex_state = 16, .external_lex_state = 3},
  [23] = {.lex_state = 7, .external_lex_state = 3},
  [24] = {.lex_state = 13, .external_lex_state = 3},
  [25] = {.lex_state = 16, .external_lex_state = 3},
  [26] = {.lex_state = 16, .external_lex_state = 3},
  [27] = {.lex_state = 10, .external_lex_state = 3},
  [28] = {.lex_state = 17, .external_lex_state = 3},
  [29] = {.lex_state = 14, .external_lex_state = 3},
  [30] = {.lex_state = 17, .external_lex_state = 3},
  [31] = {.lex_state = 14, .external_lex_state = 3},
  [32] = {.lex_state = 14, .external_lex_state = 3},
  [33] = {.lex_state = 3, .external_lex_state = 3},
  [34] = {.lex_state = 8, .external_lex_state = 3},
  [35] = {.lex_state = 8, .external_lex_state = 3},
  [36] = {.lex_state = 17, .external_lex_state = 3},
  [37] = {.lex_state = 11, .external_lex_state = 3},
  [38] = {.lex_state = 11, .external_lex_state = 3},
  [39] = {.lex_state = 3, .external_lex_state = 3},
  [40] = {.lex_state = 11, .external_lex_state = 3},
  [41] = {.lex_state = 8, .external_lex_state = 3},
  [42] = {.lex_state = 2, .external_lex_state = 3},
  [43] = {.lex_state = 17, .external_lex_state = 3},
  [44] = {.lex_state = 16, .external_lex_state = 3},
  [45] = {.lex_state = 2, .external_lex_state = 3},
  [46] = {.lex_state = 1, .external_lex_state = 3},
  [47] = {.lex_state = 3, .external_lex_state = 3},
  [48] = {.lex_state = 2, .external_lex_state = 3},
  [49] = {.lex_state = 17, .external_lex_state = 3},
  [50] = {.lex_state = 13, .external_lex_state = 3},
  [51] = {.lex_state = 2, .external_lex_state = 3},
  [52] = {.lex_state = 1, .external_lex_state = 3},
  [53] = {.lex_state = 1, .external_lex_state = 3},
  [54] = {.lex_state = 8, .external_lex_state = 3},
  [55] = {.lex_state = 3, .external_lex_state = 3},
  [56] = {.lex_state = 16, .external_lex_state = 3},
  [57] = {.lex_state = 14, .external_lex_state = 3},
  [58] = {.lex_state = 2, .external_lex_state = 3},
  [59] = {.lex_state = 17, .external_lex_state = 3},
  [60] = {.lex_state = 7, .external_lex_state = 3},
  [61] = {.lex_state = 10, .external_lex_state = 3},
  [62] = {.lex_state = 3, .external_lex_state = 3},
  [63] = {.lex_state = 17, .external_lex_state = 3},
  [64] = {.lex_state = 10, .external_lex_state = 3},
  [65] = {.lex_state = 7, .external_lex_state = 3},
  [66] = {.lex_state = 13, .external_lex_state = 3},
  [67] = {.lex_state = 11, .external_lex_state = 3},
  [68] = {.lex_state = 1, .external_lex_state = 3},
  [69] = {.lex_state = 3, .external_lex_state = 3},
  [70] = {.lex_state = 13, .external_lex_state = 3},
  [71] = {.lex_state = 4, .external_lex_state = 3},
  [72] = {.lex_state = 7, .external_lex_state = 3},
  [73] = {.lex_state = 4, .external_lex_state = 3},
  [74] = {.lex_state = 1, .external_lex_state = 3},
  [75] = {.lex_state = 10, .external_lex_state = 3},
  [76] = {.lex_state = 1, .external_lex_state = 3},
  [77] = {.lex_state = 1, .external_lex_state = 3},
  [78] = {.lex_state = 3, .external_lex_state = 3},
  [79] = {.lex_state = 4, .external_lex_state = 3},
  [80] = {.lex_state = 3, .external_lex_state = 3},
  [81] = {.lex_state = 4, .external_lex_state = 3},
  [82] = {.lex_state = 1, .external_lex_state = 3},
  [83] = {.lex_state = 1, .external_lex_state = 3},
  [84] = {.lex_state = 1, .external_lex_state = 3},
  [85] = {.lex_state = 10, .external_lex_state = 3},
  [86] = {.lex_state = 7, .external_lex_state = 3},
  [87] = {.lex_state = 13, .external_lex_state = 3},
  [88] = {.lex_state = 16, .external_lex_state = 3},
  [89] = {.lex_state = 3, .external_lex_state = 3},
  [90] = {.lex_state = 3, .external_lex_state = 3},
  [91] = {.lex_state = 1, .external_lex_state = 3},
  [92] = {.lex_state = 1, .external_lex_state = 3},
  [93] = {.lex_state = 1, .external_lex_state = 3},
  [94] = {.lex_state = 16, .external_lex_state = 3},
  [95] = {.lex_state = 3, .external_lex_state = 3},
  [96] = {.lex_state = 18, .external_lex_state = 3},
  [97] = {.lex_state = 15, .external_lex_state = 3},
  [98] = {.lex_state = 9, .external_lex_state = 3},
  [99] = {.lex_state = 2, .external_lex_state = 3},
  [100] = {.lex_state = 15, .external_lex_state = 3},
  [101] = {.lex_state = 12, .external_lex_state = 3},
  [102] = {.lex_state = 12, .external_lex_state = 3},
  [103] = {.lex_state = 2, .external_lex_state = 3},
  [104] = {.lex_state = 9, .external_lex_state = 3},
  [105] = {.lex_state = 12, .external_lex_state = 3},
  [106] = {.lex_state = 9, .external_lex_state = 3},
  [107] = {.lex_state = 2, .external_lex_state = 3},
  [108] = {.lex_state = 15, .external_lex_state = 3},
  [109] = {.lex_state = 18, .external_lex_state = 3},
  [110] = {.lex_state = 18, .external_lex_state = 3},
  [111] = {.lex_state = 2, .external_lex_state = 3},
  [112] = {.lex_state = 3, .external_lex_state = 3},
  [113] = {.lex_state = 3, .external_lex_state = 3},
  [114] = {.lex_state = 5, .external_lex_state = 3},
  [115] = {.lex_state = 5, .external_lex_state = 3},
  [116] = {.lex_state = 12, .external_lex_state = 3},
  [117] = {.lex_state = 3, .external_lex_state = 3},
  [118] = {.lex_state = 2, .external_lex_state = 3},
  [119] = {.lex_state = 3, .external_lex_state = 3},
  [120] = {.lex_state = 5, .external_lex_state = 3},
  [121] = {.lex_state = 2, .external_lex_state = 3},
  [122] = {.lex_state = 5, .external_lex_state = 3},
  [123] = {.lex_state = 18, .external_lex_state = 3},
  [124] = {.lex_state = 18, .external_lex_state = 3},
  [125] = {.lex_state = 5, .external_lex_state = 3},
  [126] = {.lex_state = 2, .external_lex_state = 3},
  [127] = {.lex_state = 9, .external_lex_state = 3},
  [128] = {.lex_state = 15, .external_lex_state = 3},
  [129] = {.lex_state = 2, .external_lex_state = 3},
  [130] = {.lex_state = 5, .external_lex_state = 3},
  [131] = {.lex_state = 18, .external_lex_state = 3},
  [132] = {.lex_state = 18, .external_lex_state = 3},
  [133] = {.lex_state = 5, .external_lex_state = 3},
  [134] = {.lex_state = 5, .external_lex_state = 3},
  [135] = {.lex_state = 6, .external_lex_state = 3},
  [136] = {.lex_state = 4, .external_lex_state = 3},
  [137] = {.lex_state = 4, .external_lex_state = 3},
  [138] = {.lex_state = 4, .external_lex_state = 3},
  [139] = {.lex_state = 4, .external_lex_state = 3},
  [140] = {.lex_state = 4, .external_lex_state = 3},
  [141] = {.lex_state = 6, .external_lex_state = 3},
  [142] = {.lex_state = 4, .external_lex_state = 3},
  [143] = {.lex_state = 6, .external_lex_state = 3},
  [144] = {.lex_state = 4, .external_lex_state = 3},
  [145] = {.lex_state = 4, .external_lex_state = 3},
  [146] = {.lex_state = 6, .external_lex_state = 3},
  [147] = {.lex_state = 4, .external_lex_state = 3},
  [148] = {.lex_state = 4, .external_lex_state = 3},
  [149] = {.lex_state = 4, .external_lex_state = 3},
  [150] = {.lex_state = 4, .external_lex_state = 3},
  [151] = {.lex_state = 6, .external_lex_state = 3},
  [152] = {.lex_state = 4, .external_lex_state = 3},
  [153] = {.lex_state = 6, .external_lex_state = 3},
  [154] = {.lex_state = 4, .external_lex_state = 3},
  [155] = {.lex_state = 4, .external_lex_state = 3},
  [156] = {.lex_state = 4, .external_lex_state = 3},
  [157] = {.lex_state = 6, .external_lex_state = 3},
  [158] = {.lex_state = 4, .external_lex_state = 3},
  [159] = {.lex_state = 4, .external_lex_state = 3},
  [160] = {.lex_state = 4, .external_lex_state = 3},
  [161] = {.lex_state = 4, .external_lex_state = 3},
  [162] = {.lex_state = 4, .external_lex_state = 3},
  [163] = {.lex_state = 4, .external_lex_state = 3},
  [164] = {.lex_state = 4, .external_lex_state = 3},
  [165] = {.lex_state = 4, .external_lex_state = 3},
  [166] = {.lex_state = 4, .external_lex_state = 3},
  [167] = {.lex_state = 6, .external_lex_state = 3},
  [168] = {.lex_state = 4, .external_lex_state = 3},
  [169] = {.lex_state = 3, .external_lex_state = 3},
  [170] = {.lex_state = 4, .external_lex_state = 3},
  [171] = {.lex_state = 3, .external_lex_state = 3},
  [172] = {.lex_state = 3, .external_lex_state = 3},
  [173] = {.lex_state = 4, .external_lex_state = 3},
  [174] = {.lex_state = 3, .external_lex_state = 3},
  [175] = {.lex_state = 3, .external_lex_state = 3},
  [176] = {.lex_state = 4, .external_lex_state = 3},
  [177] = {.lex_state = 4, .external_lex_state = 3},
  [178] = {.lex_state = 4, .external_lex_state = 3},
  [179] = {.lex_state = 4, .external_lex_state = 3},
  [180] = {.lex_state = 4, .external_lex_state = 3},
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
  [227] = {.lex_state = 3, .external_lex_state = 3},
  [228] = {.lex_state = 3, .external_lex_state = 3},
  [229] = {.lex_state = 3, .external_lex_state = 3},
  [230] = {.lex_state = 55, .external_lex_state = 3},
  [231] = {.lex_state = 68, .external_lex_state = 3},
  [232] = {.lex_state = 68, .external_lex_state = 3},
  [233] = {.lex_state = 55, .external_lex_state = 3},
  [234] = {.lex_state = 44, .external_lex_state = 3},
  [235] = {.lex_state = 20, .external_lex_state = 3},
  [236] = {.lex_state = 44, .external_lex_state = 3},
  [237] = {.lex_state = 69, .external_lex_state = 3},
  [238] = {.lex_state = 68, .external_lex_state = 3},
  [239] = {.lex_state = 69, .external_lex_state = 3},
  [240] = {.lex_state = 68, .external_lex_state = 3},
  [241] = {.lex_state = 69, .external_lex_state = 3},
  [242] = {.lex_state = 69, .external_lex_state = 3},
  [243] = {.lex_state = 69, .external_lex_state = 3},
  [244] = {.lex_state = 68, .external_lex_state = 3},
  [245] = {.lex_state = 69, .external_lex_state = 3},
  [246] = {.lex_state = 55, .external_lex_state = 3},
  [247] = {.lex_state = 68, .external_lex_state = 3},
  [248] = {.lex_state = 68, .external_lex_state = 3},
  [249] = {.lex_state = 68, .external_lex_state = 3},
  [250] = {.lex_state = 68, .external_lex_state = 3},
  [251] = {.lex_state = 44, .external_lex_state = 3},
  [252] = {.lex_state = 68, .external_lex_state = 3},
  [253] = {.lex_state = 68, .external_lex_state = 3},
  [254] = {.lex_state = 68, .external_lex_state = 3},
  [255] = {.lex_state = 68, .external_lex_state = 3},
  [256] = {.lex_state = 68, .external_lex_state = 3},
  [257] = {.lex_state = 68, .external_lex_state = 3},
  [258] = {.lex_state = 68, .external_lex_state = 3},
  [259] = {.lex_state = 70, .external_lex_state = 3},
  [260] = {.lex_state = 68, .external_lex_state = 3},
  [261] = {.lex_state = 68, .external_lex_state = 3},
  [262] = {.lex_state = 68, .external_lex_state = 3},
  [263] = {.lex_state = 68, .external_lex_state = 3},
  [264] = {.lex_state = 68, .external_lex_state = 3},
  [265] = {.lex_state = 68, .external_lex_state = 3},
  [266] = {.lex_state = 68, .external_lex_state = 3},
  [267] = {.lex_state = 68, .external_lex_state = 3},
  [268] = {.lex_state = 68, .external_lex_state = 3},
  [269] = {.lex_state = 68, .external_lex_state = 3},
  [270] = {.lex_state = 20, .external_lex_state = 3},
  [271] = {.lex_state = 68, .external_lex_state = 3},
  [272] = {.lex_state = 68, .external_lex_state = 3},
  [273] = {.lex_state = 68, .external_lex_state = 3},
  [274] = {.lex_state = 68, .external_lex_state = 3},
  [275] = {.lex_state = 68, .external_lex_state = 3},
  [276] = {.lex_state = 68, .external_lex_state = 3},
  [277] = {.lex_state = 68, .external_lex_state = 3},
  [278] = {.lex_state = 68, .external_lex_state = 3},
  [279] = {.lex_state = 68, .external_lex_state = 3},
  [280] = {.lex_state = 68, .external_lex_state = 3},
  [281] = {.lex_state = 68, .external_lex_state = 3},
  [282] = {.lex_state = 68, .external_lex_state = 3},
  [283] = {.lex_state = 68, .external_lex_state = 3},
  [284] = {.lex_state = 68, .external_lex_state = 3},
  [285] = {.lex_state = 68, .external_lex_state = 3},
  [286] = {.lex_state = 45, .external_lex_state = 3},
  [287] = {.lex_state = 44, .external_lex_state = 3},
  [288] = {.lex_state = 45, .external_lex_state = 3},
  [289] = {.lex_state = 20, .external_lex_state = 3},
  [290] = {.lex_state = 20, .external_lex_state = 3},
  [291] = {.lex_state = 20, .external_lex_state = 3},
  [292] = {.lex_state = 44, .external_lex_state = 3},
  [293] = {.lex_state = 46, .external_lex_state = 3},
  [294] = {.lex_state = 46, .external_lex_state = 3},
  [295] = {.lex_state = 63, .external_lex_state = 3},
  [296] = {.lex_state = 65, .external_lex_state = 3},
  [297] = {.lex_state = 32, .external_lex_state = 3},
  [298] = {.lex_state = 32, .external_lex_state = 3},
  [299] = {.lex_state = 32, .external_lex_state = 3},
  [300] = {.lex_state = 32, .external_lex_state = 3},
  [301] = {.lex_state = 20, .external_lex_state = 3},
  [302] = {.lex_state = 33, .external_lex_state = 3},
  [303] = {.lex_state = 55, .external_lex_state = 3},
  [304] = {.lex_state = 65, .external_lex_state = 3},
  [305] = {.lex_state = 64, .external_lex_state = 3},
  [306] = {.lex_state = 62, .external_lex_state = 3},
  [307] = {.lex_state = 34, .external_lex_state = 3},
  [308] = {.lex_state = 35, .external_lex_state = 3},
  [309] = {.lex_state = 55, .external_lex_state = 3},
  [310] = {.lex_state = 55, .external_lex_state = 3},
  [311] = {.lex_state = 55, .external_lex_state = 3},
  [312] = {.lex_state = 36, .external_lex_state = 3},
  [313] = {.lex_state = 55, .external_lex_state = 3},
  [314] = {.lex_state = 55, .external_lex_state = 3},
  [315] = {.lex_state = 55, .external_lex_state = 3},
  [316] = {.lex_state = 55, .external_lex_state = 3},
  [317] = {.lex_state = 55, .external_lex_state = 3},
  [318] = {.lex_state = 1006, .external_lex_state = 3},
  [319] = {.lex_state = 55, .external_lex_state = 3},
  [320] = {.lex_state = 1006, .external_lex_state = 3},
  [321] = {.lex_state = 1006, .external_lex_state = 3},
  [322] = {.lex_state = 55, .external_lex_state = 3},
  [323] = {.lex_state = 1006, .external_lex_state = 3},
  [324] = {.lex_state = 55, .external_lex_state = 3},
  [325] = {.lex_state = 36, .external_lex_state = 3},
  [326] = {.lex_state = 49, .external_lex_state = 3},
  [327] = {.lex_state = 65, .external_lex_state = 3},
  [328] = {.lex_state = 33, .external_lex_state = 3},
  [329] = {.lex_state = 34, .external_lex_state = 3},
  [330] = {.lex_state = 36, .external_lex_state = 3},
  [331] = {.lex_state = 32, .external_lex_state = 3},
  [332] = {.lex_state = 35, .external_lex_state = 3},
  [333] = {.lex_state = 49, .external_lex_state = 3},
  [334] = {.lex_state = 34, .external_lex_state = 3},
  [335] = {.lex_state = 32, .external_lex_state = 3},
  [336] = {.lex_state = 33, .external_lex_state = 3},
  [337] = {.lex_state = 35, .external_lex_state = 3},
  [338] = {.lex_state = 45, .external_lex_state = 3},
  [339] = {.lex_state = 56, .external_lex_state = 3},
  [340] = {.lex_state = 32, .external_lex_state = 3},
  [341] = {.lex_state = 32, .external_lex_state = 3},
  [342] = {.lex_state = 1006, .external_lex_state = 3},
  [343] = {.lex_state = 20, .external_lex_state = 3},
  [344] = {.lex_state = 20, .external_lex_state = 3},
  [345] = {.lex_state = 32, .external_lex_state = 3},
  [346] = {.lex_state = 20, .external_lex_state = 3},
  [347] = {.lex_state = 32, .external_lex_state = 3},
  [348] = {.lex_state = 32, .external_lex_state = 3},
  [349] = {.lex_state = 32, .external_lex_state = 3},
  [350] = {.lex_state = 32, .external_lex_state = 3},
  [351] = {.lex_state = 64, .external_lex_state = 3},
  [352] = {.lex_state = 55, .external_lex_state = 3},
  [353] = {.lex_state = 55, .external_lex_state = 3},
  [354] = {.lex_state = 55, .external_lex_state = 3},
  [355] = {.lex_state = 55, .external_lex_state = 3},
  [356] = {.lex_state = 55, .external_lex_state = 3},
  [357] = {.lex_state = 55, .external_lex_state = 3},
  [358] = {.lex_state = 62, .external_lex_state = 3},
  [359] = {.lex_state = 64, .external_lex_state = 3},
  [360] = {.lex_state = 62, .external_lex_state = 3},
  [361] = {.lex_state = 63, .external_lex_state = 3},
  [362] = {.lex_state = 55, .external_lex_state = 3},
  [363] = {.lex_state = 55, .external_lex_state = 3},
  [364] = {.lex_state = 63, .external_lex_state = 3},
  [365] = {.lex_state = 32, .external_lex_state = 3},
  [366] = {.lex_state = 64, .external_lex_state = 3},
  [367] = {.lex_state = 62, .external_lex_state = 3},
  [368] = {.lex_state = 63, .external_lex_state = 3},
  [369] = {.lex_state = 1006, .external_lex_state = 3},
  [370] = {.lex_state = 65, .external_lex_state = 3},
  [371] = {.lex_state = 46, .external_lex_state = 3},
  [372] = {.lex_state = 29, .external_lex_state = 3},
  [373] = {.lex_state = 1006, .external_lex_state = 3},
  [374] = {.lex_state = 1006, .external_lex_state = 3},
  [375] = {.lex_state = 36, .external_lex_state = 3},
  [376] = {.lex_state = 36, .external_lex_state = 3},
  [377] = {.lex_state = 36, .external_lex_state = 3},
  [378] = {.lex_state = 20, .external_lex_state = 3},
  [379] = {.lex_state = 20, .external_lex_state = 3},
  [380] = {.lex_state = 20, .external_lex_state = 3},
  [381] = {.lex_state = 35, .external_lex_state = 3},
  [382] = {.lex_state = 56, .external_lex_state = 3},
  [383] = {.lex_state = 65, .external_lex_state = 3},
  [384] = {.lex_state = 65, .external_lex_state = 3},
  [385] = {.lex_state = 34, .external_lex_state = 3},
  [386] = {.lex_state = 36, .external_lex_state = 3},
  [387] = {.lex_state = 65, .external_lex_state = 3},
  [388] = {.lex_state = 56, .external_lex_state = 3},
  [389] = {.lex_state = 56, .external_lex_state = 3},
  [390] = {.lex_state = 33, .external_lex_state = 3},
  [391] = {.lex_state = 1006, .external_lex_state = 3},
  [392] = {.lex_state = 71, .external_lex_state = 3},
  [393] = {.lex_state = 71, .external_lex_state = 3},
  [394] = {.lex_state = 71, .external_lex_state = 3},
  [395] = {.lex_state = 1007, .external_lex_state = 3},
  [396] = {.lex_state = 71, .external_lex_state = 3},
  [397] = {.lex_state = 71, .external_lex_state = 3},
  [398] = {.lex_state = 71, .external_lex_state = 3},
  [399] = {.lex_state = 71, .external_lex_state = 3},
  [400] = {.lex_state = 71, .external_lex_state = 3},
  [401] = {.lex_state = 20, .external_lex_state = 3},
  [402] = {.lex_state = 71, .external_lex_state = 3},
  [403] = {.lex_state = 71, .external_lex_state = 3},
  [404] = {.lex_state = 71, .external_lex_state = 3},
  [405] = {.lex_state = 71, .external_lex_state = 3},
  [406] = {.lex_state = 37, .external_lex_state = 3},
  [407] = {.lex_state = 30, .external_lex_state = 3},
  [408] = {.lex_state = 37, .external_lex_state = 3},
  [409] = {.lex_state = 30, .external_lex_state = 3},
  [410] = {.lex_state = 20, .external_lex_state = 3},
  [411] = {.lex_state = 49, .external_lex_state = 3},
  [412] = {.lex_state = 20, .external_lex_state = 3},
  [413] = {.lex_state = 37, .external_lex_state = 3},
  [414] = {.lex_state = 30, .external_lex_state = 3},
  [415] = {.lex_state = 71, .external_lex_state = 3},
  [416] = {.lex_state = 55, .external_lex_state = 3},
  [417] = {.lex_state = 20, .external_lex_state = 3},
  [418] = {.lex_state = 71, .external_lex_state = 3},
  [419] = {.lex_state = 20, .external_lex_state = 3},
  [420] = {.lex_state = 20, .external_lex_state = 3},
  [421] = {.lex_state = 71, .external_lex_state = 3},
  [422] = {.lex_state = 71, .external_lex_state = 3},
  [423] = {.lex_state = 71, .external_lex_state = 3},
  [424] = {.lex_state = 20, .external_lex_state = 3},
  [425] = {.lex_state = 71, .external_lex_state = 3},
  [426] = {.lex_state = 49, .external_lex_state = 3},
  [427] = {.lex_state = 1007, .external_lex_state = 3},
  [428] = {.lex_state = 20, .external_lex_state = 3},
  [429] = {.lex_state = 71, .external_lex_state = 3},
  [430] = {.lex_state = 20, .external_lex_state = 3},
  [431] = {.lex_state = 71, .external_lex_state = 3},
  [432] = {.lex_state = 71, .external_lex_state = 3},
  [433] = {.lex_state = 71, .external_lex_state = 3},
  [434] = {.lex_state = 72, .external_lex_state = 3},
  [435] = {.lex_state = 71, .external_lex_state = 3},
  [436] = {.lex_state = 71, .external_lex_state = 3},
  [437] = {.lex_state = 71, .external_lex_state = 3},
  [438] = {.lex_state = 71, .external_lex_state = 3},
  [439] = {.lex_state = 46, .external_lex_state = 3},
  [440] = {.lex_state = 31, .external_lex_state = 3},
  [441] = {.lex_state = 31, .external_lex_state = 3},
  [442] = {.lex_state = 20, .external_lex_state = 3},
  [443] = {.lex_state = 20, .external_lex_state = 3},
  [444] = {.lex_state = 46, .external_lex_state = 3},
  [445] = {.lex_state = 60, .external_lex_state = 3},
  [446] = {.lex_state = 60, .external_lex_state = 3},
  [447] = {.lex_state = 60, .external_lex_state = 3},
  [448] = {.lex_state = 20, .external_lex_state = 3},
  [449] = {.lex_state = 53, .external_lex_state = 3},
  [450] = {.lex_state = 57, .external_lex_state = 3},
  [451] = {.lex_state = 46, .external_lex_state = 3},
  [452] = {.lex_state = 31, .external_lex_state = 3},
  [453] = {.lex_state = 20, .external_lex_state = 3},
  [454] = {.lex_state = 46, .external_lex_state = 3},
  [455] = {.lex_state = 46, .external_lex_state = 3},
  [456] = {.lex_state = 20, .external_lex_state = 3},
  [457] = {.lex_state = 20, .external_lex_state = 3},
  [458] = {.lex_state = 46, .external_lex_state = 3},
  [459] = {.lex_state = 57, .external_lex_state = 3},
  [460] = {.lex_state = 20, .external_lex_state = 3},
  [461] = {.lex_state = 31, .external_lex_state = 3},
  [462] = {.lex_state = 20, .external_lex_state = 3},
  [463] = {.lex_state = 57, .external_lex_state = 3},
  [464] = {.lex_state = 20, .external_lex_state = 3},
  [465] = {.lex_state = 31, .external_lex_state = 3},
  [466] = {.lex_state = 31, .external_lex_state = 3},
  [467] = {.lex_state = 53, .external_lex_state = 3},
  [468] = {.lex_state = 20, .external_lex_state = 3},
  [469] = {.lex_state = 31, .external_lex_state = 3},
  [470] = {.lex_state = 58, .external_lex_state = 3},
  [471] = {.lex_state = 20, .external_lex_state = 3},
  [472] = {.lex_state = 20, .external_lex_state = 3},
  [473] = {.lex_state = 31, .external_lex_state = 3},
  [474] = {.lex_state = 55, .external_lex_state = 3},
  [475] = {.lex_state = 20, .external_lex_state = 3},
  [476] = {.lex_state = 31, .external_lex_state = 3},
  [477] = {.lex_state = 20, .external_lex_state = 3},
  [478] = {.lex_state = 55, .external_lex_state = 3},
  [479] = {.lex_state = 55, .external_lex_state = 3},
  [480] = {.lex_state = 20, .external_lex_state = 3},
  [481] = {.lex_state = 55, .external_lex_state = 3},
  [482] = {.lex_state = 31, .external_lex_state = 3},
  [483] = {.lex_state = 20, .external_lex_state = 3},
  [484] = {.lex_state = 38, .external_lex_state = 3},
  [485] = {.lex_state = 38, .external_lex_state = 3},
  [486] = {.lex_state = 39, .external_lex_state = 3},
  [487] = {.lex_state = 20, .external_lex_state = 3},
  [488] = {.lex_state = 31, .external_lex_state = 3},
  [489] = {.lex_state = 31, .external_lex_state = 3},
  [490] = {.lex_state = 31, .external_lex_state = 3},
  [491] = {.lex_state = 31, .external_lex_state = 3},
  [492] = {.lex_state = 38, .external_lex_state = 3},
  [493] = {.lex_state = 71, .external_lex_state = 3},
  [494] = {.lex_state = 20, .external_lex_state = 3},
  [495] = {.lex_state = 55, .external_lex_state = 3},
  [496] = {.lex_state = 20, .external_lex_state = 3},
  [497] = {.lex_state = 59, .external_lex_state = 3},
  [498] = {.lex_state = 39, .external_lex_state = 3},
  [499] = {.lex_state = 38, .external_lex_state = 3},
  [500] = {.lex_state = 20, .external_lex_state = 3},
  [501] = {.lex_state = 39, .external_lex_state = 3},
  [502] = {.lex_state = 31, .external_lex_state = 3},
  [503] = {.lex_state = 20, .external_lex_state = 3},
  [504] = {.lex_state = 20, .external_lex_state = 3},
  [505] = {.lex_state = 31, .external_lex_state = 3},
  [506] = {.lex_state = 39, .external_lex_state = 3},
  [507] = {.lex_state = 38, .external_lex_state = 3},
  [508] = {.lex_state = 20, .external_lex_state = 3},
  [509] = {.lex_state = 38, .external_lex_state = 3},
  [510] = {.lex_state = 39, .external_lex_state = 3},
  [511] = {.lex_state = 38, .external_lex_state = 3},
  [512] = {.lex_state = 31, .external_lex_state = 3},
  [513] = {.lex_state = 20, .external_lex_state = 3},
  [514] = {.lex_state = 55, .external_lex_state = 3},
  [515] = {.lex_state = 20, .external_lex_state = 3},
  [516] = {.lex_state = 20, .external_lex_state = 3},
  [517] = {.lex_state = 20, .external_lex_state = 3},
  [518] = {.lex_state = 38, .external_lex_state = 3},
  [519] = {.lex_state = 39, .external_lex_state = 3},
  [520] = {.lex_state = 20, .external_lex_state = 3},
  [521] = {.lex_state = 20, .external_lex_state = 3},
  [522] = {.lex_state = 31, .external_lex_state = 3},
  [523] = {.lex_state = 20, .external_lex_state = 3},
  [524] = {.lex_state = 20, .external_lex_state = 3},
  [525] = {.lex_state = 20, .external_lex_state = 3},
  [526] = {.lex_state = 39, .external_lex_state = 3},
  [527] = {.lex_state = 55, .external_lex_state = 3},
  [528] = {.lex_state = 31, .external_lex_state = 3},
  [529] = {.lex_state = 31, .external_lex_state = 3},
  [530] = {.lex_state = 31, .external_lex_state = 3},
  [531] = {.lex_state = 31, .external_lex_state = 3},
  [532] = {.lex_state = 20, .external_lex_state = 3},
  [533] = {.lex_state = 20, .external_lex_state = 3},
  [534] = {.lex_state = 20, .external_lex_state = 3},
  [535] = {.lex_state = 31, .external_lex_state = 3},
  [536] = {.lex_state = 40, .external_lex_state = 3},
  [537] = {.lex_state = 40, .external_lex_state = 3},
  [538] = {.lex_state = 20, .external_lex_state = 3},
  [539] = {.lex_state = 55, .external_lex_state = 3},
  [540] = {.lex_state = 20, .external_lex_state = 3},
  [541] = {.lex_state = 55, .external_lex_state = 3},
  [542] = {.lex_state = 20, .external_lex_state = 3},
  [543] = {.lex_state = 31, .external_lex_state = 3},
  [544] = {.lex_state = 38, .external_lex_state = 3},
  [545] = {.lex_state = 39, .external_lex_state = 3},
  [546] = {.lex_state = 31, .external_lex_state = 3},
  [547] = {.lex_state = 20, .external_lex_state = 3},
  [548] = {.lex_state = 20, .external_lex_state = 3},
  [549] = {.lex_state = 55, .external_lex_state = 3},
  [550] = {.lex_state = 20, .external_lex_state = 3},
  [551] = {.lex_state = 55, .external_lex_state = 3},
  [552] = {.lex_state = 20, .external_lex_state = 3},
  [553] = {.lex_state = 20, .external_lex_state = 3},
  [554] = {.lex_state = 31, .external_lex_state = 3},
  [555] = {.lex_state = 55, .external_lex_state = 3},
  [556] = {.lex_state = 20, .external_lex_state = 3},
  [557] = {.lex_state = 20, .external_lex_state = 3},
  [558] = {.lex_state = 20, .external_lex_state = 3},
  [559] = {.lex_state = 20, .external_lex_state = 3},
  [560] = {.lex_state = 55, .external_lex_state = 3},
  [561] = {.lex_state = 55, .external_lex_state = 3},
  [562] = {.lex_state = 20, .external_lex_state = 3},
  [563] = {.lex_state = 20, .external_lex_state = 3},
  [564] = {.lex_state = 55, .external_lex_state = 3},
  [565] = {.lex_state = 20, .external_lex_state = 3},
  [566] = {.lex_state = 20, .external_lex_state = 3},
  [567] = {.lex_state = 55, .external_lex_state = 3},
  [568] = {.lex_state = 55, .external_lex_state = 3},
  [569] = {.lex_state = 20, .external_lex_state = 3},
  [570] = {.lex_state = 55, .external_lex_state = 3},
  [571] = {.lex_state = 20, .external_lex_state = 3},
  [572] = {.lex_state = 31, .external_lex_state = 3},
  [573] = {.lex_state = 20, .external_lex_state = 3},
  [574] = {.lex_state = 55, .external_lex_state = 3},
  [575] = {.lex_state = 20, .external_lex_state = 3},
  [576] = {.lex_state = 55, .external_lex_state = 3},
  [577] = {.lex_state = 20, .external_lex_state = 3},
  [578] = {.lex_state = 20, .external_lex_state = 3},
  [579] = {.lex_state = 55, .external_lex_state = 3},
  [580] = {.lex_state = 31, .external_lex_state = 3},
  [581] = {.lex_state = 55, .external_lex_state = 3},
  [582] = {.lex_state = 20, .external_lex_state = 3},
  [583] = {.lex_state = 55, .external_lex_state = 3},
  [584] = {.lex_state = 55, .external_lex_state = 3},
  [585] = {.lex_state = 55, .external_lex_state = 3},
  [586] = {.lex_state = 20, .external_lex_state = 3},
  [587] = {.lex_state = 55, .external_lex_state = 3},
  [588] = {.lex_state = 20, .external_lex_state = 3},
  [589] = {.lex_state = 55, .external_lex_state = 3},
  [590] = {.lex_state = 55, .external_lex_state = 3},
  [591] = {.lex_state = 55, .external_lex_state = 3},
  [592] = {.lex_state = 20, .external_lex_state = 3},
  [593] = {.lex_state = 55, .external_lex_state = 3},
  [594] = {.lex_state = 20, .external_lex_state = 3},
  [595] = {.lex_state = 20, .external_lex_state = 3},
  [596] = {.lex_state = 71, .external_lex_state = 3},
  [597] = {.lex_state = 20, .external_lex_state = 3},
  [598] = {.lex_state = 39, .external_lex_state = 3},
  [599] = {.lex_state = 38, .external_lex_state = 3},
  [600] = {.lex_state = 31, .external_lex_state = 3},
  [601] = {.lex_state = 71, .external_lex_state = 3},
  [602] = {.lex_state = 39, .external_lex_state = 3},
  [603] = {.lex_state = 38, .external_lex_state = 3},
  [604] = {.lex_state = 20, .external_lex_state = 3},
  [605] = {.lex_state = 71, .external_lex_state = 3},
  [606] = {.lex_state = 39, .external_lex_state = 3},
  [607] = {.lex_state = 38, .external_lex_state = 3},
  [608] = {.lex_state = 39, .external_lex_state = 3},
  [609] = {.lex_state = 71, .external_lex_state = 3},
  [610] = {.lex_state = 71, .external_lex_state = 3},
  [611] = {.lex_state = 71, .external_lex_state = 3},
  [612] = {.lex_state = 71, .external_lex_state = 3},
  [613] = {.lex_state = 71, .external_lex_state = 3},
  [614] = {.lex_state = 71, .external_lex_state = 3},
  [615] = {.lex_state = 71, .external_lex_state = 3},
  [616] = {.lex_state = 71, .external_lex_state = 3},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
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
    [aux_sym__repository_start_token10] = ACTIONS(1),
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
    [sym_dockerfile] = STATE(525),
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
    [aux_sym_dockerfile_repeat1] = STATE(4),
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
    [aux_sym_dockerfile_repeat1] = STATE(5),
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
    [aux_sym_dockerfile_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(55),
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
  [5] = {
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
    [aux_sym_dockerfile_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(57),
    [aux_sym_add_token1] = ACTIONS(59),
    [aux_sym_arg_token1] = ACTIONS(62),
    [aux_sym_cmd_token1] = ACTIONS(65),
    [aux_sym_copy_token1] = ACTIONS(68),
    [aux_sym_entrypoint_token1] = ACTIONS(71),
    [aux_sym_env_token1] = ACTIONS(74),
    [aux_sym_expose_token1] = ACTIONS(77),
    [aux_sym_from_token1] = ACTIONS(80),
    [aux_sym_healthcheck_token1] = ACTIONS(83),
    [aux_sym_label_token1] = ACTIONS(86),
    [aux_sym_maintainer_token1] = ACTIONS(89),
    [aux_sym_onbuild_token1] = ACTIONS(92),
    [aux_sym_run_token1] = ACTIONS(95),
    [aux_sym_shell_token1] = ACTIONS(98),
    [aux_sym_stopsignal_token1] = ACTIONS(101),
    [aux_sym_user_token1] = ACTIONS(104),
    [aux_sym_volume_token1] = ACTIONS(107),
    [aux_sym_workdir_token1] = ACTIONS(110),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(113),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [6] = {
    [sym__port_spec] = STATE(8),
    [sym_mapped_port] = STATE(8),
    [sym__port] = STATE(95),
    [sym_port] = STATE(95),
    [sym_port_range] = STATE(95),
    [sym__port_part] = STATE(90),
    [aux_sym_expose_repeat1] = STATE(8),
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
    [sym_add] = STATE(227),
    [sym_arg] = STATE(227),
    [sym_cmd] = STATE(227),
    [sym_copy] = STATE(227),
    [sym_entrypoint] = STATE(227),
    [sym_env] = STATE(227),
    [sym_expose] = STATE(227),
    [sym_healthcheck] = STATE(227),
    [sym_label] = STATE(227),
    [sym_run] = STATE(227),
    [sym_shell] = STATE(227),
    [sym_stopsignal] = STATE(227),
    [sym_user] = STATE(227),
    [sym_volume] = STATE(227),
    [sym_workdir] = STATE(227),
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
  [8] = {
    [sym__port_spec] = STATE(8),
    [sym_mapped_port] = STATE(8),
    [sym__port] = STATE(95),
    [sym_port] = STATE(95),
    [sym_port_range] = STATE(95),
    [sym__port_part] = STATE(90),
    [aux_sym_expose_repeat1] = STATE(8),
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
  [9] = {
    [aux_sym__repository_start_repeat3] = STATE(9),
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
    [aux_sym_from_layer_token9] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(135),
    [aux_sym__repository_start_token3] = ACTIONS(137),
    [aux_sym__repository_start_token7] = ACTIONS(139),
    [aux_sym__repository_start_token10] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym__space_no_newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [10] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
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
    [aux_sym_from_layer_token13] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(150),
    [aux_sym__repository_start_token9] = ACTIONS(146),
    [aux_sym__repository_start_token10] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [11] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym_add_token1] = ACTIONS(154),
    [aux_sym_arg_token1] = ACTIONS(154),
    [aux_sym_cmd_token1] = ACTIONS(154),
    [aux_sym_copy_token1] = ACTIONS(154),
    [aux_sym_entrypoint_token1] = ACTIONS(154),
    [aux_sym_env_token1] = ACTIONS(154),
    [aux_sym_expose_token1] = ACTIONS(154),
    [aux_sym_from_token1] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(152),
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
    [aux_sym_from_layer_token13] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(152),
    [aux_sym__repository_start_token3] = ACTIONS(154),
    [aux_sym__repository_start_token9] = ACTIONS(156),
    [aux_sym__repository_start_token10] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(152),
    [sym__space_no_newline] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [12] = {
    [aux_sym__repository_start_repeat3] = STATE(9),
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
    [aux_sym_from_layer_token9] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(150),
    [aux_sym__repository_start_token7] = ACTIONS(159),
    [aux_sym__repository_start_token10] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [13] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
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
    [aux_sym_from_layer_token5] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(161),
    [aux_sym__repository_start_token3] = ACTIONS(163),
    [aux_sym__repository_start_token5] = ACTIONS(165),
    [aux_sym__repository_start_token10] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [14] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
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
    [aux_sym_from_layer_token5] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(148),
    [aux_sym__repository_start_token3] = ACTIONS(150),
    [aux_sym__repository_start_token5] = ACTIONS(168),
    [aux_sym__repository_start_token10] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [15] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
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
    [anon_sym_DOLLAR] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(172),
    [aux_sym_workdir_token1] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(176),
    [aux_sym__repository_start_token2] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(178),
    [aux_sym__repository_start_token10] = ACTIONS(176),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [aux_sym__repository_start_token10] = ACTIONS(180),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [17] = {
    [aux_sym__repository_start_repeat1] = STATE(16),
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
    [anon_sym_DOLLAR] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token2] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token10] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [18] = {
    [aux_sym__repository_start_repeat2] = STATE(14),
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
    [aux_sym_from_layer_token5] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token5] = ACTIONS(168),
    [aux_sym__repository_start_token10] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [19] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
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
    [aux_sym_from_layer_token9] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token7] = ACTIONS(159),
    [aux_sym__repository_start_token10] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [20] = {
    [aux_sym__repository_start_repeat4] = STATE(10),
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
    [aux_sym_from_layer_token13] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token9] = ACTIONS(146),
    [aux_sym__repository_start_token10] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
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
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [aux_sym__repository_start_token10] = ACTIONS(195),
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
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token2] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token10] = ACTIONS(199),
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
    [aux_sym_from_layer_token9] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [aux_sym__repository_start_token7] = ACTIONS(203),
    [aux_sym__repository_start_token10] = ACTIONS(203),
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
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym_from_layer_token5] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token5] = ACTIONS(207),
    [aux_sym__repository_start_token10] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [25] = {
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
    [aux_sym__repository_start_token10] = ACTIONS(180),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
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
    [anon_sym_SLASH] = ACTIONS(211),
    [aux_sym__repository_start_token2] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(213),
    [aux_sym__repository_start_token10] = ACTIONS(211),
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
    [aux_sym_from_layer_token13] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [aux_sym__repository_start_token9] = ACTIONS(215),
    [aux_sym__repository_start_token10] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [28] = {
    [aux_sym__repository_start_repeat1] = STATE(28),
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
    [anon_sym_DOLLAR] = ACTIONS(219),
    [aux_sym_volume_token1] = ACTIONS(182),
    [aux_sym_workdir_token1] = ACTIONS(182),
    [aux_sym__repository_start_token2] = ACTIONS(219),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [29] = {
    [aux_sym__repository_start_repeat2] = STATE(32),
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
    [aux_sym_from_layer_token5] = ACTIONS(222),
    [aux_sym__repository_start_token3] = ACTIONS(224),
    [aux_sym__repository_start_token5] = ACTIONS(222),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [30] = {
    [aux_sym__repository_start_repeat1] = STATE(36),
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
    [anon_sym_DOLLAR] = ACTIONS(226),
    [aux_sym_volume_token1] = ACTIONS(172),
    [aux_sym_workdir_token1] = ACTIONS(172),
    [aux_sym__repository_start_token2] = ACTIONS(226),
    [aux_sym__repository_start_token3] = ACTIONS(228),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [31] = {
    [aux_sym__repository_start_repeat2] = STATE(29),
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
    [aux_sym_from_layer_token5] = ACTIONS(222),
    [aux_sym__repository_start_token3] = ACTIONS(230),
    [aux_sym__repository_start_token5] = ACTIONS(222),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [32] = {
    [aux_sym__repository_start_repeat2] = STATE(32),
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
    [aux_sym_from_layer_token5] = ACTIONS(232),
    [aux_sym__repository_start_token3] = ACTIONS(163),
    [aux_sym__repository_start_token5] = ACTIONS(232),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(161),
    [sym__space_no_newline] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [33] = {
    [sym_port_protocol] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(235),
    [aux_sym_add_token1] = ACTIONS(235),
    [aux_sym_arg_token1] = ACTIONS(235),
    [aux_sym_cmd_token1] = ACTIONS(235),
    [aux_sym_copy_token1] = ACTIONS(235),
    [aux_sym_entrypoint_token1] = ACTIONS(235),
    [aux_sym_env_token1] = ACTIONS(235),
    [aux_sym_expose_token1] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [aux_sym_from_token1] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
    [aux_sym_healthcheck_token1] = ACTIONS(235),
    [aux_sym_label_token1] = ACTIONS(235),
    [aux_sym_maintainer_token1] = ACTIONS(235),
    [aux_sym_onbuild_token1] = ACTIONS(235),
    [aux_sym_run_token1] = ACTIONS(235),
    [aux_sym_shell_token1] = ACTIONS(235),
    [aux_sym_stopsignal_token1] = ACTIONS(235),
    [aux_sym_user_token1] = ACTIONS(235),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [aux_sym_volume_token1] = ACTIONS(235),
    [aux_sym_workdir_token1] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [aux_sym__port_part_token1] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(237),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(235),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [34] = {
    [aux_sym__repository_start_repeat3] = STATE(41),
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
    [aux_sym_from_layer_token9] = ACTIONS(239),
    [aux_sym__repository_start_token3] = ACTIONS(230),
    [aux_sym__repository_start_token7] = ACTIONS(239),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [35] = {
    [aux_sym__repository_start_repeat3] = STATE(35),
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
    [aux_sym_from_layer_token9] = ACTIONS(241),
    [aux_sym__repository_start_token3] = ACTIONS(137),
    [aux_sym__repository_start_token7] = ACTIONS(241),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym__space_no_newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [36] = {
    [aux_sym__repository_start_repeat1] = STATE(28),
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
    [anon_sym_DOLLAR] = ACTIONS(226),
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [aux_sym__repository_start_token2] = ACTIONS(226),
    [aux_sym__repository_start_token3] = ACTIONS(230),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [37] = {
    [aux_sym__repository_start_repeat4] = STATE(40),
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
    [aux_sym_from_layer_token13] = ACTIONS(244),
    [aux_sym__repository_start_token3] = ACTIONS(230),
    [aux_sym__repository_start_token9] = ACTIONS(244),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [38] = {
    [aux_sym__repository_start_repeat4] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym_add_token1] = ACTIONS(154),
    [aux_sym_arg_token1] = ACTIONS(154),
    [aux_sym_cmd_token1] = ACTIONS(154),
    [aux_sym_copy_token1] = ACTIONS(154),
    [aux_sym_entrypoint_token1] = ACTIONS(154),
    [aux_sym_env_token1] = ACTIONS(154),
    [aux_sym_expose_token1] = ACTIONS(154),
    [aux_sym_from_token1] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(152),
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
    [aux_sym_from_layer_token13] = ACTIONS(246),
    [aux_sym__repository_start_token3] = ACTIONS(154),
    [aux_sym__repository_start_token9] = ACTIONS(246),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(152),
    [sym__space_no_newline] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [39] = {
    [sym_port_protocol] = STATE(89),
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
    [anon_sym_SLASH] = ACTIONS(237),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [40] = {
    [aux_sym__repository_start_repeat4] = STATE(38),
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
    [aux_sym_from_layer_token13] = ACTIONS(244),
    [aux_sym__repository_start_token3] = ACTIONS(224),
    [aux_sym__repository_start_token9] = ACTIONS(244),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [41] = {
    [aux_sym__repository_start_repeat3] = STATE(35),
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
    [aux_sym_from_layer_token9] = ACTIONS(239),
    [aux_sym__repository_start_token3] = ACTIONS(224),
    [aux_sym__repository_start_token7] = ACTIONS(239),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [42] = {
    [sym_path] = STATE(83),
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [44] = {
    [aux_sym__repository_start_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(263),
    [aux_sym_arg_token1] = ACTIONS(263),
    [aux_sym_cmd_token1] = ACTIONS(263),
    [aux_sym_copy_token1] = ACTIONS(263),
    [aux_sym_entrypoint_token1] = ACTIONS(263),
    [aux_sym_env_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(263),
    [anon_sym_AT] = ACTIONS(261),
    [aux_sym_healthcheck_token1] = ACTIONS(263),
    [aux_sym_label_token1] = ACTIONS(263),
    [aux_sym_maintainer_token1] = ACTIONS(263),
    [aux_sym_onbuild_token1] = ACTIONS(263),
    [aux_sym_run_token1] = ACTIONS(263),
    [aux_sym_shell_token1] = ACTIONS(263),
    [aux_sym_stopsignal_token1] = ACTIONS(263),
    [aux_sym_user_token1] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(263),
    [aux_sym_workdir_token1] = ACTIONS(263),
    [aux_sym__repository_start_token2] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [45] = {
    [sym_path] = STATE(83),
    [aux_sym__paths] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_add_token1] = ACTIONS(267),
    [aux_sym_arg_token1] = ACTIONS(267),
    [aux_sym_cmd_token1] = ACTIONS(267),
    [aux_sym_copy_token1] = ACTIONS(267),
    [aux_sym_entrypoint_token1] = ACTIONS(267),
    [aux_sym_env_token1] = ACTIONS(267),
    [aux_sym_expose_token1] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(267),
    [aux_sym_healthcheck_token1] = ACTIONS(267),
    [aux_sym_label_token1] = ACTIONS(267),
    [aux_sym_maintainer_token1] = ACTIONS(267),
    [aux_sym_onbuild_token1] = ACTIONS(267),
    [aux_sym_run_token1] = ACTIONS(267),
    [aux_sym_shell_token1] = ACTIONS(267),
    [aux_sym_stopsignal_token1] = ACTIONS(267),
    [aux_sym_user_token1] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_volume_token1] = ACTIONS(267),
    [aux_sym_workdir_token1] = ACTIONS(267),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [46] = {
    [aux_sym_path_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(269),
    [aux_sym_arg_token1] = ACTIONS(269),
    [aux_sym_cmd_token1] = ACTIONS(269),
    [aux_sym_copy_token1] = ACTIONS(269),
    [aux_sym_entrypoint_token1] = ACTIONS(269),
    [aux_sym_env_token1] = ACTIONS(269),
    [aux_sym_expose_token1] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [aux_sym_from_token1] = ACTIONS(269),
    [aux_sym_healthcheck_token1] = ACTIONS(269),
    [aux_sym_label_token1] = ACTIONS(269),
    [aux_sym_maintainer_token1] = ACTIONS(269),
    [aux_sym_onbuild_token1] = ACTIONS(269),
    [aux_sym_run_token1] = ACTIONS(269),
    [aux_sym_shell_token1] = ACTIONS(269),
    [aux_sym_stopsignal_token1] = ACTIONS(269),
    [aux_sym_user_token1] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(271),
    [aux_sym_volume_token1] = ACTIONS(269),
    [aux_sym_workdir_token1] = ACTIONS(269),
    [aux_sym_path_token1] = ACTIONS(274),
    [aux_sym_path_token2] = ACTIONS(276),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(269),
    [sym__space_no_newline] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [47] = {
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
  [48] = {
    [sym_path] = STATE(83),
    [aux_sym__paths] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(279),
    [aux_sym_arg_token1] = ACTIONS(279),
    [aux_sym_cmd_token1] = ACTIONS(279),
    [aux_sym_copy_token1] = ACTIONS(279),
    [aux_sym_entrypoint_token1] = ACTIONS(279),
    [aux_sym_env_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(279),
    [aux_sym_healthcheck_token1] = ACTIONS(279),
    [aux_sym_label_token1] = ACTIONS(279),
    [aux_sym_maintainer_token1] = ACTIONS(279),
    [aux_sym_onbuild_token1] = ACTIONS(279),
    [aux_sym_run_token1] = ACTIONS(279),
    [aux_sym_shell_token1] = ACTIONS(279),
    [aux_sym_stopsignal_token1] = ACTIONS(279),
    [aux_sym_user_token1] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_volume_token1] = ACTIONS(279),
    [aux_sym_workdir_token1] = ACTIONS(279),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [49] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [50] = {
    [aux_sym__repository_start_repeat2] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(263),
    [aux_sym_arg_token1] = ACTIONS(263),
    [aux_sym_cmd_token1] = ACTIONS(263),
    [aux_sym_copy_token1] = ACTIONS(263),
    [aux_sym_entrypoint_token1] = ACTIONS(263),
    [aux_sym_env_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(263),
    [anon_sym_AT] = ACTIONS(261),
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
    [aux_sym_from_layer_token5] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(265),
    [aux_sym__repository_start_token5] = ACTIONS(168),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [51] = {
    [sym_path] = STATE(83),
    [aux_sym__paths] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym_add_token1] = ACTIONS(281),
    [aux_sym_arg_token1] = ACTIONS(281),
    [aux_sym_cmd_token1] = ACTIONS(281),
    [aux_sym_copy_token1] = ACTIONS(281),
    [aux_sym_entrypoint_token1] = ACTIONS(281),
    [aux_sym_env_token1] = ACTIONS(281),
    [aux_sym_expose_token1] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [aux_sym_from_token1] = ACTIONS(281),
    [aux_sym_healthcheck_token1] = ACTIONS(281),
    [aux_sym_label_token1] = ACTIONS(281),
    [aux_sym_maintainer_token1] = ACTIONS(281),
    [aux_sym_onbuild_token1] = ACTIONS(281),
    [aux_sym_run_token1] = ACTIONS(281),
    [aux_sym_shell_token1] = ACTIONS(281),
    [aux_sym_stopsignal_token1] = ACTIONS(281),
    [aux_sym_user_token1] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(286),
    [aux_sym_volume_token1] = ACTIONS(281),
    [aux_sym_workdir_token1] = ACTIONS(281),
    [aux_sym_path_token1] = ACTIONS(289),
    [aux_sym_path_token2] = ACTIONS(292),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [52] = {
    [aux_sym_path_repeat1] = STATE(46),
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
    [anon_sym_DOLLAR] = ACTIONS(297),
    [aux_sym_volume_token1] = ACTIONS(295),
    [aux_sym_workdir_token1] = ACTIONS(295),
    [aux_sym_path_token1] = ACTIONS(299),
    [aux_sym_path_token2] = ACTIONS(301),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym__space_no_newline] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [53] = {
    [aux_sym_path_repeat1] = STATE(52),
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
    [anon_sym_DOLLAR] = ACTIONS(297),
    [aux_sym_volume_token1] = ACTIONS(305),
    [aux_sym_workdir_token1] = ACTIONS(305),
    [aux_sym_path_token1] = ACTIONS(307),
    [aux_sym_path_token2] = ACTIONS(301),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym__space_no_newline] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [54] = {
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
    [aux_sym_from_layer_token9] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [aux_sym__repository_start_token7] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [55] = {
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
  [56] = {
    [aux_sym__repository_start_repeat1] = STATE(44),
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
    [anon_sym_DOLLAR] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(313),
    [aux_sym_workdir_token1] = ACTIONS(313),
    [aux_sym__repository_start_token2] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(315),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym__space_no_newline] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [57] = {
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
    [aux_sym_from_layer_token5] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token5] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [58] = {
    [sym_path] = STATE(83),
    [aux_sym__paths] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym_add_token1] = ACTIONS(317),
    [aux_sym_arg_token1] = ACTIONS(317),
    [aux_sym_cmd_token1] = ACTIONS(317),
    [aux_sym_copy_token1] = ACTIONS(317),
    [aux_sym_entrypoint_token1] = ACTIONS(317),
    [aux_sym_env_token1] = ACTIONS(317),
    [aux_sym_expose_token1] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(317),
    [aux_sym_healthcheck_token1] = ACTIONS(317),
    [aux_sym_label_token1] = ACTIONS(317),
    [aux_sym_maintainer_token1] = ACTIONS(317),
    [aux_sym_onbuild_token1] = ACTIONS(317),
    [aux_sym_run_token1] = ACTIONS(317),
    [aux_sym_shell_token1] = ACTIONS(317),
    [aux_sym_stopsignal_token1] = ACTIONS(317),
    [aux_sym_user_token1] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_volume_token1] = ACTIONS(317),
    [aux_sym_workdir_token1] = ACTIONS(317),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [59] = {
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
    [aux_sym__repository_start_token2] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym__space_no_newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [60] = {
    [aux_sym__repository_start_repeat3] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(263),
    [aux_sym_arg_token1] = ACTIONS(263),
    [aux_sym_cmd_token1] = ACTIONS(263),
    [aux_sym_copy_token1] = ACTIONS(263),
    [aux_sym_entrypoint_token1] = ACTIONS(263),
    [aux_sym_env_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(263),
    [anon_sym_AT] = ACTIONS(261),
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
    [aux_sym_from_layer_token9] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(265),
    [aux_sym__repository_start_token7] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [61] = {
    [aux_sym__repository_start_repeat4] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(263),
    [aux_sym_arg_token1] = ACTIONS(263),
    [aux_sym_cmd_token1] = ACTIONS(263),
    [aux_sym_copy_token1] = ACTIONS(263),
    [aux_sym_entrypoint_token1] = ACTIONS(263),
    [aux_sym_env_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(263),
    [anon_sym_AT] = ACTIONS(261),
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
    [aux_sym_from_layer_token13] = ACTIONS(146),
    [aux_sym__repository_start_token3] = ACTIONS(265),
    [aux_sym__repository_start_token9] = ACTIONS(146),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [62] = {
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
  [63] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [64] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_add_token1] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_copy_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_env_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(319),
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
    [aux_sym_from_layer_token13] = ACTIONS(146),
    [aux_sym__repository_start_token3] = ACTIONS(323),
    [aux_sym__repository_start_token9] = ACTIONS(146),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(319),
    [sym__space_no_newline] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [65] = {
    [aux_sym__repository_start_repeat3] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_add_token1] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_copy_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_env_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(319),
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
    [aux_sym_from_layer_token9] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(323),
    [aux_sym__repository_start_token7] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(319),
    [sym__space_no_newline] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [66] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_add_token1] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_copy_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_env_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(319),
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
    [aux_sym_from_layer_token5] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(323),
    [aux_sym__repository_start_token5] = ACTIONS(168),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(319),
    [sym__space_no_newline] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
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
    [aux_sym_from_layer_token13] = ACTIONS(215),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [aux_sym__repository_start_token9] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(269),
    [aux_sym_arg_token1] = ACTIONS(269),
    [aux_sym_cmd_token1] = ACTIONS(269),
    [aux_sym_copy_token1] = ACTIONS(269),
    [aux_sym_entrypoint_token1] = ACTIONS(269),
    [aux_sym_env_token1] = ACTIONS(269),
    [aux_sym_expose_token1] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [aux_sym_from_token1] = ACTIONS(269),
    [aux_sym_healthcheck_token1] = ACTIONS(269),
    [aux_sym_label_token1] = ACTIONS(269),
    [aux_sym_maintainer_token1] = ACTIONS(269),
    [aux_sym_onbuild_token1] = ACTIONS(269),
    [aux_sym_run_token1] = ACTIONS(269),
    [aux_sym_shell_token1] = ACTIONS(269),
    [aux_sym_stopsignal_token1] = ACTIONS(269),
    [aux_sym_user_token1] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(269),
    [aux_sym_workdir_token1] = ACTIONS(269),
    [aux_sym_path_token1] = ACTIONS(274),
    [aux_sym_path_token2] = ACTIONS(274),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(269),
    [sym__space_no_newline] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
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
  [70] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
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
    [aux_sym_from_layer_token5] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(331),
    [aux_sym__repository_start_token5] = ACTIONS(168),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(327),
    [sym__space_no_newline] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [71] = {
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
    [anon_sym_SLASH] = ACTIONS(148),
    [aux_sym__repository_start_token10] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(142),
    [sym__space_no_newline] = ACTIONS(144),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [72] = {
    [aux_sym__repository_start_repeat3] = STATE(9),
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
    [aux_sym_from_layer_token9] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(331),
    [aux_sym__repository_start_token7] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(327),
    [sym__space_no_newline] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [aux_sym_add_token1] = ACTIONS(333),
    [aux_sym_arg_token1] = ACTIONS(333),
    [aux_sym_cmd_token1] = ACTIONS(333),
    [aux_sym_copy_token1] = ACTIONS(333),
    [aux_sym_entrypoint_token1] = ACTIONS(333),
    [aux_sym_env_token1] = ACTIONS(333),
    [aux_sym_expose_token1] = ACTIONS(333),
    [aux_sym_from_token1] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(333),
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
    [anon_sym_SLASH] = ACTIONS(337),
    [aux_sym__repository_start_token10] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [74] = {
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
  [75] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
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
    [aux_sym_from_layer_token13] = ACTIONS(146),
    [aux_sym__repository_start_token3] = ACTIONS(331),
    [aux_sym__repository_start_token9] = ACTIONS(146),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(327),
    [sym__space_no_newline] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [76] = {
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
    [aux_sym_path_token1] = ACTIONS(303),
    [aux_sym_path_token2] = ACTIONS(303),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym__space_no_newline] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [77] = {
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
  [78] = {
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
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [aux_sym_add_token1] = ACTIONS(345),
    [aux_sym_arg_token1] = ACTIONS(345),
    [aux_sym_cmd_token1] = ACTIONS(345),
    [aux_sym_copy_token1] = ACTIONS(345),
    [aux_sym_entrypoint_token1] = ACTIONS(345),
    [aux_sym_env_token1] = ACTIONS(345),
    [aux_sym_expose_token1] = ACTIONS(345),
    [aux_sym_from_token1] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_AT] = ACTIONS(345),
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
    [anon_sym_SLASH] = ACTIONS(349),
    [aux_sym__repository_start_token10] = ACTIONS(349),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(345),
    [sym__space_no_newline] = ACTIONS(347),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [80] = {
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
    [anon_sym_DASH] = ACTIONS(351),
    [aux_sym__port_part_token1] = ACTIONS(351),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_add_token1] = ACTIONS(187),
    [aux_sym_arg_token1] = ACTIONS(187),
    [aux_sym_cmd_token1] = ACTIONS(187),
    [aux_sym_copy_token1] = ACTIONS(187),
    [aux_sym_entrypoint_token1] = ACTIONS(187),
    [aux_sym_env_token1] = ACTIONS(187),
    [aux_sym_expose_token1] = ACTIONS(187),
    [aux_sym_from_token1] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(187),
    [aux_sym_healthcheck_token1] = ACTIONS(187),
    [aux_sym_label_token1] = ACTIONS(187),
    [aux_sym_maintainer_token1] = ACTIONS(187),
    [aux_sym_onbuild_token1] = ACTIONS(187),
    [aux_sym_run_token1] = ACTIONS(187),
    [aux_sym_shell_token1] = ACTIONS(187),
    [aux_sym_stopsignal_token1] = ACTIONS(187),
    [aux_sym_user_token1] = ACTIONS(187),
    [aux_sym_volume_token1] = ACTIONS(187),
    [aux_sym_workdir_token1] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token10] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [82] = {
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
  [83] = {
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
    [sym__space_no_newline] = ACTIONS(361),
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
    [aux_sym_path_token1] = ACTIONS(365),
    [aux_sym_path_token2] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(363),
    [sym__space_no_newline] = ACTIONS(365),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [85] = {
    [aux_sym__repository_start_repeat4] = STATE(75),
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
    [aux_sym_volume_token1] = ACTIONS(369),
    [aux_sym_workdir_token1] = ACTIONS(369),
    [aux_sym_from_layer_token13] = ACTIONS(146),
    [aux_sym__repository_start_token3] = ACTIONS(371),
    [aux_sym__repository_start_token9] = ACTIONS(146),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(367),
    [sym__space_no_newline] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [86] = {
    [aux_sym__repository_start_repeat3] = STATE(72),
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
    [aux_sym_volume_token1] = ACTIONS(369),
    [aux_sym_workdir_token1] = ACTIONS(369),
    [aux_sym_from_layer_token9] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(371),
    [aux_sym__repository_start_token7] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(367),
    [sym__space_no_newline] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [87] = {
    [aux_sym__repository_start_repeat2] = STATE(70),
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
    [aux_sym_volume_token1] = ACTIONS(369),
    [aux_sym_workdir_token1] = ACTIONS(369),
    [aux_sym_from_layer_token5] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(371),
    [aux_sym__repository_start_token5] = ACTIONS(168),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(367),
    [sym__space_no_newline] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [88] = {
    [aux_sym__repository_start_repeat1] = STATE(16),
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
    [anon_sym_DOLLAR] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(369),
    [aux_sym_workdir_token1] = ACTIONS(369),
    [aux_sym__repository_start_token2] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(371),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(367),
    [sym__space_no_newline] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [aux_sym_add_token1] = ACTIONS(235),
    [aux_sym_arg_token1] = ACTIONS(235),
    [aux_sym_cmd_token1] = ACTIONS(235),
    [aux_sym_copy_token1] = ACTIONS(235),
    [aux_sym_entrypoint_token1] = ACTIONS(235),
    [aux_sym_env_token1] = ACTIONS(235),
    [aux_sym_expose_token1] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [aux_sym_from_token1] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
    [aux_sym_healthcheck_token1] = ACTIONS(235),
    [aux_sym_label_token1] = ACTIONS(235),
    [aux_sym_maintainer_token1] = ACTIONS(235),
    [aux_sym_onbuild_token1] = ACTIONS(235),
    [aux_sym_run_token1] = ACTIONS(235),
    [aux_sym_shell_token1] = ACTIONS(235),
    [aux_sym_stopsignal_token1] = ACTIONS(235),
    [aux_sym_user_token1] = ACTIONS(235),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [aux_sym_volume_token1] = ACTIONS(235),
    [aux_sym_workdir_token1] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [aux_sym__port_part_token1] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(235),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [90] = {
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
    [anon_sym_DASH] = ACTIONS(375),
    [aux_sym__port_part_token1] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [91] = {
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
    [aux_sym__repository_start_repeat1] = STATE(88),
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
    [anon_sym_DOLLAR] = ACTIONS(174),
    [aux_sym_volume_token1] = ACTIONS(383),
    [aux_sym_workdir_token1] = ACTIONS(383),
    [aux_sym__repository_start_token2] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(385),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(381),
    [sym__space_no_newline] = ACTIONS(383),
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
    [aux_sym__repository_start_repeat1] = STATE(109),
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
    [anon_sym_DOLLAR] = ACTIONS(395),
    [aux_sym_volume_token1] = ACTIONS(393),
    [aux_sym_workdir_token1] = ACTIONS(393),
    [aux_sym__repository_start_token2] = ACTIONS(395),
    [aux_sym__repository_start_token3] = ACTIONS(397),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [97] = {
    [aux_sym__repository_start_repeat2] = STATE(100),
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
    [aux_sym_volume_token1] = ACTIONS(401),
    [aux_sym_workdir_token1] = ACTIONS(401),
    [aux_sym_from_layer_token5] = ACTIONS(403),
    [aux_sym__repository_start_token3] = ACTIONS(405),
    [aux_sym__repository_start_token5] = ACTIONS(403),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [98] = {
    [aux_sym__repository_start_repeat3] = STATE(106),
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
    [aux_sym_volume_token1] = ACTIONS(401),
    [aux_sym_workdir_token1] = ACTIONS(401),
    [aux_sym_from_layer_token9] = ACTIONS(407),
    [aux_sym__repository_start_token3] = ACTIONS(405),
    [aux_sym__repository_start_token7] = ACTIONS(407),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [99] = {
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
    [anon_sym_DOLLAR] = ACTIONS(281),
    [aux_sym_volume_token1] = ACTIONS(281),
    [aux_sym_workdir_token1] = ACTIONS(281),
    [aux_sym_path_token1] = ACTIONS(409),
    [aux_sym_path_token2] = ACTIONS(409),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(281),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [100] = {
    [aux_sym__repository_start_repeat2] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_add_token1] = ACTIONS(163),
    [aux_sym_arg_token1] = ACTIONS(163),
    [aux_sym_cmd_token1] = ACTIONS(163),
    [aux_sym_copy_token1] = ACTIONS(163),
    [aux_sym_entrypoint_token1] = ACTIONS(163),
    [aux_sym_env_token1] = ACTIONS(163),
    [aux_sym_expose_token1] = ACTIONS(163),
    [aux_sym_from_token1] = ACTIONS(163),
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
    [aux_sym_from_layer_token5] = ACTIONS(411),
    [aux_sym__repository_start_token3] = ACTIONS(163),
    [aux_sym__repository_start_token5] = ACTIONS(411),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [101] = {
    [aux_sym__repository_start_repeat4] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym_add_token1] = ACTIONS(154),
    [aux_sym_arg_token1] = ACTIONS(154),
    [aux_sym_cmd_token1] = ACTIONS(154),
    [aux_sym_copy_token1] = ACTIONS(154),
    [aux_sym_entrypoint_token1] = ACTIONS(154),
    [aux_sym_env_token1] = ACTIONS(154),
    [aux_sym_expose_token1] = ACTIONS(154),
    [aux_sym_from_token1] = ACTIONS(154),
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
    [aux_sym_from_layer_token13] = ACTIONS(414),
    [aux_sym__repository_start_token3] = ACTIONS(154),
    [aux_sym__repository_start_token9] = ACTIONS(414),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [102] = {
    [aux_sym__repository_start_repeat4] = STATE(105),
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
    [aux_sym_from_layer_token13] = ACTIONS(421),
    [aux_sym__repository_start_token3] = ACTIONS(423),
    [aux_sym__repository_start_token9] = ACTIONS(421),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [103] = {
    [aux_sym_path_repeat1] = STATE(103),
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(269),
    [aux_sym_arg_token1] = ACTIONS(269),
    [aux_sym_cmd_token1] = ACTIONS(269),
    [aux_sym_copy_token1] = ACTIONS(269),
    [aux_sym_entrypoint_token1] = ACTIONS(269),
    [aux_sym_env_token1] = ACTIONS(269),
    [aux_sym_expose_token1] = ACTIONS(269),
    [aux_sym_from_token1] = ACTIONS(269),
    [aux_sym_healthcheck_token1] = ACTIONS(269),
    [aux_sym_label_token1] = ACTIONS(269),
    [aux_sym_maintainer_token1] = ACTIONS(269),
    [aux_sym_onbuild_token1] = ACTIONS(269),
    [aux_sym_run_token1] = ACTIONS(269),
    [aux_sym_shell_token1] = ACTIONS(269),
    [aux_sym_stopsignal_token1] = ACTIONS(269),
    [aux_sym_user_token1] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(425),
    [aux_sym_volume_token1] = ACTIONS(269),
    [aux_sym_workdir_token1] = ACTIONS(269),
    [aux_sym_path_token1] = ACTIONS(274),
    [aux_sym_path_token2] = ACTIONS(428),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(269),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [104] = {
    [aux_sym__repository_start_repeat3] = STATE(98),
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
    [aux_sym_from_layer_token9] = ACTIONS(407),
    [aux_sym__repository_start_token3] = ACTIONS(423),
    [aux_sym__repository_start_token7] = ACTIONS(407),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [105] = {
    [aux_sym__repository_start_repeat4] = STATE(101),
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
    [aux_sym_volume_token1] = ACTIONS(401),
    [aux_sym_workdir_token1] = ACTIONS(401),
    [aux_sym_from_layer_token13] = ACTIONS(421),
    [aux_sym__repository_start_token3] = ACTIONS(405),
    [aux_sym__repository_start_token9] = ACTIONS(421),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [106] = {
    [aux_sym__repository_start_repeat3] = STATE(106),
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
    [aux_sym_from_layer_token9] = ACTIONS(431),
    [aux_sym__repository_start_token3] = ACTIONS(137),
    [aux_sym__repository_start_token7] = ACTIONS(431),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [107] = {
    [aux_sym_path_repeat1] = STATE(103),
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
    [anon_sym_DOLLAR] = ACTIONS(434),
    [aux_sym_volume_token1] = ACTIONS(295),
    [aux_sym_workdir_token1] = ACTIONS(295),
    [aux_sym_path_token1] = ACTIONS(436),
    [aux_sym_path_token2] = ACTIONS(438),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [108] = {
    [aux_sym__repository_start_repeat2] = STATE(97),
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
    [aux_sym_from_layer_token5] = ACTIONS(403),
    [aux_sym__repository_start_token3] = ACTIONS(423),
    [aux_sym__repository_start_token5] = ACTIONS(403),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [109] = {
    [aux_sym__repository_start_repeat1] = STATE(110),
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
    [anon_sym_DOLLAR] = ACTIONS(395),
    [aux_sym_volume_token1] = ACTIONS(419),
    [aux_sym_workdir_token1] = ACTIONS(419),
    [aux_sym__repository_start_token2] = ACTIONS(395),
    [aux_sym__repository_start_token3] = ACTIONS(423),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [110] = {
    [aux_sym__repository_start_repeat1] = STATE(110),
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
    [anon_sym_DOLLAR] = ACTIONS(440),
    [aux_sym_volume_token1] = ACTIONS(182),
    [aux_sym_workdir_token1] = ACTIONS(182),
    [aux_sym__repository_start_token2] = ACTIONS(440),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [111] = {
    [aux_sym_path_repeat1] = STATE(107),
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
    [anon_sym_DOLLAR] = ACTIONS(434),
    [aux_sym_volume_token1] = ACTIONS(305),
    [aux_sym_workdir_token1] = ACTIONS(305),
    [aux_sym_path_token1] = ACTIONS(443),
    [aux_sym_path_token2] = ACTIONS(438),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [112] = {
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
    [anon_sym_COLON] = ACTIONS(445),
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
  [113] = {
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
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [aux_sym_add_token1] = ACTIONS(345),
    [aux_sym_arg_token1] = ACTIONS(345),
    [aux_sym_cmd_token1] = ACTIONS(345),
    [aux_sym_copy_token1] = ACTIONS(345),
    [aux_sym_entrypoint_token1] = ACTIONS(345),
    [aux_sym_env_token1] = ACTIONS(345),
    [aux_sym_expose_token1] = ACTIONS(345),
    [aux_sym_from_token1] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
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
    [sym__space_no_newline] = ACTIONS(347),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [115] = {
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
  [116] = {
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
    [aux_sym_from_layer_token13] = ACTIONS(215),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [aux_sym__repository_start_token9] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [aux_sym_add_token1] = ACTIONS(449),
    [aux_sym_arg_token1] = ACTIONS(449),
    [aux_sym_cmd_token1] = ACTIONS(449),
    [aux_sym_copy_token1] = ACTIONS(449),
    [aux_sym_entrypoint_token1] = ACTIONS(449),
    [aux_sym_env_token1] = ACTIONS(449),
    [aux_sym_expose_token1] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [aux_sym_from_token1] = ACTIONS(449),
    [aux_sym_healthcheck_token1] = ACTIONS(449),
    [aux_sym_label_token1] = ACTIONS(449),
    [aux_sym_maintainer_token1] = ACTIONS(449),
    [aux_sym_onbuild_token1] = ACTIONS(449),
    [aux_sym_run_token1] = ACTIONS(449),
    [aux_sym_shell_token1] = ACTIONS(449),
    [aux_sym_stopsignal_token1] = ACTIONS(449),
    [aux_sym_user_token1] = ACTIONS(449),
    [anon_sym_DOLLAR] = ACTIONS(449),
    [aux_sym_volume_token1] = ACTIONS(449),
    [aux_sym_workdir_token1] = ACTIONS(449),
    [aux_sym__port_part_token1] = ACTIONS(449),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(449),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [118] = {
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
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [aux_sym_add_token1] = ACTIONS(451),
    [aux_sym_arg_token1] = ACTIONS(451),
    [aux_sym_cmd_token1] = ACTIONS(451),
    [aux_sym_copy_token1] = ACTIONS(451),
    [aux_sym_entrypoint_token1] = ACTIONS(451),
    [aux_sym_env_token1] = ACTIONS(451),
    [aux_sym_expose_token1] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(451),
    [aux_sym_from_token1] = ACTIONS(451),
    [aux_sym_healthcheck_token1] = ACTIONS(451),
    [aux_sym_label_token1] = ACTIONS(451),
    [aux_sym_maintainer_token1] = ACTIONS(451),
    [aux_sym_onbuild_token1] = ACTIONS(451),
    [aux_sym_run_token1] = ACTIONS(451),
    [aux_sym_shell_token1] = ACTIONS(451),
    [aux_sym_stopsignal_token1] = ACTIONS(451),
    [aux_sym_user_token1] = ACTIONS(451),
    [anon_sym_DOLLAR] = ACTIONS(451),
    [aux_sym_volume_token1] = ACTIONS(451),
    [aux_sym_workdir_token1] = ACTIONS(451),
    [aux_sym__port_part_token1] = ACTIONS(451),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(451),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [120] = {
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
  [121] = {
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
  [122] = {
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
  [123] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [124] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_add_token1] = ACTIONS(187),
    [aux_sym_arg_token1] = ACTIONS(187),
    [aux_sym_cmd_token1] = ACTIONS(187),
    [aux_sym_copy_token1] = ACTIONS(187),
    [aux_sym_entrypoint_token1] = ACTIONS(187),
    [aux_sym_env_token1] = ACTIONS(187),
    [aux_sym_expose_token1] = ACTIONS(187),
    [aux_sym_from_token1] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(187),
    [aux_sym_healthcheck_token1] = ACTIONS(187),
    [aux_sym_label_token1] = ACTIONS(187),
    [aux_sym_maintainer_token1] = ACTIONS(187),
    [aux_sym_onbuild_token1] = ACTIONS(187),
    [aux_sym_run_token1] = ACTIONS(187),
    [aux_sym_shell_token1] = ACTIONS(187),
    [aux_sym_stopsignal_token1] = ACTIONS(187),
    [aux_sym_user_token1] = ACTIONS(187),
    [aux_sym_volume_token1] = ACTIONS(187),
    [aux_sym_workdir_token1] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym__space_no_newline] = ACTIONS(189),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_add_token1] = ACTIONS(269),
    [aux_sym_arg_token1] = ACTIONS(269),
    [aux_sym_cmd_token1] = ACTIONS(269),
    [aux_sym_copy_token1] = ACTIONS(269),
    [aux_sym_entrypoint_token1] = ACTIONS(269),
    [aux_sym_env_token1] = ACTIONS(269),
    [aux_sym_expose_token1] = ACTIONS(269),
    [aux_sym_from_token1] = ACTIONS(269),
    [aux_sym_healthcheck_token1] = ACTIONS(269),
    [aux_sym_label_token1] = ACTIONS(269),
    [aux_sym_maintainer_token1] = ACTIONS(269),
    [aux_sym_onbuild_token1] = ACTIONS(269),
    [aux_sym_run_token1] = ACTIONS(269),
    [aux_sym_shell_token1] = ACTIONS(269),
    [aux_sym_stopsignal_token1] = ACTIONS(269),
    [aux_sym_user_token1] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [aux_sym_volume_token1] = ACTIONS(269),
    [aux_sym_workdir_token1] = ACTIONS(269),
    [aux_sym_path_token1] = ACTIONS(274),
    [aux_sym_path_token2] = ACTIONS(274),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(269),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [127] = {
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
    [aux_sym_from_layer_token9] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [aux_sym__repository_start_token7] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [128] = {
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
    [aux_sym_from_layer_token5] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token5] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [129] = {
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
  [130] = {
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
  [131] = {
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
    [aux_sym__repository_start_token2] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [aux_sym__repository_start_token2] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [aux_sym_add_token1] = ACTIONS(333),
    [aux_sym_arg_token1] = ACTIONS(333),
    [aux_sym_cmd_token1] = ACTIONS(333),
    [aux_sym_copy_token1] = ACTIONS(333),
    [aux_sym_entrypoint_token1] = ACTIONS(333),
    [aux_sym_env_token1] = ACTIONS(333),
    [aux_sym_expose_token1] = ACTIONS(333),
    [aux_sym_from_token1] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
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
  [134] = {
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
  [135] = {
    [aux_sym__anything] = STATE(143),
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
    [aux_sym__labels_repeat1] = STATE(147),
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
    [ts_builtin_sym_end] = ACTIONS(497),
    [aux_sym_add_token1] = ACTIONS(497),
    [aux_sym_arg_token1] = ACTIONS(497),
    [aux_sym_cmd_token1] = ACTIONS(497),
    [aux_sym_copy_token1] = ACTIONS(497),
    [aux_sym_entrypoint_token1] = ACTIONS(497),
    [aux_sym_env_token1] = ACTIONS(497),
    [aux_sym_expose_token1] = ACTIONS(497),
    [aux_sym_from_token1] = ACTIONS(497),
    [anon_sym_AT] = ACTIONS(499),
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
    [sym__space_no_newline] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [aux_sym_add_token1] = ACTIONS(503),
    [aux_sym_arg_token1] = ACTIONS(503),
    [aux_sym_cmd_token1] = ACTIONS(503),
    [aux_sym_copy_token1] = ACTIONS(503),
    [aux_sym_entrypoint_token1] = ACTIONS(503),
    [aux_sym_env_token1] = ACTIONS(503),
    [aux_sym_expose_token1] = ACTIONS(503),
    [aux_sym_from_token1] = ACTIONS(503),
    [anon_sym_AT] = ACTIONS(505),
    [aux_sym_healthcheck_token1] = ACTIONS(503),
    [aux_sym_label_token1] = ACTIONS(503),
    [aux_sym_maintainer_token1] = ACTIONS(503),
    [aux_sym_onbuild_token1] = ACTIONS(503),
    [aux_sym_run_token1] = ACTIONS(503),
    [aux_sym_shell_token1] = ACTIONS(503),
    [aux_sym_stopsignal_token1] = ACTIONS(503),
    [aux_sym_user_token1] = ACTIONS(503),
    [aux_sym_volume_token1] = ACTIONS(503),
    [aux_sym_workdir_token1] = ACTIONS(503),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(503),
    [sym__space_no_newline] = ACTIONS(507),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [aux_sym__env_pairs_repeat1] = STATE(139),
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
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_add_token1] = ACTIONS(319),
    [aux_sym_arg_token1] = ACTIONS(319),
    [aux_sym_cmd_token1] = ACTIONS(319),
    [aux_sym_copy_token1] = ACTIONS(319),
    [aux_sym_entrypoint_token1] = ACTIONS(319),
    [aux_sym_env_token1] = ACTIONS(319),
    [aux_sym_expose_token1] = ACTIONS(319),
    [aux_sym_from_token1] = ACTIONS(319),
    [anon_sym_AT] = ACTIONS(319),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(319),
    [sym__space_no_newline] = ACTIONS(321),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
    [aux_sym__anything] = STATE(141),
    [ts_builtin_sym_end] = ACTIONS(514),
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
    [sym__blank_line] = ACTIONS(514),
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
    [anon_sym_EQ2] = ACTIONS(523),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(521),
    [sym__space_no_newline] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
    [aux_sym__anything] = STATE(143),
    [ts_builtin_sym_end] = ACTIONS(514),
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
    [aux_sym__anything_token1] = ACTIONS(527),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(514),
    [sym_comment] = ACTIONS(514),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
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
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(261),
    [aux_sym_arg_token1] = ACTIONS(261),
    [aux_sym_cmd_token1] = ACTIONS(261),
    [aux_sym_copy_token1] = ACTIONS(261),
    [aux_sym_entrypoint_token1] = ACTIONS(261),
    [aux_sym_env_token1] = ACTIONS(261),
    [aux_sym_expose_token1] = ACTIONS(261),
    [aux_sym_from_token1] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
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
  [146] = {
    [aux_sym__anything] = STATE(141),
    [ts_builtin_sym_end] = ACTIONS(530),
    [aux_sym_add_token1] = ACTIONS(532),
    [aux_sym_arg_token1] = ACTIONS(532),
    [aux_sym_cmd_token1] = ACTIONS(532),
    [aux_sym_copy_token1] = ACTIONS(532),
    [aux_sym_entrypoint_token1] = ACTIONS(532),
    [aux_sym_env_token1] = ACTIONS(532),
    [aux_sym_expose_token1] = ACTIONS(532),
    [aux_sym_from_token1] = ACTIONS(532),
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
    [aux_sym__anything_token1] = ACTIONS(534),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(530),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [aux_sym__labels_repeat1] = STATE(147),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(536),
    [sym__space_no_newline] = ACTIONS(538),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
    [aux_sym__env_pairs_repeat1] = STATE(150),
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
    [sym__space_no_newline] = ACTIONS(541),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [aux_sym_add_token1] = ACTIONS(543),
    [aux_sym_arg_token1] = ACTIONS(543),
    [aux_sym_cmd_token1] = ACTIONS(543),
    [aux_sym_copy_token1] = ACTIONS(543),
    [aux_sym_entrypoint_token1] = ACTIONS(543),
    [aux_sym_env_token1] = ACTIONS(543),
    [aux_sym_expose_token1] = ACTIONS(543),
    [aux_sym_from_token1] = ACTIONS(543),
    [aux_sym_healthcheck_token1] = ACTIONS(543),
    [aux_sym_label_token1] = ACTIONS(543),
    [aux_sym_maintainer_token1] = ACTIONS(543),
    [aux_sym_onbuild_token1] = ACTIONS(543),
    [aux_sym_run_token1] = ACTIONS(543),
    [aux_sym_shell_token1] = ACTIONS(543),
    [aux_sym_stopsignal_token1] = ACTIONS(543),
    [aux_sym_user_token1] = ACTIONS(543),
    [aux_sym_volume_token1] = ACTIONS(543),
    [aux_sym_workdir_token1] = ACTIONS(543),
    [anon_sym_EQ2] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(543),
    [sym__space_no_newline] = ACTIONS(545),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [aux_sym__env_pairs_repeat1] = STATE(139),
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
    [sym__space_no_newline] = ACTIONS(541),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
    [aux_sym__anything] = STATE(141),
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
    [aux_sym__anything_token1] = ACTIONS(534),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(549),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(553),
    [aux_sym_add_token1] = ACTIONS(553),
    [aux_sym_arg_token1] = ACTIONS(553),
    [aux_sym_cmd_token1] = ACTIONS(553),
    [aux_sym_copy_token1] = ACTIONS(553),
    [aux_sym_entrypoint_token1] = ACTIONS(553),
    [aux_sym_env_token1] = ACTIONS(553),
    [aux_sym_expose_token1] = ACTIONS(553),
    [aux_sym_from_token1] = ACTIONS(553),
    [anon_sym_AT] = ACTIONS(553),
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
    [sym__space_no_newline] = ACTIONS(555),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [153] = {
    [aux_sym__anything] = STATE(141),
    [ts_builtin_sym_end] = ACTIONS(557),
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
    [aux_sym__anything_token1] = ACTIONS(534),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(557),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
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
  [155] = {
    [aux_sym__labels_repeat1] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(561),
    [aux_sym_add_token1] = ACTIONS(561),
    [aux_sym_arg_token1] = ACTIONS(561),
    [aux_sym_cmd_token1] = ACTIONS(561),
    [aux_sym_copy_token1] = ACTIONS(561),
    [aux_sym_entrypoint_token1] = ACTIONS(561),
    [aux_sym_env_token1] = ACTIONS(561),
    [aux_sym_expose_token1] = ACTIONS(561),
    [aux_sym_from_token1] = ACTIONS(561),
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
    [sym__space_no_newline] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(563),
    [aux_sym_add_token1] = ACTIONS(563),
    [aux_sym_arg_token1] = ACTIONS(563),
    [aux_sym_cmd_token1] = ACTIONS(563),
    [aux_sym_copy_token1] = ACTIONS(563),
    [aux_sym_entrypoint_token1] = ACTIONS(563),
    [aux_sym_env_token1] = ACTIONS(563),
    [aux_sym_expose_token1] = ACTIONS(563),
    [aux_sym_from_token1] = ACTIONS(563),
    [anon_sym_AT] = ACTIONS(563),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(563),
    [sym__space_no_newline] = ACTIONS(565),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(567),
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
    [aux_sym__anything_token1] = ACTIONS(569),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(567),
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
    [sym__space_no_newline] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [160] = {
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
  [163] = {
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
    [sym__space_no_newline] = ACTIONS(369),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [164] = {
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
  [165] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(583),
    [sym__space_no_newline] = ACTIONS(585),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [166] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(587),
    [sym__space_no_newline] = ACTIONS(589),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(567),
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
    [aux_sym__anything_token1] = ACTIONS(569),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(567),
    [sym_comment] = ACTIONS(567),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(536),
    [sym__space_no_newline] = ACTIONS(591),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(593),
    [aux_sym_add_token1] = ACTIONS(593),
    [aux_sym_arg_token1] = ACTIONS(593),
    [aux_sym_cmd_token1] = ACTIONS(593),
    [aux_sym_copy_token1] = ACTIONS(593),
    [aux_sym_entrypoint_token1] = ACTIONS(593),
    [aux_sym_env_token1] = ACTIONS(593),
    [aux_sym_expose_token1] = ACTIONS(593),
    [aux_sym_from_token1] = ACTIONS(593),
    [anon_sym_COLON] = ACTIONS(595),
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
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [aux_sym_add_token1] = ACTIONS(503),
    [aux_sym_arg_token1] = ACTIONS(503),
    [aux_sym_cmd_token1] = ACTIONS(503),
    [aux_sym_copy_token1] = ACTIONS(503),
    [aux_sym_entrypoint_token1] = ACTIONS(503),
    [aux_sym_env_token1] = ACTIONS(503),
    [aux_sym_expose_token1] = ACTIONS(503),
    [aux_sym_from_token1] = ACTIONS(503),
    [aux_sym_healthcheck_token1] = ACTIONS(503),
    [aux_sym_label_token1] = ACTIONS(503),
    [aux_sym_maintainer_token1] = ACTIONS(503),
    [aux_sym_onbuild_token1] = ACTIONS(503),
    [aux_sym_run_token1] = ACTIONS(503),
    [aux_sym_shell_token1] = ACTIONS(503),
    [aux_sym_stopsignal_token1] = ACTIONS(503),
    [aux_sym_user_token1] = ACTIONS(503),
    [aux_sym_volume_token1] = ACTIONS(503),
    [aux_sym_workdir_token1] = ACTIONS(503),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(503),
    [sym__space_no_newline] = ACTIONS(507),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(593),
    [aux_sym_add_token1] = ACTIONS(593),
    [aux_sym_arg_token1] = ACTIONS(593),
    [aux_sym_cmd_token1] = ACTIONS(593),
    [aux_sym_copy_token1] = ACTIONS(593),
    [aux_sym_entrypoint_token1] = ACTIONS(593),
    [aux_sym_env_token1] = ACTIONS(593),
    [aux_sym_expose_token1] = ACTIONS(593),
    [aux_sym_from_token1] = ACTIONS(593),
    [anon_sym_COLON] = ACTIONS(597),
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
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(599),
    [aux_sym_add_token1] = ACTIONS(599),
    [aux_sym_arg_token1] = ACTIONS(599),
    [aux_sym_cmd_token1] = ACTIONS(599),
    [aux_sym_copy_token1] = ACTIONS(599),
    [aux_sym_entrypoint_token1] = ACTIONS(599),
    [aux_sym_env_token1] = ACTIONS(599),
    [aux_sym_expose_token1] = ACTIONS(599),
    [aux_sym_from_token1] = ACTIONS(599),
    [anon_sym_COLON] = ACTIONS(599),
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
  [173] = {
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
  [174] = {
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
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(603),
    [aux_sym_add_token1] = ACTIONS(603),
    [aux_sym_arg_token1] = ACTIONS(603),
    [anon_sym_EQ] = ACTIONS(605),
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
  [176] = {
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
  [177] = {
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
  [178] = {
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
    [sym__space_no_newline] = ACTIONS(617),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [179] = {
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
    [sym__space_no_newline] = ACTIONS(619),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [180] = {
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
    [sym__space_no_newline] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [aux_sym_add_token1] = ACTIONS(503),
    [aux_sym_arg_token1] = ACTIONS(503),
    [aux_sym_cmd_token1] = ACTIONS(503),
    [aux_sym_copy_token1] = ACTIONS(503),
    [aux_sym_entrypoint_token1] = ACTIONS(503),
    [aux_sym_env_token1] = ACTIONS(503),
    [aux_sym_expose_token1] = ACTIONS(503),
    [aux_sym_from_token1] = ACTIONS(503),
    [aux_sym_healthcheck_token1] = ACTIONS(503),
    [aux_sym_label_token1] = ACTIONS(503),
    [aux_sym_maintainer_token1] = ACTIONS(503),
    [aux_sym_onbuild_token1] = ACTIONS(503),
    [aux_sym_run_token1] = ACTIONS(503),
    [aux_sym_shell_token1] = ACTIONS(503),
    [aux_sym_stopsignal_token1] = ACTIONS(503),
    [aux_sym_user_token1] = ACTIONS(503),
    [aux_sym_volume_token1] = ACTIONS(503),
    [aux_sym_workdir_token1] = ACTIONS(503),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(503),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [182] = {
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
  [183] = {
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
  [184] = {
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
  [185] = {
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
  [186] = {
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
  [189] = {
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
  [190] = {
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
  [191] = {
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
  [192] = {
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
  [193] = {
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
  [194] = {
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
  [195] = {
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
  [196] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(583),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [197] = {
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
  [198] = {
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
  [199] = {
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
  [200] = {
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
  [203] = {
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
  [204] = {
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
  [205] = {
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
  [206] = {
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
  [207] = {
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
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_add_token1] = ACTIONS(363),
    [aux_sym_arg_token1] = ACTIONS(363),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_copy_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_env_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
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
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(399),
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
    [aux_sym_volume_token1] = ACTIONS(399),
    [aux_sym_workdir_token1] = ACTIONS(399),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(399),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [213] = {
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
  [214] = {
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
  [215] = {
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
    [aux_sym_volume_token1] = ACTIONS(267),
    [aux_sym_workdir_token1] = ACTIONS(267),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [216] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [217] = {
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
  [218] = {
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
  [219] = {
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
  [220] = {
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
  [221] = {
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
  [222] = {
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
  [223] = {
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
  [224] = {
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
  [225] = {
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
  [226] = {
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
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(683),
    [aux_sym_add_token1] = ACTIONS(683),
    [aux_sym_arg_token1] = ACTIONS(683),
    [aux_sym_cmd_token1] = ACTIONS(683),
    [aux_sym_copy_token1] = ACTIONS(683),
    [aux_sym_entrypoint_token1] = ACTIONS(683),
    [aux_sym_env_token1] = ACTIONS(683),
    [aux_sym_expose_token1] = ACTIONS(683),
    [aux_sym_from_token1] = ACTIONS(683),
    [aux_sym_healthcheck_token1] = ACTIONS(683),
    [aux_sym_label_token1] = ACTIONS(683),
    [aux_sym_maintainer_token1] = ACTIONS(683),
    [aux_sym_onbuild_token1] = ACTIONS(683),
    [aux_sym_run_token1] = ACTIONS(683),
    [aux_sym_shell_token1] = ACTIONS(683),
    [aux_sym_stopsignal_token1] = ACTIONS(683),
    [aux_sym_user_token1] = ACTIONS(683),
    [aux_sym_volume_token1] = ACTIONS(683),
    [aux_sym_workdir_token1] = ACTIONS(683),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(683),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(685),
    [aux_sym_add_token1] = ACTIONS(685),
    [aux_sym_arg_token1] = ACTIONS(685),
    [aux_sym_cmd_token1] = ACTIONS(685),
    [aux_sym_copy_token1] = ACTIONS(685),
    [aux_sym_entrypoint_token1] = ACTIONS(685),
    [aux_sym_env_token1] = ACTIONS(685),
    [aux_sym_expose_token1] = ACTIONS(685),
    [aux_sym_from_token1] = ACTIONS(685),
    [aux_sym_healthcheck_token1] = ACTIONS(685),
    [aux_sym_label_token1] = ACTIONS(685),
    [aux_sym_maintainer_token1] = ACTIONS(685),
    [aux_sym_onbuild_token1] = ACTIONS(685),
    [aux_sym_run_token1] = ACTIONS(685),
    [aux_sym_shell_token1] = ACTIONS(685),
    [aux_sym_stopsignal_token1] = ACTIONS(685),
    [aux_sym_user_token1] = ACTIONS(685),
    [aux_sym_volume_token1] = ACTIONS(685),
    [aux_sym_workdir_token1] = ACTIONS(685),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(685),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [229] = {
    [ts_builtin_sym_end] = ACTIONS(687),
    [aux_sym_add_token1] = ACTIONS(687),
    [aux_sym_arg_token1] = ACTIONS(687),
    [aux_sym_cmd_token1] = ACTIONS(687),
    [aux_sym_copy_token1] = ACTIONS(687),
    [aux_sym_entrypoint_token1] = ACTIONS(687),
    [aux_sym_env_token1] = ACTIONS(687),
    [aux_sym_expose_token1] = ACTIONS(687),
    [aux_sym_from_token1] = ACTIONS(687),
    [aux_sym_healthcheck_token1] = ACTIONS(687),
    [aux_sym_label_token1] = ACTIONS(687),
    [aux_sym_maintainer_token1] = ACTIONS(687),
    [aux_sym_onbuild_token1] = ACTIONS(687),
    [aux_sym_run_token1] = ACTIONS(687),
    [aux_sym_shell_token1] = ACTIONS(687),
    [aux_sym_stopsignal_token1] = ACTIONS(687),
    [aux_sym_user_token1] = ACTIONS(687),
    [aux_sym_volume_token1] = ACTIONS(687),
    [aux_sym_workdir_token1] = ACTIONS(687),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(687),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [230] = {
    [sym__hc_interval] = STATE(233),
    [sym__hc_timeout] = STATE(233),
    [sym__hc_start_period] = STATE(233),
    [sym__hc_retries] = STATE(233),
    [sym__hc_options] = STATE(233),
    [sym__hc_command] = STATE(217),
    [aux_sym_healthcheck_repeat1] = STATE(233),
    [sym_hc_none] = ACTIONS(689),
    [anon_sym_DASH_DASHinterval] = ACTIONS(691),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(693),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(695),
    [anon_sym_DASH_DASHretries] = ACTIONS(697),
    [aux_sym__hc_command_token1] = ACTIONS(699),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [231] = {
    [sym_repository] = STATE(263),
    [sym__repository_start] = STATE(240),
    [sym_image] = STATE(120),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(701),
    [anon_sym_DOLLAR] = ACTIONS(703),
    [aux_sym_from_layer_token5] = ACTIONS(705),
    [aux_sym_from_layer_token9] = ACTIONS(707),
    [aux_sym_from_layer_token13] = ACTIONS(709),
    [aux_sym_platform_token1] = ACTIONS(711),
    [aux_sym__repository_start_token1] = ACTIONS(703),
    [aux_sym__repository_start_token4] = ACTIONS(705),
    [aux_sym__repository_start_token6] = ACTIONS(707),
    [aux_sym__repository_start_token8] = ACTIONS(709),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [232] = {
    [sym_repository] = STATE(258),
    [sym__repository_start] = STATE(240),
    [sym_image] = STATE(122),
    [anon_sym_DOLLAR] = ACTIONS(703),
    [aux_sym_from_layer_token5] = ACTIONS(705),
    [aux_sym_from_layer_token9] = ACTIONS(707),
    [aux_sym_from_layer_token13] = ACTIONS(709),
    [aux_sym_platform_token1] = ACTIONS(711),
    [aux_sym__repository_start_token1] = ACTIONS(703),
    [aux_sym__repository_start_token4] = ACTIONS(705),
    [aux_sym__repository_start_token6] = ACTIONS(707),
    [aux_sym__repository_start_token8] = ACTIONS(709),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [233] = {
    [sym__hc_interval] = STATE(246),
    [sym__hc_timeout] = STATE(246),
    [sym__hc_start_period] = STATE(246),
    [sym__hc_retries] = STATE(246),
    [sym__hc_options] = STATE(246),
    [sym__hc_command] = STATE(201),
    [aux_sym_healthcheck_repeat1] = STATE(246),
    [anon_sym_DASH_DASHinterval] = ACTIONS(691),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(693),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(695),
    [anon_sym_DASH_DASHretries] = ACTIONS(697),
    [aux_sym__hc_command_token1] = ACTIONS(699),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [234] = {
    [sym__chown] = STATE(251),
    [sym__from_layer] = STATE(251),
    [sym_path] = STATE(83),
    [aux_sym__paths] = STATE(45),
    [aux_sym_copy_repeat1] = STATE(251),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(713),
    [aux_sym__from_layer_token1] = ACTIONS(715),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(717),
    [sym_line_continuation] = ACTIONS(5),
  },
  [235] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym_mapped_no_lhs] = STATE(213),
    [sym__port] = STATE(95),
    [sym_port] = STATE(95),
    [sym_port_range] = STATE(95),
    [sym__port_part] = STATE(90),
    [aux_sym_expose_repeat1] = STATE(6),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(719),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [aux_sym__port_part_token1] = ACTIONS(122),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [236] = {
    [sym__chown] = STATE(234),
    [sym__from_layer] = STATE(234),
    [sym_path] = STATE(83),
    [aux_sym__paths] = STATE(42),
    [aux_sym_copy_repeat1] = STATE(234),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(713),
    [aux_sym__from_layer_token1] = ACTIONS(715),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(721),
    [sym_line_continuation] = ACTIONS(5),
  },
  [237] = {
    [sym_digest] = STATE(170),
    [anon_sym_sha256_COLON] = ACTIONS(723),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_from_layer_token5] = ACTIONS(727),
    [aux_sym_from_layer_token9] = ACTIONS(729),
    [aux_sym_from_layer_token13] = ACTIONS(731),
    [aux_sym_platform_token1] = ACTIONS(733),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(727),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(731),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [238] = {
    [sym__repository_continued] = STATE(238),
    [aux_sym_repository_repeat1] = STATE(238),
    [anon_sym_DOLLAR] = ACTIONS(735),
    [aux_sym_from_layer_token5] = ACTIONS(738),
    [aux_sym_from_layer_token9] = ACTIONS(741),
    [aux_sym_from_layer_token13] = ACTIONS(744),
    [aux_sym_platform_token1] = ACTIONS(747),
    [aux_sym__repository_start_token1] = ACTIONS(735),
    [aux_sym__repository_start_token4] = ACTIONS(738),
    [aux_sym__repository_start_token6] = ACTIONS(741),
    [aux_sym__repository_start_token8] = ACTIONS(744),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [239] = {
    [sym_digest] = STATE(176),
    [anon_sym_sha256_COLON] = ACTIONS(750),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_from_layer_token5] = ACTIONS(727),
    [aux_sym_from_layer_token9] = ACTIONS(729),
    [aux_sym_from_layer_token13] = ACTIONS(731),
    [aux_sym_platform_token1] = ACTIONS(733),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(727),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(731),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [240] = {
    [sym__repository_continued] = STATE(244),
    [aux_sym_repository_repeat1] = STATE(244),
    [anon_sym_DOLLAR] = ACTIONS(752),
    [aux_sym_from_layer_token5] = ACTIONS(755),
    [aux_sym_from_layer_token9] = ACTIONS(758),
    [aux_sym_from_layer_token13] = ACTIONS(761),
    [aux_sym_platform_token1] = ACTIONS(764),
    [aux_sym__repository_start_token1] = ACTIONS(752),
    [aux_sym__repository_start_token4] = ACTIONS(755),
    [aux_sym__repository_start_token6] = ACTIONS(758),
    [aux_sym__repository_start_token8] = ACTIONS(761),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [241] = {
    [sym_digest] = STATE(160),
    [anon_sym_sha256_COLON] = ACTIONS(767),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_from_layer_token5] = ACTIONS(727),
    [aux_sym_from_layer_token9] = ACTIONS(729),
    [aux_sym_from_layer_token13] = ACTIONS(731),
    [aux_sym_platform_token1] = ACTIONS(733),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(727),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(731),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [242] = {
    [sym_digest] = STATE(159),
    [anon_sym_sha256_COLON] = ACTIONS(769),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_from_layer_token5] = ACTIONS(727),
    [aux_sym_from_layer_token9] = ACTIONS(729),
    [aux_sym_from_layer_token13] = ACTIONS(731),
    [aux_sym_platform_token1] = ACTIONS(733),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(727),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(731),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [243] = {
    [sym_digest] = STATE(165),
    [anon_sym_sha256_COLON] = ACTIONS(771),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_from_layer_token5] = ACTIONS(727),
    [aux_sym_from_layer_token9] = ACTIONS(729),
    [aux_sym_from_layer_token13] = ACTIONS(731),
    [aux_sym_platform_token1] = ACTIONS(733),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(727),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(731),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [244] = {
    [sym__repository_continued] = STATE(238),
    [aux_sym_repository_repeat1] = STATE(238),
    [anon_sym_DOLLAR] = ACTIONS(773),
    [aux_sym_from_layer_token5] = ACTIONS(776),
    [aux_sym_from_layer_token9] = ACTIONS(779),
    [aux_sym_from_layer_token13] = ACTIONS(782),
    [aux_sym_platform_token1] = ACTIONS(785),
    [aux_sym__repository_start_token1] = ACTIONS(773),
    [aux_sym__repository_start_token4] = ACTIONS(776),
    [aux_sym__repository_start_token6] = ACTIONS(779),
    [aux_sym__repository_start_token8] = ACTIONS(782),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [245] = {
    [sym_digest] = STATE(162),
    [anon_sym_sha256_COLON] = ACTIONS(788),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_from_layer_token5] = ACTIONS(727),
    [aux_sym_from_layer_token9] = ACTIONS(729),
    [aux_sym_from_layer_token13] = ACTIONS(731),
    [aux_sym_platform_token1] = ACTIONS(733),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(727),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(731),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [246] = {
    [sym__hc_interval] = STATE(246),
    [sym__hc_timeout] = STATE(246),
    [sym__hc_start_period] = STATE(246),
    [sym__hc_retries] = STATE(246),
    [sym__hc_options] = STATE(246),
    [aux_sym_healthcheck_repeat1] = STATE(246),
    [anon_sym_DASH_DASHinterval] = ACTIONS(790),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(793),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(796),
    [anon_sym_DASH_DASHretries] = ACTIONS(799),
    [aux_sym__hc_command_token1] = ACTIONS(802),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [247] = {
    [sym_as_name] = STATE(216),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(806),
    [aux_sym_from_layer_token9] = ACTIONS(808),
    [aux_sym_from_layer_token13] = ACTIONS(810),
    [aux_sym_platform_token1] = ACTIONS(812),
    [aux_sym__repository_start_token1] = ACTIONS(804),
    [aux_sym__repository_start_token4] = ACTIONS(806),
    [aux_sym__repository_start_token6] = ACTIONS(808),
    [aux_sym__repository_start_token8] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [248] = {
    [sym_as_name] = STATE(196),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(806),
    [aux_sym_from_layer_token9] = ACTIONS(808),
    [aux_sym_from_layer_token13] = ACTIONS(810),
    [aux_sym_platform_token1] = ACTIONS(812),
    [aux_sym__repository_start_token1] = ACTIONS(804),
    [aux_sym__repository_start_token4] = ACTIONS(806),
    [aux_sym__repository_start_token6] = ACTIONS(808),
    [aux_sym__repository_start_token8] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [249] = {
    [sym_as_name] = STATE(182),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(806),
    [aux_sym_from_layer_token9] = ACTIONS(808),
    [aux_sym_from_layer_token13] = ACTIONS(810),
    [aux_sym_platform_token1] = ACTIONS(812),
    [aux_sym__repository_start_token1] = ACTIONS(804),
    [aux_sym__repository_start_token4] = ACTIONS(806),
    [aux_sym__repository_start_token6] = ACTIONS(808),
    [aux_sym__repository_start_token8] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [250] = {
    [sym_digest] = STATE(176),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_from_layer_token5] = ACTIONS(727),
    [aux_sym_from_layer_token9] = ACTIONS(729),
    [aux_sym_from_layer_token13] = ACTIONS(731),
    [aux_sym_platform_token1] = ACTIONS(733),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(727),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(731),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [251] = {
    [sym__chown] = STATE(251),
    [sym__from_layer] = STATE(251),
    [aux_sym_copy_repeat1] = STATE(251),
    [anon_sym_DQUOTE] = ACTIONS(814),
    [anon_sym_DOLLAR] = ACTIONS(814),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(816),
    [aux_sym__from_layer_token1] = ACTIONS(819),
    [aux_sym_path_token1] = ACTIONS(822),
    [aux_sym_path_token2] = ACTIONS(822),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(814),
    [sym_line_continuation] = ACTIONS(5),
  },
  [252] = {
    [sym_as_name] = STATE(187),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(806),
    [aux_sym_from_layer_token9] = ACTIONS(808),
    [aux_sym_from_layer_token13] = ACTIONS(810),
    [aux_sym_platform_token1] = ACTIONS(812),
    [aux_sym__repository_start_token1] = ACTIONS(804),
    [aux_sym__repository_start_token4] = ACTIONS(806),
    [aux_sym__repository_start_token6] = ACTIONS(808),
    [aux_sym__repository_start_token8] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [253] = {
    [sym_digest] = STATE(170),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_from_layer_token5] = ACTIONS(727),
    [aux_sym_from_layer_token9] = ACTIONS(729),
    [aux_sym_from_layer_token13] = ACTIONS(731),
    [aux_sym_platform_token1] = ACTIONS(733),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(727),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(731),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [254] = {
    [sym_digest] = STATE(160),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_from_layer_token5] = ACTIONS(727),
    [aux_sym_from_layer_token9] = ACTIONS(729),
    [aux_sym_from_layer_token13] = ACTIONS(731),
    [aux_sym_platform_token1] = ACTIONS(733),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(727),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(731),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [255] = {
    [sym_as_name] = STATE(191),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(806),
    [aux_sym_from_layer_token9] = ACTIONS(808),
    [aux_sym_from_layer_token13] = ACTIONS(810),
    [aux_sym_platform_token1] = ACTIONS(812),
    [aux_sym__repository_start_token1] = ACTIONS(804),
    [aux_sym__repository_start_token4] = ACTIONS(806),
    [aux_sym__repository_start_token6] = ACTIONS(808),
    [aux_sym__repository_start_token8] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [256] = {
    [sym_as_name] = STATE(224),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(806),
    [aux_sym_from_layer_token9] = ACTIONS(808),
    [aux_sym_from_layer_token13] = ACTIONS(810),
    [aux_sym_platform_token1] = ACTIONS(812),
    [aux_sym__repository_start_token1] = ACTIONS(804),
    [aux_sym__repository_start_token4] = ACTIONS(806),
    [aux_sym__repository_start_token6] = ACTIONS(808),
    [aux_sym__repository_start_token8] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [257] = {
    [sym_tag] = STATE(138),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym_from_layer_token5] = ACTIONS(826),
    [aux_sym_from_layer_token9] = ACTIONS(828),
    [aux_sym_from_layer_token13] = ACTIONS(830),
    [aux_sym_platform_token1] = ACTIONS(832),
    [aux_sym__repository_start_token1] = ACTIONS(824),
    [aux_sym__repository_start_token4] = ACTIONS(826),
    [aux_sym__repository_start_token6] = ACTIONS(828),
    [aux_sym__repository_start_token8] = ACTIONS(830),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [258] = {
    [sym_image] = STATE(130),
    [anon_sym_DOLLAR] = ACTIONS(834),
    [aux_sym_from_layer_token5] = ACTIONS(836),
    [aux_sym_from_layer_token9] = ACTIONS(838),
    [aux_sym_from_layer_token13] = ACTIONS(840),
    [aux_sym_platform_token1] = ACTIONS(842),
    [aux_sym__repository_start_token1] = ACTIONS(834),
    [aux_sym__repository_start_token4] = ACTIONS(836),
    [aux_sym__repository_start_token6] = ACTIONS(838),
    [aux_sym__repository_start_token8] = ACTIONS(840),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [259] = {
    [sym_from_layer] = STATE(482),
    [anon_sym_DOLLAR] = ACTIONS(844),
    [aux_sym_from_layer_token1] = ACTIONS(846),
    [aux_sym_from_layer_token2] = ACTIONS(844),
    [aux_sym_from_layer_token5] = ACTIONS(848),
    [aux_sym_from_layer_token7] = ACTIONS(848),
    [aux_sym_from_layer_token9] = ACTIONS(850),
    [aux_sym_from_layer_token11] = ACTIONS(850),
    [aux_sym_from_layer_token13] = ACTIONS(852),
    [aux_sym_from_layer_token15] = ACTIONS(852),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [260] = {
    [sym_tag] = STATE(154),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym_from_layer_token5] = ACTIONS(826),
    [aux_sym_from_layer_token9] = ACTIONS(828),
    [aux_sym_from_layer_token13] = ACTIONS(830),
    [aux_sym_platform_token1] = ACTIONS(832),
    [aux_sym__repository_start_token1] = ACTIONS(824),
    [aux_sym__repository_start_token4] = ACTIONS(826),
    [aux_sym__repository_start_token6] = ACTIONS(828),
    [aux_sym__repository_start_token8] = ACTIONS(830),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [261] = {
    [sym_digest] = STATE(159),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_from_layer_token5] = ACTIONS(727),
    [aux_sym_from_layer_token9] = ACTIONS(729),
    [aux_sym_from_layer_token13] = ACTIONS(731),
    [aux_sym_platform_token1] = ACTIONS(733),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(727),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(731),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [262] = {
    [sym_as_name] = STATE(223),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(806),
    [aux_sym_from_layer_token9] = ACTIONS(808),
    [aux_sym_from_layer_token13] = ACTIONS(810),
    [aux_sym_platform_token1] = ACTIONS(812),
    [aux_sym__repository_start_token1] = ACTIONS(804),
    [aux_sym__repository_start_token4] = ACTIONS(806),
    [aux_sym__repository_start_token6] = ACTIONS(808),
    [aux_sym__repository_start_token8] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [263] = {
    [sym_image] = STATE(134),
    [anon_sym_DOLLAR] = ACTIONS(834),
    [aux_sym_from_layer_token5] = ACTIONS(836),
    [aux_sym_from_layer_token9] = ACTIONS(838),
    [aux_sym_from_layer_token13] = ACTIONS(840),
    [aux_sym_platform_token1] = ACTIONS(842),
    [aux_sym__repository_start_token1] = ACTIONS(834),
    [aux_sym__repository_start_token4] = ACTIONS(836),
    [aux_sym__repository_start_token6] = ACTIONS(838),
    [aux_sym__repository_start_token8] = ACTIONS(840),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [264] = {
    [sym_digest] = STATE(180),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_from_layer_token5] = ACTIONS(727),
    [aux_sym_from_layer_token9] = ACTIONS(729),
    [aux_sym_from_layer_token13] = ACTIONS(731),
    [aux_sym_platform_token1] = ACTIONS(733),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(727),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(731),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [265] = {
    [sym_tag] = STATE(137),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym_from_layer_token5] = ACTIONS(826),
    [aux_sym_from_layer_token9] = ACTIONS(828),
    [aux_sym_from_layer_token13] = ACTIONS(830),
    [aux_sym_platform_token1] = ACTIONS(832),
    [aux_sym__repository_start_token1] = ACTIONS(824),
    [aux_sym__repository_start_token4] = ACTIONS(826),
    [aux_sym__repository_start_token6] = ACTIONS(828),
    [aux_sym__repository_start_token8] = ACTIONS(830),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [266] = {
    [sym_tag] = STATE(144),
    [anon_sym_DOLLAR] = ACTIONS(824),
    [aux_sym_from_layer_token5] = ACTIONS(826),
    [aux_sym_from_layer_token9] = ACTIONS(828),
    [aux_sym_from_layer_token13] = ACTIONS(830),
    [aux_sym_platform_token1] = ACTIONS(832),
    [aux_sym__repository_start_token1] = ACTIONS(824),
    [aux_sym__repository_start_token4] = ACTIONS(826),
    [aux_sym__repository_start_token6] = ACTIONS(828),
    [aux_sym__repository_start_token8] = ACTIONS(830),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [267] = {
    [sym_as_name] = STATE(181),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(806),
    [aux_sym_from_layer_token9] = ACTIONS(808),
    [aux_sym_from_layer_token13] = ACTIONS(810),
    [aux_sym_platform_token1] = ACTIONS(812),
    [aux_sym__repository_start_token1] = ACTIONS(804),
    [aux_sym__repository_start_token4] = ACTIONS(806),
    [aux_sym__repository_start_token6] = ACTIONS(808),
    [aux_sym__repository_start_token8] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [268] = {
    [sym_digest] = STATE(165),
    [anon_sym_DOLLAR] = ACTIONS(725),
    [aux_sym_from_layer_token5] = ACTIONS(727),
    [aux_sym_from_layer_token9] = ACTIONS(729),
    [aux_sym_from_layer_token13] = ACTIONS(731),
    [aux_sym_platform_token1] = ACTIONS(733),
    [aux_sym__repository_start_token1] = ACTIONS(725),
    [aux_sym__repository_start_token4] = ACTIONS(727),
    [aux_sym__repository_start_token6] = ACTIONS(729),
    [aux_sym__repository_start_token8] = ACTIONS(731),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [269] = {
    [sym_as_name] = STATE(188),
    [anon_sym_DOLLAR] = ACTIONS(804),
    [aux_sym_from_layer_token5] = ACTIONS(806),
    [aux_sym_from_layer_token9] = ACTIONS(808),
    [aux_sym_from_layer_token13] = ACTIONS(810),
    [aux_sym_platform_token1] = ACTIONS(812),
    [aux_sym__repository_start_token1] = ACTIONS(804),
    [aux_sym__repository_start_token4] = ACTIONS(806),
    [aux_sym__repository_start_token6] = ACTIONS(808),
    [aux_sym__repository_start_token8] = ACTIONS(810),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [270] = {
    [sym__port_spec] = STATE(477),
    [sym_mapped_port] = STATE(477),
    [sym__port] = STATE(462),
    [sym_port] = STATE(456),
    [sym_port_range] = STATE(456),
    [sym__port_part] = STATE(410),
    [anon_sym_DQUOTE] = ACTIONS(854),
    [anon_sym_DOLLAR] = ACTIONS(856),
    [aux_sym__port_part_token1] = ACTIONS(858),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [271] = {
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_from_layer_token5] = ACTIONS(211),
    [aux_sym_from_layer_token9] = ACTIONS(211),
    [aux_sym_from_layer_token13] = ACTIONS(211),
    [aux_sym_platform_token1] = ACTIONS(213),
    [aux_sym__repository_start_token1] = ACTIONS(211),
    [aux_sym__repository_start_token4] = ACTIONS(211),
    [aux_sym__repository_start_token6] = ACTIONS(211),
    [aux_sym__repository_start_token8] = ACTIONS(211),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [272] = {
    [anon_sym_DOLLAR] = ACTIONS(860),
    [aux_sym_from_layer_token5] = ACTIONS(860),
    [aux_sym_from_layer_token9] = ACTIONS(860),
    [aux_sym_from_layer_token13] = ACTIONS(860),
    [aux_sym_platform_token1] = ACTIONS(862),
    [aux_sym__repository_start_token1] = ACTIONS(860),
    [aux_sym__repository_start_token4] = ACTIONS(860),
    [aux_sym__repository_start_token6] = ACTIONS(860),
    [aux_sym__repository_start_token8] = ACTIONS(860),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [273] = {
    [anon_sym_DOLLAR] = ACTIONS(864),
    [aux_sym_from_layer_token5] = ACTIONS(864),
    [aux_sym_from_layer_token9] = ACTIONS(864),
    [aux_sym_from_layer_token13] = ACTIONS(864),
    [aux_sym_platform_token1] = ACTIONS(866),
    [aux_sym__repository_start_token1] = ACTIONS(864),
    [aux_sym__repository_start_token4] = ACTIONS(864),
    [aux_sym__repository_start_token6] = ACTIONS(864),
    [aux_sym__repository_start_token8] = ACTIONS(864),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [274] = {
    [anon_sym_DOLLAR] = ACTIONS(868),
    [aux_sym_from_layer_token5] = ACTIONS(868),
    [aux_sym_from_layer_token9] = ACTIONS(868),
    [aux_sym_from_layer_token13] = ACTIONS(868),
    [aux_sym_platform_token1] = ACTIONS(870),
    [aux_sym__repository_start_token1] = ACTIONS(868),
    [aux_sym__repository_start_token4] = ACTIONS(868),
    [aux_sym__repository_start_token6] = ACTIONS(868),
    [aux_sym__repository_start_token8] = ACTIONS(868),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [275] = {
    [anon_sym_DOLLAR] = ACTIONS(872),
    [aux_sym_from_layer_token5] = ACTIONS(872),
    [aux_sym_from_layer_token9] = ACTIONS(872),
    [aux_sym_from_layer_token13] = ACTIONS(872),
    [aux_sym_platform_token1] = ACTIONS(874),
    [aux_sym__repository_start_token1] = ACTIONS(872),
    [aux_sym__repository_start_token4] = ACTIONS(872),
    [aux_sym__repository_start_token6] = ACTIONS(872),
    [aux_sym__repository_start_token8] = ACTIONS(872),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [276] = {
    [anon_sym_DOLLAR] = ACTIONS(876),
    [aux_sym_from_layer_token5] = ACTIONS(876),
    [aux_sym_from_layer_token9] = ACTIONS(876),
    [aux_sym_from_layer_token13] = ACTIONS(876),
    [aux_sym_platform_token1] = ACTIONS(878),
    [aux_sym__repository_start_token1] = ACTIONS(876),
    [aux_sym__repository_start_token4] = ACTIONS(876),
    [aux_sym__repository_start_token6] = ACTIONS(876),
    [aux_sym__repository_start_token8] = ACTIONS(876),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [277] = {
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_from_layer_token5] = ACTIONS(199),
    [aux_sym_from_layer_token9] = ACTIONS(199),
    [aux_sym_from_layer_token13] = ACTIONS(199),
    [aux_sym_platform_token1] = ACTIONS(201),
    [aux_sym__repository_start_token1] = ACTIONS(199),
    [aux_sym__repository_start_token4] = ACTIONS(199),
    [aux_sym__repository_start_token6] = ACTIONS(199),
    [aux_sym__repository_start_token8] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [278] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_from_layer_token5] = ACTIONS(195),
    [aux_sym_from_layer_token9] = ACTIONS(195),
    [aux_sym_from_layer_token13] = ACTIONS(195),
    [aux_sym_platform_token1] = ACTIONS(197),
    [aux_sym__repository_start_token1] = ACTIONS(195),
    [aux_sym__repository_start_token4] = ACTIONS(195),
    [aux_sym__repository_start_token6] = ACTIONS(195),
    [aux_sym__repository_start_token8] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [anon_sym_DOLLAR] = ACTIONS(880),
    [aux_sym_from_layer_token5] = ACTIONS(880),
    [aux_sym_from_layer_token9] = ACTIONS(880),
    [aux_sym_from_layer_token13] = ACTIONS(880),
    [aux_sym_platform_token1] = ACTIONS(882),
    [aux_sym__repository_start_token1] = ACTIONS(880),
    [aux_sym__repository_start_token4] = ACTIONS(880),
    [aux_sym__repository_start_token6] = ACTIONS(880),
    [aux_sym__repository_start_token8] = ACTIONS(880),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [280] = {
    [anon_sym_DOLLAR] = ACTIONS(884),
    [aux_sym_from_layer_token5] = ACTIONS(884),
    [aux_sym_from_layer_token9] = ACTIONS(884),
    [aux_sym_from_layer_token13] = ACTIONS(884),
    [aux_sym_platform_token1] = ACTIONS(886),
    [aux_sym__repository_start_token1] = ACTIONS(884),
    [aux_sym__repository_start_token4] = ACTIONS(884),
    [aux_sym__repository_start_token6] = ACTIONS(884),
    [aux_sym__repository_start_token8] = ACTIONS(884),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [281] = {
    [anon_sym_DOLLAR] = ACTIONS(888),
    [aux_sym_from_layer_token5] = ACTIONS(888),
    [aux_sym_from_layer_token9] = ACTIONS(888),
    [aux_sym_from_layer_token13] = ACTIONS(888),
    [aux_sym_platform_token1] = ACTIONS(890),
    [aux_sym__repository_start_token1] = ACTIONS(888),
    [aux_sym__repository_start_token4] = ACTIONS(888),
    [aux_sym__repository_start_token6] = ACTIONS(888),
    [aux_sym__repository_start_token8] = ACTIONS(888),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [282] = {
    [anon_sym_DOLLAR] = ACTIONS(892),
    [aux_sym_from_layer_token5] = ACTIONS(892),
    [aux_sym_from_layer_token9] = ACTIONS(892),
    [aux_sym_from_layer_token13] = ACTIONS(892),
    [aux_sym_platform_token1] = ACTIONS(894),
    [aux_sym__repository_start_token1] = ACTIONS(892),
    [aux_sym__repository_start_token4] = ACTIONS(892),
    [aux_sym__repository_start_token6] = ACTIONS(892),
    [aux_sym__repository_start_token8] = ACTIONS(892),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [283] = {
    [anon_sym_DOLLAR] = ACTIONS(896),
    [aux_sym_from_layer_token5] = ACTIONS(896),
    [aux_sym_from_layer_token9] = ACTIONS(896),
    [aux_sym_from_layer_token13] = ACTIONS(896),
    [aux_sym_platform_token1] = ACTIONS(898),
    [aux_sym__repository_start_token1] = ACTIONS(896),
    [aux_sym__repository_start_token4] = ACTIONS(896),
    [aux_sym__repository_start_token6] = ACTIONS(896),
    [aux_sym__repository_start_token8] = ACTIONS(896),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [284] = {
    [anon_sym_DOLLAR] = ACTIONS(900),
    [aux_sym_from_layer_token5] = ACTIONS(900),
    [aux_sym_from_layer_token9] = ACTIONS(900),
    [aux_sym_from_layer_token13] = ACTIONS(900),
    [aux_sym_platform_token1] = ACTIONS(902),
    [aux_sym__repository_start_token1] = ACTIONS(900),
    [aux_sym__repository_start_token4] = ACTIONS(900),
    [aux_sym__repository_start_token6] = ACTIONS(900),
    [aux_sym__repository_start_token8] = ACTIONS(900),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [285] = {
    [anon_sym_DOLLAR] = ACTIONS(904),
    [aux_sym_from_layer_token5] = ACTIONS(904),
    [aux_sym_from_layer_token9] = ACTIONS(904),
    [aux_sym_from_layer_token13] = ACTIONS(904),
    [aux_sym_platform_token1] = ACTIONS(906),
    [aux_sym__repository_start_token1] = ACTIONS(904),
    [aux_sym__repository_start_token4] = ACTIONS(904),
    [aux_sym__repository_start_token6] = ACTIONS(904),
    [aux_sym__repository_start_token8] = ACTIONS(904),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [sym_path] = STATE(83),
    [aux_sym__paths] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(908),
    [sym_line_continuation] = ACTIONS(5),
  },
  [287] = {
    [anon_sym_DQUOTE] = ACTIONS(910),
    [anon_sym_DOLLAR] = ACTIONS(910),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(910),
    [aux_sym__from_layer_token1] = ACTIONS(910),
    [aux_sym_path_token1] = ACTIONS(912),
    [aux_sym_path_token2] = ACTIONS(912),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(910),
    [sym_line_continuation] = ACTIONS(5),
  },
  [288] = {
    [sym_path] = STATE(83),
    [aux_sym__paths] = STATE(48),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(914),
    [sym_line_continuation] = ACTIONS(5),
  },
  [289] = {
    [sym__port] = STATE(119),
    [sym_port] = STATE(119),
    [sym_port_range] = STATE(119),
    [sym__port_part] = STATE(90),
    [anon_sym_DQUOTE] = ACTIONS(916),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [aux_sym__port_part_token1] = ACTIONS(122),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [290] = {
    [sym__port] = STATE(219),
    [sym_port] = STATE(219),
    [sym_port_range] = STATE(219),
    [sym__port_part] = STATE(90),
    [anon_sym_DQUOTE] = ACTIONS(916),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [aux_sym__port_part_token1] = ACTIONS(122),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [291] = {
    [sym__port] = STATE(487),
    [sym_port] = STATE(487),
    [sym_port_range] = STATE(487),
    [sym__port_part] = STATE(410),
    [anon_sym_DQUOTE] = ACTIONS(854),
    [anon_sym_DOLLAR] = ACTIONS(856),
    [aux_sym__port_part_token1] = ACTIONS(858),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [292] = {
    [anon_sym_DQUOTE] = ACTIONS(918),
    [anon_sym_DOLLAR] = ACTIONS(918),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(918),
    [aux_sym__from_layer_token1] = ACTIONS(918),
    [aux_sym_path_token1] = ACTIONS(920),
    [aux_sym_path_token2] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(918),
    [sym_line_continuation] = ACTIONS(5),
  },
  [293] = {
    [sym_user_name] = STATE(171),
    [sym_user_id] = STATE(169),
    [anon_sym_DQUOTE] = ACTIONS(922),
    [anon_sym_DOLLAR] = ACTIONS(924),
    [aux_sym_user_name_token1] = ACTIONS(926),
    [aux_sym_user_id_token1] = ACTIONS(928),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [294] = {
    [sym_chown] = STATE(491),
    [sym_user_name] = STATE(461),
    [sym_user_id] = STATE(452),
    [anon_sym_DOLLAR] = ACTIONS(930),
    [aux_sym_user_name_token1] = ACTIONS(932),
    [aux_sym_user_id_token1] = ACTIONS(934),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [295] = {
    [aux_sym__repository_start_repeat4] = STATE(361),
    [aux_sym_from_layer_token13] = ACTIONS(936),
    [anon_sym_SLASH] = ACTIONS(938),
    [aux_sym__repository_start_token3] = ACTIONS(940),
    [aux_sym__repository_start_token9] = ACTIONS(936),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [296] = {
    [aux_sym__repository_start_repeat1] = STATE(296),
    [anon_sym_DOLLAR] = ACTIONS(942),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(942),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [297] = {
    [sym_template_expr_less_than_equals] = STATE(517),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(350),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [298] = {
    [sym_template_expr_less_than_equals] = STATE(577),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(350),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [299] = {
    [sym_template_expr_less_than_equals] = STATE(571),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(350),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [300] = {
    [sym_template_expr_less_than_equals] = STATE(565),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(350),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [301] = {
    [sym_port] = STATE(556),
    [sym_port_range] = STATE(556),
    [sym__port_part] = STATE(410),
    [anon_sym_DOLLAR] = ACTIONS(856),
    [aux_sym__port_part_token1] = ACTIONS(858),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [302] = {
    [aux_sym_from_layer_repeat4] = STATE(336),
    [aux_sym_from_layer_token4] = ACTIONS(947),
    [aux_sym_from_layer_token13] = ACTIONS(949),
    [aux_sym_from_layer_token16] = ACTIONS(949),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(951),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [303] = {
    [sym_variable_default_value] = STATE(593),
    [sym_variable_this_or_null] = STATE(593),
    [anon_sym_RBRACE] = ACTIONS(953),
    [anon_sym_COLON_DASH] = ACTIONS(955),
    [anon_sym_COLON_PLUS] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [304] = {
    [aux_sym__repository_start_repeat1] = STATE(296),
    [anon_sym_DOLLAR] = ACTIONS(959),
    [anon_sym_SLASH] = ACTIONS(938),
    [aux_sym__repository_start_token2] = ACTIONS(959),
    [aux_sym__repository_start_token3] = ACTIONS(940),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [305] = {
    [aux_sym__repository_start_repeat2] = STATE(359),
    [aux_sym_from_layer_token5] = ACTIONS(961),
    [anon_sym_SLASH] = ACTIONS(938),
    [aux_sym__repository_start_token3] = ACTIONS(940),
    [aux_sym__repository_start_token5] = ACTIONS(961),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [306] = {
    [aux_sym__repository_start_repeat3] = STATE(360),
    [aux_sym_from_layer_token9] = ACTIONS(963),
    [anon_sym_SLASH] = ACTIONS(938),
    [aux_sym__repository_start_token3] = ACTIONS(940),
    [aux_sym__repository_start_token7] = ACTIONS(963),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [307] = {
    [aux_sym_from_layer_repeat3] = STATE(334),
    [aux_sym_from_layer_token4] = ACTIONS(947),
    [aux_sym_from_layer_token9] = ACTIONS(965),
    [aux_sym_from_layer_token12] = ACTIONS(965),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(951),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [308] = {
    [aux_sym_from_layer_repeat2] = STATE(332),
    [aux_sym_from_layer_token4] = ACTIONS(947),
    [aux_sym_from_layer_token5] = ACTIONS(967),
    [aux_sym_from_layer_token8] = ACTIONS(967),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(951),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [309] = {
    [sym_variable_default_value] = STATE(591),
    [sym_variable_this_or_null] = STATE(591),
    [anon_sym_RBRACE] = ACTIONS(969),
    [anon_sym_COLON_DASH] = ACTIONS(955),
    [anon_sym_COLON_PLUS] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [sym_variable_default_value] = STATE(589),
    [sym_variable_this_or_null] = STATE(589),
    [anon_sym_RBRACE] = ACTIONS(971),
    [anon_sym_COLON_DASH] = ACTIONS(955),
    [anon_sym_COLON_PLUS] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [311] = {
    [sym_variable_default_value] = STATE(587),
    [sym_variable_this_or_null] = STATE(587),
    [anon_sym_RBRACE] = ACTIONS(973),
    [anon_sym_COLON_DASH] = ACTIONS(955),
    [anon_sym_COLON_PLUS] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [312] = {
    [aux_sym_from_layer_repeat1] = STATE(330),
    [anon_sym_DOLLAR] = ACTIONS(975),
    [aux_sym_from_layer_token3] = ACTIONS(975),
    [aux_sym_from_layer_token4] = ACTIONS(947),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(951),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [313] = {
    [sym_variable_default_value] = STATE(585),
    [sym_variable_this_or_null] = STATE(585),
    [anon_sym_RBRACE] = ACTIONS(977),
    [anon_sym_COLON_DASH] = ACTIONS(955),
    [anon_sym_COLON_PLUS] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [314] = {
    [sym_variable_default_value] = STATE(583),
    [sym_variable_this_or_null] = STATE(583),
    [anon_sym_RBRACE] = ACTIONS(979),
    [anon_sym_COLON_DASH] = ACTIONS(955),
    [anon_sym_COLON_PLUS] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [315] = {
    [sym_variable_default_value] = STATE(581),
    [sym_variable_this_or_null] = STATE(581),
    [anon_sym_RBRACE] = ACTIONS(981),
    [anon_sym_COLON_DASH] = ACTIONS(955),
    [anon_sym_COLON_PLUS] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [316] = {
    [sym_variable_default_value] = STATE(579),
    [sym_variable_this_or_null] = STATE(579),
    [anon_sym_RBRACE] = ACTIONS(983),
    [anon_sym_COLON_DASH] = ACTIONS(955),
    [anon_sym_COLON_PLUS] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [sym_variable_default_value] = STATE(574),
    [sym_variable_this_or_null] = STATE(574),
    [anon_sym_RBRACE] = ACTIONS(985),
    [anon_sym_COLON_DASH] = ACTIONS(955),
    [anon_sym_COLON_PLUS] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [318] = {
    [aux_sym_path_repeat2] = STATE(342),
    [anon_sym_DQUOTE] = ACTIONS(987),
    [anon_sym_DOLLAR] = ACTIONS(989),
    [aux_sym_path_token3] = ACTIONS(991),
    [aux_sym_path_token4] = ACTIONS(993),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [319] = {
    [sym_variable_default_value] = STATE(568),
    [sym_variable_this_or_null] = STATE(568),
    [anon_sym_RBRACE] = ACTIONS(995),
    [anon_sym_COLON_DASH] = ACTIONS(955),
    [anon_sym_COLON_PLUS] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [aux_sym_path_repeat2] = STATE(321),
    [anon_sym_DQUOTE] = ACTIONS(997),
    [anon_sym_DOLLAR] = ACTIONS(989),
    [aux_sym_path_token3] = ACTIONS(999),
    [aux_sym_path_token4] = ACTIONS(993),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [321] = {
    [aux_sym_path_repeat2] = STATE(321),
    [anon_sym_DQUOTE] = ACTIONS(1001),
    [anon_sym_DOLLAR] = ACTIONS(1003),
    [aux_sym_path_token3] = ACTIONS(1006),
    [aux_sym_path_token4] = ACTIONS(1008),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [322] = {
    [sym_variable_default_value] = STATE(561),
    [sym_variable_this_or_null] = STATE(561),
    [anon_sym_RBRACE] = ACTIONS(1011),
    [anon_sym_COLON_DASH] = ACTIONS(955),
    [anon_sym_COLON_PLUS] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [323] = {
    [aux_sym_path_repeat2] = STATE(320),
    [anon_sym_DQUOTE] = ACTIONS(1013),
    [anon_sym_DOLLAR] = ACTIONS(989),
    [aux_sym_path_token3] = ACTIONS(1015),
    [aux_sym_path_token4] = ACTIONS(993),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [324] = {
    [sym_variable_default_value] = STATE(541),
    [sym_variable_this_or_null] = STATE(541),
    [anon_sym_RBRACE] = ACTIONS(1017),
    [anon_sym_COLON_DASH] = ACTIONS(955),
    [anon_sym_COLON_PLUS] = ACTIONS(957),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [325] = {
    [aux_sym_from_layer_repeat1] = STATE(312),
    [anon_sym_DOLLAR] = ACTIONS(975),
    [aux_sym_from_layer_token3] = ACTIONS(975),
    [aux_sym_from_layer_token4] = ACTIONS(1019),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1021),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [326] = {
    [sym__env_pairs] = STATE(207),
    [sym_env_pair_eq] = STATE(148),
    [sym_env_pair] = STATE(207),
    [sym_env_key] = STATE(142),
    [aux_sym_env_key_token1] = ACTIONS(1023),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [327] = {
    [aux_sym__repository_start_repeat1] = STATE(304),
    [anon_sym_DOLLAR] = ACTIONS(959),
    [anon_sym_SLASH] = ACTIONS(1025),
    [aux_sym__repository_start_token2] = ACTIONS(959),
    [aux_sym__repository_start_token3] = ACTIONS(1027),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [328] = {
    [aux_sym_from_layer_repeat4] = STATE(328),
    [aux_sym_from_layer_token4] = ACTIONS(1029),
    [aux_sym_from_layer_token13] = ACTIONS(1031),
    [aux_sym_from_layer_token16] = ACTIONS(1031),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1029),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [329] = {
    [aux_sym_from_layer_repeat3] = STATE(329),
    [aux_sym_from_layer_token4] = ACTIONS(1034),
    [aux_sym_from_layer_token9] = ACTIONS(1036),
    [aux_sym_from_layer_token12] = ACTIONS(1036),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1034),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [330] = {
    [aux_sym_from_layer_repeat1] = STATE(330),
    [anon_sym_DOLLAR] = ACTIONS(1039),
    [aux_sym_from_layer_token3] = ACTIONS(1039),
    [aux_sym_from_layer_token4] = ACTIONS(1042),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1042),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [331] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(331),
    [aux_sym_from_layer_token14] = ACTIONS(1044),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(1046),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1046),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(1046),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [332] = {
    [aux_sym_from_layer_repeat2] = STATE(337),
    [aux_sym_from_layer_token4] = ACTIONS(1049),
    [aux_sym_from_layer_token5] = ACTIONS(967),
    [aux_sym_from_layer_token8] = ACTIONS(967),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1051),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [333] = {
    [sym__labels] = STATE(226),
    [sym_label_pair_eq] = STATE(155),
    [sym_label_pair] = STATE(226),
    [sym_label_key] = STATE(441),
    [aux_sym_env_key_token1] = ACTIONS(1053),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [334] = {
    [aux_sym_from_layer_repeat3] = STATE(329),
    [aux_sym_from_layer_token4] = ACTIONS(1049),
    [aux_sym_from_layer_token9] = ACTIONS(965),
    [aux_sym_from_layer_token12] = ACTIONS(965),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1051),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [335] = {
    [sym_template_expr_less_than_equals] = STATE(595),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(350),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [aux_sym_from_layer_repeat4] = STATE(328),
    [aux_sym_from_layer_token4] = ACTIONS(1049),
    [aux_sym_from_layer_token13] = ACTIONS(949),
    [aux_sym_from_layer_token16] = ACTIONS(949),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1051),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [337] = {
    [aux_sym_from_layer_repeat2] = STATE(337),
    [aux_sym_from_layer_token4] = ACTIONS(1055),
    [aux_sym_from_layer_token5] = ACTIONS(1057),
    [aux_sym_from_layer_token8] = ACTIONS(1057),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1055),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [338] = {
    [sym_path] = STATE(189),
    [anon_sym_DQUOTE] = ACTIONS(1060),
    [anon_sym_DOLLAR] = ACTIONS(1062),
    [aux_sym_path_token1] = ACTIONS(1064),
    [aux_sym_path_token2] = ACTIONS(1066),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [339] = {
    [sym_hc_command] = STATE(204),
    [aux_sym__anything] = STATE(151),
    [sym__anything_or_json_array] = STATE(198),
    [aux_sym__anything_token1] = ACTIONS(534),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1068),
    [sym_line_continuation] = ACTIONS(5),
  },
  [340] = {
    [sym_template_expr_less_than_equals] = STATE(480),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(350),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [341] = {
    [sym_template_expr_less_than_equals] = STATE(573),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(350),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [342] = {
    [aux_sym_path_repeat2] = STATE(321),
    [anon_sym_DQUOTE] = ACTIONS(1070),
    [anon_sym_DOLLAR] = ACTIONS(989),
    [aux_sym_path_token3] = ACTIONS(1072),
    [aux_sym_path_token4] = ACTIONS(993),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [343] = {
    [sym_port] = STATE(553),
    [sym_port_range] = STATE(553),
    [sym__port_part] = STATE(410),
    [anon_sym_DOLLAR] = ACTIONS(856),
    [aux_sym__port_part_token1] = ACTIONS(858),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [344] = {
    [sym_port_protocol] = STATE(428),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_COLON] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(1074),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [345] = {
    [sym_template_expr_less_than_equals] = STATE(534),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(350),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [346] = {
    [sym_port_protocol] = STATE(417),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_SLASH] = ACTIONS(1074),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [sym_template_expr_less_than_equals] = STATE(550),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(350),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [sym_template_expr_less_than_equals] = STATE(588),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(350),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [349] = {
    [sym_template_expr_less_than_equals] = STATE(471),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(350),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(331),
    [aux_sym_from_layer_token14] = ACTIONS(1076),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(1078),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1078),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(1078),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [351] = {
    [aux_sym__repository_start_repeat2] = STATE(351),
    [aux_sym_from_layer_token5] = ACTIONS(1080),
    [anon_sym_SLASH] = ACTIONS(161),
    [aux_sym__repository_start_token3] = ACTIONS(163),
    [aux_sym__repository_start_token5] = ACTIONS(1080),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1083),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1083),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1083),
    [anon_sym_DASH_DASHretries] = ACTIONS(1083),
    [aux_sym__hc_command_token1] = ACTIONS(1083),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1085),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1085),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1085),
    [anon_sym_DASH_DASHretries] = ACTIONS(1085),
    [aux_sym__hc_command_token1] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1087),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1087),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1087),
    [anon_sym_DASH_DASHretries] = ACTIONS(1087),
    [aux_sym__hc_command_token1] = ACTIONS(1087),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1089),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1089),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1089),
    [anon_sym_DASH_DASHretries] = ACTIONS(1089),
    [aux_sym__hc_command_token1] = ACTIONS(1089),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [356] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1091),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1091),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1091),
    [anon_sym_DASH_DASHretries] = ACTIONS(1091),
    [aux_sym__hc_command_token1] = ACTIONS(1091),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [357] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1093),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1093),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1093),
    [anon_sym_DASH_DASHretries] = ACTIONS(1093),
    [aux_sym__hc_command_token1] = ACTIONS(1093),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [358] = {
    [aux_sym__repository_start_repeat3] = STATE(358),
    [aux_sym_from_layer_token9] = ACTIONS(1095),
    [anon_sym_SLASH] = ACTIONS(135),
    [aux_sym__repository_start_token3] = ACTIONS(137),
    [aux_sym__repository_start_token7] = ACTIONS(1095),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [359] = {
    [aux_sym__repository_start_repeat2] = STATE(351),
    [aux_sym_from_layer_token5] = ACTIONS(961),
    [anon_sym_SLASH] = ACTIONS(1098),
    [aux_sym__repository_start_token3] = ACTIONS(1100),
    [aux_sym__repository_start_token5] = ACTIONS(961),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [360] = {
    [aux_sym__repository_start_repeat3] = STATE(358),
    [aux_sym_from_layer_token9] = ACTIONS(963),
    [anon_sym_SLASH] = ACTIONS(1098),
    [aux_sym__repository_start_token3] = ACTIONS(1100),
    [aux_sym__repository_start_token7] = ACTIONS(963),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [361] = {
    [aux_sym__repository_start_repeat4] = STATE(364),
    [aux_sym_from_layer_token13] = ACTIONS(936),
    [anon_sym_SLASH] = ACTIONS(1098),
    [aux_sym__repository_start_token3] = ACTIONS(1100),
    [aux_sym__repository_start_token9] = ACTIONS(936),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [362] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1102),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1102),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1102),
    [anon_sym_DASH_DASHretries] = ACTIONS(1102),
    [aux_sym__hc_command_token1] = ACTIONS(1102),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [363] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1104),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1104),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1104),
    [anon_sym_DASH_DASHretries] = ACTIONS(1104),
    [aux_sym__hc_command_token1] = ACTIONS(1104),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [364] = {
    [aux_sym__repository_start_repeat4] = STATE(364),
    [aux_sym_from_layer_token13] = ACTIONS(1106),
    [anon_sym_SLASH] = ACTIONS(152),
    [aux_sym__repository_start_token3] = ACTIONS(154),
    [aux_sym__repository_start_token9] = ACTIONS(1106),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [365] = {
    [sym_template_expr_less_than_equals] = STATE(582),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(350),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(945),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [366] = {
    [aux_sym_from_layer_token5] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token5] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [367] = {
    [aux_sym_from_layer_token9] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [aux_sym__repository_start_token7] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [aux_sym_from_layer_token13] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [aux_sym__repository_start_token9] = ACTIONS(215),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [369] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_path_token3] = ACTIONS(197),
    [aux_sym_path_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [anon_sym_DOLLAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token2] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [371] = {
    [sym_user_name] = STATE(460),
    [sym_user_id] = STATE(453),
    [aux_sym_user_name_token1] = ACTIONS(1109),
    [aux_sym_user_id_token1] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [372] = {
    [sym_arg_default] = STATE(183),
    [anon_sym_DQUOTE] = ACTIONS(1113),
    [anon_sym_SQUOTE] = ACTIONS(1115),
    [aux_sym_arg_default_token3] = ACTIONS(1117),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [373] = {
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_path_token3] = ACTIONS(213),
    [aux_sym_path_token4] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [374] = {
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_path_token3] = ACTIONS(201),
    [aux_sym_path_token4] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [375] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_from_layer_token3] = ACTIONS(195),
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [376] = {
    [anon_sym_DOLLAR] = ACTIONS(211),
    [aux_sym_from_layer_token3] = ACTIONS(211),
    [aux_sym_from_layer_token4] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [377] = {
    [anon_sym_DOLLAR] = ACTIONS(199),
    [aux_sym_from_layer_token3] = ACTIONS(199),
    [aux_sym_from_layer_token4] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [378] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [379] = {
    [anon_sym_DQUOTE] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(211),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [380] = {
    [anon_sym_DQUOTE] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [381] = {
    [aux_sym_from_layer_token4] = ACTIONS(1119),
    [aux_sym_from_layer_token5] = ACTIONS(1121),
    [aux_sym_from_layer_token8] = ACTIONS(1121),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1119),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [382] = {
    [aux_sym__anything] = STATE(151),
    [sym__anything_or_json_array] = STATE(229),
    [aux_sym__anything_token1] = ACTIONS(534),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1123),
    [sym_line_continuation] = ACTIONS(5),
  },
  [383] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [384] = {
    [anon_sym_DOLLAR] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(211),
    [aux_sym__repository_start_token2] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(213),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [385] = {
    [aux_sym_from_layer_token4] = ACTIONS(1125),
    [aux_sym_from_layer_token9] = ACTIONS(1127),
    [aux_sym_from_layer_token12] = ACTIONS(1127),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1125),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [386] = {
    [anon_sym_DOLLAR] = ACTIONS(1129),
    [aux_sym_from_layer_token3] = ACTIONS(1129),
    [aux_sym_from_layer_token4] = ACTIONS(1042),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1042),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [387] = {
    [anon_sym_DOLLAR] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token2] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [388] = {
    [aux_sym__anything] = STATE(151),
    [sym__anything_or_json_array] = STATE(205),
    [aux_sym__anything_token1] = ACTIONS(534),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1131),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [aux_sym__anything] = STATE(151),
    [sym__anything_or_json_array] = STATE(199),
    [aux_sym__anything_token1] = ACTIONS(534),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1133),
    [sym_line_continuation] = ACTIONS(5),
  },
  [390] = {
    [aux_sym_from_layer_token4] = ACTIONS(1135),
    [aux_sym_from_layer_token13] = ACTIONS(1137),
    [aux_sym_from_layer_token16] = ACTIONS(1137),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1135),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [391] = {
    [anon_sym_DQUOTE] = ACTIONS(1001),
    [anon_sym_DOLLAR] = ACTIONS(1001),
    [aux_sym_path_token3] = ACTIONS(1006),
    [aux_sym_path_token4] = ACTIONS(1006),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [392] = {
    [sym_docker_variable] = STATE(56),
    [anon_sym_LBRACE] = ACTIONS(1139),
    [sym__docker_variable] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [393] = {
    [sym_docker_variable] = STATE(68),
    [anon_sym_LBRACE] = ACTIONS(1143),
    [sym__docker_variable] = ACTIONS(1145),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [394] = {
    [sym_docker_variable] = STATE(323),
    [anon_sym_LBRACE] = ACTIONS(1147),
    [sym__docker_variable] = ACTIONS(1149),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [395] = {
    [anon_sym_DOLLAR] = ACTIONS(1151),
    [aux_sym_path_token3] = ACTIONS(1153),
    [aux_sym_path_token4] = ACTIONS(1155),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [396] = {
    [sym_docker_variable] = STATE(123),
    [anon_sym_LBRACE] = ACTIONS(1157),
    [sym__docker_variable] = ACTIONS(1159),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [397] = {
    [sym_docker_variable] = STATE(386),
    [anon_sym_LBRACE] = ACTIONS(1161),
    [sym__docker_variable] = ACTIONS(1163),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [398] = {
    [sym_docker_variable] = STATE(370),
    [anon_sym_LBRACE] = ACTIONS(1165),
    [sym__docker_variable] = ACTIONS(1167),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [sym_docker_variable] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(1169),
    [sym__docker_variable] = ACTIONS(1171),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [400] = {
    [sym_docker_variable] = STATE(430),
    [anon_sym_LBRACE] = ACTIONS(1173),
    [sym__docker_variable] = ACTIONS(1175),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [401] = {
    [anon_sym_DOLLAR] = ACTIONS(1177),
    [aux_sym_port_protocol_token1] = ACTIONS(1179),
    [aux_sym_port_protocol_token2] = ACTIONS(1179),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [sym_docker_variable] = STATE(25),
    [anon_sym_LBRACE] = ACTIONS(1139),
    [sym__docker_variable] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [403] = {
    [sym_docker_variable] = STATE(69),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [sym__docker_variable] = ACTIONS(1183),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [404] = {
    [sym_docker_variable] = STATE(346),
    [anon_sym_LBRACE] = ACTIONS(1173),
    [sym__docker_variable] = ACTIONS(1175),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [405] = {
    [sym_docker_variable] = STATE(111),
    [anon_sym_LBRACE] = ACTIONS(1185),
    [sym__docker_variable] = ACTIONS(1187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [406] = {
    [aux_sym_arg_default_repeat2] = STATE(408),
    [anon_sym_SQUOTE] = ACTIONS(1189),
    [aux_sym_arg_default_token2] = ACTIONS(1191),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [407] = {
    [aux_sym_arg_default_repeat1] = STATE(407),
    [anon_sym_DQUOTE] = ACTIONS(1193),
    [aux_sym_arg_default_token1] = ACTIONS(1195),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [aux_sym_arg_default_repeat2] = STATE(408),
    [anon_sym_SQUOTE] = ACTIONS(1198),
    [aux_sym_arg_default_token2] = ACTIONS(1200),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [aux_sym_arg_default_repeat1] = STATE(407),
    [anon_sym_DQUOTE] = ACTIONS(1189),
    [aux_sym_arg_default_token1] = ACTIONS(1203),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(1205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [sym_env_pair_eq] = STATE(179),
    [sym_env_key] = STATE(551),
    [aux_sym_env_key_token1] = ACTIONS(1207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [anon_sym_DQUOTE] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(351),
    [anon_sym_DASH] = ACTIONS(351),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [aux_sym_arg_default_repeat2] = STATE(406),
    [anon_sym_SQUOTE] = ACTIONS(1209),
    [aux_sym_arg_default_token2] = ACTIONS(1211),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [aux_sym_arg_default_repeat1] = STATE(409),
    [anon_sym_DQUOTE] = ACTIONS(1209),
    [aux_sym_arg_default_token1] = ACTIONS(1213),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [sym_docker_variable] = STATE(190),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [sym__docker_variable] = ACTIONS(1183),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [sym_signal_name] = STATE(184),
    [sym_signal_num] = ACTIONS(1215),
    [aux_sym_signal_name_token1] = ACTIONS(1217),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [anon_sym_DQUOTE] = ACTIONS(343),
    [anon_sym_COLON] = ACTIONS(343),
    [anon_sym_DASH] = ACTIONS(343),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [418] = {
    [sym_docker_variable] = STATE(391),
    [anon_sym_LBRACE] = ACTIONS(1147),
    [sym__docker_variable] = ACTIONS(1149),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [anon_sym_DOLLAR] = ACTIONS(1219),
    [aux_sym_port_protocol_token1] = ACTIONS(1221),
    [aux_sym_port_protocol_token2] = ACTIONS(1221),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [sym__port_part] = STATE(112),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [aux_sym__port_part_token1] = ACTIONS(122),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [sym_docker_variable] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(1223),
    [sym__docker_variable] = ACTIONS(1225),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [sym_docker_variable] = STATE(126),
    [anon_sym_LBRACE] = ACTIONS(1185),
    [sym__docker_variable] = ACTIONS(1187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [423] = {
    [sym_docker_variable] = STATE(325),
    [anon_sym_LBRACE] = ACTIONS(1161),
    [sym__docker_variable] = ACTIONS(1163),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [sym__port_part] = STATE(464),
    [anon_sym_DOLLAR] = ACTIONS(856),
    [aux_sym__port_part_token1] = ACTIONS(858),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [sym_docker_variable] = STATE(469),
    [anon_sym_LBRACE] = ACTIONS(1227),
    [sym__docker_variable] = ACTIONS(1229),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [sym_label_pair_eq] = STATE(168),
    [sym_label_key] = STATE(514),
    [aux_sym_env_key_token1] = ACTIONS(1231),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [anon_sym_DOLLAR] = ACTIONS(1233),
    [aux_sym_path_token3] = ACTIONS(1235),
    [aux_sym_path_token4] = ACTIONS(1237),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [anon_sym_DQUOTE] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [sym_docker_variable] = STATE(318),
    [anon_sym_LBRACE] = ACTIONS(1147),
    [sym__docker_variable] = ACTIONS(1149),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [anon_sym_DQUOTE] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [sym_docker_variable] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(1169),
    [sym__docker_variable] = ACTIONS(1171),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [sym_docker_variable] = STATE(53),
    [anon_sym_LBRACE] = ACTIONS(1143),
    [sym__docker_variable] = ACTIONS(1145),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [sym_docker_variable] = STATE(33),
    [anon_sym_LBRACE] = ACTIONS(1181),
    [sym__docker_variable] = ACTIONS(1183),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [sym_platform] = STATE(232),
    [anon_sym_DOLLAR] = ACTIONS(1239),
    [aux_sym_platform_token1] = ACTIONS(1241),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [435] = {
    [sym_docker_variable] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(1139),
    [sym__docker_variable] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [sym_docker_variable] = STATE(94),
    [anon_sym_LBRACE] = ACTIONS(1139),
    [sym__docker_variable] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [sym_docker_variable] = STATE(327),
    [anon_sym_LBRACE] = ACTIONS(1165),
    [sym__docker_variable] = ACTIONS(1167),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [sym_docker_variable] = STATE(96),
    [anon_sym_LBRACE] = ACTIONS(1157),
    [sym__docker_variable] = ACTIONS(1159),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [sym_user_group] = STATE(554),
    [aux_sym_user_name_token1] = ACTIONS(1243),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [anon_sym_EQ2] = ACTIONS(1245),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1245),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [anon_sym_EQ2] = ACTIONS(1247),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1249),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [anon_sym_DQUOTE] = ACTIONS(601),
    [anon_sym_COLON] = ACTIONS(601),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [anon_sym_DQUOTE] = ACTIONS(599),
    [anon_sym_COLON] = ACTIONS(599),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [sym_user_group_id] = STATE(554),
    [aux_sym_user_id_token1] = ACTIONS(1251),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [sym_hc_interval] = STATE(362),
    [aux_sym_hc_interval_token1] = ACTIONS(1253),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [sym_hc_timeout] = STATE(356),
    [aux_sym_hc_interval_token1] = ACTIONS(1255),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [sym_hc_start_period] = STATE(354),
    [aux_sym_hc_interval_token1] = ACTIONS(1257),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [sym_hc_retries] = STATE(352),
    [aux_sym__port_part_token1] = ACTIONS(1259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [sym_label_value] = STATE(177),
    [aux_sym_env_value_token1] = ACTIONS(1261),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [aux_sym__anything] = STATE(146),
    [aux_sym__anything_token1] = ACTIONS(1263),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [sym_user_group] = STATE(578),
    [aux_sym_user_name_token1] = ACTIONS(1265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [anon_sym_COLON] = ACTIONS(1267),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1269),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [anon_sym_DQUOTE] = ACTIONS(1271),
    [anon_sym_COLON] = ACTIONS(1273),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [sym_user_group] = STATE(228),
    [aux_sym_user_name_token1] = ACTIONS(1275),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [sym_user_group_id] = STATE(228),
    [aux_sym_user_id_token1] = ACTIONS(1277),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [anon_sym_DQUOTE] = ACTIONS(1279),
    [anon_sym_COLON] = ACTIONS(1282),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [457] = {
    [anon_sym_DQUOTE] = ACTIONS(447),
    [anon_sym_COLON] = ACTIONS(447),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [458] = {
    [sym_user_group_id] = STATE(578),
    [aux_sym_user_id_token1] = ACTIONS(1284),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [459] = {
    [aux_sym__anything] = STATE(153),
    [aux_sym__anything_token1] = ACTIONS(1263),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [anon_sym_DQUOTE] = ACTIONS(1271),
    [anon_sym_COLON] = ACTIONS(1286),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [anon_sym_COLON] = ACTIONS(1288),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1269),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [anon_sym_DQUOTE] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(1290),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [aux_sym__anything] = STATE(135),
    [aux_sym__anything_token1] = ACTIONS(1292),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [464] = {
    [anon_sym_DQUOTE] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(445),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [anon_sym_COLON] = ACTIONS(601),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [anon_sym_COLON] = ACTIONS(599),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(599),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [sym_env_value] = STATE(164),
    [aux_sym_env_value_token1] = ACTIONS(1294),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [anon_sym_EQ] = ACTIONS(1296),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1298),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [sym_arg_name] = ACTIONS(1300),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [aux_sym_from_layer_token14] = ACTIONS(1302),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [aux_sym_from_token2] = ACTIONS(1304),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [473] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1306),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [aux_sym_from_layer_token10] = ACTIONS(1308),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [aux_sym_from_layer_token6] = ACTIONS(1310),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1312),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [477] = {
    [anon_sym_DQUOTE] = ACTIONS(1314),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [478] = {
    [aux_sym_from_layer_token10] = ACTIONS(1316),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [anon_sym_EQ2] = ACTIONS(543),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [480] = {
    [aux_sym_from_layer_token14] = ACTIONS(1318),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [anon_sym_EQ2] = ACTIONS(1245),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1320),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [483] = {
    [anon_sym_DQUOTE] = ACTIONS(1070),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [sym_template_expr_percent_signs] = ACTIONS(1322),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [sym_template_expr_percent_signs] = ACTIONS(1324),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [sym_template_expr_curly_braces] = ACTIONS(1326),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [anon_sym_DQUOTE] = ACTIONS(451),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(679),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(671),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1328),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1330),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [492] = {
    [sym_template_expr_percent_signs] = ACTIONS(1332),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [493] = {
    [sym__docker_variable] = ACTIONS(1334),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [anon_sym_DQUOTE] = ACTIONS(1336),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [aux_sym_from_layer_token10] = ACTIONS(1338),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [496] = {
    [aux_sym_from_token2] = ACTIONS(1340),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [aux_sym_signal_name_token2] = ACTIONS(1342),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [sym_template_expr_curly_braces] = ACTIONS(1344),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [499] = {
    [sym_template_expr_percent_signs] = ACTIONS(1346),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [500] = {
    [aux_sym_from_layer_token6] = ACTIONS(1348),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [sym_template_expr_curly_braces] = ACTIONS(1350),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [502] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1352),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [503] = {
    [anon_sym_DQUOTE] = ACTIONS(679),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [504] = {
    [anon_sym_DQUOTE] = ACTIONS(671),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [505] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1354),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [506] = {
    [sym_template_expr_curly_braces] = ACTIONS(1356),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [507] = {
    [sym_template_expr_percent_signs] = ACTIONS(1358),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [508] = {
    [anon_sym_EQ] = ACTIONS(1360),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [509] = {
    [sym_template_expr_percent_signs] = ACTIONS(1362),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [sym_template_expr_curly_braces] = ACTIONS(1364),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [511] = {
    [sym_template_expr_percent_signs] = ACTIONS(1366),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [512] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1368),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [513] = {
    [anon_sym_SLASH] = ACTIONS(1098),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [514] = {
    [anon_sym_EQ2] = ACTIONS(1247),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [515] = {
    [anon_sym_EQ] = ACTIONS(1370),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [516] = {
    [anon_sym_EQ] = ACTIONS(1372),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [517] = {
    [aux_sym_from_layer_token14] = ACTIONS(1374),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [518] = {
    [sym_template_expr_percent_signs] = ACTIONS(1376),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [519] = {
    [sym_template_expr_curly_braces] = ACTIONS(1378),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [520] = {
    [aux_sym_from_layer_token6] = ACTIONS(1380),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [521] = {
    [aux_sym_from_token2] = ACTIONS(1382),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [522] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1384),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [523] = {
    [anon_sym_SLASH] = ACTIONS(1386),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [524] = {
    [aux_sym_from_token2] = ACTIONS(1388),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [525] = {
    [ts_builtin_sym_end] = ACTIONS(1390),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [526] = {
    [sym_template_expr_curly_braces] = ACTIONS(1392),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [527] = {
    [aux_sym_from_layer_token10] = ACTIONS(1394),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [528] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1396),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [529] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [530] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [531] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(199),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [532] = {
    [aux_sym_from_token2] = ACTIONS(1398),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [533] = {
    [aux_sym_from_layer_token6] = ACTIONS(1400),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [534] = {
    [aux_sym_from_layer_token14] = ACTIONS(1402),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [535] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1404),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [536] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1406),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [537] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1408),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [538] = {
    [aux_sym_from_token2] = ACTIONS(1410),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [539] = {
    [aux_sym_from_layer_token10] = ACTIONS(1412),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [540] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1414),
    [sym_line_continuation] = ACTIONS(5),
  },
  [541] = {
    [anon_sym_RBRACE] = ACTIONS(1416),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [542] = {
    [aux_sym_from_layer_token6] = ACTIONS(1418),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [543] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1420),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [544] = {
    [sym_template_expr_percent_signs] = ACTIONS(1422),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [545] = {
    [sym_template_expr_curly_braces] = ACTIONS(1424),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [546] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1426),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [547] = {
    [aux_sym_from_layer_token6] = ACTIONS(1428),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [548] = {
    [anon_sym_SLASH] = ACTIONS(1430),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [549] = {
    [aux_sym_from_layer_token10] = ACTIONS(1432),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [550] = {
    [aux_sym_from_layer_token14] = ACTIONS(1434),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [551] = {
    [anon_sym_EQ2] = ACTIONS(523),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [552] = {
    [anon_sym_DQUOTE] = ACTIONS(1436),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [553] = {
    [anon_sym_DQUOTE] = ACTIONS(1438),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [554] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1440),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [555] = {
    [anon_sym_RBRACE] = ACTIONS(1442),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [556] = {
    [anon_sym_DQUOTE] = ACTIONS(1444),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [557] = {
    [aux_sym_from_layer_token6] = ACTIONS(1446),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [558] = {
    [aux_sym_from_token2] = ACTIONS(1448),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [559] = {
    [anon_sym_DQUOTE] = ACTIONS(997),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [560] = {
    [anon_sym_RBRACE] = ACTIONS(1450),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [561] = {
    [anon_sym_RBRACE] = ACTIONS(1452),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [562] = {
    [anon_sym_DQUOTE] = ACTIONS(1454),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [563] = {
    [aux_sym_from_layer_token6] = ACTIONS(1456),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [564] = {
    [aux_sym_from_layer_token10] = ACTIONS(1458),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [565] = {
    [aux_sym_from_layer_token14] = ACTIONS(1460),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [566] = {
    [anon_sym_DQUOTE] = ACTIONS(1462),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [567] = {
    [aux_sym_from_layer_token10] = ACTIONS(1464),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [568] = {
    [anon_sym_RBRACE] = ACTIONS(1466),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [569] = {
    [aux_sym_from_layer_token6] = ACTIONS(1468),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [570] = {
    [aux_sym_from_layer_token10] = ACTIONS(1470),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [571] = {
    [aux_sym_from_layer_token14] = ACTIONS(1472),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [572] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1474),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [573] = {
    [aux_sym_from_layer_token14] = ACTIONS(1476),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [574] = {
    [anon_sym_RBRACE] = ACTIONS(1478),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [575] = {
    [aux_sym_from_layer_token6] = ACTIONS(1480),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [576] = {
    [aux_sym_from_layer_token10] = ACTIONS(1482),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [577] = {
    [aux_sym_from_layer_token14] = ACTIONS(1484),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [578] = {
    [anon_sym_DQUOTE] = ACTIONS(1486),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [579] = {
    [anon_sym_RBRACE] = ACTIONS(1488),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [580] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1490),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [581] = {
    [anon_sym_RBRACE] = ACTIONS(1492),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [582] = {
    [aux_sym_from_layer_token14] = ACTIONS(1494),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [583] = {
    [anon_sym_RBRACE] = ACTIONS(1496),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [584] = {
    [aux_sym_from_layer_token10] = ACTIONS(1498),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [585] = {
    [anon_sym_RBRACE] = ACTIONS(1500),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [586] = {
    [aux_sym_from_layer_token6] = ACTIONS(1502),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [587] = {
    [anon_sym_RBRACE] = ACTIONS(1504),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [588] = {
    [aux_sym_from_layer_token14] = ACTIONS(1506),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [589] = {
    [anon_sym_RBRACE] = ACTIONS(1508),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [590] = {
    [aux_sym_from_layer_token10] = ACTIONS(1510),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [591] = {
    [anon_sym_RBRACE] = ACTIONS(1512),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [592] = {
    [aux_sym_from_layer_token6] = ACTIONS(1514),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [593] = {
    [anon_sym_RBRACE] = ACTIONS(1516),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [594] = {
    [aux_sym_from_token2] = ACTIONS(1518),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [595] = {
    [aux_sym_from_layer_token14] = ACTIONS(1520),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [596] = {
    [sym__docker_variable] = ACTIONS(1522),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [597] = {
    [anon_sym_SLASH] = ACTIONS(938),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [598] = {
    [sym_template_expr_curly_braces] = ACTIONS(1524),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [599] = {
    [sym_template_expr_percent_signs] = ACTIONS(1526),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [600] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1528),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [601] = {
    [sym__docker_variable] = ACTIONS(1530),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [602] = {
    [sym_template_expr_curly_braces] = ACTIONS(1532),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [603] = {
    [sym_template_expr_percent_signs] = ACTIONS(1534),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [604] = {
    [aux_sym_from_token2] = ACTIONS(1536),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [605] = {
    [sym__docker_variable] = ACTIONS(1538),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [606] = {
    [sym_template_expr_curly_braces] = ACTIONS(1540),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [607] = {
    [sym_template_expr_percent_signs] = ACTIONS(1542),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [608] = {
    [sym_template_expr_curly_braces] = ACTIONS(1544),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [609] = {
    [sym__docker_variable] = ACTIONS(1546),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [610] = {
    [sym__docker_variable] = ACTIONS(1548),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [611] = {
    [sym__docker_variable] = ACTIONS(1550),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [612] = {
    [sym__docker_variable] = ACTIONS(1552),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [613] = {
    [sym__docker_variable] = ACTIONS(1554),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [614] = {
    [sym__docker_variable] = ACTIONS(1556),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [615] = {
    [sym__docker_variable] = ACTIONS(1558),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [616] = {
    [sym__docker_variable] = ACTIONS(1560),
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
  [11] = {.count = 1, .reusable = true}, SHIFT(288),
  [13] = {.count = 1, .reusable = true}, SHIFT(470),
  [15] = {.count = 1, .reusable = true}, SHIFT(389),
  [17] = {.count = 1, .reusable = true}, SHIFT(236),
  [19] = {.count = 1, .reusable = true}, SHIFT(388),
  [21] = {.count = 1, .reusable = true}, SHIFT(326),
  [23] = {.count = 1, .reusable = true}, SHIFT(235),
  [25] = {.count = 1, .reusable = true}, SHIFT(231),
  [27] = {.count = 1, .reusable = true}, SHIFT(230),
  [29] = {.count = 1, .reusable = true}, SHIFT(333),
  [31] = {.count = 1, .reusable = true}, SHIFT(463),
  [33] = {.count = 1, .reusable = true}, SHIFT(7),
  [35] = {.count = 1, .reusable = true}, SHIFT(382),
  [37] = {.count = 1, .reusable = true}, SHIFT(540),
  [39] = {.count = 1, .reusable = true}, SHIFT(416),
  [41] = {.count = 1, .reusable = true}, SHIFT(293),
  [43] = {.count = 1, .reusable = true}, SHIFT(286),
  [45] = {.count = 1, .reusable = true}, SHIFT(338),
  [47] = {.count = 1, .reusable = false}, SHIFT(192),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1),
  [51] = {.count = 1, .reusable = true}, SHIFT(192),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 2, .production_id = 3),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(288),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(470),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(389),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(236),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(388),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(326),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(235),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(231),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(230),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(333),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(463),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(7),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(382),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(540),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(416),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(293),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(286),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(338),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(192),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [118] = {.count = 1, .reusable = true}, SHIFT(270),
  [120] = {.count = 1, .reusable = true}, SHIFT(433),
  [122] = {.count = 1, .reusable = true}, SHIFT(39),
  [124] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(270),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(433),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(39),
  [135] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(492),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [146] = {.count = 1, .reusable = true}, SHIFT(297),
  [148] = {.count = 1, .reusable = true}, SHIFT(279),
  [150] = {.count = 1, .reusable = false}, SHIFT(79),
  [152] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [154] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [156] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(297),
  [159] = {.count = 1, .reusable = true}, SHIFT(492),
  [161] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(608),
  [168] = {.count = 1, .reusable = true}, SHIFT(608),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [174] = {.count = 1, .reusable = true}, SHIFT(402),
  [176] = {.count = 1, .reusable = true}, SHIFT(275),
  [178] = {.count = 1, .reusable = false}, SHIFT(81),
  [180] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(402),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [191] = {.count = 1, .reusable = true}, SHIFT(284),
  [193] = {.count = 1, .reusable = false}, SHIFT(71),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [203] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [205] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [215] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [217] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(399),
  [222] = {.count = 1, .reusable = true}, SHIFT(598),
  [224] = {.count = 1, .reusable = false}, SHIFT(114),
  [226] = {.count = 1, .reusable = true}, SHIFT(399),
  [228] = {.count = 1, .reusable = false}, SHIFT(125),
  [230] = {.count = 1, .reusable = false}, SHIFT(115),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(598),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [237] = {.count = 1, .reusable = true}, SHIFT(419),
  [239] = {.count = 1, .reusable = true}, SHIFT(599),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(599),
  [244] = {.count = 1, .reusable = true}, SHIFT(300),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(300),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 2),
  [253] = {.count = 1, .reusable = true}, SHIFT(427),
  [255] = {.count = 1, .reusable = true}, SHIFT(432),
  [257] = {.count = 1, .reusable = false}, SHIFT(82),
  [259] = {.count = 1, .reusable = false}, SHIFT(432),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [265] = {.count = 1, .reusable = false}, SHIFT(140),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [269] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [271] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(393),
  [274] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2),
  [276] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(393),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_add, 2),
  [281] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(427),
  [286] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(432),
  [289] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(82),
  [292] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(432),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [297] = {.count = 1, .reusable = true}, SHIFT(393),
  [299] = {.count = 1, .reusable = false}, SHIFT(77),
  [301] = {.count = 1, .reusable = false}, SHIFT(393),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [307] = {.count = 1, .reusable = false}, SHIFT(76),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_path, 2),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [315] = {.count = 1, .reusable = false}, SHIFT(145),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 2),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [323] = {.count = 1, .reusable = false}, SHIFT(156),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [331] = {.count = 1, .reusable = false}, SHIFT(158),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [337] = {.count = 1, .reusable = true}, SHIFT(274),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_path, 4),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_path, 4),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [349] = {.count = 1, .reusable = true}, SHIFT(285),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [357] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [359] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [361] = {.count = 1, .reusable = false}, SHIFT(99),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_path, 6),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_path, 6),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [371] = {.count = 1, .reusable = false}, SHIFT(173),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [375] = {.count = 1, .reusable = true}, SHIFT(420),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_path, 5),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_path, 5),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [385] = {.count = 1, .reusable = false}, SHIFT(163),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [389] = {.count = 1, .reusable = true}, SHIFT(289),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [395] = {.count = 1, .reusable = true}, SHIFT(396),
  [397] = {.count = 1, .reusable = false}, SHIFT(202),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [403] = {.count = 1, .reusable = true}, SHIFT(606),
  [405] = {.count = 1, .reusable = false}, SHIFT(222),
  [407] = {.count = 1, .reusable = true}, SHIFT(607),
  [409] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [411] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(606),
  [414] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(298),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [421] = {.count = 1, .reusable = true}, SHIFT(298),
  [423] = {.count = 1, .reusable = false}, SHIFT(212),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(422),
  [428] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(422),
  [431] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(607),
  [434] = {.count = 1, .reusable = true}, SHIFT(422),
  [436] = {.count = 1, .reusable = false}, SHIFT(211),
  [438] = {.count = 1, .reusable = false}, SHIFT(422),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(396),
  [443] = {.count = 1, .reusable = false}, SHIFT(214),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [449] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [455] = {.count = 1, .reusable = true}, SHIFT(260),
  [457] = {.count = 1, .reusable = true}, SHIFT(245),
  [459] = {.count = 1, .reusable = false}, SHIFT(524),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [463] = {.count = 1, .reusable = true}, SHIFT(257),
  [465] = {.count = 1, .reusable = true}, SHIFT(237),
  [467] = {.count = 1, .reusable = false}, SHIFT(604),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [471] = {.count = 1, .reusable = true}, SHIFT(265),
  [473] = {.count = 1, .reusable = true}, SHIFT(242),
  [475] = {.count = 1, .reusable = false}, SHIFT(538),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [479] = {.count = 1, .reusable = true}, SHIFT(266),
  [481] = {.count = 1, .reusable = true}, SHIFT(241),
  [483] = {.count = 1, .reusable = false}, SHIFT(594),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 2),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 2),
  [489] = {.count = 1, .reusable = false}, SHIFT(167),
  [491] = {.count = 1, .reusable = true}, SHIFT(194),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym__labels, 2),
  [495] = {.count = 1, .reusable = false}, SHIFT(426),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [499] = {.count = 1, .reusable = true}, SHIFT(239),
  [501] = {.count = 1, .reusable = false}, SHIFT(532),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [505] = {.count = 1, .reusable = true}, SHIFT(243),
  [507] = {.count = 1, .reusable = false}, SHIFT(558),
  [509] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [511] = {.count = 2, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2), SHIFT_REPEAT(411),
  [514] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [516] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [518] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(157),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 1),
  [523] = {.count = 1, .reusable = true}, SHIFT(467),
  [525] = {.count = 1, .reusable = false}, SHIFT(459),
  [527] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(167),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3, .production_id = 6),
  [532] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3, .production_id = 6),
  [534] = {.count = 1, .reusable = false}, SHIFT(157),
  [536] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels_repeat1, 2),
  [538] = {.count = 2, .reusable = false}, REDUCE(aux_sym__labels_repeat1, 2), SHIFT_REPEAT(426),
  [541] = {.count = 1, .reusable = false}, SHIFT(411),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_env_key, 1),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym_env_key, 1),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 2),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [555] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 5),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3, .production_id = 5),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym__labels, 1),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [567] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [569] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [573] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [577] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair_eq, 3),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair_eq, 3),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [585] = {.count = 1, .reusable = false}, SHIFT(521),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 1),
  [589] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 1),
  [591] = {.count = 1, .reusable = false}, REDUCE(aux_sym__labels_repeat1, 2),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_user, 2),
  [595] = {.count = 1, .reusable = true}, SHIFT(455),
  [597] = {.count = 1, .reusable = true}, SHIFT(454),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [605] = {.count = 1, .reusable = true}, SHIFT(372),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [609] = {.count = 1, .reusable = false}, SHIFT(496),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair_eq, 3),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair_eq, 3),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [617] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [619] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [623] = {.count = 1, .reusable = false}, SHIFT(472),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 2),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 1),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 2),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [639] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 2),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 2),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 2),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_env, 2),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 3),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 2),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 2),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_user, 6),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 2),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_run, 2),
  [689] = {.count = 1, .reusable = true}, SHIFT(217),
  [691] = {.count = 1, .reusable = true}, SHIFT(516),
  [693] = {.count = 1, .reusable = true}, SHIFT(515),
  [695] = {.count = 1, .reusable = true}, SHIFT(508),
  [697] = {.count = 1, .reusable = true}, SHIFT(468),
  [699] = {.count = 1, .reusable = true}, SHIFT(502),
  [701] = {.count = 1, .reusable = true}, SHIFT(434),
  [703] = {.count = 1, .reusable = true}, SHIFT(435),
  [705] = {.count = 1, .reusable = true}, SHIFT(519),
  [707] = {.count = 1, .reusable = true}, SHIFT(518),
  [709] = {.count = 1, .reusable = true}, SHIFT(349),
  [711] = {.count = 1, .reusable = false}, SHIFT(73),
  [713] = {.count = 1, .reusable = true}, SHIFT(294),
  [715] = {.count = 1, .reusable = true}, SHIFT(259),
  [717] = {.count = 1, .reusable = true}, SHIFT(215),
  [719] = {.count = 1, .reusable = true}, SHIFT(290),
  [721] = {.count = 1, .reusable = true}, SHIFT(200),
  [723] = {.count = 1, .reusable = true}, SHIFT(261),
  [725] = {.count = 1, .reusable = true}, SHIFT(436),
  [727] = {.count = 1, .reusable = true}, SHIFT(510),
  [729] = {.count = 1, .reusable = true}, SHIFT(511),
  [731] = {.count = 1, .reusable = true}, SHIFT(365),
  [733] = {.count = 1, .reusable = false}, SHIFT(161),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(437),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(501),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(509),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(340),
  [747] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(523),
  [750] = {.count = 1, .reusable = true}, SHIFT(264),
  [752] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(437),
  [755] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(501),
  [758] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(509),
  [761] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(340),
  [764] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(523),
  [767] = {.count = 1, .reusable = true}, SHIFT(253),
  [769] = {.count = 1, .reusable = true}, SHIFT(268),
  [771] = {.count = 1, .reusable = true}, SHIFT(250),
  [773] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(437),
  [776] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(501),
  [779] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(509),
  [782] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(340),
  [785] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(523),
  [788] = {.count = 1, .reusable = true}, SHIFT(254),
  [790] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(516),
  [793] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(515),
  [796] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(508),
  [799] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(468),
  [802] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [804] = {.count = 1, .reusable = true}, SHIFT(438),
  [806] = {.count = 1, .reusable = true}, SHIFT(526),
  [808] = {.count = 1, .reusable = true}, SHIFT(484),
  [810] = {.count = 1, .reusable = true}, SHIFT(345),
  [812] = {.count = 1, .reusable = false}, SHIFT(220),
  [814] = {.count = 1, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2),
  [816] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(294),
  [819] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(259),
  [822] = {.count = 1, .reusable = false}, REDUCE(aux_sym_copy_repeat1, 2),
  [824] = {.count = 1, .reusable = true}, SHIFT(392),
  [826] = {.count = 1, .reusable = true}, SHIFT(506),
  [828] = {.count = 1, .reusable = true}, SHIFT(507),
  [830] = {.count = 1, .reusable = true}, SHIFT(348),
  [832] = {.count = 1, .reusable = false}, SHIFT(152),
  [834] = {.count = 1, .reusable = true}, SHIFT(431),
  [836] = {.count = 1, .reusable = true}, SHIFT(498),
  [838] = {.count = 1, .reusable = true}, SHIFT(499),
  [840] = {.count = 1, .reusable = true}, SHIFT(341),
  [842] = {.count = 1, .reusable = false}, SHIFT(133),
  [844] = {.count = 1, .reusable = true}, SHIFT(423),
  [846] = {.count = 1, .reusable = false}, SHIFT(490),
  [848] = {.count = 1, .reusable = true}, SHIFT(486),
  [850] = {.count = 1, .reusable = true}, SHIFT(485),
  [852] = {.count = 1, .reusable = true}, SHIFT(347),
  [854] = {.count = 1, .reusable = true}, SHIFT(343),
  [856] = {.count = 1, .reusable = true}, SHIFT(404),
  [858] = {.count = 1, .reusable = true}, SHIFT(344),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [862] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [866] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [870] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [874] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [878] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [882] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [886] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [890] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [894] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [896] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [898] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [900] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [902] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [904] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [906] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [908] = {.count = 1, .reusable = true}, SHIFT(197),
  [910] = {.count = 1, .reusable = true}, REDUCE(sym__from_layer, 3),
  [912] = {.count = 1, .reusable = false}, REDUCE(sym__from_layer, 3),
  [914] = {.count = 1, .reusable = true}, SHIFT(195),
  [916] = {.count = 1, .reusable = true}, SHIFT(301),
  [918] = {.count = 1, .reusable = true}, REDUCE(sym__chown, 3),
  [920] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 3),
  [922] = {.count = 1, .reusable = true}, SHIFT(371),
  [924] = {.count = 1, .reusable = true}, SHIFT(415),
  [926] = {.count = 1, .reusable = true}, SHIFT(174),
  [928] = {.count = 1, .reusable = true}, SHIFT(172),
  [930] = {.count = 1, .reusable = true}, SHIFT(425),
  [932] = {.count = 1, .reusable = true}, SHIFT(465),
  [934] = {.count = 1, .reusable = true}, SHIFT(466),
  [936] = {.count = 1, .reusable = true}, SHIFT(299),
  [938] = {.count = 1, .reusable = true}, SHIFT(273),
  [940] = {.count = 1, .reusable = false}, SHIFT(513),
  [942] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(398),
  [945] = {.count = 1, .reusable = true}, SHIFT(350),
  [947] = {.count = 1, .reusable = false}, SHIFT(546),
  [949] = {.count = 1, .reusable = true}, SHIFT(335),
  [951] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 3),
  [953] = {.count = 1, .reusable = true}, SHIFT(131),
  [955] = {.count = 1, .reusable = true}, SHIFT(536),
  [957] = {.count = 1, .reusable = true}, SHIFT(537),
  [959] = {.count = 1, .reusable = true}, SHIFT(398),
  [961] = {.count = 1, .reusable = true}, SHIFT(602),
  [963] = {.count = 1, .reusable = true}, SHIFT(603),
  [965] = {.count = 1, .reusable = true}, SHIFT(544),
  [967] = {.count = 1, .reusable = true}, SHIFT(545),
  [969] = {.count = 1, .reusable = true}, SHIFT(384),
  [971] = {.count = 1, .reusable = true}, SHIFT(59),
  [973] = {.count = 1, .reusable = true}, SHIFT(271),
  [975] = {.count = 1, .reusable = true}, SHIFT(397),
  [977] = {.count = 1, .reusable = true}, SHIFT(379),
  [979] = {.count = 1, .reusable = true}, SHIFT(376),
  [981] = {.count = 1, .reusable = true}, SHIFT(530),
  [983] = {.count = 1, .reusable = true}, SHIFT(373),
  [985] = {.count = 1, .reusable = true}, SHIFT(121),
  [987] = {.count = 1, .reusable = true}, SHIFT(77),
  [989] = {.count = 1, .reusable = true}, SHIFT(418),
  [991] = {.count = 1, .reusable = false}, SHIFT(483),
  [993] = {.count = 1, .reusable = false}, SHIFT(418),
  [995] = {.count = 1, .reusable = true}, SHIFT(26),
  [997] = {.count = 1, .reusable = true}, SHIFT(206),
  [999] = {.count = 1, .reusable = false}, SHIFT(562),
  [1001] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2),
  [1003] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(418),
  [1006] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2),
  [1008] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(418),
  [1011] = {.count = 1, .reusable = true}, SHIFT(47),
  [1013] = {.count = 1, .reusable = true}, SHIFT(211),
  [1015] = {.count = 1, .reusable = false}, SHIFT(559),
  [1017] = {.count = 1, .reusable = true}, SHIFT(74),
  [1019] = {.count = 1, .reusable = false}, SHIFT(580),
  [1021] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 2),
  [1023] = {.count = 1, .reusable = true}, SHIFT(149),
  [1025] = {.count = 1, .reusable = true}, SHIFT(276),
  [1027] = {.count = 1, .reusable = false}, SHIFT(597),
  [1029] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 2),
  [1031] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(335),
  [1034] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 2),
  [1036] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(544),
  [1039] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(397),
  [1042] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [1044] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [1046] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(331),
  [1049] = {.count = 1, .reusable = false}, SHIFT(505),
  [1051] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 4),
  [1053] = {.count = 1, .reusable = true}, SHIFT(440),
  [1055] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 2),
  [1057] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(545),
  [1060] = {.count = 1, .reusable = true}, SHIFT(395),
  [1062] = {.count = 1, .reusable = true}, SHIFT(405),
  [1064] = {.count = 1, .reusable = false}, SHIFT(186),
  [1066] = {.count = 1, .reusable = false}, SHIFT(405),
  [1068] = {.count = 1, .reusable = true}, SHIFT(198),
  [1070] = {.count = 1, .reusable = true}, SHIFT(91),
  [1072] = {.count = 1, .reusable = false}, SHIFT(566),
  [1074] = {.count = 1, .reusable = true}, SHIFT(401),
  [1076] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [1078] = {.count = 1, .reusable = true}, SHIFT(331),
  [1080] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(602),
  [1083] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [1085] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [1087] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [1089] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [1091] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [1093] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [1095] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(603),
  [1098] = {.count = 1, .reusable = true}, SHIFT(272),
  [1100] = {.count = 1, .reusable = false}, SHIFT(548),
  [1102] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [1104] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [1106] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(299),
  [1109] = {.count = 1, .reusable = true}, SHIFT(442),
  [1111] = {.count = 1, .reusable = true}, SHIFT(443),
  [1113] = {.count = 1, .reusable = true}, SHIFT(414),
  [1115] = {.count = 1, .reusable = true}, SHIFT(413),
  [1117] = {.count = 1, .reusable = true}, SHIFT(185),
  [1119] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [1121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [1123] = {.count = 1, .reusable = true}, SHIFT(229),
  [1125] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [1127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [1129] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [1131] = {.count = 1, .reusable = true}, SHIFT(205),
  [1133] = {.count = 1, .reusable = true}, SHIFT(199),
  [1135] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [1137] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [1139] = {.count = 1, .reusable = true}, SHIFT(601),
  [1141] = {.count = 1, .reusable = true}, SHIFT(21),
  [1143] = {.count = 1, .reusable = true}, SHIFT(493),
  [1145] = {.count = 1, .reusable = true}, SHIFT(92),
  [1147] = {.count = 1, .reusable = true}, SHIFT(609),
  [1149] = {.count = 1, .reusable = true}, SHIFT(369),
  [1151] = {.count = 1, .reusable = true}, SHIFT(394),
  [1153] = {.count = 1, .reusable = false}, SHIFT(552),
  [1155] = {.count = 1, .reusable = false}, SHIFT(394),
  [1157] = {.count = 1, .reusable = true}, SHIFT(616),
  [1159] = {.count = 1, .reusable = true}, SHIFT(124),
  [1161] = {.count = 1, .reusable = true}, SHIFT(611),
  [1163] = {.count = 1, .reusable = true}, SHIFT(375),
  [1165] = {.count = 1, .reusable = true}, SHIFT(615),
  [1167] = {.count = 1, .reusable = true}, SHIFT(383),
  [1169] = {.count = 1, .reusable = true}, SHIFT(614),
  [1171] = {.count = 1, .reusable = true}, SHIFT(43),
  [1173] = {.count = 1, .reusable = true}, SHIFT(612),
  [1175] = {.count = 1, .reusable = true}, SHIFT(378),
  [1177] = {.count = 1, .reusable = true}, SHIFT(400),
  [1179] = {.count = 1, .reusable = true}, SHIFT(412),
  [1181] = {.count = 1, .reusable = true}, SHIFT(596),
  [1183] = {.count = 1, .reusable = true}, SHIFT(55),
  [1185] = {.count = 1, .reusable = true}, SHIFT(605),
  [1187] = {.count = 1, .reusable = true}, SHIFT(118),
  [1189] = {.count = 1, .reusable = true}, SHIFT(209),
  [1191] = {.count = 1, .reusable = true}, SHIFT(408),
  [1193] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arg_default_repeat1, 2),
  [1195] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arg_default_repeat1, 2), SHIFT_REPEAT(407),
  [1198] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arg_default_repeat2, 2),
  [1200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arg_default_repeat2, 2), SHIFT_REPEAT(408),
  [1203] = {.count = 1, .reusable = true}, SHIFT(407),
  [1205] = {.count = 1, .reusable = true}, SHIFT(424),
  [1207] = {.count = 1, .reusable = true}, SHIFT(479),
  [1209] = {.count = 1, .reusable = true}, SHIFT(210),
  [1211] = {.count = 1, .reusable = true}, SHIFT(406),
  [1213] = {.count = 1, .reusable = true}, SHIFT(409),
  [1215] = {.count = 1, .reusable = true}, SHIFT(184),
  [1217] = {.count = 1, .reusable = true}, SHIFT(497),
  [1219] = {.count = 1, .reusable = true}, SHIFT(403),
  [1221] = {.count = 1, .reusable = true}, SHIFT(80),
  [1223] = {.count = 1, .reusable = true}, SHIFT(613),
  [1225] = {.count = 1, .reusable = true}, SHIFT(278),
  [1227] = {.count = 1, .reusable = true}, SHIFT(610),
  [1229] = {.count = 1, .reusable = true}, SHIFT(529),
  [1231] = {.count = 1, .reusable = true}, SHIFT(481),
  [1233] = {.count = 1, .reusable = true}, SHIFT(429),
  [1235] = {.count = 1, .reusable = false}, SHIFT(494),
  [1237] = {.count = 1, .reusable = false}, SHIFT(429),
  [1239] = {.count = 1, .reusable = true}, SHIFT(421),
  [1241] = {.count = 1, .reusable = true}, SHIFT(282),
  [1243] = {.count = 1, .reusable = true}, SHIFT(488),
  [1245] = {.count = 1, .reusable = true}, REDUCE(sym_label_key, 1),
  [1247] = {.count = 1, .reusable = true}, SHIFT(449),
  [1249] = {.count = 1, .reusable = true}, SHIFT(450),
  [1251] = {.count = 1, .reusable = true}, SHIFT(489),
  [1253] = {.count = 1, .reusable = true}, SHIFT(363),
  [1255] = {.count = 1, .reusable = true}, SHIFT(357),
  [1257] = {.count = 1, .reusable = true}, SHIFT(355),
  [1259] = {.count = 1, .reusable = true}, SHIFT(353),
  [1261] = {.count = 1, .reusable = true}, SHIFT(178),
  [1263] = {.count = 1, .reusable = true}, SHIFT(157),
  [1265] = {.count = 1, .reusable = true}, SHIFT(503),
  [1267] = {.count = 1, .reusable = true}, SHIFT(444),
  [1269] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 1),
  [1271] = {.count = 1, .reusable = true}, SHIFT(228),
  [1273] = {.count = 1, .reusable = true}, SHIFT(458),
  [1275] = {.count = 1, .reusable = true}, SHIFT(225),
  [1277] = {.count = 1, .reusable = true}, SHIFT(221),
  [1279] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(113),
  [1282] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1284] = {.count = 1, .reusable = true}, SHIFT(504),
  [1286] = {.count = 1, .reusable = true}, SHIFT(451),
  [1288] = {.count = 1, .reusable = true}, SHIFT(439),
  [1290] = {.count = 1, .reusable = true}, SHIFT(291),
  [1292] = {.count = 1, .reusable = true}, SHIFT(167),
  [1294] = {.count = 1, .reusable = true}, SHIFT(166),
  [1296] = {.count = 1, .reusable = true}, SHIFT(448),
  [1298] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 2),
  [1300] = {.count = 1, .reusable = true}, SHIFT(175),
  [1302] = {.count = 1, .reusable = true}, SHIFT(20),
  [1304] = {.count = 1, .reusable = true}, SHIFT(476),
  [1306] = {.count = 1, .reusable = true}, SHIFT(255),
  [1308] = {.count = 1, .reusable = true}, SHIFT(19),
  [1310] = {.count = 1, .reusable = true}, SHIFT(18),
  [1312] = {.count = 1, .reusable = true}, SHIFT(252),
  [1314] = {.count = 1, .reusable = true}, SHIFT(117),
  [1316] = {.count = 1, .reusable = true}, SHIFT(306),
  [1318] = {.count = 1, .reusable = true}, SHIFT(295),
  [1320] = {.count = 1, .reusable = true}, SHIFT(287),
  [1322] = {.count = 1, .reusable = true}, SHIFT(539),
  [1324] = {.count = 1, .reusable = true}, SHIFT(549),
  [1326] = {.count = 1, .reusable = true}, SHIFT(547),
  [1328] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 1),
  [1330] = {.count = 1, .reusable = true}, SHIFT(292),
  [1332] = {.count = 1, .reusable = true}, SHIFT(527),
  [1334] = {.count = 1, .reusable = true}, SHIFT(324),
  [1336] = {.count = 1, .reusable = true}, SHIFT(76),
  [1338] = {.count = 1, .reusable = true}, SHIFT(385),
  [1340] = {.count = 1, .reusable = true}, SHIFT(473),
  [1342] = {.count = 1, .reusable = true}, SHIFT(193),
  [1344] = {.count = 1, .reusable = true}, SHIFT(557),
  [1346] = {.count = 1, .reusable = true}, SHIFT(567),
  [1348] = {.count = 1, .reusable = true}, SHIFT(305),
  [1350] = {.count = 1, .reusable = true}, SHIFT(500),
  [1352] = {.count = 1, .reusable = true}, SHIFT(339),
  [1354] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 5),
  [1356] = {.count = 1, .reusable = true}, SHIFT(592),
  [1358] = {.count = 1, .reusable = true}, SHIFT(590),
  [1360] = {.count = 1, .reusable = true}, SHIFT(447),
  [1362] = {.count = 1, .reusable = true}, SHIFT(478),
  [1364] = {.count = 1, .reusable = true}, SHIFT(586),
  [1366] = {.count = 1, .reusable = true}, SHIFT(584),
  [1368] = {.count = 1, .reusable = true}, SHIFT(267),
  [1370] = {.count = 1, .reusable = true}, SHIFT(446),
  [1372] = {.count = 1, .reusable = true}, SHIFT(445),
  [1374] = {.count = 1, .reusable = true}, SHIFT(27),
  [1376] = {.count = 1, .reusable = true}, SHIFT(474),
  [1378] = {.count = 1, .reusable = true}, SHIFT(475),
  [1380] = {.count = 1, .reusable = true}, SHIFT(381),
  [1382] = {.count = 1, .reusable = true}, SHIFT(543),
  [1384] = {.count = 1, .reusable = true}, SHIFT(262),
  [1386] = {.count = 1, .reusable = true}, SHIFT(280),
  [1388] = {.count = 1, .reusable = true}, SHIFT(512),
  [1390] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1392] = {.count = 1, .reusable = true}, SHIFT(542),
  [1394] = {.count = 1, .reusable = true}, SHIFT(23),
  [1396] = {.count = 1, .reusable = true}, SHIFT(269),
  [1398] = {.count = 1, .reusable = true}, SHIFT(522),
  [1400] = {.count = 1, .reusable = true}, SHIFT(24),
  [1402] = {.count = 1, .reusable = true}, SHIFT(102),
  [1404] = {.count = 1, .reusable = true}, SHIFT(248),
  [1406] = {.count = 1, .reusable = true}, SHIFT(560),
  [1408] = {.count = 1, .reusable = true}, SHIFT(555),
  [1410] = {.count = 1, .reusable = true}, SHIFT(572),
  [1412] = {.count = 1, .reusable = true}, SHIFT(104),
  [1414] = {.count = 1, .reusable = true}, SHIFT(203),
  [1416] = {.count = 1, .reusable = true}, SHIFT(93),
  [1418] = {.count = 1, .reusable = true}, SHIFT(108),
  [1420] = {.count = 1, .reusable = true}, SHIFT(256),
  [1422] = {.count = 1, .reusable = true}, SHIFT(495),
  [1424] = {.count = 1, .reusable = true}, SHIFT(520),
  [1426] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 4),
  [1428] = {.count = 1, .reusable = true}, SHIFT(308),
  [1430] = {.count = 1, .reusable = true}, SHIFT(283),
  [1432] = {.count = 1, .reusable = true}, SHIFT(307),
  [1434] = {.count = 1, .reusable = true}, SHIFT(302),
  [1436] = {.count = 1, .reusable = true}, SHIFT(214),
  [1438] = {.count = 1, .reusable = true}, SHIFT(457),
  [1440] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 3),
  [1442] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1444] = {.count = 1, .reusable = true}, SHIFT(113),
  [1446] = {.count = 1, .reusable = true}, SHIFT(31),
  [1448] = {.count = 1, .reusable = true}, SHIFT(528),
  [1450] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1452] = {.count = 1, .reusable = true}, SHIFT(62),
  [1454] = {.count = 1, .reusable = true}, SHIFT(208),
  [1456] = {.count = 1, .reusable = true}, SHIFT(57),
  [1458] = {.count = 1, .reusable = true}, SHIFT(54),
  [1460] = {.count = 1, .reusable = true}, SHIFT(67),
  [1462] = {.count = 1, .reusable = true}, SHIFT(84),
  [1464] = {.count = 1, .reusable = true}, SHIFT(34),
  [1466] = {.count = 1, .reusable = true}, SHIFT(22),
  [1468] = {.count = 1, .reusable = true}, SHIFT(366),
  [1470] = {.count = 1, .reusable = true}, SHIFT(367),
  [1472] = {.count = 1, .reusable = true}, SHIFT(368),
  [1474] = {.count = 1, .reusable = true}, SHIFT(249),
  [1476] = {.count = 1, .reusable = true}, SHIFT(37),
  [1478] = {.count = 1, .reusable = true}, SHIFT(129),
  [1480] = {.count = 1, .reusable = true}, SHIFT(128),
  [1482] = {.count = 1, .reusable = true}, SHIFT(127),
  [1484] = {.count = 1, .reusable = true}, SHIFT(116),
  [1486] = {.count = 1, .reusable = true}, SHIFT(218),
  [1488] = {.count = 1, .reusable = true}, SHIFT(374),
  [1490] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 3),
  [1492] = {.count = 1, .reusable = true}, SHIFT(531),
  [1494] = {.count = 1, .reusable = true}, SHIFT(85),
  [1496] = {.count = 1, .reusable = true}, SHIFT(377),
  [1498] = {.count = 1, .reusable = true}, SHIFT(86),
  [1500] = {.count = 1, .reusable = true}, SHIFT(380),
  [1502] = {.count = 1, .reusable = true}, SHIFT(87),
  [1504] = {.count = 1, .reusable = true}, SHIFT(277),
  [1506] = {.count = 1, .reusable = true}, SHIFT(61),
  [1508] = {.count = 1, .reusable = true}, SHIFT(63),
  [1510] = {.count = 1, .reusable = true}, SHIFT(60),
  [1512] = {.count = 1, .reusable = true}, SHIFT(387),
  [1514] = {.count = 1, .reusable = true}, SHIFT(50),
  [1516] = {.count = 1, .reusable = true}, SHIFT(132),
  [1518] = {.count = 1, .reusable = true}, SHIFT(600),
  [1520] = {.count = 1, .reusable = true}, SHIFT(390),
  [1522] = {.count = 1, .reusable = true}, SHIFT(322),
  [1524] = {.count = 1, .reusable = true}, SHIFT(563),
  [1526] = {.count = 1, .reusable = true}, SHIFT(564),
  [1528] = {.count = 1, .reusable = true}, SHIFT(247),
  [1530] = {.count = 1, .reusable = true}, SHIFT(319),
  [1532] = {.count = 1, .reusable = true}, SHIFT(569),
  [1534] = {.count = 1, .reusable = true}, SHIFT(570),
  [1536] = {.count = 1, .reusable = true}, SHIFT(535),
  [1538] = {.count = 1, .reusable = true}, SHIFT(317),
  [1540] = {.count = 1, .reusable = true}, SHIFT(575),
  [1542] = {.count = 1, .reusable = true}, SHIFT(576),
  [1544] = {.count = 1, .reusable = true}, SHIFT(533),
  [1546] = {.count = 1, .reusable = true}, SHIFT(316),
  [1548] = {.count = 1, .reusable = true}, SHIFT(315),
  [1550] = {.count = 1, .reusable = true}, SHIFT(314),
  [1552] = {.count = 1, .reusable = true}, SHIFT(313),
  [1554] = {.count = 1, .reusable = true}, SHIFT(311),
  [1556] = {.count = 1, .reusable = true}, SHIFT(310),
  [1558] = {.count = 1, .reusable = true}, SHIFT(309),
  [1560] = {.count = 1, .reusable = true}, SHIFT(303),
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
