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
#define STATE_COUNT 659
#define SYMBOL_COUNT 209
#define ALIAS_COUNT 0
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 4
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
  aux_sym_volume_token1 = 24,
  aux_sym_workdir_token1 = 25,
  sym_arg_name = 26,
  aux_sym_arg_default_token1 = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_arg_default_token2 = 29,
  aux_sym_arg_default_token3 = 30,
  anon_sym_DASH_DASHchown_EQ = 31,
  aux_sym__from_layer_token1 = 32,
  aux_sym_from_layer_token1 = 33,
  anon_sym_DOLLAR = 34,
  aux_sym_from_layer_token2 = 35,
  aux_sym_from_layer_token3 = 36,
  aux_sym_from_layer_token4 = 37,
  aux_sym_from_layer_token5 = 38,
  aux_sym_from_layer_token6 = 39,
  aux_sym_from_layer_token7 = 40,
  aux_sym_from_layer_token8 = 41,
  aux_sym_from_layer_token9 = 42,
  aux_sym_from_layer_token10 = 43,
  aux_sym_from_layer_token11 = 44,
  aux_sym_from_layer_token12 = 45,
  aux_sym_from_layer_token13 = 46,
  aux_sym_from_layer_token14 = 47,
  aux_sym_from_layer_token15 = 48,
  aux_sym_from_layer_token16 = 49,
  anon_sym_EQ2 = 50,
  aux_sym_env_key_token1 = 51,
  aux_sym_env_value_token1 = 52,
  anon_sym_DASH = 53,
  aux_sym__port_part_token1 = 54,
  anon_sym_SLASH = 55,
  aux_sym_port_protocol_token1 = 56,
  aux_sym_port_protocol_token2 = 57,
  aux_sym_platform_token1 = 58,
  aux_sym__repository_start_token1 = 59,
  aux_sym__repository_start_token2 = 60,
  aux_sym__repository_start_token3 = 61,
  aux_sym__repository_start_token4 = 62,
  aux_sym__repository_start_token5 = 63,
  aux_sym__repository_start_token6 = 64,
  aux_sym__repository_start_token7 = 65,
  aux_sym__repository_start_token8 = 66,
  aux_sym__repository_start_token9 = 67,
  aux_sym__repository_start_token10 = 68,
  sym_hc_none = 69,
  anon_sym_DASH_DASHinterval = 70,
  aux_sym_hc_interval_token1 = 71,
  anon_sym_DASH_DASHtimeout = 72,
  anon_sym_DASH_DASHstart_DASHperiod = 73,
  anon_sym_DASH_DASHretries = 74,
  aux_sym__hc_command_token1 = 75,
  sym_signal_num = 76,
  aux_sym_signal_name_token1 = 77,
  aux_sym_signal_name_token2 = 78,
  aux_sym_user_name_token1 = 79,
  aux_sym_user_id_token1 = 80,
  aux_sym_path_token1 = 81,
  aux_sym_path_token2 = 82,
  aux_sym_path_token3 = 83,
  aux_sym_path_token4 = 84,
  anon_sym_LBRACE = 85,
  anon_sym_RBRACE = 86,
  anon_sym_COLON_DASH = 87,
  aux_sym_variable_default_value_token1 = 88,
  anon_sym_COLON_PLUS = 89,
  sym__docker_variable = 90,
  sym_template_expr_curly_braces = 91,
  sym_template_expr_percent_signs = 92,
  aux_sym_template_expr_less_than_equals_token1 = 93,
  aux_sym_template_expr_less_than_equals_token2 = 94,
  aux_sym_template_expr_less_than_equals_token3 = 95,
  sym__space = 96,
  sym__blank_line = 97,
  sym__space_no_newline = 98,
  sym_comment = 99,
  anon_sym_COMMA = 100,
  anon_sym_RBRACK = 101,
  anon_sym_SEMI = 102,
  aux_sym__json_array_item_single_token1 = 103,
  aux_sym__json_array_item_double_token1 = 104,
  sym_escape_directive = 105,
  sym_line_continuation = 106,
  sym__json_array_start = 107,
  sym__anything_ex = 108,
  sym_dockerfile = 109,
  sym__directive = 110,
  sym_add = 111,
  sym_arg = 112,
  sym_cmd = 113,
  sym_copy = 114,
  sym_entrypoint = 115,
  sym_env = 116,
  sym_expose = 117,
  sym_from = 118,
  sym_healthcheck = 119,
  sym_label = 120,
  sym_maintainer = 121,
  sym_onbuild = 122,
  sym_run = 123,
  sym_shell = 124,
  sym_stopsignal = 125,
  sym_user = 126,
  sym_volume = 127,
  sym_workdir = 128,
  sym_arg_default = 129,
  sym__chown = 130,
  sym__from_layer = 131,
  sym_from_layer = 132,
  sym_chown = 133,
  sym__env_pairs = 134,
  sym_env_pair_eq = 135,
  sym_env_pair = 136,
  sym_env_key = 137,
  sym_env_value = 138,
  sym__port_spec = 139,
  sym_mapped_port = 140,
  sym_mapped_no_lhs = 141,
  sym__port = 142,
  sym_port = 143,
  sym_port_range = 144,
  sym__port_part = 145,
  sym_port_protocol = 146,
  sym_platform = 147,
  sym_repository = 148,
  sym__repository_start = 149,
  sym__repository_continued = 150,
  sym_image = 151,
  sym_tag = 152,
  sym_digest = 153,
  sym_as_name = 154,
  sym__hc_interval = 155,
  sym_hc_interval = 156,
  sym__hc_timeout = 157,
  sym_hc_timeout = 158,
  sym__hc_start_period = 159,
  sym_hc_start_period = 160,
  sym__hc_retries = 161,
  sym_hc_retries = 162,
  sym__hc_options = 163,
  sym__hc_command = 164,
  sym_hc_command = 165,
  sym__labels = 166,
  sym_label_pair_eq = 167,
  sym_label_pair = 168,
  sym_label_key = 169,
  sym_label_value = 170,
  sym_signal_name = 171,
  sym_user_name = 172,
  sym_user_group = 173,
  sym_user_id = 174,
  sym_user_group_id = 175,
  sym_path = 176,
  aux_sym__paths = 177,
  aux_sym__anything = 178,
  sym_docker_variable = 179,
  sym_variable_default_value = 180,
  sym_variable_this_or_null = 181,
  sym_template_expr_less_than_equals = 182,
  sym__anything_or_json_array = 183,
  sym_json_array = 184,
  sym_json_array_item = 185,
  aux_sym__json_array_item_single = 186,
  aux_sym__json_array_item_double = 187,
  aux_sym_dockerfile_repeat1 = 188,
  aux_sym_copy_repeat1 = 189,
  aux_sym_expose_repeat1 = 190,
  aux_sym_healthcheck_repeat1 = 191,
  aux_sym_arg_default_repeat1 = 192,
  aux_sym_arg_default_repeat2 = 193,
  aux_sym_from_layer_repeat1 = 194,
  aux_sym_from_layer_repeat2 = 195,
  aux_sym_from_layer_repeat3 = 196,
  aux_sym_from_layer_repeat4 = 197,
  aux_sym__env_pairs_repeat1 = 198,
  aux_sym_repository_repeat1 = 199,
  aux_sym__repository_start_repeat1 = 200,
  aux_sym__repository_start_repeat2 = 201,
  aux_sym__repository_start_repeat3 = 202,
  aux_sym__repository_start_repeat4 = 203,
  aux_sym__labels_repeat1 = 204,
  aux_sym_path_repeat1 = 205,
  aux_sym_path_repeat2 = 206,
  aux_sym_template_expr_less_than_equals_repeat1 = 207,
  aux_sym_json_array_repeat1 = 208,
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
  [anon_sym_DOLLAR] = "$",
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
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SEMI] = ";",
  [aux_sym__json_array_item_single_token1] = "_json_array_item_single_token1",
  [aux_sym__json_array_item_double_token1] = "_json_array_item_double_token1",
  [sym_escape_directive] = "escape_directive",
  [sym_line_continuation] = "line_continuation",
  [sym__json_array_start] = "_json_array_start",
  [sym__anything_ex] = "_anything_ex",
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
  [sym_json_array] = "json_array",
  [sym_json_array_item] = "json_array_item",
  [aux_sym__json_array_item_single] = "_json_array_item_single",
  [aux_sym__json_array_item_double] = "_json_array_item_double",
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
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
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
  [anon_sym_DOLLAR] = {
    .visible = true,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__json_array_item_single_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_array_item_double_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym__json_array_start] = {
    .visible = false,
    .named = true,
  },
  [sym__anything_ex] = {
    .visible = false,
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
  [sym_json_array] = {
    .visible = true,
    .named = true,
  },
  [sym_json_array_item] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__json_array_item_single] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_array_item_double] = {
    .visible = false,
    .named = false,
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
  [aux_sym_json_array_repeat1] = {
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
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(318);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == ',') ADVANCE(1011);
      if (lookahead == '-') ADVANCE(348);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == ':') ADVANCE(244);
      if (lookahead == ';') ADVANCE(1013);
      if (lookahead == '=') ADVANCE(332);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(276);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(278);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(275);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == ']') ADVANCE(1012);
      if (lookahead == '{') ADVANCE(966);
      if (lookahead == '}') ADVANCE(967);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(984);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(875);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(885);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(921);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(940);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(891);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(876);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(877);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(922);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(951);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(901);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(944);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(928);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(930);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(984);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(875);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(885);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(921);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(940);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(891);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(876);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(877);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(922);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(951);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(901);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(944);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(928);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(930);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(875);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(999);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == ';') ADVANCE(1013);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(177);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(121);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(162);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(164);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(999);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == ':') ADVANCE(245);
      if (lookahead == '=') ADVANCE(332);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(177);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(121);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(162);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(164);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(985);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(999);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(177);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(121);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(162);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(164);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(985);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == ':') ADVANCE(245);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(742);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(763);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(714);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(699);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(700);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(745);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(774);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(724);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(767);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(751);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(753);
      if (lookahead == '{') ADVANCE(306);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(380);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(742);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(763);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(714);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(699);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(700);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(745);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(774);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(724);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(767);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(751);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(753);
      if (lookahead == '{') ADVANCE(306);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(380);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(708);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(742);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(763);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(714);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(699);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(700);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(745);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(774);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(724);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(767);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(751);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(753);
      if (lookahead == '{') ADVANCE(306);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(381);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == ':') ADVANCE(245);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(409);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(443);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(445);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(464);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(425);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(468);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(452);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(454);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(409);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(443);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(445);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(464);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(425);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(468);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(452);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(454);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(409);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(443);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(445);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(464);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(475);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(425);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(468);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(452);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(454);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(580);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == ':') ADVANCE(245);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(608);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(642);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(663);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(614);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(599);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(600);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(624);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(667);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(651);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(653);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(378);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(580);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(608);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(642);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(663);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(614);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(599);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(600);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(624);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(667);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(651);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(653);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(378);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(580);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(608);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(642);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(644);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(663);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(614);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(599);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(600);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(674);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(624);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(667);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(651);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(653);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(379);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(579);
      if (lookahead == '%') ADVANCE(318);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == ':') ADVANCE(245);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(563);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(514);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(500);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(574);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(524);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(567);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(551);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(553);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(376);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(579);
      if (lookahead == '%') ADVANCE(318);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '@') ADVANCE(246);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(563);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(514);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(500);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(574);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(524);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(567);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(551);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(553);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(376);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '#') ADVANCE(579);
      if (lookahead == '%') ADVANCE(318);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(542);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(563);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(514);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(500);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(574);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(524);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(567);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(551);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(553);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(223);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(999);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(320);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == ',') ADVANCE(1011);
      if (lookahead == '-') ADVANCE(347);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '=') ADVANCE(332);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(121);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(162);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(164);
      if (lookahead == ']') ADVANCE(1012);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(983);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(1016);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1017);
      if (lookahead != 0) ADVANCE(1017);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '#') ADVANCE(999);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead == '=') ADVANCE(332);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(986);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(986);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '#') ADVANCE(977);
      if (lookahead == '%') ADVANCE(64);
      if (lookahead == '?') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(978);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '%') ADVANCE(318);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(299);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(296);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(297);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '{') ADVANCE(306);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(303);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(302);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '#') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '#') ADVANCE(1014);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1015);
      if (lookahead != 0) ADVANCE(1015);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '#') ADVANCE(975);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(976);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '#') ADVANCE(973);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(974);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(981);
      if (lookahead == '#') ADVANCE(969);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(970);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(970);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(344);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '-') ADVANCE(814);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(875);
      END_STATE();
    case 38:
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(810);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(875);
      END_STATE();
    case 39:
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(999);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(807);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(999);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(342);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(999);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(63);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(166);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == '}') ADVANCE(967);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(999);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(999);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(999);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(796);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(698);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '{') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(480);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(580);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(579);
      if (lookahead == '%') ADVANCE(318);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(358);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(318);
      if (lookahead == '-') ADVANCE(353);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '{') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(358);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(318);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == 's') ADVANCE(363);
      if (lookahead == '{') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(291);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(318);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '{') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0 &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(292);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(972);
      if (lookahead == '{') ADVANCE(965);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(972);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(371);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(981);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(371);
      END_STATE();
    case 57:
      if (lookahead == '\'') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '+') ADVANCE(971);
      if (lookahead == '-') ADVANCE(968);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(875);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(327);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(327);
      if (lookahead != 0) ADVANCE(980);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(327);
      if (lookahead != 0) ADVANCE(979);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(798);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(795);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(799);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(797);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 95:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 96:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(326);
      END_STATE();
    case 97:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(792);
      END_STATE();
    case 98:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(790);
      END_STATE();
    case 99:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(329);
      END_STATE();
    case 100:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(331);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 106:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(189);
      END_STATE();
    case 107:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(248);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(800);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(171);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 128:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(804);
      END_STATE();
    case 129:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 130:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 131:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 132:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(122);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 133:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 141:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 142:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(211);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 150:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 151:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(200);
      END_STATE();
    case 152:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(115);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 153:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(173);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 162:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 163:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 164:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 165:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 166:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 167:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 168:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 169:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 170:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 171:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 172:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 173:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 174:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 178:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 180:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 181:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 182:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      END_STATE();
    case 183:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 184:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 185:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(197);
      END_STATE();
    case 186:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 187:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 188:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 189:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 190:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 191:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 192:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 193:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(346);
      END_STATE();
    case 194:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 195:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 196:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 197:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 198:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 199:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 200:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 201:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 202:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 203:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 204:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 205:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 206:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 207:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 208:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 209:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 210:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 211:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 212:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1017);
      END_STATE();
    case 213:
      if (lookahead == '\'' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1015);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(806);
      END_STATE();
    case 215:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 216:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(216);
      END_STATE();
    case 217:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(341);
      END_STATE();
    case 218:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(43);
      END_STATE();
    case 219:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(283);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(286);
      END_STATE();
    case 221:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 222:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(875);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_from_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '\r') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '\\') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_arg_default_token2);
      if (lookahead == '\r') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_arg_default_token2);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_arg_default_token3);
      if (lookahead == '\r') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_arg_default_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__from_layer_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '%') ADVANCE(322);
      if (lookahead == '<') ADVANCE(995);
      if (lookahead == '{') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(294);
      if (lookahead == '%') ADVANCE(322);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '{') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_from_layer_token2);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_from_layer_token3);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(295);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(324);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(305);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(312);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(314);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      if (lookahead == '%') ADVANCE(317);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      if (lookahead == '%') ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      if (lookahead == '%') ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      if (lookahead == '%') ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      if (lookahead == '=') ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_from_layer_token14);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      if (lookahead == '=') ADVANCE(328);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      if (lookahead == '=') ADVANCE(330);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(333);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\n') ADVANCE(1005);
      if (lookahead == '\r') ADVANCE(1001);
      if (lookahead == '"') ADVANCE(1002);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(990);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1001);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\n') ADVANCE(1005);
      if (lookahead == '\r') ADVANCE(1002);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(989);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1002);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\r') ADVANCE(1000);
      if (lookahead == '"') ADVANCE(338);
      if (lookahead == '\'') ADVANCE(1002);
      if (lookahead == '\\') ADVANCE(988);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\r') ADVANCE(1001);
      if (lookahead == '"') ADVANCE(1002);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(990);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\r') ADVANCE(1002);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(989);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1002);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(1000);
      if (lookahead == '\'') ADVANCE(1001);
      if (lookahead == '\\') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '-') ADVANCE(367);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '2') ADVANCE(355);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '5') ADVANCE(356);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '6') ADVANCE(357);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(994);
      if (lookahead == '{') ADVANCE(781);
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
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(242);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(361);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(359);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(364);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(372);
      if (lookahead == '%') ADVANCE(786);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '{') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(370);
      END_STATE();
    case 371:
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
          lookahead != '}') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(374);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(375);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(376);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(377);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(378);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(379);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(380);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(381);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(386);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(389);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(390);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(391);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(394);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(395);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(398);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(410);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(416);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(411);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(472);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(463);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
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
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(485);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(488);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(489);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(490);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(494);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(496);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(497);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(509);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(515);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(510);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(571);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
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
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(585);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(586);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(588);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(589);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(590);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(591);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(594);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(597);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
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
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(609);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(615);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
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
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
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
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(610);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(671);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
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
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
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
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
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
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(662);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
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
          lookahead != '}') ADVANCE(679);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '<') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
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
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(680);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(681);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(682);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(683);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(684);
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
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(685);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(686);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(687);
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
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(688);
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
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(689);
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
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(690);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(691);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(692);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(693);
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
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(694);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(695);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(696);
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
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(705);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(727);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(734);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(728);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(738);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(775);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(717);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(733);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(725);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(709);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(721);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(680);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(682);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(731);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(692);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(706);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(739);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(764);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(736);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(691);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(766);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(681);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(748);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(707);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(715);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(754);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(713);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(746);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(750);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(740);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(747);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(765);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(711);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(697);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(770);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(776);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(688);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(689);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(696);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(737);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(712);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(686);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(710);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(757);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(719);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(771);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(759);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(704);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(773);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(772);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(703);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(684);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(720);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(735);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(761);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(758);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(730);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(777);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(768);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(755);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(756);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(732);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(778);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(752);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(687);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(716);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(726);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(718);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(723);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(762);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(683);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(694);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(702);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(749);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(729);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(743);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(685);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(760);
      if (lookahead == '{') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(698);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(779);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(780);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(782);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(783);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '%') ADVANCE(785);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '%') ADVANCE(787);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '=') ADVANCE(789);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '=') ADVANCE(791);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(796);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretries);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__hc_command_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (lookahead == '+') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(806);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ':') ADVANCE(807);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(809);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead == '$') ADVANCE(958);
      if (lookahead == '\\') ADVANCE(811);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(999);
      if (lookahead != 0) ADVANCE(810);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(810);
      if (lookahead == '$') ADVANCE(958);
      if (lookahead == '\\') ADVANCE(811);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(999);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '-') ADVANCE(828);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '-') ADVANCE(842);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '-') ADVANCE(821);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '/') ADVANCE(793);
      if (lookahead == '\\') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '=') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '=') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'a') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'c') ADVANCE(829);
      if (lookahead == 'f') ADVANCE(845);
      if (lookahead == 'i') ADVANCE(836);
      if (lookahead == 'r') ADVANCE(824);
      if (lookahead == 's') ADVANCE(849);
      if (lookahead == 't') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'c') ADVANCE(829);
      if (lookahead == 'f') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'd') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'e') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'e') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'e') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'e') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'f') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'h') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'i') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'l') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'm') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'm') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'n') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'n') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'o') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'o') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'o') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'o') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'p') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'r') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'r') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'r') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'r') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'r') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 's') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 't') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 't') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 't') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 't') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 't') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'u') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'v') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == 'w') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(882);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(904);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(911);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(905);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(915);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(952);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(894);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(910);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(902);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(886);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(898);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(857);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(908);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(916);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(941);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(913);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(868);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(943);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(925);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(884);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(892);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(931);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(890);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(923);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(927);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(917);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(924);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(942);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(888);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(874);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(947);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(953);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(865);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(873);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(914);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(889);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(863);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(887);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(934);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(948);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(936);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(881);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(950);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(949);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(880);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(861);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(912);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(918);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(938);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(935);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(946);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(907);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(954);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(945);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(932);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(933);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(909);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(955);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(929);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(864);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(870);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(872);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(893);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(903);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(895);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(939);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(860);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(871);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(879);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(926);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(906);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(920);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(862);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(875);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(875);
      if (lookahead == '$') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(956);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(959);
      if (lookahead == '"') ADVANCE(999);
      if (lookahead == '$') ADVANCE(964);
      if (lookahead != 0) ADVANCE(959);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '#') ADVANCE(959);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(962);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '#') ADVANCE(959);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(962);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '$') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(962);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_path_token4);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(307);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\r') ADVANCE(969);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(969);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(970);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 972:
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
          lookahead != '=' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(972);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\r') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(973);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(974);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\r') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(975);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(976);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\r') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(977);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(978);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(983);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(983);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(984);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(983);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(985);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(986);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t') ADVANCE(999);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t') ADVANCE(999);
      if (lookahead == '\n') ADVANCE(1003);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t') ADVANCE(1001);
      if (lookahead == '\n') ADVANCE(1004);
      if (lookahead == '\r') ADVANCE(1001);
      if (lookahead == ' ') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(337);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t') ADVANCE(1001);
      if (lookahead == '\n') ADVANCE(1005);
      if (lookahead == '\r') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(336);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(999);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(999);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(792);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(790);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(329);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(331);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1016);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead == '\'' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1014);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead != 0) ADVANCE(999);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(1000);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(1006);
      if (lookahead != 0) ADVANCE(1000);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(1001);
      if (lookahead == '\'') ADVANCE(342);
      if (lookahead == '\\') ADVANCE(1008);
      if (lookahead != 0) ADVANCE(1001);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(1002);
      if (lookahead == '"') ADVANCE(339);
      if (lookahead == '\'') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(1002);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(1003);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(218);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(1004);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1010);
      if (lookahead == '\r') ADVANCE(1005);
      if (lookahead == '\'') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(216);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1003);
      if (lookahead == '\r') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(1000);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(999);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1004);
      if (lookahead == '\r') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1002);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1001);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1005);
      if (lookahead == '\r') ADVANCE(1001);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(1008);
      if (lookahead != 0) ADVANCE(1001);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1005);
      if (lookahead == '\r') ADVANCE(1002);
      if (lookahead == '"') ADVANCE(339);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == '\\') ADVANCE(1007);
      if (lookahead != 0) ADVANCE(1002);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1010);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__json_array_item_single_token1);
      if (lookahead == '\r') ADVANCE(1014);
      if (lookahead == '\\') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(1014);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__json_array_item_single_token1);
      if (lookahead == '\\') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(1015);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__json_array_item_double_token1);
      if (lookahead == '\r') ADVANCE(1016);
      if (lookahead == '\\') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1016);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__json_array_item_double_token1);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1017);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3, .external_lex_state = 2},
  [2] = {.lex_state = 3, .external_lex_state = 3},
  [3] = {.lex_state = 3, .external_lex_state = 3},
  [4] = {.lex_state = 3, .external_lex_state = 3},
  [5] = {.lex_state = 3, .external_lex_state = 3},
  [6] = {.lex_state = 3, .external_lex_state = 3},
  [7] = {.lex_state = 3, .external_lex_state = 3},
  [8] = {.lex_state = 18, .external_lex_state = 3},
  [9] = {.lex_state = 6, .external_lex_state = 3},
  [10] = {.lex_state = 9, .external_lex_state = 3},
  [11] = {.lex_state = 12, .external_lex_state = 3},
  [12] = {.lex_state = 12, .external_lex_state = 3},
  [13] = {.lex_state = 15, .external_lex_state = 3},
  [14] = {.lex_state = 9, .external_lex_state = 3},
  [15] = {.lex_state = 15, .external_lex_state = 3},
  [16] = {.lex_state = 6, .external_lex_state = 3},
  [17] = {.lex_state = 15, .external_lex_state = 3},
  [18] = {.lex_state = 6, .external_lex_state = 3},
  [19] = {.lex_state = 9, .external_lex_state = 3},
  [20] = {.lex_state = 12, .external_lex_state = 3},
  [21] = {.lex_state = 12, .external_lex_state = 3},
  [22] = {.lex_state = 9, .external_lex_state = 3},
  [23] = {.lex_state = 9, .external_lex_state = 3},
  [24] = {.lex_state = 9, .external_lex_state = 3},
  [25] = {.lex_state = 15, .external_lex_state = 3},
  [26] = {.lex_state = 9, .external_lex_state = 3},
  [27] = {.lex_state = 6, .external_lex_state = 3},
  [28] = {.lex_state = 3, .external_lex_state = 3},
  [29] = {.lex_state = 16, .external_lex_state = 3},
  [30] = {.lex_state = 7, .external_lex_state = 3},
  [31] = {.lex_state = 10, .external_lex_state = 3},
  [32] = {.lex_state = 10, .external_lex_state = 3},
  [33] = {.lex_state = 16, .external_lex_state = 3},
  [34] = {.lex_state = 13, .external_lex_state = 3},
  [35] = {.lex_state = 13, .external_lex_state = 3},
  [36] = {.lex_state = 16, .external_lex_state = 3},
  [37] = {.lex_state = 7, .external_lex_state = 3},
  [38] = {.lex_state = 3, .external_lex_state = 3},
  [39] = {.lex_state = 13, .external_lex_state = 3},
  [40] = {.lex_state = 10, .external_lex_state = 3},
  [41] = {.lex_state = 7, .external_lex_state = 3},
  [42] = {.lex_state = 10, .external_lex_state = 3},
  [43] = {.lex_state = 2, .external_lex_state = 3},
  [44] = {.lex_state = 3, .external_lex_state = 3},
  [45] = {.lex_state = 10, .external_lex_state = 3},
  [46] = {.lex_state = 2, .external_lex_state = 3},
  [47] = {.lex_state = 7, .external_lex_state = 3},
  [48] = {.lex_state = 1, .external_lex_state = 3},
  [49] = {.lex_state = 2, .external_lex_state = 3},
  [50] = {.lex_state = 1, .external_lex_state = 3},
  [51] = {.lex_state = 16, .external_lex_state = 3},
  [52] = {.lex_state = 1, .external_lex_state = 3},
  [53] = {.lex_state = 2, .external_lex_state = 3},
  [54] = {.lex_state = 2, .external_lex_state = 3},
  [55] = {.lex_state = 9, .external_lex_state = 3},
  [56] = {.lex_state = 12, .external_lex_state = 3},
  [57] = {.lex_state = 13, .external_lex_state = 3},
  [58] = {.lex_state = 9, .external_lex_state = 3},
  [59] = {.lex_state = 15, .external_lex_state = 3},
  [60] = {.lex_state = 6, .external_lex_state = 3},
  [61] = {.lex_state = 3, .external_lex_state = 3},
  [62] = {.lex_state = 12, .external_lex_state = 3},
  [63] = {.lex_state = 15, .external_lex_state = 3},
  [64] = {.lex_state = 6, .external_lex_state = 3},
  [65] = {.lex_state = 10, .external_lex_state = 3},
  [66] = {.lex_state = 3, .external_lex_state = 3},
  [67] = {.lex_state = 10, .external_lex_state = 3},
  [68] = {.lex_state = 4, .external_lex_state = 3},
  [69] = {.lex_state = 1, .external_lex_state = 3},
  [70] = {.lex_state = 9, .external_lex_state = 3},
  [71] = {.lex_state = 3, .external_lex_state = 3},
  [72] = {.lex_state = 6, .external_lex_state = 3},
  [73] = {.lex_state = 1, .external_lex_state = 3},
  [74] = {.lex_state = 4, .external_lex_state = 3},
  [75] = {.lex_state = 6, .external_lex_state = 3},
  [76] = {.lex_state = 15, .external_lex_state = 3},
  [77] = {.lex_state = 12, .external_lex_state = 3},
  [78] = {.lex_state = 3, .external_lex_state = 3},
  [79] = {.lex_state = 3, .external_lex_state = 3},
  [80] = {.lex_state = 4, .external_lex_state = 3},
  [81] = {.lex_state = 1, .external_lex_state = 3},
  [82] = {.lex_state = 1, .external_lex_state = 3},
  [83] = {.lex_state = 1, .external_lex_state = 3},
  [84] = {.lex_state = 9, .external_lex_state = 3},
  [85] = {.lex_state = 1, .external_lex_state = 3},
  [86] = {.lex_state = 1, .external_lex_state = 3},
  [87] = {.lex_state = 1, .external_lex_state = 3},
  [88] = {.lex_state = 3, .external_lex_state = 3},
  [89] = {.lex_state = 3, .external_lex_state = 3},
  [90] = {.lex_state = 4, .external_lex_state = 3},
  [91] = {.lex_state = 1, .external_lex_state = 3},
  [92] = {.lex_state = 1, .external_lex_state = 3},
  [93] = {.lex_state = 12, .external_lex_state = 3},
  [94] = {.lex_state = 15, .external_lex_state = 3},
  [95] = {.lex_state = 14, .external_lex_state = 3},
  [96] = {.lex_state = 3, .external_lex_state = 3},
  [97] = {.lex_state = 8, .external_lex_state = 3},
  [98] = {.lex_state = 17, .external_lex_state = 3},
  [99] = {.lex_state = 3, .external_lex_state = 3},
  [100] = {.lex_state = 11, .external_lex_state = 3},
  [101] = {.lex_state = 2, .external_lex_state = 3},
  [102] = {.lex_state = 14, .external_lex_state = 3},
  [103] = {.lex_state = 8, .external_lex_state = 3},
  [104] = {.lex_state = 3, .external_lex_state = 3},
  [105] = {.lex_state = 2, .external_lex_state = 3},
  [106] = {.lex_state = 14, .external_lex_state = 3},
  [107] = {.lex_state = 17, .external_lex_state = 3},
  [108] = {.lex_state = 8, .external_lex_state = 3},
  [109] = {.lex_state = 2, .external_lex_state = 3},
  [110] = {.lex_state = 11, .external_lex_state = 3},
  [111] = {.lex_state = 11, .external_lex_state = 3},
  [112] = {.lex_state = 17, .external_lex_state = 3},
  [113] = {.lex_state = 2, .external_lex_state = 3},
  [114] = {.lex_state = 3, .external_lex_state = 3},
  [115] = {.lex_state = 2, .external_lex_state = 3},
  [116] = {.lex_state = 2, .external_lex_state = 3},
  [117] = {.lex_state = 2, .external_lex_state = 3},
  [118] = {.lex_state = 2, .external_lex_state = 3},
  [119] = {.lex_state = 3, .external_lex_state = 3},
  [120] = {.lex_state = 5, .external_lex_state = 3},
  [121] = {.lex_state = 5, .external_lex_state = 3},
  [122] = {.lex_state = 14, .external_lex_state = 3},
  [123] = {.lex_state = 5, .external_lex_state = 3},
  [124] = {.lex_state = 5, .external_lex_state = 3},
  [125] = {.lex_state = 5, .external_lex_state = 3},
  [126] = {.lex_state = 11, .external_lex_state = 3},
  [127] = {.lex_state = 8, .external_lex_state = 3},
  [128] = {.lex_state = 11, .external_lex_state = 3},
  [129] = {.lex_state = 11, .external_lex_state = 3},
  [130] = {.lex_state = 5, .external_lex_state = 3},
  [131] = {.lex_state = 11, .external_lex_state = 3},
  [132] = {.lex_state = 5, .external_lex_state = 3},
  [133] = {.lex_state = 17, .external_lex_state = 3},
  [134] = {.lex_state = 5, .external_lex_state = 3},
  [135] = {.lex_state = 4, .external_lex_state = 3},
  [136] = {.lex_state = 4, .external_lex_state = 3},
  [137] = {.lex_state = 4, .external_lex_state = 3},
  [138] = {.lex_state = 4, .external_lex_state = 3},
  [139] = {.lex_state = 3, .external_lex_state = 4},
  [140] = {.lex_state = 4, .external_lex_state = 3},
  [141] = {.lex_state = 4, .external_lex_state = 3},
  [142] = {.lex_state = 3, .external_lex_state = 4},
  [143] = {.lex_state = 4, .external_lex_state = 3},
  [144] = {.lex_state = 3, .external_lex_state = 4},
  [145] = {.lex_state = 4, .external_lex_state = 3},
  [146] = {.lex_state = 4, .external_lex_state = 3},
  [147] = {.lex_state = 4, .external_lex_state = 3},
  [148] = {.lex_state = 4, .external_lex_state = 3},
  [149] = {.lex_state = 4, .external_lex_state = 3},
  [150] = {.lex_state = 4, .external_lex_state = 3},
  [151] = {.lex_state = 4, .external_lex_state = 3},
  [152] = {.lex_state = 3, .external_lex_state = 4},
  [153] = {.lex_state = 4, .external_lex_state = 3},
  [154] = {.lex_state = 3, .external_lex_state = 4},
  [155] = {.lex_state = 4, .external_lex_state = 3},
  [156] = {.lex_state = 4, .external_lex_state = 3},
  [157] = {.lex_state = 4, .external_lex_state = 3},
  [158] = {.lex_state = 4, .external_lex_state = 3},
  [159] = {.lex_state = 3, .external_lex_state = 4},
  [160] = {.lex_state = 4, .external_lex_state = 3},
  [161] = {.lex_state = 4, .external_lex_state = 3},
  [162] = {.lex_state = 3, .external_lex_state = 3},
  [163] = {.lex_state = 4, .external_lex_state = 3},
  [164] = {.lex_state = 4, .external_lex_state = 3},
  [165] = {.lex_state = 3, .external_lex_state = 4},
  [166] = {.lex_state = 4, .external_lex_state = 3},
  [167] = {.lex_state = 4, .external_lex_state = 3},
  [168] = {.lex_state = 4, .external_lex_state = 3},
  [169] = {.lex_state = 4, .external_lex_state = 3},
  [170] = {.lex_state = 3, .external_lex_state = 4},
  [171] = {.lex_state = 4, .external_lex_state = 3},
  [172] = {.lex_state = 3, .external_lex_state = 3},
  [173] = {.lex_state = 4, .external_lex_state = 3},
  [174] = {.lex_state = 4, .external_lex_state = 3},
  [175] = {.lex_state = 4, .external_lex_state = 3},
  [176] = {.lex_state = 4, .external_lex_state = 3},
  [177] = {.lex_state = 4, .external_lex_state = 3},
  [178] = {.lex_state = 4, .external_lex_state = 3},
  [179] = {.lex_state = 3, .external_lex_state = 3},
  [180] = {.lex_state = 3, .external_lex_state = 3},
  [181] = {.lex_state = 4, .external_lex_state = 3},
  [182] = {.lex_state = 3, .external_lex_state = 3},
  [183] = {.lex_state = 3, .external_lex_state = 3},
  [184] = {.lex_state = 4, .external_lex_state = 3},
  [185] = {.lex_state = 3, .external_lex_state = 3},
  [186] = {.lex_state = 3, .external_lex_state = 3},
  [187] = {.lex_state = 4, .external_lex_state = 3},
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
  [230] = {.lex_state = 3, .external_lex_state = 3},
  [231] = {.lex_state = 3, .external_lex_state = 3},
  [232] = {.lex_state = 3, .external_lex_state = 3},
  [233] = {.lex_state = 3, .external_lex_state = 3},
  [234] = {.lex_state = 3, .external_lex_state = 3},
  [235] = {.lex_state = 3, .external_lex_state = 3},
  [236] = {.lex_state = 3, .external_lex_state = 3},
  [237] = {.lex_state = 3, .external_lex_state = 3},
  [238] = {.lex_state = 3, .external_lex_state = 3},
  [239] = {.lex_state = 3, .external_lex_state = 3},
  [240] = {.lex_state = 3, .external_lex_state = 3},
  [241] = {.lex_state = 37, .external_lex_state = 5},
  [242] = {.lex_state = 44, .external_lex_state = 3},
  [243] = {.lex_state = 52, .external_lex_state = 3},
  [244] = {.lex_state = 37, .external_lex_state = 5},
  [245] = {.lex_state = 52, .external_lex_state = 3},
  [246] = {.lex_state = 44, .external_lex_state = 3},
  [247] = {.lex_state = 18, .external_lex_state = 3},
  [248] = {.lex_state = 52, .external_lex_state = 3},
  [249] = {.lex_state = 52, .external_lex_state = 3},
  [250] = {.lex_state = 53, .external_lex_state = 3},
  [251] = {.lex_state = 53, .external_lex_state = 3},
  [252] = {.lex_state = 52, .external_lex_state = 3},
  [253] = {.lex_state = 44, .external_lex_state = 3},
  [254] = {.lex_state = 53, .external_lex_state = 3},
  [255] = {.lex_state = 53, .external_lex_state = 3},
  [256] = {.lex_state = 53, .external_lex_state = 3},
  [257] = {.lex_state = 53, .external_lex_state = 3},
  [258] = {.lex_state = 52, .external_lex_state = 3},
  [259] = {.lex_state = 52, .external_lex_state = 3},
  [260] = {.lex_state = 52, .external_lex_state = 3},
  [261] = {.lex_state = 52, .external_lex_state = 3},
  [262] = {.lex_state = 52, .external_lex_state = 3},
  [263] = {.lex_state = 54, .external_lex_state = 3},
  [264] = {.lex_state = 52, .external_lex_state = 3},
  [265] = {.lex_state = 52, .external_lex_state = 3},
  [266] = {.lex_state = 52, .external_lex_state = 3},
  [267] = {.lex_state = 52, .external_lex_state = 3},
  [268] = {.lex_state = 52, .external_lex_state = 3},
  [269] = {.lex_state = 52, .external_lex_state = 3},
  [270] = {.lex_state = 52, .external_lex_state = 3},
  [271] = {.lex_state = 52, .external_lex_state = 3},
  [272] = {.lex_state = 52, .external_lex_state = 3},
  [273] = {.lex_state = 52, .external_lex_state = 3},
  [274] = {.lex_state = 52, .external_lex_state = 3},
  [275] = {.lex_state = 52, .external_lex_state = 3},
  [276] = {.lex_state = 52, .external_lex_state = 3},
  [277] = {.lex_state = 52, .external_lex_state = 3},
  [278] = {.lex_state = 52, .external_lex_state = 3},
  [279] = {.lex_state = 37, .external_lex_state = 5},
  [280] = {.lex_state = 52, .external_lex_state = 3},
  [281] = {.lex_state = 52, .external_lex_state = 3},
  [282] = {.lex_state = 52, .external_lex_state = 3},
  [283] = {.lex_state = 18, .external_lex_state = 3},
  [284] = {.lex_state = 52, .external_lex_state = 3},
  [285] = {.lex_state = 52, .external_lex_state = 3},
  [286] = {.lex_state = 52, .external_lex_state = 3},
  [287] = {.lex_state = 52, .external_lex_state = 3},
  [288] = {.lex_state = 52, .external_lex_state = 3},
  [289] = {.lex_state = 52, .external_lex_state = 3},
  [290] = {.lex_state = 52, .external_lex_state = 3},
  [291] = {.lex_state = 52, .external_lex_state = 3},
  [292] = {.lex_state = 52, .external_lex_state = 3},
  [293] = {.lex_state = 52, .external_lex_state = 3},
  [294] = {.lex_state = 52, .external_lex_state = 3},
  [295] = {.lex_state = 52, .external_lex_state = 3},
  [296] = {.lex_state = 52, .external_lex_state = 3},
  [297] = {.lex_state = 38, .external_lex_state = 5},
  [298] = {.lex_state = 38, .external_lex_state = 5},
  [299] = {.lex_state = 18, .external_lex_state = 3},
  [300] = {.lex_state = 37, .external_lex_state = 5},
  [301] = {.lex_state = 18, .external_lex_state = 3},
  [302] = {.lex_state = 18, .external_lex_state = 3},
  [303] = {.lex_state = 37, .external_lex_state = 5},
  [304] = {.lex_state = 39, .external_lex_state = 3},
  [305] = {.lex_state = 40, .external_lex_state = 3},
  [306] = {.lex_state = 39, .external_lex_state = 3},
  [307] = {.lex_state = 40, .external_lex_state = 3},
  [308] = {.lex_state = 18, .external_lex_state = 6},
  [309] = {.lex_state = 51, .external_lex_state = 3},
  [310] = {.lex_state = 24, .external_lex_state = 3},
  [311] = {.lex_state = 25, .external_lex_state = 3},
  [312] = {.lex_state = 24, .external_lex_state = 3},
  [313] = {.lex_state = 24, .external_lex_state = 3},
  [314] = {.lex_state = 18, .external_lex_state = 3},
  [315] = {.lex_state = 24, .external_lex_state = 3},
  [316] = {.lex_state = 26, .external_lex_state = 3},
  [317] = {.lex_state = 27, .external_lex_state = 3},
  [318] = {.lex_state = 25, .external_lex_state = 3},
  [319] = {.lex_state = 28, .external_lex_state = 3},
  [320] = {.lex_state = 24, .external_lex_state = 3},
  [321] = {.lex_state = 18, .external_lex_state = 3},
  [322] = {.lex_state = 24, .external_lex_state = 3},
  [323] = {.lex_state = 24, .external_lex_state = 3},
  [324] = {.lex_state = 24, .external_lex_state = 3},
  [325] = {.lex_state = 44, .external_lex_state = 3},
  [326] = {.lex_state = 49, .external_lex_state = 3},
  [327] = {.lex_state = 48, .external_lex_state = 3},
  [328] = {.lex_state = 44, .external_lex_state = 3},
  [329] = {.lex_state = 50, .external_lex_state = 3},
  [330] = {.lex_state = 44, .external_lex_state = 3},
  [331] = {.lex_state = 44, .external_lex_state = 3},
  [332] = {.lex_state = 44, .external_lex_state = 3},
  [333] = {.lex_state = 44, .external_lex_state = 3},
  [334] = {.lex_state = 44, .external_lex_state = 3},
  [335] = {.lex_state = 44, .external_lex_state = 3},
  [336] = {.lex_state = 44, .external_lex_state = 3},
  [337] = {.lex_state = 18, .external_lex_state = 3},
  [338] = {.lex_state = 960, .external_lex_state = 3},
  [339] = {.lex_state = 44, .external_lex_state = 3},
  [340] = {.lex_state = 24, .external_lex_state = 3},
  [341] = {.lex_state = 18, .external_lex_state = 3},
  [342] = {.lex_state = 27, .external_lex_state = 3},
  [343] = {.lex_state = 18, .external_lex_state = 3},
  [344] = {.lex_state = 39, .external_lex_state = 3},
  [345] = {.lex_state = 960, .external_lex_state = 3},
  [346] = {.lex_state = 44, .external_lex_state = 3},
  [347] = {.lex_state = 49, .external_lex_state = 3},
  [348] = {.lex_state = 960, .external_lex_state = 3},
  [349] = {.lex_state = 49, .external_lex_state = 3},
  [350] = {.lex_state = 48, .external_lex_state = 3},
  [351] = {.lex_state = 51, .external_lex_state = 3},
  [352] = {.lex_state = 24, .external_lex_state = 3},
  [353] = {.lex_state = 50, .external_lex_state = 3},
  [354] = {.lex_state = 26, .external_lex_state = 3},
  [355] = {.lex_state = 18, .external_lex_state = 3},
  [356] = {.lex_state = 27, .external_lex_state = 3},
  [357] = {.lex_state = 18, .external_lex_state = 3},
  [358] = {.lex_state = 25, .external_lex_state = 3},
  [359] = {.lex_state = 38, .external_lex_state = 3},
  [360] = {.lex_state = 28, .external_lex_state = 3},
  [361] = {.lex_state = 18, .external_lex_state = 6},
  [362] = {.lex_state = 44, .external_lex_state = 3},
  [363] = {.lex_state = 960, .external_lex_state = 3},
  [364] = {.lex_state = 24, .external_lex_state = 3},
  [365] = {.lex_state = 28, .external_lex_state = 3},
  [366] = {.lex_state = 50, .external_lex_state = 3},
  [367] = {.lex_state = 960, .external_lex_state = 3},
  [368] = {.lex_state = 44, .external_lex_state = 3},
  [369] = {.lex_state = 24, .external_lex_state = 3},
  [370] = {.lex_state = 44, .external_lex_state = 3},
  [371] = {.lex_state = 44, .external_lex_state = 3},
  [372] = {.lex_state = 26, .external_lex_state = 3},
  [373] = {.lex_state = 44, .external_lex_state = 3},
  [374] = {.lex_state = 24, .external_lex_state = 3},
  [375] = {.lex_state = 44, .external_lex_state = 3},
  [376] = {.lex_state = 44, .external_lex_state = 3},
  [377] = {.lex_state = 44, .external_lex_state = 3},
  [378] = {.lex_state = 44, .external_lex_state = 3},
  [379] = {.lex_state = 44, .external_lex_state = 3},
  [380] = {.lex_state = 18, .external_lex_state = 6},
  [381] = {.lex_state = 24, .external_lex_state = 3},
  [382] = {.lex_state = 18, .external_lex_state = 6},
  [383] = {.lex_state = 48, .external_lex_state = 3},
  [384] = {.lex_state = 51, .external_lex_state = 3},
  [385] = {.lex_state = 25, .external_lex_state = 3},
  [386] = {.lex_state = 49, .external_lex_state = 3},
  [387] = {.lex_state = 50, .external_lex_state = 3},
  [388] = {.lex_state = 51, .external_lex_state = 3},
  [389] = {.lex_state = 48, .external_lex_state = 3},
  [390] = {.lex_state = 28, .external_lex_state = 3},
  [391] = {.lex_state = 27, .external_lex_state = 3},
  [392] = {.lex_state = 20, .external_lex_state = 3},
  [393] = {.lex_state = 960, .external_lex_state = 3},
  [394] = {.lex_state = 18, .external_lex_state = 3},
  [395] = {.lex_state = 49, .external_lex_state = 3},
  [396] = {.lex_state = 49, .external_lex_state = 3},
  [397] = {.lex_state = 960, .external_lex_state = 3},
  [398] = {.lex_state = 49, .external_lex_state = 3},
  [399] = {.lex_state = 40, .external_lex_state = 3},
  [400] = {.lex_state = 26, .external_lex_state = 3},
  [401] = {.lex_state = 26, .external_lex_state = 3},
  [402] = {.lex_state = 26, .external_lex_state = 3},
  [403] = {.lex_state = 960, .external_lex_state = 3},
  [404] = {.lex_state = 960, .external_lex_state = 3},
  [405] = {.lex_state = 26, .external_lex_state = 3},
  [406] = {.lex_state = 40, .external_lex_state = 3},
  [407] = {.lex_state = 55, .external_lex_state = 3},
  [408] = {.lex_state = 55, .external_lex_state = 3},
  [409] = {.lex_state = 44, .external_lex_state = 3},
  [410] = {.lex_state = 21, .external_lex_state = 3},
  [411] = {.lex_state = 961, .external_lex_state = 3},
  [412] = {.lex_state = 55, .external_lex_state = 3},
  [413] = {.lex_state = 55, .external_lex_state = 3},
  [414] = {.lex_state = 55, .external_lex_state = 3},
  [415] = {.lex_state = 55, .external_lex_state = 3},
  [416] = {.lex_state = 55, .external_lex_state = 3},
  [417] = {.lex_state = 23, .external_lex_state = 3},
  [418] = {.lex_state = 23, .external_lex_state = 3},
  [419] = {.lex_state = 23, .external_lex_state = 3},
  [420] = {.lex_state = 55, .external_lex_state = 3},
  [421] = {.lex_state = 56, .external_lex_state = 3},
  [422] = {.lex_state = 55, .external_lex_state = 3},
  [423] = {.lex_state = 55, .external_lex_state = 3},
  [424] = {.lex_state = 39, .external_lex_state = 3},
  [425] = {.lex_state = 55, .external_lex_state = 3},
  [426] = {.lex_state = 29, .external_lex_state = 3},
  [427] = {.lex_state = 21, .external_lex_state = 3},
  [428] = {.lex_state = 55, .external_lex_state = 3},
  [429] = {.lex_state = 55, .external_lex_state = 3},
  [430] = {.lex_state = 55, .external_lex_state = 3},
  [431] = {.lex_state = 18, .external_lex_state = 3},
  [432] = {.lex_state = 18, .external_lex_state = 3},
  [433] = {.lex_state = 30, .external_lex_state = 3},
  [434] = {.lex_state = 22, .external_lex_state = 3},
  [435] = {.lex_state = 55, .external_lex_state = 3},
  [436] = {.lex_state = 39, .external_lex_state = 3},
  [437] = {.lex_state = 18, .external_lex_state = 3},
  [438] = {.lex_state = 55, .external_lex_state = 3},
  [439] = {.lex_state = 22, .external_lex_state = 3},
  [440] = {.lex_state = 55, .external_lex_state = 3},
  [441] = {.lex_state = 55, .external_lex_state = 3},
  [442] = {.lex_state = 55, .external_lex_state = 3},
  [443] = {.lex_state = 29, .external_lex_state = 3},
  [444] = {.lex_state = 39, .external_lex_state = 3},
  [445] = {.lex_state = 55, .external_lex_state = 3},
  [446] = {.lex_state = 21, .external_lex_state = 3},
  [447] = {.lex_state = 30, .external_lex_state = 3},
  [448] = {.lex_state = 55, .external_lex_state = 3},
  [449] = {.lex_state = 55, .external_lex_state = 3},
  [450] = {.lex_state = 55, .external_lex_state = 3},
  [451] = {.lex_state = 22, .external_lex_state = 3},
  [452] = {.lex_state = 30, .external_lex_state = 3},
  [453] = {.lex_state = 18, .external_lex_state = 3},
  [454] = {.lex_state = 18, .external_lex_state = 3},
  [455] = {.lex_state = 55, .external_lex_state = 3},
  [456] = {.lex_state = 18, .external_lex_state = 3},
  [457] = {.lex_state = 18, .external_lex_state = 3},
  [458] = {.lex_state = 18, .external_lex_state = 3},
  [459] = {.lex_state = 18, .external_lex_state = 3},
  [460] = {.lex_state = 55, .external_lex_state = 3},
  [461] = {.lex_state = 55, .external_lex_state = 3},
  [462] = {.lex_state = 55, .external_lex_state = 3},
  [463] = {.lex_state = 55, .external_lex_state = 3},
  [464] = {.lex_state = 961, .external_lex_state = 3},
  [465] = {.lex_state = 18, .external_lex_state = 3},
  [466] = {.lex_state = 55, .external_lex_state = 3},
  [467] = {.lex_state = 18, .external_lex_state = 3},
  [468] = {.lex_state = 55, .external_lex_state = 3},
  [469] = {.lex_state = 18, .external_lex_state = 3},
  [470] = {.lex_state = 55, .external_lex_state = 3},
  [471] = {.lex_state = 55, .external_lex_state = 3},
  [472] = {.lex_state = 18, .external_lex_state = 3},
  [473] = {.lex_state = 55, .external_lex_state = 3},
  [474] = {.lex_state = 55, .external_lex_state = 3},
  [475] = {.lex_state = 29, .external_lex_state = 3},
  [476] = {.lex_state = 18, .external_lex_state = 4},
  [477] = {.lex_state = 18, .external_lex_state = 3},
  [478] = {.lex_state = 18, .external_lex_state = 3},
  [479] = {.lex_state = 18, .external_lex_state = 3},
  [480] = {.lex_state = 39, .external_lex_state = 3},
  [481] = {.lex_state = 47, .external_lex_state = 3},
  [482] = {.lex_state = 18, .external_lex_state = 4},
  [483] = {.lex_state = 18, .external_lex_state = 5},
  [484] = {.lex_state = 47, .external_lex_state = 3},
  [485] = {.lex_state = 39, .external_lex_state = 3},
  [486] = {.lex_state = 18, .external_lex_state = 3},
  [487] = {.lex_state = 18, .external_lex_state = 3},
  [488] = {.lex_state = 18, .external_lex_state = 3},
  [489] = {.lex_state = 18, .external_lex_state = 3},
  [490] = {.lex_state = 23, .external_lex_state = 3},
  [491] = {.lex_state = 18, .external_lex_state = 3},
  [492] = {.lex_state = 23, .external_lex_state = 3},
  [493] = {.lex_state = 23, .external_lex_state = 3},
  [494] = {.lex_state = 18, .external_lex_state = 3},
  [495] = {.lex_state = 18, .external_lex_state = 3},
  [496] = {.lex_state = 39, .external_lex_state = 3},
  [497] = {.lex_state = 23, .external_lex_state = 3},
  [498] = {.lex_state = 18, .external_lex_state = 4},
  [499] = {.lex_state = 18, .external_lex_state = 3},
  [500] = {.lex_state = 18, .external_lex_state = 3},
  [501] = {.lex_state = 23, .external_lex_state = 3},
  [502] = {.lex_state = 23, .external_lex_state = 3},
  [503] = {.lex_state = 41, .external_lex_state = 3},
  [504] = {.lex_state = 47, .external_lex_state = 3},
  [505] = {.lex_state = 18, .external_lex_state = 3},
  [506] = {.lex_state = 23, .external_lex_state = 3},
  [507] = {.lex_state = 23, .external_lex_state = 3},
  [508] = {.lex_state = 41, .external_lex_state = 3},
  [509] = {.lex_state = 18, .external_lex_state = 3},
  [510] = {.lex_state = 44, .external_lex_state = 3},
  [511] = {.lex_state = 23, .external_lex_state = 3},
  [512] = {.lex_state = 44, .external_lex_state = 3},
  [513] = {.lex_state = 18, .external_lex_state = 3},
  [514] = {.lex_state = 23, .external_lex_state = 3},
  [515] = {.lex_state = 18, .external_lex_state = 3},
  [516] = {.lex_state = 18, .external_lex_state = 3},
  [517] = {.lex_state = 23, .external_lex_state = 3},
  [518] = {.lex_state = 45, .external_lex_state = 3},
  [519] = {.lex_state = 18, .external_lex_state = 3},
  [520] = {.lex_state = 44, .external_lex_state = 3},
  [521] = {.lex_state = 18, .external_lex_state = 3},
  [522] = {.lex_state = 18, .external_lex_state = 3},
  [523] = {.lex_state = 23, .external_lex_state = 3},
  [524] = {.lex_state = 18, .external_lex_state = 3},
  [525] = {.lex_state = 18, .external_lex_state = 3},
  [526] = {.lex_state = 31, .external_lex_state = 3},
  [527] = {.lex_state = 32, .external_lex_state = 3},
  [528] = {.lex_state = 18, .external_lex_state = 3},
  [529] = {.lex_state = 23, .external_lex_state = 3},
  [530] = {.lex_state = 23, .external_lex_state = 3},
  [531] = {.lex_state = 23, .external_lex_state = 3},
  [532] = {.lex_state = 23, .external_lex_state = 3},
  [533] = {.lex_state = 23, .external_lex_state = 3},
  [534] = {.lex_state = 55, .external_lex_state = 3},
  [535] = {.lex_state = 18, .external_lex_state = 3},
  [536] = {.lex_state = 46, .external_lex_state = 3},
  [537] = {.lex_state = 18, .external_lex_state = 3},
  [538] = {.lex_state = 18, .external_lex_state = 3},
  [539] = {.lex_state = 18, .external_lex_state = 3},
  [540] = {.lex_state = 23, .external_lex_state = 3},
  [541] = {.lex_state = 18, .external_lex_state = 3},
  [542] = {.lex_state = 23, .external_lex_state = 3},
  [543] = {.lex_state = 44, .external_lex_state = 3},
  [544] = {.lex_state = 18, .external_lex_state = 3},
  [545] = {.lex_state = 23, .external_lex_state = 3},
  [546] = {.lex_state = 44, .external_lex_state = 3},
  [547] = {.lex_state = 44, .external_lex_state = 3},
  [548] = {.lex_state = 44, .external_lex_state = 3},
  [549] = {.lex_state = 44, .external_lex_state = 3},
  [550] = {.lex_state = 18, .external_lex_state = 3},
  [551] = {.lex_state = 31, .external_lex_state = 3},
  [552] = {.lex_state = 32, .external_lex_state = 3},
  [553] = {.lex_state = 18, .external_lex_state = 3},
  [554] = {.lex_state = 18, .external_lex_state = 3},
  [555] = {.lex_state = 18, .external_lex_state = 3},
  [556] = {.lex_state = 18, .external_lex_state = 3},
  [557] = {.lex_state = 44, .external_lex_state = 3},
  [558] = {.lex_state = 18, .external_lex_state = 3},
  [559] = {.lex_state = 18, .external_lex_state = 3},
  [560] = {.lex_state = 18, .external_lex_state = 3},
  [561] = {.lex_state = 23, .external_lex_state = 3},
  [562] = {.lex_state = 18, .external_lex_state = 3},
  [563] = {.lex_state = 44, .external_lex_state = 3},
  [564] = {.lex_state = 18, .external_lex_state = 3},
  [565] = {.lex_state = 23, .external_lex_state = 3},
  [566] = {.lex_state = 18, .external_lex_state = 3},
  [567] = {.lex_state = 32, .external_lex_state = 3},
  [568] = {.lex_state = 44, .external_lex_state = 3},
  [569] = {.lex_state = 18, .external_lex_state = 3},
  [570] = {.lex_state = 31, .external_lex_state = 3},
  [571] = {.lex_state = 32, .external_lex_state = 3},
  [572] = {.lex_state = 18, .external_lex_state = 3},
  [573] = {.lex_state = 18, .external_lex_state = 3},
  [574] = {.lex_state = 18, .external_lex_state = 3},
  [575] = {.lex_state = 31, .external_lex_state = 3},
  [576] = {.lex_state = 44, .external_lex_state = 3},
  [577] = {.lex_state = 32, .external_lex_state = 3},
  [578] = {.lex_state = 31, .external_lex_state = 3},
  [579] = {.lex_state = 32, .external_lex_state = 3},
  [580] = {.lex_state = 32, .external_lex_state = 3},
  [581] = {.lex_state = 31, .external_lex_state = 3},
  [582] = {.lex_state = 18, .external_lex_state = 3},
  [583] = {.lex_state = 23, .external_lex_state = 3},
  [584] = {.lex_state = 18, .external_lex_state = 3},
  [585] = {.lex_state = 18, .external_lex_state = 3},
  [586] = {.lex_state = 18, .external_lex_state = 3},
  [587] = {.lex_state = 31, .external_lex_state = 3},
  [588] = {.lex_state = 18, .external_lex_state = 3},
  [589] = {.lex_state = 23, .external_lex_state = 3},
  [590] = {.lex_state = 18, .external_lex_state = 3},
  [591] = {.lex_state = 18, .external_lex_state = 3},
  [592] = {.lex_state = 18, .external_lex_state = 3},
  [593] = {.lex_state = 23, .external_lex_state = 3},
  [594] = {.lex_state = 31, .external_lex_state = 3},
  [595] = {.lex_state = 32, .external_lex_state = 3},
  [596] = {.lex_state = 18, .external_lex_state = 3},
  [597] = {.lex_state = 23, .external_lex_state = 3},
  [598] = {.lex_state = 44, .external_lex_state = 3},
  [599] = {.lex_state = 18, .external_lex_state = 3},
  [600] = {.lex_state = 18, .external_lex_state = 3},
  [601] = {.lex_state = 18, .external_lex_state = 3},
  [602] = {.lex_state = 44, .external_lex_state = 3},
  [603] = {.lex_state = 18, .external_lex_state = 3},
  [604] = {.lex_state = 44, .external_lex_state = 3},
  [605] = {.lex_state = 44, .external_lex_state = 3},
  [606] = {.lex_state = 18, .external_lex_state = 3},
  [607] = {.lex_state = 44, .external_lex_state = 3},
  [608] = {.lex_state = 18, .external_lex_state = 3},
  [609] = {.lex_state = 18, .external_lex_state = 3},
  [610] = {.lex_state = 44, .external_lex_state = 3},
  [611] = {.lex_state = 18, .external_lex_state = 3},
  [612] = {.lex_state = 18, .external_lex_state = 3},
  [613] = {.lex_state = 44, .external_lex_state = 3},
  [614] = {.lex_state = 18, .external_lex_state = 3},
  [615] = {.lex_state = 18, .external_lex_state = 3},
  [616] = {.lex_state = 44, .external_lex_state = 3},
  [617] = {.lex_state = 44, .external_lex_state = 3},
  [618] = {.lex_state = 44, .external_lex_state = 3},
  [619] = {.lex_state = 18, .external_lex_state = 3},
  [620] = {.lex_state = 44, .external_lex_state = 3},
  [621] = {.lex_state = 18, .external_lex_state = 3},
  [622] = {.lex_state = 44, .external_lex_state = 3},
  [623] = {.lex_state = 33, .external_lex_state = 3},
  [624] = {.lex_state = 44, .external_lex_state = 3},
  [625] = {.lex_state = 44, .external_lex_state = 3},
  [626] = {.lex_state = 44, .external_lex_state = 3},
  [627] = {.lex_state = 18, .external_lex_state = 3},
  [628] = {.lex_state = 44, .external_lex_state = 3},
  [629] = {.lex_state = 18, .external_lex_state = 3},
  [630] = {.lex_state = 44, .external_lex_state = 3},
  [631] = {.lex_state = 33, .external_lex_state = 3},
  [632] = {.lex_state = 44, .external_lex_state = 3},
  [633] = {.lex_state = 18, .external_lex_state = 3},
  [634] = {.lex_state = 44, .external_lex_state = 3},
  [635] = {.lex_state = 18, .external_lex_state = 3},
  [636] = {.lex_state = 23, .external_lex_state = 3},
  [637] = {.lex_state = 55, .external_lex_state = 3},
  [638] = {.lex_state = 31, .external_lex_state = 3},
  [639] = {.lex_state = 32, .external_lex_state = 3},
  [640] = {.lex_state = 31, .external_lex_state = 3},
  [641] = {.lex_state = 32, .external_lex_state = 3},
  [642] = {.lex_state = 55, .external_lex_state = 3},
  [643] = {.lex_state = 32, .external_lex_state = 3},
  [644] = {.lex_state = 31, .external_lex_state = 3},
  [645] = {.lex_state = 18, .external_lex_state = 3},
  [646] = {.lex_state = 55, .external_lex_state = 3},
  [647] = {.lex_state = 32, .external_lex_state = 3},
  [648] = {.lex_state = 31, .external_lex_state = 3},
  [649] = {.lex_state = 23, .external_lex_state = 3},
  [650] = {.lex_state = 55, .external_lex_state = 3},
  [651] = {.lex_state = 55, .external_lex_state = 3},
  [652] = {.lex_state = 55, .external_lex_state = 3},
  [653] = {.lex_state = 55, .external_lex_state = 3},
  [654] = {.lex_state = 55, .external_lex_state = 3},
  [655] = {.lex_state = 55, .external_lex_state = 3},
  [656] = {.lex_state = 55, .external_lex_state = 3},
  [657] = {.lex_state = 55, .external_lex_state = 3},
  [658] = {.lex_state = 55, .external_lex_state = 3},
};

