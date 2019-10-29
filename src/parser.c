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
#define STATE_COUNT 634
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
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(863);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(335);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(331);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(327);
      if (lookahead == '[') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '{') ADVANCE(1116);
      if (lookahead == '}') ADVANCE(1117);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      if (lookahead != 0) ADVANCE(928);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(863);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(938);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(972);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(974);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(993);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(944);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(929);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(930);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(975);
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
      if (lookahead == '\\') ADVANCE(272);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(928);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(863);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(938);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(972);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(974);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(993);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(944);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(929);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(930);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(975);
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
      if (lookahead == '\\') ADVANCE(272);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(862);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(928);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(215);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(159);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(200);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(202);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(215);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(159);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(200);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(202);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(215);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(159);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(200);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(202);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1026);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1029);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1030);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1034);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1027);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1024);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1025);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1031);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1036);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1028);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1035);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1032);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1033);
      if (lookahead == '\\') ADVANCE(268);
      if (lookahead == '`') ADVANCE(73);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1018);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0) ADVANCE(1023);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(517);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(468);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(454);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(499);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(521);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(505);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(507);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(427);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(517);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(468);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(454);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(499);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(521);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(505);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(507);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(427);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(517);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(468);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(454);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(499);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(521);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(505);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(507);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(428);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(761);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(795);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(797);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(816);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(767);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(752);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(753);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(798);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(827);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(777);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(820);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(804);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(806);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(433);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(761);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(795);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(797);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(816);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(767);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(752);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(753);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(798);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(827);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(777);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(820);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(804);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(806);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(433);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(761);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(795);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(797);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(816);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(767);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(752);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(753);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(798);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(827);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(777);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(820);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(804);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(806);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(434);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(632);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(616);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(567);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(552);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(553);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(598);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(627);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(620);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(604);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(606);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(429);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(632);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(616);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(567);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(552);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(553);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(598);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(627);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(620);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(604);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(606);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(429);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(632);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(616);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(567);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(552);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(553);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(598);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(627);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(620);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(604);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(606);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(430);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(633);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(695);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(716);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(667);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(652);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(653);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(698);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(727);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(677);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(720);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(704);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(706);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(633);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '@') ADVANCE(300);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(695);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(716);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(667);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(652);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(653);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(698);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(727);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(677);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(720);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(704);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(706);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(633);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(695);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(697);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(716);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(667);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(652);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(653);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(698);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(727);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(677);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(720);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(704);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(706);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(432);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '\n') ADVANCE(1131);
      if (lookahead == '#') ADVANCE(1162);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(215);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(159);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(200);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(202);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1129);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(274);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '%') ADVANCE(373);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(159);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(200);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(202);
      if (lookahead == '[') ADVANCE(232);
      if (lookahead == '}') ADVANCE(1117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(1130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(232);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(233);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(234);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(235);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(236);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(1131);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(1127);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(342);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(1127);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(1127);
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1134);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(1127);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(351);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(352);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(1127);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(349);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(350);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(1127);
      if (lookahead == '#') ADVANCE(1124);
      if (lookahead == '%') ADVANCE(90);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1124);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(1124);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(1127);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(356);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(1127);
      if (lookahead == '#') ADVANCE(353);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(354);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(355);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(1127);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(340);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(1127);
      if (lookahead == '#') ADVANCE(1123);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(1123);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(1127);
      if (lookahead == '#') ADVANCE(1122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(1122);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(1127);
      if (lookahead == '#') ADVANCE(1119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1119);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(395);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(270);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(255);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(863);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '-') ADVANCE(867);
      if (lookahead == '[') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0) ADVANCE(928);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(863);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '[') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0) ADVANCE(928);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(860);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(1021);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 56:
      if (lookahead == '"') ADVANCE(1045);
      if (lookahead == '\\') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead == '\r' ||
          lookahead == '`') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 57:
      if (lookahead == '"') ADVANCE(1045);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead == '\r' ||
          lookahead == '`') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1021);
      END_STATE();
    case 58:
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == '\\') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == '[') ADVANCE(1040);
      if (lookahead == '\\') ADVANCE(268);
      if (lookahead == '`') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0) ADVANCE(1023);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == '\\') ADVANCE(268);
      if (lookahead == '`') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0) ADVANCE(1023);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(89);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(282);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(188);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      if (lookahead == '}') ADVANCE(1117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(856);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(1153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(533);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(751);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(632);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(633);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 72:
      if (lookahead == '#') ADVANCE(1039);
      END_STATE();
    case 73:
      if (lookahead == '#') ADVANCE(1039);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 74:
      if (lookahead == '#') ADVANCE(411);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 75:
      if (lookahead == '#') ADVANCE(411);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == 's') ADVANCE(416);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 76:
      if (lookahead == '#') ADVANCE(345);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0 &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(346);
      END_STATE();
    case 77:
      if (lookahead == '#') ADVANCE(1037);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == '#') ADVANCE(1121);
      if (lookahead == '{') ADVANCE(1115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(1121);
      END_STATE();
    case 79:
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 80:
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '\'') ADVANCE(1051);
      if (lookahead == '\\') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == '\r' ||
          lookahead == '`') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1037);
      END_STATE();
    case 82:
      if (lookahead == '\'') ADVANCE(1051);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == '\r' ||
          lookahead == '`') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1037);
      END_STATE();
    case 83:
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      if (lookahead == '+') ADVANCE(1120);
      if (lookahead == '-') ADVANCE(1118);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(928);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(116);
      END_STATE();
    case 88:
      if (lookahead == '/') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == '>') ADVANCE(380);
      END_STATE();
    case 90:
      if (lookahead == '>') ADVANCE(380);
      if (lookahead != 0) ADVANCE(1126);
      END_STATE();
    case 91:
      if (lookahead == '>') ADVANCE(380);
      if (lookahead != 0) ADVANCE(1125);
      END_STATE();
    case 92:
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1039);
      END_STATE();
    case 93:
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(1039);
      END_STATE();
    case 94:
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(851);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(848);
      END_STATE();
    case 111:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(852);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(850);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 129:
      if (lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 130:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 131:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead == '=') ADVANCE(277);
      END_STATE();
    case 132:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1039);
      END_STATE();
    case 133:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      END_STATE();
    case 134:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(379);
      END_STATE();
    case 135:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(845);
      END_STATE();
    case 136:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(843);
      END_STATE();
    case 137:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(382);
      END_STATE();
    case 138:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(384);
      END_STATE();
    case 139:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 141:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 142:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 143:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 144:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(227);
      END_STATE();
    case 145:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 146:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 147:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 148:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 149:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(853);
      END_STATE();
    case 153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 154:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 155:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 156:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 166:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(857);
      END_STATE();
    case 167:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 168:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(196);
      END_STATE();
    case 169:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 170:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      END_STATE();
    case 171:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(158);
      END_STATE();
    case 172:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 176:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 177:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 179:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(154);
      END_STATE();
    case 180:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(254);
      END_STATE();
    case 181:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 182:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 183:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 184:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 185:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 186:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 187:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 188:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 189:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(243);
      END_STATE();
    case 190:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(153);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 191:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(211);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 197:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 198:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 199:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 206:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 207:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 208:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(405);
      END_STATE();
    case 209:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(404);
      END_STATE();
    case 210:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 211:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 212:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(206);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 219:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      END_STATE();
    case 220:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 221:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      END_STATE();
    case 222:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(240);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 226:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 227:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 228:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 229:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(242);
      END_STATE();
    case 230:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(212);
      END_STATE();
    case 231:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(399);
      END_STATE();
    case 232:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == ',') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(1164);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(24);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead == ',') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(1164);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(28);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(30);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 238:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 241:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 242:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 243:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 244:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 245:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 246:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 247:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 248:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 249:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 250:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(324);
      END_STATE();
    case 251:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 252:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 253:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(317);
      END_STATE();
    case 254:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 255:
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(1164);
      END_STATE();
    case 256:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1021);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(1039);
      END_STATE();
    case 257:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 258:
      if (lookahead == '\'' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1037);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(1039);
      END_STATE();
    case 259:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 260:
      if (lookahead == '\'' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(859);
      END_STATE();
    case 262:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 263:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(263);
      END_STATE();
    case 264:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(394);
      END_STATE();
    case 265:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(60);
      END_STATE();
    case 266:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(340);
      END_STATE();
    case 267:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(337);
      END_STATE();
    case 268:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 269:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`') ADVANCE(1039);
      END_STATE();
    case 270:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 271:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1039);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 272:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(928);
      END_STATE();
    case 273:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'b' &&
          lookahead != 'f' &&
          lookahead != 'n' &&
          lookahead != 'r' &&
          lookahead != 't' &&
          lookahead != 'u') ADVANCE(1039);
      if (lookahead == '\'' ||
          lookahead == '/' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(1037);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_escape_directive);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_escape_directive);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_escape_directive);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_env_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_from_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_from_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_run_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_arg_default_token1);
      if (lookahead == '\\') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_arg_default_token2);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_arg_default_token2);
      if (lookahead == '\\') ADVANCE(1151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_arg_default_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_DASH_DASHchown_EQ);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__from_layer_token1);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == '%') ADVANCE(375);
      if (lookahead == '<') ADVANCE(1149);
      if (lookahead == '{') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_from_layer_token1);
      if (lookahead == '$') ADVANCE(347);
      if (lookahead == '%') ADVANCE(375);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '{') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_from_layer_token2);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_from_layer_token3);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(348);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '$') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(377);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '%') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(138);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(355);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '<') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(369);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_from_layer_token4);
      if (lookahead == '{') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_from_layer_token5);
      if (lookahead == '}') ADVANCE(358);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(361);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_from_layer_token6);
      if (lookahead == '}') ADVANCE(362);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_from_layer_token7);
      if (lookahead == '}') ADVANCE(365);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(367);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_from_layer_token8);
      if (lookahead == '}') ADVANCE(368);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_from_layer_token9);
      if (lookahead == '%') ADVANCE(370);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_from_layer_token10);
      if (lookahead == '%') ADVANCE(372);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_from_layer_token11);
      if (lookahead == '%') ADVANCE(374);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_from_layer_token12);
      if (lookahead == '%') ADVANCE(376);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_from_layer_token13);
      if (lookahead == '=') ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_from_layer_token14);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_from_layer_token15);
      if (lookahead == '=') ADVANCE(381);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_from_layer_token16);
      if (lookahead == '=') ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '"') ADVANCE(386);
      if (('-' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\n') ADVANCE(1141);
      if (lookahead == '"') ADVANCE(1139);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(1161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1140);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\n') ADVANCE(1141);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(1157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1139);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(1136);
      if (lookahead == '\'') ADVANCE(1140);
      if (lookahead == '\\') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(1139);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(1161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(1155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(1157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_env_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(873);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '2') ADVANCE(408);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '5') ADVANCE(409);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '6') ADVANCE(410);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == ':') ADVANCE(301);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(1148);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(419);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == 'h') ADVANCE(414);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == 'l') ADVANCE(413);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(412);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == 'o') ADVANCE(421);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(417);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(418);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(425);
      if (lookahead == '%') ADVANCE(839);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '{') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(423);
      END_STATE();
    case 424:
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
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(427);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(428);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(429);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(430);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(431);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(432);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(433);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(434);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(435);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(436);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(437);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(439);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(440);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(441);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(442);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(444);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(446);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(447);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(450);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(452);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(463);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(469);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(464);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
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
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(534);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(535);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(536);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(538);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(539);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(540);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(541);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(542);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(543);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(545);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(546);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(549);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(551);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(562);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(568);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(563);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(624);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
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
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(615);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(632);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(1147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(634);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(635);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(636);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(638);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(639);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(640);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(641);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(642);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(643);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(644);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(645);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(646);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(648);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(649);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(650);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(651);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(662);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(668);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(663);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(724);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(715);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
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
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(732);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(733);
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
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(734);
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
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(735);
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
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(737);
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
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(738);
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
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(739);
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
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(740);
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
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(742);
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
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(743);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(744);
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
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(745);
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
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(746);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(748);
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
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(749);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(750);
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
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(780);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(787);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(781);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(791);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(828);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(770);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(786);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(778);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(762);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(774);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(733);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(735);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(784);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(745);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(759);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(792);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(734);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(801);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(760);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(768);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(807);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(766);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(775);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(793);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(800);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(818);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(764);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(750);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(823);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(829);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(741);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(742);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(749);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(790);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(765);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(739);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(763);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(810);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(772);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(824);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(812);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(757);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(826);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(825);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(756);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(737);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(773);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(788);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(794);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(814);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(811);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(822);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(830);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(821);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(808);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(809);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(785);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(831);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(805);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(740);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(746);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(748);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(769);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(779);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(771);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(776);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(736);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(747);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(755);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(802);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(782);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(796);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(738);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(813);
      if (lookahead == '{') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(751);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(832);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(833);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(835);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(836);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '%') ADVANCE(838);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '%') ADVANCE(840);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '=') ADVANCE(842);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '=') ADVANCE(844);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(849);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretries);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__hc_command_token1);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(855);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (lookahead == '+') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(859);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ':') ADVANCE(860);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(862);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '$') ADVANCE(1011);
      if (lookahead == '\\') ADVANCE(864);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(1153);
      if (lookahead != 0) ADVANCE(863);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(863);
      if (lookahead == '$') ADVANCE(1011);
      if (lookahead == '\\') ADVANCE(864);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1153);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '-') ADVANCE(881);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '-') ADVANCE(895);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '-') ADVANCE(874);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '/') ADVANCE(846);
      if (lookahead == '\\') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '=') ADVANCE(344);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '=') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'a') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'a') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'c') ADVANCE(882);
      if (lookahead == 'f') ADVANCE(898);
      if (lookahead == 'i') ADVANCE(889);
      if (lookahead == 'r') ADVANCE(877);
      if (lookahead == 's') ADVANCE(902);
      if (lookahead == 't') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'c') ADVANCE(882);
      if (lookahead == 'f') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'd') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'e') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'e') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'e') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'e') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'f') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'h') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'i') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'i') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'i') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'l') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'm') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'm') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'n') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'n') ADVANCE(870);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'o') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'o') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'o') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'o') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'p') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'r') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'r') ADVANCE(884);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'r') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'r') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'r') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 's') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 't') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 't') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 't') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 't') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 't') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'u') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'v') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == 'w') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(935);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(957);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(964);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(958);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(968);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1005);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(947);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(963);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(955);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(939);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(951);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(910);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(912);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(961);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(922);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(931);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(969);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(994);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(966);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(920);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(921);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(996);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(911);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(978);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(937);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(945);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(984);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(943);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(952);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(976);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(980);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(970);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(977);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(995);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(941);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(927);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1000);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1006);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(918);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(919);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(926);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(967);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(942);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(916);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(940);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(987);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(949);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1001);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(989);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(934);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1003);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1002);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(933);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(914);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(950);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(965);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(971);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(991);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(988);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(999);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(960);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1007);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(998);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(985);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(986);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(962);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1008);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(982);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(917);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(923);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(925);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(946);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(956);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(948);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(953);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(992);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(913);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(924);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(932);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(979);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(959);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(973);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(915);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(990);
      if (lookahead == '\\') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(928);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(928);
      if (lookahead == '$') ADVANCE(1010);
      if (lookahead == '\\') ADVANCE(1009);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_path_token2);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '"') ADVANCE(1153);
      if (lookahead == '$') ADVANCE(1017);
      if (lookahead != 0) ADVANCE(1012);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '#') ADVANCE(1012);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1015);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '#') ADVANCE(1012);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1015);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_path_token3);
      if (lookahead == '$') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(1015);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_path_token4);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_path_token4);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1020);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1019);
      if (lookahead != 0) ADVANCE(1053);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1020);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1019);
      if (lookahead != 0) ADVANCE(1053);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1020);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1019);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1046);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1022);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '"') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1022);
      if (lookahead == '\\') ADVANCE(257);
      if (lookahead == '`') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1021);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1060);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1075);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1063);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1070);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1056);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1067);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1096);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1063);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1098);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1114);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1100);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1059);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1085);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1103);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1094);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1068);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1089);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\'') ADVANCE(1052);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1054);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1055);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1038);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1041);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1042);
      if (lookahead == '"') ADVANCE(1022);
      if (lookahead == '#') ADVANCE(1053);
      if (lookahead == '\'') ADVANCE(1054);
      if (lookahead == ',') ADVANCE(1044);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1164);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1041);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1042);
      if (lookahead == '"') ADVANCE(1022);
      if (lookahead == '\'') ADVANCE(1054);
      if (lookahead == ',') ADVANCE(1044);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1164);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1041);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1042);
      if (lookahead == '"') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(1053);
      if (lookahead == '\'') ADVANCE(1054);
      if (lookahead == ',') ADVANCE(1044);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == ']') ADVANCE(1164);
      if (lookahead == '`') ADVANCE(72);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1043);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1044);
      if (lookahead == '"') ADVANCE(1022);
      if (lookahead == '\'') ADVANCE(1054);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1043);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1044);
      if (lookahead == '"') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1053);
      if (lookahead == '\'') ADVANCE(1054);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == '`') ADVANCE(72);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1045);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1046);
      if (lookahead == ',') ADVANCE(1048);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == ']') ADVANCE(1164);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1045);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(1053);
      if (lookahead == ',') ADVANCE(1048);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == ']') ADVANCE(1164);
      if (lookahead == '`') ADVANCE(72);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1047);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1048);
      if (lookahead == '"') ADVANCE(1022);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1047);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1048);
      if (lookahead == '"') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '`') ADVANCE(72);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1049);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1050);
      if (lookahead == '\'') ADVANCE(1054);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1049);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1053);
      if (lookahead == '\'') ADVANCE(1054);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '`') ADVANCE(72);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1051);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1052);
      if (lookahead == ',') ADVANCE(1050);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == ']') ADVANCE(1164);
      if (lookahead == '#' ||
          lookahead == '`') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1053);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1051);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '`') ADVANCE(1053);
      if (lookahead == ',') ADVANCE(1050);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == ']') ADVANCE(1164);
      if (lookahead == '`') ADVANCE(72);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1054);
      if (lookahead == '\'') ADVANCE(1052);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1037);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(1053);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1055);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1038);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1053);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1084);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1053);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1083);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(1053);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1076);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'b') ADVANCE(1053);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1110);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'b') ADVANCE(1053);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1069);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'c') ADVANCE(1053);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1080);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'c') ADVANCE(1053);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1073);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'd') ADVANCE(1053);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'd') ADVANCE(1053);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1077);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1053);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1053);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1061);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1053);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1086);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1053);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1102);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'e') ADVANCE(1053);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1083);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'g') ADVANCE(1053);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'g') ADVANCE(1053);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1093);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'h') ADVANCE(1053);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1062);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'h') ADVANCE(1053);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1066);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1053);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1071);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1053);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1091);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1053);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1090);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1053);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1102);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1053);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1082);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'i') ADVANCE(1053);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1092);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'k') ADVANCE(1053);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'k') ADVANCE(1053);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1064);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1053);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1063);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1053);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1053);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1108);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1053);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1111);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'l') ADVANCE(1053);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1083);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'm') ADVANCE(1053);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'm') ADVANCE(1053);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1065);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1053);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1053);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1068);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1053);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1109);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1053);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1107);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'n') ADVANCE(1053);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1057);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1053);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1087);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1053);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1106);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1053);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1099);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'o') ADVANCE(1053);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1079);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1053);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1112);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1053);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1105);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1053);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1095);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'p') ADVANCE(1053);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1097);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'r') ADVANCE(1053);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'r') ADVANCE(1053);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1081);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'r') ADVANCE(1053);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1113);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 's') ADVANCE(1053);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1074);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 's') ADVANCE(1053);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1065);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't') ADVANCE(1053);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't') ADVANCE(1053);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1072);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 't') ADVANCE(1053);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1058);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'u') ADVANCE(1053);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1078);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'u') ADVANCE(1053);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1088);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'y') ADVANCE(1053);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != 'y') ADVANCE(1053);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1101);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1114:
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
          lookahead != 'v') ADVANCE(1053);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1104);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1055);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '`') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1039);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(360);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(1119);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 1121:
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
          lookahead != '}') ADVANCE(1121);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(1122);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1123);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(1124);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(1131);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__blank_line);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1130);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(1132);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(1130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1133);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1134);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(1156);
      if (lookahead != 0) ADVANCE(1136);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == '\\') ADVANCE(270);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == '\\') ADVANCE(1158);
      if (lookahead != 0) ADVANCE(1139);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '\\') ADVANCE(1160);
      if (lookahead != 0) ADVANCE(1140);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == 'a') ADVANCE(1145);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == 'c') ADVANCE(1142);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == 'e') ADVANCE(1163);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == 'p') ADVANCE(1144);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == 's') ADVANCE(1143);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(845);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(843);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(382);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(384);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1153);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1153);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1153);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1138);
      if (lookahead == ' ') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1153);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1153);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1137);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1140);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(1139);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(1159);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1140);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1141);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '\\') ADVANCE(1158);
      if (lookahead != 0) ADVANCE(1139);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1141);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(1160);
      if (lookahead != 0) ADVANCE(1140);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(393);
      if (lookahead == '\\') ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(1140);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1162);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == 'e') ADVANCE(1146);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1163);
      if (lookahead == '\n') ADVANCE(1135);
      if (lookahead == '=') ADVANCE(275);
      if (lookahead != 0) ADVANCE(1153);
      END_STATE();
    case 1164:
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
  [12] = {.lex_state = 13, .external_lex_state = 3},
  [13] = {.lex_state = 7, .external_lex_state = 3},
  [14] = {.lex_state = 7, .external_lex_state = 3},
  [15] = {.lex_state = 10, .external_lex_state = 3},
  [16] = {.lex_state = 13, .external_lex_state = 3},
  [17] = {.lex_state = 16, .external_lex_state = 3},
  [18] = {.lex_state = 16, .external_lex_state = 3},
  [19] = {.lex_state = 16, .external_lex_state = 3},
  [20] = {.lex_state = 13, .external_lex_state = 3},
  [21] = {.lex_state = 7, .external_lex_state = 3},
  [22] = {.lex_state = 16, .external_lex_state = 3},
  [23] = {.lex_state = 7, .external_lex_state = 3},
  [24] = {.lex_state = 7, .external_lex_state = 3},
  [25] = {.lex_state = 10, .external_lex_state = 3},
  [26] = {.lex_state = 13, .external_lex_state = 3},
  [27] = {.lex_state = 7, .external_lex_state = 3},
  [28] = {.lex_state = 8, .external_lex_state = 3},
  [29] = {.lex_state = 11, .external_lex_state = 3},
  [30] = {.lex_state = 17, .external_lex_state = 3},
  [31] = {.lex_state = 8, .external_lex_state = 3},
  [32] = {.lex_state = 3, .external_lex_state = 3},
  [33] = {.lex_state = 14, .external_lex_state = 3},
  [34] = {.lex_state = 8, .external_lex_state = 3},
  [35] = {.lex_state = 14, .external_lex_state = 3},
  [36] = {.lex_state = 17, .external_lex_state = 3},
  [37] = {.lex_state = 11, .external_lex_state = 3},
  [38] = {.lex_state = 14, .external_lex_state = 3},
  [39] = {.lex_state = 17, .external_lex_state = 3},
  [40] = {.lex_state = 11, .external_lex_state = 3},
  [41] = {.lex_state = 3, .external_lex_state = 3},
  [42] = {.lex_state = 2, .external_lex_state = 3},
  [43] = {.lex_state = 17, .external_lex_state = 3},
  [44] = {.lex_state = 2, .external_lex_state = 3},
  [45] = {.lex_state = 2, .external_lex_state = 3},
  [46] = {.lex_state = 1, .external_lex_state = 3},
  [47] = {.lex_state = 3, .external_lex_state = 3},
  [48] = {.lex_state = 3, .external_lex_state = 3},
  [49] = {.lex_state = 7, .external_lex_state = 3},
  [50] = {.lex_state = 1, .external_lex_state = 3},
  [51] = {.lex_state = 13, .external_lex_state = 3},
  [52] = {.lex_state = 8, .external_lex_state = 3},
  [53] = {.lex_state = 16, .external_lex_state = 3},
  [54] = {.lex_state = 3, .external_lex_state = 3},
  [55] = {.lex_state = 10, .external_lex_state = 3},
  [56] = {.lex_state = 14, .external_lex_state = 3},
  [57] = {.lex_state = 11, .external_lex_state = 3},
  [58] = {.lex_state = 8, .external_lex_state = 3},
  [59] = {.lex_state = 16, .external_lex_state = 3},
  [60] = {.lex_state = 13, .external_lex_state = 3},
  [61] = {.lex_state = 1, .external_lex_state = 3},
  [62] = {.lex_state = 2, .external_lex_state = 3},
  [63] = {.lex_state = 8, .external_lex_state = 3},
  [64] = {.lex_state = 7, .external_lex_state = 3},
  [65] = {.lex_state = 10, .external_lex_state = 3},
  [66] = {.lex_state = 2, .external_lex_state = 3},
  [67] = {.lex_state = 8, .external_lex_state = 3},
  [68] = {.lex_state = 1, .external_lex_state = 3},
  [69] = {.lex_state = 4, .external_lex_state = 3},
  [70] = {.lex_state = 3, .external_lex_state = 3},
  [71] = {.lex_state = 7, .external_lex_state = 3},
  [72] = {.lex_state = 10, .external_lex_state = 3},
  [73] = {.lex_state = 1, .external_lex_state = 3},
  [74] = {.lex_state = 13, .external_lex_state = 3},
  [75] = {.lex_state = 16, .external_lex_state = 3},
  [76] = {.lex_state = 1, .external_lex_state = 3},
  [77] = {.lex_state = 3, .external_lex_state = 3},
  [78] = {.lex_state = 4, .external_lex_state = 3},
  [79] = {.lex_state = 1, .external_lex_state = 3},
  [80] = {.lex_state = 1, .external_lex_state = 3},
  [81] = {.lex_state = 7, .external_lex_state = 3},
  [82] = {.lex_state = 3, .external_lex_state = 3},
  [83] = {.lex_state = 10, .external_lex_state = 3},
  [84] = {.lex_state = 13, .external_lex_state = 3},
  [85] = {.lex_state = 16, .external_lex_state = 3},
  [86] = {.lex_state = 3, .external_lex_state = 3},
  [87] = {.lex_state = 1, .external_lex_state = 3},
  [88] = {.lex_state = 1, .external_lex_state = 3},
  [89] = {.lex_state = 3, .external_lex_state = 3},
  [90] = {.lex_state = 1, .external_lex_state = 3},
  [91] = {.lex_state = 1, .external_lex_state = 3},
  [92] = {.lex_state = 4, .external_lex_state = 3},
  [93] = {.lex_state = 4, .external_lex_state = 3},
  [94] = {.lex_state = 1, .external_lex_state = 3},
  [95] = {.lex_state = 12, .external_lex_state = 3},
  [96] = {.lex_state = 18, .external_lex_state = 3},
  [97] = {.lex_state = 9, .external_lex_state = 3},
  [98] = {.lex_state = 2, .external_lex_state = 3},
  [99] = {.lex_state = 2, .external_lex_state = 3},
  [100] = {.lex_state = 9, .external_lex_state = 3},
  [101] = {.lex_state = 2, .external_lex_state = 3},
  [102] = {.lex_state = 3, .external_lex_state = 3},
  [103] = {.lex_state = 3, .external_lex_state = 3},
  [104] = {.lex_state = 12, .external_lex_state = 3},
  [105] = {.lex_state = 3, .external_lex_state = 3},
  [106] = {.lex_state = 15, .external_lex_state = 3},
  [107] = {.lex_state = 2, .external_lex_state = 3},
  [108] = {.lex_state = 9, .external_lex_state = 3},
  [109] = {.lex_state = 18, .external_lex_state = 3},
  [110] = {.lex_state = 15, .external_lex_state = 3},
  [111] = {.lex_state = 18, .external_lex_state = 3},
  [112] = {.lex_state = 12, .external_lex_state = 3},
  [113] = {.lex_state = 15, .external_lex_state = 3},
  [114] = {.lex_state = 9, .external_lex_state = 3},
  [115] = {.lex_state = 5, .external_lex_state = 3},
  [116] = {.lex_state = 15, .external_lex_state = 3},
  [117] = {.lex_state = 12, .external_lex_state = 3},
  [118] = {.lex_state = 2, .external_lex_state = 3},
  [119] = {.lex_state = 18, .external_lex_state = 3},
  [120] = {.lex_state = 5, .external_lex_state = 3},
  [121] = {.lex_state = 5, .external_lex_state = 3},
  [122] = {.lex_state = 9, .external_lex_state = 3},
  [123] = {.lex_state = 2, .external_lex_state = 3},
  [124] = {.lex_state = 2, .external_lex_state = 3},
  [125] = {.lex_state = 2, .external_lex_state = 3},
  [126] = {.lex_state = 5, .external_lex_state = 3},
  [127] = {.lex_state = 5, .external_lex_state = 3},
  [128] = {.lex_state = 3, .external_lex_state = 3},
  [129] = {.lex_state = 9, .external_lex_state = 3},
  [130] = {.lex_state = 3, .external_lex_state = 3},
  [131] = {.lex_state = 5, .external_lex_state = 3},
  [132] = {.lex_state = 5, .external_lex_state = 3},
  [133] = {.lex_state = 5, .external_lex_state = 3},
  [134] = {.lex_state = 9, .external_lex_state = 3},
  [135] = {.lex_state = 4, .external_lex_state = 3},
  [136] = {.lex_state = 6, .external_lex_state = 3},
  [137] = {.lex_state = 4, .external_lex_state = 3},
  [138] = {.lex_state = 4, .external_lex_state = 3},
  [139] = {.lex_state = 6, .external_lex_state = 3},
  [140] = {.lex_state = 4, .external_lex_state = 3},
  [141] = {.lex_state = 6, .external_lex_state = 3},
  [142] = {.lex_state = 4, .external_lex_state = 3},
  [143] = {.lex_state = 4, .external_lex_state = 3},
  [144] = {.lex_state = 4, .external_lex_state = 3},
  [145] = {.lex_state = 4, .external_lex_state = 3},
  [146] = {.lex_state = 4, .external_lex_state = 3},
  [147] = {.lex_state = 4, .external_lex_state = 3},
  [148] = {.lex_state = 4, .external_lex_state = 3},
  [149] = {.lex_state = 4, .external_lex_state = 3},
  [150] = {.lex_state = 4, .external_lex_state = 3},
  [151] = {.lex_state = 4, .external_lex_state = 3},
  [152] = {.lex_state = 4, .external_lex_state = 3},
  [153] = {.lex_state = 6, .external_lex_state = 3},
  [154] = {.lex_state = 4, .external_lex_state = 3},
  [155] = {.lex_state = 4, .external_lex_state = 3},
  [156] = {.lex_state = 6, .external_lex_state = 3},
  [157] = {.lex_state = 6, .external_lex_state = 3},
  [158] = {.lex_state = 4, .external_lex_state = 3},
  [159] = {.lex_state = 4, .external_lex_state = 3},
  [160] = {.lex_state = 4, .external_lex_state = 3},
  [161] = {.lex_state = 4, .external_lex_state = 3},
  [162] = {.lex_state = 3, .external_lex_state = 3},
  [163] = {.lex_state = 4, .external_lex_state = 3},
  [164] = {.lex_state = 4, .external_lex_state = 3},
  [165] = {.lex_state = 4, .external_lex_state = 3},
  [166] = {.lex_state = 4, .external_lex_state = 3},
  [167] = {.lex_state = 4, .external_lex_state = 3},
  [168] = {.lex_state = 4, .external_lex_state = 3},
  [169] = {.lex_state = 4, .external_lex_state = 3},
  [170] = {.lex_state = 6, .external_lex_state = 3},
  [171] = {.lex_state = 4, .external_lex_state = 3},
  [172] = {.lex_state = 4, .external_lex_state = 3},
  [173] = {.lex_state = 3, .external_lex_state = 3},
  [174] = {.lex_state = 6, .external_lex_state = 3},
  [175] = {.lex_state = 3, .external_lex_state = 3},
  [176] = {.lex_state = 3, .external_lex_state = 3},
  [177] = {.lex_state = 4, .external_lex_state = 3},
  [178] = {.lex_state = 3, .external_lex_state = 3},
  [179] = {.lex_state = 4, .external_lex_state = 3},
  [180] = {.lex_state = 4, .external_lex_state = 3},
  [181] = {.lex_state = 4, .external_lex_state = 3},
  [182] = {.lex_state = 4, .external_lex_state = 3},
  [183] = {.lex_state = 4, .external_lex_state = 3},
  [184] = {.lex_state = 4, .external_lex_state = 3},
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
  [230] = {.lex_state = 3, .external_lex_state = 3},
  [231] = {.lex_state = 3, .external_lex_state = 3},
  [232] = {.lex_state = 3, .external_lex_state = 3},
  [233] = {.lex_state = 3, .external_lex_state = 3},
  [234] = {.lex_state = 3, .external_lex_state = 3},
  [235] = {.lex_state = 74, .external_lex_state = 3},
  [236] = {.lex_state = 63, .external_lex_state = 3},
  [237] = {.lex_state = 50, .external_lex_state = 3},
  [238] = {.lex_state = 63, .external_lex_state = 3},
  [239] = {.lex_state = 20, .external_lex_state = 3},
  [240] = {.lex_state = 74, .external_lex_state = 3},
  [241] = {.lex_state = 50, .external_lex_state = 3},
  [242] = {.lex_state = 63, .external_lex_state = 3},
  [243] = {.lex_state = 74, .external_lex_state = 3},
  [244] = {.lex_state = 75, .external_lex_state = 3},
  [245] = {.lex_state = 75, .external_lex_state = 3},
  [246] = {.lex_state = 75, .external_lex_state = 3},
  [247] = {.lex_state = 75, .external_lex_state = 3},
  [248] = {.lex_state = 75, .external_lex_state = 3},
  [249] = {.lex_state = 74, .external_lex_state = 3},
  [250] = {.lex_state = 74, .external_lex_state = 3},
  [251] = {.lex_state = 75, .external_lex_state = 3},
  [252] = {.lex_state = 74, .external_lex_state = 3},
  [253] = {.lex_state = 76, .external_lex_state = 3},
  [254] = {.lex_state = 74, .external_lex_state = 3},
  [255] = {.lex_state = 74, .external_lex_state = 3},
  [256] = {.lex_state = 74, .external_lex_state = 3},
  [257] = {.lex_state = 74, .external_lex_state = 3},
  [258] = {.lex_state = 74, .external_lex_state = 3},
  [259] = {.lex_state = 74, .external_lex_state = 3},
  [260] = {.lex_state = 74, .external_lex_state = 3},
  [261] = {.lex_state = 74, .external_lex_state = 3},
  [262] = {.lex_state = 50, .external_lex_state = 3},
  [263] = {.lex_state = 74, .external_lex_state = 3},
  [264] = {.lex_state = 74, .external_lex_state = 3},
  [265] = {.lex_state = 74, .external_lex_state = 3},
  [266] = {.lex_state = 74, .external_lex_state = 3},
  [267] = {.lex_state = 74, .external_lex_state = 3},
  [268] = {.lex_state = 74, .external_lex_state = 3},
  [269] = {.lex_state = 74, .external_lex_state = 3},
  [270] = {.lex_state = 74, .external_lex_state = 3},
  [271] = {.lex_state = 74, .external_lex_state = 3},
  [272] = {.lex_state = 74, .external_lex_state = 3},
  [273] = {.lex_state = 74, .external_lex_state = 3},
  [274] = {.lex_state = 74, .external_lex_state = 3},
  [275] = {.lex_state = 74, .external_lex_state = 3},
  [276] = {.lex_state = 74, .external_lex_state = 3},
  [277] = {.lex_state = 20, .external_lex_state = 3},
  [278] = {.lex_state = 74, .external_lex_state = 3},
  [279] = {.lex_state = 74, .external_lex_state = 3},
  [280] = {.lex_state = 74, .external_lex_state = 3},
  [281] = {.lex_state = 74, .external_lex_state = 3},
  [282] = {.lex_state = 74, .external_lex_state = 3},
  [283] = {.lex_state = 74, .external_lex_state = 3},
  [284] = {.lex_state = 74, .external_lex_state = 3},
  [285] = {.lex_state = 74, .external_lex_state = 3},
  [286] = {.lex_state = 74, .external_lex_state = 3},
  [287] = {.lex_state = 74, .external_lex_state = 3},
  [288] = {.lex_state = 74, .external_lex_state = 3},
  [289] = {.lex_state = 74, .external_lex_state = 3},
  [290] = {.lex_state = 74, .external_lex_state = 3},
  [291] = {.lex_state = 50, .external_lex_state = 3},
  [292] = {.lex_state = 51, .external_lex_state = 3},
  [293] = {.lex_state = 51, .external_lex_state = 3},
  [294] = {.lex_state = 20, .external_lex_state = 3},
  [295] = {.lex_state = 50, .external_lex_state = 3},
  [296] = {.lex_state = 20, .external_lex_state = 3},
  [297] = {.lex_state = 20, .external_lex_state = 3},
  [298] = {.lex_state = 52, .external_lex_state = 3},
  [299] = {.lex_state = 55, .external_lex_state = 3},
  [300] = {.lex_state = 55, .external_lex_state = 3},
  [301] = {.lex_state = 52, .external_lex_state = 3},
  [302] = {.lex_state = 36, .external_lex_state = 3},
  [303] = {.lex_state = 37, .external_lex_state = 3},
  [304] = {.lex_state = 38, .external_lex_state = 3},
  [305] = {.lex_state = 38, .external_lex_state = 3},
  [306] = {.lex_state = 38, .external_lex_state = 3},
  [307] = {.lex_state = 68, .external_lex_state = 3},
  [308] = {.lex_state = 20, .external_lex_state = 3},
  [309] = {.lex_state = 63, .external_lex_state = 3},
  [310] = {.lex_state = 63, .external_lex_state = 3},
  [311] = {.lex_state = 63, .external_lex_state = 3},
  [312] = {.lex_state = 38, .external_lex_state = 3},
  [313] = {.lex_state = 63, .external_lex_state = 3},
  [314] = {.lex_state = 63, .external_lex_state = 3},
  [315] = {.lex_state = 38, .external_lex_state = 3},
  [316] = {.lex_state = 63, .external_lex_state = 3},
  [317] = {.lex_state = 63, .external_lex_state = 3},
  [318] = {.lex_state = 63, .external_lex_state = 3},
  [319] = {.lex_state = 63, .external_lex_state = 3},
  [320] = {.lex_state = 68, .external_lex_state = 3},
  [321] = {.lex_state = 69, .external_lex_state = 3},
  [322] = {.lex_state = 70, .external_lex_state = 3},
  [323] = {.lex_state = 71, .external_lex_state = 3},
  [324] = {.lex_state = 63, .external_lex_state = 3},
  [325] = {.lex_state = 63, .external_lex_state = 3},
  [326] = {.lex_state = 1013, .external_lex_state = 3},
  [327] = {.lex_state = 63, .external_lex_state = 3},
  [328] = {.lex_state = 1013, .external_lex_state = 3},
  [329] = {.lex_state = 38, .external_lex_state = 3},
  [330] = {.lex_state = 39, .external_lex_state = 3},
  [331] = {.lex_state = 38, .external_lex_state = 3},
  [332] = {.lex_state = 36, .external_lex_state = 3},
  [333] = {.lex_state = 40, .external_lex_state = 3},
  [334] = {.lex_state = 36, .external_lex_state = 3},
  [335] = {.lex_state = 38, .external_lex_state = 3},
  [336] = {.lex_state = 1013, .external_lex_state = 3},
  [337] = {.lex_state = 63, .external_lex_state = 3},
  [338] = {.lex_state = 20, .external_lex_state = 3},
  [339] = {.lex_state = 20, .external_lex_state = 3},
  [340] = {.lex_state = 20, .external_lex_state = 3},
  [341] = {.lex_state = 38, .external_lex_state = 3},
  [342] = {.lex_state = 39, .external_lex_state = 3},
  [343] = {.lex_state = 1013, .external_lex_state = 3},
  [344] = {.lex_state = 20, .external_lex_state = 3},
  [345] = {.lex_state = 37, .external_lex_state = 3},
  [346] = {.lex_state = 38, .external_lex_state = 3},
  [347] = {.lex_state = 39, .external_lex_state = 3},
  [348] = {.lex_state = 38, .external_lex_state = 3},
  [349] = {.lex_state = 38, .external_lex_state = 3},
  [350] = {.lex_state = 40, .external_lex_state = 3},
  [351] = {.lex_state = 40, .external_lex_state = 3},
  [352] = {.lex_state = 37, .external_lex_state = 3},
  [353] = {.lex_state = 38, .external_lex_state = 3},
  [354] = {.lex_state = 63, .external_lex_state = 3},
  [355] = {.lex_state = 63, .external_lex_state = 3},
  [356] = {.lex_state = 51, .external_lex_state = 3},
  [357] = {.lex_state = 63, .external_lex_state = 3},
  [358] = {.lex_state = 63, .external_lex_state = 3},
  [359] = {.lex_state = 63, .external_lex_state = 3},
  [360] = {.lex_state = 63, .external_lex_state = 3},
  [361] = {.lex_state = 20, .external_lex_state = 3},
  [362] = {.lex_state = 20, .external_lex_state = 3},
  [363] = {.lex_state = 63, .external_lex_state = 3},
  [364] = {.lex_state = 1013, .external_lex_state = 3},
  [365] = {.lex_state = 61, .external_lex_state = 3},
  [366] = {.lex_state = 69, .external_lex_state = 3},
  [367] = {.lex_state = 70, .external_lex_state = 3},
  [368] = {.lex_state = 71, .external_lex_state = 3},
  [369] = {.lex_state = 71, .external_lex_state = 3},
  [370] = {.lex_state = 70, .external_lex_state = 3},
  [371] = {.lex_state = 69, .external_lex_state = 3},
  [372] = {.lex_state = 68, .external_lex_state = 3},
  [373] = {.lex_state = 52, .external_lex_state = 3},
  [374] = {.lex_state = 38, .external_lex_state = 3},
  [375] = {.lex_state = 63, .external_lex_state = 3},
  [376] = {.lex_state = 55, .external_lex_state = 3},
  [377] = {.lex_state = 68, .external_lex_state = 3},
  [378] = {.lex_state = 69, .external_lex_state = 3},
  [379] = {.lex_state = 70, .external_lex_state = 3},
  [380] = {.lex_state = 33, .external_lex_state = 3},
  [381] = {.lex_state = 71, .external_lex_state = 3},
  [382] = {.lex_state = 61, .external_lex_state = 3},
  [383] = {.lex_state = 1013, .external_lex_state = 3},
  [384] = {.lex_state = 1013, .external_lex_state = 3},
  [385] = {.lex_state = 1013, .external_lex_state = 3},
  [386] = {.lex_state = 55, .external_lex_state = 3},
  [387] = {.lex_state = 37, .external_lex_state = 3},
  [388] = {.lex_state = 37, .external_lex_state = 3},
  [389] = {.lex_state = 37, .external_lex_state = 3},
  [390] = {.lex_state = 37, .external_lex_state = 3},
  [391] = {.lex_state = 68, .external_lex_state = 3},
  [392] = {.lex_state = 40, .external_lex_state = 3},
  [393] = {.lex_state = 1013, .external_lex_state = 3},
  [394] = {.lex_state = 39, .external_lex_state = 3},
  [395] = {.lex_state = 36, .external_lex_state = 3},
  [396] = {.lex_state = 68, .external_lex_state = 3},
  [397] = {.lex_state = 68, .external_lex_state = 3},
  [398] = {.lex_state = 61, .external_lex_state = 3},
  [399] = {.lex_state = 61, .external_lex_state = 3},
  [400] = {.lex_state = 78, .external_lex_state = 3},
  [401] = {.lex_state = 78, .external_lex_state = 3},
  [402] = {.lex_state = 78, .external_lex_state = 3},
  [403] = {.lex_state = 1014, .external_lex_state = 3},
  [404] = {.lex_state = 78, .external_lex_state = 3},
  [405] = {.lex_state = 78, .external_lex_state = 3},
  [406] = {.lex_state = 78, .external_lex_state = 3},
  [407] = {.lex_state = 78, .external_lex_state = 3},
  [408] = {.lex_state = 78, .external_lex_state = 3},
  [409] = {.lex_state = 78, .external_lex_state = 3},
  [410] = {.lex_state = 20, .external_lex_state = 3},
  [411] = {.lex_state = 78, .external_lex_state = 3},
  [412] = {.lex_state = 41, .external_lex_state = 3},
  [413] = {.lex_state = 78, .external_lex_state = 3},
  [414] = {.lex_state = 78, .external_lex_state = 3},
  [415] = {.lex_state = 78, .external_lex_state = 3},
  [416] = {.lex_state = 78, .external_lex_state = 3},
  [417] = {.lex_state = 34, .external_lex_state = 3},
  [418] = {.lex_state = 78, .external_lex_state = 3},
  [419] = {.lex_state = 34, .external_lex_state = 3},
  [420] = {.lex_state = 41, .external_lex_state = 3},
  [421] = {.lex_state = 63, .external_lex_state = 3},
  [422] = {.lex_state = 1014, .external_lex_state = 3},
  [423] = {.lex_state = 78, .external_lex_state = 3},
  [424] = {.lex_state = 78, .external_lex_state = 3},
  [425] = {.lex_state = 41, .external_lex_state = 3},
  [426] = {.lex_state = 34, .external_lex_state = 3},
  [427] = {.lex_state = 78, .external_lex_state = 3},
  [428] = {.lex_state = 78, .external_lex_state = 3},
  [429] = {.lex_state = 78, .external_lex_state = 3},
  [430] = {.lex_state = 20, .external_lex_state = 3},
  [431] = {.lex_state = 78, .external_lex_state = 3},
  [432] = {.lex_state = 78, .external_lex_state = 3},
  [433] = {.lex_state = 78, .external_lex_state = 3},
  [434] = {.lex_state = 79, .external_lex_state = 3},
  [435] = {.lex_state = 78, .external_lex_state = 3},
  [436] = {.lex_state = 20, .external_lex_state = 3},
  [437] = {.lex_state = 78, .external_lex_state = 3},
  [438] = {.lex_state = 78, .external_lex_state = 3},
  [439] = {.lex_state = 78, .external_lex_state = 3},
  [440] = {.lex_state = 20, .external_lex_state = 3},
  [441] = {.lex_state = 20, .external_lex_state = 3},
  [442] = {.lex_state = 20, .external_lex_state = 3},
  [443] = {.lex_state = 20, .external_lex_state = 3},
  [444] = {.lex_state = 20, .external_lex_state = 3},
  [445] = {.lex_state = 20, .external_lex_state = 3},
  [446] = {.lex_state = 78, .external_lex_state = 3},
  [447] = {.lex_state = 78, .external_lex_state = 3},
  [448] = {.lex_state = 78, .external_lex_state = 3},
  [449] = {.lex_state = 78, .external_lex_state = 3},
  [450] = {.lex_state = 52, .external_lex_state = 3},
  [451] = {.lex_state = 35, .external_lex_state = 3},
  [452] = {.lex_state = 62, .external_lex_state = 3},
  [453] = {.lex_state = 52, .external_lex_state = 3},
  [454] = {.lex_state = 20, .external_lex_state = 3},
  [455] = {.lex_state = 35, .external_lex_state = 3},
  [456] = {.lex_state = 62, .external_lex_state = 3},
  [457] = {.lex_state = 35, .external_lex_state = 3},
  [458] = {.lex_state = 59, .external_lex_state = 3},
  [459] = {.lex_state = 35, .external_lex_state = 3},
  [460] = {.lex_state = 52, .external_lex_state = 3},
  [461] = {.lex_state = 52, .external_lex_state = 3},
  [462] = {.lex_state = 66, .external_lex_state = 3},
  [463] = {.lex_state = 52, .external_lex_state = 3},
  [464] = {.lex_state = 66, .external_lex_state = 3},
  [465] = {.lex_state = 20, .external_lex_state = 3},
  [466] = {.lex_state = 20, .external_lex_state = 3},
  [467] = {.lex_state = 35, .external_lex_state = 3},
  [468] = {.lex_state = 62, .external_lex_state = 3},
  [469] = {.lex_state = 20, .external_lex_state = 3},
  [470] = {.lex_state = 20, .external_lex_state = 3},
  [471] = {.lex_state = 52, .external_lex_state = 3},
  [472] = {.lex_state = 59, .external_lex_state = 3},
  [473] = {.lex_state = 35, .external_lex_state = 3},
  [474] = {.lex_state = 35, .external_lex_state = 3},
  [475] = {.lex_state = 35, .external_lex_state = 3},
  [476] = {.lex_state = 20, .external_lex_state = 3},
  [477] = {.lex_state = 66, .external_lex_state = 3},
  [478] = {.lex_state = 35, .external_lex_state = 3},
  [479] = {.lex_state = 20, .external_lex_state = 3},
  [480] = {.lex_state = 20, .external_lex_state = 3},
  [481] = {.lex_state = 20, .external_lex_state = 3},
  [482] = {.lex_state = 35, .external_lex_state = 3},
  [483] = {.lex_state = 35, .external_lex_state = 3},
  [484] = {.lex_state = 20, .external_lex_state = 3},
  [485] = {.lex_state = 35, .external_lex_state = 3},
  [486] = {.lex_state = 20, .external_lex_state = 3},
  [487] = {.lex_state = 20, .external_lex_state = 3},
  [488] = {.lex_state = 42, .external_lex_state = 3},
  [489] = {.lex_state = 78, .external_lex_state = 3},
  [490] = {.lex_state = 20, .external_lex_state = 3},
  [491] = {.lex_state = 20, .external_lex_state = 3},
  [492] = {.lex_state = 43, .external_lex_state = 3},
  [493] = {.lex_state = 20, .external_lex_state = 3},
  [494] = {.lex_state = 20, .external_lex_state = 3},
  [495] = {.lex_state = 20, .external_lex_state = 3},
  [496] = {.lex_state = 35, .external_lex_state = 3},
  [497] = {.lex_state = 35, .external_lex_state = 3},
  [498] = {.lex_state = 65, .external_lex_state = 3},
  [499] = {.lex_state = 35, .external_lex_state = 3},
  [500] = {.lex_state = 63, .external_lex_state = 3},
  [501] = {.lex_state = 63, .external_lex_state = 3},
  [502] = {.lex_state = 63, .external_lex_state = 3},
  [503] = {.lex_state = 63, .external_lex_state = 3},
  [504] = {.lex_state = 20, .external_lex_state = 3},
  [505] = {.lex_state = 20, .external_lex_state = 3},
  [506] = {.lex_state = 20, .external_lex_state = 3},
  [507] = {.lex_state = 42, .external_lex_state = 3},
  [508] = {.lex_state = 43, .external_lex_state = 3},
  [509] = {.lex_state = 35, .external_lex_state = 3},
  [510] = {.lex_state = 35, .external_lex_state = 3},
  [511] = {.lex_state = 63, .external_lex_state = 3},
  [512] = {.lex_state = 20, .external_lex_state = 3},
  [513] = {.lex_state = 20, .external_lex_state = 3},
  [514] = {.lex_state = 20, .external_lex_state = 3},
  [515] = {.lex_state = 35, .external_lex_state = 3},
  [516] = {.lex_state = 20, .external_lex_state = 3},
  [517] = {.lex_state = 44, .external_lex_state = 3},
  [518] = {.lex_state = 43, .external_lex_state = 3},
  [519] = {.lex_state = 42, .external_lex_state = 3},
  [520] = {.lex_state = 35, .external_lex_state = 3},
  [521] = {.lex_state = 20, .external_lex_state = 3},
  [522] = {.lex_state = 20, .external_lex_state = 3},
  [523] = {.lex_state = 35, .external_lex_state = 3},
  [524] = {.lex_state = 20, .external_lex_state = 3},
  [525] = {.lex_state = 20, .external_lex_state = 3},
  [526] = {.lex_state = 20, .external_lex_state = 3},
  [527] = {.lex_state = 63, .external_lex_state = 3},
  [528] = {.lex_state = 35, .external_lex_state = 3},
  [529] = {.lex_state = 63, .external_lex_state = 3},
  [530] = {.lex_state = 63, .external_lex_state = 3},
  [531] = {.lex_state = 20, .external_lex_state = 3},
  [532] = {.lex_state = 20, .external_lex_state = 3},
  [533] = {.lex_state = 35, .external_lex_state = 3},
  [534] = {.lex_state = 52, .external_lex_state = 3},
  [535] = {.lex_state = 42, .external_lex_state = 3},
  [536] = {.lex_state = 52, .external_lex_state = 3},
  [537] = {.lex_state = 43, .external_lex_state = 3},
  [538] = {.lex_state = 20, .external_lex_state = 3},
  [539] = {.lex_state = 20, .external_lex_state = 3},
  [540] = {.lex_state = 20, .external_lex_state = 3},
  [541] = {.lex_state = 35, .external_lex_state = 3},
  [542] = {.lex_state = 20, .external_lex_state = 3},
  [543] = {.lex_state = 42, .external_lex_state = 3},
  [544] = {.lex_state = 43, .external_lex_state = 3},
  [545] = {.lex_state = 35, .external_lex_state = 3},
  [546] = {.lex_state = 52, .external_lex_state = 3},
  [547] = {.lex_state = 63, .external_lex_state = 3},
  [548] = {.lex_state = 52, .external_lex_state = 3},
  [549] = {.lex_state = 20, .external_lex_state = 3},
  [550] = {.lex_state = 20, .external_lex_state = 3},
  [551] = {.lex_state = 35, .external_lex_state = 3},
  [552] = {.lex_state = 20, .external_lex_state = 3},
  [553] = {.lex_state = 35, .external_lex_state = 3},
  [554] = {.lex_state = 42, .external_lex_state = 3},
  [555] = {.lex_state = 43, .external_lex_state = 3},
  [556] = {.lex_state = 20, .external_lex_state = 3},
  [557] = {.lex_state = 63, .external_lex_state = 3},
  [558] = {.lex_state = 20, .external_lex_state = 3},
  [559] = {.lex_state = 63, .external_lex_state = 3},
  [560] = {.lex_state = 20, .external_lex_state = 3},
  [561] = {.lex_state = 64, .external_lex_state = 3},
  [562] = {.lex_state = 43, .external_lex_state = 3},
  [563] = {.lex_state = 42, .external_lex_state = 3},
  [564] = {.lex_state = 43, .external_lex_state = 3},
  [565] = {.lex_state = 20, .external_lex_state = 3},
  [566] = {.lex_state = 20, .external_lex_state = 3},
  [567] = {.lex_state = 42, .external_lex_state = 3},
  [568] = {.lex_state = 52, .external_lex_state = 3},
  [569] = {.lex_state = 20, .external_lex_state = 3},
  [570] = {.lex_state = 20, .external_lex_state = 3},
  [571] = {.lex_state = 20, .external_lex_state = 3},
  [572] = {.lex_state = 35, .external_lex_state = 3},
  [573] = {.lex_state = 20, .external_lex_state = 3},
  [574] = {.lex_state = 63, .external_lex_state = 3},
  [575] = {.lex_state = 20, .external_lex_state = 3},
  [576] = {.lex_state = 20, .external_lex_state = 3},
  [577] = {.lex_state = 52, .external_lex_state = 3},
  [578] = {.lex_state = 20, .external_lex_state = 3},
  [579] = {.lex_state = 63, .external_lex_state = 3},
  [580] = {.lex_state = 20, .external_lex_state = 3},
  [581] = {.lex_state = 35, .external_lex_state = 3},
  [582] = {.lex_state = 20, .external_lex_state = 3},
  [583] = {.lex_state = 52, .external_lex_state = 3},
  [584] = {.lex_state = 20, .external_lex_state = 3},
  [585] = {.lex_state = 63, .external_lex_state = 3},
  [586] = {.lex_state = 52, .external_lex_state = 3},
  [587] = {.lex_state = 20, .external_lex_state = 3},
  [588] = {.lex_state = 20, .external_lex_state = 3},
  [589] = {.lex_state = 52, .external_lex_state = 3},
  [590] = {.lex_state = 20, .external_lex_state = 3},
  [591] = {.lex_state = 63, .external_lex_state = 3},
  [592] = {.lex_state = 20, .external_lex_state = 3},
  [593] = {.lex_state = 20, .external_lex_state = 3},
  [594] = {.lex_state = 20, .external_lex_state = 3},
  [595] = {.lex_state = 20, .external_lex_state = 3},
  [596] = {.lex_state = 35, .external_lex_state = 3},
  [597] = {.lex_state = 20, .external_lex_state = 3},
  [598] = {.lex_state = 52, .external_lex_state = 3},
  [599] = {.lex_state = 20, .external_lex_state = 3},
  [600] = {.lex_state = 35, .external_lex_state = 3},
  [601] = {.lex_state = 20, .external_lex_state = 3},
  [602] = {.lex_state = 52, .external_lex_state = 3},
  [603] = {.lex_state = 20, .external_lex_state = 3},
  [604] = {.lex_state = 20, .external_lex_state = 3},
  [605] = {.lex_state = 20, .external_lex_state = 3},
  [606] = {.lex_state = 63, .external_lex_state = 3},
  [607] = {.lex_state = 20, .external_lex_state = 3},
  [608] = {.lex_state = 42, .external_lex_state = 3},
  [609] = {.lex_state = 20, .external_lex_state = 3},
  [610] = {.lex_state = 44, .external_lex_state = 3},
  [611] = {.lex_state = 20, .external_lex_state = 3},
  [612] = {.lex_state = 78, .external_lex_state = 3},
  [613] = {.lex_state = 43, .external_lex_state = 3},
  [614] = {.lex_state = 43, .external_lex_state = 3},
  [615] = {.lex_state = 42, .external_lex_state = 3},
  [616] = {.lex_state = 20, .external_lex_state = 3},
  [617] = {.lex_state = 78, .external_lex_state = 3},
  [618] = {.lex_state = 43, .external_lex_state = 3},
  [619] = {.lex_state = 42, .external_lex_state = 3},
  [620] = {.lex_state = 20, .external_lex_state = 3},
  [621] = {.lex_state = 78, .external_lex_state = 3},
  [622] = {.lex_state = 43, .external_lex_state = 3},
  [623] = {.lex_state = 42, .external_lex_state = 3},
  [624] = {.lex_state = 52, .external_lex_state = 3},
  [625] = {.lex_state = 78, .external_lex_state = 3},
  [626] = {.lex_state = 78, .external_lex_state = 3},
  [627] = {.lex_state = 78, .external_lex_state = 3},
  [628] = {.lex_state = 78, .external_lex_state = 3},
  [629] = {.lex_state = 78, .external_lex_state = 3},
  [630] = {.lex_state = 78, .external_lex_state = 3},
  [631] = {.lex_state = 78, .external_lex_state = 3},
  [632] = {.lex_state = 78, .external_lex_state = 3},
  [633] = {.lex_state = 78, .external_lex_state = 3},
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
    [sym_dockerfile] = STATE(531),
    [sym__directive] = STATE(211),
    [sym_add] = STATE(211),
    [sym_arg] = STATE(211),
    [sym_cmd] = STATE(211),
    [sym_copy] = STATE(211),
    [sym_entrypoint] = STATE(211),
    [sym_env] = STATE(211),
    [sym_expose] = STATE(211),
    [sym_from] = STATE(211),
    [sym_healthcheck] = STATE(211),
    [sym_label] = STATE(211),
    [sym_maintainer] = STATE(211),
    [sym_onbuild] = STATE(211),
    [sym_run] = STATE(211),
    [sym_shell] = STATE(211),
    [sym_stopsignal] = STATE(211),
    [sym_user] = STATE(211),
    [sym_volume] = STATE(211),
    [sym_workdir] = STATE(211),
    [aux_sym_dockerfile_repeat1] = STATE(2),
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
    [sym__directive] = STATE(211),
    [sym_add] = STATE(211),
    [sym_arg] = STATE(211),
    [sym_cmd] = STATE(211),
    [sym_copy] = STATE(211),
    [sym_entrypoint] = STATE(211),
    [sym_env] = STATE(211),
    [sym_expose] = STATE(211),
    [sym_from] = STATE(211),
    [sym_healthcheck] = STATE(211),
    [sym_label] = STATE(211),
    [sym_maintainer] = STATE(211),
    [sym_onbuild] = STATE(211),
    [sym_run] = STATE(211),
    [sym_shell] = STATE(211),
    [sym_stopsignal] = STATE(211),
    [sym_user] = STATE(211),
    [sym_volume] = STATE(211),
    [sym_workdir] = STATE(211),
    [aux_sym_dockerfile_repeat1] = STATE(4),
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
    [sym__directive] = STATE(211),
    [sym_add] = STATE(211),
    [sym_arg] = STATE(211),
    [sym_cmd] = STATE(211),
    [sym_copy] = STATE(211),
    [sym_entrypoint] = STATE(211),
    [sym_env] = STATE(211),
    [sym_expose] = STATE(211),
    [sym_from] = STATE(211),
    [sym_healthcheck] = STATE(211),
    [sym_label] = STATE(211),
    [sym_maintainer] = STATE(211),
    [sym_onbuild] = STATE(211),
    [sym_run] = STATE(211),
    [sym_shell] = STATE(211),
    [sym_stopsignal] = STATE(211),
    [sym_user] = STATE(211),
    [sym_volume] = STATE(211),
    [sym_workdir] = STATE(211),
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
    [sym__directive] = STATE(211),
    [sym_add] = STATE(211),
    [sym_arg] = STATE(211),
    [sym_cmd] = STATE(211),
    [sym_copy] = STATE(211),
    [sym_entrypoint] = STATE(211),
    [sym_env] = STATE(211),
    [sym_expose] = STATE(211),
    [sym_from] = STATE(211),
    [sym_healthcheck] = STATE(211),
    [sym_label] = STATE(211),
    [sym_maintainer] = STATE(211),
    [sym_onbuild] = STATE(211),
    [sym_run] = STATE(211),
    [sym_shell] = STATE(211),
    [sym_stopsignal] = STATE(211),
    [sym_user] = STATE(211),
    [sym_volume] = STATE(211),
    [sym_workdir] = STATE(211),
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
    [sym__directive] = STATE(211),
    [sym_add] = STATE(211),
    [sym_arg] = STATE(211),
    [sym_cmd] = STATE(211),
    [sym_copy] = STATE(211),
    [sym_entrypoint] = STATE(211),
    [sym_env] = STATE(211),
    [sym_expose] = STATE(211),
    [sym_from] = STATE(211),
    [sym_healthcheck] = STATE(211),
    [sym_label] = STATE(211),
    [sym_maintainer] = STATE(211),
    [sym_onbuild] = STATE(211),
    [sym_run] = STATE(211),
    [sym_shell] = STATE(211),
    [sym_stopsignal] = STATE(211),
    [sym_user] = STATE(211),
    [sym_volume] = STATE(211),
    [sym_workdir] = STATE(211),
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
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym__port] = STATE(102),
    [sym_port] = STATE(102),
    [sym_port_range] = STATE(102),
    [sym__port_part] = STATE(77),
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
    [sym_add] = STATE(203),
    [sym_arg] = STATE(203),
    [sym_cmd] = STATE(203),
    [sym_copy] = STATE(203),
    [sym_entrypoint] = STATE(203),
    [sym_env] = STATE(203),
    [sym_expose] = STATE(203),
    [sym_healthcheck] = STATE(203),
    [sym_label] = STATE(203),
    [sym_run] = STATE(203),
    [sym_shell] = STATE(203),
    [sym_stopsignal] = STATE(203),
    [sym_user] = STATE(203),
    [sym_volume] = STATE(203),
    [sym_workdir] = STATE(203),
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
    [sym__port_spec] = STATE(6),
    [sym_mapped_port] = STATE(6),
    [sym__port] = STATE(102),
    [sym_port] = STATE(102),
    [sym_port_range] = STATE(102),
    [sym__port_part] = STATE(77),
    [aux_sym_expose_repeat1] = STATE(6),
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
    [aux_sym__repository_start_repeat1] = STATE(14),
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
    [anon_sym_SLASH] = ACTIONS(141),
    [aux_sym__repository_start_token2] = ACTIONS(139),
    [aux_sym__repository_start_token3] = ACTIONS(143),
    [aux_sym__repository_start_token10] = ACTIONS(141),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym__space_no_newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [10] = {
    [aux_sym__repository_start_repeat2] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_add_token1] = ACTIONS(147),
    [aux_sym_arg_token1] = ACTIONS(147),
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_copy_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_env_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(145),
    [aux_sym_healthcheck_token1] = ACTIONS(147),
    [aux_sym_label_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_onbuild_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_shell_token1] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(147),
    [aux_sym_user_token1] = ACTIONS(147),
    [aux_sym_volume_token1] = ACTIONS(147),
    [aux_sym_workdir_token1] = ACTIONS(147),
    [aux_sym_from_layer_token5] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token5] = ACTIONS(149),
    [aux_sym__repository_start_token10] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym__space_no_newline] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [11] = {
    [aux_sym__repository_start_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_add_token1] = ACTIONS(157),
    [aux_sym_arg_token1] = ACTIONS(157),
    [aux_sym_cmd_token1] = ACTIONS(157),
    [aux_sym_copy_token1] = ACTIONS(157),
    [aux_sym_entrypoint_token1] = ACTIONS(157),
    [aux_sym_env_token1] = ACTIONS(157),
    [aux_sym_expose_token1] = ACTIONS(157),
    [aux_sym_from_token1] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(155),
    [aux_sym_healthcheck_token1] = ACTIONS(157),
    [aux_sym_label_token1] = ACTIONS(157),
    [aux_sym_maintainer_token1] = ACTIONS(157),
    [aux_sym_onbuild_token1] = ACTIONS(157),
    [aux_sym_run_token1] = ACTIONS(157),
    [aux_sym_shell_token1] = ACTIONS(157),
    [aux_sym_stopsignal_token1] = ACTIONS(157),
    [aux_sym_user_token1] = ACTIONS(157),
    [aux_sym_volume_token1] = ACTIONS(157),
    [aux_sym_workdir_token1] = ACTIONS(157),
    [aux_sym_from_layer_token5] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(155),
    [aux_sym__repository_start_token3] = ACTIONS(157),
    [aux_sym__repository_start_token5] = ACTIONS(159),
    [aux_sym__repository_start_token10] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(155),
    [sym__space_no_newline] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [12] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
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
    [aux_sym_from_layer_token9] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(162),
    [aux_sym__repository_start_token3] = ACTIONS(164),
    [aux_sym__repository_start_token7] = ACTIONS(166),
    [aux_sym__repository_start_token10] = ACTIONS(162),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(162),
    [sym__space_no_newline] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [13] = {
    [aux_sym__repository_start_repeat1] = STATE(13),
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
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token2] = ACTIONS(173),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [aux_sym__repository_start_token10] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [14] = {
    [aux_sym__repository_start_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_add_token1] = ACTIONS(147),
    [aux_sym_arg_token1] = ACTIONS(147),
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_copy_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_env_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(145),
    [aux_sym_healthcheck_token1] = ACTIONS(147),
    [aux_sym_label_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_onbuild_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_shell_token1] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(147),
    [aux_sym_user_token1] = ACTIONS(147),
    [anon_sym_DOLLAR] = ACTIONS(139),
    [aux_sym_volume_token1] = ACTIONS(147),
    [aux_sym_workdir_token1] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token2] = ACTIONS(139),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token10] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym__space_no_newline] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [15] = {
    [aux_sym__repository_start_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(178),
    [aux_sym_arg_token1] = ACTIONS(178),
    [aux_sym_cmd_token1] = ACTIONS(178),
    [aux_sym_copy_token1] = ACTIONS(178),
    [aux_sym_entrypoint_token1] = ACTIONS(178),
    [aux_sym_env_token1] = ACTIONS(178),
    [aux_sym_expose_token1] = ACTIONS(178),
    [aux_sym_from_token1] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(176),
    [aux_sym_healthcheck_token1] = ACTIONS(178),
    [aux_sym_label_token1] = ACTIONS(178),
    [aux_sym_maintainer_token1] = ACTIONS(178),
    [aux_sym_onbuild_token1] = ACTIONS(178),
    [aux_sym_run_token1] = ACTIONS(178),
    [aux_sym_shell_token1] = ACTIONS(178),
    [aux_sym_stopsignal_token1] = ACTIONS(178),
    [aux_sym_user_token1] = ACTIONS(178),
    [aux_sym_volume_token1] = ACTIONS(178),
    [aux_sym_workdir_token1] = ACTIONS(178),
    [aux_sym_from_layer_token5] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token5] = ACTIONS(149),
    [aux_sym__repository_start_token10] = ACTIONS(180),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(176),
    [sym__space_no_newline] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [16] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(178),
    [aux_sym_arg_token1] = ACTIONS(178),
    [aux_sym_cmd_token1] = ACTIONS(178),
    [aux_sym_copy_token1] = ACTIONS(178),
    [aux_sym_entrypoint_token1] = ACTIONS(178),
    [aux_sym_env_token1] = ACTIONS(178),
    [aux_sym_expose_token1] = ACTIONS(178),
    [aux_sym_from_token1] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(176),
    [aux_sym_healthcheck_token1] = ACTIONS(178),
    [aux_sym_label_token1] = ACTIONS(178),
    [aux_sym_maintainer_token1] = ACTIONS(178),
    [aux_sym_onbuild_token1] = ACTIONS(178),
    [aux_sym_run_token1] = ACTIONS(178),
    [aux_sym_shell_token1] = ACTIONS(178),
    [aux_sym_stopsignal_token1] = ACTIONS(178),
    [aux_sym_user_token1] = ACTIONS(178),
    [aux_sym_volume_token1] = ACTIONS(178),
    [aux_sym_workdir_token1] = ACTIONS(178),
    [aux_sym_from_layer_token9] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token7] = ACTIONS(184),
    [aux_sym__repository_start_token10] = ACTIONS(180),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(176),
    [sym__space_no_newline] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [17] = {
    [aux_sym__repository_start_repeat4] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(178),
    [aux_sym_arg_token1] = ACTIONS(178),
    [aux_sym_cmd_token1] = ACTIONS(178),
    [aux_sym_copy_token1] = ACTIONS(178),
    [aux_sym_entrypoint_token1] = ACTIONS(178),
    [aux_sym_env_token1] = ACTIONS(178),
    [aux_sym_expose_token1] = ACTIONS(178),
    [aux_sym_from_token1] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(176),
    [aux_sym_healthcheck_token1] = ACTIONS(178),
    [aux_sym_label_token1] = ACTIONS(178),
    [aux_sym_maintainer_token1] = ACTIONS(178),
    [aux_sym_onbuild_token1] = ACTIONS(178),
    [aux_sym_run_token1] = ACTIONS(178),
    [aux_sym_shell_token1] = ACTIONS(178),
    [aux_sym_stopsignal_token1] = ACTIONS(178),
    [aux_sym_user_token1] = ACTIONS(178),
    [aux_sym_volume_token1] = ACTIONS(178),
    [aux_sym_workdir_token1] = ACTIONS(178),
    [aux_sym_from_layer_token13] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token9] = ACTIONS(186),
    [aux_sym__repository_start_token10] = ACTIONS(180),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(176),
    [sym__space_no_newline] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [18] = {
    [aux_sym__repository_start_repeat4] = STATE(18),
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
    [aux_sym_from_layer_token13] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(188),
    [aux_sym__repository_start_token3] = ACTIONS(190),
    [aux_sym__repository_start_token9] = ACTIONS(192),
    [aux_sym__repository_start_token10] = ACTIONS(188),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(188),
    [sym__space_no_newline] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [19] = {
    [aux_sym__repository_start_repeat4] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_add_token1] = ACTIONS(147),
    [aux_sym_arg_token1] = ACTIONS(147),
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_copy_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_env_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(145),
    [aux_sym_healthcheck_token1] = ACTIONS(147),
    [aux_sym_label_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_onbuild_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_shell_token1] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(147),
    [aux_sym_user_token1] = ACTIONS(147),
    [aux_sym_volume_token1] = ACTIONS(147),
    [aux_sym_workdir_token1] = ACTIONS(147),
    [aux_sym_from_layer_token13] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token9] = ACTIONS(186),
    [aux_sym__repository_start_token10] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym__space_no_newline] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [20] = {
    [aux_sym__repository_start_repeat3] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_add_token1] = ACTIONS(147),
    [aux_sym_arg_token1] = ACTIONS(147),
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_copy_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_env_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(145),
    [aux_sym_healthcheck_token1] = ACTIONS(147),
    [aux_sym_label_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_onbuild_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_shell_token1] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(147),
    [aux_sym_user_token1] = ACTIONS(147),
    [aux_sym_volume_token1] = ACTIONS(147),
    [aux_sym_workdir_token1] = ACTIONS(147),
    [aux_sym_from_layer_token9] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token7] = ACTIONS(184),
    [aux_sym__repository_start_token10] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym__space_no_newline] = ACTIONS(147),
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
    [aux_sym_volume_token1] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [aux_sym_from_layer_token13] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token9] = ACTIONS(199),
    [aux_sym__repository_start_token10] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [23] = {
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
    [anon_sym_DOLLAR] = ACTIONS(169),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token2] = ACTIONS(169),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [aux_sym__repository_start_token10] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [aux_sym__repository_start_token10] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
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
    [aux_sym_from_layer_token9] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(213),
    [aux_sym__repository_start_token7] = ACTIONS(211),
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
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(215),
    [aux_sym__repository_start_token2] = ACTIONS(215),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [aux_sym__repository_start_token10] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [28] = {
    [aux_sym__repository_start_repeat1] = STATE(28),
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
    [anon_sym_DOLLAR] = ACTIONS(219),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym__repository_start_token2] = ACTIONS(219),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [29] = {
    [aux_sym__repository_start_repeat2] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_add_token1] = ACTIONS(157),
    [aux_sym_arg_token1] = ACTIONS(157),
    [aux_sym_cmd_token1] = ACTIONS(157),
    [aux_sym_copy_token1] = ACTIONS(157),
    [aux_sym_entrypoint_token1] = ACTIONS(157),
    [aux_sym_env_token1] = ACTIONS(157),
    [aux_sym_expose_token1] = ACTIONS(157),
    [aux_sym_from_token1] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(155),
    [aux_sym_healthcheck_token1] = ACTIONS(157),
    [aux_sym_label_token1] = ACTIONS(157),
    [aux_sym_maintainer_token1] = ACTIONS(157),
    [aux_sym_onbuild_token1] = ACTIONS(157),
    [aux_sym_run_token1] = ACTIONS(157),
    [aux_sym_shell_token1] = ACTIONS(157),
    [aux_sym_stopsignal_token1] = ACTIONS(157),
    [aux_sym_user_token1] = ACTIONS(157),
    [aux_sym_volume_token1] = ACTIONS(157),
    [aux_sym_workdir_token1] = ACTIONS(157),
    [aux_sym_from_layer_token5] = ACTIONS(222),
    [aux_sym__repository_start_token3] = ACTIONS(157),
    [aux_sym__repository_start_token5] = ACTIONS(222),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(155),
    [sym__space_no_newline] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [30] = {
    [aux_sym__repository_start_repeat4] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(178),
    [aux_sym_arg_token1] = ACTIONS(178),
    [aux_sym_cmd_token1] = ACTIONS(178),
    [aux_sym_copy_token1] = ACTIONS(178),
    [aux_sym_entrypoint_token1] = ACTIONS(178),
    [aux_sym_env_token1] = ACTIONS(178),
    [aux_sym_expose_token1] = ACTIONS(178),
    [aux_sym_from_token1] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(176),
    [aux_sym_healthcheck_token1] = ACTIONS(178),
    [aux_sym_label_token1] = ACTIONS(178),
    [aux_sym_maintainer_token1] = ACTIONS(178),
    [aux_sym_onbuild_token1] = ACTIONS(178),
    [aux_sym_run_token1] = ACTIONS(178),
    [aux_sym_shell_token1] = ACTIONS(178),
    [aux_sym_stopsignal_token1] = ACTIONS(178),
    [aux_sym_user_token1] = ACTIONS(178),
    [aux_sym_volume_token1] = ACTIONS(178),
    [aux_sym_workdir_token1] = ACTIONS(178),
    [aux_sym_from_layer_token13] = ACTIONS(225),
    [aux_sym__repository_start_token3] = ACTIONS(227),
    [aux_sym__repository_start_token9] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(176),
    [sym__space_no_newline] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [31] = {
    [aux_sym__repository_start_repeat1] = STATE(34),
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
    [anon_sym_DOLLAR] = ACTIONS(229),
    [aux_sym_volume_token1] = ACTIONS(137),
    [aux_sym_workdir_token1] = ACTIONS(137),
    [aux_sym__repository_start_token2] = ACTIONS(229),
    [aux_sym__repository_start_token3] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(135),
    [sym__space_no_newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [32] = {
    [sym_port_protocol] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(233),
    [aux_sym_add_token1] = ACTIONS(233),
    [aux_sym_arg_token1] = ACTIONS(233),
    [aux_sym_cmd_token1] = ACTIONS(233),
    [aux_sym_copy_token1] = ACTIONS(233),
    [aux_sym_entrypoint_token1] = ACTIONS(233),
    [aux_sym_env_token1] = ACTIONS(233),
    [aux_sym_expose_token1] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [aux_sym_from_token1] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [aux_sym_healthcheck_token1] = ACTIONS(233),
    [aux_sym_label_token1] = ACTIONS(233),
    [aux_sym_maintainer_token1] = ACTIONS(233),
    [aux_sym_onbuild_token1] = ACTIONS(233),
    [aux_sym_run_token1] = ACTIONS(233),
    [aux_sym_shell_token1] = ACTIONS(233),
    [aux_sym_stopsignal_token1] = ACTIONS(233),
    [aux_sym_user_token1] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [aux_sym_volume_token1] = ACTIONS(233),
    [aux_sym_workdir_token1] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [aux_sym__port_part_token1] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [33] = {
    [aux_sym__repository_start_repeat3] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(178),
    [aux_sym_arg_token1] = ACTIONS(178),
    [aux_sym_cmd_token1] = ACTIONS(178),
    [aux_sym_copy_token1] = ACTIONS(178),
    [aux_sym_entrypoint_token1] = ACTIONS(178),
    [aux_sym_env_token1] = ACTIONS(178),
    [aux_sym_expose_token1] = ACTIONS(178),
    [aux_sym_from_token1] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(176),
    [aux_sym_healthcheck_token1] = ACTIONS(178),
    [aux_sym_label_token1] = ACTIONS(178),
    [aux_sym_maintainer_token1] = ACTIONS(178),
    [aux_sym_onbuild_token1] = ACTIONS(178),
    [aux_sym_run_token1] = ACTIONS(178),
    [aux_sym_shell_token1] = ACTIONS(178),
    [aux_sym_stopsignal_token1] = ACTIONS(178),
    [aux_sym_user_token1] = ACTIONS(178),
    [aux_sym_volume_token1] = ACTIONS(178),
    [aux_sym_workdir_token1] = ACTIONS(178),
    [aux_sym_from_layer_token9] = ACTIONS(237),
    [aux_sym__repository_start_token3] = ACTIONS(227),
    [aux_sym__repository_start_token7] = ACTIONS(237),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(176),
    [sym__space_no_newline] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [34] = {
    [aux_sym__repository_start_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_add_token1] = ACTIONS(147),
    [aux_sym_arg_token1] = ACTIONS(147),
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_copy_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_env_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
    [aux_sym_healthcheck_token1] = ACTIONS(147),
    [aux_sym_label_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_onbuild_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_shell_token1] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(147),
    [aux_sym_user_token1] = ACTIONS(147),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [aux_sym_volume_token1] = ACTIONS(147),
    [aux_sym_workdir_token1] = ACTIONS(147),
    [aux_sym__repository_start_token2] = ACTIONS(229),
    [aux_sym__repository_start_token3] = ACTIONS(239),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym__space_no_newline] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [35] = {
    [aux_sym__repository_start_repeat3] = STATE(35),
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
    [aux_sym_from_layer_token9] = ACTIONS(241),
    [aux_sym__repository_start_token3] = ACTIONS(164),
    [aux_sym__repository_start_token7] = ACTIONS(241),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(162),
    [sym__space_no_newline] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [36] = {
    [aux_sym__repository_start_repeat4] = STATE(36),
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
    [aux_sym_from_layer_token13] = ACTIONS(244),
    [aux_sym__repository_start_token3] = ACTIONS(190),
    [aux_sym__repository_start_token9] = ACTIONS(244),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(188),
    [sym__space_no_newline] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [37] = {
    [aux_sym__repository_start_repeat2] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_add_token1] = ACTIONS(147),
    [aux_sym_arg_token1] = ACTIONS(147),
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_copy_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_env_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
    [aux_sym_healthcheck_token1] = ACTIONS(147),
    [aux_sym_label_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_onbuild_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_shell_token1] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(147),
    [aux_sym_user_token1] = ACTIONS(147),
    [aux_sym_volume_token1] = ACTIONS(147),
    [aux_sym_workdir_token1] = ACTIONS(147),
    [aux_sym_from_layer_token5] = ACTIONS(247),
    [aux_sym__repository_start_token3] = ACTIONS(239),
    [aux_sym__repository_start_token5] = ACTIONS(247),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym__space_no_newline] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [38] = {
    [aux_sym__repository_start_repeat3] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_add_token1] = ACTIONS(147),
    [aux_sym_arg_token1] = ACTIONS(147),
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_copy_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_env_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
    [aux_sym_healthcheck_token1] = ACTIONS(147),
    [aux_sym_label_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_onbuild_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_shell_token1] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(147),
    [aux_sym_user_token1] = ACTIONS(147),
    [aux_sym_volume_token1] = ACTIONS(147),
    [aux_sym_workdir_token1] = ACTIONS(147),
    [aux_sym_from_layer_token9] = ACTIONS(237),
    [aux_sym__repository_start_token3] = ACTIONS(239),
    [aux_sym__repository_start_token7] = ACTIONS(237),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym__space_no_newline] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [39] = {
    [aux_sym__repository_start_repeat4] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_add_token1] = ACTIONS(147),
    [aux_sym_arg_token1] = ACTIONS(147),
    [aux_sym_cmd_token1] = ACTIONS(147),
    [aux_sym_copy_token1] = ACTIONS(147),
    [aux_sym_entrypoint_token1] = ACTIONS(147),
    [aux_sym_env_token1] = ACTIONS(147),
    [aux_sym_expose_token1] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(147),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
    [aux_sym_healthcheck_token1] = ACTIONS(147),
    [aux_sym_label_token1] = ACTIONS(147),
    [aux_sym_maintainer_token1] = ACTIONS(147),
    [aux_sym_onbuild_token1] = ACTIONS(147),
    [aux_sym_run_token1] = ACTIONS(147),
    [aux_sym_shell_token1] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(147),
    [aux_sym_user_token1] = ACTIONS(147),
    [aux_sym_volume_token1] = ACTIONS(147),
    [aux_sym_workdir_token1] = ACTIONS(147),
    [aux_sym_from_layer_token13] = ACTIONS(225),
    [aux_sym__repository_start_token3] = ACTIONS(239),
    [aux_sym__repository_start_token9] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym__space_no_newline] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [40] = {
    [aux_sym__repository_start_repeat2] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(178),
    [aux_sym_arg_token1] = ACTIONS(178),
    [aux_sym_cmd_token1] = ACTIONS(178),
    [aux_sym_copy_token1] = ACTIONS(178),
    [aux_sym_entrypoint_token1] = ACTIONS(178),
    [aux_sym_env_token1] = ACTIONS(178),
    [aux_sym_expose_token1] = ACTIONS(178),
    [aux_sym_from_token1] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(176),
    [aux_sym_healthcheck_token1] = ACTIONS(178),
    [aux_sym_label_token1] = ACTIONS(178),
    [aux_sym_maintainer_token1] = ACTIONS(178),
    [aux_sym_onbuild_token1] = ACTIONS(178),
    [aux_sym_run_token1] = ACTIONS(178),
    [aux_sym_shell_token1] = ACTIONS(178),
    [aux_sym_stopsignal_token1] = ACTIONS(178),
    [aux_sym_user_token1] = ACTIONS(178),
    [aux_sym_volume_token1] = ACTIONS(178),
    [aux_sym_workdir_token1] = ACTIONS(178),
    [aux_sym_from_layer_token5] = ACTIONS(247),
    [aux_sym__repository_start_token3] = ACTIONS(227),
    [aux_sym__repository_start_token5] = ACTIONS(247),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(176),
    [sym__space_no_newline] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [41] = {
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
    [anon_sym_SLASH] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(249),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [42] = {
    [sym_path] = STATE(88),
    [aux_sym__paths] = STATE(45),
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
    [aux_sym_from_layer_token13] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token9] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym__space_no_newline] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [44] = {
    [sym_path] = STATE(88),
    [aux_sym__paths] = STATE(45),
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
    [sym_path] = STATE(88),
    [aux_sym__paths] = STATE(45),
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
  [46] = {
    [aux_sym_path_repeat1] = STATE(50),
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
  [47] = {
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
  [48] = {
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
    [anon_sym_SLASH] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [49] = {
    [aux_sym__repository_start_repeat1] = STATE(64),
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
    [anon_sym_DOLLAR] = ACTIONS(139),
    [aux_sym_volume_token1] = ACTIONS(289),
    [aux_sym_workdir_token1] = ACTIONS(289),
    [aux_sym__repository_start_token2] = ACTIONS(139),
    [aux_sym__repository_start_token3] = ACTIONS(291),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(287),
    [sym__space_no_newline] = ACTIONS(289),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [50] = {
    [aux_sym_path_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(293),
    [aux_sym_add_token1] = ACTIONS(293),
    [aux_sym_arg_token1] = ACTIONS(293),
    [aux_sym_cmd_token1] = ACTIONS(293),
    [aux_sym_copy_token1] = ACTIONS(293),
    [aux_sym_entrypoint_token1] = ACTIONS(293),
    [aux_sym_env_token1] = ACTIONS(293),
    [aux_sym_expose_token1] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [aux_sym_from_token1] = ACTIONS(293),
    [aux_sym_healthcheck_token1] = ACTIONS(293),
    [aux_sym_label_token1] = ACTIONS(293),
    [aux_sym_maintainer_token1] = ACTIONS(293),
    [aux_sym_onbuild_token1] = ACTIONS(293),
    [aux_sym_run_token1] = ACTIONS(293),
    [aux_sym_shell_token1] = ACTIONS(293),
    [aux_sym_stopsignal_token1] = ACTIONS(293),
    [aux_sym_user_token1] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(279),
    [aux_sym_volume_token1] = ACTIONS(293),
    [aux_sym_workdir_token1] = ACTIONS(293),
    [aux_sym_path_token1] = ACTIONS(295),
    [aux_sym_path_token2] = ACTIONS(283),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(293),
    [sym__space_no_newline] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [51] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_add_token1] = ACTIONS(301),
    [aux_sym_arg_token1] = ACTIONS(301),
    [aux_sym_cmd_token1] = ACTIONS(301),
    [aux_sym_copy_token1] = ACTIONS(301),
    [aux_sym_entrypoint_token1] = ACTIONS(301),
    [aux_sym_env_token1] = ACTIONS(301),
    [aux_sym_expose_token1] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(299),
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
    [aux_sym_from_layer_token9] = ACTIONS(184),
    [aux_sym__repository_start_token3] = ACTIONS(303),
    [aux_sym__repository_start_token7] = ACTIONS(184),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym__space_no_newline] = ACTIONS(301),
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
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [53] = {
    [aux_sym__repository_start_repeat4] = STATE(59),
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
    [aux_sym_from_layer_token13] = ACTIONS(186),
    [aux_sym__repository_start_token3] = ACTIONS(309),
    [aux_sym__repository_start_token9] = ACTIONS(186),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym__space_no_newline] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
  [55] = {
    [aux_sym__repository_start_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_add_token1] = ACTIONS(301),
    [aux_sym_arg_token1] = ACTIONS(301),
    [aux_sym_cmd_token1] = ACTIONS(301),
    [aux_sym_copy_token1] = ACTIONS(301),
    [aux_sym_entrypoint_token1] = ACTIONS(301),
    [aux_sym_env_token1] = ACTIONS(301),
    [aux_sym_expose_token1] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(299),
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
    [aux_sym_from_layer_token5] = ACTIONS(149),
    [aux_sym__repository_start_token3] = ACTIONS(303),
    [aux_sym__repository_start_token5] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym__space_no_newline] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [56] = {
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
    [aux_sym_from_layer_token9] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(213),
    [aux_sym__repository_start_token7] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym__space_no_newline] = ACTIONS(213),
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
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [aux_sym__repository_start_token2] = ACTIONS(215),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [59] = {
    [aux_sym__repository_start_repeat4] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_add_token1] = ACTIONS(301),
    [aux_sym_arg_token1] = ACTIONS(301),
    [aux_sym_cmd_token1] = ACTIONS(301),
    [aux_sym_copy_token1] = ACTIONS(301),
    [aux_sym_entrypoint_token1] = ACTIONS(301),
    [aux_sym_env_token1] = ACTIONS(301),
    [aux_sym_expose_token1] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(299),
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
    [aux_sym_from_layer_token13] = ACTIONS(186),
    [aux_sym__repository_start_token3] = ACTIONS(303),
    [aux_sym__repository_start_token9] = ACTIONS(186),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym__space_no_newline] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [60] = {
    [aux_sym__repository_start_repeat3] = STATE(51),
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
    [aux_sym_from_layer_token9] = ACTIONS(184),
    [aux_sym__repository_start_token3] = ACTIONS(309),
    [aux_sym__repository_start_token7] = ACTIONS(184),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym__space_no_newline] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [61] = {
    [aux_sym_path_repeat1] = STATE(61),
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
    [anon_sym_DOLLAR] = ACTIONS(313),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_path_token1] = ACTIONS(316),
    [aux_sym_path_token2] = ACTIONS(318),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym__space_no_newline] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [62] = {
    [sym_path] = STATE(88),
    [aux_sym__paths] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(321),
    [aux_sym_add_token1] = ACTIONS(321),
    [aux_sym_arg_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_copy_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_env_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(321),
    [aux_sym_healthcheck_token1] = ACTIONS(321),
    [aux_sym_label_token1] = ACTIONS(321),
    [aux_sym_maintainer_token1] = ACTIONS(321),
    [aux_sym_onbuild_token1] = ACTIONS(321),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_shell_token1] = ACTIONS(321),
    [aux_sym_stopsignal_token1] = ACTIONS(321),
    [aux_sym_user_token1] = ACTIONS(321),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_volume_token1] = ACTIONS(321),
    [aux_sym_workdir_token1] = ACTIONS(321),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(321),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [63] = {
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
  [64] = {
    [aux_sym__repository_start_repeat1] = STATE(13),
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
    [anon_sym_DOLLAR] = ACTIONS(139),
    [aux_sym_volume_token1] = ACTIONS(307),
    [aux_sym_workdir_token1] = ACTIONS(307),
    [aux_sym__repository_start_token2] = ACTIONS(139),
    [aux_sym__repository_start_token3] = ACTIONS(309),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym__space_no_newline] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [65] = {
    [aux_sym__repository_start_repeat2] = STATE(55),
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
    [aux_sym_from_layer_token5] = ACTIONS(149),
    [aux_sym__repository_start_token3] = ACTIONS(309),
    [aux_sym__repository_start_token5] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(305),
    [sym__space_no_newline] = ACTIONS(307),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [66] = {
    [sym_path] = STATE(88),
    [aux_sym__paths] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(323),
    [aux_sym_add_token1] = ACTIONS(323),
    [aux_sym_arg_token1] = ACTIONS(323),
    [aux_sym_cmd_token1] = ACTIONS(323),
    [aux_sym_copy_token1] = ACTIONS(323),
    [aux_sym_entrypoint_token1] = ACTIONS(323),
    [aux_sym_env_token1] = ACTIONS(323),
    [aux_sym_expose_token1] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(323),
    [aux_sym_healthcheck_token1] = ACTIONS(323),
    [aux_sym_label_token1] = ACTIONS(323),
    [aux_sym_maintainer_token1] = ACTIONS(323),
    [aux_sym_onbuild_token1] = ACTIONS(323),
    [aux_sym_run_token1] = ACTIONS(323),
    [aux_sym_shell_token1] = ACTIONS(323),
    [aux_sym_stopsignal_token1] = ACTIONS(323),
    [aux_sym_user_token1] = ACTIONS(323),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_volume_token1] = ACTIONS(323),
    [aux_sym_workdir_token1] = ACTIONS(323),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
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
    [anon_sym_DOLLAR] = ACTIONS(169),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym__repository_start_token2] = ACTIONS(169),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym__space_no_newline] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [aux_sym_add_token1] = ACTIONS(293),
    [aux_sym_arg_token1] = ACTIONS(293),
    [aux_sym_cmd_token1] = ACTIONS(293),
    [aux_sym_copy_token1] = ACTIONS(293),
    [aux_sym_entrypoint_token1] = ACTIONS(293),
    [aux_sym_env_token1] = ACTIONS(293),
    [aux_sym_expose_token1] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [aux_sym_from_token1] = ACTIONS(293),
    [aux_sym_healthcheck_token1] = ACTIONS(293),
    [aux_sym_label_token1] = ACTIONS(293),
    [aux_sym_maintainer_token1] = ACTIONS(293),
    [aux_sym_onbuild_token1] = ACTIONS(293),
    [aux_sym_run_token1] = ACTIONS(293),
    [aux_sym_shell_token1] = ACTIONS(293),
    [aux_sym_stopsignal_token1] = ACTIONS(293),
    [aux_sym_user_token1] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [aux_sym_volume_token1] = ACTIONS(293),
    [aux_sym_workdir_token1] = ACTIONS(293),
    [aux_sym_path_token1] = ACTIONS(297),
    [aux_sym_path_token2] = ACTIONS(297),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(293),
    [sym__space_no_newline] = ACTIONS(297),
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
    [aux_sym_from_token1] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(325),
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
    [anon_sym_SLASH] = ACTIONS(329),
    [aux_sym__repository_start_token10] = ACTIONS(329),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(325),
    [sym__space_no_newline] = ACTIONS(327),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [70] = {
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
  [71] = {
    [aux_sym__repository_start_repeat1] = STATE(13),
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
    [anon_sym_DOLLAR] = ACTIONS(139),
    [aux_sym_volume_token1] = ACTIONS(335),
    [aux_sym_workdir_token1] = ACTIONS(335),
    [aux_sym__repository_start_token2] = ACTIONS(139),
    [aux_sym__repository_start_token3] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [72] = {
    [aux_sym__repository_start_repeat2] = STATE(83),
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
    [aux_sym_from_layer_token5] = ACTIONS(149),
    [aux_sym__repository_start_token3] = ACTIONS(337),
    [aux_sym__repository_start_token5] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [73] = {
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
  [74] = {
    [aux_sym__repository_start_repeat3] = STATE(84),
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
    [aux_sym_from_layer_token9] = ACTIONS(184),
    [aux_sym__repository_start_token3] = ACTIONS(337),
    [aux_sym__repository_start_token7] = ACTIONS(184),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [75] = {
    [aux_sym__repository_start_repeat4] = STATE(85),
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
    [aux_sym_from_layer_token13] = ACTIONS(186),
    [aux_sym__repository_start_token3] = ACTIONS(337),
    [aux_sym__repository_start_token9] = ACTIONS(186),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym__space_no_newline] = ACTIONS(335),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
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
    [anon_sym_COLON] = ACTIONS(347),
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
    [anon_sym_DASH] = ACTIONS(349),
    [aux_sym__port_part_token1] = ACTIONS(347),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(347),
    [sym_comment] = ACTIONS(5),
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
    [aux_sym_from_token1] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(351),
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
    [anon_sym_SLASH] = ACTIONS(355),
    [aux_sym__repository_start_token10] = ACTIONS(355),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(351),
    [sym__space_no_newline] = ACTIONS(353),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [79] = {
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
  [80] = {
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
  [81] = {
    [aux_sym__repository_start_repeat1] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(361),
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
    [anon_sym_DOLLAR] = ACTIONS(139),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [aux_sym__repository_start_token2] = ACTIONS(139),
    [aux_sym__repository_start_token3] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(361),
    [sym__space_no_newline] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [82] = {
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
  [83] = {
    [aux_sym__repository_start_repeat2] = STATE(11),
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
    [aux_sym_from_layer_token5] = ACTIONS(149),
    [aux_sym__repository_start_token3] = ACTIONS(373),
    [aux_sym__repository_start_token5] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(369),
    [sym__space_no_newline] = ACTIONS(371),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [84] = {
    [aux_sym__repository_start_repeat3] = STATE(12),
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
    [aux_sym_from_layer_token9] = ACTIONS(184),
    [aux_sym__repository_start_token3] = ACTIONS(373),
    [aux_sym__repository_start_token7] = ACTIONS(184),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(369),
    [sym__space_no_newline] = ACTIONS(371),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [85] = {
    [aux_sym__repository_start_repeat4] = STATE(18),
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
    [aux_sym_from_layer_token13] = ACTIONS(186),
    [aux_sym__repository_start_token3] = ACTIONS(373),
    [aux_sym__repository_start_token9] = ACTIONS(186),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(369),
    [sym__space_no_newline] = ACTIONS(371),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [86] = {
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
  [87] = {
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
    [aux_sym_path_token1] = ACTIONS(316),
    [aux_sym_path_token2] = ACTIONS(316),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym__space_no_newline] = ACTIONS(316),
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
    [sym__space_no_newline] = ACTIONS(381),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [aux_sym_add_token1] = ACTIONS(233),
    [aux_sym_arg_token1] = ACTIONS(233),
    [aux_sym_cmd_token1] = ACTIONS(233),
    [aux_sym_copy_token1] = ACTIONS(233),
    [aux_sym_entrypoint_token1] = ACTIONS(233),
    [aux_sym_env_token1] = ACTIONS(233),
    [aux_sym_expose_token1] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [aux_sym_from_token1] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [aux_sym_healthcheck_token1] = ACTIONS(233),
    [aux_sym_label_token1] = ACTIONS(233),
    [aux_sym_maintainer_token1] = ACTIONS(233),
    [aux_sym_onbuild_token1] = ACTIONS(233),
    [aux_sym_run_token1] = ACTIONS(233),
    [aux_sym_shell_token1] = ACTIONS(233),
    [aux_sym_stopsignal_token1] = ACTIONS(233),
    [aux_sym_user_token1] = ACTIONS(233),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [aux_sym_volume_token1] = ACTIONS(233),
    [aux_sym_workdir_token1] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [aux_sym__port_part_token1] = ACTIONS(233),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [90] = {
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
    [aux_sym_path_token1] = ACTIONS(217),
    [aux_sym_path_token2] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [91] = {
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
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_add_token1] = ACTIONS(145),
    [aux_sym_arg_token1] = ACTIONS(145),
    [aux_sym_cmd_token1] = ACTIONS(145),
    [aux_sym_copy_token1] = ACTIONS(145),
    [aux_sym_entrypoint_token1] = ACTIONS(145),
    [aux_sym_env_token1] = ACTIONS(145),
    [aux_sym_expose_token1] = ACTIONS(145),
    [aux_sym_from_token1] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(145),
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
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym__repository_start_token10] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym__space_no_newline] = ACTIONS(147),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(176),
    [aux_sym_arg_token1] = ACTIONS(176),
    [aux_sym_cmd_token1] = ACTIONS(176),
    [aux_sym_copy_token1] = ACTIONS(176),
    [aux_sym_entrypoint_token1] = ACTIONS(176),
    [aux_sym_env_token1] = ACTIONS(176),
    [aux_sym_expose_token1] = ACTIONS(176),
    [aux_sym_from_token1] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(176),
    [aux_sym_healthcheck_token1] = ACTIONS(176),
    [aux_sym_label_token1] = ACTIONS(176),
    [aux_sym_maintainer_token1] = ACTIONS(176),
    [aux_sym_onbuild_token1] = ACTIONS(176),
    [aux_sym_run_token1] = ACTIONS(176),
    [aux_sym_shell_token1] = ACTIONS(176),
    [aux_sym_stopsignal_token1] = ACTIONS(176),
    [aux_sym_user_token1] = ACTIONS(176),
    [aux_sym_volume_token1] = ACTIONS(176),
    [aux_sym_workdir_token1] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token10] = ACTIONS(180),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(176),
    [sym__space_no_newline] = ACTIONS(178),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [94] = {
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
  [95] = {
    [aux_sym__repository_start_repeat2] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(387),
    [aux_sym_add_token1] = ACTIONS(389),
    [aux_sym_arg_token1] = ACTIONS(389),
    [aux_sym_cmd_token1] = ACTIONS(389),
    [aux_sym_copy_token1] = ACTIONS(389),
    [aux_sym_entrypoint_token1] = ACTIONS(389),
    [aux_sym_env_token1] = ACTIONS(389),
    [aux_sym_expose_token1] = ACTIONS(389),
    [aux_sym_from_token1] = ACTIONS(389),
    [aux_sym_healthcheck_token1] = ACTIONS(389),
    [aux_sym_label_token1] = ACTIONS(389),
    [aux_sym_maintainer_token1] = ACTIONS(389),
    [aux_sym_onbuild_token1] = ACTIONS(389),
    [aux_sym_run_token1] = ACTIONS(389),
    [aux_sym_shell_token1] = ACTIONS(389),
    [aux_sym_stopsignal_token1] = ACTIONS(389),
    [aux_sym_user_token1] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(389),
    [aux_sym_workdir_token1] = ACTIONS(389),
    [aux_sym_from_layer_token5] = ACTIONS(391),
    [aux_sym__repository_start_token3] = ACTIONS(393),
    [aux_sym__repository_start_token5] = ACTIONS(391),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [96] = {
    [aux_sym__repository_start_repeat4] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(387),
    [aux_sym_add_token1] = ACTIONS(389),
    [aux_sym_arg_token1] = ACTIONS(389),
    [aux_sym_cmd_token1] = ACTIONS(389),
    [aux_sym_copy_token1] = ACTIONS(389),
    [aux_sym_entrypoint_token1] = ACTIONS(389),
    [aux_sym_env_token1] = ACTIONS(389),
    [aux_sym_expose_token1] = ACTIONS(389),
    [aux_sym_from_token1] = ACTIONS(389),
    [aux_sym_healthcheck_token1] = ACTIONS(389),
    [aux_sym_label_token1] = ACTIONS(389),
    [aux_sym_maintainer_token1] = ACTIONS(389),
    [aux_sym_onbuild_token1] = ACTIONS(389),
    [aux_sym_run_token1] = ACTIONS(389),
    [aux_sym_shell_token1] = ACTIONS(389),
    [aux_sym_stopsignal_token1] = ACTIONS(389),
    [aux_sym_user_token1] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(389),
    [aux_sym_workdir_token1] = ACTIONS(389),
    [aux_sym_from_layer_token13] = ACTIONS(395),
    [aux_sym__repository_start_token3] = ACTIONS(393),
    [aux_sym__repository_start_token9] = ACTIONS(395),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [97] = {
    [aux_sym__repository_start_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(171),
    [aux_sym_arg_token1] = ACTIONS(171),
    [aux_sym_cmd_token1] = ACTIONS(171),
    [aux_sym_copy_token1] = ACTIONS(171),
    [aux_sym_entrypoint_token1] = ACTIONS(171),
    [aux_sym_env_token1] = ACTIONS(171),
    [aux_sym_expose_token1] = ACTIONS(171),
    [aux_sym_from_token1] = ACTIONS(171),
    [aux_sym_healthcheck_token1] = ACTIONS(171),
    [aux_sym_label_token1] = ACTIONS(171),
    [aux_sym_maintainer_token1] = ACTIONS(171),
    [aux_sym_onbuild_token1] = ACTIONS(171),
    [aux_sym_run_token1] = ACTIONS(171),
    [aux_sym_shell_token1] = ACTIONS(171),
    [aux_sym_stopsignal_token1] = ACTIONS(171),
    [aux_sym_user_token1] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(397),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym__repository_start_token2] = ACTIONS(397),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [98] = {
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
    [aux_sym_path_token1] = ACTIONS(400),
    [aux_sym_path_token2] = ACTIONS(400),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [99] = {
    [aux_sym_path_repeat1] = STATE(99),
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
    [anon_sym_DOLLAR] = ACTIONS(402),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_path_token1] = ACTIONS(316),
    [aux_sym_path_token2] = ACTIONS(405),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [100] = {
    [aux_sym__repository_start_repeat1] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(408),
    [aux_sym_add_token1] = ACTIONS(410),
    [aux_sym_arg_token1] = ACTIONS(410),
    [aux_sym_cmd_token1] = ACTIONS(410),
    [aux_sym_copy_token1] = ACTIONS(410),
    [aux_sym_entrypoint_token1] = ACTIONS(410),
    [aux_sym_env_token1] = ACTIONS(410),
    [aux_sym_expose_token1] = ACTIONS(410),
    [aux_sym_from_token1] = ACTIONS(410),
    [aux_sym_healthcheck_token1] = ACTIONS(410),
    [aux_sym_label_token1] = ACTIONS(410),
    [aux_sym_maintainer_token1] = ACTIONS(410),
    [aux_sym_onbuild_token1] = ACTIONS(410),
    [aux_sym_run_token1] = ACTIONS(410),
    [aux_sym_shell_token1] = ACTIONS(410),
    [aux_sym_stopsignal_token1] = ACTIONS(410),
    [aux_sym_user_token1] = ACTIONS(410),
    [anon_sym_DOLLAR] = ACTIONS(412),
    [aux_sym_volume_token1] = ACTIONS(410),
    [aux_sym_workdir_token1] = ACTIONS(410),
    [aux_sym__repository_start_token2] = ACTIONS(412),
    [aux_sym__repository_start_token3] = ACTIONS(414),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(408),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [101] = {
    [aux_sym_path_repeat1] = STATE(107),
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
    [anon_sym_DOLLAR] = ACTIONS(416),
    [aux_sym_volume_token1] = ACTIONS(277),
    [aux_sym_workdir_token1] = ACTIONS(277),
    [aux_sym_path_token1] = ACTIONS(418),
    [aux_sym_path_token2] = ACTIONS(420),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [aux_sym_add_token1] = ACTIONS(422),
    [aux_sym_arg_token1] = ACTIONS(422),
    [aux_sym_cmd_token1] = ACTIONS(422),
    [aux_sym_copy_token1] = ACTIONS(422),
    [aux_sym_entrypoint_token1] = ACTIONS(422),
    [aux_sym_env_token1] = ACTIONS(422),
    [aux_sym_expose_token1] = ACTIONS(422),
    [anon_sym_DQUOTE] = ACTIONS(422),
    [aux_sym_from_token1] = ACTIONS(422),
    [anon_sym_COLON] = ACTIONS(424),
    [aux_sym_healthcheck_token1] = ACTIONS(422),
    [aux_sym_label_token1] = ACTIONS(422),
    [aux_sym_maintainer_token1] = ACTIONS(422),
    [aux_sym_onbuild_token1] = ACTIONS(422),
    [aux_sym_run_token1] = ACTIONS(422),
    [aux_sym_shell_token1] = ACTIONS(422),
    [aux_sym_stopsignal_token1] = ACTIONS(422),
    [aux_sym_user_token1] = ACTIONS(422),
    [anon_sym_DOLLAR] = ACTIONS(422),
    [aux_sym_volume_token1] = ACTIONS(422),
    [aux_sym_workdir_token1] = ACTIONS(422),
    [aux_sym__port_part_token1] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(422),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(426),
    [aux_sym_add_token1] = ACTIONS(426),
    [aux_sym_arg_token1] = ACTIONS(426),
    [aux_sym_cmd_token1] = ACTIONS(426),
    [aux_sym_copy_token1] = ACTIONS(426),
    [aux_sym_entrypoint_token1] = ACTIONS(426),
    [aux_sym_env_token1] = ACTIONS(426),
    [aux_sym_expose_token1] = ACTIONS(426),
    [anon_sym_DQUOTE] = ACTIONS(426),
    [aux_sym_from_token1] = ACTIONS(426),
    [anon_sym_COLON] = ACTIONS(426),
    [aux_sym_healthcheck_token1] = ACTIONS(426),
    [aux_sym_label_token1] = ACTIONS(426),
    [aux_sym_maintainer_token1] = ACTIONS(426),
    [aux_sym_onbuild_token1] = ACTIONS(426),
    [aux_sym_run_token1] = ACTIONS(426),
    [aux_sym_shell_token1] = ACTIONS(426),
    [aux_sym_stopsignal_token1] = ACTIONS(426),
    [aux_sym_user_token1] = ACTIONS(426),
    [anon_sym_DOLLAR] = ACTIONS(426),
    [aux_sym_volume_token1] = ACTIONS(426),
    [aux_sym_workdir_token1] = ACTIONS(426),
    [aux_sym__port_part_token1] = ACTIONS(426),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(426),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [104] = {
    [aux_sym__repository_start_repeat2] = STATE(104),
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_add_token1] = ACTIONS(157),
    [aux_sym_arg_token1] = ACTIONS(157),
    [aux_sym_cmd_token1] = ACTIONS(157),
    [aux_sym_copy_token1] = ACTIONS(157),
    [aux_sym_entrypoint_token1] = ACTIONS(157),
    [aux_sym_env_token1] = ACTIONS(157),
    [aux_sym_expose_token1] = ACTIONS(157),
    [aux_sym_from_token1] = ACTIONS(157),
    [aux_sym_healthcheck_token1] = ACTIONS(157),
    [aux_sym_label_token1] = ACTIONS(157),
    [aux_sym_maintainer_token1] = ACTIONS(157),
    [aux_sym_onbuild_token1] = ACTIONS(157),
    [aux_sym_run_token1] = ACTIONS(157),
    [aux_sym_shell_token1] = ACTIONS(157),
    [aux_sym_stopsignal_token1] = ACTIONS(157),
    [aux_sym_user_token1] = ACTIONS(157),
    [aux_sym_volume_token1] = ACTIONS(157),
    [aux_sym_workdir_token1] = ACTIONS(157),
    [aux_sym_from_layer_token5] = ACTIONS(428),
    [aux_sym__repository_start_token3] = ACTIONS(157),
    [aux_sym__repository_start_token5] = ACTIONS(428),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(155),
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
    [aux_sym__repository_start_repeat3] = STATE(106),
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
    [aux_sym_from_layer_token9] = ACTIONS(433),
    [aux_sym__repository_start_token3] = ACTIONS(164),
    [aux_sym__repository_start_token7] = ACTIONS(433),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [107] = {
    [aux_sym_path_repeat1] = STATE(99),
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
    [anon_sym_DOLLAR] = ACTIONS(416),
    [aux_sym_volume_token1] = ACTIONS(293),
    [aux_sym_workdir_token1] = ACTIONS(293),
    [aux_sym_path_token1] = ACTIONS(436),
    [aux_sym_path_token2] = ACTIONS(420),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(293),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [108] = {
    [aux_sym__repository_start_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(387),
    [aux_sym_add_token1] = ACTIONS(389),
    [aux_sym_arg_token1] = ACTIONS(389),
    [aux_sym_cmd_token1] = ACTIONS(389),
    [aux_sym_copy_token1] = ACTIONS(389),
    [aux_sym_entrypoint_token1] = ACTIONS(389),
    [aux_sym_env_token1] = ACTIONS(389),
    [aux_sym_expose_token1] = ACTIONS(389),
    [aux_sym_from_token1] = ACTIONS(389),
    [aux_sym_healthcheck_token1] = ACTIONS(389),
    [aux_sym_label_token1] = ACTIONS(389),
    [aux_sym_maintainer_token1] = ACTIONS(389),
    [aux_sym_onbuild_token1] = ACTIONS(389),
    [aux_sym_run_token1] = ACTIONS(389),
    [aux_sym_shell_token1] = ACTIONS(389),
    [aux_sym_stopsignal_token1] = ACTIONS(389),
    [aux_sym_user_token1] = ACTIONS(389),
    [anon_sym_DOLLAR] = ACTIONS(412),
    [aux_sym_volume_token1] = ACTIONS(389),
    [aux_sym_workdir_token1] = ACTIONS(389),
    [aux_sym__repository_start_token2] = ACTIONS(412),
    [aux_sym__repository_start_token3] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [109] = {
    [aux_sym__repository_start_repeat4] = STATE(111),
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
    [aux_sym_from_layer_token13] = ACTIONS(395),
    [aux_sym__repository_start_token3] = ACTIONS(442),
    [aux_sym__repository_start_token9] = ACTIONS(395),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(438),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [110] = {
    [aux_sym__repository_start_repeat3] = STATE(106),
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
    [aux_sym_from_layer_token9] = ACTIONS(444),
    [aux_sym__repository_start_token3] = ACTIONS(442),
    [aux_sym__repository_start_token7] = ACTIONS(444),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(438),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [111] = {
    [aux_sym__repository_start_repeat4] = STATE(111),
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
    [aux_sym_from_layer_token13] = ACTIONS(446),
    [aux_sym__repository_start_token3] = ACTIONS(190),
    [aux_sym__repository_start_token9] = ACTIONS(446),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [112] = {
    [aux_sym__repository_start_repeat2] = STATE(104),
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
    [aux_sym_from_layer_token5] = ACTIONS(391),
    [aux_sym__repository_start_token3] = ACTIONS(442),
    [aux_sym__repository_start_token5] = ACTIONS(391),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(438),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [113] = {
    [aux_sym__repository_start_repeat3] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(387),
    [aux_sym_add_token1] = ACTIONS(389),
    [aux_sym_arg_token1] = ACTIONS(389),
    [aux_sym_cmd_token1] = ACTIONS(389),
    [aux_sym_copy_token1] = ACTIONS(389),
    [aux_sym_entrypoint_token1] = ACTIONS(389),
    [aux_sym_env_token1] = ACTIONS(389),
    [aux_sym_expose_token1] = ACTIONS(389),
    [aux_sym_from_token1] = ACTIONS(389),
    [aux_sym_healthcheck_token1] = ACTIONS(389),
    [aux_sym_label_token1] = ACTIONS(389),
    [aux_sym_maintainer_token1] = ACTIONS(389),
    [aux_sym_onbuild_token1] = ACTIONS(389),
    [aux_sym_run_token1] = ACTIONS(389),
    [aux_sym_shell_token1] = ACTIONS(389),
    [aux_sym_stopsignal_token1] = ACTIONS(389),
    [aux_sym_user_token1] = ACTIONS(389),
    [aux_sym_volume_token1] = ACTIONS(389),
    [aux_sym_workdir_token1] = ACTIONS(389),
    [aux_sym_from_layer_token9] = ACTIONS(444),
    [aux_sym__repository_start_token3] = ACTIONS(393),
    [aux_sym__repository_start_token7] = ACTIONS(444),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [114] = {
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
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [aux_sym_add_token1] = ACTIONS(325),
    [aux_sym_arg_token1] = ACTIONS(325),
    [aux_sym_cmd_token1] = ACTIONS(325),
    [aux_sym_copy_token1] = ACTIONS(325),
    [aux_sym_entrypoint_token1] = ACTIONS(325),
    [aux_sym_env_token1] = ACTIONS(325),
    [aux_sym_expose_token1] = ACTIONS(325),
    [aux_sym_from_token1] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(325),
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
    [sym__space_no_newline] = ACTIONS(327),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [116] = {
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
    [aux_sym_from_layer_token9] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(213),
    [aux_sym__repository_start_token7] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
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
    [aux_sym_from_layer_token5] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token5] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [118] = {
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
    [anon_sym_DOLLAR] = ACTIONS(311),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_path_token1] = ACTIONS(316),
    [aux_sym_path_token2] = ACTIONS(316),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [119] = {
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
    [aux_sym_from_layer_token13] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token9] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_add_token1] = ACTIONS(145),
    [aux_sym_arg_token1] = ACTIONS(145),
    [aux_sym_cmd_token1] = ACTIONS(145),
    [aux_sym_copy_token1] = ACTIONS(145),
    [aux_sym_entrypoint_token1] = ACTIONS(145),
    [aux_sym_env_token1] = ACTIONS(145),
    [aux_sym_expose_token1] = ACTIONS(145),
    [aux_sym_from_token1] = ACTIONS(145),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(145),
    [sym__space_no_newline] = ACTIONS(147),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [121] = {
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
  [122] = {
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
    [sym_line_continuation] = ACTIONS(5),
  },
  [123] = {
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
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(215),
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
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(215),
    [aux_sym_workdir_token1] = ACTIONS(215),
    [aux_sym_path_token1] = ACTIONS(217),
    [aux_sym_path_token2] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [125] = {
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
  [126] = {
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
  [127] = {
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
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [aux_sym_add_token1] = ACTIONS(473),
    [aux_sym_arg_token1] = ACTIONS(473),
    [aux_sym_cmd_token1] = ACTIONS(473),
    [aux_sym_copy_token1] = ACTIONS(473),
    [aux_sym_entrypoint_token1] = ACTIONS(473),
    [aux_sym_env_token1] = ACTIONS(473),
    [aux_sym_expose_token1] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [aux_sym_from_token1] = ACTIONS(473),
    [aux_sym_healthcheck_token1] = ACTIONS(473),
    [aux_sym_label_token1] = ACTIONS(473),
    [aux_sym_maintainer_token1] = ACTIONS(473),
    [aux_sym_onbuild_token1] = ACTIONS(473),
    [aux_sym_run_token1] = ACTIONS(473),
    [aux_sym_shell_token1] = ACTIONS(473),
    [aux_sym_stopsignal_token1] = ACTIONS(473),
    [aux_sym_user_token1] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(473),
    [aux_sym_volume_token1] = ACTIONS(473),
    [aux_sym_workdir_token1] = ACTIONS(473),
    [aux_sym__port_part_token1] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [129] = {
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
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [aux_sym__repository_start_token2] = ACTIONS(215),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [aux_sym_add_token1] = ACTIONS(475),
    [aux_sym_arg_token1] = ACTIONS(475),
    [aux_sym_cmd_token1] = ACTIONS(475),
    [aux_sym_copy_token1] = ACTIONS(475),
    [aux_sym_entrypoint_token1] = ACTIONS(475),
    [aux_sym_env_token1] = ACTIONS(475),
    [aux_sym_expose_token1] = ACTIONS(475),
    [anon_sym_DQUOTE] = ACTIONS(475),
    [aux_sym_from_token1] = ACTIONS(475),
    [aux_sym_healthcheck_token1] = ACTIONS(475),
    [aux_sym_label_token1] = ACTIONS(475),
    [aux_sym_maintainer_token1] = ACTIONS(475),
    [aux_sym_onbuild_token1] = ACTIONS(475),
    [aux_sym_run_token1] = ACTIONS(475),
    [aux_sym_shell_token1] = ACTIONS(475),
    [aux_sym_stopsignal_token1] = ACTIONS(475),
    [aux_sym_user_token1] = ACTIONS(475),
    [anon_sym_DOLLAR] = ACTIONS(475),
    [aux_sym_volume_token1] = ACTIONS(475),
    [aux_sym_workdir_token1] = ACTIONS(475),
    [aux_sym__port_part_token1] = ACTIONS(475),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [aux_sym_add_token1] = ACTIONS(351),
    [aux_sym_arg_token1] = ACTIONS(351),
    [aux_sym_cmd_token1] = ACTIONS(351),
    [aux_sym_copy_token1] = ACTIONS(351),
    [aux_sym_entrypoint_token1] = ACTIONS(351),
    [aux_sym_env_token1] = ACTIONS(351),
    [aux_sym_expose_token1] = ACTIONS(351),
    [aux_sym_from_token1] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(351),
    [anon_sym_AT] = ACTIONS(351),
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
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [aux_sym_add_token1] = ACTIONS(176),
    [aux_sym_arg_token1] = ACTIONS(176),
    [aux_sym_cmd_token1] = ACTIONS(176),
    [aux_sym_copy_token1] = ACTIONS(176),
    [aux_sym_entrypoint_token1] = ACTIONS(176),
    [aux_sym_env_token1] = ACTIONS(176),
    [aux_sym_expose_token1] = ACTIONS(176),
    [aux_sym_from_token1] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(176),
    [aux_sym_healthcheck_token1] = ACTIONS(176),
    [aux_sym_label_token1] = ACTIONS(176),
    [aux_sym_maintainer_token1] = ACTIONS(176),
    [aux_sym_onbuild_token1] = ACTIONS(176),
    [aux_sym_run_token1] = ACTIONS(176),
    [aux_sym_shell_token1] = ACTIONS(176),
    [aux_sym_stopsignal_token1] = ACTIONS(176),
    [aux_sym_user_token1] = ACTIONS(176),
    [aux_sym_volume_token1] = ACTIONS(176),
    [aux_sym_workdir_token1] = ACTIONS(176),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(176),
    [sym__space_no_newline] = ACTIONS(178),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
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
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_add_token1] = ACTIONS(171),
    [aux_sym_arg_token1] = ACTIONS(171),
    [aux_sym_cmd_token1] = ACTIONS(171),
    [aux_sym_copy_token1] = ACTIONS(171),
    [aux_sym_entrypoint_token1] = ACTIONS(171),
    [aux_sym_env_token1] = ACTIONS(171),
    [aux_sym_expose_token1] = ACTIONS(171),
    [aux_sym_from_token1] = ACTIONS(171),
    [aux_sym_healthcheck_token1] = ACTIONS(171),
    [aux_sym_label_token1] = ACTIONS(171),
    [aux_sym_maintainer_token1] = ACTIONS(171),
    [aux_sym_onbuild_token1] = ACTIONS(171),
    [aux_sym_run_token1] = ACTIONS(171),
    [aux_sym_shell_token1] = ACTIONS(171),
    [aux_sym_stopsignal_token1] = ACTIONS(171),
    [aux_sym_user_token1] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(169),
    [aux_sym_volume_token1] = ACTIONS(171),
    [aux_sym_workdir_token1] = ACTIONS(171),
    [aux_sym__repository_start_token2] = ACTIONS(169),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(485),
    [aux_sym_add_token1] = ACTIONS(485),
    [aux_sym_arg_token1] = ACTIONS(485),
    [aux_sym_cmd_token1] = ACTIONS(485),
    [aux_sym_copy_token1] = ACTIONS(485),
    [aux_sym_entrypoint_token1] = ACTIONS(485),
    [aux_sym_env_token1] = ACTIONS(485),
    [aux_sym_expose_token1] = ACTIONS(485),
    [aux_sym_from_token1] = ACTIONS(485),
    [anon_sym_AT] = ACTIONS(485),
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
    [sym__space_no_newline] = ACTIONS(487),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [aux_sym__anything] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(489),
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
    [aux_sym__anything_token1] = ACTIONS(493),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [aux_sym_add_token1] = ACTIONS(457),
    [aux_sym_arg_token1] = ACTIONS(457),
    [aux_sym_cmd_token1] = ACTIONS(457),
    [aux_sym_copy_token1] = ACTIONS(457),
    [aux_sym_entrypoint_token1] = ACTIONS(457),
    [aux_sym_env_token1] = ACTIONS(457),
    [aux_sym_expose_token1] = ACTIONS(457),
    [aux_sym_from_token1] = ACTIONS(457),
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
  [138] = {
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
    [aux_sym_volume_token1] = ACTIONS(195),
    [aux_sym_workdir_token1] = ACTIONS(195),
    [anon_sym_EQ2] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(195),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [aux_sym__anything] = STATE(157),
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
    [aux_sym__anything_token1] = ACTIONS(493),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [140] = {
    [aux_sym__labels_repeat1] = STATE(160),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(499),
    [sym__space_no_newline] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
    [aux_sym__anything] = STATE(141),
    [ts_builtin_sym_end] = ACTIONS(503),
    [aux_sym_add_token1] = ACTIONS(505),
    [aux_sym_arg_token1] = ACTIONS(505),
    [aux_sym_cmd_token1] = ACTIONS(505),
    [aux_sym_copy_token1] = ACTIONS(505),
    [aux_sym_entrypoint_token1] = ACTIONS(505),
    [aux_sym_env_token1] = ACTIONS(505),
    [aux_sym_expose_token1] = ACTIONS(505),
    [aux_sym_from_token1] = ACTIONS(505),
    [aux_sym_healthcheck_token1] = ACTIONS(505),
    [aux_sym_label_token1] = ACTIONS(505),
    [aux_sym_maintainer_token1] = ACTIONS(505),
    [aux_sym_onbuild_token1] = ACTIONS(505),
    [aux_sym_run_token1] = ACTIONS(505),
    [aux_sym_shell_token1] = ACTIONS(505),
    [aux_sym_stopsignal_token1] = ACTIONS(505),
    [aux_sym_user_token1] = ACTIONS(505),
    [aux_sym_volume_token1] = ACTIONS(505),
    [aux_sym_workdir_token1] = ACTIONS(505),
    [aux_sym__anything_token1] = ACTIONS(507),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(503),
    [sym_comment] = ACTIONS(503),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [aux_sym__env_pairs_repeat1] = STATE(144),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(510),
    [sym__space_no_newline] = ACTIONS(512),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_add_token1] = ACTIONS(299),
    [aux_sym_arg_token1] = ACTIONS(299),
    [aux_sym_cmd_token1] = ACTIONS(299),
    [aux_sym_copy_token1] = ACTIONS(299),
    [aux_sym_entrypoint_token1] = ACTIONS(299),
    [aux_sym_env_token1] = ACTIONS(299),
    [aux_sym_expose_token1] = ACTIONS(299),
    [aux_sym_from_token1] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(299),
    [aux_sym_healthcheck_token1] = ACTIONS(299),
    [aux_sym_label_token1] = ACTIONS(299),
    [aux_sym_maintainer_token1] = ACTIONS(299),
    [aux_sym_onbuild_token1] = ACTIONS(299),
    [aux_sym_run_token1] = ACTIONS(299),
    [aux_sym_shell_token1] = ACTIONS(299),
    [aux_sym_stopsignal_token1] = ACTIONS(299),
    [aux_sym_user_token1] = ACTIONS(299),
    [aux_sym_volume_token1] = ACTIONS(299),
    [aux_sym_workdir_token1] = ACTIONS(299),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym__space_no_newline] = ACTIONS(301),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [144] = {
    [aux_sym__env_pairs_repeat1] = STATE(144),
    [ts_builtin_sym_end] = ACTIONS(514),
    [aux_sym_add_token1] = ACTIONS(514),
    [aux_sym_arg_token1] = ACTIONS(514),
    [aux_sym_cmd_token1] = ACTIONS(514),
    [aux_sym_copy_token1] = ACTIONS(514),
    [aux_sym_entrypoint_token1] = ACTIONS(514),
    [aux_sym_env_token1] = ACTIONS(514),
    [aux_sym_expose_token1] = ACTIONS(514),
    [aux_sym_from_token1] = ACTIONS(514),
    [aux_sym_healthcheck_token1] = ACTIONS(514),
    [aux_sym_label_token1] = ACTIONS(514),
    [aux_sym_maintainer_token1] = ACTIONS(514),
    [aux_sym_onbuild_token1] = ACTIONS(514),
    [aux_sym_run_token1] = ACTIONS(514),
    [aux_sym_shell_token1] = ACTIONS(514),
    [aux_sym_stopsignal_token1] = ACTIONS(514),
    [aux_sym_user_token1] = ACTIONS(514),
    [aux_sym_volume_token1] = ACTIONS(514),
    [aux_sym_workdir_token1] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(514),
    [sym__space_no_newline] = ACTIONS(516),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [145] = {
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
    [anon_sym_EQ2] = ACTIONS(519),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(519),
    [sym__space_no_newline] = ACTIONS(521),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [aux_sym_add_token1] = ACTIONS(523),
    [aux_sym_arg_token1] = ACTIONS(523),
    [aux_sym_cmd_token1] = ACTIONS(523),
    [aux_sym_copy_token1] = ACTIONS(523),
    [aux_sym_entrypoint_token1] = ACTIONS(523),
    [aux_sym_env_token1] = ACTIONS(523),
    [aux_sym_expose_token1] = ACTIONS(523),
    [aux_sym_from_token1] = ACTIONS(523),
    [aux_sym_healthcheck_token1] = ACTIONS(523),
    [aux_sym_label_token1] = ACTIONS(523),
    [aux_sym_maintainer_token1] = ACTIONS(523),
    [aux_sym_onbuild_token1] = ACTIONS(523),
    [aux_sym_run_token1] = ACTIONS(523),
    [aux_sym_shell_token1] = ACTIONS(523),
    [aux_sym_stopsignal_token1] = ACTIONS(523),
    [aux_sym_user_token1] = ACTIONS(523),
    [aux_sym_volume_token1] = ACTIONS(523),
    [aux_sym_workdir_token1] = ACTIONS(523),
    [anon_sym_EQ2] = ACTIONS(523),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(523),
    [sym__space_no_newline] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [aux_sym_add_token1] = ACTIONS(527),
    [aux_sym_arg_token1] = ACTIONS(527),
    [aux_sym_cmd_token1] = ACTIONS(527),
    [aux_sym_copy_token1] = ACTIONS(527),
    [aux_sym_entrypoint_token1] = ACTIONS(527),
    [aux_sym_env_token1] = ACTIONS(527),
    [aux_sym_expose_token1] = ACTIONS(527),
    [aux_sym_from_token1] = ACTIONS(527),
    [anon_sym_AT] = ACTIONS(529),
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
    [sym__space_no_newline] = ACTIONS(531),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
    [aux_sym__env_pairs_repeat1] = STATE(142),
    [ts_builtin_sym_end] = ACTIONS(533),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(533),
    [sym__space_no_newline] = ACTIONS(512),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(533),
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
    [anon_sym_EQ2] = ACTIONS(535),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(533),
    [sym__space_no_newline] = ACTIONS(537),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [aux_sym_add_token1] = ACTIONS(539),
    [aux_sym_arg_token1] = ACTIONS(539),
    [aux_sym_cmd_token1] = ACTIONS(539),
    [aux_sym_copy_token1] = ACTIONS(539),
    [aux_sym_entrypoint_token1] = ACTIONS(539),
    [aux_sym_env_token1] = ACTIONS(539),
    [aux_sym_expose_token1] = ACTIONS(539),
    [aux_sym_from_token1] = ACTIONS(539),
    [anon_sym_AT] = ACTIONS(541),
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
    [sym__space_no_newline] = ACTIONS(543),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [151] = {
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
  [152] = {
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
  [153] = {
    [aux_sym__anything] = STATE(157),
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
    [aux_sym__anything_token1] = ACTIONS(493),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(549),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
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
    [aux_sym_volume_token1] = ACTIONS(203),
    [aux_sym_workdir_token1] = ACTIONS(203),
    [anon_sym_EQ2] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [aux_sym_add_token1] = ACTIONS(305),
    [aux_sym_arg_token1] = ACTIONS(305),
    [aux_sym_cmd_token1] = ACTIONS(305),
    [aux_sym_copy_token1] = ACTIONS(305),
    [aux_sym_entrypoint_token1] = ACTIONS(305),
    [aux_sym_env_token1] = ACTIONS(305),
    [aux_sym_expose_token1] = ACTIONS(305),
    [aux_sym_from_token1] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(305),
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
    [sym__space_no_newline] = ACTIONS(307),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
    [aux_sym__anything] = STATE(141),
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
    [aux_sym__anything_token1] = ACTIONS(557),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(553),
    [sym_comment] = ACTIONS(559),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
    [aux_sym__anything] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(503),
    [aux_sym_add_token1] = ACTIONS(505),
    [aux_sym_arg_token1] = ACTIONS(505),
    [aux_sym_cmd_token1] = ACTIONS(505),
    [aux_sym_copy_token1] = ACTIONS(505),
    [aux_sym_entrypoint_token1] = ACTIONS(505),
    [aux_sym_env_token1] = ACTIONS(505),
    [aux_sym_expose_token1] = ACTIONS(505),
    [aux_sym_from_token1] = ACTIONS(505),
    [aux_sym_healthcheck_token1] = ACTIONS(505),
    [aux_sym_label_token1] = ACTIONS(505),
    [aux_sym_maintainer_token1] = ACTIONS(505),
    [aux_sym_onbuild_token1] = ACTIONS(505),
    [aux_sym_run_token1] = ACTIONS(505),
    [aux_sym_shell_token1] = ACTIONS(505),
    [aux_sym_stopsignal_token1] = ACTIONS(505),
    [aux_sym_user_token1] = ACTIONS(505),
    [aux_sym_volume_token1] = ACTIONS(505),
    [aux_sym_workdir_token1] = ACTIONS(505),
    [aux_sym__anything_token1] = ACTIONS(561),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(503),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(215),
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
    [anon_sym_EQ2] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(215),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [159] = {
    [aux_sym__labels_repeat1] = STATE(140),
    [ts_builtin_sym_end] = ACTIONS(564),
    [aux_sym_add_token1] = ACTIONS(564),
    [aux_sym_arg_token1] = ACTIONS(564),
    [aux_sym_cmd_token1] = ACTIONS(564),
    [aux_sym_copy_token1] = ACTIONS(564),
    [aux_sym_entrypoint_token1] = ACTIONS(564),
    [aux_sym_env_token1] = ACTIONS(564),
    [aux_sym_expose_token1] = ACTIONS(564),
    [aux_sym_from_token1] = ACTIONS(564),
    [aux_sym_healthcheck_token1] = ACTIONS(564),
    [aux_sym_label_token1] = ACTIONS(564),
    [aux_sym_maintainer_token1] = ACTIONS(564),
    [aux_sym_onbuild_token1] = ACTIONS(564),
    [aux_sym_run_token1] = ACTIONS(564),
    [aux_sym_shell_token1] = ACTIONS(564),
    [aux_sym_stopsignal_token1] = ACTIONS(564),
    [aux_sym_user_token1] = ACTIONS(564),
    [aux_sym_volume_token1] = ACTIONS(564),
    [aux_sym_workdir_token1] = ACTIONS(564),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(564),
    [sym__space_no_newline] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [160] = {
    [aux_sym__labels_repeat1] = STATE(160),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(566),
    [sym__space_no_newline] = ACTIONS(568),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [161] = {
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
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(575),
    [aux_sym_add_token1] = ACTIONS(575),
    [aux_sym_arg_token1] = ACTIONS(575),
    [aux_sym_cmd_token1] = ACTIONS(575),
    [aux_sym_copy_token1] = ACTIONS(575),
    [aux_sym_entrypoint_token1] = ACTIONS(575),
    [aux_sym_env_token1] = ACTIONS(575),
    [aux_sym_expose_token1] = ACTIONS(575),
    [aux_sym_from_token1] = ACTIONS(575),
    [anon_sym_COLON] = ACTIONS(577),
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
  [163] = {
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
  [164] = {
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
  [165] = {
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
  [166] = {
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
  [167] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(566),
    [sym__space_no_newline] = ACTIONS(587),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [168] = {
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
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(597),
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
    [aux_sym__anything_token1] = ACTIONS(599),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(597),
    [sym_comment] = ACTIONS(597),
    [sym_line_continuation] = ACTIONS(5),
  },
  [171] = {
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
    [sym__space_no_newline] = ACTIONS(603),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [172] = {
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
    [sym__space_no_newline] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(609),
    [aux_sym_add_token1] = ACTIONS(609),
    [aux_sym_arg_token1] = ACTIONS(609),
    [anon_sym_EQ] = ACTIONS(611),
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
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(597),
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
    [aux_sym__anything_token1] = ACTIONS(599),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(597),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(575),
    [aux_sym_add_token1] = ACTIONS(575),
    [aux_sym_arg_token1] = ACTIONS(575),
    [aux_sym_cmd_token1] = ACTIONS(575),
    [aux_sym_copy_token1] = ACTIONS(575),
    [aux_sym_entrypoint_token1] = ACTIONS(575),
    [aux_sym_env_token1] = ACTIONS(575),
    [aux_sym_expose_token1] = ACTIONS(575),
    [aux_sym_from_token1] = ACTIONS(575),
    [anon_sym_COLON] = ACTIONS(613),
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
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(615),
    [aux_sym_add_token1] = ACTIONS(615),
    [aux_sym_arg_token1] = ACTIONS(615),
    [aux_sym_cmd_token1] = ACTIONS(615),
    [aux_sym_copy_token1] = ACTIONS(615),
    [aux_sym_entrypoint_token1] = ACTIONS(615),
    [aux_sym_env_token1] = ACTIONS(615),
    [aux_sym_expose_token1] = ACTIONS(615),
    [aux_sym_from_token1] = ACTIONS(615),
    [anon_sym_COLON] = ACTIONS(615),
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
  [177] = {
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
    [sym__space_no_newline] = ACTIONS(371),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(617),
    [aux_sym_add_token1] = ACTIONS(617),
    [aux_sym_arg_token1] = ACTIONS(617),
    [aux_sym_cmd_token1] = ACTIONS(617),
    [aux_sym_copy_token1] = ACTIONS(617),
    [aux_sym_entrypoint_token1] = ACTIONS(617),
    [aux_sym_env_token1] = ACTIONS(617),
    [aux_sym_expose_token1] = ACTIONS(617),
    [aux_sym_from_token1] = ACTIONS(617),
    [anon_sym_COLON] = ACTIONS(617),
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
  [179] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(457),
    [sym__space_no_newline] = ACTIONS(463),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [180] = {
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
  [181] = {
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
    [sym__space_no_newline] = ACTIONS(543),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [182] = {
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
    [sym__space_no_newline] = ACTIONS(625),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [183] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(527),
    [sym__space_no_newline] = ACTIONS(531),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(514),
    [aux_sym_add_token1] = ACTIONS(514),
    [aux_sym_arg_token1] = ACTIONS(514),
    [aux_sym_cmd_token1] = ACTIONS(514),
    [aux_sym_copy_token1] = ACTIONS(514),
    [aux_sym_entrypoint_token1] = ACTIONS(514),
    [aux_sym_env_token1] = ACTIONS(514),
    [aux_sym_expose_token1] = ACTIONS(514),
    [aux_sym_from_token1] = ACTIONS(514),
    [aux_sym_healthcheck_token1] = ACTIONS(514),
    [aux_sym_label_token1] = ACTIONS(514),
    [aux_sym_maintainer_token1] = ACTIONS(514),
    [aux_sym_onbuild_token1] = ACTIONS(514),
    [aux_sym_run_token1] = ACTIONS(514),
    [aux_sym_shell_token1] = ACTIONS(514),
    [aux_sym_stopsignal_token1] = ACTIONS(514),
    [aux_sym_user_token1] = ACTIONS(514),
    [aux_sym_volume_token1] = ACTIONS(514),
    [aux_sym_workdir_token1] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(514),
    [sym__space_no_newline] = ACTIONS(627),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(387),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [186] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [196] = {
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
  [197] = {
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
  [198] = {
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
  [199] = {
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
  [200] = {
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
  [201] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(527),
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
  },
  [207] = {
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
  [208] = {
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
  [209] = {
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
  [212] = {
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
  [213] = {
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
  [214] = {
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
  [215] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [216] = {
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
  [217] = {
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
  [218] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(438),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [219] = {
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
  [220] = {
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
  [223] = {
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
  [224] = {
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
  [225] = {
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
  [226] = {
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
  [227] = {
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
  [228] = {
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
  [229] = {
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
  [230] = {
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
  [231] = {
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
  [232] = {
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
  [233] = {
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
  [234] = {
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
  [235] = {
    [sym_repository] = STATE(256),
    [sym__repository_start] = STATE(243),
    [sym_image] = STATE(133),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(695),
    [anon_sym_DOLLAR] = ACTIONS(697),
    [aux_sym_from_layer_token5] = ACTIONS(699),
    [aux_sym_from_layer_token9] = ACTIONS(701),
    [aux_sym_from_layer_token13] = ACTIONS(703),
    [aux_sym_platform_token1] = ACTIONS(705),
    [aux_sym__repository_start_token1] = ACTIONS(697),
    [aux_sym__repository_start_token4] = ACTIONS(699),
    [aux_sym__repository_start_token6] = ACTIONS(701),
    [aux_sym__repository_start_token8] = ACTIONS(703),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [236] = {
    [sym__hc_interval] = STATE(238),
    [sym__hc_timeout] = STATE(238),
    [sym__hc_start_period] = STATE(238),
    [sym__hc_retries] = STATE(238),
    [sym__hc_options] = STATE(238),
    [sym__hc_command] = STATE(212),
    [aux_sym_healthcheck_repeat1] = STATE(238),
    [sym_hc_none] = ACTIONS(707),
    [anon_sym_DASH_DASHinterval] = ACTIONS(709),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(711),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(713),
    [anon_sym_DASH_DASHretries] = ACTIONS(715),
    [aux_sym__hc_command_token1] = ACTIONS(717),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [237] = {
    [sym__chown] = STATE(241),
    [sym__from_layer] = STATE(241),
    [sym_path] = STATE(88),
    [aux_sym__paths] = STATE(44),
    [aux_sym_copy_repeat1] = STATE(241),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(719),
    [aux_sym__from_layer_token1] = ACTIONS(721),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(723),
    [sym_line_continuation] = ACTIONS(5),
  },
  [238] = {
    [sym__hc_interval] = STATE(242),
    [sym__hc_timeout] = STATE(242),
    [sym__hc_start_period] = STATE(242),
    [sym__hc_retries] = STATE(242),
    [sym__hc_options] = STATE(242),
    [sym__hc_command] = STATE(202),
    [aux_sym_healthcheck_repeat1] = STATE(242),
    [anon_sym_DASH_DASHinterval] = ACTIONS(709),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(711),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(713),
    [anon_sym_DASH_DASHretries] = ACTIONS(715),
    [aux_sym__hc_command_token1] = ACTIONS(717),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [239] = {
    [sym__port_spec] = STATE(8),
    [sym_mapped_port] = STATE(8),
    [sym_mapped_no_lhs] = STATE(199),
    [sym__port] = STATE(102),
    [sym_port] = STATE(102),
    [sym_port_range] = STATE(102),
    [sym__port_part] = STATE(77),
    [aux_sym_expose_repeat1] = STATE(8),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(725),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym__port_part_token1] = ACTIONS(133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [240] = {
    [sym_repository] = STATE(271),
    [sym__repository_start] = STATE(243),
    [sym_image] = STATE(127),
    [anon_sym_DOLLAR] = ACTIONS(697),
    [aux_sym_from_layer_token5] = ACTIONS(699),
    [aux_sym_from_layer_token9] = ACTIONS(701),
    [aux_sym_from_layer_token13] = ACTIONS(703),
    [aux_sym_platform_token1] = ACTIONS(705),
    [aux_sym__repository_start_token1] = ACTIONS(697),
    [aux_sym__repository_start_token4] = ACTIONS(699),
    [aux_sym__repository_start_token6] = ACTIONS(701),
    [aux_sym__repository_start_token8] = ACTIONS(703),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [241] = {
    [sym__chown] = STATE(262),
    [sym__from_layer] = STATE(262),
    [sym_path] = STATE(88),
    [aux_sym__paths] = STATE(66),
    [aux_sym_copy_repeat1] = STATE(262),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(719),
    [aux_sym__from_layer_token1] = ACTIONS(721),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(727),
    [sym_line_continuation] = ACTIONS(5),
  },
  [242] = {
    [sym__hc_interval] = STATE(242),
    [sym__hc_timeout] = STATE(242),
    [sym__hc_start_period] = STATE(242),
    [sym__hc_retries] = STATE(242),
    [sym__hc_options] = STATE(242),
    [aux_sym_healthcheck_repeat1] = STATE(242),
    [anon_sym_DASH_DASHinterval] = ACTIONS(729),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(732),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(735),
    [anon_sym_DASH_DASHretries] = ACTIONS(738),
    [aux_sym__hc_command_token1] = ACTIONS(741),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [243] = {
    [sym__repository_continued] = STATE(249),
    [aux_sym_repository_repeat1] = STATE(249),
    [anon_sym_DOLLAR] = ACTIONS(743),
    [aux_sym_from_layer_token5] = ACTIONS(746),
    [aux_sym_from_layer_token9] = ACTIONS(749),
    [aux_sym_from_layer_token13] = ACTIONS(752),
    [aux_sym_platform_token1] = ACTIONS(755),
    [aux_sym__repository_start_token1] = ACTIONS(743),
    [aux_sym__repository_start_token4] = ACTIONS(746),
    [aux_sym__repository_start_token6] = ACTIONS(749),
    [aux_sym__repository_start_token8] = ACTIONS(752),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [244] = {
    [sym_digest] = STATE(181),
    [anon_sym_sha256_COLON] = ACTIONS(758),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_from_layer_token5] = ACTIONS(762),
    [aux_sym_from_layer_token9] = ACTIONS(764),
    [aux_sym_from_layer_token13] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [245] = {
    [sym_digest] = STATE(179),
    [anon_sym_sha256_COLON] = ACTIONS(770),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_from_layer_token5] = ACTIONS(762),
    [aux_sym_from_layer_token9] = ACTIONS(764),
    [aux_sym_from_layer_token13] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [246] = {
    [sym_digest] = STATE(183),
    [anon_sym_sha256_COLON] = ACTIONS(772),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_from_layer_token5] = ACTIONS(762),
    [aux_sym_from_layer_token9] = ACTIONS(764),
    [aux_sym_from_layer_token13] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [247] = {
    [sym_digest] = STATE(165),
    [anon_sym_sha256_COLON] = ACTIONS(774),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_from_layer_token5] = ACTIONS(762),
    [aux_sym_from_layer_token9] = ACTIONS(764),
    [aux_sym_from_layer_token13] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [248] = {
    [sym_digest] = STATE(161),
    [anon_sym_sha256_COLON] = ACTIONS(776),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_from_layer_token5] = ACTIONS(762),
    [aux_sym_from_layer_token9] = ACTIONS(764),
    [aux_sym_from_layer_token13] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [249] = {
    [sym__repository_continued] = STATE(250),
    [aux_sym_repository_repeat1] = STATE(250),
    [anon_sym_DOLLAR] = ACTIONS(778),
    [aux_sym_from_layer_token5] = ACTIONS(781),
    [aux_sym_from_layer_token9] = ACTIONS(784),
    [aux_sym_from_layer_token13] = ACTIONS(787),
    [aux_sym_platform_token1] = ACTIONS(790),
    [aux_sym__repository_start_token1] = ACTIONS(778),
    [aux_sym__repository_start_token4] = ACTIONS(781),
    [aux_sym__repository_start_token6] = ACTIONS(784),
    [aux_sym__repository_start_token8] = ACTIONS(787),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [250] = {
    [sym__repository_continued] = STATE(250),
    [aux_sym_repository_repeat1] = STATE(250),
    [anon_sym_DOLLAR] = ACTIONS(793),
    [aux_sym_from_layer_token5] = ACTIONS(796),
    [aux_sym_from_layer_token9] = ACTIONS(799),
    [aux_sym_from_layer_token13] = ACTIONS(802),
    [aux_sym_platform_token1] = ACTIONS(805),
    [aux_sym__repository_start_token1] = ACTIONS(793),
    [aux_sym__repository_start_token4] = ACTIONS(796),
    [aux_sym__repository_start_token6] = ACTIONS(799),
    [aux_sym__repository_start_token8] = ACTIONS(802),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [251] = {
    [sym_digest] = STATE(169),
    [anon_sym_sha256_COLON] = ACTIONS(808),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_from_layer_token5] = ACTIONS(762),
    [aux_sym_from_layer_token9] = ACTIONS(764),
    [aux_sym_from_layer_token13] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [252] = {
    [sym_as_name] = STATE(225),
    [anon_sym_DOLLAR] = ACTIONS(810),
    [aux_sym_from_layer_token5] = ACTIONS(812),
    [aux_sym_from_layer_token9] = ACTIONS(814),
    [aux_sym_from_layer_token13] = ACTIONS(816),
    [aux_sym_platform_token1] = ACTIONS(818),
    [aux_sym__repository_start_token1] = ACTIONS(810),
    [aux_sym__repository_start_token4] = ACTIONS(812),
    [aux_sym__repository_start_token6] = ACTIONS(814),
    [aux_sym__repository_start_token8] = ACTIONS(816),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [253] = {
    [sym_from_layer] = STATE(533),
    [anon_sym_DOLLAR] = ACTIONS(820),
    [aux_sym_from_layer_token1] = ACTIONS(822),
    [aux_sym_from_layer_token2] = ACTIONS(820),
    [aux_sym_from_layer_token5] = ACTIONS(824),
    [aux_sym_from_layer_token7] = ACTIONS(824),
    [aux_sym_from_layer_token9] = ACTIONS(826),
    [aux_sym_from_layer_token11] = ACTIONS(826),
    [aux_sym_from_layer_token13] = ACTIONS(828),
    [aux_sym_from_layer_token15] = ACTIONS(828),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [254] = {
    [sym_digest] = STATE(179),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_from_layer_token5] = ACTIONS(762),
    [aux_sym_from_layer_token9] = ACTIONS(764),
    [aux_sym_from_layer_token13] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [255] = {
    [sym_digest] = STATE(181),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_from_layer_token5] = ACTIONS(762),
    [aux_sym_from_layer_token9] = ACTIONS(764),
    [aux_sym_from_layer_token13] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [256] = {
    [sym_image] = STATE(121),
    [anon_sym_DOLLAR] = ACTIONS(830),
    [aux_sym_from_layer_token5] = ACTIONS(832),
    [aux_sym_from_layer_token9] = ACTIONS(834),
    [aux_sym_from_layer_token13] = ACTIONS(836),
    [aux_sym_platform_token1] = ACTIONS(838),
    [aux_sym__repository_start_token1] = ACTIONS(830),
    [aux_sym__repository_start_token4] = ACTIONS(832),
    [aux_sym__repository_start_token6] = ACTIONS(834),
    [aux_sym__repository_start_token8] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [257] = {
    [sym_as_name] = STATE(201),
    [anon_sym_DOLLAR] = ACTIONS(810),
    [aux_sym_from_layer_token5] = ACTIONS(812),
    [aux_sym_from_layer_token9] = ACTIONS(814),
    [aux_sym_from_layer_token13] = ACTIONS(816),
    [aux_sym_platform_token1] = ACTIONS(818),
    [aux_sym__repository_start_token1] = ACTIONS(810),
    [aux_sym__repository_start_token4] = ACTIONS(812),
    [aux_sym__repository_start_token6] = ACTIONS(814),
    [aux_sym__repository_start_token8] = ACTIONS(816),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [258] = {
    [sym_as_name] = STATE(195),
    [anon_sym_DOLLAR] = ACTIONS(810),
    [aux_sym_from_layer_token5] = ACTIONS(812),
    [aux_sym_from_layer_token9] = ACTIONS(814),
    [aux_sym_from_layer_token13] = ACTIONS(816),
    [aux_sym_platform_token1] = ACTIONS(818),
    [aux_sym__repository_start_token1] = ACTIONS(810),
    [aux_sym__repository_start_token4] = ACTIONS(812),
    [aux_sym__repository_start_token6] = ACTIONS(814),
    [aux_sym__repository_start_token8] = ACTIONS(816),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [259] = {
    [sym_as_name] = STATE(233),
    [anon_sym_DOLLAR] = ACTIONS(810),
    [aux_sym_from_layer_token5] = ACTIONS(812),
    [aux_sym_from_layer_token9] = ACTIONS(814),
    [aux_sym_from_layer_token13] = ACTIONS(816),
    [aux_sym_platform_token1] = ACTIONS(818),
    [aux_sym__repository_start_token1] = ACTIONS(810),
    [aux_sym__repository_start_token4] = ACTIONS(812),
    [aux_sym__repository_start_token6] = ACTIONS(814),
    [aux_sym__repository_start_token8] = ACTIONS(816),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [260] = {
    [sym_as_name] = STATE(232),
    [anon_sym_DOLLAR] = ACTIONS(810),
    [aux_sym_from_layer_token5] = ACTIONS(812),
    [aux_sym_from_layer_token9] = ACTIONS(814),
    [aux_sym_from_layer_token13] = ACTIONS(816),
    [aux_sym_platform_token1] = ACTIONS(818),
    [aux_sym__repository_start_token1] = ACTIONS(810),
    [aux_sym__repository_start_token4] = ACTIONS(812),
    [aux_sym__repository_start_token6] = ACTIONS(814),
    [aux_sym__repository_start_token8] = ACTIONS(816),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [261] = {
    [sym_as_name] = STATE(228),
    [anon_sym_DOLLAR] = ACTIONS(810),
    [aux_sym_from_layer_token5] = ACTIONS(812),
    [aux_sym_from_layer_token9] = ACTIONS(814),
    [aux_sym_from_layer_token13] = ACTIONS(816),
    [aux_sym_platform_token1] = ACTIONS(818),
    [aux_sym__repository_start_token1] = ACTIONS(810),
    [aux_sym__repository_start_token4] = ACTIONS(812),
    [aux_sym__repository_start_token6] = ACTIONS(814),
    [aux_sym__repository_start_token8] = ACTIONS(816),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [262] = {
    [sym__chown] = STATE(262),
    [sym__from_layer] = STATE(262),
    [aux_sym_copy_repeat1] = STATE(262),
    [anon_sym_DQUOTE] = ACTIONS(840),
    [anon_sym_DOLLAR] = ACTIONS(840),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(842),
    [aux_sym__from_layer_token1] = ACTIONS(845),
    [aux_sym_path_token1] = ACTIONS(848),
    [aux_sym_path_token2] = ACTIONS(848),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(840),
    [sym_line_continuation] = ACTIONS(5),
  },
  [263] = {
    [sym_as_name] = STATE(222),
    [anon_sym_DOLLAR] = ACTIONS(810),
    [aux_sym_from_layer_token5] = ACTIONS(812),
    [aux_sym_from_layer_token9] = ACTIONS(814),
    [aux_sym_from_layer_token13] = ACTIONS(816),
    [aux_sym_platform_token1] = ACTIONS(818),
    [aux_sym__repository_start_token1] = ACTIONS(810),
    [aux_sym__repository_start_token4] = ACTIONS(812),
    [aux_sym__repository_start_token6] = ACTIONS(814),
    [aux_sym__repository_start_token8] = ACTIONS(816),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [264] = {
    [sym_digest] = STATE(168),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_from_layer_token5] = ACTIONS(762),
    [aux_sym_from_layer_token9] = ACTIONS(764),
    [aux_sym_from_layer_token13] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [265] = {
    [sym_tag] = STATE(137),
    [anon_sym_DOLLAR] = ACTIONS(850),
    [aux_sym_from_layer_token5] = ACTIONS(852),
    [aux_sym_from_layer_token9] = ACTIONS(854),
    [aux_sym_from_layer_token13] = ACTIONS(856),
    [aux_sym_platform_token1] = ACTIONS(858),
    [aux_sym__repository_start_token1] = ACTIONS(850),
    [aux_sym__repository_start_token4] = ACTIONS(852),
    [aux_sym__repository_start_token6] = ACTIONS(854),
    [aux_sym__repository_start_token8] = ACTIONS(856),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [266] = {
    [sym_tag] = STATE(150),
    [anon_sym_DOLLAR] = ACTIONS(850),
    [aux_sym_from_layer_token5] = ACTIONS(852),
    [aux_sym_from_layer_token9] = ACTIONS(854),
    [aux_sym_from_layer_token13] = ACTIONS(856),
    [aux_sym_platform_token1] = ACTIONS(858),
    [aux_sym__repository_start_token1] = ACTIONS(850),
    [aux_sym__repository_start_token4] = ACTIONS(852),
    [aux_sym__repository_start_token6] = ACTIONS(854),
    [aux_sym__repository_start_token8] = ACTIONS(856),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [267] = {
    [sym_tag] = STATE(147),
    [anon_sym_DOLLAR] = ACTIONS(850),
    [aux_sym_from_layer_token5] = ACTIONS(852),
    [aux_sym_from_layer_token9] = ACTIONS(854),
    [aux_sym_from_layer_token13] = ACTIONS(856),
    [aux_sym_platform_token1] = ACTIONS(858),
    [aux_sym__repository_start_token1] = ACTIONS(850),
    [aux_sym__repository_start_token4] = ACTIONS(852),
    [aux_sym__repository_start_token6] = ACTIONS(854),
    [aux_sym__repository_start_token8] = ACTIONS(856),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [268] = {
    [sym_digest] = STATE(183),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_from_layer_token5] = ACTIONS(762),
    [aux_sym_from_layer_token9] = ACTIONS(764),
    [aux_sym_from_layer_token13] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [269] = {
    [sym_digest] = STATE(169),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_from_layer_token5] = ACTIONS(762),
    [aux_sym_from_layer_token9] = ACTIONS(764),
    [aux_sym_from_layer_token13] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [270] = {
    [sym_as_name] = STATE(217),
    [anon_sym_DOLLAR] = ACTIONS(810),
    [aux_sym_from_layer_token5] = ACTIONS(812),
    [aux_sym_from_layer_token9] = ACTIONS(814),
    [aux_sym_from_layer_token13] = ACTIONS(816),
    [aux_sym_platform_token1] = ACTIONS(818),
    [aux_sym__repository_start_token1] = ACTIONS(810),
    [aux_sym__repository_start_token4] = ACTIONS(812),
    [aux_sym__repository_start_token6] = ACTIONS(814),
    [aux_sym__repository_start_token8] = ACTIONS(816),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [271] = {
    [sym_image] = STATE(126),
    [anon_sym_DOLLAR] = ACTIONS(830),
    [aux_sym_from_layer_token5] = ACTIONS(832),
    [aux_sym_from_layer_token9] = ACTIONS(834),
    [aux_sym_from_layer_token13] = ACTIONS(836),
    [aux_sym_platform_token1] = ACTIONS(838),
    [aux_sym__repository_start_token1] = ACTIONS(830),
    [aux_sym__repository_start_token4] = ACTIONS(832),
    [aux_sym__repository_start_token6] = ACTIONS(834),
    [aux_sym__repository_start_token8] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [272] = {
    [sym_digest] = STATE(161),
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_from_layer_token5] = ACTIONS(762),
    [aux_sym_from_layer_token9] = ACTIONS(764),
    [aux_sym_from_layer_token13] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(760),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(764),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [273] = {
    [sym_as_name] = STATE(206),
    [anon_sym_DOLLAR] = ACTIONS(810),
    [aux_sym_from_layer_token5] = ACTIONS(812),
    [aux_sym_from_layer_token9] = ACTIONS(814),
    [aux_sym_from_layer_token13] = ACTIONS(816),
    [aux_sym_platform_token1] = ACTIONS(818),
    [aux_sym__repository_start_token1] = ACTIONS(810),
    [aux_sym__repository_start_token4] = ACTIONS(812),
    [aux_sym__repository_start_token6] = ACTIONS(814),
    [aux_sym__repository_start_token8] = ACTIONS(816),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [274] = {
    [sym_tag] = STATE(152),
    [anon_sym_DOLLAR] = ACTIONS(850),
    [aux_sym_from_layer_token5] = ACTIONS(852),
    [aux_sym_from_layer_token9] = ACTIONS(854),
    [aux_sym_from_layer_token13] = ACTIONS(856),
    [aux_sym_platform_token1] = ACTIONS(858),
    [aux_sym__repository_start_token1] = ACTIONS(850),
    [aux_sym__repository_start_token4] = ACTIONS(852),
    [aux_sym__repository_start_token6] = ACTIONS(854),
    [aux_sym__repository_start_token8] = ACTIONS(856),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [275] = {
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
  [276] = {
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
  [277] = {
    [sym__port_spec] = STATE(506),
    [sym_mapped_port] = STATE(506),
    [sym__port] = STATE(480),
    [sym_port] = STATE(454),
    [sym_port_range] = STATE(454),
    [sym__port_part] = STATE(444),
    [anon_sym_DQUOTE] = ACTIONS(868),
    [anon_sym_DOLLAR] = ACTIONS(870),
    [aux_sym__port_part_token1] = ACTIONS(872),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [278] = {
    [anon_sym_DOLLAR] = ACTIONS(874),
    [aux_sym_from_layer_token5] = ACTIONS(874),
    [aux_sym_from_layer_token9] = ACTIONS(874),
    [aux_sym_from_layer_token13] = ACTIONS(874),
    [aux_sym_platform_token1] = ACTIONS(876),
    [aux_sym__repository_start_token1] = ACTIONS(874),
    [aux_sym__repository_start_token4] = ACTIONS(874),
    [aux_sym__repository_start_token6] = ACTIONS(874),
    [aux_sym__repository_start_token8] = ACTIONS(874),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [279] = {
    [anon_sym_DOLLAR] = ACTIONS(878),
    [aux_sym_from_layer_token5] = ACTIONS(878),
    [aux_sym_from_layer_token9] = ACTIONS(878),
    [aux_sym_from_layer_token13] = ACTIONS(878),
    [aux_sym_platform_token1] = ACTIONS(880),
    [aux_sym__repository_start_token1] = ACTIONS(878),
    [aux_sym__repository_start_token4] = ACTIONS(878),
    [aux_sym__repository_start_token6] = ACTIONS(878),
    [aux_sym__repository_start_token8] = ACTIONS(878),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [280] = {
    [anon_sym_DOLLAR] = ACTIONS(882),
    [aux_sym_from_layer_token5] = ACTIONS(882),
    [aux_sym_from_layer_token9] = ACTIONS(882),
    [aux_sym_from_layer_token13] = ACTIONS(882),
    [aux_sym_platform_token1] = ACTIONS(884),
    [aux_sym__repository_start_token1] = ACTIONS(882),
    [aux_sym__repository_start_token4] = ACTIONS(882),
    [aux_sym__repository_start_token6] = ACTIONS(882),
    [aux_sym__repository_start_token8] = ACTIONS(882),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [281] = {
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
  [282] = {
    [anon_sym_DOLLAR] = ACTIONS(886),
    [aux_sym_from_layer_token5] = ACTIONS(886),
    [aux_sym_from_layer_token9] = ACTIONS(886),
    [aux_sym_from_layer_token13] = ACTIONS(886),
    [aux_sym_platform_token1] = ACTIONS(888),
    [aux_sym__repository_start_token1] = ACTIONS(886),
    [aux_sym__repository_start_token4] = ACTIONS(886),
    [aux_sym__repository_start_token6] = ACTIONS(886),
    [aux_sym__repository_start_token8] = ACTIONS(886),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [283] = {
    [anon_sym_DOLLAR] = ACTIONS(890),
    [aux_sym_from_layer_token5] = ACTIONS(890),
    [aux_sym_from_layer_token9] = ACTIONS(890),
    [aux_sym_from_layer_token13] = ACTIONS(890),
    [aux_sym_platform_token1] = ACTIONS(892),
    [aux_sym__repository_start_token1] = ACTIONS(890),
    [aux_sym__repository_start_token4] = ACTIONS(890),
    [aux_sym__repository_start_token6] = ACTIONS(890),
    [aux_sym__repository_start_token8] = ACTIONS(890),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [284] = {
    [anon_sym_DOLLAR] = ACTIONS(894),
    [aux_sym_from_layer_token5] = ACTIONS(894),
    [aux_sym_from_layer_token9] = ACTIONS(894),
    [aux_sym_from_layer_token13] = ACTIONS(894),
    [aux_sym_platform_token1] = ACTIONS(896),
    [aux_sym__repository_start_token1] = ACTIONS(894),
    [aux_sym__repository_start_token4] = ACTIONS(894),
    [aux_sym__repository_start_token6] = ACTIONS(894),
    [aux_sym__repository_start_token8] = ACTIONS(894),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [285] = {
    [anon_sym_DOLLAR] = ACTIONS(898),
    [aux_sym_from_layer_token5] = ACTIONS(898),
    [aux_sym_from_layer_token9] = ACTIONS(898),
    [aux_sym_from_layer_token13] = ACTIONS(898),
    [aux_sym_platform_token1] = ACTIONS(900),
    [aux_sym__repository_start_token1] = ACTIONS(898),
    [aux_sym__repository_start_token4] = ACTIONS(898),
    [aux_sym__repository_start_token6] = ACTIONS(898),
    [aux_sym__repository_start_token8] = ACTIONS(898),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [anon_sym_DOLLAR] = ACTIONS(902),
    [aux_sym_from_layer_token5] = ACTIONS(902),
    [aux_sym_from_layer_token9] = ACTIONS(902),
    [aux_sym_from_layer_token13] = ACTIONS(902),
    [aux_sym_platform_token1] = ACTIONS(904),
    [aux_sym__repository_start_token1] = ACTIONS(902),
    [aux_sym__repository_start_token4] = ACTIONS(902),
    [aux_sym__repository_start_token6] = ACTIONS(902),
    [aux_sym__repository_start_token8] = ACTIONS(902),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [287] = {
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_from_layer_token5] = ACTIONS(215),
    [aux_sym_from_layer_token9] = ACTIONS(215),
    [aux_sym_from_layer_token13] = ACTIONS(215),
    [aux_sym_platform_token1] = ACTIONS(217),
    [aux_sym__repository_start_token1] = ACTIONS(215),
    [aux_sym__repository_start_token4] = ACTIONS(215),
    [aux_sym__repository_start_token6] = ACTIONS(215),
    [aux_sym__repository_start_token8] = ACTIONS(215),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [288] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_from_layer_token5] = ACTIONS(203),
    [aux_sym_from_layer_token9] = ACTIONS(203),
    [aux_sym_from_layer_token13] = ACTIONS(203),
    [aux_sym_platform_token1] = ACTIONS(205),
    [aux_sym__repository_start_token1] = ACTIONS(203),
    [aux_sym__repository_start_token4] = ACTIONS(203),
    [aux_sym__repository_start_token6] = ACTIONS(203),
    [aux_sym__repository_start_token8] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [289] = {
    [anon_sym_DOLLAR] = ACTIONS(906),
    [aux_sym_from_layer_token5] = ACTIONS(906),
    [aux_sym_from_layer_token9] = ACTIONS(906),
    [aux_sym_from_layer_token13] = ACTIONS(906),
    [aux_sym_platform_token1] = ACTIONS(908),
    [aux_sym__repository_start_token1] = ACTIONS(906),
    [aux_sym__repository_start_token4] = ACTIONS(906),
    [aux_sym__repository_start_token6] = ACTIONS(906),
    [aux_sym__repository_start_token8] = ACTIONS(906),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [290] = {
    [anon_sym_DOLLAR] = ACTIONS(910),
    [aux_sym_from_layer_token5] = ACTIONS(910),
    [aux_sym_from_layer_token9] = ACTIONS(910),
    [aux_sym_from_layer_token13] = ACTIONS(910),
    [aux_sym_platform_token1] = ACTIONS(912),
    [aux_sym__repository_start_token1] = ACTIONS(910),
    [aux_sym__repository_start_token4] = ACTIONS(910),
    [aux_sym__repository_start_token6] = ACTIONS(910),
    [aux_sym__repository_start_token8] = ACTIONS(910),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [291] = {
    [anon_sym_DQUOTE] = ACTIONS(914),
    [anon_sym_DOLLAR] = ACTIONS(914),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(914),
    [aux_sym__from_layer_token1] = ACTIONS(914),
    [aux_sym_path_token1] = ACTIONS(916),
    [aux_sym_path_token2] = ACTIONS(916),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(914),
    [sym_line_continuation] = ACTIONS(5),
  },
  [292] = {
    [sym_path] = STATE(88),
    [aux_sym__paths] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(918),
    [sym_line_continuation] = ACTIONS(5),
  },
  [293] = {
    [sym_path] = STATE(88),
    [aux_sym__paths] = STATE(62),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(255),
    [aux_sym_path_token1] = ACTIONS(257),
    [aux_sym_path_token2] = ACTIONS(259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(920),
    [sym_line_continuation] = ACTIONS(5),
  },
  [294] = {
    [sym__port] = STATE(130),
    [sym_port] = STATE(130),
    [sym_port_range] = STATE(130),
    [sym__port_part] = STATE(77),
    [anon_sym_DQUOTE] = ACTIONS(922),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym__port_part_token1] = ACTIONS(133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [295] = {
    [anon_sym_DQUOTE] = ACTIONS(924),
    [anon_sym_DOLLAR] = ACTIONS(924),
    [anon_sym_DASH_DASHchown_EQ] = ACTIONS(924),
    [aux_sym__from_layer_token1] = ACTIONS(924),
    [aux_sym_path_token1] = ACTIONS(926),
    [aux_sym_path_token2] = ACTIONS(926),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_json_array] = ACTIONS(924),
    [sym_line_continuation] = ACTIONS(5),
  },
  [296] = {
    [sym__port] = STATE(495),
    [sym_port] = STATE(495),
    [sym_port_range] = STATE(495),
    [sym__port_part] = STATE(444),
    [anon_sym_DQUOTE] = ACTIONS(868),
    [anon_sym_DOLLAR] = ACTIONS(870),
    [aux_sym__port_part_token1] = ACTIONS(872),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [297] = {
    [sym__port] = STATE(186),
    [sym_port] = STATE(186),
    [sym_port_range] = STATE(186),
    [sym__port_part] = STATE(77),
    [anon_sym_DQUOTE] = ACTIONS(922),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym__port_part_token1] = ACTIONS(133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [298] = {
    [sym_user_name] = STATE(175),
    [sym_user_id] = STATE(162),
    [anon_sym_DQUOTE] = ACTIONS(928),
    [anon_sym_DOLLAR] = ACTIONS(930),
    [aux_sym_user_name_token1] = ACTIONS(932),
    [aux_sym_user_id_token1] = ACTIONS(934),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [299] = {
    [sym__labels] = STATE(189),
    [sym_label_pair_eq] = STATE(159),
    [sym_label_pair] = STATE(189),
    [sym_label_key] = STATE(473),
    [anon_sym_DOLLAR] = ACTIONS(936),
    [aux_sym_env_key_token1] = ACTIONS(938),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [300] = {
    [sym__env_pairs] = STATE(193),
    [sym_env_pair_eq] = STATE(148),
    [sym_env_pair] = STATE(193),
    [sym_env_key] = STATE(149),
    [anon_sym_DOLLAR] = ACTIONS(940),
    [aux_sym_env_key_token1] = ACTIONS(942),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [301] = {
    [sym_chown] = STATE(485),
    [sym_user_name] = STATE(475),
    [sym_user_id] = STATE(474),
    [anon_sym_DOLLAR] = ACTIONS(944),
    [aux_sym_user_name_token1] = ACTIONS(946),
    [aux_sym_user_id_token1] = ACTIONS(948),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [302] = {
    [aux_sym_from_layer_repeat3] = STATE(334),
    [aux_sym_from_layer_token4] = ACTIONS(950),
    [aux_sym_from_layer_token9] = ACTIONS(952),
    [aux_sym_from_layer_token12] = ACTIONS(952),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(954),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [303] = {
    [aux_sym_from_layer_repeat1] = STATE(352),
    [anon_sym_DOLLAR] = ACTIONS(956),
    [aux_sym_from_layer_token3] = ACTIONS(956),
    [aux_sym_from_layer_token4] = ACTIONS(958),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(960),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [304] = {
    [sym_template_expr_less_than_equals] = STATE(591),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(341),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [305] = {
    [sym_template_expr_less_than_equals] = STATE(585),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(341),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [306] = {
    [sym_template_expr_less_than_equals] = STATE(579),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(341),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [307] = {
    [aux_sym__repository_start_repeat1] = STATE(320),
    [anon_sym_DOLLAR] = ACTIONS(964),
    [anon_sym_SLASH] = ACTIONS(966),
    [aux_sym__repository_start_token2] = ACTIONS(964),
    [aux_sym__repository_start_token3] = ACTIONS(968),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [308] = {
    [sym_port] = STATE(570),
    [sym_port_range] = STATE(570),
    [sym__port_part] = STATE(444),
    [anon_sym_DOLLAR] = ACTIONS(870),
    [aux_sym__port_part_token1] = ACTIONS(872),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [309] = {
    [sym_variable_default_value] = STATE(609),
    [sym_variable_this_or_null] = STATE(609),
    [anon_sym_RBRACE] = ACTIONS(970),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [310] = {
    [sym_variable_default_value] = STATE(607),
    [sym_variable_this_or_null] = STATE(607),
    [anon_sym_RBRACE] = ACTIONS(976),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [311] = {
    [sym_variable_default_value] = STATE(605),
    [sym_variable_this_or_null] = STATE(605),
    [anon_sym_RBRACE] = ACTIONS(978),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [312] = {
    [sym_template_expr_less_than_equals] = STATE(527),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(341),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [313] = {
    [sym_variable_default_value] = STATE(603),
    [sym_variable_this_or_null] = STATE(603),
    [anon_sym_RBRACE] = ACTIONS(980),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [314] = {
    [sym_variable_default_value] = STATE(601),
    [sym_variable_this_or_null] = STATE(601),
    [anon_sym_RBRACE] = ACTIONS(982),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [315] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_from_layer_token14] = ACTIONS(984),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(986),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(986),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(986),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [316] = {
    [sym_variable_default_value] = STATE(599),
    [sym_variable_this_or_null] = STATE(599),
    [anon_sym_RBRACE] = ACTIONS(989),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [sym_variable_default_value] = STATE(597),
    [sym_variable_this_or_null] = STATE(597),
    [anon_sym_RBRACE] = ACTIONS(991),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [318] = {
    [sym_variable_default_value] = STATE(595),
    [sym_variable_this_or_null] = STATE(595),
    [anon_sym_RBRACE] = ACTIONS(993),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [319] = {
    [sym_variable_default_value] = STATE(593),
    [sym_variable_this_or_null] = STATE(593),
    [anon_sym_RBRACE] = ACTIONS(995),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [aux_sym__repository_start_repeat1] = STATE(372),
    [anon_sym_DOLLAR] = ACTIONS(964),
    [anon_sym_SLASH] = ACTIONS(997),
    [aux_sym__repository_start_token2] = ACTIONS(964),
    [aux_sym__repository_start_token3] = ACTIONS(999),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [321] = {
    [aux_sym__repository_start_repeat2] = STATE(366),
    [aux_sym_from_layer_token5] = ACTIONS(1001),
    [anon_sym_SLASH] = ACTIONS(997),
    [aux_sym__repository_start_token3] = ACTIONS(999),
    [aux_sym__repository_start_token5] = ACTIONS(1001),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [322] = {
    [aux_sym__repository_start_repeat3] = STATE(367),
    [aux_sym_from_layer_token9] = ACTIONS(1003),
    [anon_sym_SLASH] = ACTIONS(997),
    [aux_sym__repository_start_token3] = ACTIONS(999),
    [aux_sym__repository_start_token7] = ACTIONS(1003),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [323] = {
    [aux_sym__repository_start_repeat4] = STATE(368),
    [aux_sym_from_layer_token13] = ACTIONS(1005),
    [anon_sym_SLASH] = ACTIONS(997),
    [aux_sym__repository_start_token3] = ACTIONS(999),
    [aux_sym__repository_start_token9] = ACTIONS(1005),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [324] = {
    [sym_variable_default_value] = STATE(588),
    [sym_variable_this_or_null] = STATE(588),
    [anon_sym_RBRACE] = ACTIONS(1007),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [325] = {
    [sym_variable_default_value] = STATE(582),
    [sym_variable_this_or_null] = STATE(582),
    [anon_sym_RBRACE] = ACTIONS(1009),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [326] = {
    [aux_sym_path_repeat2] = STATE(336),
    [anon_sym_DQUOTE] = ACTIONS(1011),
    [anon_sym_DOLLAR] = ACTIONS(1013),
    [aux_sym_path_token3] = ACTIONS(1015),
    [aux_sym_path_token4] = ACTIONS(1017),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [327] = {
    [sym_variable_default_value] = STATE(575),
    [sym_variable_this_or_null] = STATE(575),
    [anon_sym_RBRACE] = ACTIONS(1019),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [328] = {
    [aux_sym_path_repeat2] = STATE(326),
    [anon_sym_DQUOTE] = ACTIONS(1021),
    [anon_sym_DOLLAR] = ACTIONS(1013),
    [aux_sym_path_token3] = ACTIONS(1023),
    [aux_sym_path_token4] = ACTIONS(1017),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [329] = {
    [sym_template_expr_less_than_equals] = STATE(606),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(341),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [330] = {
    [aux_sym_from_layer_repeat2] = STATE(347),
    [aux_sym_from_layer_token4] = ACTIONS(1025),
    [aux_sym_from_layer_token5] = ACTIONS(1027),
    [aux_sym_from_layer_token8] = ACTIONS(1027),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1029),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [331] = {
    [sym_template_expr_less_than_equals] = STATE(529),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(341),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [332] = {
    [aux_sym_from_layer_repeat3] = STATE(302),
    [aux_sym_from_layer_token4] = ACTIONS(1025),
    [aux_sym_from_layer_token9] = ACTIONS(952),
    [aux_sym_from_layer_token12] = ACTIONS(952),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1029),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [333] = {
    [aux_sym_from_layer_repeat4] = STATE(333),
    [aux_sym_from_layer_token4] = ACTIONS(1031),
    [aux_sym_from_layer_token13] = ACTIONS(1033),
    [aux_sym_from_layer_token16] = ACTIONS(1033),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1031),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [334] = {
    [aux_sym_from_layer_repeat3] = STATE(334),
    [aux_sym_from_layer_token4] = ACTIONS(1036),
    [aux_sym_from_layer_token9] = ACTIONS(1038),
    [aux_sym_from_layer_token12] = ACTIONS(1038),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1036),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [335] = {
    [sym_template_expr_less_than_equals] = STATE(559),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(341),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [aux_sym_path_repeat2] = STATE(336),
    [anon_sym_DQUOTE] = ACTIONS(1041),
    [anon_sym_DOLLAR] = ACTIONS(1043),
    [aux_sym_path_token3] = ACTIONS(1046),
    [aux_sym_path_token4] = ACTIONS(1048),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [337] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1051),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1051),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1051),
    [anon_sym_DASH_DASHretries] = ACTIONS(1051),
    [aux_sym__hc_command_token1] = ACTIONS(1051),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [338] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_EQ2] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [339] = {
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_EQ2] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [340] = {
    [anon_sym_DQUOTE] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_EQ2] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [341] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(315),
    [aux_sym_from_layer_token14] = ACTIONS(1053),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(1055),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1055),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(1055),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [342] = {
    [aux_sym_from_layer_repeat2] = STATE(342),
    [aux_sym_from_layer_token4] = ACTIONS(1057),
    [aux_sym_from_layer_token5] = ACTIONS(1059),
    [aux_sym_from_layer_token8] = ACTIONS(1059),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1057),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [343] = {
    [aux_sym_path_repeat2] = STATE(336),
    [anon_sym_DQUOTE] = ACTIONS(1062),
    [anon_sym_DOLLAR] = ACTIONS(1013),
    [aux_sym_path_token3] = ACTIONS(1064),
    [aux_sym_path_token4] = ACTIONS(1017),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [344] = {
    [sym_port] = STATE(592),
    [sym_port_range] = STATE(592),
    [sym__port_part] = STATE(444),
    [anon_sym_DOLLAR] = ACTIONS(870),
    [aux_sym__port_part_token1] = ACTIONS(872),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [345] = {
    [aux_sym_from_layer_repeat1] = STATE(345),
    [anon_sym_DOLLAR] = ACTIONS(1066),
    [aux_sym_from_layer_token3] = ACTIONS(1066),
    [aux_sym_from_layer_token4] = ACTIONS(1069),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1069),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [346] = {
    [sym_template_expr_less_than_equals] = STATE(557),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(341),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [347] = {
    [aux_sym_from_layer_repeat2] = STATE(342),
    [aux_sym_from_layer_token4] = ACTIONS(950),
    [aux_sym_from_layer_token5] = ACTIONS(1027),
    [aux_sym_from_layer_token8] = ACTIONS(1027),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(954),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [348] = {
    [sym_template_expr_less_than_equals] = STATE(574),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(341),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [349] = {
    [sym_template_expr_less_than_equals] = STATE(511),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(341),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [aux_sym_from_layer_repeat4] = STATE(333),
    [aux_sym_from_layer_token4] = ACTIONS(950),
    [aux_sym_from_layer_token13] = ACTIONS(1071),
    [aux_sym_from_layer_token16] = ACTIONS(1071),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(954),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [351] = {
    [aux_sym_from_layer_repeat4] = STATE(350),
    [aux_sym_from_layer_token4] = ACTIONS(1025),
    [aux_sym_from_layer_token13] = ACTIONS(1071),
    [aux_sym_from_layer_token16] = ACTIONS(1071),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1029),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [352] = {
    [aux_sym_from_layer_repeat1] = STATE(345),
    [anon_sym_DOLLAR] = ACTIONS(956),
    [aux_sym_from_layer_token3] = ACTIONS(956),
    [aux_sym_from_layer_token4] = ACTIONS(1025),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1029),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [353] = {
    [sym_template_expr_less_than_equals] = STATE(530),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(341),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [354] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1073),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1073),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1073),
    [anon_sym_DASH_DASHretries] = ACTIONS(1073),
    [aux_sym__hc_command_token1] = ACTIONS(1073),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1075),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1075),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1075),
    [anon_sym_DASH_DASHretries] = ACTIONS(1075),
    [aux_sym__hc_command_token1] = ACTIONS(1075),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [356] = {
    [sym_path] = STATE(210),
    [anon_sym_DQUOTE] = ACTIONS(1077),
    [anon_sym_DOLLAR] = ACTIONS(1079),
    [aux_sym_path_token1] = ACTIONS(1081),
    [aux_sym_path_token2] = ACTIONS(1083),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [357] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1085),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1085),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1085),
    [anon_sym_DASH_DASHretries] = ACTIONS(1085),
    [aux_sym__hc_command_token1] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [358] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1087),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1087),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1087),
    [anon_sym_DASH_DASHretries] = ACTIONS(1087),
    [aux_sym__hc_command_token1] = ACTIONS(1087),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [359] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1089),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1089),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1089),
    [anon_sym_DASH_DASHretries] = ACTIONS(1089),
    [aux_sym__hc_command_token1] = ACTIONS(1089),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [360] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1091),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1091),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1091),
    [anon_sym_DASH_DASHretries] = ACTIONS(1091),
    [aux_sym__hc_command_token1] = ACTIONS(1091),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [361] = {
    [sym_port_protocol] = STATE(442),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_COLON] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(1093),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [362] = {
    [sym_port_protocol] = STATE(440),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(1093),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [363] = {
    [sym_variable_default_value] = STATE(524),
    [sym_variable_this_or_null] = STATE(524),
    [anon_sym_RBRACE] = ACTIONS(1095),
    [anon_sym_COLON_DASH] = ACTIONS(972),
    [anon_sym_COLON_PLUS] = ACTIONS(974),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [364] = {
    [aux_sym_path_repeat2] = STATE(343),
    [anon_sym_DQUOTE] = ACTIONS(1097),
    [anon_sym_DOLLAR] = ACTIONS(1013),
    [aux_sym_path_token3] = ACTIONS(1099),
    [aux_sym_path_token4] = ACTIONS(1017),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [365] = {
    [sym_hc_command] = STATE(234),
    [aux_sym__anything] = STATE(136),
    [sym__anything_or_json_array] = STATE(226),
    [aux_sym__anything_token1] = ACTIONS(493),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1101),
    [sym_line_continuation] = ACTIONS(5),
  },
  [366] = {
    [aux_sym__repository_start_repeat2] = STATE(371),
    [aux_sym_from_layer_token5] = ACTIONS(1001),
    [anon_sym_SLASH] = ACTIONS(1103),
    [aux_sym__repository_start_token3] = ACTIONS(1105),
    [aux_sym__repository_start_token5] = ACTIONS(1001),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [367] = {
    [aux_sym__repository_start_repeat3] = STATE(370),
    [aux_sym_from_layer_token9] = ACTIONS(1003),
    [anon_sym_SLASH] = ACTIONS(1103),
    [aux_sym__repository_start_token3] = ACTIONS(1105),
    [aux_sym__repository_start_token7] = ACTIONS(1003),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [aux_sym__repository_start_repeat4] = STATE(369),
    [aux_sym_from_layer_token13] = ACTIONS(1005),
    [anon_sym_SLASH] = ACTIONS(1103),
    [aux_sym__repository_start_token3] = ACTIONS(1105),
    [aux_sym__repository_start_token9] = ACTIONS(1005),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [369] = {
    [aux_sym__repository_start_repeat4] = STATE(369),
    [aux_sym_from_layer_token13] = ACTIONS(1107),
    [anon_sym_SLASH] = ACTIONS(188),
    [aux_sym__repository_start_token3] = ACTIONS(190),
    [aux_sym__repository_start_token9] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [370] = {
    [aux_sym__repository_start_repeat3] = STATE(370),
    [aux_sym_from_layer_token9] = ACTIONS(1110),
    [anon_sym_SLASH] = ACTIONS(162),
    [aux_sym__repository_start_token3] = ACTIONS(164),
    [aux_sym__repository_start_token7] = ACTIONS(1110),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [371] = {
    [aux_sym__repository_start_repeat2] = STATE(371),
    [aux_sym_from_layer_token5] = ACTIONS(1113),
    [anon_sym_SLASH] = ACTIONS(155),
    [aux_sym__repository_start_token3] = ACTIONS(157),
    [aux_sym__repository_start_token5] = ACTIONS(1113),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [372] = {
    [aux_sym__repository_start_repeat1] = STATE(372),
    [anon_sym_DOLLAR] = ACTIONS(1116),
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token2] = ACTIONS(1116),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [373] = {
    [sym_user_name] = STATE(466),
    [sym_user_id] = STATE(465),
    [anon_sym_DOLLAR] = ACTIONS(1119),
    [aux_sym_user_name_token1] = ACTIONS(1121),
    [aux_sym_user_id_token1] = ACTIONS(1123),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [374] = {
    [sym_template_expr_less_than_equals] = STATE(547),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(341),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(962),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [375] = {
    [anon_sym_DASH_DASHinterval] = ACTIONS(1125),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(1125),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(1125),
    [anon_sym_DASH_DASHretries] = ACTIONS(1125),
    [aux_sym__hc_command_token1] = ACTIONS(1125),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [376] = {
    [sym_label_pair_eq] = STATE(167),
    [sym_label_key] = STATE(504),
    [anon_sym_DOLLAR] = ACTIONS(1127),
    [aux_sym_env_key_token1] = ACTIONS(1129),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [377] = {
    [anon_sym_DOLLAR] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [aux_sym__repository_start_token2] = ACTIONS(169),
    [aux_sym__repository_start_token3] = ACTIONS(171),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [378] = {
    [aux_sym_from_layer_token5] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [aux_sym__repository_start_token5] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [379] = {
    [aux_sym_from_layer_token9] = ACTIONS(211),
    [anon_sym_SLASH] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(213),
    [aux_sym__repository_start_token7] = ACTIONS(211),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [380] = {
    [sym_arg_default] = STATE(194),
    [anon_sym_DQUOTE] = ACTIONS(1131),
    [anon_sym_SQUOTE] = ACTIONS(1133),
    [aux_sym_arg_default_token3] = ACTIONS(1135),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [381] = {
    [aux_sym_from_layer_token13] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token9] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [382] = {
    [aux_sym__anything] = STATE(136),
    [sym__anything_or_json_array] = STATE(198),
    [aux_sym__anything_token1] = ACTIONS(493),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1137),
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
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_path_token3] = ACTIONS(217),
    [aux_sym_path_token4] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [385] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_path_token3] = ACTIONS(205),
    [aux_sym_path_token4] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [386] = {
    [sym_env_pair_eq] = STATE(184),
    [sym_env_key] = STATE(569),
    [anon_sym_DOLLAR] = ACTIONS(1139),
    [aux_sym_env_key_token1] = ACTIONS(1141),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [387] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [aux_sym_from_layer_token3] = ACTIONS(195),
    [aux_sym_from_layer_token4] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [388] = {
    [anon_sym_DOLLAR] = ACTIONS(1143),
    [aux_sym_from_layer_token3] = ACTIONS(1143),
    [aux_sym_from_layer_token4] = ACTIONS(1069),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1069),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_from_layer_token3] = ACTIONS(215),
    [aux_sym_from_layer_token4] = ACTIONS(217),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [390] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [aux_sym_from_layer_token3] = ACTIONS(203),
    [aux_sym_from_layer_token4] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [391] = {
    [anon_sym_DOLLAR] = ACTIONS(195),
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token2] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [392] = {
    [aux_sym_from_layer_token4] = ACTIONS(1145),
    [aux_sym_from_layer_token13] = ACTIONS(1147),
    [aux_sym_from_layer_token16] = ACTIONS(1147),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1145),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [393] = {
    [anon_sym_DQUOTE] = ACTIONS(1041),
    [anon_sym_DOLLAR] = ACTIONS(1041),
    [aux_sym_path_token3] = ACTIONS(1046),
    [aux_sym_path_token4] = ACTIONS(1046),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [394] = {
    [aux_sym_from_layer_token4] = ACTIONS(1149),
    [aux_sym_from_layer_token5] = ACTIONS(1151),
    [aux_sym_from_layer_token8] = ACTIONS(1151),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1149),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [395] = {
    [aux_sym_from_layer_token4] = ACTIONS(1153),
    [aux_sym_from_layer_token9] = ACTIONS(1155),
    [aux_sym_from_layer_token12] = ACTIONS(1155),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1153),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [396] = {
    [anon_sym_DOLLAR] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [aux_sym__repository_start_token2] = ACTIONS(215),
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [397] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [398] = {
    [aux_sym__anything] = STATE(136),
    [sym__anything_or_json_array] = STATE(187),
    [aux_sym__anything_token1] = ACTIONS(493),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1157),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [aux_sym__anything] = STATE(136),
    [sym__anything_or_json_array] = STATE(204),
    [aux_sym__anything_token1] = ACTIONS(493),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1159),
    [sym_line_continuation] = ACTIONS(5),
  },
  [400] = {
    [sym_docker_variable] = STATE(528),
    [anon_sym_LBRACE] = ACTIONS(1161),
    [sym__docker_variable] = ACTIONS(1163),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [401] = {
    [sym_docker_variable] = STATE(118),
    [anon_sym_LBRACE] = ACTIONS(1165),
    [sym__docker_variable] = ACTIONS(1167),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [sym_docker_variable] = STATE(328),
    [anon_sym_LBRACE] = ACTIONS(1169),
    [sym__docker_variable] = ACTIONS(1171),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [403] = {
    [anon_sym_DOLLAR] = ACTIONS(1173),
    [aux_sym_path_token3] = ACTIONS(1175),
    [aux_sym_path_token4] = ACTIONS(1177),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [404] = {
    [sym_docker_variable] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(1179),
    [sym__docker_variable] = ACTIONS(1181),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [405] = {
    [sym_docker_variable] = STATE(134),
    [anon_sym_LBRACE] = ACTIONS(1183),
    [sym__docker_variable] = ACTIONS(1185),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [406] = {
    [sym_docker_variable] = STATE(377),
    [anon_sym_LBRACE] = ACTIONS(1187),
    [sym__docker_variable] = ACTIONS(1189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [407] = {
    [sym_docker_variable] = STATE(67),
    [anon_sym_LBRACE] = ACTIONS(1191),
    [sym__docker_variable] = ACTIONS(1193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [sym_docker_variable] = STATE(388),
    [anon_sym_LBRACE] = ACTIONS(1195),
    [sym__docker_variable] = ACTIONS(1197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [sym_docker_variable] = STATE(443),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym__docker_variable] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [anon_sym_DOLLAR] = ACTIONS(1203),
    [aux_sym_port_protocol_token1] = ACTIONS(1205),
    [aux_sym_port_protocol_token2] = ACTIONS(1205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [sym_docker_variable] = STATE(494),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym__docker_variable] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [aux_sym_arg_default_repeat2] = STATE(420),
    [anon_sym_SQUOTE] = ACTIONS(1207),
    [aux_sym_arg_default_token2] = ACTIONS(1209),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [sym_docker_variable] = STATE(362),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym__docker_variable] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [sym_docker_variable] = STATE(491),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym__docker_variable] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [sym_docker_variable] = STATE(307),
    [anon_sym_LBRACE] = ACTIONS(1187),
    [sym__docker_variable] = ACTIONS(1189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [sym_docker_variable] = STATE(101),
    [anon_sym_LBRACE] = ACTIONS(1165),
    [sym__docker_variable] = ACTIONS(1167),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [aux_sym_arg_default_repeat1] = STATE(417),
    [anon_sym_DQUOTE] = ACTIONS(1211),
    [aux_sym_arg_default_token1] = ACTIONS(1213),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [418] = {
    [sym_docker_variable] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(1191),
    [sym__docker_variable] = ACTIONS(1193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [aux_sym_arg_default_repeat1] = STATE(417),
    [anon_sym_DQUOTE] = ACTIONS(1207),
    [aux_sym_arg_default_token1] = ACTIONS(1216),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [aux_sym_arg_default_repeat2] = STATE(420),
    [anon_sym_SQUOTE] = ACTIONS(1218),
    [aux_sym_arg_default_token2] = ACTIONS(1220),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [sym_signal_name] = STATE(214),
    [sym_signal_num] = ACTIONS(1223),
    [aux_sym_signal_name_token1] = ACTIONS(1225),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [anon_sym_DOLLAR] = ACTIONS(1227),
    [aux_sym_path_token3] = ACTIONS(1229),
    [aux_sym_path_token4] = ACTIONS(1231),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [423] = {
    [sym_docker_variable] = STATE(46),
    [anon_sym_LBRACE] = ACTIONS(1233),
    [sym__docker_variable] = ACTIONS(1235),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [sym_docker_variable] = STATE(145),
    [anon_sym_LBRACE] = ACTIONS(1237),
    [sym__docker_variable] = ACTIONS(1239),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [aux_sym_arg_default_repeat2] = STATE(412),
    [anon_sym_SQUOTE] = ACTIONS(1241),
    [aux_sym_arg_default_token2] = ACTIONS(1243),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [aux_sym_arg_default_repeat1] = STATE(419),
    [anon_sym_DQUOTE] = ACTIONS(1241),
    [aux_sym_arg_default_token1] = ACTIONS(1245),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [sym_docker_variable] = STATE(87),
    [anon_sym_LBRACE] = ACTIONS(1233),
    [sym__docker_variable] = ACTIONS(1235),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [sym_docker_variable] = STATE(81),
    [anon_sym_LBRACE] = ACTIONS(1179),
    [sym__docker_variable] = ACTIONS(1181),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [sym_docker_variable] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(1247),
    [sym__docker_variable] = ACTIONS(1249),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [sym__port_part] = STATE(103),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym__port_part_token1] = ACTIONS(133),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [sym_docker_variable] = STATE(493),
    [anon_sym_LBRACE] = ACTIONS(1199),
    [sym__docker_variable] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [sym_docker_variable] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(1179),
    [sym__docker_variable] = ACTIONS(1181),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [sym_docker_variable] = STATE(284),
    [anon_sym_LBRACE] = ACTIONS(1251),
    [sym__docker_variable] = ACTIONS(1253),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [sym_platform] = STATE(240),
    [anon_sym_DOLLAR] = ACTIONS(1255),
    [aux_sym_platform_token1] = ACTIONS(1257),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [435] = {
    [sym_docker_variable] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(1179),
    [sym__docker_variable] = ACTIONS(1181),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [anon_sym_DOLLAR] = ACTIONS(1259),
    [aux_sym_port_protocol_token1] = ACTIONS(1261),
    [aux_sym_port_protocol_token2] = ACTIONS(1261),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [sym_docker_variable] = STATE(216),
    [anon_sym_LBRACE] = ACTIONS(1247),
    [sym__docker_variable] = ACTIONS(1249),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [438] = {
    [sym_docker_variable] = STATE(467),
    [anon_sym_LBRACE] = ACTIONS(1161),
    [sym__docker_variable] = ACTIONS(1163),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [sym_docker_variable] = STATE(393),
    [anon_sym_LBRACE] = ACTIONS(1169),
    [sym__docker_variable] = ACTIONS(1171),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [anon_sym_DQUOTE] = ACTIONS(367),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [anon_sym_DQUOTE] = ACTIONS(375),
    [anon_sym_COLON] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(375),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [anon_sym_DQUOTE] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [anon_sym_DQUOTE] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(1263),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [445] = {
    [sym__port_part] = STATE(476),
    [anon_sym_DOLLAR] = ACTIONS(870),
    [aux_sym__port_part_token1] = ACTIONS(872),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [446] = {
    [sym_docker_variable] = STATE(100),
    [anon_sym_LBRACE] = ACTIONS(1183),
    [sym__docker_variable] = ACTIONS(1185),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [sym_docker_variable] = STATE(364),
    [anon_sym_LBRACE] = ACTIONS(1169),
    [sym__docker_variable] = ACTIONS(1171),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [sym_docker_variable] = STATE(303),
    [anon_sym_LBRACE] = ACTIONS(1195),
    [sym__docker_variable] = ACTIONS(1197),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [sym_docker_variable] = STATE(70),
    [anon_sym_LBRACE] = ACTIONS(1247),
    [sym__docker_variable] = ACTIONS(1249),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [sym_user_group] = STATE(484),
    [aux_sym_user_name_token1] = ACTIONS(1265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [anon_sym_COLON] = ACTIONS(615),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(615),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [452] = {
    [aux_sym__anything] = STATE(156),
    [aux_sym__anything_token1] = ACTIONS(1267),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [sym_user_group_id] = STATE(572),
    [aux_sym_user_id_token1] = ACTIONS(1269),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [anon_sym_DQUOTE] = ACTIONS(1271),
    [anon_sym_COLON] = ACTIONS(1274),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [anon_sym_EQ2] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [aux_sym__anything] = STATE(139),
    [aux_sym__anything_token1] = ACTIONS(1276),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [457] = {
    [anon_sym_EQ2] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [458] = {
    [sym_env_value] = STATE(180),
    [aux_sym_env_value_token1] = ACTIONS(1278),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [459] = {
    [anon_sym_EQ2] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [460] = {
    [sym_user_group] = STATE(572),
    [aux_sym_user_name_token1] = ACTIONS(1280),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [sym_user_group_id] = STATE(231),
    [aux_sym_user_id_token1] = ACTIONS(1282),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [sym_hc_interval] = STATE(354),
    [aux_sym_hc_interval_token1] = ACTIONS(1284),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [sym_user_group] = STATE(231),
    [aux_sym_user_name_token1] = ACTIONS(1286),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [464] = {
    [sym_hc_timeout] = STATE(357),
    [aux_sym_hc_interval_token1] = ACTIONS(1288),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [anon_sym_DQUOTE] = ACTIONS(1290),
    [anon_sym_COLON] = ACTIONS(1292),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [466] = {
    [anon_sym_DQUOTE] = ACTIONS(1290),
    [anon_sym_COLON] = ACTIONS(1294),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [467] = {
    [anon_sym_EQ2] = ACTIONS(1296),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1296),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [aux_sym__anything] = STATE(153),
    [aux_sym__anything_token1] = ACTIONS(1276),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [anon_sym_DQUOTE] = ACTIONS(615),
    [anon_sym_COLON] = ACTIONS(615),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [anon_sym_DQUOTE] = ACTIONS(617),
    [anon_sym_COLON] = ACTIONS(617),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [sym_user_group_id] = STATE(484),
    [aux_sym_user_id_token1] = ACTIONS(1298),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [sym_label_value] = STATE(171),
    [aux_sym_env_value_token1] = ACTIONS(1300),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [473] = {
    [anon_sym_EQ2] = ACTIONS(1302),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1304),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [anon_sym_COLON] = ACTIONS(1306),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1308),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [anon_sym_COLON] = ACTIONS(1310),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1308),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [anon_sym_DQUOTE] = ACTIONS(426),
    [anon_sym_COLON] = ACTIONS(426),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [477] = {
    [sym_hc_start_period] = STATE(359),
    [aux_sym_hc_interval_token1] = ACTIONS(1312),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [478] = {
    [anon_sym_EQ2] = ACTIONS(1314),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1314),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [sym_hc_retries] = STATE(375),
    [aux_sym__port_part_token1] = ACTIONS(1316),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [480] = {
    [anon_sym_DQUOTE] = ACTIONS(422),
    [anon_sym_COLON] = ACTIONS(1318),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [anon_sym_DQUOTE] = ACTIONS(431),
    [anon_sym_COLON] = ACTIONS(431),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [anon_sym_COLON] = ACTIONS(617),
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(617),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [483] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1320),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [anon_sym_DQUOTE] = ACTIONS(1322),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1324),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [anon_sym_EQ2] = ACTIONS(523),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [487] = {
    [anon_sym_EQ2] = ACTIONS(1314),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [488] = {
    [sym_template_expr_percent_signs] = ACTIONS(1326),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [489] = {
    [sym__docker_variable] = ACTIONS(1328),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [anon_sym_DQUOTE] = ACTIONS(1330),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [491] = {
    [anon_sym_EQ2] = ACTIONS(519),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [492] = {
    [sym_template_expr_curly_braces] = ACTIONS(1332),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [493] = {
    [anon_sym_DQUOTE] = ACTIONS(1334),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [anon_sym_EQ2] = ACTIONS(1296),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [495] = {
    [anon_sym_DQUOTE] = ACTIONS(475),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [496] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(685),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [497] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(683),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [aux_sym_signal_name_token2] = ACTIONS(1336),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [499] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1338),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [500] = {
    [anon_sym_EQ] = ACTIONS(1340),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [501] = {
    [anon_sym_EQ] = ACTIONS(1342),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [502] = {
    [anon_sym_EQ] = ACTIONS(1344),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [503] = {
    [anon_sym_EQ] = ACTIONS(1346),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [504] = {
    [anon_sym_EQ2] = ACTIONS(1302),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [505] = {
    [aux_sym_from_layer_token10] = ACTIONS(1348),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [506] = {
    [anon_sym_DQUOTE] = ACTIONS(1350),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [507] = {
    [sym_template_expr_percent_signs] = ACTIONS(1352),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [508] = {
    [sym_template_expr_curly_braces] = ACTIONS(1354),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [509] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1356),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [510] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1358),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [511] = {
    [aux_sym_from_layer_token14] = ACTIONS(1360),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [512] = {
    [anon_sym_DQUOTE] = ACTIONS(685),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [513] = {
    [anon_sym_DQUOTE] = ACTIONS(683),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [514] = {
    [anon_sym_DQUOTE] = ACTIONS(1062),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [515] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1362),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [516] = {
    [aux_sym_from_token2] = ACTIONS(1364),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [517] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1366),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [518] = {
    [sym_template_expr_curly_braces] = ACTIONS(1368),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [519] = {
    [sym_template_expr_percent_signs] = ACTIONS(1370),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [520] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1372),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [521] = {
    [aux_sym_from_token2] = ACTIONS(1374),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [522] = {
    [anon_sym_SLASH] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [523] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1376),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [524] = {
    [anon_sym_RBRACE] = ACTIONS(1378),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [525] = {
    [aux_sym_from_layer_token10] = ACTIONS(1380),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [526] = {
    [aux_sym_from_token2] = ACTIONS(1382),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [527] = {
    [aux_sym_from_layer_token14] = ACTIONS(1384),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [528] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1386),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [529] = {
    [aux_sym_from_layer_token14] = ACTIONS(1388),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [530] = {
    [aux_sym_from_layer_token14] = ACTIONS(1390),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [531] = {
    [ts_builtin_sym_end] = ACTIONS(1392),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [532] = {
    [aux_sym_from_layer_token10] = ACTIONS(1394),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [533] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1396),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [534] = {
    [aux_sym_from_layer_token6] = ACTIONS(1398),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [535] = {
    [sym_template_expr_percent_signs] = ACTIONS(1400),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [536] = {
    [aux_sym_from_layer_token6] = ACTIONS(1402),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [537] = {
    [sym_template_expr_curly_braces] = ACTIONS(1404),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [538] = {
    [aux_sym_from_layer_token10] = ACTIONS(1406),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [539] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_json_array] = ACTIONS(1408),
    [sym_line_continuation] = ACTIONS(5),
  },
  [540] = {
    [aux_sym_from_token2] = ACTIONS(1410),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [541] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1412),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [542] = {
    [aux_sym_from_token2] = ACTIONS(1414),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [543] = {
    [sym_template_expr_percent_signs] = ACTIONS(1416),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [544] = {
    [sym_template_expr_curly_braces] = ACTIONS(1418),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [545] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1420),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [546] = {
    [aux_sym_from_layer_token6] = ACTIONS(1422),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [547] = {
    [aux_sym_from_layer_token14] = ACTIONS(1424),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [548] = {
    [aux_sym_from_layer_token6] = ACTIONS(1426),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [549] = {
    [aux_sym_from_layer_token10] = ACTIONS(1428),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [550] = {
    [anon_sym_RBRACE] = ACTIONS(1430),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [551] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1432),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [552] = {
    [anon_sym_RBRACE] = ACTIONS(1434),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [553] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1436),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [554] = {
    [sym_template_expr_percent_signs] = ACTIONS(1438),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [555] = {
    [sym_template_expr_curly_braces] = ACTIONS(1440),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [556] = {
    [anon_sym_DQUOTE] = ACTIONS(1442),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [557] = {
    [aux_sym_from_layer_token14] = ACTIONS(1444),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [558] = {
    [aux_sym_from_layer_token10] = ACTIONS(1446),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [559] = {
    [aux_sym_from_layer_token14] = ACTIONS(1448),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [560] = {
    [aux_sym_from_layer_token10] = ACTIONS(1450),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [561] = {
    [sym_arg_name] = ACTIONS(1452),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [562] = {
    [sym_template_expr_curly_braces] = ACTIONS(1454),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [563] = {
    [sym_template_expr_percent_signs] = ACTIONS(1456),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [564] = {
    [sym_template_expr_curly_braces] = ACTIONS(1458),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [565] = {
    [anon_sym_SLASH] = ACTIONS(1460),
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
    [sym_template_expr_percent_signs] = ACTIONS(1464),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [568] = {
    [aux_sym_from_layer_token6] = ACTIONS(1466),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [569] = {
    [anon_sym_EQ2] = ACTIONS(535),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [570] = {
    [anon_sym_DQUOTE] = ACTIONS(1468),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [571] = {
    [anon_sym_SLASH] = ACTIONS(1470),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [572] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1472),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [573] = {
    [anon_sym_DQUOTE] = ACTIONS(1011),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [574] = {
    [aux_sym_from_layer_token14] = ACTIONS(1474),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [575] = {
    [anon_sym_RBRACE] = ACTIONS(1476),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [576] = {
    [anon_sym_DQUOTE] = ACTIONS(1478),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [577] = {
    [aux_sym_from_layer_token6] = ACTIONS(1480),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [578] = {
    [aux_sym_from_layer_token10] = ACTIONS(1482),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [579] = {
    [aux_sym_from_layer_token14] = ACTIONS(1484),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [580] = {
    [aux_sym_from_layer_token10] = ACTIONS(1486),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [581] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1488),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [582] = {
    [anon_sym_RBRACE] = ACTIONS(1490),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [583] = {
    [aux_sym_from_layer_token6] = ACTIONS(1492),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [584] = {
    [aux_sym_from_layer_token10] = ACTIONS(1494),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [585] = {
    [aux_sym_from_layer_token14] = ACTIONS(1496),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [586] = {
    [aux_sym_from_layer_token6] = ACTIONS(1498),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [587] = {
    [aux_sym_from_token2] = ACTIONS(1500),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [588] = {
    [anon_sym_RBRACE] = ACTIONS(1502),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [589] = {
    [aux_sym_from_layer_token6] = ACTIONS(1504),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [590] = {
    [aux_sym_from_layer_token10] = ACTIONS(1506),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [591] = {
    [aux_sym_from_layer_token14] = ACTIONS(1508),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [592] = {
    [anon_sym_DQUOTE] = ACTIONS(1510),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [593] = {
    [anon_sym_RBRACE] = ACTIONS(1512),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [594] = {
    [anon_sym_SLASH] = ACTIONS(997),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [595] = {
    [anon_sym_RBRACE] = ACTIONS(1514),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [596] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1516),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [597] = {
    [anon_sym_RBRACE] = ACTIONS(1518),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [598] = {
    [aux_sym_from_layer_token6] = ACTIONS(1520),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [599] = {
    [anon_sym_RBRACE] = ACTIONS(1522),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [600] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1524),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [601] = {
    [anon_sym_RBRACE] = ACTIONS(1526),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [602] = {
    [aux_sym_from_layer_token6] = ACTIONS(1528),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [603] = {
    [anon_sym_RBRACE] = ACTIONS(1530),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [604] = {
    [aux_sym_from_layer_token10] = ACTIONS(1532),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [605] = {
    [anon_sym_RBRACE] = ACTIONS(1534),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [606] = {
    [aux_sym_from_layer_token14] = ACTIONS(1536),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [607] = {
    [anon_sym_RBRACE] = ACTIONS(1538),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [608] = {
    [sym_template_expr_percent_signs] = ACTIONS(1540),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [609] = {
    [anon_sym_RBRACE] = ACTIONS(1542),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [610] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1544),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [611] = {
    [aux_sym_from_token2] = ACTIONS(1546),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [612] = {
    [sym__docker_variable] = ACTIONS(1548),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [613] = {
    [sym_template_expr_curly_braces] = ACTIONS(1550),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [614] = {
    [sym_template_expr_curly_braces] = ACTIONS(1552),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [615] = {
    [sym_template_expr_percent_signs] = ACTIONS(1554),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [616] = {
    [aux_sym_from_token2] = ACTIONS(1556),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [617] = {
    [sym__docker_variable] = ACTIONS(1558),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [618] = {
    [sym_template_expr_curly_braces] = ACTIONS(1560),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [619] = {
    [sym_template_expr_percent_signs] = ACTIONS(1562),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [620] = {
    [aux_sym_from_token2] = ACTIONS(1564),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [621] = {
    [sym__docker_variable] = ACTIONS(1566),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [622] = {
    [sym_template_expr_curly_braces] = ACTIONS(1568),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [623] = {
    [sym_template_expr_percent_signs] = ACTIONS(1570),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [624] = {
    [aux_sym_from_layer_token6] = ACTIONS(1572),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [625] = {
    [sym__docker_variable] = ACTIONS(1574),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [626] = {
    [sym__docker_variable] = ACTIONS(1576),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [627] = {
    [sym__docker_variable] = ACTIONS(1578),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [628] = {
    [sym__docker_variable] = ACTIONS(1580),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [629] = {
    [sym__docker_variable] = ACTIONS(1582),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [630] = {
    [sym__docker_variable] = ACTIONS(1584),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [631] = {
    [sym__docker_variable] = ACTIONS(1586),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [632] = {
    [sym__docker_variable] = ACTIONS(1588),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [633] = {
    [sym__docker_variable] = ACTIONS(1590),
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
  [11] = {.count = 1, .reusable = true}, SHIFT(292),
  [13] = {.count = 1, .reusable = true}, SHIFT(561),
  [15] = {.count = 1, .reusable = true}, SHIFT(399),
  [17] = {.count = 1, .reusable = true}, SHIFT(237),
  [19] = {.count = 1, .reusable = true}, SHIFT(398),
  [21] = {.count = 1, .reusable = true}, SHIFT(300),
  [23] = {.count = 1, .reusable = true}, SHIFT(239),
  [25] = {.count = 1, .reusable = true}, SHIFT(235),
  [27] = {.count = 1, .reusable = true}, SHIFT(236),
  [29] = {.count = 1, .reusable = true}, SHIFT(299),
  [31] = {.count = 1, .reusable = true}, SHIFT(452),
  [33] = {.count = 1, .reusable = true}, SHIFT(7),
  [35] = {.count = 1, .reusable = true}, SHIFT(382),
  [37] = {.count = 1, .reusable = true}, SHIFT(539),
  [39] = {.count = 1, .reusable = true}, SHIFT(421),
  [41] = {.count = 1, .reusable = true}, SHIFT(298),
  [43] = {.count = 1, .reusable = true}, SHIFT(293),
  [45] = {.count = 1, .reusable = true}, SHIFT(356),
  [47] = {.count = 1, .reusable = false}, SHIFT(211),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [51] = {.count = 1, .reusable = true}, SHIFT(211),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1),
  [55] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(292),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(561),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(399),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(237),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(398),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(300),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(239),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(235),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(236),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(299),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(452),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(7),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(382),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(539),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(421),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(298),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(293),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(356),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 4), SHIFT_REPEAT(211),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 2, .production_id = 3),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(277),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(429),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(41),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [129] = {.count = 1, .reusable = true}, SHIFT(277),
  [131] = {.count = 1, .reusable = true}, SHIFT(429),
  [133] = {.count = 1, .reusable = true}, SHIFT(41),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [139] = {.count = 1, .reusable = true}, SHIFT(404),
  [141] = {.count = 1, .reusable = true}, SHIFT(280),
  [143] = {.count = 1, .reusable = false}, SHIFT(92),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [149] = {.count = 1, .reusable = true}, SHIFT(613),
  [151] = {.count = 1, .reusable = true}, SHIFT(290),
  [153] = {.count = 1, .reusable = false}, SHIFT(93),
  [155] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(613),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [164] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(608),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(404),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [180] = {.count = 1, .reusable = true}, SHIFT(285),
  [182] = {.count = 1, .reusable = false}, SHIFT(78),
  [184] = {.count = 1, .reusable = true}, SHIFT(608),
  [186] = {.count = 1, .reusable = true}, SHIFT(312),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [190] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(312),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [211] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [213] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(407),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(614),
  [225] = {.count = 1, .reusable = true}, SHIFT(306),
  [227] = {.count = 1, .reusable = false}, SHIFT(131),
  [229] = {.count = 1, .reusable = true}, SHIFT(407),
  [231] = {.count = 1, .reusable = false}, SHIFT(120),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(436),
  [237] = {.count = 1, .reusable = true}, SHIFT(615),
  [239] = {.count = 1, .reusable = false}, SHIFT(132),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(615),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(306),
  [247] = {.count = 1, .reusable = true}, SHIFT(614),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_add, 2),
  [253] = {.count = 1, .reusable = true}, SHIFT(422),
  [255] = {.count = 1, .reusable = true}, SHIFT(423),
  [257] = {.count = 1, .reusable = false}, SHIFT(91),
  [259] = {.count = 1, .reusable = false}, SHIFT(423),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 2),
  [263] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(422),
  [268] = {.count = 2, .reusable = true}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(423),
  [271] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(91),
  [274] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(423),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_path, 2),
  [279] = {.count = 1, .reusable = true}, SHIFT(427),
  [281] = {.count = 1, .reusable = false}, SHIFT(68),
  [283] = {.count = 1, .reusable = false}, SHIFT(427),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_path, 2),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [291] = {.count = 1, .reusable = false}, SHIFT(155),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [295] = {.count = 1, .reusable = false}, SHIFT(73),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [303] = {.count = 1, .reusable = false}, SHIFT(135),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [309] = {.count = 1, .reusable = false}, SHIFT(143),
  [311] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2),
  [313] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(427),
  [316] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2),
  [318] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(427),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 2),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [329] = {.count = 1, .reusable = true}, SHIFT(279),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [337] = {.count = 1, .reusable = false}, SHIFT(177),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_path, 4),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_path, 4),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_path, 6),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_path, 6),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [349] = {.count = 1, .reusable = true}, SHIFT(430),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [355] = {.count = 1, .reusable = true}, SHIFT(275),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_path, 5),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_path, 5),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [365] = {.count = 1, .reusable = false}, SHIFT(164),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [373] = {.count = 1, .reusable = false}, SHIFT(172),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [377] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [379] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [381] = {.count = 1, .reusable = false}, SHIFT(98),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [391] = {.count = 1, .reusable = true}, SHIFT(622),
  [393] = {.count = 1, .reusable = false}, SHIFT(218),
  [395] = {.count = 1, .reusable = true}, SHIFT(304),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(405),
  [400] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [402] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(401),
  [405] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(401),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [412] = {.count = 1, .reusable = true}, SHIFT(405),
  [414] = {.count = 1, .reusable = false}, SHIFT(185),
  [416] = {.count = 1, .reusable = true}, SHIFT(401),
  [418] = {.count = 1, .reusable = false}, SHIFT(197),
  [420] = {.count = 1, .reusable = false}, SHIFT(401),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [424] = {.count = 1, .reusable = true}, SHIFT(294),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(622),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [433] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(623),
  [436] = {.count = 1, .reusable = false}, SHIFT(192),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [440] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [442] = {.count = 1, .reusable = false}, SHIFT(227),
  [444] = {.count = 1, .reusable = true}, SHIFT(623),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(304),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [451] = {.count = 1, .reusable = true}, SHIFT(265),
  [453] = {.count = 1, .reusable = true}, SHIFT(245),
  [455] = {.count = 1, .reusable = false}, SHIFT(616),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [459] = {.count = 1, .reusable = true}, SHIFT(266),
  [461] = {.count = 1, .reusable = true}, SHIFT(244),
  [463] = {.count = 1, .reusable = false}, SHIFT(542),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [467] = {.count = 1, .reusable = true}, SHIFT(267),
  [469] = {.count = 1, .reusable = true}, SHIFT(246),
  [471] = {.count = 1, .reusable = false}, SHIFT(620),
  [473] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [479] = {.count = 1, .reusable = true}, SHIFT(274),
  [481] = {.count = 1, .reusable = true}, SHIFT(247),
  [483] = {.count = 1, .reusable = false}, SHIFT(611),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [493] = {.count = 1, .reusable = false}, SHIFT(174),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair, 3, .production_id = 5),
  [497] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair, 3, .production_id = 5),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym__labels, 2),
  [501] = {.count = 1, .reusable = false}, SHIFT(376),
  [503] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [505] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [507] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(170),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 2),
  [512] = {.count = 1, .reusable = false}, SHIFT(386),
  [514] = {.count = 1, .reusable = true}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [516] = {.count = 2, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2), SHIFT_REPEAT(386),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_env_key, 2),
  [521] = {.count = 1, .reusable = false}, REDUCE(sym_env_key, 2),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_env_key, 1),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_env_key, 1),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [529] = {.count = 1, .reusable = true}, SHIFT(248),
  [531] = {.count = 1, .reusable = false}, SHIFT(587),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym__env_pairs, 1),
  [535] = {.count = 1, .reusable = true}, SHIFT(458),
  [537] = {.count = 1, .reusable = false}, SHIFT(456),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [541] = {.count = 1, .reusable = true}, SHIFT(251),
  [543] = {.count = 1, .reusable = false}, SHIFT(526),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3, .production_id = 6),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3, .production_id = 6),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 2),
  [555] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 2),
  [557] = {.count = 1, .reusable = false}, SHIFT(170),
  [559] = {.count = 1, .reusable = true}, SHIFT(205),
  [561] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(174),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym__labels, 1),
  [566] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels_repeat1, 2),
  [568] = {.count = 2, .reusable = false}, REDUCE(aux_sym__labels_repeat1, 2), SHIFT_REPEAT(376),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [573] = {.count = 1, .reusable = false}, SHIFT(540),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_user, 2),
  [577] = {.count = 1, .reusable = true}, SHIFT(461),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [587] = {.count = 1, .reusable = false}, REDUCE(aux_sym__labels_repeat1, 2),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [591] = {.count = 1, .reusable = false}, SHIFT(516),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [595] = {.count = 1, .reusable = false}, SHIFT(521),
  [597] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 1),
  [599] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 1),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair_eq, 3),
  [603] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair_eq, 3),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [607] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 2),
  [611] = {.count = 1, .reusable = true}, SHIFT(380),
  [613] = {.count = 1, .reusable = true}, SHIFT(463),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_env_pair_eq, 3),
  [621] = {.count = 1, .reusable = false}, REDUCE(sym_env_pair_eq, 3),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_env_value, 1),
  [625] = {.count = 1, .reusable = false}, REDUCE(sym_env_value, 1),
  [627] = {.count = 1, .reusable = false}, REDUCE(aux_sym__env_pairs_repeat1, 2),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 2),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 2),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 3),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_env, 2),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 4),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 1),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_run, 2),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_user, 6),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 2),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 2),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 2),
  [663] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 2),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 2),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 2),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [695] = {.count = 1, .reusable = true}, SHIFT(434),
  [697] = {.count = 1, .reusable = true}, SHIFT(435),
  [699] = {.count = 1, .reusable = true}, SHIFT(508),
  [701] = {.count = 1, .reusable = true}, SHIFT(507),
  [703] = {.count = 1, .reusable = true}, SHIFT(374),
  [705] = {.count = 1, .reusable = false}, SHIFT(69),
  [707] = {.count = 1, .reusable = true}, SHIFT(212),
  [709] = {.count = 1, .reusable = true}, SHIFT(503),
  [711] = {.count = 1, .reusable = true}, SHIFT(502),
  [713] = {.count = 1, .reusable = true}, SHIFT(501),
  [715] = {.count = 1, .reusable = true}, SHIFT(500),
  [717] = {.count = 1, .reusable = true}, SHIFT(499),
  [719] = {.count = 1, .reusable = true}, SHIFT(301),
  [721] = {.count = 1, .reusable = true}, SHIFT(253),
  [723] = {.count = 1, .reusable = true}, SHIFT(213),
  [725] = {.count = 1, .reusable = true}, SHIFT(297),
  [727] = {.count = 1, .reusable = true}, SHIFT(219),
  [729] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(503),
  [732] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(502),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(501),
  [738] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(500),
  [741] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [743] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(415),
  [746] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(564),
  [749] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(567),
  [752] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(331),
  [755] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(571),
  [758] = {.count = 1, .reusable = true}, SHIFT(272),
  [760] = {.count = 1, .reusable = true}, SHIFT(428),
  [762] = {.count = 1, .reusable = true}, SHIFT(555),
  [764] = {.count = 1, .reusable = true}, SHIFT(554),
  [766] = {.count = 1, .reusable = true}, SHIFT(335),
  [768] = {.count = 1, .reusable = false}, SHIFT(166),
  [770] = {.count = 1, .reusable = true}, SHIFT(268),
  [772] = {.count = 1, .reusable = true}, SHIFT(255),
  [774] = {.count = 1, .reusable = true}, SHIFT(254),
  [776] = {.count = 1, .reusable = true}, SHIFT(269),
  [778] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(415),
  [781] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(564),
  [784] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(567),
  [787] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(331),
  [790] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(571),
  [793] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(415),
  [796] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(564),
  [799] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(567),
  [802] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(331),
  [805] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(571),
  [808] = {.count = 1, .reusable = true}, SHIFT(264),
  [810] = {.count = 1, .reusable = true}, SHIFT(446),
  [812] = {.count = 1, .reusable = true}, SHIFT(492),
  [814] = {.count = 1, .reusable = true}, SHIFT(488),
  [816] = {.count = 1, .reusable = true}, SHIFT(353),
  [818] = {.count = 1, .reusable = false}, SHIFT(208),
  [820] = {.count = 1, .reusable = true}, SHIFT(448),
  [822] = {.count = 1, .reusable = false}, SHIFT(510),
  [824] = {.count = 1, .reusable = true}, SHIFT(518),
  [826] = {.count = 1, .reusable = true}, SHIFT(519),
  [828] = {.count = 1, .reusable = true}, SHIFT(346),
  [830] = {.count = 1, .reusable = true}, SHIFT(418),
  [832] = {.count = 1, .reusable = true}, SHIFT(562),
  [834] = {.count = 1, .reusable = true}, SHIFT(563),
  [836] = {.count = 1, .reusable = true}, SHIFT(329),
  [838] = {.count = 1, .reusable = false}, SHIFT(115),
  [840] = {.count = 1, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2),
  [842] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(301),
  [845] = {.count = 2, .reusable = true}, REDUCE(aux_sym_copy_repeat1, 2), SHIFT_REPEAT(253),
  [848] = {.count = 1, .reusable = false}, REDUCE(aux_sym_copy_repeat1, 2),
  [850] = {.count = 1, .reusable = true}, SHIFT(432),
  [852] = {.count = 1, .reusable = true}, SHIFT(537),
  [854] = {.count = 1, .reusable = true}, SHIFT(535),
  [856] = {.count = 1, .reusable = true}, SHIFT(348),
  [858] = {.count = 1, .reusable = false}, SHIFT(151),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [862] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [866] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [868] = {.count = 1, .reusable = true}, SHIFT(344),
  [870] = {.count = 1, .reusable = true}, SHIFT(413),
  [872] = {.count = 1, .reusable = true}, SHIFT(361),
  [874] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [876] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [878] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [880] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [882] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [884] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [886] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [888] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [890] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [892] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [894] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [896] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [898] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [900] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [902] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [904] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [906] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [908] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [910] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [912] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [914] = {.count = 1, .reusable = true}, REDUCE(sym__chown, 3),
  [916] = {.count = 1, .reusable = false}, REDUCE(sym__chown, 3),
  [918] = {.count = 1, .reusable = true}, SHIFT(209),
  [920] = {.count = 1, .reusable = true}, SHIFT(215),
  [922] = {.count = 1, .reusable = true}, SHIFT(308),
  [924] = {.count = 1, .reusable = true}, REDUCE(sym__from_layer, 3),
  [926] = {.count = 1, .reusable = false}, REDUCE(sym__from_layer, 3),
  [928] = {.count = 1, .reusable = true}, SHIFT(373),
  [930] = {.count = 1, .reusable = true}, SHIFT(437),
  [932] = {.count = 1, .reusable = true}, SHIFT(178),
  [934] = {.count = 1, .reusable = true}, SHIFT(176),
  [936] = {.count = 1, .reusable = true}, SHIFT(438),
  [938] = {.count = 1, .reusable = true}, SHIFT(478),
  [940] = {.count = 1, .reusable = true}, SHIFT(424),
  [942] = {.count = 1, .reusable = true}, SHIFT(146),
  [944] = {.count = 1, .reusable = true}, SHIFT(400),
  [946] = {.count = 1, .reusable = true}, SHIFT(482),
  [948] = {.count = 1, .reusable = true}, SHIFT(451),
  [950] = {.count = 1, .reusable = false}, SHIFT(553),
  [952] = {.count = 1, .reusable = true}, SHIFT(543),
  [954] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 4),
  [956] = {.count = 1, .reusable = true}, SHIFT(408),
  [958] = {.count = 1, .reusable = false}, SHIFT(581),
  [960] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 2),
  [962] = {.count = 1, .reusable = true}, SHIFT(341),
  [964] = {.count = 1, .reusable = true}, SHIFT(406),
  [966] = {.count = 1, .reusable = true}, SHIFT(276),
  [968] = {.count = 1, .reusable = false}, SHIFT(594),
  [970] = {.count = 1, .reusable = true}, SHIFT(129),
  [972] = {.count = 1, .reusable = true}, SHIFT(517),
  [974] = {.count = 1, .reusable = true}, SHIFT(610),
  [976] = {.count = 1, .reusable = true}, SHIFT(396),
  [978] = {.count = 1, .reusable = true}, SHIFT(58),
  [980] = {.count = 1, .reusable = true}, SHIFT(287),
  [982] = {.count = 1, .reusable = true}, SHIFT(339),
  [984] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [986] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(315),
  [989] = {.count = 1, .reusable = true}, SHIFT(389),
  [991] = {.count = 1, .reusable = true}, SHIFT(384),
  [993] = {.count = 1, .reusable = true}, SHIFT(124),
  [995] = {.count = 1, .reusable = true}, SHIFT(457),
  [997] = {.count = 1, .reusable = true}, SHIFT(283),
  [999] = {.count = 1, .reusable = false}, SHIFT(522),
  [1001] = {.count = 1, .reusable = true}, SHIFT(618),
  [1003] = {.count = 1, .reusable = true}, SHIFT(619),
  [1005] = {.count = 1, .reusable = true}, SHIFT(305),
  [1007] = {.count = 1, .reusable = true}, SHIFT(27),
  [1009] = {.count = 1, .reusable = true}, SHIFT(48),
  [1011] = {.count = 1, .reusable = true}, SHIFT(220),
  [1013] = {.count = 1, .reusable = true}, SHIFT(439),
  [1015] = {.count = 1, .reusable = false}, SHIFT(576),
  [1017] = {.count = 1, .reusable = false}, SHIFT(439),
  [1019] = {.count = 1, .reusable = true}, SHIFT(158),
  [1021] = {.count = 1, .reusable = true}, SHIFT(192),
  [1023] = {.count = 1, .reusable = false}, SHIFT(573),
  [1025] = {.count = 1, .reusable = false}, SHIFT(545),
  [1027] = {.count = 1, .reusable = true}, SHIFT(544),
  [1029] = {.count = 1, .reusable = false}, REDUCE(sym_from_layer, 3),
  [1031] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 2),
  [1033] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 2), SHIFT_REPEAT(349),
  [1036] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 2),
  [1038] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 2), SHIFT_REPEAT(543),
  [1041] = {.count = 1, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2),
  [1043] = {.count = 2, .reusable = true}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(439),
  [1046] = {.count = 1, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2),
  [1048] = {.count = 2, .reusable = false}, REDUCE(aux_sym_path_repeat2, 2), SHIFT_REPEAT(439),
  [1051] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [1053] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [1055] = {.count = 1, .reusable = true}, SHIFT(315),
  [1057] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 2),
  [1059] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 2), SHIFT_REPEAT(544),
  [1062] = {.count = 1, .reusable = true}, SHIFT(80),
  [1064] = {.count = 1, .reusable = false}, SHIFT(556),
  [1066] = {.count = 2, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2), SHIFT_REPEAT(408),
  [1069] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [1071] = {.count = 1, .reusable = true}, SHIFT(349),
  [1073] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [1075] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [1077] = {.count = 1, .reusable = true}, SHIFT(403),
  [1079] = {.count = 1, .reusable = true}, SHIFT(416),
  [1081] = {.count = 1, .reusable = false}, SHIFT(223),
  [1083] = {.count = 1, .reusable = false}, SHIFT(416),
  [1085] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [1087] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [1089] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [1091] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [1093] = {.count = 1, .reusable = true}, SHIFT(410),
  [1095] = {.count = 1, .reusable = true}, SHIFT(90),
  [1097] = {.count = 1, .reusable = true}, SHIFT(73),
  [1099] = {.count = 1, .reusable = false}, SHIFT(514),
  [1101] = {.count = 1, .reusable = true}, SHIFT(226),
  [1103] = {.count = 1, .reusable = true}, SHIFT(278),
  [1105] = {.count = 1, .reusable = false}, SHIFT(565),
  [1107] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(305),
  [1110] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(619),
  [1113] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(618),
  [1116] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(406),
  [1119] = {.count = 1, .reusable = true}, SHIFT(431),
  [1121] = {.count = 1, .reusable = true}, SHIFT(470),
  [1123] = {.count = 1, .reusable = true}, SHIFT(469),
  [1125] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [1127] = {.count = 1, .reusable = true}, SHIFT(411),
  [1129] = {.count = 1, .reusable = true}, SHIFT(487),
  [1131] = {.count = 1, .reusable = true}, SHIFT(426),
  [1133] = {.count = 1, .reusable = true}, SHIFT(425),
  [1135] = {.count = 1, .reusable = true}, SHIFT(196),
  [1137] = {.count = 1, .reusable = true}, SHIFT(198),
  [1139] = {.count = 1, .reusable = true}, SHIFT(414),
  [1141] = {.count = 1, .reusable = true}, SHIFT(486),
  [1143] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat1, 2),
  [1145] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [1147] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat4, 3),
  [1149] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [1151] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat2, 3),
  [1153] = {.count = 1, .reusable = false}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [1155] = {.count = 1, .reusable = true}, REDUCE(aux_sym_from_layer_repeat3, 3),
  [1157] = {.count = 1, .reusable = true}, SHIFT(187),
  [1159] = {.count = 1, .reusable = true}, SHIFT(204),
  [1161] = {.count = 1, .reusable = true}, SHIFT(625),
  [1163] = {.count = 1, .reusable = true}, SHIFT(459),
  [1165] = {.count = 1, .reusable = true}, SHIFT(626),
  [1167] = {.count = 1, .reusable = true}, SHIFT(123),
  [1169] = {.count = 1, .reusable = true}, SHIFT(627),
  [1171] = {.count = 1, .reusable = true}, SHIFT(383),
  [1173] = {.count = 1, .reusable = true}, SHIFT(402),
  [1175] = {.count = 1, .reusable = false}, SHIFT(566),
  [1177] = {.count = 1, .reusable = false}, SHIFT(402),
  [1179] = {.count = 1, .reusable = true}, SHIFT(621),
  [1181] = {.count = 1, .reusable = true}, SHIFT(21),
  [1183] = {.count = 1, .reusable = true}, SHIFT(633),
  [1185] = {.count = 1, .reusable = true}, SHIFT(114),
  [1187] = {.count = 1, .reusable = true}, SHIFT(632),
  [1189] = {.count = 1, .reusable = true}, SHIFT(391),
  [1191] = {.count = 1, .reusable = true}, SHIFT(631),
  [1193] = {.count = 1, .reusable = true}, SHIFT(63),
  [1195] = {.count = 1, .reusable = true}, SHIFT(628),
  [1197] = {.count = 1, .reusable = true}, SHIFT(387),
  [1199] = {.count = 1, .reusable = true}, SHIFT(629),
  [1201] = {.count = 1, .reusable = true}, SHIFT(340),
  [1203] = {.count = 1, .reusable = true}, SHIFT(409),
  [1205] = {.count = 1, .reusable = true}, SHIFT(441),
  [1207] = {.count = 1, .reusable = true}, SHIFT(191),
  [1209] = {.count = 1, .reusable = true}, SHIFT(420),
  [1211] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arg_default_repeat1, 2),
  [1213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arg_default_repeat1, 2), SHIFT_REPEAT(417),
  [1216] = {.count = 1, .reusable = true}, SHIFT(417),
  [1218] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arg_default_repeat2, 2),
  [1220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arg_default_repeat2, 2), SHIFT_REPEAT(420),
  [1223] = {.count = 1, .reusable = true}, SHIFT(214),
  [1225] = {.count = 1, .reusable = true}, SHIFT(498),
  [1227] = {.count = 1, .reusable = true}, SHIFT(447),
  [1229] = {.count = 1, .reusable = false}, SHIFT(490),
  [1231] = {.count = 1, .reusable = false}, SHIFT(447),
  [1233] = {.count = 1, .reusable = true}, SHIFT(489),
  [1235] = {.count = 1, .reusable = true}, SHIFT(94),
  [1237] = {.count = 1, .reusable = true}, SHIFT(612),
  [1239] = {.count = 1, .reusable = true}, SHIFT(138),
  [1241] = {.count = 1, .reusable = true}, SHIFT(224),
  [1243] = {.count = 1, .reusable = true}, SHIFT(412),
  [1245] = {.count = 1, .reusable = true}, SHIFT(419),
  [1247] = {.count = 1, .reusable = true}, SHIFT(617),
  [1249] = {.count = 1, .reusable = true}, SHIFT(54),
  [1251] = {.count = 1, .reusable = true}, SHIFT(630),
  [1253] = {.count = 1, .reusable = true}, SHIFT(281),
  [1255] = {.count = 1, .reusable = true}, SHIFT(433),
  [1257] = {.count = 1, .reusable = true}, SHIFT(289),
  [1259] = {.count = 1, .reusable = true}, SHIFT(449),
  [1261] = {.count = 1, .reusable = true}, SHIFT(86),
  [1263] = {.count = 1, .reusable = true}, SHIFT(445),
  [1265] = {.count = 1, .reusable = true}, SHIFT(512),
  [1267] = {.count = 1, .reusable = true}, SHIFT(170),
  [1269] = {.count = 1, .reusable = true}, SHIFT(497),
  [1271] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(105),
  [1274] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1276] = {.count = 1, .reusable = true}, SHIFT(174),
  [1278] = {.count = 1, .reusable = true}, SHIFT(182),
  [1280] = {.count = 1, .reusable = true}, SHIFT(496),
  [1282] = {.count = 1, .reusable = true}, SHIFT(229),
  [1284] = {.count = 1, .reusable = true}, SHIFT(337),
  [1286] = {.count = 1, .reusable = true}, SHIFT(230),
  [1288] = {.count = 1, .reusable = true}, SHIFT(355),
  [1290] = {.count = 1, .reusable = true}, SHIFT(231),
  [1292] = {.count = 1, .reusable = true}, SHIFT(471),
  [1294] = {.count = 1, .reusable = true}, SHIFT(450),
  [1296] = {.count = 1, .reusable = true}, REDUCE(sym_label_key, 2),
  [1298] = {.count = 1, .reusable = true}, SHIFT(513),
  [1300] = {.count = 1, .reusable = true}, SHIFT(163),
  [1302] = {.count = 1, .reusable = true}, SHIFT(472),
  [1304] = {.count = 1, .reusable = true}, SHIFT(468),
  [1306] = {.count = 1, .reusable = true}, SHIFT(453),
  [1308] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 1),
  [1310] = {.count = 1, .reusable = true}, SHIFT(460),
  [1312] = {.count = 1, .reusable = true}, SHIFT(358),
  [1314] = {.count = 1, .reusable = true}, REDUCE(sym_label_key, 1),
  [1316] = {.count = 1, .reusable = true}, SHIFT(360),
  [1318] = {.count = 1, .reusable = true}, SHIFT(296),
  [1320] = {.count = 1, .reusable = true}, SHIFT(273),
  [1322] = {.count = 1, .reusable = true}, SHIFT(200),
  [1324] = {.count = 1, .reusable = true}, SHIFT(291),
  [1326] = {.count = 1, .reusable = true}, SHIFT(538),
  [1328] = {.count = 1, .reusable = true}, SHIFT(363),
  [1330] = {.count = 1, .reusable = true}, SHIFT(68),
  [1332] = {.count = 1, .reusable = true}, SHIFT(546),
  [1334] = {.count = 1, .reusable = true}, SHIFT(188),
  [1336] = {.count = 1, .reusable = true}, SHIFT(221),
  [1338] = {.count = 1, .reusable = true}, SHIFT(365),
  [1340] = {.count = 1, .reusable = true}, SHIFT(479),
  [1342] = {.count = 1, .reusable = true}, SHIFT(477),
  [1344] = {.count = 1, .reusable = true}, SHIFT(464),
  [1346] = {.count = 1, .reusable = true}, SHIFT(462),
  [1348] = {.count = 1, .reusable = true}, SHIFT(322),
  [1350] = {.count = 1, .reusable = true}, SHIFT(128),
  [1352] = {.count = 1, .reusable = true}, SHIFT(525),
  [1354] = {.count = 1, .reusable = true}, SHIFT(598),
  [1356] = {.count = 1, .reusable = true}, SHIFT(252),
  [1358] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 1),
  [1360] = {.count = 1, .reusable = true}, SHIFT(392),
  [1362] = {.count = 1, .reusable = true}, SHIFT(259),
  [1364] = {.count = 1, .reusable = true}, SHIFT(509),
  [1366] = {.count = 1, .reusable = true}, SHIFT(552),
  [1368] = {.count = 1, .reusable = true}, SHIFT(548),
  [1370] = {.count = 1, .reusable = true}, SHIFT(549),
  [1372] = {.count = 1, .reusable = true}, SHIFT(260),
  [1374] = {.count = 1, .reusable = true}, SHIFT(515),
  [1376] = {.count = 1, .reusable = true}, SHIFT(263),
  [1378] = {.count = 1, .reusable = true}, SHIFT(79),
  [1380] = {.count = 1, .reusable = true}, SHIFT(20),
  [1382] = {.count = 1, .reusable = true}, SHIFT(541),
  [1384] = {.count = 1, .reusable = true}, SHIFT(22),
  [1386] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 2),
  [1388] = {.count = 1, .reusable = true}, SHIFT(323),
  [1390] = {.count = 1, .reusable = true}, SHIFT(96),
  [1392] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1394] = {.count = 1, .reusable = true}, SHIFT(26),
  [1396] = {.count = 1, .reusable = true}, SHIFT(295),
  [1398] = {.count = 1, .reusable = true}, SHIFT(25),
  [1400] = {.count = 1, .reusable = true}, SHIFT(580),
  [1402] = {.count = 1, .reusable = true}, SHIFT(394),
  [1404] = {.count = 1, .reusable = true}, SHIFT(586),
  [1406] = {.count = 1, .reusable = true}, SHIFT(113),
  [1408] = {.count = 1, .reusable = true}, SHIFT(190),
  [1410] = {.count = 1, .reusable = true}, SHIFT(520),
  [1412] = {.count = 1, .reusable = true}, SHIFT(261),
  [1414] = {.count = 1, .reusable = true}, SHIFT(600),
  [1416] = {.count = 1, .reusable = true}, SHIFT(558),
  [1418] = {.count = 1, .reusable = true}, SHIFT(536),
  [1420] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 4),
  [1422] = {.count = 1, .reusable = true}, SHIFT(95),
  [1424] = {.count = 1, .reusable = true}, SHIFT(19),
  [1426] = {.count = 1, .reusable = true}, SHIFT(330),
  [1428] = {.count = 1, .reusable = true}, SHIFT(332),
  [1430] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1432] = {.count = 1, .reusable = true}, SHIFT(257),
  [1434] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1436] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 5),
  [1438] = {.count = 1, .reusable = true}, SHIFT(560),
  [1440] = {.count = 1, .reusable = true}, SHIFT(568),
  [1442] = {.count = 1, .reusable = true}, SHIFT(76),
  [1444] = {.count = 1, .reusable = true}, SHIFT(351),
  [1446] = {.count = 1, .reusable = true}, SHIFT(395),
  [1448] = {.count = 1, .reusable = true}, SHIFT(75),
  [1450] = {.count = 1, .reusable = true}, SHIFT(74),
  [1452] = {.count = 1, .reusable = true}, SHIFT(173),
  [1454] = {.count = 1, .reusable = true}, SHIFT(602),
  [1456] = {.count = 1, .reusable = true}, SHIFT(604),
  [1458] = {.count = 1, .reusable = true}, SHIFT(624),
  [1460] = {.count = 1, .reusable = true}, SHIFT(286),
  [1462] = {.count = 1, .reusable = true}, SHIFT(197),
  [1464] = {.count = 1, .reusable = true}, SHIFT(505),
  [1466] = {.count = 1, .reusable = true}, SHIFT(72),
  [1468] = {.count = 1, .reusable = true}, SHIFT(105),
  [1470] = {.count = 1, .reusable = true}, SHIFT(282),
  [1472] = {.count = 1, .reusable = true}, REDUCE(sym_chown, 3),
  [1474] = {.count = 1, .reusable = true}, SHIFT(53),
  [1476] = {.count = 1, .reusable = true}, SHIFT(154),
  [1478] = {.count = 1, .reusable = true}, SHIFT(207),
  [1480] = {.count = 1, .reusable = true}, SHIFT(57),
  [1482] = {.count = 1, .reusable = true}, SHIFT(56),
  [1484] = {.count = 1, .reusable = true}, SHIFT(43),
  [1486] = {.count = 1, .reusable = true}, SHIFT(60),
  [1488] = {.count = 1, .reusable = true}, REDUCE(sym_from_layer, 3),
  [1490] = {.count = 1, .reusable = true}, SHIFT(47),
  [1492] = {.count = 1, .reusable = true}, SHIFT(378),
  [1494] = {.count = 1, .reusable = true}, SHIFT(379),
  [1496] = {.count = 1, .reusable = true}, SHIFT(381),
  [1498] = {.count = 1, .reusable = true}, SHIFT(65),
  [1500] = {.count = 1, .reusable = true}, SHIFT(523),
  [1502] = {.count = 1, .reusable = true}, SHIFT(24),
  [1504] = {.count = 1, .reusable = true}, SHIFT(117),
  [1506] = {.count = 1, .reusable = true}, SHIFT(116),
  [1508] = {.count = 1, .reusable = true}, SHIFT(119),
  [1510] = {.count = 1, .reusable = true}, SHIFT(481),
  [1512] = {.count = 1, .reusable = true}, SHIFT(455),
  [1514] = {.count = 1, .reusable = true}, SHIFT(125),
  [1516] = {.count = 1, .reusable = true}, SHIFT(258),
  [1518] = {.count = 1, .reusable = true}, SHIFT(385),
  [1520] = {.count = 1, .reusable = true}, SHIFT(10),
  [1522] = {.count = 1, .reusable = true}, SHIFT(390),
  [1524] = {.count = 1, .reusable = true}, SHIFT(270),
  [1526] = {.count = 1, .reusable = true}, SHIFT(338),
  [1528] = {.count = 1, .reusable = true}, SHIFT(37),
  [1530] = {.count = 1, .reusable = true}, SHIFT(288),
  [1532] = {.count = 1, .reusable = true}, SHIFT(38),
  [1534] = {.count = 1, .reusable = true}, SHIFT(52),
  [1536] = {.count = 1, .reusable = true}, SHIFT(39),
  [1538] = {.count = 1, .reusable = true}, SHIFT(397),
  [1540] = {.count = 1, .reusable = true}, SHIFT(532),
  [1542] = {.count = 1, .reusable = true}, SHIFT(122),
  [1544] = {.count = 1, .reusable = true}, SHIFT(550),
  [1546] = {.count = 1, .reusable = true}, SHIFT(551),
  [1548] = {.count = 1, .reusable = true}, SHIFT(327),
  [1550] = {.count = 1, .reusable = true}, SHIFT(534),
  [1552] = {.count = 1, .reusable = true}, SHIFT(577),
  [1554] = {.count = 1, .reusable = true}, SHIFT(578),
  [1556] = {.count = 1, .reusable = true}, SHIFT(596),
  [1558] = {.count = 1, .reusable = true}, SHIFT(325),
  [1560] = {.count = 1, .reusable = true}, SHIFT(583),
  [1562] = {.count = 1, .reusable = true}, SHIFT(584),
  [1564] = {.count = 1, .reusable = true}, SHIFT(483),
  [1566] = {.count = 1, .reusable = true}, SHIFT(324),
  [1568] = {.count = 1, .reusable = true}, SHIFT(589),
  [1570] = {.count = 1, .reusable = true}, SHIFT(590),
  [1572] = {.count = 1, .reusable = true}, SHIFT(321),
  [1574] = {.count = 1, .reusable = true}, SHIFT(319),
  [1576] = {.count = 1, .reusable = true}, SHIFT(318),
  [1578] = {.count = 1, .reusable = true}, SHIFT(317),
  [1580] = {.count = 1, .reusable = true}, SHIFT(316),
  [1582] = {.count = 1, .reusable = true}, SHIFT(314),
  [1584] = {.count = 1, .reusable = true}, SHIFT(313),
  [1586] = {.count = 1, .reusable = true}, SHIFT(311),
  [1588] = {.count = 1, .reusable = true}, SHIFT(310),
  [1590] = {.count = 1, .reusable = true}, SHIFT(309),
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