enum {
  ts_external_token_escape_directive = 0,
  ts_external_token_line_continuation = 1,
  ts_external_token__json_array_start = 2,
  ts_external_token__anything_ex = 3,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_escape_directive] = sym_escape_directive,
  [ts_external_token_line_continuation] = sym_line_continuation,
  [ts_external_token__json_array_start] = sym__json_array_start,
  [ts_external_token__anything_ex] = sym__anything_ex,
};

static bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_escape_directive] = true,
    [ts_external_token_line_continuation] = true,
    [ts_external_token__json_array_start] = true,
    [ts_external_token__anything_ex] = true,
  },
  [2] = {
    [ts_external_token_escape_directive] = true,
    [ts_external_token_line_continuation] = true,
  },
  [3] = {
    [ts_external_token_line_continuation] = true,
  },
  [4] = {
    [ts_external_token_line_continuation] = true,
    [ts_external_token__anything_ex] = true,
  },
  [5] = {
    [ts_external_token_line_continuation] = true,
    [ts_external_token__json_array_start] = true,
  },
  [6] = {
    [ts_external_token_line_continuation] = true,
    [ts_external_token__json_array_start] = true,
    [ts_external_token__anything_ex] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_from_token2] = ACTIONS(1),
    [sym_arg_name] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(1),
    [aux_sym__from_layer_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_escape_directive] = ACTIONS(1),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(1),
    [sym__anything_ex] = ACTIONS(1),
  },
  [1] = {
    [sym_dockerfile] = STATE(572),
    [sym__directive] = STATE(194),
    [sym_add] = STATE(194),
    [sym_arg] = STATE(194),
    [sym_cmd] = STATE(194),
    [sym_copy] = STATE(194),
    [sym_entrypoint] = STATE(194),
    [sym_env] = STATE(194),
    [sym_expose] = STATE(194),
    [sym_from] = STATE(194),
    [sym_healthcheck] = STATE(194),
    [sym_label] = STATE(194),
    [sym_maintainer] = STATE(194),
    [sym_onbuild] = STATE(194),
    [sym_run] = STATE(194),
    [sym_shell] = STATE(194),
    [sym_stopsignal] = STATE(194),
    [sym_user] = STATE(194),
    [sym_volume] = STATE(194),
    [sym_workdir] = STATE(194),
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
    [sym_escape_directive] = ACTIONS(47),
    [sym_line_continuation] = ACTIONS(5),
  },
  [2] = {
    [sym__directive] = STATE(194),
    [sym_add] = STATE(194),
    [sym_arg] = STATE(194),
    [sym_cmd] = STATE(194),
    [sym_copy] = STATE(194),
    [sym_entrypoint] = STATE(194),
    [sym_env] = STATE(194),
    [sym_expose] = STATE(194),
    [sym_from] = STATE(194),
    [sym_healthcheck] = STATE(194),
    [sym_label] = STATE(194),
    [sym_maintainer] = STATE(194),
    [sym_onbuild] = STATE(194),
    [sym_run] = STATE(194),
    [sym_shell] = STATE(194),
    [sym_stopsignal] = STATE(194),
    [sym_user] = STATE(194),
    [sym_volume] = STATE(194),
    [sym_workdir] = STATE(194),
    [aux_sym_dockerfile_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(49),
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
    [sym__directive] = STATE(194),
    [sym_add] = STATE(194),
    [sym_arg] = STATE(194),
    [sym_cmd] = STATE(194),
    [sym_copy] = STATE(194),
    [sym_entrypoint] = STATE(194),
    [sym_env] = STATE(194),
    [sym_expose] = STATE(194),
    [sym_from] = STATE(194),
    [sym_healthcheck] = STATE(194),
    [sym_label] = STATE(194),
    [sym_maintainer] = STATE(194),
    [sym_onbuild] = STATE(194),
    [sym_run] = STATE(194),
    [sym_shell] = STATE(194),
    [sym_stopsignal] = STATE(194),
    [sym_user] = STATE(194),
    [sym_volume] = STATE(194),
    [sym_workdir] = STATE(194),
    [aux_sym_dockerfile_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(51),
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
    [sym__directive] = STATE(194),
    [sym_add] = STATE(194),
    [sym_arg] = STATE(194),
    [sym_cmd] = STATE(194),
    [sym_copy] = STATE(194),
    [sym_entrypoint] = STATE(194),
    [sym_env] = STATE(194),
    [sym_expose] = STATE(194),
    [sym_from] = STATE(194),
    [sym_healthcheck] = STATE(194),
    [sym_label] = STATE(194),
    [sym_maintainer] = STATE(194),
    [sym_onbuild] = STATE(194),
    [sym_run] = STATE(194),
    [sym_shell] = STATE(194),
    [sym_stopsignal] = STATE(194),
    [sym_user] = STATE(194),
    [sym_volume] = STATE(194),
    [sym_workdir] = STATE(194),
    [aux_sym_dockerfile_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(53),
    [aux_sym_add_token1] = ACTIONS(55),
    [aux_sym_arg_token1] = ACTIONS(58),
    [aux_sym_cmd_token1] = ACTIONS(61),
    [aux_sym_copy_token1] = ACTIONS(64),
    [aux_sym_entrypoint_token1] = ACTIONS(67),
    [aux_sym_env_token1] = ACTIONS(70),
    [aux_sym_expose_token1] = ACTIONS(73),
    [aux_sym_from_token1] = ACTIONS(76),
    [aux_sym_healthcheck_token1] = ACTIONS(79),
    [aux_sym_label_token1] = ACTIONS(82),
    [aux_sym_maintainer_token1] = ACTIONS(85),
    [aux_sym_onbuild_token1] = ACTIONS(88),
    [aux_sym_run_token1] = ACTIONS(91),
    [aux_sym_shell_token1] = ACTIONS(94),
    [aux_sym_stopsignal_token1] = ACTIONS(97),
    [aux_sym_user_token1] = ACTIONS(100),
    [aux_sym_volume_token1] = ACTIONS(103),
    [aux_sym_workdir_token1] = ACTIONS(106),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(109),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [5] = {
    [sym__directive] = STATE(194),
    [sym_add] = STATE(194),
    [sym_arg] = STATE(194),
    [sym_cmd] = STATE(194),
    [sym_copy] = STATE(194),
    [sym_entrypoint] = STATE(194),
    [sym_env] = STATE(194),
    [sym_expose] = STATE(194),
    [sym_from] = STATE(194),
    [sym_healthcheck] = STATE(194),
    [sym_label] = STATE(194),
    [sym_maintainer] = STATE(194),
    [sym_onbuild] = STATE(194),
    [sym_run] = STATE(194),
    [sym_shell] = STATE(194),
    [sym_stopsignal] = STATE(194),
    [sym_user] = STATE(194),
    [sym_volume] = STATE(194),
    [sym_workdir] = STATE(194),
    [aux_sym_dockerfile_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(112),
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
  [6] = {
    [sym__port_spec] = STATE(7),
    [sym_mapped_port] = STATE(7),
    [sym__port] = STATE(99),
    [sym_port] = STATE(99),
    [sym_port_range] = STATE(99),
    [sym__port_part] = STATE(79),
    [aux_sym_expose_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(114),
    [aux_sym_add_token1] = ACTIONS(114),
    [aux_sym_arg_token1] = ACTIONS(114),
    [aux_sym_cmd_token1] = ACTIONS(114),
    [aux_sym_copy_token1] = ACTIONS(114),
    [aux_sym_entrypoint_token1] = ACTIONS(114),
    [aux_sym_env_token1] = ACTIONS(114),
    [aux_sym_expose_token1] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [aux_sym_from_token1] = ACTIONS(114),
    [aux_sym_healthcheck_token1] = ACTIONS(114),
    [aux_sym_label_token1] = ACTIONS(114),
    [aux_sym_maintainer_token1] = ACTIONS(114),
    [aux_sym_onbuild_token1] = ACTIONS(114),
    [aux_sym_run_token1] = ACTIONS(114),
    [aux_sym_shell_token1] = ACTIONS(114),
    [aux_sym_stopsignal_token1] = ACTIONS(114),
    [aux_sym_user_token1] = ACTIONS(114),
    [aux_sym_volume_token1] = ACTIONS(114),
    [aux_sym_workdir_token1] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym__port_part_token1] = ACTIONS(120),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(114),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [7] = {
    [sym__port_spec] = STATE(7),
    [sym_mapped_port] = STATE(7),
    [sym__port] = STATE(99),
    [sym_port] = STATE(99),
    [sym_port_range] = STATE(99),
    [sym__port_part] = STATE(79),
    [aux_sym_expose_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(122),
    [aux_sym_add_token1] = ACTIONS(122),
    [aux_sym_arg_token1] = ACTIONS(122),
    [aux_sym_cmd_token1] = ACTIONS(122),
    [aux_sym_copy_token1] = ACTIONS(122),
    [aux_sym_entrypoint_token1] = ACTIONS(122),
    [aux_sym_env_token1] = ACTIONS(122),
    [aux_sym_expose_token1] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [aux_sym_from_token1] = ACTIONS(122),
    [aux_sym_healthcheck_token1] = ACTIONS(122),
    [aux_sym_label_token1] = ACTIONS(122),
    [aux_sym_maintainer_token1] = ACTIONS(122),
    [aux_sym_onbuild_token1] = ACTIONS(122),
    [aux_sym_run_token1] = ACTIONS(122),
    [aux_sym_shell_token1] = ACTIONS(122),
    [aux_sym_stopsignal_token1] = ACTIONS(122),
    [aux_sym_user_token1] = ACTIONS(122),
    [aux_sym_volume_token1] = ACTIONS(122),
    [aux_sym_workdir_token1] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [aux_sym__port_part_token1] = ACTIONS(130),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(122),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [8] = {
    [sym_add] = STATE(189),
    [sym_arg] = STATE(189),
    [sym_cmd] = STATE(189),
    [sym_copy] = STATE(189),
    [sym_entrypoint] = STATE(189),
    [sym_env] = STATE(189),
    [sym_expose] = STATE(189),
    [sym_healthcheck] = STATE(189),
    [sym_label] = STATE(189),
    [sym_run] = STATE(189),
    [sym_shell] = STATE(189),
    [sym_stopsignal] = STATE(189),
    [sym_user] = STATE(189),
    [sym_volume] = STATE(189),
    [sym_workdir] = STATE(189),
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
  [9] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(133),
    [aux_sym_add_token1] = ACTIONS(135),
    [aux_sym_arg_token1] = ACTIONS(135),
    [aux_sym_cmd_token1] = ACTIONS(135),
    [aux_sym_copy_token1] = ACTIONS(135),
    [aux_sym_entrypoint_token1] = ACTIONS(135),
    [aux_sym_env_token1] = ACTIONS(135),
    [aux_sym_expose_token1] = ACTIONS(135),
    [aux_sym_from_token1] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(133),
    [aux_sym_healthcheck_token1] = ACTIONS(135),
    [aux_sym_label_token1] = ACTIONS(135),
    [aux_sym_maintainer_token1] = ACTIONS(135),
    [aux_sym_onbuild_token1] = ACTIONS(135),
    [aux_sym_run_token1] = ACTIONS(135),
    [aux_sym_shell_token1] = ACTIONS(135),
    [aux_sym_stopsignal_token1] = ACTIONS(135),
    [aux_sym_user_token1] = ACTIONS(135),
    [aux_sym_volume_token1] = ACTIONS(135),
    [aux_sym_workdir_token1] = ACTIONS(135),
    [aux_sym_from_layer_token5] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token5] = ACTIONS(137),
    [aux_sym__repository_start_token10] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(133),
    [sym__space_no_newline] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [10] = {
    [aux_sym__repository_start_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(140),
    [aux_sym_add_token1] = ACTIONS(142),
    [aux_sym_arg_token1] = ACTIONS(142),
    [aux_sym_cmd_token1] = ACTIONS(142),
    [aux_sym_copy_token1] = ACTIONS(142),
    [aux_sym_entrypoint_token1] = ACTIONS(142),
    [aux_sym_env_token1] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(140),
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
    [anon_sym_DOLLAR] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(146),
    [aux_sym__repository_start_token2] = ACTIONS(144),
    [aux_sym__repository_start_token3] = ACTIONS(148),
    [aux_sym__repository_start_token10] = ACTIONS(146),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(140),
    [sym__space_no_newline] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [11] = {
    [aux_sym__repository_start_repeat4] = STATE(20),
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
    [aux_sym_from_layer_token13] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(156),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [aux_sym__repository_start_token9] = ACTIONS(154),
    [aux_sym__repository_start_token10] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(150),
    [sym__space_no_newline] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [12] = {
    [aux_sym__repository_start_repeat4] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_add_token1] = ACTIONS(162),
    [aux_sym_arg_token1] = ACTIONS(162),
    [aux_sym_cmd_token1] = ACTIONS(162),
    [aux_sym_copy_token1] = ACTIONS(162),
    [aux_sym_entrypoint_token1] = ACTIONS(162),
    [aux_sym_env_token1] = ACTIONS(162),
    [aux_sym_expose_token1] = ACTIONS(162),
    [aux_sym_from_token1] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(160),
    [aux_sym_healthcheck_token1] = ACTIONS(162),
    [aux_sym_label_token1] = ACTIONS(162),
    [aux_sym_maintainer_token1] = ACTIONS(162),
    [aux_sym_onbuild_token1] = ACTIONS(162),
    [aux_sym_run_token1] = ACTIONS(162),
    [aux_sym_shell_token1] = ACTIONS(162),
    [aux_sym_stopsignal_token1] = ACTIONS(162),
    [aux_sym_user_token1] = ACTIONS(162),
    [aux_sym_volume_token1] = ACTIONS(162),
    [aux_sym_workdir_token1] = ACTIONS(162),
    [aux_sym_from_layer_token13] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(164),
    [aux_sym__repository_start_token3] = ACTIONS(166),
    [aux_sym__repository_start_token9] = ACTIONS(154),
    [aux_sym__repository_start_token10] = ACTIONS(164),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(160),
    [sym__space_no_newline] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [13] = {
    [aux_sym__repository_start_repeat3] = STATE(15),
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
    [aux_sym_from_layer_token9] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(156),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [aux_sym__repository_start_token7] = ACTIONS(168),
    [aux_sym__repository_start_token10] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(150),
    [sym__space_no_newline] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [14] = {
    [aux_sym__repository_start_repeat1] = STATE(14),
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
    [anon_sym_DOLLAR] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(170),
    [aux_sym__repository_start_token2] = ACTIONS(174),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [aux_sym__repository_start_token10] = ACTIONS(170),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [15] = {
    [aux_sym__repository_start_repeat3] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(177),
    [aux_sym_add_token1] = ACTIONS(179),
    [aux_sym_arg_token1] = ACTIONS(179),
    [aux_sym_cmd_token1] = ACTIONS(179),
    [aux_sym_copy_token1] = ACTIONS(179),
    [aux_sym_entrypoint_token1] = ACTIONS(179),
    [aux_sym_env_token1] = ACTIONS(179),
    [aux_sym_expose_token1] = ACTIONS(179),
    [aux_sym_from_token1] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(177),
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
    [aux_sym_from_layer_token9] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(177),
    [aux_sym__repository_start_token3] = ACTIONS(179),
    [aux_sym__repository_start_token7] = ACTIONS(181),
    [aux_sym__repository_start_token10] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(177),
    [sym__space_no_newline] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [16] = {
    [aux_sym__repository_start_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_add_token1] = ACTIONS(162),
    [aux_sym_arg_token1] = ACTIONS(162),
    [aux_sym_cmd_token1] = ACTIONS(162),
    [aux_sym_copy_token1] = ACTIONS(162),
    [aux_sym_entrypoint_token1] = ACTIONS(162),
    [aux_sym_env_token1] = ACTIONS(162),
    [aux_sym_expose_token1] = ACTIONS(162),
    [aux_sym_from_token1] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(160),
    [aux_sym_healthcheck_token1] = ACTIONS(162),
    [aux_sym_label_token1] = ACTIONS(162),
    [aux_sym_maintainer_token1] = ACTIONS(162),
    [aux_sym_onbuild_token1] = ACTIONS(162),
    [aux_sym_run_token1] = ACTIONS(162),
    [aux_sym_shell_token1] = ACTIONS(162),
    [aux_sym_stopsignal_token1] = ACTIONS(162),
    [aux_sym_user_token1] = ACTIONS(162),
    [aux_sym_volume_token1] = ACTIONS(162),
    [aux_sym_workdir_token1] = ACTIONS(162),
    [aux_sym_from_layer_token5] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(164),
    [aux_sym__repository_start_token3] = ACTIONS(166),
    [aux_sym__repository_start_token5] = ACTIONS(184),
    [aux_sym__repository_start_token10] = ACTIONS(164),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(160),
    [sym__space_no_newline] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [17] = {
    [aux_sym__repository_start_repeat3] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_add_token1] = ACTIONS(162),
    [aux_sym_arg_token1] = ACTIONS(162),
    [aux_sym_cmd_token1] = ACTIONS(162),
    [aux_sym_copy_token1] = ACTIONS(162),
    [aux_sym_entrypoint_token1] = ACTIONS(162),
    [aux_sym_env_token1] = ACTIONS(162),
    [aux_sym_expose_token1] = ACTIONS(162),
    [aux_sym_from_token1] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(160),
    [aux_sym_healthcheck_token1] = ACTIONS(162),
    [aux_sym_label_token1] = ACTIONS(162),
    [aux_sym_maintainer_token1] = ACTIONS(162),
    [aux_sym_onbuild_token1] = ACTIONS(162),
    [aux_sym_run_token1] = ACTIONS(162),
    [aux_sym_shell_token1] = ACTIONS(162),
    [aux_sym_stopsignal_token1] = ACTIONS(162),
    [aux_sym_user_token1] = ACTIONS(162),
    [aux_sym_volume_token1] = ACTIONS(162),
    [aux_sym_workdir_token1] = ACTIONS(162),
    [aux_sym_from_layer_token9] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(164),
    [aux_sym__repository_start_token3] = ACTIONS(166),
    [aux_sym__repository_start_token7] = ACTIONS(168),
    [aux_sym__repository_start_token10] = ACTIONS(164),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(160),
    [sym__space_no_newline] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [18] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
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
    [aux_sym_from_layer_token5] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(156),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [aux_sym__repository_start_token5] = ACTIONS(184),
    [aux_sym__repository_start_token10] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(150),
    [sym__space_no_newline] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [19] = {
    [aux_sym__repository_start_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_add_token1] = ACTIONS(162),
    [aux_sym_arg_token1] = ACTIONS(162),
    [aux_sym_cmd_token1] = ACTIONS(162),
    [aux_sym_copy_token1] = ACTIONS(162),
    [aux_sym_entrypoint_token1] = ACTIONS(162),
    [aux_sym_env_token1] = ACTIONS(162),
    [aux_sym_expose_token1] = ACTIONS(162),
    [aux_sym_from_token1] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(160),
    [aux_sym_healthcheck_token1] = ACTIONS(162),
    [aux_sym_label_token1] = ACTIONS(162),
    [aux_sym_maintainer_token1] = ACTIONS(162),
    [aux_sym_onbuild_token1] = ACTIONS(162),
    [aux_sym_run_token1] = ACTIONS(162),
    [aux_sym_shell_token1] = ACTIONS(162),
    [aux_sym_stopsignal_token1] = ACTIONS(162),
    [aux_sym_user_token1] = ACTIONS(162),
    [aux_sym_volume_token1] = ACTIONS(162),
    [aux_sym_workdir_token1] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(164),
    [aux_sym__repository_start_token2] = ACTIONS(144),
    [aux_sym__repository_start_token3] = ACTIONS(166),
    [aux_sym__repository_start_token10] = ACTIONS(164),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(160),
    [sym__space_no_newline] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [20] = {
    [aux_sym__repository_start_repeat4] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(186),
    [aux_sym_add_token1] = ACTIONS(188),
    [aux_sym_arg_token1] = ACTIONS(188),
    [aux_sym_cmd_token1] = ACTIONS(188),
    [aux_sym_copy_token1] = ACTIONS(188),
    [aux_sym_entrypoint_token1] = ACTIONS(188),
    [aux_sym_env_token1] = ACTIONS(188),
    [aux_sym_expose_token1] = ACTIONS(188),
    [aux_sym_from_token1] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_AT] = ACTIONS(186),
    [aux_sym_healthcheck_token1] = ACTIONS(188),
    [aux_sym_label_token1] = ACTIONS(188),
    [aux_sym_maintainer_token1] = ACTIONS(188),
    [aux_sym_onbuild_token1] = ACTIONS(188),
    [aux_sym_run_token1] = ACTIONS(188),
    [aux_sym_shell_token1] = ACTIONS(188),
    [aux_sym_stopsignal_token1] = ACTIONS(188),
    [aux_sym_user_token1] = ACTIONS(188),
    [aux_sym_volume_token1] = ACTIONS(188),
    [aux_sym_workdir_token1] = ACTIONS(188),
    [aux_sym_from_layer_token13] = ACTIONS(190),
    [anon_sym_SLASH] = ACTIONS(186),
    [aux_sym__repository_start_token3] = ACTIONS(188),
    [aux_sym__repository_start_token9] = ACTIONS(190),
    [aux_sym__repository_start_token10] = ACTIONS(186),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(186),
    [sym__space_no_newline] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym_add_token1] = ACTIONS(195),
    [aux_sym_arg_token1] = ACTIONS(195),
    [aux_sym_cmd_token1] = ACTIONS(195),
    [aux_sym_copy_token1] = ACTIONS(195),
    [aux_sym_entrypoint_token1] = ACTIONS(195),
    [aux_sym_env_token1] = ACTIONS(195),
    [aux_sym_expose_token1] = ACTIONS(195),
    [aux_sym_from_token1] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(193),
    [aux_sym_healthcheck_token1] = ACTIONS(195),
    [aux_sym_label_token1] = ACTIONS(195),
    [aux_sym_maintainer_token1] = ACTIONS(195),
    [aux_sym_onbuild_token1] = ACTIONS(195),
    [aux_sym_run_token1] = ACTIONS(195),
    [aux_sym_shell_token1] = ACTIONS(195),
    [aux_sym_stopsignal_token1] = ACTIONS(195),
    [aux_sym_user_token1] = ACTIONS(195),
    [aux_sym_volume_token1] = ACTIONS(195),
    [aux_sym_workdir_token1] = ACTIONS(195),
    [aux_sym_from_layer_token13] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [aux_sym__repository_start_token3] = ACTIONS(195),
    [aux_sym__repository_start_token9] = ACTIONS(193),
    [aux_sym__repository_start_token10] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(193),
    [sym__space_no_newline] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [22] = {
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
    [anon_sym_DOLLAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [aux_sym__repository_start_token2] = ACTIONS(170),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [aux_sym__repository_start_token10] = ACTIONS(170),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_add_token1] = ACTIONS(199),
    [aux_sym_arg_token1] = ACTIONS(199),
    [aux_sym_cmd_token1] = ACTIONS(199),
    [aux_sym_copy_token1] = ACTIONS(199),
    [aux_sym_entrypoint_token1] = ACTIONS(199),
    [aux_sym_env_token1] = ACTIONS(199),
    [aux_sym_expose_token1] = ACTIONS(199),
    [aux_sym_from_token1] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(197),
    [aux_sym_healthcheck_token1] = ACTIONS(199),
    [aux_sym_label_token1] = ACTIONS(199),
    [aux_sym_maintainer_token1] = ACTIONS(199),
    [aux_sym_onbuild_token1] = ACTIONS(199),
    [aux_sym_run_token1] = ACTIONS(199),
    [aux_sym_shell_token1] = ACTIONS(199),
    [aux_sym_stopsignal_token1] = ACTIONS(199),
    [aux_sym_user_token1] = ACTIONS(199),
    [aux_sym_volume_token1] = ACTIONS(199),
    [aux_sym_workdir_token1] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(197),
    [aux_sym__repository_start_token2] = ACTIONS(197),
    [aux_sym__repository_start_token3] = ACTIONS(199),
    [aux_sym__repository_start_token10] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(197),
    [sym__space_no_newline] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_add_token1] = ACTIONS(203),
    [aux_sym_arg_token1] = ACTIONS(203),
    [aux_sym_cmd_token1] = ACTIONS(203),
    [aux_sym_copy_token1] = ACTIONS(203),
    [aux_sym_entrypoint_token1] = ACTIONS(203),
    [aux_sym_env_token1] = ACTIONS(203),
    [aux_sym_expose_token1] = ACTIONS(203),
    [aux_sym_from_token1] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(201),
    [aux_sym_healthcheck_token1] = ACTIONS(203),
    [aux_sym_label_token1] = ACTIONS(203),
    [aux_sym_maintainer_token1] = ACTIONS(203),
    [aux_sym_onbuild_token1] = ACTIONS(203),
    [aux_sym_run_token1] = ACTIONS(203),
    [aux_sym_shell_token1] = ACTIONS(203),
    [aux_sym_stopsignal_token1] = ACTIONS(203),
    [aux_sym_user_token1] = ACTIONS(203),
    [aux_sym_volume_token1] = ACTIONS(203),
    [aux_sym_workdir_token1] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [aux_sym__repository_start_token2] = ACTIONS(201),
    [aux_sym__repository_start_token3] = ACTIONS(203),
    [aux_sym__repository_start_token10] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(201),
    [sym__space_no_newline] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_add_token1] = ACTIONS(207),
    [aux_sym_arg_token1] = ACTIONS(207),
    [aux_sym_cmd_token1] = ACTIONS(207),
    [aux_sym_copy_token1] = ACTIONS(207),
    [aux_sym_entrypoint_token1] = ACTIONS(207),
    [aux_sym_env_token1] = ACTIONS(207),
    [aux_sym_expose_token1] = ACTIONS(207),
    [aux_sym_from_token1] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(205),
    [aux_sym_healthcheck_token1] = ACTIONS(207),
    [aux_sym_label_token1] = ACTIONS(207),
    [aux_sym_maintainer_token1] = ACTIONS(207),
    [aux_sym_onbuild_token1] = ACTIONS(207),
    [aux_sym_run_token1] = ACTIONS(207),
    [aux_sym_shell_token1] = ACTIONS(207),
    [aux_sym_stopsignal_token1] = ACTIONS(207),
    [aux_sym_user_token1] = ACTIONS(207),
    [aux_sym_volume_token1] = ACTIONS(207),
    [aux_sym_workdir_token1] = ACTIONS(207),
    [aux_sym_from_layer_token9] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [aux_sym__repository_start_token3] = ACTIONS(207),
    [aux_sym__repository_start_token7] = ACTIONS(205),
    [aux_sym__repository_start_token10] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(205),
    [sym__space_no_newline] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_add_token1] = ACTIONS(211),
    [aux_sym_arg_token1] = ACTIONS(211),
    [aux_sym_cmd_token1] = ACTIONS(211),
    [aux_sym_copy_token1] = ACTIONS(211),
    [aux_sym_entrypoint_token1] = ACTIONS(211),
    [aux_sym_env_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(209),
    [aux_sym_healthcheck_token1] = ACTIONS(211),
    [aux_sym_label_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_onbuild_token1] = ACTIONS(211),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_shell_token1] = ACTIONS(211),
    [aux_sym_stopsignal_token1] = ACTIONS(211),
    [aux_sym_user_token1] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(211),
    [aux_sym_workdir_token1] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [aux_sym__repository_start_token2] = ACTIONS(209),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [aux_sym__repository_start_token10] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(209),
    [sym__space_no_newline] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [aux_sym_add_token1] = ACTIONS(215),
    [aux_sym_arg_token1] = ACTIONS(215),
    [aux_sym_cmd_token1] = ACTIONS(215),
    [aux_sym_copy_token1] = ACTIONS(215),
    [aux_sym_entrypoint_token1] = ACTIONS(215),
    [aux_sym_env_token1] = ACTIONS(215),
    [aux_sym_expose_token1] = ACTIONS(215),
    [aux_sym_from_token1] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(213),
    [aux_sym_healthcheck_token1] = ACTIONS(215),
    [aux_sym_label_token1] = ACTIONS(215),
    [aux_sym_maintainer_token1] = ACTIONS(215),
    [aux_sym_onbuild_token1] = ACTIONS(215),
    [aux_sym_run_token1] = ACTIONS(215),
    [aux_sym_shell_token1] = ACTIONS(215),
    [aux_sym_stopsignal_token1] = ACTIONS(215),
    [aux_sym_user_token1] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(215),
    [aux_sym_workdir_token1] = ACTIONS(215),
    [aux_sym_from_layer_token5] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [aux_sym__repository_start_token3] = ACTIONS(215),
    [aux_sym__repository_start_token5] = ACTIONS(213),
    [aux_sym__repository_start_token10] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(213),
    [sym__space_no_newline] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [28] = {
    [sym_port_protocol] = STATE(89),
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
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [aux_sym__port_part_token1] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(219),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [29] = {
    [aux_sym__repository_start_repeat3] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_add_token1] = ACTIONS(162),
    [aux_sym_arg_token1] = ACTIONS(162),
    [aux_sym_cmd_token1] = ACTIONS(162),
    [aux_sym_copy_token1] = ACTIONS(162),
    [aux_sym_entrypoint_token1] = ACTIONS(162),
    [aux_sym_env_token1] = ACTIONS(162),
    [aux_sym_expose_token1] = ACTIONS(162),
    [aux_sym_from_token1] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(160),
    [aux_sym_healthcheck_token1] = ACTIONS(162),
    [aux_sym_label_token1] = ACTIONS(162),
    [aux_sym_maintainer_token1] = ACTIONS(162),
    [aux_sym_onbuild_token1] = ACTIONS(162),
    [aux_sym_run_token1] = ACTIONS(162),
    [aux_sym_shell_token1] = ACTIONS(162),
    [aux_sym_stopsignal_token1] = ACTIONS(162),
    [aux_sym_user_token1] = ACTIONS(162),
    [aux_sym_volume_token1] = ACTIONS(162),
    [aux_sym_workdir_token1] = ACTIONS(162),
    [aux_sym_from_layer_token9] = ACTIONS(221),
    [aux_sym__repository_start_token3] = ACTIONS(223),
    [aux_sym__repository_start_token7] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(160),
    [sym__space_no_newline] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [30] = {
    [aux_sym__repository_start_repeat2] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_add_token1] = ACTIONS(162),
    [aux_sym_arg_token1] = ACTIONS(162),
    [aux_sym_cmd_token1] = ACTIONS(162),
    [aux_sym_copy_token1] = ACTIONS(162),
    [aux_sym_entrypoint_token1] = ACTIONS(162),
    [aux_sym_env_token1] = ACTIONS(162),
    [aux_sym_expose_token1] = ACTIONS(162),
    [aux_sym_from_token1] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(160),
    [aux_sym_healthcheck_token1] = ACTIONS(162),
    [aux_sym_label_token1] = ACTIONS(162),
    [aux_sym_maintainer_token1] = ACTIONS(162),
    [aux_sym_onbuild_token1] = ACTIONS(162),
    [aux_sym_run_token1] = ACTIONS(162),
    [aux_sym_shell_token1] = ACTIONS(162),
    [aux_sym_stopsignal_token1] = ACTIONS(162),
    [aux_sym_user_token1] = ACTIONS(162),
    [aux_sym_volume_token1] = ACTIONS(162),
    [aux_sym_workdir_token1] = ACTIONS(162),
    [aux_sym_from_layer_token5] = ACTIONS(225),
    [aux_sym__repository_start_token3] = ACTIONS(223),
    [aux_sym__repository_start_token5] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(160),
    [sym__space_no_newline] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [31] = {
    [aux_sym__repository_start_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_add_token1] = ACTIONS(162),
    [aux_sym_arg_token1] = ACTIONS(162),
    [aux_sym_cmd_token1] = ACTIONS(162),
    [aux_sym_copy_token1] = ACTIONS(162),
    [aux_sym_entrypoint_token1] = ACTIONS(162),
    [aux_sym_env_token1] = ACTIONS(162),
    [aux_sym_expose_token1] = ACTIONS(162),
    [aux_sym_from_token1] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(160),
    [aux_sym_healthcheck_token1] = ACTIONS(162),
    [aux_sym_label_token1] = ACTIONS(162),
    [aux_sym_maintainer_token1] = ACTIONS(162),
    [aux_sym_onbuild_token1] = ACTIONS(162),
    [aux_sym_run_token1] = ACTIONS(162),
    [aux_sym_shell_token1] = ACTIONS(162),
    [aux_sym_stopsignal_token1] = ACTIONS(162),
    [aux_sym_user_token1] = ACTIONS(162),
    [aux_sym_volume_token1] = ACTIONS(162),
    [aux_sym_workdir_token1] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym__repository_start_token2] = ACTIONS(227),
    [aux_sym__repository_start_token3] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(160),
    [sym__space_no_newline] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [32] = {
    [aux_sym__repository_start_repeat1] = STATE(32),
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
    [anon_sym_DOLLAR] = ACTIONS(229),
    [aux_sym__repository_start_token2] = ACTIONS(229),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [33] = {
    [aux_sym__repository_start_repeat3] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(177),
    [aux_sym_add_token1] = ACTIONS(179),
    [aux_sym_arg_token1] = ACTIONS(179),
    [aux_sym_cmd_token1] = ACTIONS(179),
    [aux_sym_copy_token1] = ACTIONS(179),
    [aux_sym_entrypoint_token1] = ACTIONS(179),
    [aux_sym_env_token1] = ACTIONS(179),
    [aux_sym_expose_token1] = ACTIONS(179),
    [aux_sym_from_token1] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(177),
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
    [aux_sym_from_layer_token9] = ACTIONS(232),
    [aux_sym__repository_start_token3] = ACTIONS(179),
    [aux_sym__repository_start_token7] = ACTIONS(232),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(177),
    [sym__space_no_newline] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [34] = {
    [aux_sym__repository_start_repeat4] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(186),
    [aux_sym_add_token1] = ACTIONS(188),
    [aux_sym_arg_token1] = ACTIONS(188),
    [aux_sym_cmd_token1] = ACTIONS(188),
    [aux_sym_copy_token1] = ACTIONS(188),
    [aux_sym_entrypoint_token1] = ACTIONS(188),
    [aux_sym_env_token1] = ACTIONS(188),
    [aux_sym_expose_token1] = ACTIONS(188),
    [aux_sym_from_token1] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(186),
    [anon_sym_AT] = ACTIONS(186),
    [aux_sym_healthcheck_token1] = ACTIONS(188),
    [aux_sym_label_token1] = ACTIONS(188),
    [aux_sym_maintainer_token1] = ACTIONS(188),
    [aux_sym_onbuild_token1] = ACTIONS(188),
    [aux_sym_run_token1] = ACTIONS(188),
    [aux_sym_shell_token1] = ACTIONS(188),
    [aux_sym_stopsignal_token1] = ACTIONS(188),
    [aux_sym_user_token1] = ACTIONS(188),
    [aux_sym_volume_token1] = ACTIONS(188),
    [aux_sym_workdir_token1] = ACTIONS(188),
    [aux_sym_from_layer_token13] = ACTIONS(235),
    [aux_sym__repository_start_token3] = ACTIONS(188),
    [aux_sym__repository_start_token9] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(186),
    [sym__space_no_newline] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [35] = {
    [aux_sym__repository_start_repeat4] = STATE(34),
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
    [aux_sym_from_layer_token13] = ACTIONS(238),
    [aux_sym__repository_start_token3] = ACTIONS(240),
    [aux_sym__repository_start_token9] = ACTIONS(238),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(150),
    [sym__space_no_newline] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [36] = {
    [aux_sym__repository_start_repeat3] = STATE(33),
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
    [aux_sym_from_layer_token9] = ACTIONS(221),
    [aux_sym__repository_start_token3] = ACTIONS(240),
    [aux_sym__repository_start_token7] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(150),
    [sym__space_no_newline] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [37] = {
    [aux_sym__repository_start_repeat2] = STATE(41),
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
    [aux_sym_from_layer_token5] = ACTIONS(225),
    [aux_sym__repository_start_token3] = ACTIONS(240),
    [aux_sym__repository_start_token5] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(150),
    [sym__space_no_newline] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [38] = {
    [sym_port_protocol] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(242),
    [aux_sym_add_token1] = ACTIONS(242),
    [aux_sym_arg_token1] = ACTIONS(242),
    [aux_sym_cmd_token1] = ACTIONS(242),
    [aux_sym_copy_token1] = ACTIONS(242),
    [aux_sym_entrypoint_token1] = ACTIONS(242),
    [aux_sym_env_token1] = ACTIONS(242),
    [aux_sym_expose_token1] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [aux_sym_from_token1] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(242),
    [aux_sym_healthcheck_token1] = ACTIONS(242),
    [aux_sym_label_token1] = ACTIONS(242),
    [aux_sym_maintainer_token1] = ACTIONS(242),
    [aux_sym_onbuild_token1] = ACTIONS(242),
    [aux_sym_run_token1] = ACTIONS(242),
    [aux_sym_shell_token1] = ACTIONS(242),
    [aux_sym_stopsignal_token1] = ACTIONS(242),
    [aux_sym_user_token1] = ACTIONS(242),
    [aux_sym_volume_token1] = ACTIONS(242),
    [aux_sym_workdir_token1] = ACTIONS(242),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [aux_sym__port_part_token1] = ACTIONS(242),
    [anon_sym_SLASH] = ACTIONS(219),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(242),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [39] = {
    [aux_sym__repository_start_repeat4] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_add_token1] = ACTIONS(162),
    [aux_sym_arg_token1] = ACTIONS(162),
    [aux_sym_cmd_token1] = ACTIONS(162),
    [aux_sym_copy_token1] = ACTIONS(162),
    [aux_sym_entrypoint_token1] = ACTIONS(162),
    [aux_sym_env_token1] = ACTIONS(162),
    [aux_sym_expose_token1] = ACTIONS(162),
    [aux_sym_from_token1] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(160),
    [aux_sym_healthcheck_token1] = ACTIONS(162),
    [aux_sym_label_token1] = ACTIONS(162),
    [aux_sym_maintainer_token1] = ACTIONS(162),
    [aux_sym_onbuild_token1] = ACTIONS(162),
    [aux_sym_run_token1] = ACTIONS(162),
    [aux_sym_shell_token1] = ACTIONS(162),
    [aux_sym_stopsignal_token1] = ACTIONS(162),
    [aux_sym_user_token1] = ACTIONS(162),
    [aux_sym_volume_token1] = ACTIONS(162),
    [aux_sym_workdir_token1] = ACTIONS(162),
    [aux_sym_from_layer_token13] = ACTIONS(238),
    [aux_sym__repository_start_token3] = ACTIONS(223),
    [aux_sym__repository_start_token9] = ACTIONS(238),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(160),
    [sym__space_no_newline] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [40] = {
    [aux_sym__repository_start_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(140),
    [aux_sym_add_token1] = ACTIONS(142),
    [aux_sym_arg_token1] = ACTIONS(142),
    [aux_sym_cmd_token1] = ACTIONS(142),
    [aux_sym_copy_token1] = ACTIONS(142),
    [aux_sym_entrypoint_token1] = ACTIONS(142),
    [aux_sym_env_token1] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(140),
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
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym__repository_start_token2] = ACTIONS(227),
    [aux_sym__repository_start_token3] = ACTIONS(244),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(140),
    [sym__space_no_newline] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [41] = {
    [aux_sym__repository_start_repeat2] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(133),
    [aux_sym_add_token1] = ACTIONS(135),
    [aux_sym_arg_token1] = ACTIONS(135),
    [aux_sym_cmd_token1] = ACTIONS(135),
    [aux_sym_copy_token1] = ACTIONS(135),
    [aux_sym_entrypoint_token1] = ACTIONS(135),
    [aux_sym_env_token1] = ACTIONS(135),
    [aux_sym_expose_token1] = ACTIONS(135),
    [aux_sym_from_token1] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(133),
    [aux_sym_healthcheck_token1] = ACTIONS(135),
    [aux_sym_label_token1] = ACTIONS(135),
    [aux_sym_maintainer_token1] = ACTIONS(135),
    [aux_sym_onbuild_token1] = ACTIONS(135),
    [aux_sym_run_token1] = ACTIONS(135),
    [aux_sym_shell_token1] = ACTIONS(135),
    [aux_sym_stopsignal_token1] = ACTIONS(135),
    [aux_sym_user_token1] = ACTIONS(135),
    [aux_sym_volume_token1] = ACTIONS(135),
    [aux_sym_workdir_token1] = ACTIONS(135),
    [aux_sym_from_layer_token5] = ACTIONS(246),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token5] = ACTIONS(246),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(133),
    [sym__space_no_newline] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [42] = {
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
    [anon_sym_DOLLAR] = ACTIONS(170),
    [aux_sym__repository_start_token2] = ACTIONS(170),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym__space_no_newline] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [43] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(49),
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
    [aux_sym_volume_token1] = ACTIONS(249),
    [aux_sym_workdir_token1] = ACTIONS(249),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [aux_sym_path_token1] = ACTIONS(255),
    [aux_sym_path_token2] = ACTIONS(257),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_add_token1] = ACTIONS(201),
    [aux_sym_arg_token1] = ACTIONS(201),
    [aux_sym_cmd_token1] = ACTIONS(201),
    [aux_sym_copy_token1] = ACTIONS(201),
    [aux_sym_entrypoint_token1] = ACTIONS(201),
    [aux_sym_env_token1] = ACTIONS(201),
    [aux_sym_expose_token1] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [aux_sym_from_token1] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
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
    [anon_sym_DOLLAR] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [aux_sym__port_part_token1] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_add_token1] = ACTIONS(211),
    [aux_sym_arg_token1] = ACTIONS(211),
    [aux_sym_cmd_token1] = ACTIONS(211),
    [aux_sym_copy_token1] = ACTIONS(211),
    [aux_sym_entrypoint_token1] = ACTIONS(211),
    [aux_sym_env_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(209),
    [aux_sym_healthcheck_token1] = ACTIONS(211),
    [aux_sym_label_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_onbuild_token1] = ACTIONS(211),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_shell_token1] = ACTIONS(211),
    [aux_sym_stopsignal_token1] = ACTIONS(211),
    [aux_sym_user_token1] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(211),
    [aux_sym_workdir_token1] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(209),
    [aux_sym__repository_start_token2] = ACTIONS(209),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(209),
    [sym__space_no_newline] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [46] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(259),
    [aux_sym_add_token1] = ACTIONS(259),
    [aux_sym_arg_token1] = ACTIONS(259),
    [aux_sym_cmd_token1] = ACTIONS(259),
    [aux_sym_copy_token1] = ACTIONS(259),
    [aux_sym_entrypoint_token1] = ACTIONS(259),
    [aux_sym_env_token1] = ACTIONS(259),
    [aux_sym_expose_token1] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(259),
    [aux_sym_healthcheck_token1] = ACTIONS(259),
    [aux_sym_label_token1] = ACTIONS(259),
    [aux_sym_maintainer_token1] = ACTIONS(259),
    [aux_sym_onbuild_token1] = ACTIONS(259),
    [aux_sym_run_token1] = ACTIONS(259),
    [aux_sym_shell_token1] = ACTIONS(259),
    [aux_sym_stopsignal_token1] = ACTIONS(259),
    [aux_sym_user_token1] = ACTIONS(259),
    [aux_sym_volume_token1] = ACTIONS(259),
    [aux_sym_workdir_token1] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [aux_sym_path_token1] = ACTIONS(255),
    [aux_sym_path_token2] = ACTIONS(257),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [aux_sym_add_token1] = ACTIONS(215),
    [aux_sym_arg_token1] = ACTIONS(215),
    [aux_sym_cmd_token1] = ACTIONS(215),
    [aux_sym_copy_token1] = ACTIONS(215),
    [aux_sym_entrypoint_token1] = ACTIONS(215),
    [aux_sym_env_token1] = ACTIONS(215),
    [aux_sym_expose_token1] = ACTIONS(215),
    [aux_sym_from_token1] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(213),
    [aux_sym_healthcheck_token1] = ACTIONS(215),
    [aux_sym_label_token1] = ACTIONS(215),
    [aux_sym_maintainer_token1] = ACTIONS(215),
    [aux_sym_onbuild_token1] = ACTIONS(215),
    [aux_sym_run_token1] = ACTIONS(215),
    [aux_sym_shell_token1] = ACTIONS(215),
    [aux_sym_stopsignal_token1] = ACTIONS(215),
    [aux_sym_user_token1] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(215),
    [aux_sym_workdir_token1] = ACTIONS(215),
    [aux_sym_from_layer_token5] = ACTIONS(213),
    [aux_sym__repository_start_token3] = ACTIONS(215),
    [aux_sym__repository_start_token5] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(213),
    [sym__space_no_newline] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [48] = {
    [aux_sym_path_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(261),
    [aux_sym_arg_token1] = ACTIONS(261),
    [aux_sym_cmd_token1] = ACTIONS(261),
    [aux_sym_copy_token1] = ACTIONS(261),
    [aux_sym_entrypoint_token1] = ACTIONS(261),
    [aux_sym_env_token1] = ACTIONS(261),
    [aux_sym_expose_token1] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
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
    [anon_sym_DOLLAR] = ACTIONS(263),
    [aux_sym_path_token1] = ACTIONS(265),
    [aux_sym_path_token2] = ACTIONS(267),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(269),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [49] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(271),
    [aux_sym_add_token1] = ACTIONS(271),
    [aux_sym_arg_token1] = ACTIONS(271),
    [aux_sym_cmd_token1] = ACTIONS(271),
    [aux_sym_copy_token1] = ACTIONS(271),
    [aux_sym_entrypoint_token1] = ACTIONS(271),
    [aux_sym_env_token1] = ACTIONS(271),
    [aux_sym_expose_token1] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(273),
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
    [anon_sym_DOLLAR] = ACTIONS(276),
    [aux_sym_path_token1] = ACTIONS(279),
    [aux_sym_path_token2] = ACTIONS(282),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [50] = {
    [aux_sym_path_repeat1] = STATE(50),
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
    [anon_sym_DOLLAR] = ACTIONS(287),
    [aux_sym_path_token1] = ACTIONS(290),
    [aux_sym_path_token2] = ACTIONS(292),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym__space_no_newline] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_add_token1] = ACTIONS(207),
    [aux_sym_arg_token1] = ACTIONS(207),
    [aux_sym_cmd_token1] = ACTIONS(207),
    [aux_sym_copy_token1] = ACTIONS(207),
    [aux_sym_entrypoint_token1] = ACTIONS(207),
    [aux_sym_env_token1] = ACTIONS(207),
    [aux_sym_expose_token1] = ACTIONS(207),
    [aux_sym_from_token1] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_AT] = ACTIONS(205),
    [aux_sym_healthcheck_token1] = ACTIONS(207),
    [aux_sym_label_token1] = ACTIONS(207),
    [aux_sym_maintainer_token1] = ACTIONS(207),
    [aux_sym_onbuild_token1] = ACTIONS(207),
    [aux_sym_run_token1] = ACTIONS(207),
    [aux_sym_shell_token1] = ACTIONS(207),
    [aux_sym_stopsignal_token1] = ACTIONS(207),
    [aux_sym_user_token1] = ACTIONS(207),
    [aux_sym_volume_token1] = ACTIONS(207),
    [aux_sym_workdir_token1] = ACTIONS(207),
    [aux_sym_from_layer_token9] = ACTIONS(205),
    [aux_sym__repository_start_token3] = ACTIONS(207),
    [aux_sym__repository_start_token7] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(205),
    [sym__space_no_newline] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [52] = {
    [aux_sym_path_repeat1] = STATE(48),
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
    [aux_sym_volume_token1] = ACTIONS(295),
    [aux_sym_workdir_token1] = ACTIONS(295),
    [anon_sym_DOLLAR] = ACTIONS(263),
    [aux_sym_path_token1] = ACTIONS(297),
    [aux_sym_path_token2] = ACTIONS(267),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym__space_no_newline] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [53] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(301),
    [aux_sym_add_token1] = ACTIONS(301),
    [aux_sym_arg_token1] = ACTIONS(301),
    [aux_sym_cmd_token1] = ACTIONS(301),
    [aux_sym_copy_token1] = ACTIONS(301),
    [aux_sym_entrypoint_token1] = ACTIONS(301),
    [aux_sym_env_token1] = ACTIONS(301),
    [aux_sym_expose_token1] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(251),
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
    [anon_sym_DOLLAR] = ACTIONS(253),
    [aux_sym_path_token1] = ACTIONS(255),
    [aux_sym_path_token2] = ACTIONS(257),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [54] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(303),
    [aux_sym_add_token1] = ACTIONS(303),
    [aux_sym_arg_token1] = ACTIONS(303),
    [aux_sym_cmd_token1] = ACTIONS(303),
    [aux_sym_copy_token1] = ACTIONS(303),
    [aux_sym_entrypoint_token1] = ACTIONS(303),
    [aux_sym_env_token1] = ACTIONS(303),
    [aux_sym_expose_token1] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(251),
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
    [anon_sym_DOLLAR] = ACTIONS(253),
    [aux_sym_path_token1] = ACTIONS(255),
    [aux_sym_path_token2] = ACTIONS(257),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [55] = {
    [aux_sym__repository_start_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(305),
    [aux_sym_add_token1] = ACTIONS(307),
    [aux_sym_arg_token1] = ACTIONS(307),
    [aux_sym_cmd_token1] = ACTIONS(307),
    [aux_sym_copy_token1] = ACTIONS(307),
    [aux_sym_entrypoint_token1] = ACTIONS(307),
    [aux_sym_env_token1] = ACTIONS(307),
    [aux_sym_expose_token1] = ACTIONS(307),
    [aux_sym_from_token1] = ACTIONS(307),
    [anon_sym_AT] = ACTIONS(305),
    [aux_sym_healthcheck_token1] = ACTIONS(307),
    [aux_sym_label_token1] = ACTIONS(307),
    [aux_sym_maintainer_token1] = ACTIONS(307),
    [aux_sym_onbuild_token1] = ACTIONS(307),
    [aux_sym_run_token1] = ACTIONS(307),
    [aux_sym_shell_token1] = ACTIONS(307),
    [aux_sym_stopsignal_token1] = ACTIONS(307),
    [aux_sym_user_token1] = ACTIONS(307),
    [aux_sym_volume_token1] = ACTIONS(307),
    [aux_sym_workdir_token1] = ACTIONS(307),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [aux_sym__repository_start_token2] = ACTIONS(144),
    [aux_sym__repository_start_token3] = ACTIONS(309),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym__space_no_newline] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [56] = {
    [aux_sym__repository_start_repeat4] = STATE(20),
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
    [aux_sym_volume_token1] = ACTIONS(313),
    [aux_sym_workdir_token1] = ACTIONS(313),
    [aux_sym_from_layer_token13] = ACTIONS(154),
    [aux_sym__repository_start_token3] = ACTIONS(315),
    [aux_sym__repository_start_token9] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym__space_no_newline] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym_add_token1] = ACTIONS(195),
    [aux_sym_arg_token1] = ACTIONS(195),
    [aux_sym_cmd_token1] = ACTIONS(195),
    [aux_sym_copy_token1] = ACTIONS(195),
    [aux_sym_entrypoint_token1] = ACTIONS(195),
    [aux_sym_env_token1] = ACTIONS(195),
    [aux_sym_expose_token1] = ACTIONS(195),
    [aux_sym_from_token1] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_AT] = ACTIONS(193),
    [aux_sym_healthcheck_token1] = ACTIONS(195),
    [aux_sym_label_token1] = ACTIONS(195),
    [aux_sym_maintainer_token1] = ACTIONS(195),
    [aux_sym_onbuild_token1] = ACTIONS(195),
    [aux_sym_run_token1] = ACTIONS(195),
    [aux_sym_shell_token1] = ACTIONS(195),
    [aux_sym_stopsignal_token1] = ACTIONS(195),
    [aux_sym_user_token1] = ACTIONS(195),
    [aux_sym_volume_token1] = ACTIONS(195),
    [aux_sym_workdir_token1] = ACTIONS(195),
    [aux_sym_from_layer_token13] = ACTIONS(193),
    [aux_sym__repository_start_token3] = ACTIONS(195),
    [aux_sym__repository_start_token9] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(193),
    [sym__space_no_newline] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [58] = {
    [aux_sym__repository_start_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym_add_token1] = ACTIONS(319),
    [aux_sym_arg_token1] = ACTIONS(319),
    [aux_sym_cmd_token1] = ACTIONS(319),
    [aux_sym_copy_token1] = ACTIONS(319),
    [aux_sym_entrypoint_token1] = ACTIONS(319),
    [aux_sym_env_token1] = ACTIONS(319),
    [aux_sym_expose_token1] = ACTIONS(319),
    [aux_sym_from_token1] = ACTIONS(319),
    [anon_sym_AT] = ACTIONS(317),
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
    [anon_sym_DOLLAR] = ACTIONS(144),
    [aux_sym__repository_start_token2] = ACTIONS(144),
    [aux_sym__repository_start_token3] = ACTIONS(321),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [59] = {
    [aux_sym__repository_start_repeat3] = STATE(15),
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
    [aux_sym_volume_token1] = ACTIONS(313),
    [aux_sym_workdir_token1] = ACTIONS(313),
    [aux_sym_from_layer_token9] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(315),
    [aux_sym__repository_start_token7] = ACTIONS(168),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym__space_no_newline] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [60] = {
    [aux_sym__repository_start_repeat2] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym_add_token1] = ACTIONS(319),
    [aux_sym_arg_token1] = ACTIONS(319),
    [aux_sym_cmd_token1] = ACTIONS(319),
    [aux_sym_copy_token1] = ACTIONS(319),
    [aux_sym_entrypoint_token1] = ACTIONS(319),
    [aux_sym_env_token1] = ACTIONS(319),
    [aux_sym_expose_token1] = ACTIONS(319),
    [aux_sym_from_token1] = ACTIONS(319),
    [anon_sym_AT] = ACTIONS(317),
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
    [aux_sym_from_layer_token5] = ACTIONS(184),
    [aux_sym__repository_start_token3] = ACTIONS(321),
    [aux_sym__repository_start_token5] = ACTIONS(184),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_add_token1] = ACTIONS(197),
    [aux_sym_arg_token1] = ACTIONS(197),
    [aux_sym_cmd_token1] = ACTIONS(197),
    [aux_sym_copy_token1] = ACTIONS(197),
    [aux_sym_entrypoint_token1] = ACTIONS(197),
    [aux_sym_env_token1] = ACTIONS(197),
    [aux_sym_expose_token1] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [aux_sym_from_token1] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(197),
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
    [anon_sym_DOLLAR] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [aux_sym__port_part_token1] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(197),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [62] = {
    [aux_sym__repository_start_repeat4] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym_add_token1] = ACTIONS(319),
    [aux_sym_arg_token1] = ACTIONS(319),
    [aux_sym_cmd_token1] = ACTIONS(319),
    [aux_sym_copy_token1] = ACTIONS(319),
    [aux_sym_entrypoint_token1] = ACTIONS(319),
    [aux_sym_env_token1] = ACTIONS(319),
    [aux_sym_expose_token1] = ACTIONS(319),
    [aux_sym_from_token1] = ACTIONS(319),
    [anon_sym_AT] = ACTIONS(317),
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
    [aux_sym_from_layer_token13] = ACTIONS(154),
    [aux_sym__repository_start_token3] = ACTIONS(321),
    [aux_sym__repository_start_token9] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [63] = {
    [aux_sym__repository_start_repeat3] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym_add_token1] = ACTIONS(319),
    [aux_sym_arg_token1] = ACTIONS(319),
    [aux_sym_cmd_token1] = ACTIONS(319),
    [aux_sym_copy_token1] = ACTIONS(319),
    [aux_sym_entrypoint_token1] = ACTIONS(319),
    [aux_sym_env_token1] = ACTIONS(319),
    [aux_sym_expose_token1] = ACTIONS(319),
    [aux_sym_from_token1] = ACTIONS(319),
    [anon_sym_AT] = ACTIONS(317),
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
    [aux_sym_from_layer_token9] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(321),
    [aux_sym__repository_start_token7] = ACTIONS(168),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(317),
    [sym__space_no_newline] = ACTIONS(319),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [64] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
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
    [aux_sym_volume_token1] = ACTIONS(313),
    [aux_sym_workdir_token1] = ACTIONS(313),
    [aux_sym_from_layer_token5] = ACTIONS(184),
    [aux_sym__repository_start_token3] = ACTIONS(315),
    [aux_sym__repository_start_token5] = ACTIONS(184),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym__space_no_newline] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_add_token1] = ACTIONS(199),
    [aux_sym_arg_token1] = ACTIONS(199),
    [aux_sym_cmd_token1] = ACTIONS(199),
    [aux_sym_copy_token1] = ACTIONS(199),
    [aux_sym_entrypoint_token1] = ACTIONS(199),
    [aux_sym_env_token1] = ACTIONS(199),
    [aux_sym_expose_token1] = ACTIONS(199),
    [aux_sym_from_token1] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(197),
    [aux_sym_healthcheck_token1] = ACTIONS(199),
    [aux_sym_label_token1] = ACTIONS(199),
    [aux_sym_maintainer_token1] = ACTIONS(199),
    [aux_sym_onbuild_token1] = ACTIONS(199),
    [aux_sym_run_token1] = ACTIONS(199),
    [aux_sym_shell_token1] = ACTIONS(199),
    [aux_sym_stopsignal_token1] = ACTIONS(199),
    [aux_sym_user_token1] = ACTIONS(199),
    [aux_sym_volume_token1] = ACTIONS(199),
    [aux_sym_workdir_token1] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [aux_sym__repository_start_token2] = ACTIONS(197),
    [aux_sym__repository_start_token3] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(197),
    [sym__space_no_newline] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_add_token1] = ACTIONS(209),
    [aux_sym_arg_token1] = ACTIONS(209),
    [aux_sym_cmd_token1] = ACTIONS(209),
    [aux_sym_copy_token1] = ACTIONS(209),
    [aux_sym_entrypoint_token1] = ACTIONS(209),
    [aux_sym_env_token1] = ACTIONS(209),
    [aux_sym_expose_token1] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [aux_sym_from_token1] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
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
    [anon_sym_DOLLAR] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [aux_sym__port_part_token1] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_add_token1] = ACTIONS(203),
    [aux_sym_arg_token1] = ACTIONS(203),
    [aux_sym_cmd_token1] = ACTIONS(203),
    [aux_sym_copy_token1] = ACTIONS(203),
    [aux_sym_entrypoint_token1] = ACTIONS(203),
    [aux_sym_env_token1] = ACTIONS(203),
    [aux_sym_expose_token1] = ACTIONS(203),
    [aux_sym_from_token1] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(201),
    [aux_sym_healthcheck_token1] = ACTIONS(203),
    [aux_sym_label_token1] = ACTIONS(203),
    [aux_sym_maintainer_token1] = ACTIONS(203),
    [aux_sym_onbuild_token1] = ACTIONS(203),
    [aux_sym_run_token1] = ACTIONS(203),
    [aux_sym_shell_token1] = ACTIONS(203),
    [aux_sym_stopsignal_token1] = ACTIONS(203),
    [aux_sym_user_token1] = ACTIONS(203),
    [aux_sym_volume_token1] = ACTIONS(203),
    [aux_sym_workdir_token1] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym__repository_start_token2] = ACTIONS(201),
    [aux_sym__repository_start_token3] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(201),
    [sym__space_no_newline] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_add_token1] = ACTIONS(160),
    [aux_sym_arg_token1] = ACTIONS(160),
    [aux_sym_cmd_token1] = ACTIONS(160),
    [aux_sym_copy_token1] = ACTIONS(160),
    [aux_sym_entrypoint_token1] = ACTIONS(160),
    [aux_sym_env_token1] = ACTIONS(160),
    [aux_sym_expose_token1] = ACTIONS(160),
    [aux_sym_from_token1] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(160),
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
    [anon_sym_SLASH] = ACTIONS(164),
    [aux_sym__repository_start_token10] = ACTIONS(164),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(160),
    [sym__space_no_newline] = ACTIONS(162),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_add_token1] = ACTIONS(261),
    [aux_sym_arg_token1] = ACTIONS(261),
    [aux_sym_cmd_token1] = ACTIONS(261),
    [aux_sym_copy_token1] = ACTIONS(261),
    [aux_sym_entrypoint_token1] = ACTIONS(261),
    [aux_sym_env_token1] = ACTIONS(261),
    [aux_sym_expose_token1] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
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
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_path_token1] = ACTIONS(269),
    [aux_sym_path_token2] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(269),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [70] = {
    [aux_sym__repository_start_repeat1] = STATE(14),
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
    [anon_sym_DOLLAR] = ACTIONS(144),
    [aux_sym__repository_start_token2] = ACTIONS(144),
    [aux_sym__repository_start_token3] = ACTIONS(327),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym__space_no_newline] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [71] = {
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
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [aux_sym__port_part_token1] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [72] = {
    [aux_sym__repository_start_repeat2] = STATE(9),
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
    [aux_sym_from_layer_token5] = ACTIONS(184),
    [aux_sym__repository_start_token3] = ACTIONS(333),
    [aux_sym__repository_start_token5] = ACTIONS(184),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_add_token1] = ACTIONS(209),
    [aux_sym_arg_token1] = ACTIONS(209),
    [aux_sym_cmd_token1] = ACTIONS(209),
    [aux_sym_copy_token1] = ACTIONS(209),
    [aux_sym_entrypoint_token1] = ACTIONS(209),
    [aux_sym_env_token1] = ACTIONS(209),
    [aux_sym_expose_token1] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(209),
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
    [anon_sym_DOLLAR] = ACTIONS(209),
    [aux_sym_path_token1] = ACTIONS(211),
    [aux_sym_path_token2] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(209),
    [sym__space_no_newline] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [74] = {
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
    [aux_sym__repository_start_token10] = ACTIONS(339),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(335),
    [sym__space_no_newline] = ACTIONS(337),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [75] = {
    [aux_sym__repository_start_repeat2] = STATE(72),
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
    [aux_sym_from_layer_token5] = ACTIONS(184),
    [aux_sym__repository_start_token3] = ACTIONS(327),
    [aux_sym__repository_start_token5] = ACTIONS(184),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym__space_no_newline] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [76] = {
    [aux_sym__repository_start_repeat3] = STATE(94),
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
    [aux_sym_from_layer_token9] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(327),
    [aux_sym__repository_start_token7] = ACTIONS(168),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym__space_no_newline] = ACTIONS(325),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [77] = {
    [aux_sym__repository_start_repeat4] = STATE(93),
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
    [aux_sym_from_layer_token13] = ACTIONS(154),
    [aux_sym__repository_start_token3] = ACTIONS(327),
    [aux_sym__repository_start_token9] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym__space_no_newline] = ACTIONS(325),
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
    [anon_sym_COLON] = ACTIONS(341),
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
    [anon_sym_DOLLAR] = ACTIONS(341),
    [anon_sym_DASH] = ACTIONS(341),
    [aux_sym__port_part_token1] = ACTIONS(341),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(341),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [79] = {
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
    [aux_sym_volume_token1] = ACTIONS(343),
    [aux_sym_workdir_token1] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [anon_sym_DASH] = ACTIONS(345),
    [aux_sym__port_part_token1] = ACTIONS(343),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(343),
    [sym_comment] = ACTIONS(5),
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
    [aux_sym__repository_start_token10] = ACTIONS(351),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(347),
    [sym__space_no_newline] = ACTIONS(349),
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
    [aux_sym_volume_token1] = ACTIONS(353),
    [aux_sym_workdir_token1] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(353),
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
    [anon_sym_DOLLAR] = ACTIONS(357),
    [aux_sym_path_token1] = ACTIONS(359),
    [aux_sym_path_token2] = ACTIONS(359),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(357),
    [sym__space_no_newline] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [83] = {
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
    [aux_sym_volume_token1] = ACTIONS(361),
    [aux_sym_workdir_token1] = ACTIONS(361),
    [anon_sym_DOLLAR] = ACTIONS(361),
    [aux_sym_path_token1] = ACTIONS(363),
    [aux_sym_path_token2] = ACTIONS(363),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(361),
    [sym__space_no_newline] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [84] = {
    [aux_sym__repository_start_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(365),
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
    [anon_sym_DOLLAR] = ACTIONS(144),
    [aux_sym__repository_start_token2] = ACTIONS(144),
    [aux_sym__repository_start_token3] = ACTIONS(369),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(365),
    [sym__space_no_newline] = ACTIONS(367),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_add_token1] = ACTIONS(201),
    [aux_sym_arg_token1] = ACTIONS(201),
    [aux_sym_cmd_token1] = ACTIONS(201),
    [aux_sym_copy_token1] = ACTIONS(201),
    [aux_sym_entrypoint_token1] = ACTIONS(201),
    [aux_sym_env_token1] = ACTIONS(201),
    [aux_sym_expose_token1] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
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
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_path_token1] = ACTIONS(203),
    [aux_sym_path_token2] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(201),
    [sym__space_no_newline] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [86] = {
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
    [anon_sym_DOLLAR] = ACTIONS(285),
    [aux_sym_path_token1] = ACTIONS(290),
    [aux_sym_path_token2] = ACTIONS(290),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym__space_no_newline] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_add_token1] = ACTIONS(197),
    [aux_sym_arg_token1] = ACTIONS(197),
    [aux_sym_cmd_token1] = ACTIONS(197),
    [aux_sym_copy_token1] = ACTIONS(197),
    [aux_sym_entrypoint_token1] = ACTIONS(197),
    [aux_sym_env_token1] = ACTIONS(197),
    [aux_sym_expose_token1] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(197),
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
    [anon_sym_DOLLAR] = ACTIONS(197),
    [aux_sym_path_token1] = ACTIONS(199),
    [aux_sym_path_token2] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(197),
    [sym__space_no_newline] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [88] = {
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
    [anon_sym_COLON] = ACTIONS(371),
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
    [anon_sym_DOLLAR] = ACTIONS(371),
    [anon_sym_DASH] = ACTIONS(371),
    [aux_sym__port_part_token1] = ACTIONS(371),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(371),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [89] = {
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
    [aux_sym_volume_token1] = ACTIONS(373),
    [aux_sym_workdir_token1] = ACTIONS(373),
    [anon_sym_DOLLAR] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [aux_sym__port_part_token1] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [aux_sym_add_token1] = ACTIONS(150),
    [aux_sym_arg_token1] = ACTIONS(150),
    [aux_sym_cmd_token1] = ACTIONS(150),
    [aux_sym_copy_token1] = ACTIONS(150),
    [aux_sym_entrypoint_token1] = ACTIONS(150),
    [aux_sym_env_token1] = ACTIONS(150),
    [aux_sym_expose_token1] = ACTIONS(150),
    [aux_sym_from_token1] = ACTIONS(150),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(150),
    [aux_sym_healthcheck_token1] = ACTIONS(150),
    [aux_sym_label_token1] = ACTIONS(150),
    [aux_sym_maintainer_token1] = ACTIONS(150),
    [aux_sym_onbuild_token1] = ACTIONS(150),
    [aux_sym_run_token1] = ACTIONS(150),
    [aux_sym_shell_token1] = ACTIONS(150),
    [aux_sym_stopsignal_token1] = ACTIONS(150),
    [aux_sym_user_token1] = ACTIONS(150),
    [aux_sym_volume_token1] = ACTIONS(150),
    [aux_sym_workdir_token1] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(156),
    [aux_sym__repository_start_token10] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(150),
    [sym__space_no_newline] = ACTIONS(152),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [91] = {
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
    [aux_sym_volume_token1] = ACTIONS(375),
    [aux_sym_workdir_token1] = ACTIONS(375),
    [anon_sym_DOLLAR] = ACTIONS(375),
    [aux_sym_path_token1] = ACTIONS(377),
    [aux_sym_path_token2] = ACTIONS(377),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(375),
    [sym__space_no_newline] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [92] = {
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
    [aux_sym_volume_token1] = ACTIONS(381),
    [aux_sym_workdir_token1] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [aux_sym_path_token1] = ACTIONS(383),
    [aux_sym_path_token2] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(381),
    [sym__space_no_newline] = ACTIONS(383),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [93] = {
    [aux_sym__repository_start_repeat4] = STATE(20),
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
    [aux_sym_from_layer_token13] = ACTIONS(154),
    [aux_sym__repository_start_token3] = ACTIONS(333),
    [aux_sym__repository_start_token9] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [94] = {
    [aux_sym__repository_start_repeat3] = STATE(15),
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
    [aux_sym_from_layer_token9] = ACTIONS(168),
    [aux_sym__repository_start_token3] = ACTIONS(333),
    [aux_sym__repository_start_token7] = ACTIONS(168),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(329),
    [sym__space_no_newline] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [95] = {
    [aux_sym__repository_start_repeat4] = STATE(102),
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
    [aux_sym_volume_token1] = ACTIONS(387),
    [aux_sym_workdir_token1] = ACTIONS(387),
    [aux_sym_from_layer_token13] = ACTIONS(389),
    [aux_sym__repository_start_token3] = ACTIONS(391),
    [aux_sym__repository_start_token9] = ACTIONS(389),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(385),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [anon_sym_COLON] = ACTIONS(393),
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
    [anon_sym_DOLLAR] = ACTIONS(393),
    [aux_sym__port_part_token1] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(393),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [97] = {
    [aux_sym__repository_start_repeat2] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(133),
    [aux_sym_add_token1] = ACTIONS(135),
    [aux_sym_arg_token1] = ACTIONS(135),
    [aux_sym_cmd_token1] = ACTIONS(135),
    [aux_sym_copy_token1] = ACTIONS(135),
    [aux_sym_entrypoint_token1] = ACTIONS(135),
    [aux_sym_env_token1] = ACTIONS(135),
    [aux_sym_expose_token1] = ACTIONS(135),
    [aux_sym_from_token1] = ACTIONS(135),
    [aux_sym_healthcheck_token1] = ACTIONS(135),
    [aux_sym_label_token1] = ACTIONS(135),
    [aux_sym_maintainer_token1] = ACTIONS(135),
    [aux_sym_onbuild_token1] = ACTIONS(135),
    [aux_sym_run_token1] = ACTIONS(135),
    [aux_sym_shell_token1] = ACTIONS(135),
    [aux_sym_stopsignal_token1] = ACTIONS(135),
    [aux_sym_user_token1] = ACTIONS(135),
    [aux_sym_volume_token1] = ACTIONS(135),
    [aux_sym_workdir_token1] = ACTIONS(135),
    [aux_sym_from_layer_token5] = ACTIONS(395),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token5] = ACTIONS(395),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [98] = {
    [aux_sym__repository_start_repeat3] = STATE(112),
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
    [aux_sym_volume_token1] = ACTIONS(387),
    [aux_sym_workdir_token1] = ACTIONS(387),
    [aux_sym_from_layer_token9] = ACTIONS(398),
    [aux_sym__repository_start_token3] = ACTIONS(391),
    [aux_sym__repository_start_token7] = ACTIONS(398),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(385),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [anon_sym_COLON] = ACTIONS(402),
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
    [anon_sym_DOLLAR] = ACTIONS(400),
    [aux_sym__port_part_token1] = ACTIONS(400),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(400),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [100] = {
    [aux_sym__repository_start_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_add_token1] = ACTIONS(172),
    [aux_sym_arg_token1] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(172),
    [aux_sym_copy_token1] = ACTIONS(172),
    [aux_sym_entrypoint_token1] = ACTIONS(172),
    [aux_sym_env_token1] = ACTIONS(172),
    [aux_sym_expose_token1] = ACTIONS(172),
    [aux_sym_from_token1] = ACTIONS(172),
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
    [anon_sym_DOLLAR] = ACTIONS(404),
    [aux_sym__repository_start_token2] = ACTIONS(404),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [aux_sym_add_token1] = ACTIONS(271),
    [aux_sym_arg_token1] = ACTIONS(271),
    [aux_sym_cmd_token1] = ACTIONS(271),
    [aux_sym_copy_token1] = ACTIONS(271),
    [aux_sym_entrypoint_token1] = ACTIONS(271),
    [aux_sym_env_token1] = ACTIONS(271),
    [aux_sym_expose_token1] = ACTIONS(271),
    [anon_sym_DQUOTE] = ACTIONS(271),
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
    [anon_sym_DOLLAR] = ACTIONS(271),
    [aux_sym_path_token1] = ACTIONS(407),
    [aux_sym_path_token2] = ACTIONS(407),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [102] = {
    [aux_sym__repository_start_repeat4] = STATE(102),
    [ts_builtin_sym_end] = ACTIONS(186),
    [aux_sym_add_token1] = ACTIONS(188),
    [aux_sym_arg_token1] = ACTIONS(188),
    [aux_sym_cmd_token1] = ACTIONS(188),
    [aux_sym_copy_token1] = ACTIONS(188),
    [aux_sym_entrypoint_token1] = ACTIONS(188),
    [aux_sym_env_token1] = ACTIONS(188),
    [aux_sym_expose_token1] = ACTIONS(188),
    [aux_sym_from_token1] = ACTIONS(188),
    [aux_sym_healthcheck_token1] = ACTIONS(188),
    [aux_sym_label_token1] = ACTIONS(188),
    [aux_sym_maintainer_token1] = ACTIONS(188),
    [aux_sym_onbuild_token1] = ACTIONS(188),
    [aux_sym_run_token1] = ACTIONS(188),
    [aux_sym_shell_token1] = ACTIONS(188),
    [aux_sym_stopsignal_token1] = ACTIONS(188),
    [aux_sym_user_token1] = ACTIONS(188),
    [aux_sym_volume_token1] = ACTIONS(188),
    [aux_sym_workdir_token1] = ACTIONS(188),
    [aux_sym_from_layer_token13] = ACTIONS(409),
    [aux_sym__repository_start_token3] = ACTIONS(188),
    [aux_sym__repository_start_token9] = ACTIONS(409),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [103] = {
    [aux_sym__repository_start_repeat2] = STATE(97),
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
    [aux_sym_volume_token1] = ACTIONS(387),
    [aux_sym_workdir_token1] = ACTIONS(387),
    [aux_sym_from_layer_token5] = ACTIONS(412),
    [aux_sym__repository_start_token3] = ACTIONS(391),
    [aux_sym__repository_start_token5] = ACTIONS(412),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(385),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [aux_sym_add_token1] = ACTIONS(414),
    [aux_sym_arg_token1] = ACTIONS(414),
    [aux_sym_cmd_token1] = ACTIONS(414),
    [aux_sym_copy_token1] = ACTIONS(414),
    [aux_sym_entrypoint_token1] = ACTIONS(414),
    [aux_sym_env_token1] = ACTIONS(414),
    [aux_sym_expose_token1] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(414),
    [aux_sym_from_token1] = ACTIONS(414),
    [anon_sym_COLON] = ACTIONS(414),
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
    [anon_sym_DOLLAR] = ACTIONS(414),
    [aux_sym__port_part_token1] = ACTIONS(414),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(414),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [105] = {
    [aux_sym_path_repeat1] = STATE(105),
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
    [anon_sym_DOLLAR] = ACTIONS(416),
    [aux_sym_path_token1] = ACTIONS(290),
    [aux_sym_path_token2] = ACTIONS(419),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [106] = {
    [aux_sym__repository_start_repeat4] = STATE(95),
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
    [aux_sym_from_layer_token13] = ACTIONS(389),
    [aux_sym__repository_start_token3] = ACTIONS(426),
    [aux_sym__repository_start_token9] = ACTIONS(389),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [107] = {
    [aux_sym__repository_start_repeat3] = STATE(98),
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
    [aux_sym_from_layer_token9] = ACTIONS(398),
    [aux_sym__repository_start_token3] = ACTIONS(426),
    [aux_sym__repository_start_token7] = ACTIONS(398),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [108] = {
    [aux_sym__repository_start_repeat2] = STATE(103),
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
    [aux_sym_from_layer_token5] = ACTIONS(412),
    [aux_sym__repository_start_token3] = ACTIONS(426),
    [aux_sym__repository_start_token5] = ACTIONS(412),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [109] = {
    [aux_sym_path_repeat1] = STATE(105),
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
    [anon_sym_DOLLAR] = ACTIONS(428),
    [aux_sym_path_token1] = ACTIONS(430),
    [aux_sym_path_token2] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [110] = {
    [aux_sym__repository_start_repeat1] = STATE(100),
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
    [anon_sym_DOLLAR] = ACTIONS(434),
    [aux_sym__repository_start_token2] = ACTIONS(434),
    [aux_sym__repository_start_token3] = ACTIONS(426),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [111] = {
    [aux_sym__repository_start_repeat1] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(436),
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
    [anon_sym_DOLLAR] = ACTIONS(434),
    [aux_sym__repository_start_token2] = ACTIONS(434),
    [aux_sym__repository_start_token3] = ACTIONS(440),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(436),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [112] = {
    [aux_sym__repository_start_repeat3] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(177),
    [aux_sym_add_token1] = ACTIONS(179),
    [aux_sym_arg_token1] = ACTIONS(179),
    [aux_sym_cmd_token1] = ACTIONS(179),
    [aux_sym_copy_token1] = ACTIONS(179),
    [aux_sym_entrypoint_token1] = ACTIONS(179),
    [aux_sym_env_token1] = ACTIONS(179),
    [aux_sym_expose_token1] = ACTIONS(179),
    [aux_sym_from_token1] = ACTIONS(179),
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
    [aux_sym_from_layer_token9] = ACTIONS(442),
    [aux_sym__repository_start_token3] = ACTIONS(179),
    [aux_sym__repository_start_token7] = ACTIONS(442),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [113] = {
    [aux_sym_path_repeat1] = STATE(109),
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
    [anon_sym_DOLLAR] = ACTIONS(428),
    [aux_sym_path_token1] = ACTIONS(445),
    [aux_sym_path_token2] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [114] = {
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
    [anon_sym_DOLLAR] = ACTIONS(447),
    [aux_sym__port_part_token1] = ACTIONS(447),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(447),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(197),
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
    [anon_sym_DOLLAR] = ACTIONS(197),
    [aux_sym_path_token1] = ACTIONS(199),
    [aux_sym_path_token2] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(201),
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
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_path_token1] = ACTIONS(203),
    [aux_sym_path_token2] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(209),
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
    [anon_sym_DOLLAR] = ACTIONS(209),
    [aux_sym_path_token1] = ACTIONS(211),
    [aux_sym_path_token2] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [118] = {
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
    [anon_sym_DOLLAR] = ACTIONS(285),
    [aux_sym_path_token1] = ACTIONS(290),
    [aux_sym_path_token2] = ACTIONS(290),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [119] = {
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
    [aux_sym_volume_token1] = ACTIONS(449),
    [aux_sym_workdir_token1] = ACTIONS(449),
    [anon_sym_DOLLAR] = ACTIONS(449),
    [aux_sym__port_part_token1] = ACTIONS(449),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(449),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_add_token1] = ACTIONS(160),
    [aux_sym_arg_token1] = ACTIONS(160),
    [aux_sym_cmd_token1] = ACTIONS(160),
    [aux_sym_copy_token1] = ACTIONS(160),
    [aux_sym_entrypoint_token1] = ACTIONS(160),
    [aux_sym_env_token1] = ACTIONS(160),
    [aux_sym_expose_token1] = ACTIONS(160),
    [aux_sym_from_token1] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(160),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(160),
    [sym__space_no_newline] = ACTIONS(162),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [aux_sym_add_token1] = ACTIONS(451),
    [aux_sym_arg_token1] = ACTIONS(451),
    [aux_sym_cmd_token1] = ACTIONS(451),
    [aux_sym_copy_token1] = ACTIONS(451),
    [aux_sym_entrypoint_token1] = ACTIONS(451),
    [aux_sym_env_token1] = ACTIONS(451),
    [aux_sym_expose_token1] = ACTIONS(451),
    [aux_sym_from_token1] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(455),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(451),
    [sym__space_no_newline] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(193),
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
    [aux_sym_volume_token1] = ACTIONS(195),
    [aux_sym_workdir_token1] = ACTIONS(195),
    [aux_sym_from_layer_token13] = ACTIONS(193),
    [aux_sym__repository_start_token3] = ACTIONS(195),
    [aux_sym__repository_start_token9] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
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
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(463),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(459),
    [sym__space_no_newline] = ACTIONS(465),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [124] = {
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
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym_add_token1] = ACTIONS(467),
    [aux_sym_arg_token1] = ACTIONS(467),
    [aux_sym_cmd_token1] = ACTIONS(467),
    [aux_sym_copy_token1] = ACTIONS(467),
    [aux_sym_entrypoint_token1] = ACTIONS(467),
    [aux_sym_env_token1] = ACTIONS(467),
    [aux_sym_expose_token1] = ACTIONS(467),
    [aux_sym_from_token1] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(471),
    [aux_sym_healthcheck_token1] = ACTIONS(467),
    [aux_sym_label_token1] = ACTIONS(467),
    [aux_sym_maintainer_token1] = ACTIONS(467),
    [aux_sym_onbuild_token1] = ACTIONS(467),
    [aux_sym_run_token1] = ACTIONS(467),
    [aux_sym_shell_token1] = ACTIONS(467),
    [aux_sym_stopsignal_token1] = ACTIONS(467),
    [aux_sym_user_token1] = ACTIONS(467),
    [aux_sym_volume_token1] = ACTIONS(467),
    [aux_sym_workdir_token1] = ACTIONS(467),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(467),
    [sym__space_no_newline] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(197),
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
    [aux_sym_volume_token1] = ACTIONS(199),
    [aux_sym_workdir_token1] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [aux_sym__repository_start_token2] = ACTIONS(197),
    [aux_sym__repository_start_token3] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [aux_sym_add_token1] = ACTIONS(215),
    [aux_sym_arg_token1] = ACTIONS(215),
    [aux_sym_cmd_token1] = ACTIONS(215),
    [aux_sym_copy_token1] = ACTIONS(215),
    [aux_sym_entrypoint_token1] = ACTIONS(215),
    [aux_sym_env_token1] = ACTIONS(215),
    [aux_sym_expose_token1] = ACTIONS(215),
    [aux_sym_from_token1] = ACTIONS(215),
    [aux_sym_healthcheck_token1] = ACTIONS(215),
    [aux_sym_label_token1] = ACTIONS(215),
    [aux_sym_maintainer_token1] = ACTIONS(215),
    [aux_sym_onbuild_token1] = ACTIONS(215),
    [aux_sym_run_token1] = ACTIONS(215),
    [aux_sym_shell_token1] = ACTIONS(215),
    [aux_sym_stopsignal_token1] = ACTIONS(215),
    [aux_sym_user_token1] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(215),
    [aux_sym_workdir_token1] = ACTIONS(215),
    [aux_sym_from_layer_token5] = ACTIONS(213),
    [aux_sym__repository_start_token3] = ACTIONS(215),
    [aux_sym__repository_start_token5] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_add_token1] = ACTIONS(172),
    [aux_sym_arg_token1] = ACTIONS(172),
    [aux_sym_cmd_token1] = ACTIONS(172),
    [aux_sym_copy_token1] = ACTIONS(172),
    [aux_sym_entrypoint_token1] = ACTIONS(172),
    [aux_sym_env_token1] = ACTIONS(172),
    [aux_sym_expose_token1] = ACTIONS(172),
    [aux_sym_from_token1] = ACTIONS(172),
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
    [anon_sym_DOLLAR] = ACTIONS(170),
    [aux_sym__repository_start_token2] = ACTIONS(170),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(201),
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
    [aux_sym_volume_token1] = ACTIONS(203),
    [aux_sym_workdir_token1] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym__repository_start_token2] = ACTIONS(201),
    [aux_sym__repository_start_token3] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(209),
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
    [aux_sym_volume_token1] = ACTIONS(211),
    [aux_sym_workdir_token1] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(209),
    [aux_sym__repository_start_token2] = ACTIONS(209),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [aux_sym_add_token1] = ACTIONS(475),
    [aux_sym_arg_token1] = ACTIONS(475),
    [aux_sym_cmd_token1] = ACTIONS(475),
    [aux_sym_copy_token1] = ACTIONS(475),
    [aux_sym_entrypoint_token1] = ACTIONS(475),
    [aux_sym_env_token1] = ACTIONS(475),
    [aux_sym_expose_token1] = ACTIONS(475),
    [aux_sym_from_token1] = ACTIONS(475),
    [anon_sym_COLON] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(479),
    [aux_sym_healthcheck_token1] = ACTIONS(475),
    [aux_sym_label_token1] = ACTIONS(475),
    [aux_sym_maintainer_token1] = ACTIONS(475),
    [aux_sym_onbuild_token1] = ACTIONS(475),
    [aux_sym_run_token1] = ACTIONS(475),
    [aux_sym_shell_token1] = ACTIONS(475),
    [aux_sym_stopsignal_token1] = ACTIONS(475),
    [aux_sym_user_token1] = ACTIONS(475),
    [aux_sym_volume_token1] = ACTIONS(475),
    [aux_sym_workdir_token1] = ACTIONS(475),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(475),
    [sym__space_no_newline] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(205),
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
    [aux_sym_volume_token1] = ACTIONS(207),
    [aux_sym_workdir_token1] = ACTIONS(207),
    [aux_sym_from_layer_token9] = ACTIONS(205),
    [aux_sym__repository_start_token3] = ACTIONS(207),
    [aux_sym__repository_start_token7] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [aux_sym_add_token1] = ACTIONS(150),
    [aux_sym_arg_token1] = ACTIONS(150),
    [aux_sym_cmd_token1] = ACTIONS(150),
    [aux_sym_copy_token1] = ACTIONS(150),
    [aux_sym_entrypoint_token1] = ACTIONS(150),
    [aux_sym_env_token1] = ACTIONS(150),
    [aux_sym_expose_token1] = ACTIONS(150),
    [aux_sym_from_token1] = ACTIONS(150),
    [anon_sym_COLON] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(150),
    [aux_sym_healthcheck_token1] = ACTIONS(150),
    [aux_sym_label_token1] = ACTIONS(150),
    [aux_sym_maintainer_token1] = ACTIONS(150),
    [aux_sym_onbuild_token1] = ACTIONS(150),
    [aux_sym_run_token1] = ACTIONS(150),
    [aux_sym_shell_token1] = ACTIONS(150),
    [aux_sym_stopsignal_token1] = ACTIONS(150),
    [aux_sym_user_token1] = ACTIONS(150),
    [aux_sym_volume_token1] = ACTIONS(150),
    [aux_sym_workdir_token1] = ACTIONS(150),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(150),
    [sym__space_no_newline] = ACTIONS(152),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [aux_sym_add_token1] = ACTIONS(483),
    [aux_sym_arg_token1] = ACTIONS(483),
    [aux_sym_cmd_token1] = ACTIONS(483),
    [aux_sym_copy_token1] = ACTIONS(483),
    [aux_sym_entrypoint_token1] = ACTIONS(483),
    [aux_sym_env_token1] = ACTIONS(483),
    [aux_sym_expose_token1] = ACTIONS(483),
    [aux_sym_from_token1] = ACTIONS(483),
    [anon_sym_AT] = ACTIONS(483),
    [aux_sym_healthcheck_token1] = ACTIONS(483),
    [aux_sym_label_token1] = ACTIONS(483),
    [aux_sym_maintainer_token1] = ACTIONS(483),
    [aux_sym_onbuild_token1] = ACTIONS(483),
    [aux_sym_run_token1] = ACTIONS(483),
    [aux_sym_shell_token1] = ACTIONS(483),
    [aux_sym_stopsignal_token1] = ACTIONS(483),
    [aux_sym_user_token1] = ACTIONS(483),
    [aux_sym_volume_token1] = ACTIONS(483),
    [aux_sym_workdir_token1] = ACTIONS(483),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(483),
    [sym__space_no_newline] = ACTIONS(485),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(209),
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
    [anon_sym_EQ2] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(209),
    [sym__space_no_newline] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [aux_sym_add_token1] = ACTIONS(311),
    [aux_sym_arg_token1] = ACTIONS(311),
    [aux_sym_cmd_token1] = ACTIONS(311),
    [aux_sym_copy_token1] = ACTIONS(311),
    [aux_sym_entrypoint_token1] = ACTIONS(311),
    [aux_sym_env_token1] = ACTIONS(311),
    [aux_sym_expose_token1] = ACTIONS(311),
    [aux_sym_from_token1] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(311),
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
    [sym__space_no_newline] = ACTIONS(313),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym_add_token1] = ACTIONS(467),
    [aux_sym_arg_token1] = ACTIONS(467),
    [aux_sym_cmd_token1] = ACTIONS(467),
    [aux_sym_copy_token1] = ACTIONS(467),
    [aux_sym_entrypoint_token1] = ACTIONS(467),
    [aux_sym_env_token1] = ACTIONS(467),
    [aux_sym_expose_token1] = ACTIONS(467),
    [aux_sym_from_token1] = ACTIONS(467),
    [anon_sym_AT] = ACTIONS(471),
    [aux_sym_healthcheck_token1] = ACTIONS(467),
    [aux_sym_label_token1] = ACTIONS(467),
    [aux_sym_maintainer_token1] = ACTIONS(467),
    [aux_sym_onbuild_token1] = ACTIONS(467),
    [aux_sym_run_token1] = ACTIONS(467),
    [aux_sym_shell_token1] = ACTIONS(467),
    [aux_sym_stopsignal_token1] = ACTIONS(467),
    [aux_sym_user_token1] = ACTIONS(467),
    [aux_sym_volume_token1] = ACTIONS(467),
    [aux_sym_workdir_token1] = ACTIONS(467),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(467),
    [sym__space_no_newline] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [aux_sym__anything] = STATE(142),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__anything_ex] = ACTIONS(489),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [aux_sym_add_token1] = ACTIONS(491),
    [aux_sym_arg_token1] = ACTIONS(491),
    [aux_sym_cmd_token1] = ACTIONS(491),
    [aux_sym_copy_token1] = ACTIONS(491),
    [aux_sym_entrypoint_token1] = ACTIONS(491),
    [aux_sym_env_token1] = ACTIONS(491),
    [aux_sym_expose_token1] = ACTIONS(491),
    [aux_sym_from_token1] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(493),
    [aux_sym_healthcheck_token1] = ACTIONS(491),
    [aux_sym_label_token1] = ACTIONS(491),
    [aux_sym_maintainer_token1] = ACTIONS(491),
    [aux_sym_onbuild_token1] = ACTIONS(491),
    [aux_sym_run_token1] = ACTIONS(491),
    [aux_sym_shell_token1] = ACTIONS(491),
    [aux_sym_stopsignal_token1] = ACTIONS(491),
    [aux_sym_user_token1] = ACTIONS(491),
    [aux_sym_volume_token1] = ACTIONS(491),
    [aux_sym_workdir_token1] = ACTIONS(491),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(491),
    [sym__space_no_newline] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
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
  [142] = {
    [aux_sym__anything] = STATE(142),
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
    [sym__anything_ex] = ACTIONS(505),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(201),
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
    [anon_sym_EQ2] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(201),
    [sym__space_no_newline] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
    [aux_sym__anything] = STATE(144),
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
    [sym_comment] = ACTIONS(503),
    [sym_line_continuation] = ACTIONS(5),
    [sym__anything_ex] = ACTIONS(508),
  },
  [145] = {
    [aux_sym__labels_repeat1] = STATE(160),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(511),
    [sym__space_no_newline] = ACTIONS(513),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [aux_sym_add_token1] = ACTIONS(515),
    [aux_sym_arg_token1] = ACTIONS(515),
    [aux_sym_cmd_token1] = ACTIONS(515),
    [aux_sym_copy_token1] = ACTIONS(515),
    [aux_sym_entrypoint_token1] = ACTIONS(515),
    [aux_sym_env_token1] = ACTIONS(515),
    [aux_sym_expose_token1] = ACTIONS(515),
    [aux_sym_from_token1] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(515),
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
    [sym__space_no_newline] = ACTIONS(517),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(519),
    [aux_sym_add_token1] = ACTIONS(519),
    [aux_sym_arg_token1] = ACTIONS(519),
    [aux_sym_cmd_token1] = ACTIONS(519),
    [aux_sym_copy_token1] = ACTIONS(519),
    [aux_sym_entrypoint_token1] = ACTIONS(519),
    [aux_sym_env_token1] = ACTIONS(519),
    [aux_sym_expose_token1] = ACTIONS(519),
    [aux_sym_from_token1] = ACTIONS(519),
    [aux_sym_healthcheck_token1] = ACTIONS(519),
    [aux_sym_label_token1] = ACTIONS(519),
    [aux_sym_maintainer_token1] = ACTIONS(519),
    [aux_sym_onbuild_token1] = ACTIONS(519),
    [aux_sym_run_token1] = ACTIONS(519),
    [aux_sym_shell_token1] = ACTIONS(519),
    [aux_sym_stopsignal_token1] = ACTIONS(519),
    [aux_sym_user_token1] = ACTIONS(519),
    [aux_sym_volume_token1] = ACTIONS(519),
    [aux_sym_workdir_token1] = ACTIONS(519),
    [anon_sym_EQ2] = ACTIONS(521),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(519),
    [sym__space_no_newline] = ACTIONS(523),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
    [aux_sym__env_pairs_repeat1] = STATE(155),
    [ts_builtin_sym_end] = ACTIONS(519),
    [aux_sym_add_token1] = ACTIONS(519),
    [aux_sym_arg_token1] = ACTIONS(519),
    [aux_sym_cmd_token1] = ACTIONS(519),
    [aux_sym_copy_token1] = ACTIONS(519),
    [aux_sym_entrypoint_token1] = ACTIONS(519),
    [aux_sym_env_token1] = ACTIONS(519),
    [aux_sym_expose_token1] = ACTIONS(519),
    [aux_sym_from_token1] = ACTIONS(519),
    [aux_sym_healthcheck_token1] = ACTIONS(519),
    [aux_sym_label_token1] = ACTIONS(519),
    [aux_sym_maintainer_token1] = ACTIONS(519),
    [aux_sym_onbuild_token1] = ACTIONS(519),
    [aux_sym_run_token1] = ACTIONS(519),
    [aux_sym_shell_token1] = ACTIONS(519),
    [aux_sym_stopsignal_token1] = ACTIONS(519),
    [aux_sym_user_token1] = ACTIONS(519),
    [aux_sym_volume_token1] = ACTIONS(519),
    [aux_sym_workdir_token1] = ACTIONS(519),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(519),
    [sym__space_no_newline] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [aux_sym_add_token1] = ACTIONS(527),
    [aux_sym_arg_token1] = ACTIONS(527),
    [aux_sym_cmd_token1] = ACTIONS(527),
    [aux_sym_copy_token1] = ACTIONS(527),
    [aux_sym_entrypoint_token1] = ACTIONS(527),
    [aux_sym_env_token1] = ACTIONS(527),
    [aux_sym_expose_token1] = ACTIONS(527),
    [aux_sym_from_token1] = ACTIONS(527),
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
    [anon_sym_EQ2] = ACTIONS(527),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(527),
    [sym__space_no_newline] = ACTIONS(529),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [aux_sym__env_pairs_repeat1] = STATE(150),
    [ts_builtin_sym_end] = ACTIONS(531),
    [aux_sym_add_token1] = ACTIONS(531),
    [aux_sym_arg_token1] = ACTIONS(531),
    [aux_sym_cmd_token1] = ACTIONS(531),
    [aux_sym_copy_token1] = ACTIONS(531),
    [aux_sym_entrypoint_token1] = ACTIONS(531),
    [aux_sym_env_token1] = ACTIONS(531),
    [aux_sym_expose_token1] = ACTIONS(531),
    [aux_sym_from_token1] = ACTIONS(531),
    [aux_sym_healthcheck_token1] = ACTIONS(531),
    [aux_sym_label_token1] = ACTIONS(531),
    [aux_sym_maintainer_token1] = ACTIONS(531),
    [aux_sym_onbuild_token1] = ACTIONS(531),
    [aux_sym_run_token1] = ACTIONS(531),
    [aux_sym_shell_token1] = ACTIONS(531),
    [aux_sym_stopsignal_token1] = ACTIONS(531),
    [aux_sym_user_token1] = ACTIONS(531),
    [aux_sym_volume_token1] = ACTIONS(531),
    [aux_sym_workdir_token1] = ACTIONS(531),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(531),
    [sym__space_no_newline] = ACTIONS(533),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [aux_sym_add_token1] = ACTIONS(451),
    [aux_sym_arg_token1] = ACTIONS(451),
    [aux_sym_cmd_token1] = ACTIONS(451),
    [aux_sym_copy_token1] = ACTIONS(451),
    [aux_sym_entrypoint_token1] = ACTIONS(451),
    [aux_sym_env_token1] = ACTIONS(451),
    [aux_sym_expose_token1] = ACTIONS(451),
    [aux_sym_from_token1] = ACTIONS(451),
    [anon_sym_AT] = ACTIONS(455),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(451),
    [sym__space_no_newline] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
    [aux_sym__anything] = STATE(144),
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
    [sym_comment] = ACTIONS(538),
    [sym_line_continuation] = ACTIONS(5),
    [sym__anything_ex] = ACTIONS(540),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [aux_sym_add_token1] = ACTIONS(317),
    [aux_sym_arg_token1] = ACTIONS(317),
    [aux_sym_cmd_token1] = ACTIONS(317),
    [aux_sym_copy_token1] = ACTIONS(317),
    [aux_sym_entrypoint_token1] = ACTIONS(317),
    [aux_sym_env_token1] = ACTIONS(317),
    [aux_sym_expose_token1] = ACTIONS(317),
    [aux_sym_from_token1] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
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
  [154] = {
    [aux_sym__anything] = STATE(142),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__anything_ex] = ACTIONS(489),
  },
  [155] = {
    [aux_sym__env_pairs_repeat1] = STATE(150),
    [ts_builtin_sym_end] = ACTIONS(544),
    [aux_sym_add_token1] = ACTIONS(544),
    [aux_sym_arg_token1] = ACTIONS(544),
    [aux_sym_cmd_token1] = ACTIONS(544),
    [aux_sym_copy_token1] = ACTIONS(544),
    [aux_sym_entrypoint_token1] = ACTIONS(544),
    [aux_sym_env_token1] = ACTIONS(544),
    [aux_sym_expose_token1] = ACTIONS(544),
    [aux_sym_from_token1] = ACTIONS(544),
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
    [sym__space_no_newline] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(197),
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
    [anon_sym_EQ2] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(197),
    [sym__space_no_newline] = ACTIONS(199),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(546),
    [aux_sym_add_token1] = ACTIONS(546),
    [aux_sym_arg_token1] = ACTIONS(546),
    [aux_sym_cmd_token1] = ACTIONS(546),
    [aux_sym_copy_token1] = ACTIONS(546),
    [aux_sym_entrypoint_token1] = ACTIONS(546),
    [aux_sym_env_token1] = ACTIONS(546),
    [aux_sym_expose_token1] = ACTIONS(546),
    [aux_sym_from_token1] = ACTIONS(546),
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
    [anon_sym_EQ2] = ACTIONS(546),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(546),
    [sym__space_no_newline] = ACTIONS(548),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [158] = {
    [aux_sym__labels_repeat1] = STATE(158),
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
    [sym__space_no_newline] = ACTIONS(552),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [159] = {
    [aux_sym__anything] = STATE(142),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__anything_ex] = ACTIONS(489),
  },
  [160] = {
    [aux_sym__labels_repeat1] = STATE(158),
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
    [sym__space_no_newline] = ACTIONS(513),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(451),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(451),
    [sym__space_no_newline] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(559),
    [aux_sym_add_token1] = ACTIONS(559),
    [aux_sym_arg_token1] = ACTIONS(559),
    [anon_sym_EQ] = ACTIONS(561),
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
  [163] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(563),
    [sym__space_no_newline] = ACTIONS(565),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [164] = {
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
  [165] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__anything_ex] = ACTIONS(571),
  },
  [166] = {
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
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [aux_sym_add_token1] = ACTIONS(573),
    [aux_sym_arg_token1] = ACTIONS(573),
    [aux_sym_cmd_token1] = ACTIONS(573),
    [aux_sym_copy_token1] = ACTIONS(573),
    [aux_sym_entrypoint_token1] = ACTIONS(573),
    [aux_sym_env_token1] = ACTIONS(573),
    [aux_sym_expose_token1] = ACTIONS(573),
    [aux_sym_from_token1] = ACTIONS(573),
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
    [sym__space_no_newline] = ACTIONS(575),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [aux_sym_add_token1] = ACTIONS(577),
    [aux_sym_arg_token1] = ACTIONS(577),
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
    [sym__space_no_newline] = ACTIONS(579),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [169] = {
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
  [170] = {
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
    [sym_comment] = ACTIONS(571),
    [sym_line_continuation] = ACTIONS(5),
    [sym__anything_ex] = ACTIONS(571),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [aux_sym_add_token1] = ACTIONS(531),
    [aux_sym_arg_token1] = ACTIONS(531),
    [aux_sym_cmd_token1] = ACTIONS(531),
    [aux_sym_copy_token1] = ACTIONS(531),
    [aux_sym_entrypoint_token1] = ACTIONS(531),
    [aux_sym_env_token1] = ACTIONS(531),
    [aux_sym_expose_token1] = ACTIONS(531),
    [aux_sym_from_token1] = ACTIONS(531),
    [aux_sym_healthcheck_token1] = ACTIONS(531),
    [aux_sym_label_token1] = ACTIONS(531),
    [aux_sym_maintainer_token1] = ACTIONS(531),
    [aux_sym_onbuild_token1] = ACTIONS(531),
    [aux_sym_run_token1] = ACTIONS(531),
    [aux_sym_shell_token1] = ACTIONS(531),
    [aux_sym_stopsignal_token1] = ACTIONS(531),
    [aux_sym_user_token1] = ACTIONS(531),
    [aux_sym_volume_token1] = ACTIONS(531),
    [aux_sym_workdir_token1] = ACTIONS(531),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(531),
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
    [anon_sym_COLON] = ACTIONS(587),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(593),
    [sym__space_no_newline] = ACTIONS(595),
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
    [sym__space_no_newline] = ACTIONS(599),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [aux_sym_add_token1] = ACTIONS(467),
    [aux_sym_arg_token1] = ACTIONS(467),
    [aux_sym_cmd_token1] = ACTIONS(467),
    [aux_sym_copy_token1] = ACTIONS(467),
    [aux_sym_entrypoint_token1] = ACTIONS(467),
    [aux_sym_env_token1] = ACTIONS(467),
    [aux_sym_expose_token1] = ACTIONS(467),
    [aux_sym_from_token1] = ACTIONS(467),
    [aux_sym_healthcheck_token1] = ACTIONS(467),
    [aux_sym_label_token1] = ACTIONS(467),
    [aux_sym_maintainer_token1] = ACTIONS(467),
    [aux_sym_onbuild_token1] = ACTIONS(467),
    [aux_sym_run_token1] = ACTIONS(467),
    [aux_sym_shell_token1] = ACTIONS(467),
    [aux_sym_stopsignal_token1] = ACTIONS(467),
    [aux_sym_user_token1] = ACTIONS(467),
    [aux_sym_volume_token1] = ACTIONS(467),
    [aux_sym_workdir_token1] = ACTIONS(467),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(467),
    [sym__space_no_newline] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [aux_sym_add_token1] = ACTIONS(491),
    [aux_sym_arg_token1] = ACTIONS(491),
    [aux_sym_cmd_token1] = ACTIONS(491),
    [aux_sym_copy_token1] = ACTIONS(491),
    [aux_sym_entrypoint_token1] = ACTIONS(491),
    [aux_sym_env_token1] = ACTIONS(491),
    [aux_sym_expose_token1] = ACTIONS(491),
    [aux_sym_from_token1] = ACTIONS(491),
    [aux_sym_healthcheck_token1] = ACTIONS(491),
    [aux_sym_label_token1] = ACTIONS(491),
    [aux_sym_maintainer_token1] = ACTIONS(491),
    [aux_sym_onbuild_token1] = ACTIONS(491),
    [aux_sym_run_token1] = ACTIONS(491),
    [aux_sym_shell_token1] = ACTIONS(491),
    [aux_sym_stopsignal_token1] = ACTIONS(491),
    [aux_sym_user_token1] = ACTIONS(491),
    [aux_sym_volume_token1] = ACTIONS(491),
    [aux_sym_workdir_token1] = ACTIONS(491),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(491),
    [sym__space_no_newline] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [178] = {
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
    [sym__space_no_newline] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(603),
    [aux_sym_add_token1] = ACTIONS(603),
    [aux_sym_arg_token1] = ACTIONS(603),
    [aux_sym_cmd_token1] = ACTIONS(603),
    [aux_sym_copy_token1] = ACTIONS(603),
    [aux_sym_entrypoint_token1] = ACTIONS(603),
    [aux_sym_env_token1] = ACTIONS(603),
    [aux_sym_expose_token1] = ACTIONS(603),
    [aux_sym_from_token1] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(603),
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
  [180] = {
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
    [anon_sym_SEMI] = ACTIONS(607),
    [sym_line_continuation] = ACTIONS(5),
  },
  [181] = {
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
  [182] = {
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
    [anon_sym_SEMI] = ACTIONS(611),
    [sym_line_continuation] = ACTIONS(5),
  },
  [183] = {
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
    [anon_sym_SEMI] = ACTIONS(615),
    [sym_line_continuation] = ACTIONS(5),
  },
  [184] = {
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
    [sym__space_no_newline] = ACTIONS(619),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(621),
    [aux_sym_add_token1] = ACTIONS(621),
    [aux_sym_arg_token1] = ACTIONS(621),
    [aux_sym_cmd_token1] = ACTIONS(621),
    [aux_sym_copy_token1] = ACTIONS(621),
    [aux_sym_entrypoint_token1] = ACTIONS(621),
    [aux_sym_env_token1] = ACTIONS(621),
    [aux_sym_expose_token1] = ACTIONS(621),
    [aux_sym_from_token1] = ACTIONS(621),
    [anon_sym_COLON] = ACTIONS(621),
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
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(623),
    [aux_sym_add_token1] = ACTIONS(623),
    [aux_sym_arg_token1] = ACTIONS(623),
    [aux_sym_cmd_token1] = ACTIONS(623),
    [aux_sym_copy_token1] = ACTIONS(623),
    [aux_sym_entrypoint_token1] = ACTIONS(623),
    [aux_sym_env_token1] = ACTIONS(623),
    [aux_sym_expose_token1] = ACTIONS(623),
    [aux_sym_from_token1] = ACTIONS(623),
    [anon_sym_COLON] = ACTIONS(625),
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
  [187] = {
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
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(623),
    [aux_sym_add_token1] = ACTIONS(623),
    [aux_sym_arg_token1] = ACTIONS(623),
    [aux_sym_cmd_token1] = ACTIONS(623),
    [aux_sym_copy_token1] = ACTIONS(623),
    [aux_sym_entrypoint_token1] = ACTIONS(623),
    [aux_sym_env_token1] = ACTIONS(623),
    [aux_sym_expose_token1] = ACTIONS(623),
    [aux_sym_from_token1] = ACTIONS(623),
    [anon_sym_COLON] = ACTIONS(627),
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
  [192] = {
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
  [193] = {
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
  [194] = {
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
  [195] = {
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
  [196] = {
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
  [197] = {
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
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [aux_sym_add_token1] = ACTIONS(259),
    [aux_sym_arg_token1] = ACTIONS(259),
    [aux_sym_cmd_token1] = ACTIONS(259),
    [aux_sym_copy_token1] = ACTIONS(259),
    [aux_sym_entrypoint_token1] = ACTIONS(259),
    [aux_sym_env_token1] = ACTIONS(259),
    [aux_sym_expose_token1] = ACTIONS(259),
    [aux_sym_from_token1] = ACTIONS(259),
    [aux_sym_healthcheck_token1] = ACTIONS(259),
    [aux_sym_label_token1] = ACTIONS(259),
    [aux_sym_maintainer_token1] = ACTIONS(259),
    [aux_sym_onbuild_token1] = ACTIONS(259),
    [aux_sym_run_token1] = ACTIONS(259),
    [aux_sym_shell_token1] = ACTIONS(259),
    [aux_sym_stopsignal_token1] = ACTIONS(259),
    [aux_sym_user_token1] = ACTIONS(259),
    [aux_sym_volume_token1] = ACTIONS(259),
    [aux_sym_workdir_token1] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [199] = {
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
  [200] = {
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
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_add_token1] = ACTIONS(249),
    [aux_sym_arg_token1] = ACTIONS(249),
    [aux_sym_cmd_token1] = ACTIONS(249),
    [aux_sym_copy_token1] = ACTIONS(249),
    [aux_sym_entrypoint_token1] = ACTIONS(249),
    [aux_sym_env_token1] = ACTIONS(249),
    [aux_sym_expose_token1] = ACTIONS(249),
    [aux_sym_from_token1] = ACTIONS(249),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [202] = {
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
  [203] = {
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
  [204] = {
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
  [205] = {
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
  [206] = {
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
  [207] = {
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
  [208] = {
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
  [209] = {
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
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [aux_sym_add_token1] = ACTIONS(422),
    [aux_sym_arg_token1] = ACTIONS(422),
    [aux_sym_cmd_token1] = ACTIONS(422),
    [aux_sym_copy_token1] = ACTIONS(422),
    [aux_sym_entrypoint_token1] = ACTIONS(422),
    [aux_sym_env_token1] = ACTIONS(422),
    [aux_sym_expose_token1] = ACTIONS(422),
    [aux_sym_from_token1] = ACTIONS(422),
    [aux_sym_healthcheck_token1] = ACTIONS(422),
    [aux_sym_label_token1] = ACTIONS(422),
    [aux_sym_maintainer_token1] = ACTIONS(422),
    [aux_sym_onbuild_token1] = ACTIONS(422),
    [aux_sym_run_token1] = ACTIONS(422),
    [aux_sym_shell_token1] = ACTIONS(422),
    [aux_sym_stopsignal_token1] = ACTIONS(422),
    [aux_sym_user_token1] = ACTIONS(422),
    [aux_sym_volume_token1] = ACTIONS(422),
    [aux_sym_workdir_token1] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(422),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [211] = {
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
  [212] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [aux_sym_add_token1] = ACTIONS(114),
    [aux_sym_arg_token1] = ACTIONS(114),
    [aux_sym_cmd_token1] = ACTIONS(114),
    [aux_sym_copy_token1] = ACTIONS(114),
    [aux_sym_entrypoint_token1] = ACTIONS(114),
    [aux_sym_env_token1] = ACTIONS(114),
    [aux_sym_expose_token1] = ACTIONS(114),
    [aux_sym_from_token1] = ACTIONS(114),
    [aux_sym_healthcheck_token1] = ACTIONS(114),
    [aux_sym_label_token1] = ACTIONS(114),
    [aux_sym_maintainer_token1] = ACTIONS(114),
    [aux_sym_onbuild_token1] = ACTIONS(114),
    [aux_sym_run_token1] = ACTIONS(114),
    [aux_sym_shell_token1] = ACTIONS(114),
    [aux_sym_stopsignal_token1] = ACTIONS(114),
    [aux_sym_user_token1] = ACTIONS(114),
    [aux_sym_volume_token1] = ACTIONS(114),
    [aux_sym_workdir_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(114),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [213] = {
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
  [214] = {
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
  [215] = {
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
  [216] = {
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
  [217] = {
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
  [218] = {
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
  [219] = {
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
  [220] = {
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
  [221] = {
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
  [222] = {
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
  [223] = {
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
  [224] = {
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
  [225] = {
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
  [226] = {
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
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [aux_sym_add_token1] = ACTIONS(491),
    [aux_sym_arg_token1] = ACTIONS(491),
    [aux_sym_cmd_token1] = ACTIONS(491),
    [aux_sym_copy_token1] = ACTIONS(491),
    [aux_sym_entrypoint_token1] = ACTIONS(491),
    [aux_sym_env_token1] = ACTIONS(491),
    [aux_sym_expose_token1] = ACTIONS(491),
    [aux_sym_from_token1] = ACTIONS(491),
    [aux_sym_healthcheck_token1] = ACTIONS(491),
    [aux_sym_label_token1] = ACTIONS(491),
    [aux_sym_maintainer_token1] = ACTIONS(491),
    [aux_sym_onbuild_token1] = ACTIONS(491),
    [aux_sym_run_token1] = ACTIONS(491),
    [aux_sym_shell_token1] = ACTIONS(491),
    [aux_sym_stopsignal_token1] = ACTIONS(491),
    [aux_sym_user_token1] = ACTIONS(491),
    [aux_sym_volume_token1] = ACTIONS(491),
    [aux_sym_workdir_token1] = ACTIONS(491),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [228] = {
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
  [229] = {
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
  [230] = {
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
  [231] = {
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
  [232] = {
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
  [233] = {
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
  [234] = {
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
  [235] = {
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
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(689),
    [aux_sym_add_token1] = ACTIONS(689),
    [aux_sym_arg_token1] = ACTIONS(689),
    [aux_sym_cmd_token1] = ACTIONS(689),
    [aux_sym_copy_token1] = ACTIONS(689),
    [aux_sym_entrypoint_token1] = ACTIONS(689),
    [aux_sym_env_token1] = ACTIONS(689),
    [aux_sym_expose_token1] = ACTIONS(689),
    [aux_sym_from_token1] = ACTIONS(689),
    [aux_sym_healthcheck_token1] = ACTIONS(689),
    [aux_sym_label_token1] = ACTIONS(689),
    [aux_sym_maintainer_token1] = ACTIONS(689),
    [aux_sym_onbuild_token1] = ACTIONS(689),
    [aux_sym_run_token1] = ACTIONS(689),
    [aux_sym_shell_token1] = ACTIONS(689),
    [aux_sym_stopsignal_token1] = ACTIONS(689),
    [aux_sym_user_token1] = ACTIONS(689),
    [aux_sym_volume_token1] = ACTIONS(689),
    [aux_sym_workdir_token1] = ACTIONS(689),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(689),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [237] = {
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
  [238] = {
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
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(691),
    [aux_sym_add_token1] = ACTIONS(691),
    [aux_sym_arg_token1] = ACTIONS(691),
    [aux_sym_cmd_token1] = ACTIONS(691),
    [aux_sym_copy_token1] = ACTIONS(691),
    [aux_sym_entrypoint_token1] = ACTIONS(691),
    [aux_sym_env_token1] = ACTIONS(691),
    [aux_sym_expose_token1] = ACTIONS(691),
    [aux_sym_from_token1] = ACTIONS(691),
    [aux_sym_healthcheck_token1] = ACTIONS(691),
    [aux_sym_label_token1] = ACTIONS(691),
    [aux_sym_maintainer_token1] = ACTIONS(691),
    [aux_sym_onbuild_token1] = ACTIONS(691),
    [aux_sym_run_token1] = ACTIONS(691),
    [aux_sym_shell_token1] = ACTIONS(691),
    [aux_sym_stopsignal_token1] = ACTIONS(691),
    [aux_sym_user_token1] = ACTIONS(691),
    [aux_sym_volume_token1] = ACTIONS(691),
    [aux_sym_workdir_token1] = ACTIONS(691),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(691),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [240] = {
    [ts_builtin_sym_end] = ACTIONS(693),
    [aux_sym_add_token1] = ACTIONS(693),
    [aux_sym_arg_token1] = ACTIONS(693),
    [aux_sym_cmd_token1] = ACTIONS(693),
    [aux_sym_copy_token1] = ACTIONS(693),
    [aux_sym_entrypoint_token1] = ACTIONS(693),
    [aux_sym_env_token1] = ACTIONS(693),
    [aux_sym_expose_token1] = ACTIONS(693),
    [aux_sym_from_token1] = ACTIONS(693),
    [aux_sym_healthcheck_token1] = ACTIONS(693),
    [aux_sym_label_token1] = ACTIONS(693),
    [aux_sym_maintainer_token1] = ACTIONS(693),
    [aux_sym_onbuild_token1] = ACTIONS(693),
    [aux_sym_run_token1] = ACTIONS(693),
    [aux_sym_shell_token1] = ACTIONS(693),
    [aux_sym_stopsignal_token1] = ACTIONS(693),
    [aux_sym_user_token1] = ACTIONS(693),
    [aux_sym_volume_token1] = ACTIONS(693),
    [aux_sym_workdir_token1] = ACTIONS(693),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(693),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [241] = {
    [sym__chown] = STATE(279),
    [sym__from_layer] = STATE(279),
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(43),
    [sym_json_array] = STATE(201),
    [aux_sym_copy_repeat1] = STATE(279),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(695),
    [aux_sym__from_layer_token1] = ACTIONS(697),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [aux_sym_path_token1] = ACTIONS(255),
    [aux_sym_path_token2] = ACTIONS(257),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(699),
  },
  [242] = {
    [sym__hc_interval] = STATE(246),
    [sym__hc_timeout] = STATE(246),
    [sym__hc_start_period] = STATE(246),
    [sym__hc_retries] = STATE(246),
    [sym__hc_options] = STATE(246),
    [sym__hc_command] = STATE(190),
    [aux_sym_healthcheck_repeat1] = STATE(246),
    [sym_hc_none] = ACTIONS(701),
    [anon_sym_DASH_DASHinterval] = ACTIONS(703),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(705),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(707),
    [anon_sym_DASH_DASHretries] = ACTIONS(709),
    [aux_sym__hc_command_token1] = ACTIONS(711),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [243] = {
    [sym_repository] = STATE(276),
    [sym__repository_start] = STATE(252),
    [sym_image] = STATE(132),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(713),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(717),
    [aux_sym_from_layer_token9] = ACTIONS(719),
    [aux_sym_from_layer_token13] = ACTIONS(721),
    [aux_sym_platform_token1] = ACTIONS(723),
    [aux_sym__repository_start_token1] = ACTIONS(715),
    [aux_sym__repository_start_token4] = ACTIONS(717),
    [aux_sym__repository_start_token6] = ACTIONS(719),
    [aux_sym__repository_start_token8] = ACTIONS(721),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [244] = {
    [sym__chown] = STATE(241),
    [sym__from_layer] = STATE(241),
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(46),
    [sym_json_array] = STATE(198),
    [aux_sym_copy_repeat1] = STATE(241),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(695),
    [aux_sym__from_layer_token1] = ACTIONS(697),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [aux_sym_path_token1] = ACTIONS(255),
    [aux_sym_path_token2] = ACTIONS(257),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(699),
  },
  [245] = {
    [sym_repository] = STATE(278),
    [sym__repository_start] = STATE(252),
    [sym_image] = STATE(121),
    [anon_sym_DOLLAR] = ACTIONS(715),
    [aux_sym_from_layer_token5] = ACTIONS(717),
    [aux_sym_from_layer_token9] = ACTIONS(719),
    [aux_sym_from_layer_token13] = ACTIONS(721),
    [aux_sym_platform_token1] = ACTIONS(723),
    [aux_sym__repository_start_token1] = ACTIONS(715),
    [aux_sym__repository_start_token4] = ACTIONS(717),
    [aux_sym__repository_start_token6] = ACTIONS(719),
    [aux_sym__repository_start_token8] = ACTIONS(721),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [246] = {
    [sym__hc_interval] = STATE(253),
    [sym__hc_timeout] = STATE(253),
    [sym__hc_start_period] = STATE(253),
    [sym__hc_retries] = STATE(253),
    [sym__hc_options] = STATE(253),
    [sym__hc_command] = STATE(208),
    [aux_sym_healthcheck_repeat1] = STATE(253),
    [anon_sym_DASH_DASHinterval] = ACTIONS(703),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(705),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(707),
    [anon_sym_DASH_DASHretries] = ACTIONS(709),
    [aux_sym__hc_command_token1] = ACTIONS(711),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [247] = {
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym_mapped_no_lhs] = STATE(212),
    [sym__port] = STATE(99),
    [sym_port] = STATE(99),
    [sym_port_range] = STATE(99),
    [sym__port_part] = STATE(79),
    [aux_sym_expose_repeat1] = STATE(6),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(725),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym__port_part_token1] = ACTIONS(120),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [248] = {
    [sym__repository_continued] = STATE(249),
    [aux_sym_repository_repeat1] = STATE(249),
    [anon_sym_DOLLAR] = ACTIONS(727),
    [aux_sym_from_layer_token5] = ACTIONS(730),
    [aux_sym_from_layer_token9] = ACTIONS(733),
    [aux_sym_from_layer_token13] = ACTIONS(736),
    [aux_sym_platform_token1] = ACTIONS(739),
    [aux_sym__repository_start_token1] = ACTIONS(727),
    [aux_sym__repository_start_token4] = ACTIONS(730),
    [aux_sym__repository_start_token6] = ACTIONS(733),
    [aux_sym__repository_start_token8] = ACTIONS(736),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [249] = {
    [sym__repository_continued] = STATE(249),
    [aux_sym_repository_repeat1] = STATE(249),
    [anon_sym_DOLLAR] = ACTIONS(742),
    [aux_sym_from_layer_token5] = ACTIONS(745),
    [aux_sym_from_layer_token9] = ACTIONS(748),
    [aux_sym_from_layer_token13] = ACTIONS(751),
    [aux_sym_platform_token1] = ACTIONS(754),
    [aux_sym__repository_start_token1] = ACTIONS(742),
    [aux_sym__repository_start_token4] = ACTIONS(745),
    [aux_sym__repository_start_token6] = ACTIONS(748),
    [aux_sym__repository_start_token8] = ACTIONS(751),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [250] = {
    [sym_digest] = STATE(161),
    [anon_sym_sha256_COLON] = ACTIONS(757),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [aux_sym_from_layer_token5] = ACTIONS(761),
    [aux_sym_from_layer_token9] = ACTIONS(763),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_platform_token1] = ACTIONS(767),
    [aux_sym__repository_start_token1] = ACTIONS(759),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(763),
    [aux_sym__repository_start_token8] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [251] = {
    [sym_digest] = STATE(177),
    [anon_sym_sha256_COLON] = ACTIONS(769),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [aux_sym_from_layer_token5] = ACTIONS(761),
    [aux_sym_from_layer_token9] = ACTIONS(763),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_platform_token1] = ACTIONS(767),
    [aux_sym__repository_start_token1] = ACTIONS(759),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(763),
    [aux_sym__repository_start_token8] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [252] = {
    [sym__repository_continued] = STATE(248),
    [aux_sym_repository_repeat1] = STATE(248),
    [anon_sym_DOLLAR] = ACTIONS(771),
    [aux_sym_from_layer_token5] = ACTIONS(774),
    [aux_sym_from_layer_token9] = ACTIONS(777),
    [aux_sym_from_layer_token13] = ACTIONS(780),
    [aux_sym_platform_token1] = ACTIONS(783),
    [aux_sym__repository_start_token1] = ACTIONS(771),
    [aux_sym__repository_start_token4] = ACTIONS(774),
    [aux_sym__repository_start_token6] = ACTIONS(777),
    [aux_sym__repository_start_token8] = ACTIONS(780),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [253] = {
    [sym__hc_interval] = STATE(253),
    [sym__hc_timeout] = STATE(253),
    [sym__hc_start_period] = STATE(253),
    [sym__hc_retries] = STATE(253),
    [sym__hc_options] = STATE(253),
    [aux_sym_healthcheck_repeat1] = STATE(253),
    [anon_sym_DASH_DASHinterval] = ACTIONS(786),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(789),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(792),
    [anon_sym_DASH_DASHretries] = ACTIONS(795),
    [aux_sym__hc_command_token1] = ACTIONS(798),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [254] = {
    [sym_digest] = STATE(166),
    [anon_sym_sha256_COLON] = ACTIONS(800),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [aux_sym_from_layer_token5] = ACTIONS(761),
    [aux_sym_from_layer_token9] = ACTIONS(763),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_platform_token1] = ACTIONS(767),
    [aux_sym__repository_start_token1] = ACTIONS(759),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(763),
    [aux_sym__repository_start_token8] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [255] = {
    [sym_digest] = STATE(173),
    [anon_sym_sha256_COLON] = ACTIONS(802),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [aux_sym_from_layer_token5] = ACTIONS(761),
    [aux_sym_from_layer_token9] = ACTIONS(763),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_platform_token1] = ACTIONS(767),
    [aux_sym__repository_start_token1] = ACTIONS(759),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(763),
    [aux_sym__repository_start_token8] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [256] = {
    [sym_digest] = STATE(175),
    [anon_sym_sha256_COLON] = ACTIONS(804),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [aux_sym_from_layer_token5] = ACTIONS(761),
    [aux_sym_from_layer_token9] = ACTIONS(763),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_platform_token1] = ACTIONS(767),
    [aux_sym__repository_start_token1] = ACTIONS(759),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(763),
    [aux_sym__repository_start_token8] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [257] = {
    [sym_digest] = STATE(176),
    [anon_sym_sha256_COLON] = ACTIONS(806),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [aux_sym_from_layer_token5] = ACTIONS(761),
    [aux_sym_from_layer_token9] = ACTIONS(763),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_platform_token1] = ACTIONS(767),
    [aux_sym__repository_start_token1] = ACTIONS(759),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(763),
    [aux_sym__repository_start_token8] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [258] = {
    [sym_tag] = STATE(138),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [aux_sym_from_layer_token5] = ACTIONS(810),
    [aux_sym_from_layer_token9] = ACTIONS(812),
    [aux_sym_from_layer_token13] = ACTIONS(814),
    [aux_sym_platform_token1] = ACTIONS(816),
    [aux_sym__repository_start_token1] = ACTIONS(808),
    [aux_sym__repository_start_token4] = ACTIONS(810),
    [aux_sym__repository_start_token6] = ACTIONS(812),
    [aux_sym__repository_start_token8] = ACTIONS(814),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [259] = {
    [sym_as_name] = STATE(225),
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_from_layer_token5] = ACTIONS(820),
    [aux_sym_from_layer_token9] = ACTIONS(822),
    [aux_sym_from_layer_token13] = ACTIONS(824),
    [aux_sym_platform_token1] = ACTIONS(826),
    [aux_sym__repository_start_token1] = ACTIONS(818),
    [aux_sym__repository_start_token4] = ACTIONS(820),
    [aux_sym__repository_start_token6] = ACTIONS(822),
    [aux_sym__repository_start_token8] = ACTIONS(824),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [260] = {
    [sym_as_name] = STATE(205),
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_from_layer_token5] = ACTIONS(820),
    [aux_sym_from_layer_token9] = ACTIONS(822),
    [aux_sym_from_layer_token13] = ACTIONS(824),
    [aux_sym_platform_token1] = ACTIONS(826),
    [aux_sym__repository_start_token1] = ACTIONS(818),
    [aux_sym__repository_start_token4] = ACTIONS(820),
    [aux_sym__repository_start_token6] = ACTIONS(822),
    [aux_sym__repository_start_token8] = ACTIONS(824),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [261] = {
    [sym_as_name] = STATE(219),
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_from_layer_token5] = ACTIONS(820),
    [aux_sym_from_layer_token9] = ACTIONS(822),
    [aux_sym_from_layer_token13] = ACTIONS(824),
    [aux_sym_platform_token1] = ACTIONS(826),
    [aux_sym__repository_start_token1] = ACTIONS(818),
    [aux_sym__repository_start_token4] = ACTIONS(820),
    [aux_sym__repository_start_token6] = ACTIONS(822),
    [aux_sym__repository_start_token8] = ACTIONS(824),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [262] = {
    [sym_digest] = STATE(175),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [aux_sym_from_layer_token5] = ACTIONS(761),
    [aux_sym_from_layer_token9] = ACTIONS(763),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_platform_token1] = ACTIONS(767),
    [aux_sym__repository_start_token1] = ACTIONS(759),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(763),
    [aux_sym__repository_start_token8] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [263] = {
    [sym_from_layer] = STATE(523),
    [aux_sym_from_layer_token1] = ACTIONS(828),
    [anon_sym_DOLLAR] = ACTIONS(830),
    [aux_sym_from_layer_token2] = ACTIONS(830),
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
  [264] = {
    [sym_digest] = STATE(177),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [aux_sym_from_layer_token5] = ACTIONS(761),
    [aux_sym_from_layer_token9] = ACTIONS(763),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_platform_token1] = ACTIONS(767),
    [aux_sym__repository_start_token1] = ACTIONS(759),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(763),
    [aux_sym__repository_start_token8] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [265] = {
    [sym_as_name] = STATE(227),
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_from_layer_token5] = ACTIONS(820),
    [aux_sym_from_layer_token9] = ACTIONS(822),
    [aux_sym_from_layer_token13] = ACTIONS(824),
    [aux_sym_platform_token1] = ACTIONS(826),
    [aux_sym__repository_start_token1] = ACTIONS(818),
    [aux_sym__repository_start_token4] = ACTIONS(820),
    [aux_sym__repository_start_token6] = ACTIONS(822),
    [aux_sym__repository_start_token8] = ACTIONS(824),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [266] = {
    [sym_as_name] = STATE(232),
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_from_layer_token5] = ACTIONS(820),
    [aux_sym_from_layer_token9] = ACTIONS(822),
    [aux_sym_from_layer_token13] = ACTIONS(824),
    [aux_sym_platform_token1] = ACTIONS(826),
    [aux_sym__repository_start_token1] = ACTIONS(818),
    [aux_sym__repository_start_token4] = ACTIONS(820),
    [aux_sym__repository_start_token6] = ACTIONS(822),
    [aux_sym__repository_start_token8] = ACTIONS(824),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [267] = {
    [sym_as_name] = STATE(240),
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_from_layer_token5] = ACTIONS(820),
    [aux_sym_from_layer_token9] = ACTIONS(822),
    [aux_sym_from_layer_token13] = ACTIONS(824),
    [aux_sym_platform_token1] = ACTIONS(826),
    [aux_sym__repository_start_token1] = ACTIONS(818),
    [aux_sym__repository_start_token4] = ACTIONS(820),
    [aux_sym__repository_start_token6] = ACTIONS(822),
    [aux_sym__repository_start_token8] = ACTIONS(824),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [268] = {
    [sym_digest] = STATE(166),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [aux_sym_from_layer_token5] = ACTIONS(761),
    [aux_sym_from_layer_token9] = ACTIONS(763),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_platform_token1] = ACTIONS(767),
    [aux_sym__repository_start_token1] = ACTIONS(759),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(763),
    [aux_sym__repository_start_token8] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [269] = {
    [sym_as_name] = STATE(204),
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_from_layer_token5] = ACTIONS(820),
    [aux_sym_from_layer_token9] = ACTIONS(822),
    [aux_sym_from_layer_token13] = ACTIONS(824),
    [aux_sym_platform_token1] = ACTIONS(826),
    [aux_sym__repository_start_token1] = ACTIONS(818),
    [aux_sym__repository_start_token4] = ACTIONS(820),
    [aux_sym__repository_start_token6] = ACTIONS(822),
    [aux_sym__repository_start_token8] = ACTIONS(824),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [270] = {
    [sym_as_name] = STATE(203),
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_from_layer_token5] = ACTIONS(820),
    [aux_sym_from_layer_token9] = ACTIONS(822),
    [aux_sym_from_layer_token13] = ACTIONS(824),
    [aux_sym_platform_token1] = ACTIONS(826),
    [aux_sym__repository_start_token1] = ACTIONS(818),
    [aux_sym__repository_start_token4] = ACTIONS(820),
    [aux_sym__repository_start_token6] = ACTIONS(822),
    [aux_sym__repository_start_token8] = ACTIONS(824),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [271] = {
    [sym_digest] = STATE(184),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [aux_sym_from_layer_token5] = ACTIONS(761),
    [aux_sym_from_layer_token9] = ACTIONS(763),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_platform_token1] = ACTIONS(767),
    [aux_sym__repository_start_token1] = ACTIONS(759),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(763),
    [aux_sym__repository_start_token8] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [272] = {
    [sym_digest] = STATE(176),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [aux_sym_from_layer_token5] = ACTIONS(761),
    [aux_sym_from_layer_token9] = ACTIONS(763),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_platform_token1] = ACTIONS(767),
    [aux_sym__repository_start_token1] = ACTIONS(759),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(763),
    [aux_sym__repository_start_token8] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [273] = {
    [sym_tag] = STATE(141),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [aux_sym_from_layer_token5] = ACTIONS(810),
    [aux_sym_from_layer_token9] = ACTIONS(812),
    [aux_sym_from_layer_token13] = ACTIONS(814),
    [aux_sym_platform_token1] = ACTIONS(816),
    [aux_sym__repository_start_token1] = ACTIONS(808),
    [aux_sym__repository_start_token4] = ACTIONS(810),
    [aux_sym__repository_start_token6] = ACTIONS(812),
    [aux_sym__repository_start_token8] = ACTIONS(814),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [274] = {
    [sym_digest] = STATE(173),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [aux_sym_from_layer_token5] = ACTIONS(761),
    [aux_sym_from_layer_token9] = ACTIONS(763),
    [aux_sym_from_layer_token13] = ACTIONS(765),
    [aux_sym_platform_token1] = ACTIONS(767),
    [aux_sym__repository_start_token1] = ACTIONS(759),
    [aux_sym__repository_start_token4] = ACTIONS(761),
    [aux_sym__repository_start_token6] = ACTIONS(763),
    [aux_sym__repository_start_token8] = ACTIONS(765),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [275] = {
    [sym_tag] = STATE(140),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [aux_sym_from_layer_token5] = ACTIONS(810),
    [aux_sym_from_layer_token9] = ACTIONS(812),
    [aux_sym_from_layer_token13] = ACTIONS(814),
    [aux_sym_platform_token1] = ACTIONS(816),
    [aux_sym__repository_start_token1] = ACTIONS(808),
    [aux_sym__repository_start_token4] = ACTIONS(810),
    [aux_sym__repository_start_token6] = ACTIONS(812),
    [aux_sym__repository_start_token8] = ACTIONS(814),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [276] = {
    [sym_image] = STATE(123),
    [anon_sym_DOLLAR] = ACTIONS(838),
    [aux_sym_from_layer_token5] = ACTIONS(840),
    [aux_sym_from_layer_token9] = ACTIONS(842),
    [aux_sym_from_layer_token13] = ACTIONS(844),
    [aux_sym_platform_token1] = ACTIONS(846),
    [aux_sym__repository_start_token1] = ACTIONS(838),
    [aux_sym__repository_start_token4] = ACTIONS(840),
    [aux_sym__repository_start_token6] = ACTIONS(842),
    [aux_sym__repository_start_token8] = ACTIONS(844),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [277] = {
    [sym_tag] = STATE(151),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [aux_sym_from_layer_token5] = ACTIONS(810),
    [aux_sym_from_layer_token9] = ACTIONS(812),
    [aux_sym_from_layer_token13] = ACTIONS(814),
    [aux_sym_platform_token1] = ACTIONS(816),
    [aux_sym__repository_start_token1] = ACTIONS(808),
    [aux_sym__repository_start_token4] = ACTIONS(810),
    [aux_sym__repository_start_token6] = ACTIONS(812),
    [aux_sym__repository_start_token8] = ACTIONS(814),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [278] = {
    [sym_image] = STATE(125),
    [anon_sym_DOLLAR] = ACTIONS(838),
    [aux_sym_from_layer_token5] = ACTIONS(840),
    [aux_sym_from_layer_token9] = ACTIONS(842),
    [aux_sym_from_layer_token13] = ACTIONS(844),
    [aux_sym_platform_token1] = ACTIONS(846),
    [aux_sym__repository_start_token1] = ACTIONS(838),
    [aux_sym__repository_start_token4] = ACTIONS(840),
    [aux_sym__repository_start_token6] = ACTIONS(842),
    [aux_sym__repository_start_token8] = ACTIONS(844),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [sym__chown] = STATE(279),
    [sym__from_layer] = STATE(279),
    [aux_sym_copy_repeat1] = STATE(279),
    [anon_sym_DQUOTE] = ACTIONS(848),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(850),
    [aux_sym__from_layer_token1] = ACTIONS(853),
    [anon_sym_DOLLAR] = ACTIONS(848),
    [aux_sym_path_token1] = ACTIONS(856),
    [aux_sym_path_token2] = ACTIONS(856),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(848),
  },
  [280] = {
    [sym_as_name] = STATE(191),
    [anon_sym_DOLLAR] = ACTIONS(818),
    [aux_sym_from_layer_token5] = ACTIONS(820),
    [aux_sym_from_layer_token9] = ACTIONS(822),
    [aux_sym_from_layer_token13] = ACTIONS(824),
    [aux_sym_platform_token1] = ACTIONS(826),
    [aux_sym__repository_start_token1] = ACTIONS(818),
    [aux_sym__repository_start_token4] = ACTIONS(820),
    [aux_sym__repository_start_token6] = ACTIONS(822),
    [aux_sym__repository_start_token8] = ACTIONS(824),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [281] = {
    [anon_sym_DOLLAR] = ACTIONS(858),
    [aux_sym_from_layer_token5] = ACTIONS(858),
    [aux_sym_from_layer_token9] = ACTIONS(858),
    [aux_sym_from_layer_token13] = ACTIONS(858),
    [aux_sym_platform_token1] = ACTIONS(860),
    [aux_sym__repository_start_token1] = ACTIONS(858),
    [aux_sym__repository_start_token4] = ACTIONS(858),
    [aux_sym__repository_start_token6] = ACTIONS(858),
    [aux_sym__repository_start_token8] = ACTIONS(858),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [282] = {
    [anon_sym_DOLLAR] = ACTIONS(862),
    [aux_sym_from_layer_token5] = ACTIONS(862),
    [aux_sym_from_layer_token9] = ACTIONS(862),
    [aux_sym_from_layer_token13] = ACTIONS(862),
    [aux_sym_platform_token1] = ACTIONS(864),
    [aux_sym__repository_start_token1] = ACTIONS(862),
    [aux_sym__repository_start_token4] = ACTIONS(862),
    [aux_sym__repository_start_token6] = ACTIONS(862),
    [aux_sym__repository_start_token8] = ACTIONS(862),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [283] = {
    [sym__port_spec] = STATE(519),
    [sym_mapped_port] = STATE(519),
    [sym__port] = STATE(499),
    [sym_port] = STATE(495),
    [sym_port_range] = STATE(495),
    [sym__port_part] = STATE(469),
    [anon_sym_DQUOTE] = ACTIONS(866),
    [anon_sym_DOLLAR] = ACTIONS(868),
    [aux_sym__port_part_token1] = ACTIONS(870),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [284] = {
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
  [285] = {
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
  [286] = {
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
  [287] = {
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
  [288] = {
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
  [289] = {
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
  [290] = {
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
  [291] = {
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
  [292] = {
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
  [293] = {
    [anon_sym_DOLLAR] = ACTIONS(908),
    [aux_sym_from_layer_token5] = ACTIONS(908),
    [aux_sym_from_layer_token9] = ACTIONS(908),
    [aux_sym_from_layer_token13] = ACTIONS(908),
    [aux_sym_platform_token1] = ACTIONS(910),
    [aux_sym__repository_start_token1] = ACTIONS(908),
    [aux_sym__repository_start_token4] = ACTIONS(908),
    [aux_sym__repository_start_token6] = ACTIONS(908),
    [aux_sym__repository_start_token8] = ACTIONS(908),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [294] = {
    [anon_sym_DOLLAR] = ACTIONS(209),
    [aux_sym_from_layer_token5] = ACTIONS(209),
    [aux_sym_from_layer_token9] = ACTIONS(209),
    [aux_sym_from_layer_token13] = ACTIONS(209),
    [aux_sym_platform_token1] = ACTIONS(211),
    [aux_sym__repository_start_token1] = ACTIONS(209),
    [aux_sym__repository_start_token4] = ACTIONS(209),
    [aux_sym__repository_start_token6] = ACTIONS(209),
    [aux_sym__repository_start_token8] = ACTIONS(209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [295] = {
    [anon_sym_DOLLAR] = ACTIONS(197),
    [aux_sym_from_layer_token5] = ACTIONS(197),
    [aux_sym_from_layer_token9] = ACTIONS(197),
    [aux_sym_from_layer_token13] = ACTIONS(197),
    [aux_sym_platform_token1] = ACTIONS(199),
    [aux_sym__repository_start_token1] = ACTIONS(197),
    [aux_sym__repository_start_token4] = ACTIONS(197),
    [aux_sym__repository_start_token6] = ACTIONS(197),
    [aux_sym__repository_start_token8] = ACTIONS(197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [296] = {
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_from_layer_token5] = ACTIONS(201),
    [aux_sym_from_layer_token9] = ACTIONS(201),
    [aux_sym_from_layer_token13] = ACTIONS(201),
    [aux_sym_platform_token1] = ACTIONS(203),
    [aux_sym__repository_start_token1] = ACTIONS(201),
    [aux_sym__repository_start_token4] = ACTIONS(201),
    [aux_sym__repository_start_token6] = ACTIONS(201),
    [aux_sym__repository_start_token8] = ACTIONS(201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [297] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(53),
    [sym_json_array] = STATE(238),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [aux_sym_path_token1] = ACTIONS(255),
    [aux_sym_path_token2] = ACTIONS(257),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(699),
  },
  [298] = {
    [sym_path] = STATE(91),
    [aux_sym__paths] = STATE(54),
    [sym_json_array] = STATE(195),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [aux_sym_path_token1] = ACTIONS(255),
    [aux_sym_path_token2] = ACTIONS(257),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(699),
  },
  [299] = {
    [sym__port] = STATE(233),
    [sym_port] = STATE(233),
    [sym_port_range] = STATE(233),
    [sym__port_part] = STATE(79),
    [anon_sym_DQUOTE] = ACTIONS(912),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym__port_part_token1] = ACTIONS(120),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [300] = {
    [anon_sym_DQUOTE] = ACTIONS(914),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(914),
    [aux_sym__from_layer_token1] = ACTIONS(914),
    [anon_sym_DOLLAR] = ACTIONS(914),
    [aux_sym_path_token1] = ACTIONS(916),
    [aux_sym_path_token2] = ACTIONS(916),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(914),
  },
  [301] = {
    [sym__port] = STATE(119),
    [sym_port] = STATE(119),
    [sym_port_range] = STATE(119),
    [sym__port_part] = STATE(79),
    [anon_sym_DQUOTE] = ACTIONS(912),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym__port_part_token1] = ACTIONS(120),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [302] = {
    [sym__port] = STATE(528),
    [sym_port] = STATE(528),
    [sym_port_range] = STATE(528),
    [sym__port_part] = STATE(469),
    [anon_sym_DQUOTE] = ACTIONS(866),
    [anon_sym_DOLLAR] = ACTIONS(868),
    [aux_sym__port_part_token1] = ACTIONS(870),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [303] = {
    [anon_sym_DQUOTE] = ACTIONS(918),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(918),
    [aux_sym__from_layer_token1] = ACTIONS(918),
    [anon_sym_DOLLAR] = ACTIONS(918),
    [aux_sym_path_token1] = ACTIONS(920),
    [aux_sym_path_token2] = ACTIONS(920),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(918),
  },
  [304] = {
    [sym_user_name] = STATE(186),
    [sym_user_id] = STATE(188),
    [anon_sym_DQUOTE] = ACTIONS(922),
    [anon_sym_DOLLAR] = ACTIONS(924),
    [aux_sym_user_name_token1] = ACTIONS(926),
    [aux_sym_user_id_token1] = ACTIONS(928),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [305] = {
    [sym__labels] = STATE(224),
    [sym_label_pair_eq] = STATE(145),
    [sym_label_pair] = STATE(224),
    [sym_label_key] = STATE(490),
    [anon_sym_DOLLAR] = ACTIONS(930),
    [aux_sym_env_key_token1] = ACTIONS(932),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [306] = {
    [sym_chown] = STATE(532),
    [sym_user_name] = STATE(493),
    [sym_user_id] = STATE(492),
    [anon_sym_DOLLAR] = ACTIONS(934),
    [aux_sym_user_name_token1] = ACTIONS(936),
    [aux_sym_user_id_token1] = ACTIONS(938),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [307] = {
    [sym__env_pairs] = STATE(207),
    [sym_env_pair_eq] = STATE(148),
    [sym_env_pair] = STATE(207),
    [sym_env_key] = STATE(147),
    [anon_sym_DOLLAR] = ACTIONS(940),
    [aux_sym_env_key_token1] = ACTIONS(942),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [308] = {
    [sym_hc_command] = STATE(236),
    [aux_sym__anything] = STATE(159),
    [sym__anything_or_json_array] = STATE(235),
    [sym_json_array] = STATE(235),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(699),
    [sym__anything_ex] = ACTIONS(489),
  },
  [309] = {
    [aux_sym__repository_start_repeat3] = STATE(384),
    [aux_sym_from_layer_token9] = ACTIONS(944),
    [anon_sym_SLASH] = ACTIONS(946),
    [aux_sym__repository_start_token3] = ACTIONS(948),
    [aux_sym__repository_start_token7] = ACTIONS(944),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [sym_template_expr_less_than_equals] = STATE(563),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(312),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [311] = {
    [aux_sym_from_layer_repeat3] = STATE(311),
    [aux_sym_from_layer_token4] = ACTIONS(952),
    [aux_sym_from_layer_token9] = ACTIONS(954),
    [aux_sym_from_layer_token12] = ACTIONS(954),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(952),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [312] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(374),
    [aux_sym_from_layer_token14] = ACTIONS(957),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(959),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(959),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(959),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [313] = {
    [sym_template_expr_less_than_equals] = STATE(616),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(312),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [314] = {
    [sym_port_protocol] = STATE(459),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_SLASH] = ACTIONS(961),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [315] = {
    [sym_template_expr_less_than_equals] = STATE(610),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(312),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [316] = {
    [aux_sym_from_layer_repeat1] = STATE(354),
    [anon_sym_DOLLAR] = ACTIONS(963),
    [aux_sym_from_layer_token3] = ACTIONS(963),
    [aux_sym_from_layer_token4] = ACTIONS(965),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(967),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [aux_sym_from_layer_repeat2] = STATE(356),
    [aux_sym_from_layer_token4] = ACTIONS(965),
    [aux_sym_from_layer_token5] = ACTIONS(969),
    [aux_sym_from_layer_token8] = ACTIONS(969),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(967),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [318] = {
    [aux_sym_from_layer_repeat3] = STATE(358),
    [aux_sym_from_layer_token4] = ACTIONS(965),
    [aux_sym_from_layer_token9] = ACTIONS(971),
    [aux_sym_from_layer_token12] = ACTIONS(971),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(967),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [319] = {
    [aux_sym_from_layer_repeat4] = STATE(360),
    [aux_sym_from_layer_token4] = ACTIONS(965),
    [aux_sym_from_layer_token13] = ACTIONS(973),
    [aux_sym_from_layer_token16] = ACTIONS(973),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(967),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [sym_template_expr_less_than_equals] = STATE(602),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(312),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [321] = {
    [sym_port] = STATE(592),
    [sym_port_range] = STATE(592),
    [sym__port_part] = STATE(469),
    [anon_sym_DOLLAR] = ACTIONS(868),
    [aux_sym__port_part_token1] = ACTIONS(870),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [322] = {
    [sym_template_expr_less_than_equals] = STATE(568),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(312),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [323] = {
    [sym_template_expr_less_than_equals] = STATE(510),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(312),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [324] = {
    [sym_template_expr_less_than_equals] = STATE(557),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(312),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [325] = {
    [sym_variable_default_value] = STATE(634),
    [sym_variable_this_or_null] = STATE(634),
    [anon_sym_RBRACE] = ACTIONS(975),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [326] = {
    [aux_sym__repository_start_repeat1] = STATE(349),
    [anon_sym_DOLLAR] = ACTIONS(981),
    [anon_sym_SLASH] = ACTIONS(946),
    [aux_sym__repository_start_token2] = ACTIONS(981),
    [aux_sym__repository_start_token3] = ACTIONS(948),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [327] = {
    [aux_sym__repository_start_repeat2] = STATE(383),
    [aux_sym_from_layer_token5] = ACTIONS(983),
    [anon_sym_SLASH] = ACTIONS(946),
    [aux_sym__repository_start_token3] = ACTIONS(948),
    [aux_sym__repository_start_token5] = ACTIONS(983),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [328] = {
    [sym_variable_default_value] = STATE(632),
    [sym_variable_this_or_null] = STATE(632),
    [anon_sym_RBRACE] = ACTIONS(985),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [329] = {
    [aux_sym__repository_start_repeat4] = STATE(366),
    [aux_sym_from_layer_token13] = ACTIONS(987),
    [anon_sym_SLASH] = ACTIONS(946),
    [aux_sym__repository_start_token3] = ACTIONS(948),
    [aux_sym__repository_start_token9] = ACTIONS(987),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [330] = {
    [sym_variable_default_value] = STATE(630),
    [sym_variable_this_or_null] = STATE(630),
    [anon_sym_RBRACE] = ACTIONS(989),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [331] = {
    [sym_variable_default_value] = STATE(628),
    [sym_variable_this_or_null] = STATE(628),
    [anon_sym_RBRACE] = ACTIONS(991),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [332] = {
    [sym_variable_default_value] = STATE(626),
    [sym_variable_this_or_null] = STATE(626),
    [anon_sym_RBRACE] = ACTIONS(993),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [333] = {
    [sym_variable_default_value] = STATE(624),
    [sym_variable_this_or_null] = STATE(624),
    [anon_sym_RBRACE] = ACTIONS(995),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [334] = {
    [sym_variable_default_value] = STATE(622),
    [sym_variable_this_or_null] = STATE(622),
    [anon_sym_RBRACE] = ACTIONS(997),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [335] = {
    [sym_variable_default_value] = STATE(620),
    [sym_variable_this_or_null] = STATE(620),
    [anon_sym_RBRACE] = ACTIONS(999),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [sym_variable_default_value] = STATE(618),
    [sym_variable_this_or_null] = STATE(618),
    [anon_sym_RBRACE] = ACTIONS(1001),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [337] = {
    [sym_port] = STATE(559),
    [sym_port_range] = STATE(559),
    [sym__port_part] = STATE(469),
    [anon_sym_DOLLAR] = ACTIONS(868),
    [aux_sym__port_part_token1] = ACTIONS(870),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [338] = {
    [aux_sym_path_repeat2] = STATE(345),
    [anon_sym_DQUOTE] = ACTIONS(1003),
    [anon_sym_DOLLAR] = ACTIONS(1005),
    [aux_sym_path_token3] = ACTIONS(1007),
    [aux_sym_path_token4] = ACTIONS(1009),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [339] = {
    [sym_variable_default_value] = STATE(613),
    [sym_variable_this_or_null] = STATE(613),
    [anon_sym_RBRACE] = ACTIONS(1011),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [340] = {
    [sym_template_expr_less_than_equals] = STATE(576),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(312),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [341] = {
    [sym_port_protocol] = STATE(454),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(961),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [342] = {
    [aux_sym_from_layer_repeat2] = STATE(342),
    [aux_sym_from_layer_token4] = ACTIONS(1013),
    [aux_sym_from_layer_token5] = ACTIONS(1015),
    [aux_sym_from_layer_token8] = ACTIONS(1015),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1013),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [343] = {
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_EQ2] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [344] = {
    [sym_user_name] = STATE(477),
    [sym_user_id] = STATE(494),
    [anon_sym_DOLLAR] = ACTIONS(1018),
    [aux_sym_user_name_token1] = ACTIONS(1020),
    [aux_sym_user_id_token1] = ACTIONS(1022),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [345] = {
    [aux_sym_path_repeat2] = STATE(345),
    [anon_sym_DQUOTE] = ACTIONS(1024),
    [anon_sym_DOLLAR] = ACTIONS(1026),
    [aux_sym_path_token3] = ACTIONS(1029),
    [aux_sym_path_token4] = ACTIONS(1031),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [346] = {
    [sym_variable_default_value] = STATE(607),
    [sym_variable_this_or_null] = STATE(607),
    [anon_sym_RBRACE] = ACTIONS(1034),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [aux_sym__repository_start_repeat1] = STATE(326),
    [anon_sym_DOLLAR] = ACTIONS(981),
    [anon_sym_SLASH] = ACTIONS(1036),
    [aux_sym__repository_start_token2] = ACTIONS(981),
    [aux_sym__repository_start_token3] = ACTIONS(1038),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [aux_sym_path_repeat2] = STATE(345),
    [anon_sym_DQUOTE] = ACTIONS(1040),
    [anon_sym_DOLLAR] = ACTIONS(1005),
    [aux_sym_path_token3] = ACTIONS(1042),
    [aux_sym_path_token4] = ACTIONS(1009),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [349] = {
    [aux_sym__repository_start_repeat1] = STATE(349),
    [anon_sym_DOLLAR] = ACTIONS(1044),
    [anon_sym_SLASH] = ACTIONS(170),
    [aux_sym__repository_start_token2] = ACTIONS(1044),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [aux_sym__repository_start_repeat2] = STATE(350),
    [aux_sym_from_layer_token5] = ACTIONS(1047),
    [anon_sym_SLASH] = ACTIONS(133),
    [aux_sym__repository_start_token3] = ACTIONS(135),
    [aux_sym__repository_start_token5] = ACTIONS(1047),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [351] = {
    [aux_sym__repository_start_repeat3] = STATE(351),
    [aux_sym_from_layer_token9] = ACTIONS(1050),
    [anon_sym_SLASH] = ACTIONS(177),
    [aux_sym__repository_start_token3] = ACTIONS(179),
    [aux_sym__repository_start_token7] = ACTIONS(1050),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [sym_template_expr_less_than_equals] = STATE(543),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(312),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [aux_sym__repository_start_repeat4] = STATE(353),
    [aux_sym_from_layer_token13] = ACTIONS(1053),
    [anon_sym_SLASH] = ACTIONS(186),
    [aux_sym__repository_start_token3] = ACTIONS(188),
    [aux_sym__repository_start_token9] = ACTIONS(1053),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [aux_sym_from_layer_repeat1] = STATE(354),
    [anon_sym_DOLLAR] = ACTIONS(1056),
    [aux_sym_from_layer_token3] = ACTIONS(1056),
    [aux_sym_from_layer_token4] = ACTIONS(1059),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1059),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_EQ2] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [356] = {
    [aux_sym_from_layer_repeat2] = STATE(342),
    [aux_sym_from_layer_token4] = ACTIONS(1061),
    [aux_sym_from_layer_token5] = ACTIONS(969),
    [aux_sym_from_layer_token8] = ACTIONS(969),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1063),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [357] = {
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_EQ2] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [358] = {
    [aux_sym_from_layer_repeat3] = STATE(311),
    [aux_sym_from_layer_token4] = ACTIONS(1061),
    [aux_sym_from_layer_token9] = ACTIONS(971),
    [aux_sym_from_layer_token12] = ACTIONS(971),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1063),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [359] = {
    [sym_path] = STATE(239),
    [anon_sym_DQUOTE] = ACTIONS(1065),
    [anon_sym_DOLLAR] = ACTIONS(1067),
    [aux_sym_path_token1] = ACTIONS(1069),
    [aux_sym_path_token2] = ACTIONS(1071),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [360] = {
    [aux_sym_from_layer_repeat4] = STATE(365),
    [aux_sym_from_layer_token4] = ACTIONS(1061),
    [aux_sym_from_layer_token13] = ACTIONS(973),
    [aux_sym_from_layer_token16] = ACTIONS(973),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1063),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [361] = {
    [aux_sym__anything] = STATE(159),
    [sym__anything_or_json_array] = STATE(228),
    [sym_json_array] = STATE(228),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(699),
    [sym__anything_ex] = ACTIONS(489),
  },
  [362] = {
    [sym_variable_default_value] = STATE(598),
    [sym_variable_this_or_null] = STATE(598),
    [anon_sym_RBRACE] = ACTIONS(1073),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [363] = {
    [aux_sym_path_repeat2] = STATE(348),
    [anon_sym_DQUOTE] = ACTIONS(1075),
    [anon_sym_DOLLAR] = ACTIONS(1005),
    [aux_sym_path_token3] = ACTIONS(1077),
    [aux_sym_path_token4] = ACTIONS(1009),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [364] = {
    [sym_template_expr_less_than_equals] = STATE(625),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(312),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [365] = {
    [aux_sym_from_layer_repeat4] = STATE(365),
    [aux_sym_from_layer_token4] = ACTIONS(1079),
    [aux_sym_from_layer_token13] = ACTIONS(1081),
    [aux_sym_from_layer_token16] = ACTIONS(1081),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1079),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [366] = {
    [aux_sym__repository_start_repeat4] = STATE(353),
    [aux_sym_from_layer_token13] = ACTIONS(987),
    [anon_sym_SLASH] = ACTIONS(1084),
    [aux_sym__repository_start_token3] = ACTIONS(1086),
    [aux_sym__repository_start_token9] = ACTIONS(987),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [367] = {
    [aux_sym_path_repeat2] = STATE(338),
    [anon_sym_DQUOTE] = ACTIONS(1088),
    [anon_sym_DOLLAR] = ACTIONS(1005),
    [aux_sym_path_token3] = ACTIONS(1090),
    [aux_sym_path_token4] = ACTIONS(1009),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [sym_variable_default_value] = STATE(520),
    [sym_variable_this_or_null] = STATE(520),
    [anon_sym_RBRACE] = ACTIONS(1092),
    [anon_sym_COLON_DASH] = ACTIONS(977),
    [anon_sym_COLON_PLUS] = ACTIONS(979),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [369] = {
    [sym_template_expr_less_than_equals] = STATE(512),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(312),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1094),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1094),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1094),
    [anon_sym_DASH_DASHretries] = ACTIONS(1094),
    [aux_sym__hc_command_token1] = ACTIONS(1094),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [371] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1096),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1096),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1096),
    [anon_sym_DASH_DASHretries] = ACTIONS(1096),
    [aux_sym__hc_command_token1] = ACTIONS(1096),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [372] = {
    [aux_sym_from_layer_repeat1] = STATE(316),
    [anon_sym_DOLLAR] = ACTIONS(963),
    [aux_sym_from_layer_token3] = ACTIONS(963),
    [aux_sym_from_layer_token4] = ACTIONS(1098),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1100),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [373] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1102),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1102),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1102),
    [anon_sym_DASH_DASHretries] = ACTIONS(1102),
    [aux_sym__hc_command_token1] = ACTIONS(1102),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [374] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(374),
    [aux_sym_from_layer_token14] = ACTIONS(1104),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(1106),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1106),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(1106),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [375] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1109),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1109),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1109),
    [anon_sym_DASH_DASHretries] = ACTIONS(1109),
    [aux_sym__hc_command_token1] = ACTIONS(1109),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [376] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1111),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1111),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1111),
    [anon_sym_DASH_DASHretries] = ACTIONS(1111),
    [aux_sym__hc_command_token1] = ACTIONS(1111),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [377] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1113),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1113),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1113),
    [anon_sym_DASH_DASHretries] = ACTIONS(1113),
    [aux_sym__hc_command_token1] = ACTIONS(1113),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [378] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1115),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1115),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1115),
    [anon_sym_DASH_DASHretries] = ACTIONS(1115),
    [aux_sym__hc_command_token1] = ACTIONS(1115),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [379] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1117),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1117),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1117),
    [anon_sym_DASH_DASHretries] = ACTIONS(1117),
    [aux_sym__hc_command_token1] = ACTIONS(1117),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [380] = {
    [aux_sym__anything] = STATE(159),
    [sym__anything_or_json_array] = STATE(196),
    [sym_json_array] = STATE(196),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(699),
    [sym__anything_ex] = ACTIONS(489),
  },
  [381] = {
    [sym_template_expr_less_than_equals] = STATE(617),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(312),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(950),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [382] = {
    [aux_sym__anything] = STATE(159),
    [sym__anything_or_json_array] = STATE(206),
    [sym_json_array] = STATE(206),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(699),
    [sym__anything_ex] = ACTIONS(489),
  },
  [383] = {
    [aux_sym__repository_start_repeat2] = STATE(350),
    [aux_sym_from_layer_token5] = ACTIONS(983),
    [anon_sym_SLASH] = ACTIONS(1084),
    [aux_sym__repository_start_token3] = ACTIONS(1086),
    [aux_sym__repository_start_token5] = ACTIONS(983),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [384] = {
    [aux_sym__repository_start_repeat3] = STATE(351),
    [aux_sym_from_layer_token9] = ACTIONS(944),
    [anon_sym_SLASH] = ACTIONS(1084),
    [aux_sym__repository_start_token3] = ACTIONS(1086),
    [aux_sym__repository_start_token7] = ACTIONS(944),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [385] = {
    [aux_sym_from_layer_token4] = ACTIONS(1119),
    [aux_sym_from_layer_token9] = ACTIONS(1121),
    [aux_sym_from_layer_token12] = ACTIONS(1121),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1119),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [386] = {
    [anon_sym_DOLLAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(197),
    [aux_sym__repository_start_token2] = ACTIONS(197),
    [aux_sym__repository_start_token3] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [387] = {
    [aux_sym_from_layer_token13] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [aux_sym__repository_start_token3] = ACTIONS(195),
    [aux_sym__repository_start_token9] = ACTIONS(193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [388] = {
    [aux_sym_from_layer_token9] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [aux_sym__repository_start_token3] = ACTIONS(207),
    [aux_sym__repository_start_token7] = ACTIONS(205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [aux_sym_from_layer_token5] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [aux_sym__repository_start_token3] = ACTIONS(215),
    [aux_sym__repository_start_token5] = ACTIONS(213),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [390] = {
    [aux_sym_from_layer_token4] = ACTIONS(1123),
    [aux_sym_from_layer_token13] = ACTIONS(1125),
    [aux_sym_from_layer_token16] = ACTIONS(1125),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1123),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [391] = {
    [aux_sym_from_layer_token4] = ACTIONS(1127),
    [aux_sym_from_layer_token5] = ACTIONS(1129),
    [aux_sym_from_layer_token8] = ACTIONS(1129),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1127),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [392] = {
    [sym_arg_default] = STATE(217),
    [anon_sym_DQUOTE] = ACTIONS(1131),
    [anon_sym_SQUOTE] = ACTIONS(1133),
    [aux_sym_arg_default_token3] = ACTIONS(1135),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [393] = {
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [aux_sym_path_token3] = ACTIONS(199),
    [aux_sym_path_token4] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [394] = {
    [sym_json_array_item] = STATE(453),
    [anon_sym_DQUOTE] = ACTIONS(1137),
    [anon_sym_SQUOTE] = ACTIONS(1139),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(1141),
    [sym_line_continuation] = ACTIONS(5),
  },
  [395] = {
    [anon_sym_DOLLAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [aux_sym__repository_start_token2] = ACTIONS(201),
    [aux_sym__repository_start_token3] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [396] = {
    [anon_sym_DOLLAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [aux_sym__repository_start_token2] = ACTIONS(209),
    [aux_sym__repository_start_token3] = ACTIONS(211),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [397] = {
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_path_token3] = ACTIONS(203),
    [aux_sym_path_token4] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [398] = {
    [anon_sym_DOLLAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [aux_sym__repository_start_token2] = ACTIONS(170),
    [aux_sym__repository_start_token3] = ACTIONS(172),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [sym_label_pair_eq] = STATE(178),
    [sym_label_key] = STATE(633),
    [anon_sym_DOLLAR] = ACTIONS(1143),
    [aux_sym_env_key_token1] = ACTIONS(1145),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [400] = {
    [anon_sym_DOLLAR] = ACTIONS(209),
    [aux_sym_from_layer_token3] = ACTIONS(209),
    [aux_sym_from_layer_token4] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [401] = {
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_from_layer_token3] = ACTIONS(201),
    [aux_sym_from_layer_token4] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [anon_sym_DOLLAR] = ACTIONS(197),
    [aux_sym_from_layer_token3] = ACTIONS(197),
    [aux_sym_from_layer_token4] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [403] = {
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_DOLLAR] = ACTIONS(209),
    [aux_sym_path_token3] = ACTIONS(211),
    [aux_sym_path_token4] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [404] = {
    [anon_sym_DQUOTE] = ACTIONS(1024),
    [anon_sym_DOLLAR] = ACTIONS(1024),
    [aux_sym_path_token3] = ACTIONS(1029),
    [aux_sym_path_token4] = ACTIONS(1029),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [405] = {
    [anon_sym_DOLLAR] = ACTIONS(1147),
    [aux_sym_from_layer_token3] = ACTIONS(1147),
    [aux_sym_from_layer_token4] = ACTIONS(1059),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1059),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [406] = {
    [sym_env_pair_eq] = STATE(171),
    [sym_env_key] = STATE(558),
    [anon_sym_DOLLAR] = ACTIONS(1149),
    [aux_sym_env_key_token1] = ACTIONS(1151),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [407] = {
    [sym_docker_variable] = STATE(55),
    [anon_sym_LBRACE] = ACTIONS(1153),
    [sym__docker_variable] = ACTIONS(1155),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [sym_docker_variable] = STATE(111),
    [anon_sym_LBRACE] = ACTIONS(1157),
    [sym__docker_variable] = ACTIONS(1159),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [sym_signal_name] = STATE(234),
    [sym_signal_num] = ACTIONS(1161),
    [aux_sym_signal_name_token1] = ACTIONS(1163),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [aux_sym_arg_default_repeat1] = STATE(446),
    [anon_sym_DQUOTE] = ACTIONS(1165),
    [aux_sym_arg_default_token1] = ACTIONS(1167),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [anon_sym_DOLLAR] = ACTIONS(1169),
    [aux_sym_path_token3] = ACTIONS(1171),
    [aux_sym_path_token4] = ACTIONS(1173),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [sym_docker_variable] = STATE(84),
    [anon_sym_LBRACE] = ACTIONS(1153),
    [sym__docker_variable] = ACTIONS(1155),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [sym_docker_variable] = STATE(22),
    [anon_sym_LBRACE] = ACTIONS(1153),
    [sym__docker_variable] = ACTIONS(1155),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [sym_docker_variable] = STATE(52),
    [anon_sym_LBRACE] = ACTIONS(1175),
    [sym__docker_variable] = ACTIONS(1177),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [sym_docker_variable] = STATE(78),
    [anon_sym_LBRACE] = ACTIONS(1179),
    [sym__docker_variable] = ACTIONS(1181),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [sym_docker_variable] = STATE(157),
    [anon_sym_LBRACE] = ACTIONS(1183),
    [sym__docker_variable] = ACTIONS(1185),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_EQ2] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [418] = {
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_EQ2] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_EQ2] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [sym_docker_variable] = STATE(28),
    [anon_sym_LBRACE] = ACTIONS(1179),
    [sym__docker_variable] = ACTIONS(1181),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [sym_platform] = STATE(245),
    [anon_sym_DOLLAR] = ACTIONS(1187),
    [aux_sym_platform_token1] = ACTIONS(1189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [sym_docker_variable] = STATE(113),
    [anon_sym_LBRACE] = ACTIONS(1191),
    [sym__docker_variable] = ACTIONS(1193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [423] = {
    [sym_docker_variable] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(1153),
    [sym__docker_variable] = ACTIONS(1155),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [sym_user_group] = STATE(542),
    [anon_sym_DOLLAR] = ACTIONS(1195),
    [aux_sym_user_name_token1] = ACTIONS(1197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [sym_docker_variable] = STATE(524),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym__docker_variable] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [aux_sym_arg_default_repeat2] = STATE(475),
    [anon_sym_SQUOTE] = ACTIONS(1203),
    [aux_sym_arg_default_token2] = ACTIONS(1205),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [aux_sym_arg_default_repeat1] = STATE(410),
    [anon_sym_DQUOTE] = ACTIONS(1203),
    [aux_sym_arg_default_token1] = ACTIONS(1207),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [sym_docker_variable] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(1175),
    [sym__docker_variable] = ACTIONS(1177),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [sym_docker_variable] = STATE(341),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym__docker_variable] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [sym_docker_variable] = STATE(525),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym__docker_variable] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [aux_sym_json_array_repeat1] = STATE(458),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1209),
    [anon_sym_RBRACK] = ACTIONS(1211),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [sym_json_array_item] = STATE(478),
    [anon_sym_DQUOTE] = ACTIONS(1137),
    [anon_sym_SQUOTE] = ACTIONS(1139),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [aux_sym__json_array_item_single] = STATE(447),
    [anon_sym_SQUOTE] = ACTIONS(1213),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [aux_sym__json_array_item_single_token1] = ACTIONS(1215),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [aux_sym__json_array_item_double] = STATE(439),
    [anon_sym_DQUOTE] = ACTIONS(1213),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [aux_sym__json_array_item_double_token1] = ACTIONS(1217),
    [sym_line_continuation] = ACTIONS(5),
  },
  [435] = {
    [sym_docker_variable] = STATE(507),
    [anon_sym_LBRACE] = ACTIONS(1219),
    [sym__docker_variable] = ACTIONS(1221),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [sym_user_group] = STATE(612),
    [anon_sym_DOLLAR] = ACTIONS(1223),
    [aux_sym_user_name_token1] = ACTIONS(1225),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [anon_sym_DOLLAR] = ACTIONS(1227),
    [aux_sym_port_protocol_token1] = ACTIONS(1229),
    [aux_sym_port_protocol_token2] = ACTIONS(1229),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [sym_docker_variable] = STATE(209),
    [anon_sym_LBRACE] = ACTIONS(1179),
    [sym__docker_variable] = ACTIONS(1181),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [aux_sym__json_array_item_double] = STATE(439),
    [anon_sym_DQUOTE] = ACTIONS(1231),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [aux_sym__json_array_item_double_token1] = ACTIONS(1233),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [sym_docker_variable] = STATE(472),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym__docker_variable] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [sym_docker_variable] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(1236),
    [sym__docker_variable] = ACTIONS(1238),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [sym_docker_variable] = STATE(533),
    [anon_sym_LBRACE] = ACTIONS(1219),
    [sym__docker_variable] = ACTIONS(1221),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [aux_sym_arg_default_repeat2] = STATE(443),
    [anon_sym_SQUOTE] = ACTIONS(1240),
    [aux_sym_arg_default_token2] = ACTIONS(1242),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [sym_user_group] = STATE(220),
    [anon_sym_DOLLAR] = ACTIONS(1245),
    [aux_sym_user_name_token1] = ACTIONS(1247),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [sym_docker_variable] = STATE(506),
    [anon_sym_LBRACE] = ACTIONS(1219),
    [sym__docker_variable] = ACTIONS(1221),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [aux_sym_arg_default_repeat1] = STATE(446),
    [anon_sym_DQUOTE] = ACTIONS(1249),
    [aux_sym_arg_default_token1] = ACTIONS(1251),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [aux_sym__json_array_item_single] = STATE(447),
    [anon_sym_SQUOTE] = ACTIONS(1254),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [aux_sym__json_array_item_single_token1] = ACTIONS(1256),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [sym_docker_variable] = STATE(491),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym__docker_variable] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [sym_docker_variable] = STATE(172),
    [anon_sym_LBRACE] = ACTIONS(1179),
    [sym__docker_variable] = ACTIONS(1181),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [sym_docker_variable] = STATE(398),
    [anon_sym_LBRACE] = ACTIONS(1259),
    [sym__docker_variable] = ACTIONS(1261),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [aux_sym__json_array_item_double] = STATE(434),
    [anon_sym_DQUOTE] = ACTIONS(1263),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [aux_sym__json_array_item_double_token1] = ACTIONS(1265),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [aux_sym__json_array_item_single] = STATE(433),
    [anon_sym_SQUOTE] = ACTIONS(1263),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [aux_sym__json_array_item_single_token1] = ACTIONS(1267),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [aux_sym_json_array_repeat1] = STATE(431),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1209),
    [anon_sym_RBRACK] = ACTIONS(1269),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [sym_docker_variable] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(1271),
    [sym__docker_variable] = ACTIONS(1273),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [sym__port_part] = STATE(104),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym__port_part_token1] = ACTIONS(120),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [457] = {
    [anon_sym_DOLLAR] = ACTIONS(1275),
    [aux_sym_port_protocol_token1] = ACTIONS(1277),
    [aux_sym_port_protocol_token2] = ACTIONS(1277),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [458] = {
    [aux_sym_json_array_repeat1] = STATE(458),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1279),
    [anon_sym_RBRACK] = ACTIONS(1282),
    [sym_line_continuation] = ACTIONS(5),
  },
  [459] = {
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [sym_docker_variable] = STATE(404),
    [anon_sym_LBRACE] = ACTIONS(1284),
    [sym__docker_variable] = ACTIONS(1286),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [sym_docker_variable] = STATE(539),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym__docker_variable] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [sym_docker_variable] = STATE(128),
    [anon_sym_LBRACE] = ACTIONS(1157),
    [sym__docker_variable] = ACTIONS(1159),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [sym_docker_variable] = STATE(347),
    [anon_sym_LBRACE] = ACTIONS(1259),
    [sym__docker_variable] = ACTIONS(1261),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [464] = {
    [anon_sym_DOLLAR] = ACTIONS(1288),
    [aux_sym_path_token3] = ACTIONS(1290),
    [aux_sym_path_token4] = ACTIONS(1292),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [sym__port_part] = STATE(488),
    [anon_sym_DOLLAR] = ACTIONS(868),
    [aux_sym__port_part_token1] = ACTIONS(870),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [sym_docker_variable] = STATE(363),
    [anon_sym_LBRACE] = ACTIONS(1284),
    [sym__docker_variable] = ACTIONS(1286),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [anon_sym_DQUOTE] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_DASH] = ACTIONS(371),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [sym_docker_variable] = STATE(40),
    [anon_sym_LBRACE] = ACTIONS(1236),
    [sym__docker_variable] = ACTIONS(1238),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [anon_sym_DQUOTE] = ACTIONS(343),
    [anon_sym_COLON] = ACTIONS(343),
    [anon_sym_DASH] = ACTIONS(1294),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [sym_docker_variable] = STATE(405),
    [anon_sym_LBRACE] = ACTIONS(1296),
    [sym__docker_variable] = ACTIONS(1298),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [sym_docker_variable] = STATE(372),
    [anon_sym_LBRACE] = ACTIONS(1296),
    [sym__docker_variable] = ACTIONS(1298),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DASH] = ACTIONS(341),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [473] = {
    [sym_docker_variable] = STATE(118),
    [anon_sym_LBRACE] = ACTIONS(1191),
    [sym__docker_variable] = ACTIONS(1193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [sym_docker_variable] = STATE(367),
    [anon_sym_LBRACE] = ACTIONS(1284),
    [sym__docker_variable] = ACTIONS(1286),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [aux_sym_arg_default_repeat2] = STATE(443),
    [anon_sym_SQUOTE] = ACTIONS(1165),
    [aux_sym_arg_default_token2] = ACTIONS(1300),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [aux_sym__anything] = STATE(154),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__anything_ex] = ACTIONS(489),
  },
  [477] = {
    [anon_sym_DQUOTE] = ACTIONS(1302),
    [anon_sym_COLON] = ACTIONS(1304),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [478] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1282),
    [anon_sym_RBRACK] = ACTIONS(1282),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1306),
    [anon_sym_RBRACK] = ACTIONS(1306),
    [sym_line_continuation] = ACTIONS(5),
  },
  [480] = {
    [sym_user_group_id] = STATE(612),
    [aux_sym_user_id_token1] = ACTIONS(1308),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [sym_hc_interval] = STATE(378),
    [aux_sym_hc_interval_token1] = ACTIONS(1310),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [aux_sym__anything] = STATE(152),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__anything_ex] = ACTIONS(540),
  },
  [483] = {
    [sym_json_array] = STATE(229),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_array_start] = ACTIONS(699),
  },
  [484] = {
    [sym_hc_timeout] = STATE(376),
    [aux_sym_hc_interval_token1] = ACTIONS(1312),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [sym_user_group_id] = STATE(542),
    [aux_sym_user_id_token1] = ACTIONS(1314),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [anon_sym_DQUOTE] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(393),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [anon_sym_DQUOTE] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(603),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [anon_sym_DQUOTE] = ACTIONS(414),
    [anon_sym_COLON] = ACTIONS(414),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [anon_sym_DQUOTE] = ACTIONS(621),
    [anon_sym_COLON] = ACTIONS(621),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [anon_sym_EQ2] = ACTIONS(1316),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1318),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [anon_sym_DQUOTE] = ACTIONS(587),
    [anon_sym_COLON] = ACTIONS(587),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [492] = {
    [anon_sym_COLON] = ACTIONS(1320),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1322),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [493] = {
    [anon_sym_COLON] = ACTIONS(1324),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1322),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [anon_sym_DQUOTE] = ACTIONS(1302),
    [anon_sym_COLON] = ACTIONS(1326),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [anon_sym_DQUOTE] = ACTIONS(1328),
    [anon_sym_COLON] = ACTIONS(1331),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [496] = {
    [sym_user_group_id] = STATE(220),
    [aux_sym_user_id_token1] = ACTIONS(1333),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [anon_sym_EQ2] = ACTIONS(1335),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1335),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [aux_sym__anything] = STATE(139),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__anything_ex] = ACTIONS(489),
  },
  [499] = {
    [anon_sym_DQUOTE] = ACTIONS(400),
    [anon_sym_COLON] = ACTIONS(1337),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [500] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1339),
    [anon_sym_RBRACK] = ACTIONS(1339),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [anon_sym_COLON] = ACTIONS(603),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(603),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [502] = {
    [anon_sym_COLON] = ACTIONS(621),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(621),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [503] = {
    [sym_env_value] = STATE(168),
    [aux_sym_env_value_token1] = ACTIONS(1341),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [504] = {
    [sym_hc_start_period] = STATE(373),
    [aux_sym_hc_interval_token1] = ACTIONS(1343),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [505] = {
    [sym_hc_retries] = STATE(370),
    [aux_sym__port_part_token1] = ACTIONS(1345),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [506] = {
    [anon_sym_EQ2] = ACTIONS(1347),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1347),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [507] = {
    [anon_sym_COLON] = ACTIONS(587),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(587),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [508] = {
    [sym_label_value] = STATE(164),
    [aux_sym_env_value_token1] = ACTIONS(1349),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [509] = {
    [aux_sym_from_layer_token10] = ACTIONS(1351),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [aux_sym_from_layer_token14] = ACTIONS(1353),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [511] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1355),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [512] = {
    [aux_sym_from_layer_token14] = ACTIONS(1357),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [513] = {
    [aux_sym_from_token2] = ACTIONS(1359),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [514] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1361),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [515] = {
    [aux_sym_from_layer_token10] = ACTIONS(1363),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [516] = {
    [aux_sym_from_layer_token6] = ACTIONS(1365),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [517] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1367),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [518] = {
    [sym_arg_name] = ACTIONS(1369),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [519] = {
    [anon_sym_DQUOTE] = ACTIONS(1371),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [520] = {
    [anon_sym_RBRACE] = ACTIONS(1373),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [521] = {
    [anon_sym_EQ2] = ACTIONS(527),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [522] = {
    [anon_sym_EQ2] = ACTIONS(1335),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [523] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1375),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [524] = {
    [anon_sym_EQ2] = ACTIONS(546),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [525] = {
    [anon_sym_EQ2] = ACTIONS(1347),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [526] = {
    [sym_template_expr_percent_signs] = ACTIONS(1377),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [527] = {
    [sym_template_expr_curly_braces] = ACTIONS(1379),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [528] = {
    [anon_sym_DQUOTE] = ACTIONS(449),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [529] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(663),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [530] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(661),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [531] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1381),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [532] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1383),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [533] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(655),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [534] = {
    [sym__docker_variable] = ACTIONS(1385),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [535] = {
    [anon_sym_DQUOTE] = ACTIONS(1387),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [536] = {
    [aux_sym_signal_name_token2] = ACTIONS(1389),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [537] = {
    [anon_sym_DQUOTE] = ACTIONS(663),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [538] = {
    [anon_sym_DQUOTE] = ACTIONS(661),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [539] = {
    [anon_sym_DQUOTE] = ACTIONS(655),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [540] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1391),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [541] = {
    [aux_sym_from_token2] = ACTIONS(1393),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [542] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1395),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [543] = {
    [aux_sym_from_layer_token14] = ACTIONS(1397),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [544] = {
    [aux_sym_from_layer_token10] = ACTIONS(1399),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [545] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1401),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [546] = {
    [anon_sym_EQ] = ACTIONS(1403),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [547] = {
    [anon_sym_EQ] = ACTIONS(1405),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [548] = {
    [anon_sym_EQ] = ACTIONS(1407),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [549] = {
    [anon_sym_EQ] = ACTIONS(1409),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [550] = {
    [aux_sym_from_layer_token6] = ACTIONS(1411),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [551] = {
    [sym_template_expr_percent_signs] = ACTIONS(1413),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [552] = {
    [sym_template_expr_curly_braces] = ACTIONS(1415),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [553] = {
    [anon_sym_SLASH] = ACTIONS(1417),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [554] = {
    [aux_sym_from_token2] = ACTIONS(1419),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [555] = {
    [aux_sym_from_layer_token6] = ACTIONS(1421),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [556] = {
    [aux_sym_from_layer_token10] = ACTIONS(1423),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [557] = {
    [aux_sym_from_layer_token14] = ACTIONS(1425),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [558] = {
    [anon_sym_EQ2] = ACTIONS(521),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [559] = {
    [anon_sym_DQUOTE] = ACTIONS(1427),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [560] = {
    [aux_sym_from_token2] = ACTIONS(1429),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [561] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1431),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [562] = {
    [aux_sym_from_layer_token6] = ACTIONS(1433),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [563] = {
    [aux_sym_from_layer_token14] = ACTIONS(1435),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [564] = {
    [aux_sym_from_layer_token10] = ACTIONS(1437),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [565] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1439),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [566] = {
    [aux_sym_from_layer_token6] = ACTIONS(1441),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [567] = {
    [sym_template_expr_curly_braces] = ACTIONS(1443),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [568] = {
    [aux_sym_from_layer_token14] = ACTIONS(1445),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [569] = {
    [aux_sym_from_token2] = ACTIONS(1447),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [570] = {
    [sym_template_expr_percent_signs] = ACTIONS(1449),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [571] = {
    [sym_template_expr_curly_braces] = ACTIONS(1451),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [572] = {
    [ts_builtin_sym_end] = ACTIONS(1453),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [573] = {
    [aux_sym_from_layer_token6] = ACTIONS(1455),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [574] = {
    [aux_sym_from_layer_token10] = ACTIONS(1457),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [575] = {
    [sym_template_expr_percent_signs] = ACTIONS(1459),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [576] = {
    [aux_sym_from_layer_token14] = ACTIONS(1461),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [577] = {
    [sym_template_expr_curly_braces] = ACTIONS(1463),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [578] = {
    [sym_template_expr_percent_signs] = ACTIONS(1465),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [579] = {
    [sym_template_expr_curly_braces] = ACTIONS(1467),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [580] = {
    [sym_template_expr_curly_braces] = ACTIONS(1469),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [581] = {
    [sym_template_expr_percent_signs] = ACTIONS(1471),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [582] = {
    [anon_sym_SLASH] = ACTIONS(1084),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [583] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1473),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [584] = {
    [aux_sym_from_token2] = ACTIONS(1475),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [585] = {
    [aux_sym_from_layer_token10] = ACTIONS(1477),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [586] = {
    [aux_sym_from_layer_token6] = ACTIONS(1479),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [587] = {
    [sym_template_expr_percent_signs] = ACTIONS(1481),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [588] = {
    [anon_sym_DQUOTE] = ACTIONS(1483),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [589] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1485),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [590] = {
    [aux_sym_from_token2] = ACTIONS(1487),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [591] = {
    [aux_sym_from_token2] = ACTIONS(1489),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [592] = {
    [anon_sym_DQUOTE] = ACTIONS(1491),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [593] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1493),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [594] = {
    [sym_template_expr_percent_signs] = ACTIONS(1495),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [595] = {
    [sym_template_expr_curly_braces] = ACTIONS(1497),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [596] = {
    [anon_sym_DQUOTE] = ACTIONS(1040),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [597] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1499),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [598] = {
    [anon_sym_RBRACE] = ACTIONS(1501),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [599] = {
    [anon_sym_DQUOTE] = ACTIONS(1503),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [600] = {
    [aux_sym_from_layer_token6] = ACTIONS(1505),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [601] = {
    [aux_sym_from_layer_token10] = ACTIONS(1507),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [602] = {
    [aux_sym_from_layer_token14] = ACTIONS(1509),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [603] = {
    [anon_sym_SLASH] = ACTIONS(1511),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [604] = {
    [anon_sym_RBRACE] = ACTIONS(1513),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [605] = {
    [anon_sym_RBRACE] = ACTIONS(1515),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [606] = {
    [anon_sym_DQUOTE] = ACTIONS(1517),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [607] = {
    [anon_sym_RBRACE] = ACTIONS(1519),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [608] = {
    [aux_sym_from_layer_token6] = ACTIONS(1521),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [609] = {
    [aux_sym_from_layer_token10] = ACTIONS(1523),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [610] = {
    [aux_sym_from_layer_token14] = ACTIONS(1525),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [611] = {
    [anon_sym_DQUOTE] = ACTIONS(1003),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [612] = {
    [anon_sym_DQUOTE] = ACTIONS(1527),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [613] = {
    [anon_sym_RBRACE] = ACTIONS(1529),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [614] = {
    [aux_sym_from_layer_token6] = ACTIONS(1531),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [615] = {
    [aux_sym_from_layer_token10] = ACTIONS(1533),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [616] = {
    [aux_sym_from_layer_token14] = ACTIONS(1535),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [617] = {
    [aux_sym_from_layer_token14] = ACTIONS(1537),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [618] = {
    [anon_sym_RBRACE] = ACTIONS(1539),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [619] = {
    [aux_sym_from_layer_token10] = ACTIONS(1541),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [620] = {
    [anon_sym_RBRACE] = ACTIONS(1543),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [621] = {
    [aux_sym_from_layer_token6] = ACTIONS(1545),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [622] = {
    [anon_sym_RBRACE] = ACTIONS(1547),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [623] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1549),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [624] = {
    [anon_sym_RBRACE] = ACTIONS(1551),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [625] = {
    [aux_sym_from_layer_token14] = ACTIONS(1553),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [626] = {
    [anon_sym_RBRACE] = ACTIONS(1555),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [627] = {
    [aux_sym_from_layer_token10] = ACTIONS(1557),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [628] = {
    [anon_sym_RBRACE] = ACTIONS(1559),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [629] = {
    [aux_sym_from_layer_token6] = ACTIONS(1561),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [630] = {
    [anon_sym_RBRACE] = ACTIONS(1563),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [631] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1565),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [632] = {
    [anon_sym_RBRACE] = ACTIONS(1567),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [633] = {
    [anon_sym_EQ2] = ACTIONS(1316),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [634] = {
    [anon_sym_RBRACE] = ACTIONS(1569),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [635] = {
    [anon_sym_SLASH] = ACTIONS(946),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [636] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1571),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [637] = {
    [sym__docker_variable] = ACTIONS(1573),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [638] = {
    [sym_template_expr_percent_signs] = ACTIONS(1575),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [639] = {
    [sym_template_expr_curly_braces] = ACTIONS(1577),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [640] = {
    [sym_template_expr_percent_signs] = ACTIONS(1579),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [641] = {
    [sym_template_expr_curly_braces] = ACTIONS(1581),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [642] = {
    [sym__docker_variable] = ACTIONS(1583),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [643] = {
    [sym_template_expr_curly_braces] = ACTIONS(1585),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [644] = {
    [sym_template_expr_percent_signs] = ACTIONS(1587),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [645] = {
    [aux_sym_from_token2] = ACTIONS(1589),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [646] = {
    [sym__docker_variable] = ACTIONS(1591),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [647] = {
    [sym_template_expr_curly_braces] = ACTIONS(1593),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [648] = {
    [sym_template_expr_percent_signs] = ACTIONS(1595),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [649] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1597),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [650] = {
    [sym__docker_variable] = ACTIONS(1599),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [651] = {
    [sym__docker_variable] = ACTIONS(1601),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [652] = {
    [sym__docker_variable] = ACTIONS(1603),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [653] = {
    [sym__docker_variable] = ACTIONS(1605),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [654] = {
    [sym__docker_variable] = ACTIONS(1607),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [655] = {
    [sym__docker_variable] = ACTIONS(1609),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [656] = {
    [sym__docker_variable] = ACTIONS(1611),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [657] = {
    [sym__docker_variable] = ACTIONS(1613),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [658] = {
    [sym__docker_variable] = ACTIONS(1615),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(298),
  [11] = {.count = 1, .reusable = true}, SHIFT(518),
  [13] = {.count = 1, .reusable = true}, SHIFT(380),
  [15] = {.count = 1, .reusable = true}, SHIFT(244),
  [17] = {.count = 1, .reusable = true}, SHIFT(382),
  [19] = {.count = 1, .reusable = true}, SHIFT(307),
  [21] = {.count = 1, .reusable = true}, SHIFT(247),
  [23] = {.count = 1, .reusable = true}, SHIFT(243),
  [25] = {.count = 1, .reusable = true}, SHIFT(242),
  [27] = {.count = 1, .reusable = true}, SHIFT(305),
  [29] = {.count = 1, .reusable = true}, SHIFT(482),
  [31] = {.count = 1, .reusable = true}, SHIFT(8),
  [33] = {.count = 1, .reusable = true}, SHIFT(361),
  [35] = {.count = 1, .reusable = true}, SHIFT(483),
  [37] = {.count = 1, .reusable = true}, SHIFT(409),
  [39] = {.count = 1, .reusable = true}, SHIFT(304),
  [41] = {.count = 1, .reusable = true}, SHIFT(297),
  [43] = {.count = 1, .reusable = true}, SHIFT(359),
  [45] = {.count = 1, .reusable = true}, SHIFT(194),
  [47] = {.count = 1, .reusable = true}, SHIFT(3),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(298),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(518),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(380),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(244),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(382),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(307),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(247),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(243),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(242),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(305),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(482),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(8),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(361),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(483),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(409),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(304),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(297),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(359),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(194),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 2, .production_id = 3),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [116] = {.count = 1, .reusable = true}, SHIFT(283),
  [118] = {.count = 1, .reusable = true}, SHIFT(420),
  [120] = {.count = 1, .reusable = true}, SHIFT(38),
  [122] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(283),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(420),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(38),
  [133] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [135] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(641),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [144] = {.count = 1, .reusable = true}, SHIFT(413),
  [146] = {.count = 1, .reusable = true}, SHIFT(287),
  [148] = {.count = 1, .reusable = false}, SHIFT(68),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [154] = {.count = 1, .reusable = true}, SHIFT(323),
  [156] = {.count = 1, .reusable = true}, SHIFT(282),
  [158] = {.count = 1, .reusable = false}, SHIFT(80),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [164] = {.count = 1, .reusable = true}, SHIFT(285),
  [166] = {.count = 1, .reusable = false}, SHIFT(90),
  [168] = {.count = 1, .reusable = true}, SHIFT(638),
  [170] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [172] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [174] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(413),
  [177] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [179] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(638),
  [184] = {.count = 1, .reusable = true}, SHIFT(641),
  [186] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [188] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(323),
  [193] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [195] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [205] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [207] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [213] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [219] = {.count = 1, .reusable = true}, SHIFT(457),
  [221] = {.count = 1, .reusable = true}, SHIFT(640),
  [223] = {.count = 1, .reusable = false}, SHIFT(134),
  [225] = {.count = 1, .reusable = true}, SHIFT(639),
  [227] = {.count = 1, .reusable = true}, SHIFT(441),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(441),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(640),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(320),
  [238] = {.count = 1, .reusable = true}, SHIFT(320),
  [240] = {.count = 1, .reusable = false}, SHIFT(130),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [244] = {.count = 1, .reusable = false}, SHIFT(120),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(639),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [251] = {.count = 1, .reusable = true}, SHIFT(411),
  [253] = {.count = 1, .reusable = true}, SHIFT(414),
  [255] = {.count = 1, .reusable = false}, SHIFT(92),
  [257] = {.count = 1, .reusable = false}, SHIFT(414),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [263] = {.count = 1, .reusable = true}, SHIFT(428),
  [265] = {.count = 1, .reusable = false}, SHIFT(83),
  [267] = {.count = 1, .reusable = false}, SHIFT(428),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [271] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(411),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(414),
  [279] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(92),
  [282] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(414),
  [285] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(428),
  [290] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2),
  [292] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(428),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [297] = {.count = 1, .reusable = false}, SHIFT(69),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_path, 2),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 2),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_add, 2),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [309] = {.count = 1, .reusable = false}, SHIFT(153),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [315] = {.count = 1, .reusable = false}, SHIFT(135),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [321] = {.count = 1, .reusable = false}, SHIFT(137),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [327] = {.count = 1, .reusable = false}, SHIFT(181),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [333] = {.count = 1, .reusable = false}, SHIFT(163),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [339] = {.count = 1, .reusable = true}, SHIFT(288),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [345] = {.count = 1, .reusable = true}, SHIFT(456),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [351] = {.count = 1, .reusable = true}, SHIFT(289),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_path, 6),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_path, 6),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_path, 5),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_path, 5),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_path, 4),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_path, 4),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [369] = {.count = 1, .reusable = false}, SHIFT(187),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [375] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [377] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [379] = {.count = 1, .reusable = false}, SHIFT(101),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [389] = {.count = 1, .reusable = true}, SHIFT(313),
  [391] = {.count = 1, .reusable = false}, SHIFT(231),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(647),
  [398] = {.count = 1, .reusable = true}, SHIFT(648),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [402] = {.count = 1, .reusable = true}, SHIFT(301),
  [404] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(462),
  [407] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(313),
  [412] = {.count = 1, .reusable = true}, SHIFT(647),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(473),
  [419] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(473),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [426] = {.count = 1, .reusable = false}, SHIFT(221),
  [428] = {.count = 1, .reusable = true}, SHIFT(473),
  [430] = {.count = 1, .reusable = false}, SHIFT(222),
  [432] = {.count = 1, .reusable = false}, SHIFT(473),
  [434] = {.count = 1, .reusable = true}, SHIFT(462),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [440] = {.count = 1, .reusable = false}, SHIFT(210),
  [442] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(648),
  [445] = {.count = 1, .reusable = false}, SHIFT(202),
  [447] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [453] = {.count = 1, .reusable = true}, SHIFT(275),
  [455] = {.count = 1, .reusable = true}, SHIFT(251),
  [457] = {.count = 1, .reusable = false}, SHIFT(645),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [461] = {.count = 1, .reusable = true}, SHIFT(258),
  [463] = {.count = 1, .reusable = true}, SHIFT(257),
  [465] = {.count = 1, .reusable = false}, SHIFT(569),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [469] = {.count = 1, .reusable = true}, SHIFT(273),
  [471] = {.count = 1, .reusable = true}, SHIFT(254),
  [473] = {.count = 1, .reusable = false}, SHIFT(591),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [477] = {.count = 1, .reusable = true}, SHIFT(277),
  [479] = {.count = 1, .reusable = true}, SHIFT(250),
  [481] = {.count = 1, .reusable = false}, SHIFT(554),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3, .production_id = 6),
  [489] = {.count = 1, .reusable = true}, SHIFT(165),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [493] = {.count = 1, .reusable = true}, SHIFT(255),
  [495] = {.count = 1, .reusable = false}, SHIFT(560),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [499] = {.count = 1, .reusable = true}, SHIFT(256),
  [501] = {.count = 1, .reusable = false}, SHIFT(541),
  [503] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [505] = {.count = 2, .reusable = true}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(165),
  [508] = {.count = 2, .reusable = true}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(170),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym__labels, 1),
  [513] = {.count = 1, .reusable = false}, SHIFT(399),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 1),
  [521] = {.count = 1, .reusable = true}, SHIFT(503),
  [523] = {.count = 1, .reusable = false}, SHIFT(476),
  [525] = {.count = 1, .reusable = false}, SHIFT(406),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_env_key, 1),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym_env_key, 1),
  [531] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [533] = {.count = 2, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2), SHIFT_REPEAT(406),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 2),
  [538] = {.count = 1, .reusable = true}, SHIFT(200),
  [540] = {.count = 1, .reusable = true}, SHIFT(170),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 5),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 2),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_env_key, 2),
  [548] = {.count = 1, .reusable = false}, REDUCE(sym_env_key, 2),
  [550] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels_repeat1, 2),
  [552] = {.count = 2, .reusable = false}, REDUCE(aux_sym__labels_repeat1, 2), SHIFT_REPEAT(399),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym__labels, 2),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [561] = {.count = 1, .reusable = true}, SHIFT(392),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair_eq, 3),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair_eq, 3),
  [571] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [575] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair_eq, 3),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair_eq, 3),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 1),
  [583] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 1),
  [585] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 2),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [591] = {.count = 1, .reusable = false}, SHIFT(590),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [599] = {.count = 1, .reusable = false}, SHIFT(584),
  [601] = {.count = 1, .reusable = false}, REDUCE(aux_sym__labels_repeat1, 2),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 3),
  [607] = {.count = 1, .reusable = true}, SHIFT(213),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 2),
  [611] = {.count = 1, .reusable = true}, SHIFT(193),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 4),
  [615] = {.count = 1, .reusable = true}, SHIFT(211),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [619] = {.count = 1, .reusable = false}, SHIFT(513),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_user, 2),
  [625] = {.count = 1, .reusable = true}, SHIFT(444),
  [627] = {.count = 1, .reusable = true}, SHIFT(496),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 2),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 2),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 1),
  [635] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 2),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 2),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 2),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_env, 2),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 2),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 5),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 3),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_user, 6),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_run, 2),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 2),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 2),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 2),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [695] = {.count = 1, .reusable = true}, SHIFT(306),
  [697] = {.count = 1, .reusable = true}, SHIFT(263),
  [699] = {.count = 1, .reusable = true}, SHIFT(394),
  [701] = {.count = 1, .reusable = true}, SHIFT(190),
  [703] = {.count = 1, .reusable = true}, SHIFT(549),
  [705] = {.count = 1, .reusable = true}, SHIFT(548),
  [707] = {.count = 1, .reusable = true}, SHIFT(547),
  [709] = {.count = 1, .reusable = true}, SHIFT(546),
  [711] = {.count = 1, .reusable = true}, SHIFT(545),
  [713] = {.count = 1, .reusable = true}, SHIFT(421),
  [715] = {.count = 1, .reusable = true}, SHIFT(423),
  [717] = {.count = 1, .reusable = true}, SHIFT(552),
  [719] = {.count = 1, .reusable = true}, SHIFT(551),
  [721] = {.count = 1, .reusable = true}, SHIFT(369),
  [723] = {.count = 1, .reusable = false}, SHIFT(74),
  [725] = {.count = 1, .reusable = true}, SHIFT(299),
  [727] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(463),
  [730] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(580),
  [733] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(587),
  [736] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(340),
  [739] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(603),
  [742] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(463),
  [745] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(580),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(587),
  [751] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(340),
  [754] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(603),
  [757] = {.count = 1, .reusable = true}, SHIFT(272),
  [759] = {.count = 1, .reusable = true}, SHIFT(412),
  [761] = {.count = 1, .reusable = true}, SHIFT(579),
  [763] = {.count = 1, .reusable = true}, SHIFT(581),
  [765] = {.count = 1, .reusable = true}, SHIFT(381),
  [767] = {.count = 1, .reusable = false}, SHIFT(167),
  [769] = {.count = 1, .reusable = true}, SHIFT(268),
  [771] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(463),
  [774] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(580),
  [777] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(587),
  [780] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(340),
  [783] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(603),
  [786] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(549),
  [789] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(548),
  [792] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(547),
  [795] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(546),
  [798] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [800] = {.count = 1, .reusable = true}, SHIFT(274),
  [802] = {.count = 1, .reusable = true}, SHIFT(262),
  [804] = {.count = 1, .reusable = true}, SHIFT(271),
  [806] = {.count = 1, .reusable = true}, SHIFT(264),
  [808] = {.count = 1, .reusable = true}, SHIFT(407),
  [810] = {.count = 1, .reusable = true}, SHIFT(577),
  [812] = {.count = 1, .reusable = true}, SHIFT(578),
  [814] = {.count = 1, .reusable = true}, SHIFT(364),
  [816] = {.count = 1, .reusable = false}, SHIFT(146),
  [818] = {.count = 1, .reusable = true}, SHIFT(408),
  [820] = {.count = 1, .reusable = true}, SHIFT(571),
  [822] = {.count = 1, .reusable = true}, SHIFT(570),
  [824] = {.count = 1, .reusable = true}, SHIFT(352),
  [826] = {.count = 1, .reusable = false}, SHIFT(230),
  [828] = {.count = 1, .reusable = false}, SHIFT(531),
  [830] = {.count = 1, .reusable = true}, SHIFT(471),
  [832] = {.count = 1, .reusable = true}, SHIFT(527),
  [834] = {.count = 1, .reusable = true}, SHIFT(526),
  [836] = {.count = 1, .reusable = true}, SHIFT(324),
  [838] = {.count = 1, .reusable = true}, SHIFT(468),
  [840] = {.count = 1, .reusable = true}, SHIFT(567),
  [842] = {.count = 1, .reusable = true}, SHIFT(575),
  [844] = {.count = 1, .reusable = true}, SHIFT(322),
  [846] = {.count = 1, .reusable = false}, SHIFT(124),
  [848] = {.count = 1, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2),
  [850] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(306),
  [853] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(263),
  [856] = {.count = 1, .reusable = false}, REDUCE(aux_sym_copy_repeat1, 2),
  [858] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [860] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [862] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [864] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [866] = {.count = 1, .reusable = true}, SHIFT(337),
  [868] = {.count = 1, .reusable = true}, SHIFT(429),
  [870] = {.count = 1, .reusable = true}, SHIFT(314),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [874] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [878] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [882] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [886] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [890] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [894] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [896] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [898] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [900] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [902] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [904] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [906] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [908] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [910] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [912] = {.count = 1, .reusable = true}, SHIFT(321),
  [914] = {.count = 1, .reusable = true}, REDUCE(sym__from_layer, 3),
  [916] = {.count = 1, .reusable = false}, REDUCE(sym__from_layer, 3),
  [918] = {.count = 1, .reusable = true}, REDUCE(sym__chown, 3),
  [920] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 3),
  [922] = {.count = 1, .reusable = true}, SHIFT(344),
  [924] = {.count = 1, .reusable = true}, SHIFT(449),
  [926] = {.count = 1, .reusable = true}, SHIFT(179),
  [928] = {.count = 1, .reusable = true}, SHIFT(185),
  [930] = {.count = 1, .reusable = true}, SHIFT(445),
  [932] = {.count = 1, .reusable = true}, SHIFT(497),
  [934] = {.count = 1, .reusable = true}, SHIFT(435),
  [936] = {.count = 1, .reusable = true}, SHIFT(501),
  [938] = {.count = 1, .reusable = true}, SHIFT(502),
  [940] = {.count = 1, .reusable = true}, SHIFT(416),
  [942] = {.count = 1, .reusable = true}, SHIFT(149),
  [944] = {.count = 1, .reusable = true}, SHIFT(644),
  [946] = {.count = 1, .reusable = true}, SHIFT(292),
  [948] = {.count = 1, .reusable = false}, SHIFT(582),
  [950] = {.count = 1, .reusable = true}, SHIFT(312),
  [952] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 2),
  [954] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(594),
  [957] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [959] = {.count = 1, .reusable = true}, SHIFT(374),
  [961] = {.count = 1, .reusable = true}, SHIFT(437),
  [963] = {.count = 1, .reusable = true}, SHIFT(470),
  [965] = {.count = 1, .reusable = false}, SHIFT(597),
  [967] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 3),
  [969] = {.count = 1, .reusable = true}, SHIFT(595),
  [971] = {.count = 1, .reusable = true}, SHIFT(594),
  [973] = {.count = 1, .reusable = true}, SHIFT(310),
  [975] = {.count = 1, .reusable = true}, SHIFT(129),
  [977] = {.count = 1, .reusable = true}, SHIFT(623),
  [979] = {.count = 1, .reusable = true}, SHIFT(631),
  [981] = {.count = 1, .reusable = true}, SHIFT(450),
  [983] = {.count = 1, .reusable = true}, SHIFT(643),
  [985] = {.count = 1, .reusable = true}, SHIFT(395),
  [987] = {.count = 1, .reusable = true}, SHIFT(315),
  [989] = {.count = 1, .reusable = true}, SHIFT(67),
  [991] = {.count = 1, .reusable = true}, SHIFT(296),
  [993] = {.count = 1, .reusable = true}, SHIFT(355),
  [995] = {.count = 1, .reusable = true}, SHIFT(401),
  [997] = {.count = 1, .reusable = true}, SHIFT(397),
  [999] = {.count = 1, .reusable = true}, SHIFT(116),
  [1001] = {.count = 1, .reusable = true}, SHIFT(418),
  [1003] = {.count = 1, .reusable = true}, SHIFT(82),
  [1005] = {.count = 1, .reusable = true}, SHIFT(460),
  [1007] = {.count = 1, .reusable = false}, SHIFT(606),
  [1009] = {.count = 1, .reusable = false}, SHIFT(460),
  [1011] = {.count = 1, .reusable = true}, SHIFT(24),
  [1013] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 2),
  [1015] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(595),
  [1018] = {.count = 1, .reusable = true}, SHIFT(448),
  [1020] = {.count = 1, .reusable = true}, SHIFT(487),
  [1022] = {.count = 1, .reusable = true}, SHIFT(489),
  [1024] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2),
  [1026] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(460),
  [1029] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2),
  [1031] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(460),
  [1034] = {.count = 1, .reusable = true}, SHIFT(44),
  [1036] = {.count = 1, .reusable = true}, SHIFT(293),
  [1038] = {.count = 1, .reusable = false}, SHIFT(635),
  [1040] = {.count = 1, .reusable = true}, SHIFT(223),
  [1042] = {.count = 1, .reusable = false}, SHIFT(599),
  [1044] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(450),
  [1047] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(643),
  [1050] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(644),
  [1053] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(315),
  [1056] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(470),
  [1059] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [1061] = {.count = 1, .reusable = false}, SHIFT(565),
  [1063] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 4),
  [1065] = {.count = 1, .reusable = true}, SHIFT(464),
  [1067] = {.count = 1, .reusable = true}, SHIFT(422),
  [1069] = {.count = 1, .reusable = false}, SHIFT(218),
  [1071] = {.count = 1, .reusable = false}, SHIFT(422),
  [1073] = {.count = 1, .reusable = true}, SHIFT(143),
  [1075] = {.count = 1, .reusable = true}, SHIFT(222),
  [1077] = {.count = 1, .reusable = false}, SHIFT(596),
  [1079] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 2),
  [1081] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(310),
  [1084] = {.count = 1, .reusable = true}, SHIFT(284),
  [1086] = {.count = 1, .reusable = false}, SHIFT(553),
  [1088] = {.count = 1, .reusable = true}, SHIFT(83),
  [1090] = {.count = 1, .reusable = false}, SHIFT(611),
  [1092] = {.count = 1, .reusable = true}, SHIFT(85),
  [1094] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [1096] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [1098] = {.count = 1, .reusable = false}, SHIFT(649),
  [1100] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 2),
  [1102] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [1104] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [1106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(374),
  [1109] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [1111] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [1113] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [1115] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [1117] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [1119] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [1121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [1123] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [1125] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [1127] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [1129] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [1131] = {.count = 1, .reusable = true}, SHIFT(427),
  [1133] = {.count = 1, .reusable = true}, SHIFT(426),
  [1135] = {.count = 1, .reusable = true}, SHIFT(192),
  [1137] = {.count = 1, .reusable = true}, SHIFT(451),
  [1139] = {.count = 1, .reusable = true}, SHIFT(452),
  [1141] = {.count = 1, .reusable = true}, SHIFT(182),
  [1143] = {.count = 1, .reusable = true}, SHIFT(430),
  [1145] = {.count = 1, .reusable = true}, SHIFT(522),
  [1147] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [1149] = {.count = 1, .reusable = true}, SHIFT(425),
  [1151] = {.count = 1, .reusable = true}, SHIFT(521),
  [1153] = {.count = 1, .reusable = true}, SHIFT(646),
  [1155] = {.count = 1, .reusable = true}, SHIFT(23),
  [1157] = {.count = 1, .reusable = true}, SHIFT(658),
  [1159] = {.count = 1, .reusable = true}, SHIFT(126),
  [1161] = {.count = 1, .reusable = true}, SHIFT(234),
  [1163] = {.count = 1, .reusable = true}, SHIFT(536),
  [1165] = {.count = 1, .reusable = true}, SHIFT(214),
  [1167] = {.count = 1, .reusable = true}, SHIFT(446),
  [1169] = {.count = 1, .reusable = true}, SHIFT(474),
  [1171] = {.count = 1, .reusable = false}, SHIFT(535),
  [1173] = {.count = 1, .reusable = false}, SHIFT(474),
  [1175] = {.count = 1, .reusable = true}, SHIFT(534),
  [1177] = {.count = 1, .reusable = true}, SHIFT(87),
  [1179] = {.count = 1, .reusable = true}, SHIFT(642),
  [1181] = {.count = 1, .reusable = true}, SHIFT(61),
  [1183] = {.count = 1, .reusable = true}, SHIFT(637),
  [1185] = {.count = 1, .reusable = true}, SHIFT(156),
  [1187] = {.count = 1, .reusable = true}, SHIFT(455),
  [1189] = {.count = 1, .reusable = true}, SHIFT(290),
  [1191] = {.count = 1, .reusable = true}, SHIFT(651),
  [1193] = {.count = 1, .reusable = true}, SHIFT(115),
  [1195] = {.count = 1, .reusable = true}, SHIFT(442),
  [1197] = {.count = 1, .reusable = true}, SHIFT(529),
  [1199] = {.count = 1, .reusable = true}, SHIFT(654),
  [1201] = {.count = 1, .reusable = true}, SHIFT(343),
  [1203] = {.count = 1, .reusable = true}, SHIFT(197),
  [1205] = {.count = 1, .reusable = true}, SHIFT(475),
  [1207] = {.count = 1, .reusable = true}, SHIFT(410),
  [1209] = {.count = 1, .reusable = true}, SHIFT(432),
  [1211] = {.count = 1, .reusable = true}, SHIFT(183),
  [1213] = {.count = 1, .reusable = true}, SHIFT(479),
  [1215] = {.count = 1, .reusable = true}, SHIFT(447),
  [1217] = {.count = 1, .reusable = true}, SHIFT(439),
  [1219] = {.count = 1, .reusable = true}, SHIFT(650),
  [1221] = {.count = 1, .reusable = true}, SHIFT(419),
  [1223] = {.count = 1, .reusable = true}, SHIFT(461),
  [1225] = {.count = 1, .reusable = true}, SHIFT(537),
  [1227] = {.count = 1, .reusable = true}, SHIFT(440),
  [1229] = {.count = 1, .reusable = true}, SHIFT(467),
  [1231] = {.count = 1, .reusable = true}, REDUCE(aux_sym__json_array_item_double, 2),
  [1233] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_array_item_double, 2), SHIFT_REPEAT(439),
  [1236] = {.count = 1, .reusable = true}, SHIFT(656),
  [1238] = {.count = 1, .reusable = true}, SHIFT(65),
  [1240] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arg_default_repeat2, 2),
  [1242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arg_default_repeat2, 2), SHIFT_REPEAT(443),
  [1245] = {.count = 1, .reusable = true}, SHIFT(438),
  [1247] = {.count = 1, .reusable = true}, SHIFT(216),
  [1249] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arg_default_repeat1, 2),
  [1251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arg_default_repeat1, 2), SHIFT_REPEAT(446),
  [1254] = {.count = 1, .reusable = true}, REDUCE(aux_sym__json_array_item_single, 2),
  [1256] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_array_item_single, 2), SHIFT_REPEAT(447),
  [1259] = {.count = 1, .reusable = true}, SHIFT(657),
  [1261] = {.count = 1, .reusable = true}, SHIFT(386),
  [1263] = {.count = 1, .reusable = true}, SHIFT(500),
  [1265] = {.count = 1, .reusable = true}, SHIFT(434),
  [1267] = {.count = 1, .reusable = true}, SHIFT(433),
  [1269] = {.count = 1, .reusable = true}, SHIFT(180),
  [1271] = {.count = 1, .reusable = true}, SHIFT(655),
  [1273] = {.count = 1, .reusable = true}, SHIFT(295),
  [1275] = {.count = 1, .reusable = true}, SHIFT(415),
  [1277] = {.count = 1, .reusable = true}, SHIFT(88),
  [1279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(432),
  [1282] = {.count = 1, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2),
  [1284] = {.count = 1, .reusable = true}, SHIFT(652),
  [1286] = {.count = 1, .reusable = true}, SHIFT(393),
  [1288] = {.count = 1, .reusable = true}, SHIFT(466),
  [1290] = {.count = 1, .reusable = false}, SHIFT(588),
  [1292] = {.count = 1, .reusable = false}, SHIFT(466),
  [1294] = {.count = 1, .reusable = true}, SHIFT(465),
  [1296] = {.count = 1, .reusable = true}, SHIFT(653),
  [1298] = {.count = 1, .reusable = true}, SHIFT(402),
  [1300] = {.count = 1, .reusable = true}, SHIFT(443),
  [1302] = {.count = 1, .reusable = true}, SHIFT(220),
  [1304] = {.count = 1, .reusable = true}, SHIFT(436),
  [1306] = {.count = 1, .reusable = true}, REDUCE(sym_json_array_item, 3),
  [1308] = {.count = 1, .reusable = true}, SHIFT(538),
  [1310] = {.count = 1, .reusable = true}, SHIFT(379),
  [1312] = {.count = 1, .reusable = true}, SHIFT(377),
  [1314] = {.count = 1, .reusable = true}, SHIFT(530),
  [1316] = {.count = 1, .reusable = true}, SHIFT(508),
  [1318] = {.count = 1, .reusable = true}, SHIFT(498),
  [1320] = {.count = 1, .reusable = true}, SHIFT(485),
  [1322] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 1),
  [1324] = {.count = 1, .reusable = true}, SHIFT(424),
  [1326] = {.count = 1, .reusable = true}, SHIFT(480),
  [1328] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(96),
  [1331] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1333] = {.count = 1, .reusable = true}, SHIFT(215),
  [1335] = {.count = 1, .reusable = true}, REDUCE(sym_label_key, 1),
  [1337] = {.count = 1, .reusable = true}, SHIFT(302),
  [1339] = {.count = 1, .reusable = true}, REDUCE(sym_json_array_item, 2),
  [1341] = {.count = 1, .reusable = true}, SHIFT(169),
  [1343] = {.count = 1, .reusable = true}, SHIFT(375),
  [1345] = {.count = 1, .reusable = true}, SHIFT(371),
  [1347] = {.count = 1, .reusable = true}, REDUCE(sym_label_key, 2),
  [1349] = {.count = 1, .reusable = true}, SHIFT(174),
  [1351] = {.count = 1, .reusable = true}, SHIFT(29),
  [1353] = {.count = 1, .reusable = true}, SHIFT(21),
  [1355] = {.count = 1, .reusable = true}, SHIFT(267),
  [1357] = {.count = 1, .reusable = true}, SHIFT(12),
  [1359] = {.count = 1, .reusable = true}, SHIFT(517),
  [1361] = {.count = 1, .reusable = true}, SHIFT(269),
  [1363] = {.count = 1, .reusable = true}, SHIFT(17),
  [1365] = {.count = 1, .reusable = true}, SHIFT(16),
  [1367] = {.count = 1, .reusable = true}, SHIFT(270),
  [1369] = {.count = 1, .reusable = true}, SHIFT(162),
  [1371] = {.count = 1, .reusable = true}, SHIFT(114),
  [1373] = {.count = 1, .reusable = true}, SHIFT(73),
  [1375] = {.count = 1, .reusable = true}, SHIFT(300),
  [1377] = {.count = 1, .reusable = true}, SHIFT(556),
  [1379] = {.count = 1, .reusable = true}, SHIFT(555),
  [1381] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 1),
  [1383] = {.count = 1, .reusable = true}, SHIFT(303),
  [1385] = {.count = 1, .reusable = true}, SHIFT(368),
  [1387] = {.count = 1, .reusable = true}, SHIFT(69),
  [1389] = {.count = 1, .reusable = true}, SHIFT(199),
  [1391] = {.count = 1, .reusable = true}, SHIFT(259),
  [1393] = {.count = 1, .reusable = true}, SHIFT(593),
  [1395] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 3),
  [1397] = {.count = 1, .reusable = true}, SHIFT(106),
  [1399] = {.count = 1, .reusable = true}, SHIFT(107),
  [1401] = {.count = 1, .reusable = true}, SHIFT(308),
  [1403] = {.count = 1, .reusable = true}, SHIFT(505),
  [1405] = {.count = 1, .reusable = true}, SHIFT(504),
  [1407] = {.count = 1, .reusable = true}, SHIFT(484),
  [1409] = {.count = 1, .reusable = true}, SHIFT(481),
  [1411] = {.count = 1, .reusable = true}, SHIFT(108),
  [1413] = {.count = 1, .reusable = true}, SHIFT(515),
  [1415] = {.count = 1, .reusable = true}, SHIFT(516),
  [1417] = {.count = 1, .reusable = true}, SHIFT(286),
  [1419] = {.count = 1, .reusable = true}, SHIFT(583),
  [1421] = {.count = 1, .reusable = true}, SHIFT(317),
  [1423] = {.count = 1, .reusable = true}, SHIFT(318),
  [1425] = {.count = 1, .reusable = true}, SHIFT(319),
  [1427] = {.count = 1, .reusable = true}, SHIFT(486),
  [1429] = {.count = 1, .reusable = true}, SHIFT(540),
  [1431] = {.count = 1, .reusable = true}, SHIFT(261),
  [1433] = {.count = 1, .reusable = true}, SHIFT(30),
  [1435] = {.count = 1, .reusable = true}, SHIFT(390),
  [1437] = {.count = 1, .reusable = true}, SHIFT(385),
  [1439] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 5),
  [1441] = {.count = 1, .reusable = true}, SHIFT(391),
  [1443] = {.count = 1, .reusable = true}, SHIFT(562),
  [1445] = {.count = 1, .reusable = true}, SHIFT(39),
  [1447] = {.count = 1, .reusable = true}, SHIFT(636),
  [1449] = {.count = 1, .reusable = true}, SHIFT(544),
  [1451] = {.count = 1, .reusable = true}, SHIFT(550),
  [1453] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1455] = {.count = 1, .reusable = true}, SHIFT(327),
  [1457] = {.count = 1, .reusable = true}, SHIFT(309),
  [1459] = {.count = 1, .reusable = true}, SHIFT(509),
  [1461] = {.count = 1, .reusable = true}, SHIFT(329),
  [1463] = {.count = 1, .reusable = true}, SHIFT(629),
  [1465] = {.count = 1, .reusable = true}, SHIFT(627),
  [1467] = {.count = 1, .reusable = true}, SHIFT(621),
  [1469] = {.count = 1, .reusable = true}, SHIFT(573),
  [1471] = {.count = 1, .reusable = true}, SHIFT(619),
  [1473] = {.count = 1, .reusable = true}, SHIFT(265),
  [1475] = {.count = 1, .reusable = true}, SHIFT(514),
  [1477] = {.count = 1, .reusable = true}, SHIFT(25),
  [1479] = {.count = 1, .reusable = true}, SHIFT(27),
  [1481] = {.count = 1, .reusable = true}, SHIFT(574),
  [1483] = {.count = 1, .reusable = true}, SHIFT(202),
  [1485] = {.count = 1, .reusable = true}, SHIFT(260),
  [1487] = {.count = 1, .reusable = true}, SHIFT(511),
  [1489] = {.count = 1, .reusable = true}, SHIFT(561),
  [1491] = {.count = 1, .reusable = true}, SHIFT(96),
  [1493] = {.count = 1, .reusable = true}, SHIFT(266),
  [1495] = {.count = 1, .reusable = true}, SHIFT(564),
  [1497] = {.count = 1, .reusable = true}, SHIFT(566),
  [1499] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 4),
  [1501] = {.count = 1, .reusable = true}, SHIFT(136),
  [1503] = {.count = 1, .reusable = true}, SHIFT(237),
  [1505] = {.count = 1, .reusable = true}, SHIFT(47),
  [1507] = {.count = 1, .reusable = true}, SHIFT(51),
  [1509] = {.count = 1, .reusable = true}, SHIFT(57),
  [1511] = {.count = 1, .reusable = true}, SHIFT(291),
  [1513] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1515] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1517] = {.count = 1, .reusable = true}, SHIFT(81),
  [1519] = {.count = 1, .reusable = true}, SHIFT(66),
  [1521] = {.count = 1, .reusable = true}, SHIFT(389),
  [1523] = {.count = 1, .reusable = true}, SHIFT(388),
  [1525] = {.count = 1, .reusable = true}, SHIFT(387),
  [1527] = {.count = 1, .reusable = true}, SHIFT(226),
  [1529] = {.count = 1, .reusable = true}, SHIFT(26),
  [1531] = {.count = 1, .reusable = true}, SHIFT(127),
  [1533] = {.count = 1, .reusable = true}, SHIFT(133),
  [1535] = {.count = 1, .reusable = true}, SHIFT(122),
  [1537] = {.count = 1, .reusable = true}, SHIFT(77),
  [1539] = {.count = 1, .reusable = true}, SHIFT(417),
  [1541] = {.count = 1, .reusable = true}, SHIFT(76),
  [1543] = {.count = 1, .reusable = true}, SHIFT(117),
  [1545] = {.count = 1, .reusable = true}, SHIFT(75),
  [1547] = {.count = 1, .reusable = true}, SHIFT(403),
  [1549] = {.count = 1, .reusable = true}, SHIFT(605),
  [1551] = {.count = 1, .reusable = true}, SHIFT(400),
  [1553] = {.count = 1, .reusable = true}, SHIFT(62),
  [1555] = {.count = 1, .reusable = true}, SHIFT(357),
  [1557] = {.count = 1, .reusable = true}, SHIFT(63),
  [1559] = {.count = 1, .reusable = true}, SHIFT(294),
  [1561] = {.count = 1, .reusable = true}, SHIFT(60),
  [1563] = {.count = 1, .reusable = true}, SHIFT(45),
  [1565] = {.count = 1, .reusable = true}, SHIFT(604),
  [1567] = {.count = 1, .reusable = true}, SHIFT(396),
  [1569] = {.count = 1, .reusable = true}, SHIFT(131),
  [1571] = {.count = 1, .reusable = true}, SHIFT(280),
  [1573] = {.count = 1, .reusable = true}, SHIFT(362),
  [1575] = {.count = 1, .reusable = true}, SHIFT(585),
  [1577] = {.count = 1, .reusable = true}, SHIFT(600),
  [1579] = {.count = 1, .reusable = true}, SHIFT(601),
  [1581] = {.count = 1, .reusable = true}, SHIFT(586),
  [1583] = {.count = 1, .reusable = true}, SHIFT(346),
  [1585] = {.count = 1, .reusable = true}, SHIFT(608),
  [1587] = {.count = 1, .reusable = true}, SHIFT(609),
  [1589] = {.count = 1, .reusable = true}, SHIFT(589),
  [1591] = {.count = 1, .reusable = true}, SHIFT(339),
  [1593] = {.count = 1, .reusable = true}, SHIFT(614),
  [1595] = {.count = 1, .reusable = true}, SHIFT(615),
  [1597] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 3),
  [1599] = {.count = 1, .reusable = true}, SHIFT(336),
  [1601] = {.count = 1, .reusable = true}, SHIFT(335),
  [1603] = {.count = 1, .reusable = true}, SHIFT(334),
  [1605] = {.count = 1, .reusable = true}, SHIFT(333),
  [1607] = {.count = 1, .reusable = true}, SHIFT(332),
  [1609] = {.count = 1, .reusable = true}, SHIFT(331),
  [1611] = {.count = 1, .reusable = true}, SHIFT(330),
  [1613] = {.count = 1, .reusable = true}, SHIFT(328),
  [1615] = {.count = 1, .reusable = true}, SHIFT(325),
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
