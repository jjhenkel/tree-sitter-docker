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
#define STATE_COUNT 502
#define SYMBOL_COUNT 169
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
  aux_sym_workdir_token2 = 27,
  aux_sym_workdir_token3 = 28,
  aux_sym_workdir_token4 = 29,
  aux_sym_workdir_token5 = 30,
  sym_arg_name = 31,
  anon_sym_DASH = 32,
  aux_sym__port_part_token1 = 33,
  anon_sym_SLASH = 34,
  aux_sym_port_protocol_token1 = 35,
  aux_sym_port_protocol_token2 = 36,
  aux_sym_platform_token1 = 37,
  aux_sym__repository_start_token1 = 38,
  aux_sym__repository_start_token2 = 39,
  aux_sym__repository_start_token3 = 40,
  aux_sym__repository_start_token4 = 41,
  aux_sym__repository_start_token5 = 42,
  aux_sym__repository_start_token6 = 43,
  aux_sym__repository_start_token7 = 44,
  aux_sym__repository_start_token8 = 45,
  aux_sym__repository_start_token9 = 46,
  aux_sym__repository_start_token10 = 47,
  aux_sym__repository_start_token11 = 48,
  aux_sym__repository_start_token12 = 49,
  aux_sym__repository_start_token13 = 50,
  aux_sym__repository_start_token14 = 51,
  aux_sym__repository_start_token15 = 52,
  aux_sym__repository_start_token16 = 53,
  sym_hc_none = 54,
  anon_sym_DASH_DASHinterval = 55,
  aux_sym_hc_interval_token1 = 56,
  anon_sym_DASH_DASHtimeout = 57,
  anon_sym_DASH_DASHstart_DASHperiod = 58,
  anon_sym_DASH_DASHretires = 59,
  sym_label_key = 60,
  aux_sym_label_value_token1 = 61,
  aux_sym_label_value_token2 = 62,
  aux_sym_label_value_token3 = 63,
  sym_signal_num = 64,
  aux_sym_signal_name_token1 = 65,
  aux_sym_signal_name_token2 = 66,
  aux_sym_user_name_token1 = 67,
  sym_path = 68,
  aux_sym__anything_token1 = 69,
  anon_sym_LBRACE = 70,
  anon_sym_RBRACE = 71,
  anon_sym_COLON_DASH = 72,
  aux_sym_variable_default_value_token1 = 73,
  anon_sym_COLON_PLUS = 74,
  sym__docker_variable = 75,
  sym_template_expr_curly_braces = 76,
  sym_template_expr_percent_signs = 77,
  aux_sym_template_expr_less_than_equals_token1 = 78,
  aux_sym_template_expr_less_than_equals_token2 = 79,
  aux_sym_template_expr_less_than_equals_token3 = 80,
  sym__space = 81,
  sym__blank_line = 82,
  sym__space_no_newline = 83,
  sym_comment = 84,
  sym_line_continuation = 85,
  anon_sym_COMMA = 86,
  anon_sym_RBRACK = 87,
  sym__json_prefix = 88,
  aux_sym__json_string_token1 = 89,
  sym__json_escape_sequence = 90,
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
  sym_arg_default = 111,
  sym__port_spec = 112,
  sym_mapped_port = 113,
  sym_mapped_no_lhs = 114,
  sym__port = 115,
  sym_port = 116,
  sym_port_range = 117,
  sym__port_part = 118,
  sym_port_protocol = 119,
  sym_platform = 120,
  sym_repository = 121,
  sym__repository_start = 122,
  sym__repository_continued = 123,
  sym_image = 124,
  sym_tag = 125,
  sym_digest = 126,
  sym_as_name = 127,
  sym__hc_interval = 128,
  sym_hc_interval = 129,
  sym__hc_timeout = 130,
  sym_hc_timeout = 131,
  sym__hc_start_period = 132,
  sym_hc_start_period = 133,
  sym__hc_retries = 134,
  sym_hc_retries = 135,
  sym__hc_options = 136,
  sym__hc_command = 137,
  sym_hc_command = 138,
  aux_sym__labels = 139,
  sym_label_pair = 140,
  sym_label_value = 141,
  sym_signal_name = 142,
  sym_user_name = 143,
  sym_user_group = 144,
  sym_user_id = 145,
  sym_user_group_id = 146,
  aux_sym__paths = 147,
  aux_sym__anything = 148,
  sym_docker_variable = 149,
  sym_variable_default_value = 150,
  sym_variable_this_or_null = 151,
  sym_template_expr_less_than_equals = 152,
  sym_json_array = 153,
  sym__anything_or_json_array = 154,
  sym__json_value = 155,
  aux_sym__json_string = 156,
  aux_sym_dockerfile_repeat1 = 157,
  aux_sym_expose_repeat1 = 158,
  aux_sym_healthcheck_repeat1 = 159,
  aux_sym_workdir_repeat1 = 160,
  aux_sym_repository_repeat1 = 161,
  aux_sym__repository_start_repeat1 = 162,
  aux_sym__repository_start_repeat2 = 163,
  aux_sym__repository_start_repeat3 = 164,
  aux_sym__repository_start_repeat4 = 165,
  aux_sym_label_value_repeat1 = 166,
  aux_sym_template_expr_less_than_equals_repeat1 = 167,
  aux_sym_json_array_repeat1 = 168,
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
  [sym_label_key] = "label_key",
  [aux_sym_label_value_token1] = "label_value_token1",
  [aux_sym_label_value_token2] = "label_value_token2",
  [aux_sym_label_value_token3] = "label_value_token3",
  [sym_signal_num] = "signal_num",
  [aux_sym_signal_name_token1] = "signal_name_token1",
  [aux_sym_signal_name_token2] = "signal_name_token2",
  [aux_sym_user_name_token1] = "user_name_token1",
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
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym__json_prefix] = "_json_prefix",
  [aux_sym__json_string_token1] = "_json_string_token1",
  [sym__json_escape_sequence] = "_json_escape_sequence",
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
  [aux_sym__paths] = "_paths",
  [aux_sym__anything] = "_anything",
  [sym_docker_variable] = "docker_variable",
  [sym_variable_default_value] = "variable_default_value",
  [sym_variable_this_or_null] = "variable_this_or_null",
  [sym_template_expr_less_than_equals] = "template_expr_less_than_equals",
  [sym_json_array] = "json_array",
  [sym__anything_or_json_array] = "_anything_or_json_array",
  [sym__json_value] = "_json_value",
  [aux_sym__json_string] = "_json_string",
  [aux_sym_dockerfile_repeat1] = "dockerfile_repeat1",
  [aux_sym_expose_repeat1] = "expose_repeat1",
  [aux_sym_healthcheck_repeat1] = "healthcheck_repeat1",
  [aux_sym_workdir_repeat1] = "workdir_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym__repository_start_repeat1] = "_repository_start_repeat1",
  [aux_sym__repository_start_repeat2] = "_repository_start_repeat2",
  [aux_sym__repository_start_repeat3] = "_repository_start_repeat3",
  [aux_sym__repository_start_repeat4] = "_repository_start_repeat4",
  [aux_sym_label_value_repeat1] = "label_value_repeat1",
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__json_prefix] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__json_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__json_escape_sequence] = {
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
  [sym_json_array] = {
    .visible = true,
    .named = true,
  },
  [sym__anything_or_json_array] = {
    .visible = false,
    .named = true,
  },
  [sym__json_value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__json_string] = {
    .visible = false,
    .named = false,
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
  [aux_sym_label_value_repeat1] = {
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

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '#') ADVANCE(944);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == ']') ADVANCE(942);
      if (lookahead == '{') ADVANCE(913);
      if (lookahead == '}') ADVANCE(914);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(944);
      if (lookahead != 0) ADVANCE(944);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(122);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(160);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(707);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(729);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(684);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(670);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(671);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(711);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(737);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(691);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(730);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(716);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(718);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(831);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(796);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(818);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(773);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(759);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(760);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(826);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(780);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(819);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(805);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(807);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(757);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(831);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(831);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(796);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(818);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(773);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(759);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(760);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(800);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(826);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(780);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(819);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(805);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(807);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(758);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(831);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(122);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(160);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(931);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(122);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(160);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(931);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(414);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(401);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(343);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(402);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(388);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(414);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(334);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(414);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(401);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(343);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(402);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(388);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(414);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(334);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(414);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(401);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(342);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(343);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(409);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(402);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(388);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(390);
      if (lookahead == '\\') ADVANCE(414);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(335);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(600);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(622);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(577);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(563);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(630);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(584);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(609);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(611);
      if (lookahead == '\\') ADVANCE(562);
      if (lookahead == '{') ADVANCE(637);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(340);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(600);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(622);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(577);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(563);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(630);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(584);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(609);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(611);
      if (lookahead == '\\') ADVANCE(562);
      if (lookahead == '{') ADVANCE(637);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(340);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(600);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(622);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(577);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(563);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(604);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(630);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(584);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(609);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(611);
      if (lookahead == '\\') ADVANCE(562);
      if (lookahead == '{') ADVANCE(637);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(498);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(525);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(548);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(503);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(489);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(490);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(549);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(535);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(537);
      if (lookahead == '\\') ADVANCE(561);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(338);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(498);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(525);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(548);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(503);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(489);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(490);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(549);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(535);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(537);
      if (lookahead == '\\') ADVANCE(561);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(338);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(498);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(525);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(548);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(503);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(489);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(490);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(549);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(535);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(537);
      if (lookahead == '\\') ADVANCE(561);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(339);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == '%') ADVANCE(648);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(452);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(474);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(429);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(415);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(416);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(456);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(482);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(475);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(461);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(463);
      if (lookahead == '\\') ADVANCE(487);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(336);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == '%') ADVANCE(648);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '@') ADVANCE(211);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(452);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(474);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(429);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(415);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(416);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(456);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(482);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(475);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(461);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(463);
      if (lookahead == '\\') ADVANCE(487);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(336);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == '%') ADVANCE(648);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(425);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(452);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(474);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(429);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(415);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(416);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(456);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(482);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(475);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(461);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(463);
      if (lookahead == '\\') ADVANCE(487);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(337);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(270);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(273);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(292);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(247);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(234);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(274);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(300);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(293);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(279);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(934);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(843);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(848);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(841);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(838);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(839);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(845);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(850);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(842);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(849);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(846);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(847);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(832);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(833);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(196);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(62);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(122);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(131);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(160);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(162);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(942);
      if (lookahead == '}') ADVANCE(640);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(944);
      if (lookahead == ',') ADVANCE(941);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == ']') ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(944);
      if (lookahead != 0) ADVANCE(944);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(944);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(944);
      if (lookahead != 0) ADVANCE(944);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\\') ADVANCE(749);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(747);
      if (lookahead != 0) ADVANCE(747);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(932);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(932);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '#') ADVANCE(934);
      if (lookahead == '[') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '#') ADVANCE(934);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0) ADVANCE(837);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '#') ADVANCE(925);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(924);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(925);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '#') ADVANCE(921);
      if (lookahead == '\\') ADVANCE(920);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(921);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '#') ADVANCE(923);
      if (lookahead == '\\') ADVANCE(922);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(923);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(928);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\\') ADVANCE(916);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(917);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '#') ADVANCE(851);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(745);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(945);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(930);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(95);
      END_STATE();
    case 40:
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '#') ADVANCE(744);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0) ADVANCE(745);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(752);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(831);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0) ADVANCE(831);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '%') ADVANCE(650);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '}') ADVANCE(914);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(754);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(938);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(414);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(562);
      if (lookahead == '{') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(561);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == '%') ADVANCE(648);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '%') ADVANCE(648);
      if (lookahead == '-') ADVANCE(313);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == '{') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '%') ADVANCE(648);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead == '{') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(919);
      if (lookahead == '\\') ADVANCE(919);
      if (lookahead == '{') ADVANCE(913);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(919);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(331);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(331);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(851);
      END_STATE();
    case 58:
      if (lookahead == '+') ADVANCE(918);
      if (lookahead == '-') ADVANCE(915);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '>') ADVANCE(657);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(657);
      if (lookahead != 0) ADVANCE(927);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(657);
      if (lookahead != 0) ADVANCE(926);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(667);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(664);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(666);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 95:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead == '"') ADVANCE(943);
      if (lookahead == '\\') ADVANCE(39);
      END_STATE();
    case 96:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead == '"') ADVANCE(943);
      if (lookahead == '\\') ADVANCE(835);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(851);
      END_STATE();
    case 97:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead == '"') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(835);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(191);
      END_STATE();
    case 98:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(656);
      END_STATE();
    case 99:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(661);
      END_STATE();
    case 100:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(659);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 106:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(187);
      END_STATE();
    case 107:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(169);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 127:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(198);
      END_STATE();
    case 128:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(753);
      END_STATE();
    case 129:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 130:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 131:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(123);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 132:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 136:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 137:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(214);
      END_STATE();
    case 141:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 149:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 150:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(114);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 151:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(184);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(171);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 160:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 161:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 162:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 163:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 164:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 165:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 166:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 167:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 168:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(312);
      END_STATE();
    case 169:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 170:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(180);
      END_STATE();
    case 171:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 172:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 173:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 174:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 178:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 179:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 180:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 181:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 182:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 183:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 184:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(203);
      END_STATE();
    case 185:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 186:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 187:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 188:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 189:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 190:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(172);
      END_STATE();
    case 191:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(851);
      END_STATE();
    case 192:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 193:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(851);
      END_STATE();
    case 194:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(745);
      END_STATE();
    case 195:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(851);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_add_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_arg_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_copy_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_env_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(743);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_healthcheck_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_label_token1);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_onbuild_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_user_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '$') ADVANCE(231);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(248);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(242);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(298);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_arg_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__port_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '-') ADVANCE(327);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '2') ADVANCE(315);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '5') ADVANCE(316);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '6') ADVANCE(317);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == ':') ADVANCE(212);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(936);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(208);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(329);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'f') ADVANCE(326);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'h') ADVANCE(321);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(319);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(332);
      if (lookahead == '%') ADVANCE(652);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '{') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(330);
      END_STATE();
    case 331:
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
          lookahead != '}') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(334);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(335);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(336);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(337);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(338);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(339);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(340);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(341);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(351);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
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
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
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
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(357);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(351);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
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
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
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
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
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
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
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
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(424);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
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
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(430);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
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
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(424);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(480);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
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
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
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
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
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
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(499);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
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
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(504);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
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
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(499);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(554);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(587);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(596);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(594);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(631);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(580);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(592);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(585);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(562);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(572);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(588);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(598);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(619);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(594);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(562);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(608);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(571);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(578);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(612);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(576);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(582);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(605);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(619);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(607);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(562);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(574);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(562);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(627);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(632);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(594);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(562);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(572);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(615);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(575);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(562);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(628);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(617);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(568);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(629);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(579);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(626);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(566);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(597);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(599);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(620);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(616);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(625);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(591);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(633);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(624);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(613);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(614);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(562);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(593);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(634);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(610);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(579);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(586);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(562);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(583);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(621);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(562);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(602);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(590);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(601);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(562);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(618);
      if (lookahead == '{') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(562);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(635);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(636);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(638);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(639);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(641);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(642);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(644);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(645);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(647);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(649);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(651);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(653);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(655);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(658);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(660);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_hc_none);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_DASH_DASHinterval);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_hc_interval_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(665);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtimeout);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_DASH_DASHstart_DASHperiod);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_DASH_DASHretires);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_label_key);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(694);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(703);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(701);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(696);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(738);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(687);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(699);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(692);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(679);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(688);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(695);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(701);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(715);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(678);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(685);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(719);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(712);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(726);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(713);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(714);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(681);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(679);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(734);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(739);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(701);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(679);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(722);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(682);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(735);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(724);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(675);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(736);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(686);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(733);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(673);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(704);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(706);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(727);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(723);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(732);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(698);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(740);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(731);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(720);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(721);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(700);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(741);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(717);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(686);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(693);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(682);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(690);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(728);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(674);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(709);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(697);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(708);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(742);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(725);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_label_key);
      if (lookahead == '"') ADVANCE(669);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(742);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_label_value_token1);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(744);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_label_value_token2);
      if (lookahead == '\\') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(745);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(747);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(747);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(747);
      if (lookahead == '\\') ADVANCE(748);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_label_value_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(747);
      if (lookahead == '\\') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(746);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(750);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(751);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(754);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(755);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_path);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(757);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(758);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(768);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(774);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(768);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(824);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(817);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(831);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(834);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(833);
      if (lookahead != 0) ADVANCE(852);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(834);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(833);
      if (lookahead != 0) ADVANCE(852);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(930);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(834);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(833);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0) ADVANCE(852);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(934);
      if (lookahead == '\\') ADVANCE(939);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(853);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(858);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(873);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(861);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(868);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(854);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(865);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(894);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(861);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(896);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(912);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(898);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(857);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(883);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(901);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(892);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(852);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(887);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(852);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\') ADVANCE(853);
      if (lookahead == '\\') ADVANCE(939);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(836);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(852);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(882);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(852);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'A' &&
          lookahead != '\\' &&
          lookahead != 'a') ADVANCE(852);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(874);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(852);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(908);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'B' &&
          lookahead != '\\' &&
          lookahead != 'b') ADVANCE(852);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(867);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(852);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(878);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'C' &&
          lookahead != '\\' &&
          lookahead != 'c') ADVANCE(852);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(871);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(852);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'D' &&
          lookahead != '\\' &&
          lookahead != 'd') ADVANCE(852);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(875);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(852);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(852);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(852);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(884);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(852);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'E' &&
          lookahead != '\\' &&
          lookahead != 'e') ADVANCE(852);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(852);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'G' &&
          lookahead != '\\' &&
          lookahead != 'g') ADVANCE(852);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(891);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(852);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(860);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'H' &&
          lookahead != '\\' &&
          lookahead != 'h') ADVANCE(852);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(864);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(852);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(869);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(852);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(889);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(852);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(852);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(852);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(881);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'I' &&
          lookahead != '\\' &&
          lookahead != 'i') ADVANCE(852);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(890);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(852);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'K' &&
          lookahead != '\\' &&
          lookahead != 'k') ADVANCE(852);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(862);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(852);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(852);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(861);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(852);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(906);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(852);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(909);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'L' &&
          lookahead != '\\' &&
          lookahead != 'l') ADVANCE(852);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(880);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(852);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'M' &&
          lookahead != '\\' &&
          lookahead != 'm') ADVANCE(852);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(863);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(852);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(852);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(866);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(852);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(907);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(852);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(905);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'N' &&
          lookahead != '\\' &&
          lookahead != 'n') ADVANCE(852);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(855);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(852);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(885);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(852);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(904);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(852);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(897);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'O' &&
          lookahead != '\\' &&
          lookahead != 'o') ADVANCE(852);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(877);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(852);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(910);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(852);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(903);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(852);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(893);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'P' &&
          lookahead != '\\' &&
          lookahead != 'p') ADVANCE(852);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(895);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(852);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(852);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(879);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'R' &&
          lookahead != '\\' &&
          lookahead != 'r') ADVANCE(852);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(911);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(852);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(872);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'S' &&
          lookahead != '\\' &&
          lookahead != 's') ADVANCE(852);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(863);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(852);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(852);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(870);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'T' &&
          lookahead != '\\' &&
          lookahead != 't') ADVANCE(852);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(856);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(852);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(876);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u') ADVANCE(852);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(886);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(852);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != 'Y' &&
          lookahead != '\\' &&
          lookahead != 'y') ADVANCE(852);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 912:
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
          lookahead != 'v') ADVANCE(852);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(902);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(852);
      if (lookahead == '\\') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(851);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(917);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(917);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 919:
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
          lookahead != '}') ADVANCE(919);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(920);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(921);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(923);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(923);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(925);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(925);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(930);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__blank_line);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\n') ADVANCE(930);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(931);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(932);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(933);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(933);
      if (lookahead == '#') ADVANCE(836);
      if (lookahead != 0) ADVANCE(938);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(933);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(661);
      if (lookahead != 0) ADVANCE(938);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(933);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(659);
      if (lookahead != 0) ADVANCE(938);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(933);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(938);
      if (lookahead != 0) ADVANCE(744);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(933);
      if (lookahead != 0) ADVANCE(938);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(933);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(836);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(938);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(940);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym__json_prefix);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym__json_string_token1);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym__json_escape_sequence);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 15},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 18},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 15},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 20},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 20},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
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
  [198] = {.lex_state = 53},
  [199] = {.lex_state = 21},
  [200] = {.lex_state = 21},
  [201] = {.lex_state = 21},
  [202] = {.lex_state = 53},
  [203] = {.lex_state = 53},
  [204] = {.lex_state = 53},
  [205] = {.lex_state = 53},
  [206] = {.lex_state = 54},
  [207] = {.lex_state = 54},
  [208] = {.lex_state = 54},
  [209] = {.lex_state = 54},
  [210] = {.lex_state = 54},
  [211] = {.lex_state = 54},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 53},
  [214] = {.lex_state = 53},
  [215] = {.lex_state = 53},
  [216] = {.lex_state = 53},
  [217] = {.lex_state = 53},
  [218] = {.lex_state = 53},
  [219] = {.lex_state = 53},
  [220] = {.lex_state = 53},
  [221] = {.lex_state = 53},
  [222] = {.lex_state = 53},
  [223] = {.lex_state = 53},
  [224] = {.lex_state = 53},
  [225] = {.lex_state = 53},
  [226] = {.lex_state = 53},
  [227] = {.lex_state = 53},
  [228] = {.lex_state = 53},
  [229] = {.lex_state = 53},
  [230] = {.lex_state = 53},
  [231] = {.lex_state = 53},
  [232] = {.lex_state = 53},
  [233] = {.lex_state = 53},
  [234] = {.lex_state = 53},
  [235] = {.lex_state = 53},
  [236] = {.lex_state = 53},
  [237] = {.lex_state = 21},
  [238] = {.lex_state = 53},
  [239] = {.lex_state = 53},
  [240] = {.lex_state = 53},
  [241] = {.lex_state = 53},
  [242] = {.lex_state = 53},
  [243] = {.lex_state = 53},
  [244] = {.lex_state = 53},
  [245] = {.lex_state = 53},
  [246] = {.lex_state = 53},
  [247] = {.lex_state = 53},
  [248] = {.lex_state = 53},
  [249] = {.lex_state = 53},
  [250] = {.lex_state = 21},
  [251] = {.lex_state = 22},
  [252] = {.lex_state = 21},
  [253] = {.lex_state = 21},
  [254] = {.lex_state = 27},
  [255] = {.lex_state = 50},
  [256] = {.lex_state = 45},
  [257] = {.lex_state = 27},
  [258] = {.lex_state = 45},
  [259] = {.lex_state = 28},
  [260] = {.lex_state = 45},
  [261] = {.lex_state = 51},
  [262] = {.lex_state = 52},
  [263] = {.lex_state = 49},
  [264] = {.lex_state = 50},
  [265] = {.lex_state = 52},
  [266] = {.lex_state = 51},
  [267] = {.lex_state = 28},
  [268] = {.lex_state = 28},
  [269] = {.lex_state = 49},
  [270] = {.lex_state = 28},
  [271] = {.lex_state = 28},
  [272] = {.lex_state = 21},
  [273] = {.lex_state = 45},
  [274] = {.lex_state = 27},
  [275] = {.lex_state = 49},
  [276] = {.lex_state = 28},
  [277] = {.lex_state = 45},
  [278] = {.lex_state = 28},
  [279] = {.lex_state = 45},
  [280] = {.lex_state = 45},
  [281] = {.lex_state = 28},
  [282] = {.lex_state = 27},
  [283] = {.lex_state = 41},
  [284] = {.lex_state = 28},
  [285] = {.lex_state = 45},
  [286] = {.lex_state = 28},
  [287] = {.lex_state = 45},
  [288] = {.lex_state = 41},
  [289] = {.lex_state = 21},
  [290] = {.lex_state = 28},
  [291] = {.lex_state = 21},
  [292] = {.lex_state = 21},
  [293] = {.lex_state = 21},
  [294] = {.lex_state = 21},
  [295] = {.lex_state = 21},
  [296] = {.lex_state = 21},
  [297] = {.lex_state = 21},
  [298] = {.lex_state = 21},
  [299] = {.lex_state = 51},
  [300] = {.lex_state = 52},
  [301] = {.lex_state = 50},
  [302] = {.lex_state = 28},
  [303] = {.lex_state = 49},
  [304] = {.lex_state = 51},
  [305] = {.lex_state = 52},
  [306] = {.lex_state = 43},
  [307] = {.lex_state = 40},
  [308] = {.lex_state = 23},
  [309] = {.lex_state = 23},
  [310] = {.lex_state = 23},
  [311] = {.lex_state = 23},
  [312] = {.lex_state = 50},
  [313] = {.lex_state = 49},
  [314] = {.lex_state = 43},
  [315] = {.lex_state = 41},
  [316] = {.lex_state = 41},
  [317] = {.lex_state = 43},
  [318] = {.lex_state = 49},
  [319] = {.lex_state = 41},
  [320] = {.lex_state = 49},
  [321] = {.lex_state = 21},
  [322] = {.lex_state = 55},
  [323] = {.lex_state = 55},
  [324] = {.lex_state = 55},
  [325] = {.lex_state = 21},
  [326] = {.lex_state = 41},
  [327] = {.lex_state = 41},
  [328] = {.lex_state = 41},
  [329] = {.lex_state = 55},
  [330] = {.lex_state = 41},
  [331] = {.lex_state = 24},
  [332] = {.lex_state = 42},
  [333] = {.lex_state = 41},
  [334] = {.lex_state = 55},
  [335] = {.lex_state = 21},
  [336] = {.lex_state = 29},
  [337] = {.lex_state = 55},
  [338] = {.lex_state = 55},
  [339] = {.lex_state = 55},
  [340] = {.lex_state = 21},
  [341] = {.lex_state = 55},
  [342] = {.lex_state = 55},
  [343] = {.lex_state = 21},
  [344] = {.lex_state = 21},
  [345] = {.lex_state = 21},
  [346] = {.lex_state = 24},
  [347] = {.lex_state = 55},
  [348] = {.lex_state = 56},
  [349] = {.lex_state = 41},
  [350] = {.lex_state = 55},
  [351] = {.lex_state = 21},
  [352] = {.lex_state = 55},
  [353] = {.lex_state = 55},
  [354] = {.lex_state = 21},
  [355] = {.lex_state = 55},
  [356] = {.lex_state = 55},
  [357] = {.lex_state = 55},
  [358] = {.lex_state = 21},
  [359] = {.lex_state = 55},
  [360] = {.lex_state = 21},
  [361] = {.lex_state = 21},
  [362] = {.lex_state = 48},
  [363] = {.lex_state = 21},
  [364] = {.lex_state = 24},
  [365] = {.lex_state = 21},
  [366] = {.lex_state = 21},
  [367] = {.lex_state = 45},
  [368] = {.lex_state = 30},
  [369] = {.lex_state = 21},
  [370] = {.lex_state = 21},
  [371] = {.lex_state = 21},
  [372] = {.lex_state = 48},
  [373] = {.lex_state = 48},
  [374] = {.lex_state = 26},
  [375] = {.lex_state = 21},
  [376] = {.lex_state = 21},
  [377] = {.lex_state = 21},
  [378] = {.lex_state = 26},
  [379] = {.lex_state = 21},
  [380] = {.lex_state = 25},
  [381] = {.lex_state = 21},
  [382] = {.lex_state = 21},
  [383] = {.lex_state = 25},
  [384] = {.lex_state = 21},
  [385] = {.lex_state = 25},
  [386] = {.lex_state = 21},
  [387] = {.lex_state = 25},
  [388] = {.lex_state = 21},
  [389] = {.lex_state = 21},
  [390] = {.lex_state = 25},
  [391] = {.lex_state = 45},
  [392] = {.lex_state = 21},
  [393] = {.lex_state = 31},
  [394] = {.lex_state = 32},
  [395] = {.lex_state = 21},
  [396] = {.lex_state = 25},
  [397] = {.lex_state = 21},
  [398] = {.lex_state = 21},
  [399] = {.lex_state = 25},
  [400] = {.lex_state = 21},
  [401] = {.lex_state = 25},
  [402] = {.lex_state = 21},
  [403] = {.lex_state = 32},
  [404] = {.lex_state = 31},
  [405] = {.lex_state = 21},
  [406] = {.lex_state = 47},
  [407] = {.lex_state = 21},
  [408] = {.lex_state = 21},
  [409] = {.lex_state = 21},
  [410] = {.lex_state = 45},
  [411] = {.lex_state = 21},
  [412] = {.lex_state = 25},
  [413] = {.lex_state = 21},
  [414] = {.lex_state = 21},
  [415] = {.lex_state = 45},
  [416] = {.lex_state = 45},
  [417] = {.lex_state = 55},
  [418] = {.lex_state = 46},
  [419] = {.lex_state = 21},
  [420] = {.lex_state = 45},
  [421] = {.lex_state = 21},
  [422] = {.lex_state = 25},
  [423] = {.lex_state = 25},
  [424] = {.lex_state = 21},
  [425] = {.lex_state = 21},
  [426] = {.lex_state = 25},
  [427] = {.lex_state = 45},
  [428] = {.lex_state = 21},
  [429] = {.lex_state = 21},
  [430] = {.lex_state = 25},
  [431] = {.lex_state = 21},
  [432] = {.lex_state = 45},
  [433] = {.lex_state = 21},
  [434] = {.lex_state = 32},
  [435] = {.lex_state = 25},
  [436] = {.lex_state = 25},
  [437] = {.lex_state = 31},
  [438] = {.lex_state = 25},
  [439] = {.lex_state = 25},
  [440] = {.lex_state = 25},
  [441] = {.lex_state = 25},
  [442] = {.lex_state = 25},
  [443] = {.lex_state = 25},
  [444] = {.lex_state = 31},
  [445] = {.lex_state = 32},
  [446] = {.lex_state = 21},
  [447] = {.lex_state = 25},
  [448] = {.lex_state = 25},
  [449] = {.lex_state = 25},
  [450] = {.lex_state = 21},
  [451] = {.lex_state = 31},
  [452] = {.lex_state = 45},
  [453] = {.lex_state = 25},
  [454] = {.lex_state = 25},
  [455] = {.lex_state = 25},
  [456] = {.lex_state = 33},
  [457] = {.lex_state = 33},
  [458] = {.lex_state = 21},
  [459] = {.lex_state = 32},
  [460] = {.lex_state = 25},
  [461] = {.lex_state = 45},
  [462] = {.lex_state = 21},
  [463] = {.lex_state = 45},
  [464] = {.lex_state = 21},
  [465] = {.lex_state = 32},
  [466] = {.lex_state = 31},
  [467] = {.lex_state = 45},
  [468] = {.lex_state = 21},
  [469] = {.lex_state = 45},
  [470] = {.lex_state = 21},
  [471] = {.lex_state = 21},
  [472] = {.lex_state = 32},
  [473] = {.lex_state = 45},
  [474] = {.lex_state = 21},
  [475] = {.lex_state = 45},
  [476] = {.lex_state = 21},
  [477] = {.lex_state = 31},
  [478] = {.lex_state = 45},
  [479] = {.lex_state = 21},
  [480] = {.lex_state = 45},
  [481] = {.lex_state = 45},
  [482] = {.lex_state = 45},
  [483] = {.lex_state = 21},
  [484] = {.lex_state = 45},
  [485] = {.lex_state = 21},
  [486] = {.lex_state = 55},
  [487] = {.lex_state = 31},
  [488] = {.lex_state = 32},
  [489] = {.lex_state = 21},
  [490] = {.lex_state = 55},
  [491] = {.lex_state = 31},
  [492] = {.lex_state = 32},
  [493] = {.lex_state = 45},
  [494] = {.lex_state = 55},
  [495] = {.lex_state = 31},
  [496] = {.lex_state = 32},
  [497] = {.lex_state = 21},
  [498] = {.lex_state = 55},
  [499] = {.lex_state = 55},
  [500] = {.lex_state = 55},
  [501] = {.lex_state = 55},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_label_value_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__json_string_token1] = ACTIONS(1),
    [sym__json_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_dockerfile] = STATE(421),
    [sym__directive] = STATE(158),
    [sym_add] = STATE(158),
    [sym_arg] = STATE(158),
    [sym_cmd] = STATE(158),
    [sym_copy] = STATE(158),
    [sym_entrypoint] = STATE(158),
    [sym_env] = STATE(158),
    [sym_expose] = STATE(158),
    [sym_from] = STATE(158),
    [sym_healthcheck] = STATE(158),
    [sym_label] = STATE(158),
    [sym_maintainer] = STATE(158),
    [sym_onbuild] = STATE(158),
    [sym_run] = STATE(158),
    [sym_shell] = STATE(158),
    [sym_stopsignal] = STATE(158),
    [sym_user] = STATE(158),
    [sym_volume] = STATE(158),
    [sym_workdir] = STATE(158),
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
    [sym__directive] = STATE(158),
    [sym_add] = STATE(158),
    [sym_arg] = STATE(158),
    [sym_cmd] = STATE(158),
    [sym_copy] = STATE(158),
    [sym_entrypoint] = STATE(158),
    [sym_env] = STATE(158),
    [sym_expose] = STATE(158),
    [sym_from] = STATE(158),
    [sym_healthcheck] = STATE(158),
    [sym_label] = STATE(158),
    [sym_maintainer] = STATE(158),
    [sym_onbuild] = STATE(158),
    [sym_run] = STATE(158),
    [sym_shell] = STATE(158),
    [sym_stopsignal] = STATE(158),
    [sym_user] = STATE(158),
    [sym_volume] = STATE(158),
    [sym_workdir] = STATE(158),
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
    [sym__directive] = STATE(158),
    [sym_add] = STATE(158),
    [sym_arg] = STATE(158),
    [sym_cmd] = STATE(158),
    [sym_copy] = STATE(158),
    [sym_entrypoint] = STATE(158),
    [sym_env] = STATE(158),
    [sym_expose] = STATE(158),
    [sym_from] = STATE(158),
    [sym_healthcheck] = STATE(158),
    [sym_label] = STATE(158),
    [sym_maintainer] = STATE(158),
    [sym_onbuild] = STATE(158),
    [sym_run] = STATE(158),
    [sym_shell] = STATE(158),
    [sym_stopsignal] = STATE(158),
    [sym_user] = STATE(158),
    [sym_volume] = STATE(158),
    [sym_workdir] = STATE(158),
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
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym__port] = STATE(76),
    [sym_port] = STATE(76),
    [sym_port_range] = STATE(76),
    [sym__port_part] = STATE(59),
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
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym_volume_token1] = ACTIONS(108),
    [aux_sym_workdir_token1] = ACTIONS(108),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(108),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [5] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym__port] = STATE(76),
    [sym_port] = STATE(76),
    [sym_port_range] = STATE(76),
    [sym__port_part] = STATE(59),
    [aux_sym_expose_repeat1] = STATE(5),
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
  [6] = {
    [sym_add] = STATE(156),
    [sym_arg] = STATE(156),
    [sym_cmd] = STATE(156),
    [sym_copy] = STATE(156),
    [sym_entrypoint] = STATE(156),
    [sym_env] = STATE(156),
    [sym_expose] = STATE(156),
    [sym_healthcheck] = STATE(156),
    [sym_label] = STATE(156),
    [sym_run] = STATE(156),
    [sym_shell] = STATE(156),
    [sym_stopsignal] = STATE(156),
    [sym_user] = STATE(156),
    [sym_volume] = STATE(156),
    [sym_workdir] = STATE(156),
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
    [aux_sym__repository_start_repeat2] = STATE(8),
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
    [aux_sym__repository_start_token4] = ACTIONS(141),
    [aux_sym__repository_start_token7] = ACTIONS(141),
    [aux_sym__repository_start_token16] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [9] = {
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
    [aux_sym__repository_start_token12] = ACTIONS(152),
    [aux_sym__repository_start_token15] = ACTIONS(152),
    [aux_sym__repository_start_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [10] = {
    [aux_sym__repository_start_repeat3] = STATE(14),
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
    [aux_sym__repository_start_token8] = ACTIONS(154),
    [aux_sym__repository_start_token11] = ACTIONS(154),
    [aux_sym__repository_start_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [11] = {
    [aux_sym__repository_start_repeat1] = STATE(12),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(146),
    [aux_sym_workdir_token1] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(148),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(150),
    [aux_sym__repository_start_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [12] = {
    [aux_sym__repository_start_repeat1] = STATE(12),
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
    [anon_sym_SLASH] = ACTIONS(156),
    [aux_sym__repository_start_token2] = ACTIONS(160),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [aux_sym__repository_start_token16] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym__space_no_newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [13] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
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
    [anon_sym_SLASH] = ACTIONS(167),
    [aux_sym__repository_start_token3] = ACTIONS(169),
    [aux_sym__repository_start_token4] = ACTIONS(171),
    [aux_sym__repository_start_token7] = ACTIONS(171),
    [aux_sym__repository_start_token16] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [14] = {
    [aux_sym__repository_start_repeat3] = STATE(16),
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
    [anon_sym_SLASH] = ACTIONS(167),
    [aux_sym__repository_start_token3] = ACTIONS(169),
    [aux_sym__repository_start_token8] = ACTIONS(154),
    [aux_sym__repository_start_token11] = ACTIONS(154),
    [aux_sym__repository_start_token16] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [15] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
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
    [aux_sym__repository_start_token4] = ACTIONS(171),
    [aux_sym__repository_start_token7] = ACTIONS(171),
    [aux_sym__repository_start_token16] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [16] = {
    [aux_sym__repository_start_repeat3] = STATE(16),
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
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(173),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [aux_sym__repository_start_token8] = ACTIONS(177),
    [aux_sym__repository_start_token11] = ACTIONS(177),
    [aux_sym__repository_start_token16] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [17] = {
    [aux_sym__repository_start_repeat4] = STATE(17),
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
    [aux_sym__repository_start_token12] = ACTIONS(184),
    [aux_sym__repository_start_token15] = ACTIONS(184),
    [aux_sym__repository_start_token16] = ACTIONS(180),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [18] = {
    [aux_sym__repository_start_repeat4] = STATE(17),
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
    [anon_sym_SLASH] = ACTIONS(167),
    [aux_sym__repository_start_token3] = ACTIONS(169),
    [aux_sym__repository_start_token12] = ACTIONS(152),
    [aux_sym__repository_start_token15] = ACTIONS(152),
    [aux_sym__repository_start_token16] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
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
  [23] = {
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
    [anon_sym_SLASH] = ACTIONS(156),
    [aux_sym__repository_start_token2] = ACTIONS(156),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [aux_sym__repository_start_token16] = ACTIONS(156),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym__space_no_newline] = ACTIONS(158),
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
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [aux_sym__repository_start_token8] = ACTIONS(211),
    [aux_sym__repository_start_token11] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym__space_no_newline] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [27] = {
    [aux_sym__repository_start_repeat1] = STATE(27),
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
    [anon_sym_DOLLAR] = ACTIONS(214),
    [aux_sym_volume_token1] = ACTIONS(158),
    [aux_sym_workdir_token1] = ACTIONS(158),
    [aux_sym__repository_start_token2] = ACTIONS(214),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym__space_no_newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [28] = {
    [aux_sym__repository_start_repeat3] = STATE(26),
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
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [aux_sym__repository_start_token8] = ACTIONS(219),
    [aux_sym__repository_start_token11] = ACTIONS(219),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [29] = {
    [aux_sym__repository_start_repeat2] = STATE(29),
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
    [aux_sym__repository_start_token4] = ACTIONS(221),
    [aux_sym__repository_start_token7] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym__space_no_newline] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [30] = {
    [sym_port_protocol] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(224),
    [aux_sym_add_token1] = ACTIONS(224),
    [aux_sym_arg_token1] = ACTIONS(224),
    [aux_sym_cmd_token1] = ACTIONS(224),
    [aux_sym_copy_token1] = ACTIONS(224),
    [aux_sym_entrypoint_token1] = ACTIONS(224),
    [aux_sym_env_token1] = ACTIONS(224),
    [aux_sym_expose_token1] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [aux_sym_from_token1] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(224),
    [aux_sym_healthcheck_token1] = ACTIONS(224),
    [aux_sym_label_token1] = ACTIONS(224),
    [aux_sym_maintainer_token1] = ACTIONS(224),
    [aux_sym_onbuild_token1] = ACTIONS(224),
    [aux_sym_run_token1] = ACTIONS(224),
    [aux_sym_shell_token1] = ACTIONS(224),
    [aux_sym_stopsignal_token1] = ACTIONS(224),
    [aux_sym_user_token1] = ACTIONS(224),
    [anon_sym_DOLLAR] = ACTIONS(224),
    [aux_sym_volume_token1] = ACTIONS(224),
    [aux_sym_workdir_token1] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [aux_sym__port_part_token1] = ACTIONS(224),
    [anon_sym_SLASH] = ACTIONS(226),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(224),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [31] = {
    [aux_sym__repository_start_repeat1] = STATE(32),
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
    [anon_sym_DOLLAR] = ACTIONS(228),
    [aux_sym_volume_token1] = ACTIONS(129),
    [aux_sym_workdir_token1] = ACTIONS(129),
    [aux_sym__repository_start_token2] = ACTIONS(228),
    [aux_sym__repository_start_token3] = ACTIONS(230),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(127),
    [sym__space_no_newline] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [32] = {
    [aux_sym__repository_start_repeat1] = STATE(27),
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
    [anon_sym_DOLLAR] = ACTIONS(228),
    [aux_sym_volume_token1] = ACTIONS(146),
    [aux_sym_workdir_token1] = ACTIONS(146),
    [aux_sym__repository_start_token2] = ACTIONS(228),
    [aux_sym__repository_start_token3] = ACTIONS(232),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [33] = {
    [aux_sym__repository_start_repeat2] = STATE(34),
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
    [aux_sym__repository_start_token3] = ACTIONS(232),
    [aux_sym__repository_start_token4] = ACTIONS(234),
    [aux_sym__repository_start_token7] = ACTIONS(234),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [34] = {
    [aux_sym__repository_start_repeat2] = STATE(29),
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
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [aux_sym__repository_start_token4] = ACTIONS(234),
    [aux_sym__repository_start_token7] = ACTIONS(234),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [35] = {
    [aux_sym__repository_start_repeat4] = STATE(35),
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
    [aux_sym__repository_start_token12] = ACTIONS(236),
    [aux_sym__repository_start_token15] = ACTIONS(236),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym__space_no_newline] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [36] = {
    [aux_sym__repository_start_repeat3] = STATE(28),
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
    [aux_sym__repository_start_token3] = ACTIONS(232),
    [aux_sym__repository_start_token8] = ACTIONS(219),
    [aux_sym__repository_start_token11] = ACTIONS(219),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [37] = {
    [sym_port_protocol] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_add_token1] = ACTIONS(239),
    [aux_sym_arg_token1] = ACTIONS(239),
    [aux_sym_cmd_token1] = ACTIONS(239),
    [aux_sym_copy_token1] = ACTIONS(239),
    [aux_sym_entrypoint_token1] = ACTIONS(239),
    [aux_sym_env_token1] = ACTIONS(239),
    [aux_sym_expose_token1] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [aux_sym_from_token1] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(239),
    [aux_sym_healthcheck_token1] = ACTIONS(239),
    [aux_sym_label_token1] = ACTIONS(239),
    [aux_sym_maintainer_token1] = ACTIONS(239),
    [aux_sym_onbuild_token1] = ACTIONS(239),
    [aux_sym_run_token1] = ACTIONS(239),
    [aux_sym_shell_token1] = ACTIONS(239),
    [aux_sym_stopsignal_token1] = ACTIONS(239),
    [aux_sym_user_token1] = ACTIONS(239),
    [anon_sym_DOLLAR] = ACTIONS(239),
    [aux_sym_volume_token1] = ACTIONS(239),
    [aux_sym_workdir_token1] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [aux_sym__port_part_token1] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(226),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(239),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [38] = {
    [aux_sym__repository_start_repeat4] = STATE(39),
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
    [aux_sym__repository_start_token3] = ACTIONS(232),
    [aux_sym__repository_start_token12] = ACTIONS(241),
    [aux_sym__repository_start_token15] = ACTIONS(241),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(144),
    [sym__space_no_newline] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [aux_sym__repository_start_repeat4] = STATE(35),
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
    [aux_sym__repository_start_token3] = ACTIONS(217),
    [aux_sym__repository_start_token12] = ACTIONS(241),
    [aux_sym__repository_start_token15] = ACTIONS(241),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [40] = {
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
  [41] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
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
    [aux_sym__repository_start_token4] = ACTIONS(171),
    [aux_sym__repository_start_token7] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [42] = {
    [aux_sym__repository_start_repeat1] = STATE(54),
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
  [43] = {
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
  [44] = {
    [aux_sym__repository_start_repeat4] = STATE(53),
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
    [aux_sym__repository_start_token12] = ACTIONS(152),
    [aux_sym__repository_start_token15] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [45] = {
    [aux_sym__repository_start_repeat3] = STATE(52),
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
    [aux_sym__repository_start_token8] = ACTIONS(154),
    [aux_sym__repository_start_token11] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [46] = {
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
    [aux_sym__repository_start_repeat2] = STATE(41),
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
    [aux_sym__repository_start_token4] = ACTIONS(171),
    [aux_sym__repository_start_token7] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [49] = {
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
  [50] = {
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
    [aux_sym__repository_start_token2] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym__space_no_newline] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [52] = {
    [aux_sym__repository_start_repeat3] = STATE(16),
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
    [aux_sym__repository_start_token8] = ACTIONS(154),
    [aux_sym__repository_start_token11] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [53] = {
    [aux_sym__repository_start_repeat4] = STATE(17),
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
    [aux_sym__repository_start_token12] = ACTIONS(152),
    [aux_sym__repository_start_token15] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(243),
    [sym__space_no_newline] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [54] = {
    [aux_sym__repository_start_repeat1] = STATE(12),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(257),
    [aux_sym_workdir_token1] = ACTIONS(257),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(255),
    [sym__space_no_newline] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [55] = {
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
  [56] = {
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
    [aux_sym__repository_start_token2] = ACTIONS(156),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym__space_no_newline] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [57] = {
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
  [58] = {
    [aux_sym__repository_start_repeat2] = STATE(8),
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
    [aux_sym__repository_start_token4] = ACTIONS(171),
    [aux_sym__repository_start_token7] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [59] = {
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
    [anon_sym_COLON] = ACTIONS(267),
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
    [anon_sym_DASH] = ACTIONS(269),
    [aux_sym__port_part_token1] = ACTIONS(267),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(267),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [60] = {
    [aux_sym__repository_start_repeat3] = STATE(16),
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
    [aux_sym__repository_start_token8] = ACTIONS(154),
    [aux_sym__repository_start_token11] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [61] = {
    [aux_sym__repository_start_repeat4] = STATE(17),
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
    [aux_sym__repository_start_token12] = ACTIONS(152),
    [aux_sym__repository_start_token15] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(261),
    [sym__space_no_newline] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [62] = {
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
    [anon_sym_COLON] = ACTIONS(271),
    [aux_sym_healthcheck_token1] = ACTIONS(271),
    [aux_sym_label_token1] = ACTIONS(271),
    [aux_sym_maintainer_token1] = ACTIONS(271),
    [aux_sym_onbuild_token1] = ACTIONS(271),
    [aux_sym_run_token1] = ACTIONS(271),
    [aux_sym_shell_token1] = ACTIONS(271),
    [aux_sym_stopsignal_token1] = ACTIONS(271),
    [aux_sym_user_token1] = ACTIONS(271),
    [anon_sym_DOLLAR] = ACTIONS(271),
    [aux_sym_volume_token1] = ACTIONS(271),
    [aux_sym_workdir_token1] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(271),
    [aux_sym__port_part_token1] = ACTIONS(271),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [63] = {
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
  [64] = {
    [aux_sym__repository_start_repeat4] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(273),
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
    [aux_sym__repository_start_token3] = ACTIONS(277),
    [aux_sym__repository_start_token12] = ACTIONS(152),
    [aux_sym__repository_start_token15] = ACTIONS(152),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym__space_no_newline] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(279),
    [aux_sym_arg_token1] = ACTIONS(279),
    [aux_sym_cmd_token1] = ACTIONS(279),
    [aux_sym_copy_token1] = ACTIONS(279),
    [aux_sym_entrypoint_token1] = ACTIONS(279),
    [aux_sym_env_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [aux_sym_from_token1] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(279),
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
    [anon_sym_SLASH] = ACTIONS(283),
    [aux_sym__repository_start_token16] = ACTIONS(283),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(279),
    [sym__space_no_newline] = ACTIONS(281),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym_add_token1] = ACTIONS(285),
    [aux_sym_arg_token1] = ACTIONS(285),
    [aux_sym_cmd_token1] = ACTIONS(285),
    [aux_sym_copy_token1] = ACTIONS(285),
    [aux_sym_entrypoint_token1] = ACTIONS(285),
    [aux_sym_env_token1] = ACTIONS(285),
    [aux_sym_expose_token1] = ACTIONS(285),
    [aux_sym_from_token1] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(285),
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
    [anon_sym_SLASH] = ACTIONS(289),
    [aux_sym__repository_start_token16] = ACTIONS(289),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(285),
    [sym__space_no_newline] = ACTIONS(287),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [aux_sym_add_token1] = ACTIONS(291),
    [aux_sym_arg_token1] = ACTIONS(291),
    [aux_sym_cmd_token1] = ACTIONS(291),
    [aux_sym_copy_token1] = ACTIONS(291),
    [aux_sym_entrypoint_token1] = ACTIONS(291),
    [aux_sym_env_token1] = ACTIONS(291),
    [aux_sym_expose_token1] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [aux_sym_from_token1] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [aux_sym_healthcheck_token1] = ACTIONS(291),
    [aux_sym_label_token1] = ACTIONS(291),
    [aux_sym_maintainer_token1] = ACTIONS(291),
    [aux_sym_onbuild_token1] = ACTIONS(291),
    [aux_sym_run_token1] = ACTIONS(291),
    [aux_sym_shell_token1] = ACTIONS(291),
    [aux_sym_stopsignal_token1] = ACTIONS(291),
    [aux_sym_user_token1] = ACTIONS(291),
    [anon_sym_DOLLAR] = ACTIONS(291),
    [aux_sym_volume_token1] = ACTIONS(291),
    [aux_sym_workdir_token1] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [aux_sym__port_part_token1] = ACTIONS(291),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(291),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [68] = {
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
    [anon_sym_SLASH] = ACTIONS(167),
    [aux_sym__repository_start_token16] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(163),
    [sym__space_no_newline] = ACTIONS(165),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [69] = {
    [aux_sym__repository_start_repeat1] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(293),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(295),
    [aux_sym_workdir_token1] = ACTIONS(295),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(297),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(293),
    [sym__space_no_newline] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [70] = {
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
    [anon_sym_COLON] = ACTIONS(299),
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
    [anon_sym_DASH] = ACTIONS(299),
    [aux_sym__port_part_token1] = ACTIONS(299),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(299),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [aux_sym_add_token1] = ACTIONS(224),
    [aux_sym_arg_token1] = ACTIONS(224),
    [aux_sym_cmd_token1] = ACTIONS(224),
    [aux_sym_copy_token1] = ACTIONS(224),
    [aux_sym_entrypoint_token1] = ACTIONS(224),
    [aux_sym_env_token1] = ACTIONS(224),
    [aux_sym_expose_token1] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [aux_sym_from_token1] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(224),
    [aux_sym_healthcheck_token1] = ACTIONS(224),
    [aux_sym_label_token1] = ACTIONS(224),
    [aux_sym_maintainer_token1] = ACTIONS(224),
    [aux_sym_onbuild_token1] = ACTIONS(224),
    [aux_sym_run_token1] = ACTIONS(224),
    [aux_sym_shell_token1] = ACTIONS(224),
    [aux_sym_stopsignal_token1] = ACTIONS(224),
    [aux_sym_user_token1] = ACTIONS(224),
    [anon_sym_DOLLAR] = ACTIONS(224),
    [aux_sym_volume_token1] = ACTIONS(224),
    [aux_sym_workdir_token1] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [aux_sym__port_part_token1] = ACTIONS(224),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(224),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [72] = {
    [aux_sym__repository_start_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(273),
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
    [anon_sym_DOLLAR] = ACTIONS(131),
    [aux_sym_volume_token1] = ACTIONS(275),
    [aux_sym_workdir_token1] = ACTIONS(275),
    [aux_sym__repository_start_token2] = ACTIONS(131),
    [aux_sym__repository_start_token3] = ACTIONS(277),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym__space_no_newline] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [73] = {
    [aux_sym__repository_start_repeat2] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(273),
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
    [aux_sym__repository_start_token3] = ACTIONS(277),
    [aux_sym__repository_start_token4] = ACTIONS(171),
    [aux_sym__repository_start_token7] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym__space_no_newline] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [74] = {
    [aux_sym__repository_start_repeat3] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(273),
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
    [aux_sym__repository_start_token3] = ACTIONS(277),
    [aux_sym__repository_start_token8] = ACTIONS(154),
    [aux_sym__repository_start_token11] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(273),
    [sym__space_no_newline] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [75] = {
    [aux_sym__repository_start_repeat4] = STATE(85),
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
    [aux_sym__repository_start_token3] = ACTIONS(305),
    [aux_sym__repository_start_token12] = ACTIONS(307),
    [aux_sym__repository_start_token15] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [76] = {
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
    [anon_sym_COLON] = ACTIONS(311),
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
    [aux_sym__port_part_token1] = ACTIONS(309),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(309),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [77] = {
    [aux_sym_workdir_repeat1] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(313),
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
    [anon_sym_DOLLAR] = ACTIONS(317),
    [aux_sym_volume_token1] = ACTIONS(315),
    [aux_sym_workdir_token1] = ACTIONS(315),
    [aux_sym_workdir_token4] = ACTIONS(319),
    [aux_sym_workdir_token5] = ACTIONS(321),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(313),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [78] = {
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
    [aux_sym__port_part_token1] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(323),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [79] = {
    [aux_sym__repository_start_repeat4] = STATE(79),
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
    [aux_sym__repository_start_token12] = ACTIONS(325),
    [aux_sym__repository_start_token15] = ACTIONS(325),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(328),
    [aux_sym_add_token1] = ACTIONS(328),
    [aux_sym_arg_token1] = ACTIONS(328),
    [aux_sym_cmd_token1] = ACTIONS(328),
    [aux_sym_copy_token1] = ACTIONS(328),
    [aux_sym_entrypoint_token1] = ACTIONS(328),
    [aux_sym_env_token1] = ACTIONS(328),
    [aux_sym_expose_token1] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [aux_sym_from_token1] = ACTIONS(328),
    [anon_sym_COLON] = ACTIONS(328),
    [aux_sym_healthcheck_token1] = ACTIONS(328),
    [aux_sym_label_token1] = ACTIONS(328),
    [aux_sym_maintainer_token1] = ACTIONS(328),
    [aux_sym_onbuild_token1] = ACTIONS(328),
    [aux_sym_run_token1] = ACTIONS(328),
    [aux_sym_shell_token1] = ACTIONS(328),
    [aux_sym_stopsignal_token1] = ACTIONS(328),
    [aux_sym_user_token1] = ACTIONS(328),
    [anon_sym_DOLLAR] = ACTIONS(328),
    [aux_sym_volume_token1] = ACTIONS(328),
    [aux_sym_workdir_token1] = ACTIONS(328),
    [aux_sym__port_part_token1] = ACTIONS(328),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(328),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [81] = {
    [aux_sym__repository_start_repeat3] = STATE(81),
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
    [aux_sym_volume_token1] = ACTIONS(175),
    [aux_sym_workdir_token1] = ACTIONS(175),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [aux_sym__repository_start_token8] = ACTIONS(330),
    [aux_sym__repository_start_token11] = ACTIONS(330),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [82] = {
    [aux_sym_workdir_repeat1] = STATE(92),
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
    [anon_sym_DOLLAR] = ACTIONS(317),
    [aux_sym_volume_token1] = ACTIONS(335),
    [aux_sym_workdir_token1] = ACTIONS(335),
    [aux_sym_workdir_token4] = ACTIONS(319),
    [aux_sym_workdir_token5] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(333),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [83] = {
    [aux_sym__repository_start_repeat2] = STATE(83),
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
    [aux_sym__repository_start_token4] = ACTIONS(339),
    [aux_sym__repository_start_token7] = ACTIONS(339),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [84] = {
    [aux_sym__repository_start_repeat1] = STATE(84),
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
    [anon_sym_DOLLAR] = ACTIONS(342),
    [aux_sym_volume_token1] = ACTIONS(158),
    [aux_sym_workdir_token1] = ACTIONS(158),
    [aux_sym__repository_start_token2] = ACTIONS(342),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [85] = {
    [aux_sym__repository_start_repeat4] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(345),
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
    [aux_sym__repository_start_token3] = ACTIONS(349),
    [aux_sym__repository_start_token12] = ACTIONS(307),
    [aux_sym__repository_start_token15] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [86] = {
    [aux_sym__repository_start_repeat3] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(345),
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
    [aux_sym__repository_start_token3] = ACTIONS(349),
    [aux_sym__repository_start_token8] = ACTIONS(351),
    [aux_sym__repository_start_token11] = ACTIONS(351),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [87] = {
    [aux_sym__repository_start_repeat2] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(345),
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
    [aux_sym__repository_start_token3] = ACTIONS(349),
    [aux_sym__repository_start_token4] = ACTIONS(353),
    [aux_sym__repository_start_token7] = ACTIONS(353),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(345),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [88] = {
    [aux_sym__repository_start_repeat3] = STATE(86),
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
    [aux_sym__repository_start_token3] = ACTIONS(305),
    [aux_sym__repository_start_token8] = ACTIONS(351),
    [aux_sym__repository_start_token11] = ACTIONS(351),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [89] = {
    [aux_sym__repository_start_repeat2] = STATE(87),
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
    [aux_sym__repository_start_token3] = ACTIONS(305),
    [aux_sym__repository_start_token4] = ACTIONS(353),
    [aux_sym__repository_start_token7] = ACTIONS(353),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [90] = {
    [aux_sym__repository_start_repeat1] = STATE(91),
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
    [anon_sym_DOLLAR] = ACTIONS(359),
    [aux_sym_volume_token1] = ACTIONS(357),
    [aux_sym_workdir_token1] = ACTIONS(357),
    [aux_sym__repository_start_token2] = ACTIONS(359),
    [aux_sym__repository_start_token3] = ACTIONS(361),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(355),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [91] = {
    [aux_sym__repository_start_repeat1] = STATE(84),
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
    [anon_sym_DOLLAR] = ACTIONS(359),
    [aux_sym_volume_token1] = ACTIONS(303),
    [aux_sym_workdir_token1] = ACTIONS(303),
    [aux_sym__repository_start_token2] = ACTIONS(359),
    [aux_sym__repository_start_token3] = ACTIONS(305),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [92] = {
    [aux_sym_workdir_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(363),
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
    [anon_sym_DOLLAR] = ACTIONS(367),
    [aux_sym_volume_token1] = ACTIONS(365),
    [aux_sym_workdir_token1] = ACTIONS(365),
    [aux_sym_workdir_token4] = ACTIONS(370),
    [aux_sym_workdir_token5] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [93] = {
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
  [94] = {
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
  [95] = {
    [aux_sym__labels] = STATE(100),
    [sym_label_pair] = STATE(100),
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
    [sym_label_key] = ACTIONS(377),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [96] = {
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
  [97] = {
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
  [98] = {
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
    [aux_sym__port_part_token1] = ACTIONS(379),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(379),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [99] = {
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
  [100] = {
    [aux_sym__labels] = STATE(100),
    [sym_label_pair] = STATE(100),
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
    [aux_sym_volume_token1] = ACTIONS(383),
    [aux_sym_workdir_token1] = ACTIONS(383),
    [sym_label_key] = ACTIONS(385),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(381),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [101] = {
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
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [aux_sym_add_token1] = ACTIONS(388),
    [aux_sym_arg_token1] = ACTIONS(388),
    [aux_sym_cmd_token1] = ACTIONS(388),
    [aux_sym_copy_token1] = ACTIONS(388),
    [aux_sym_entrypoint_token1] = ACTIONS(388),
    [aux_sym_env_token1] = ACTIONS(388),
    [aux_sym_expose_token1] = ACTIONS(388),
    [aux_sym_from_token1] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(390),
    [anon_sym_AT] = ACTIONS(392),
    [aux_sym_healthcheck_token1] = ACTIONS(388),
    [aux_sym_label_token1] = ACTIONS(388),
    [aux_sym_maintainer_token1] = ACTIONS(388),
    [aux_sym_onbuild_token1] = ACTIONS(388),
    [aux_sym_run_token1] = ACTIONS(388),
    [aux_sym_shell_token1] = ACTIONS(388),
    [aux_sym_stopsignal_token1] = ACTIONS(388),
    [aux_sym_user_token1] = ACTIONS(388),
    [aux_sym_volume_token1] = ACTIONS(388),
    [aux_sym_workdir_token1] = ACTIONS(388),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(388),
    [sym__space_no_newline] = ACTIONS(394),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [103] = {
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
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [aux_sym_add_token1] = ACTIONS(396),
    [aux_sym_arg_token1] = ACTIONS(396),
    [aux_sym_cmd_token1] = ACTIONS(396),
    [aux_sym_copy_token1] = ACTIONS(396),
    [aux_sym_entrypoint_token1] = ACTIONS(396),
    [aux_sym_env_token1] = ACTIONS(396),
    [aux_sym_expose_token1] = ACTIONS(396),
    [anon_sym_DQUOTE] = ACTIONS(396),
    [aux_sym_from_token1] = ACTIONS(396),
    [aux_sym_healthcheck_token1] = ACTIONS(396),
    [aux_sym_label_token1] = ACTIONS(396),
    [aux_sym_maintainer_token1] = ACTIONS(396),
    [aux_sym_onbuild_token1] = ACTIONS(396),
    [aux_sym_run_token1] = ACTIONS(396),
    [aux_sym_shell_token1] = ACTIONS(396),
    [aux_sym_stopsignal_token1] = ACTIONS(396),
    [aux_sym_user_token1] = ACTIONS(396),
    [anon_sym_DOLLAR] = ACTIONS(396),
    [aux_sym_volume_token1] = ACTIONS(396),
    [aux_sym_workdir_token1] = ACTIONS(396),
    [aux_sym__port_part_token1] = ACTIONS(396),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(396),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [105] = {
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
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [aux_sym_add_token1] = ACTIONS(285),
    [aux_sym_arg_token1] = ACTIONS(285),
    [aux_sym_cmd_token1] = ACTIONS(285),
    [aux_sym_copy_token1] = ACTIONS(285),
    [aux_sym_entrypoint_token1] = ACTIONS(285),
    [aux_sym_env_token1] = ACTIONS(285),
    [aux_sym_expose_token1] = ACTIONS(285),
    [aux_sym_from_token1] = ACTIONS(285),
    [anon_sym_COLON] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(285),
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
    [sym__space_no_newline] = ACTIONS(287),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [107] = {
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
  [108] = {
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
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(363),
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
    [anon_sym_DOLLAR] = ACTIONS(365),
    [aux_sym_volume_token1] = ACTIONS(365),
    [aux_sym_workdir_token1] = ACTIONS(365),
    [aux_sym_workdir_token4] = ACTIONS(363),
    [aux_sym_workdir_token5] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [110] = {
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
    [aux_sym__repository_start_token2] = ACTIONS(156),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [111] = {
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
    [anon_sym_DOLLAR] = ACTIONS(205),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [aux_sym_workdir_token4] = ACTIONS(203),
    [aux_sym_workdir_token5] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [112] = {
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
    [anon_sym_DOLLAR] = ACTIONS(209),
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym_workdir_token4] = ACTIONS(207),
    [aux_sym_workdir_token5] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [aux_sym_add_token1] = ACTIONS(279),
    [aux_sym_arg_token1] = ACTIONS(279),
    [aux_sym_cmd_token1] = ACTIONS(279),
    [aux_sym_copy_token1] = ACTIONS(279),
    [aux_sym_entrypoint_token1] = ACTIONS(279),
    [aux_sym_env_token1] = ACTIONS(279),
    [aux_sym_expose_token1] = ACTIONS(279),
    [aux_sym_from_token1] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(279),
    [anon_sym_AT] = ACTIONS(279),
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
  [114] = {
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
    [anon_sym_DOLLAR] = ACTIONS(189),
    [aux_sym_volume_token1] = ACTIONS(189),
    [aux_sym_workdir_token1] = ACTIONS(189),
    [aux_sym_workdir_token4] = ACTIONS(187),
    [aux_sym_workdir_token5] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [115] = {
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
  [116] = {
    [aux_sym__anything] = STATE(133),
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
    [aux_sym__anything_token1] = ACTIONS(426),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [aux_sym_add_token1] = ACTIONS(388),
    [aux_sym_arg_token1] = ACTIONS(388),
    [aux_sym_cmd_token1] = ACTIONS(388),
    [aux_sym_copy_token1] = ACTIONS(388),
    [aux_sym_entrypoint_token1] = ACTIONS(388),
    [aux_sym_env_token1] = ACTIONS(388),
    [aux_sym_expose_token1] = ACTIONS(388),
    [aux_sym_from_token1] = ACTIONS(388),
    [anon_sym_AT] = ACTIONS(392),
    [aux_sym_healthcheck_token1] = ACTIONS(388),
    [aux_sym_label_token1] = ACTIONS(388),
    [aux_sym_maintainer_token1] = ACTIONS(388),
    [aux_sym_onbuild_token1] = ACTIONS(388),
    [aux_sym_run_token1] = ACTIONS(388),
    [aux_sym_shell_token1] = ACTIONS(388),
    [aux_sym_stopsignal_token1] = ACTIONS(388),
    [aux_sym_user_token1] = ACTIONS(388),
    [aux_sym_volume_token1] = ACTIONS(388),
    [aux_sym_workdir_token1] = ACTIONS(388),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(388),
    [sym__space_no_newline] = ACTIONS(394),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [118] = {
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
  [119] = {
    [aux_sym__anything] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(428),
    [aux_sym_add_token1] = ACTIONS(430),
    [aux_sym_arg_token1] = ACTIONS(430),
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
    [aux_sym__anything_token1] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(428),
    [sym_comment] = ACTIONS(434),
    [sym_line_continuation] = ACTIONS(5),
  },
  [120] = {
    [aux_sym__anything] = STATE(133),
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
    [aux_sym__anything_token1] = ACTIONS(426),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(436),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [aux_sym_add_token1] = ACTIONS(440),
    [aux_sym_arg_token1] = ACTIONS(440),
    [aux_sym_cmd_token1] = ACTIONS(440),
    [aux_sym_copy_token1] = ACTIONS(440),
    [aux_sym_entrypoint_token1] = ACTIONS(440),
    [aux_sym_env_token1] = ACTIONS(440),
    [aux_sym_expose_token1] = ACTIONS(440),
    [aux_sym_from_token1] = ACTIONS(440),
    [anon_sym_AT] = ACTIONS(440),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(440),
    [sym__space_no_newline] = ACTIONS(442),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [aux_sym_add_token1] = ACTIONS(444),
    [aux_sym_arg_token1] = ACTIONS(444),
    [aux_sym_cmd_token1] = ACTIONS(444),
    [aux_sym_copy_token1] = ACTIONS(444),
    [aux_sym_entrypoint_token1] = ACTIONS(444),
    [aux_sym_env_token1] = ACTIONS(444),
    [aux_sym_expose_token1] = ACTIONS(444),
    [aux_sym_from_token1] = ACTIONS(444),
    [anon_sym_AT] = ACTIONS(444),
    [aux_sym_healthcheck_token1] = ACTIONS(444),
    [aux_sym_label_token1] = ACTIONS(444),
    [aux_sym_maintainer_token1] = ACTIONS(444),
    [aux_sym_onbuild_token1] = ACTIONS(444),
    [aux_sym_run_token1] = ACTIONS(444),
    [aux_sym_shell_token1] = ACTIONS(444),
    [aux_sym_stopsignal_token1] = ACTIONS(444),
    [aux_sym_user_token1] = ACTIONS(444),
    [aux_sym_volume_token1] = ACTIONS(444),
    [aux_sym_workdir_token1] = ACTIONS(444),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(444),
    [sym__space_no_newline] = ACTIONS(446),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [123] = {
    [aux_sym__anything] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(448),
    [aux_sym_add_token1] = ACTIONS(450),
    [aux_sym_arg_token1] = ACTIONS(450),
    [aux_sym_cmd_token1] = ACTIONS(450),
    [aux_sym_copy_token1] = ACTIONS(450),
    [aux_sym_entrypoint_token1] = ACTIONS(450),
    [aux_sym_env_token1] = ACTIONS(450),
    [aux_sym_expose_token1] = ACTIONS(450),
    [aux_sym_from_token1] = ACTIONS(450),
    [aux_sym_healthcheck_token1] = ACTIONS(450),
    [aux_sym_label_token1] = ACTIONS(450),
    [aux_sym_maintainer_token1] = ACTIONS(450),
    [aux_sym_onbuild_token1] = ACTIONS(450),
    [aux_sym_run_token1] = ACTIONS(450),
    [aux_sym_shell_token1] = ACTIONS(450),
    [aux_sym_stopsignal_token1] = ACTIONS(450),
    [aux_sym_user_token1] = ACTIONS(450),
    [aux_sym_volume_token1] = ACTIONS(450),
    [aux_sym_workdir_token1] = ACTIONS(450),
    [aux_sym__anything_token1] = ACTIONS(452),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(448),
    [sym_comment] = ACTIONS(450),
    [sym_line_continuation] = ACTIONS(5),
  },
  [124] = {
    [aux_sym__paths] = STATE(128),
    [ts_builtin_sym_end] = ACTIONS(455),
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
    [sym_path] = ACTIONS(459),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(455),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [125] = {
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
    [aux_sym_volume_token1] = ACTIONS(463),
    [aux_sym_workdir_token1] = ACTIONS(463),
    [sym_path] = ACTIONS(463),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(461),
    [sym__space_no_newline] = ACTIONS(465),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [aux_sym_add_token1] = ACTIONS(406),
    [aux_sym_arg_token1] = ACTIONS(406),
    [aux_sym_cmd_token1] = ACTIONS(406),
    [aux_sym_copy_token1] = ACTIONS(406),
    [aux_sym_entrypoint_token1] = ACTIONS(406),
    [aux_sym_env_token1] = ACTIONS(406),
    [aux_sym_expose_token1] = ACTIONS(406),
    [aux_sym_from_token1] = ACTIONS(406),
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
  [127] = {
    [aux_sym__paths] = STATE(128),
    [ts_builtin_sym_end] = ACTIONS(467),
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
    [sym_path] = ACTIONS(459),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [128] = {
    [aux_sym__paths] = STATE(128),
    [ts_builtin_sym_end] = ACTIONS(471),
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
    [sym_path] = ACTIONS(475),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(471),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [129] = {
    [aux_sym__paths] = STATE(128),
    [ts_builtin_sym_end] = ACTIONS(478),
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
    [sym_path] = ACTIONS(459),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(478),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [aux_sym_add_token1] = ACTIONS(482),
    [aux_sym_arg_token1] = ACTIONS(482),
    [aux_sym_cmd_token1] = ACTIONS(482),
    [aux_sym_copy_token1] = ACTIONS(482),
    [aux_sym_entrypoint_token1] = ACTIONS(482),
    [aux_sym_env_token1] = ACTIONS(482),
    [aux_sym_expose_token1] = ACTIONS(482),
    [aux_sym_from_token1] = ACTIONS(482),
    [anon_sym_AT] = ACTIONS(484),
    [aux_sym_healthcheck_token1] = ACTIONS(482),
    [aux_sym_label_token1] = ACTIONS(482),
    [aux_sym_maintainer_token1] = ACTIONS(482),
    [aux_sym_onbuild_token1] = ACTIONS(482),
    [aux_sym_run_token1] = ACTIONS(482),
    [aux_sym_shell_token1] = ACTIONS(482),
    [aux_sym_stopsignal_token1] = ACTIONS(482),
    [aux_sym_user_token1] = ACTIONS(482),
    [aux_sym_volume_token1] = ACTIONS(482),
    [aux_sym_workdir_token1] = ACTIONS(482),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(482),
    [sym__space_no_newline] = ACTIONS(486),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [131] = {
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
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [aux_sym_add_token1] = ACTIONS(488),
    [aux_sym_arg_token1] = ACTIONS(488),
    [aux_sym_cmd_token1] = ACTIONS(488),
    [aux_sym_copy_token1] = ACTIONS(488),
    [aux_sym_entrypoint_token1] = ACTIONS(488),
    [aux_sym_env_token1] = ACTIONS(488),
    [aux_sym_expose_token1] = ACTIONS(488),
    [aux_sym_from_token1] = ACTIONS(488),
    [anon_sym_AT] = ACTIONS(490),
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
    [sym__space_no_newline] = ACTIONS(492),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [133] = {
    [aux_sym__anything] = STATE(133),
    [ts_builtin_sym_end] = ACTIONS(448),
    [aux_sym_add_token1] = ACTIONS(450),
    [aux_sym_arg_token1] = ACTIONS(450),
    [aux_sym_cmd_token1] = ACTIONS(450),
    [aux_sym_copy_token1] = ACTIONS(450),
    [aux_sym_entrypoint_token1] = ACTIONS(450),
    [aux_sym_env_token1] = ACTIONS(450),
    [aux_sym_expose_token1] = ACTIONS(450),
    [aux_sym_from_token1] = ACTIONS(450),
    [aux_sym_healthcheck_token1] = ACTIONS(450),
    [aux_sym_label_token1] = ACTIONS(450),
    [aux_sym_maintainer_token1] = ACTIONS(450),
    [aux_sym_onbuild_token1] = ACTIONS(450),
    [aux_sym_run_token1] = ACTIONS(450),
    [aux_sym_shell_token1] = ACTIONS(450),
    [aux_sym_stopsignal_token1] = ACTIONS(450),
    [aux_sym_user_token1] = ACTIONS(450),
    [aux_sym_volume_token1] = ACTIONS(450),
    [aux_sym_workdir_token1] = ACTIONS(450),
    [aux_sym__anything_token1] = ACTIONS(494),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(448),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [aux_sym_add_token1] = ACTIONS(406),
    [aux_sym_arg_token1] = ACTIONS(406),
    [aux_sym_cmd_token1] = ACTIONS(406),
    [aux_sym_copy_token1] = ACTIONS(406),
    [aux_sym_entrypoint_token1] = ACTIONS(406),
    [aux_sym_env_token1] = ACTIONS(406),
    [aux_sym_expose_token1] = ACTIONS(406),
    [aux_sym_from_token1] = ACTIONS(406),
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
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(497),
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
    [sym_label_key] = ACTIONS(497),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [aux_sym_add_token1] = ACTIONS(388),
    [aux_sym_arg_token1] = ACTIONS(388),
    [aux_sym_cmd_token1] = ACTIONS(388),
    [aux_sym_copy_token1] = ACTIONS(388),
    [aux_sym_entrypoint_token1] = ACTIONS(388),
    [aux_sym_env_token1] = ACTIONS(388),
    [aux_sym_expose_token1] = ACTIONS(388),
    [aux_sym_from_token1] = ACTIONS(388),
    [aux_sym_healthcheck_token1] = ACTIONS(388),
    [aux_sym_label_token1] = ACTIONS(388),
    [aux_sym_maintainer_token1] = ACTIONS(388),
    [aux_sym_onbuild_token1] = ACTIONS(388),
    [aux_sym_run_token1] = ACTIONS(388),
    [aux_sym_shell_token1] = ACTIONS(388),
    [aux_sym_stopsignal_token1] = ACTIONS(388),
    [aux_sym_user_token1] = ACTIONS(388),
    [aux_sym_volume_token1] = ACTIONS(388),
    [aux_sym_workdir_token1] = ACTIONS(388),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(388),
    [sym__space_no_newline] = ACTIONS(394),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [137] = {
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
    [sym__space_no_newline] = ACTIONS(503),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(505),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(505),
    [sym__space_no_newline] = ACTIONS(507),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [aux_sym_add_token1] = ACTIONS(482),
    [aux_sym_arg_token1] = ACTIONS(482),
    [aux_sym_cmd_token1] = ACTIONS(482),
    [aux_sym_copy_token1] = ACTIONS(482),
    [aux_sym_entrypoint_token1] = ACTIONS(482),
    [aux_sym_env_token1] = ACTIONS(482),
    [aux_sym_expose_token1] = ACTIONS(482),
    [aux_sym_from_token1] = ACTIONS(482),
    [aux_sym_healthcheck_token1] = ACTIONS(482),
    [aux_sym_label_token1] = ACTIONS(482),
    [aux_sym_maintainer_token1] = ACTIONS(482),
    [aux_sym_onbuild_token1] = ACTIONS(482),
    [aux_sym_run_token1] = ACTIONS(482),
    [aux_sym_shell_token1] = ACTIONS(482),
    [aux_sym_stopsignal_token1] = ACTIONS(482),
    [aux_sym_user_token1] = ACTIONS(482),
    [aux_sym_volume_token1] = ACTIONS(482),
    [aux_sym_workdir_token1] = ACTIONS(482),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(482),
    [sym__space_no_newline] = ACTIONS(486),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(509),
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
    [sym_label_key] = ACTIONS(509),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(509),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [141] = {
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
    [sym__space_no_newline] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [aux_sym_add_token1] = ACTIONS(488),
    [aux_sym_arg_token1] = ACTIONS(488),
    [aux_sym_cmd_token1] = ACTIONS(488),
    [aux_sym_copy_token1] = ACTIONS(488),
    [aux_sym_entrypoint_token1] = ACTIONS(488),
    [aux_sym_env_token1] = ACTIONS(488),
    [aux_sym_expose_token1] = ACTIONS(488),
    [aux_sym_from_token1] = ACTIONS(488),
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
    [sym__space_no_newline] = ACTIONS(492),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [143] = {
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
  [144] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [aux_sym_add_token1] = ACTIONS(521),
    [aux_sym_arg_token1] = ACTIONS(521),
    [anon_sym_EQ] = ACTIONS(523),
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
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(525),
    [aux_sym_add_token1] = ACTIONS(525),
    [aux_sym_arg_token1] = ACTIONS(525),
    [aux_sym_cmd_token1] = ACTIONS(525),
    [aux_sym_copy_token1] = ACTIONS(525),
    [aux_sym_entrypoint_token1] = ACTIONS(525),
    [aux_sym_env_token1] = ACTIONS(525),
    [aux_sym_expose_token1] = ACTIONS(525),
    [aux_sym_from_token1] = ACTIONS(525),
    [aux_sym_healthcheck_token1] = ACTIONS(525),
    [aux_sym_label_token1] = ACTIONS(525),
    [aux_sym_maintainer_token1] = ACTIONS(525),
    [aux_sym_onbuild_token1] = ACTIONS(525),
    [aux_sym_run_token1] = ACTIONS(525),
    [aux_sym_shell_token1] = ACTIONS(525),
    [aux_sym_stopsignal_token1] = ACTIONS(525),
    [aux_sym_user_token1] = ACTIONS(525),
    [aux_sym_volume_token1] = ACTIONS(525),
    [aux_sym_workdir_token1] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(525),
    [sym__space_no_newline] = ACTIONS(527),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [aux_sym_add_token1] = ACTIONS(529),
    [aux_sym_arg_token1] = ACTIONS(529),
    [aux_sym_cmd_token1] = ACTIONS(529),
    [aux_sym_copy_token1] = ACTIONS(529),
    [aux_sym_entrypoint_token1] = ACTIONS(529),
    [aux_sym_env_token1] = ACTIONS(529),
    [aux_sym_expose_token1] = ACTIONS(529),
    [aux_sym_from_token1] = ACTIONS(529),
    [aux_sym_healthcheck_token1] = ACTIONS(529),
    [aux_sym_label_token1] = ACTIONS(529),
    [aux_sym_maintainer_token1] = ACTIONS(529),
    [aux_sym_onbuild_token1] = ACTIONS(529),
    [aux_sym_run_token1] = ACTIONS(529),
    [aux_sym_shell_token1] = ACTIONS(529),
    [aux_sym_stopsignal_token1] = ACTIONS(529),
    [aux_sym_user_token1] = ACTIONS(529),
    [aux_sym_volume_token1] = ACTIONS(529),
    [aux_sym_workdir_token1] = ACTIONS(529),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(529),
    [sym__space_no_newline] = ACTIONS(531),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [aux_sym_add_token1] = ACTIONS(533),
    [aux_sym_arg_token1] = ACTIONS(533),
    [aux_sym_cmd_token1] = ACTIONS(533),
    [aux_sym_copy_token1] = ACTIONS(533),
    [aux_sym_entrypoint_token1] = ACTIONS(533),
    [aux_sym_env_token1] = ACTIONS(533),
    [aux_sym_expose_token1] = ACTIONS(533),
    [aux_sym_from_token1] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(533),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [aux_sym_add_token1] = ACTIONS(537),
    [aux_sym_arg_token1] = ACTIONS(537),
    [aux_sym_cmd_token1] = ACTIONS(537),
    [aux_sym_copy_token1] = ACTIONS(537),
    [aux_sym_entrypoint_token1] = ACTIONS(537),
    [aux_sym_env_token1] = ACTIONS(537),
    [aux_sym_expose_token1] = ACTIONS(537),
    [aux_sym_from_token1] = ACTIONS(537),
    [aux_sym_healthcheck_token1] = ACTIONS(537),
    [aux_sym_label_token1] = ACTIONS(537),
    [aux_sym_maintainer_token1] = ACTIONS(537),
    [aux_sym_onbuild_token1] = ACTIONS(537),
    [aux_sym_run_token1] = ACTIONS(537),
    [aux_sym_shell_token1] = ACTIONS(537),
    [aux_sym_stopsignal_token1] = ACTIONS(537),
    [aux_sym_user_token1] = ACTIONS(537),
    [aux_sym_volume_token1] = ACTIONS(537),
    [aux_sym_workdir_token1] = ACTIONS(537),
    [sym_label_key] = ACTIONS(535),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(535),
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
    [anon_sym_COLON] = ACTIONS(539),
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
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(471),
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
    [sym_path] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(471),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [152] = {
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
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [aux_sym_add_token1] = ACTIONS(517),
    [aux_sym_arg_token1] = ACTIONS(517),
    [aux_sym_cmd_token1] = ACTIONS(517),
    [aux_sym_copy_token1] = ACTIONS(517),
    [aux_sym_entrypoint_token1] = ACTIONS(517),
    [aux_sym_env_token1] = ACTIONS(517),
    [aux_sym_expose_token1] = ACTIONS(517),
    [aux_sym_from_token1] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(541),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [154] = {
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
  [155] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(543),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [156] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(545),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(505),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [158] = {
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
  [159] = {
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
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(551),
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [161] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [162] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [163] = {
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
  },
  [164] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [165] = {
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
  [166] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [167] = {
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
  [168] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [169] = {
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
  [170] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [171] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [aux_sym_add_token1] = ACTIONS(529),
    [aux_sym_arg_token1] = ACTIONS(529),
    [aux_sym_cmd_token1] = ACTIONS(529),
    [aux_sym_copy_token1] = ACTIONS(529),
    [aux_sym_entrypoint_token1] = ACTIONS(529),
    [aux_sym_env_token1] = ACTIONS(529),
    [aux_sym_expose_token1] = ACTIONS(529),
    [aux_sym_from_token1] = ACTIONS(529),
    [aux_sym_healthcheck_token1] = ACTIONS(529),
    [aux_sym_label_token1] = ACTIONS(529),
    [aux_sym_maintainer_token1] = ACTIONS(529),
    [aux_sym_onbuild_token1] = ACTIONS(529),
    [aux_sym_run_token1] = ACTIONS(529),
    [aux_sym_shell_token1] = ACTIONS(529),
    [aux_sym_stopsignal_token1] = ACTIONS(529),
    [aux_sym_user_token1] = ACTIONS(529),
    [aux_sym_volume_token1] = ACTIONS(529),
    [aux_sym_workdir_token1] = ACTIONS(529),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(529),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(525),
    [aux_sym_add_token1] = ACTIONS(525),
    [aux_sym_arg_token1] = ACTIONS(525),
    [aux_sym_cmd_token1] = ACTIONS(525),
    [aux_sym_copy_token1] = ACTIONS(525),
    [aux_sym_entrypoint_token1] = ACTIONS(525),
    [aux_sym_env_token1] = ACTIONS(525),
    [aux_sym_expose_token1] = ACTIONS(525),
    [aux_sym_from_token1] = ACTIONS(525),
    [aux_sym_healthcheck_token1] = ACTIONS(525),
    [aux_sym_label_token1] = ACTIONS(525),
    [aux_sym_maintainer_token1] = ACTIONS(525),
    [aux_sym_onbuild_token1] = ACTIONS(525),
    [aux_sym_run_token1] = ACTIONS(525),
    [aux_sym_shell_token1] = ACTIONS(525),
    [aux_sym_stopsignal_token1] = ACTIONS(525),
    [aux_sym_user_token1] = ACTIONS(525),
    [aux_sym_volume_token1] = ACTIONS(525),
    [aux_sym_workdir_token1] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(525),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [174] = {
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
  [175] = {
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
  [176] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [177] = {
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
  [178] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [179] = {
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
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [aux_sym_add_token1] = ACTIONS(488),
    [aux_sym_arg_token1] = ACTIONS(488),
    [aux_sym_cmd_token1] = ACTIONS(488),
    [aux_sym_copy_token1] = ACTIONS(488),
    [aux_sym_entrypoint_token1] = ACTIONS(488),
    [aux_sym_env_token1] = ACTIONS(488),
    [aux_sym_expose_token1] = ACTIONS(488),
    [aux_sym_from_token1] = ACTIONS(488),
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [181] = {
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
  [182] = {
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
  [183] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [184] = {
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
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [185] = {
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
  [186] = {
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
  [187] = {
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
  [188] = {
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
  [189] = {
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
  [190] = {
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
  [191] = {
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
  [192] = {
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
  [193] = {
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
  [194] = {
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
  [195] = {
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
  [196] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [aux_sym_add_token1] = ACTIONS(482),
    [aux_sym_arg_token1] = ACTIONS(482),
    [aux_sym_cmd_token1] = ACTIONS(482),
    [aux_sym_copy_token1] = ACTIONS(482),
    [aux_sym_entrypoint_token1] = ACTIONS(482),
    [aux_sym_env_token1] = ACTIONS(482),
    [aux_sym_expose_token1] = ACTIONS(482),
    [aux_sym_from_token1] = ACTIONS(482),
    [aux_sym_healthcheck_token1] = ACTIONS(482),
    [aux_sym_label_token1] = ACTIONS(482),
    [aux_sym_maintainer_token1] = ACTIONS(482),
    [aux_sym_onbuild_token1] = ACTIONS(482),
    [aux_sym_run_token1] = ACTIONS(482),
    [aux_sym_shell_token1] = ACTIONS(482),
    [aux_sym_stopsignal_token1] = ACTIONS(482),
    [aux_sym_user_token1] = ACTIONS(482),
    [aux_sym_volume_token1] = ACTIONS(482),
    [aux_sym_workdir_token1] = ACTIONS(482),
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(482),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [197] = {
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
    [sym__space] = ACTIONS(3),
    [sym__blank_line] = ACTIONS(455),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [198] = {
    [sym_repository] = STATE(223),
    [sym__repository_start] = STATE(204),
    [sym_image] = STATE(105),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(607),
    [anon_sym_DOLLAR] = ACTIONS(609),
    [aux_sym_platform_token1] = ACTIONS(611),
    [aux_sym__repository_start_token1] = ACTIONS(609),
    [aux_sym__repository_start_token4] = ACTIONS(613),
    [aux_sym__repository_start_token6] = ACTIONS(613),
    [aux_sym__repository_start_token8] = ACTIONS(615),
    [aux_sym__repository_start_token10] = ACTIONS(615),
    [aux_sym__repository_start_token12] = ACTIONS(617),
    [aux_sym__repository_start_token14] = ACTIONS(617),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [199] = {
    [sym__hc_interval] = STATE(201),
    [sym__hc_timeout] = STATE(201),
    [sym__hc_start_period] = STATE(201),
    [sym__hc_retries] = STATE(201),
    [sym__hc_options] = STATE(201),
    [sym__hc_command] = STATE(189),
    [aux_sym_healthcheck_repeat1] = STATE(201),
    [aux_sym_cmd_token1] = ACTIONS(619),
    [sym_hc_none] = ACTIONS(621),
    [anon_sym_DASH_DASHinterval] = ACTIONS(623),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(625),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(627),
    [anon_sym_DASH_DASHretires] = ACTIONS(629),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [200] = {
    [sym__port_spec] = STATE(4),
    [sym_mapped_port] = STATE(4),
    [sym_mapped_no_lhs] = STATE(190),
    [sym__port] = STATE(76),
    [sym_port] = STATE(76),
    [sym_port_range] = STATE(76),
    [sym__port_part] = STATE(59),
    [aux_sym_expose_repeat1] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(631),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [201] = {
    [sym__hc_interval] = STATE(212),
    [sym__hc_timeout] = STATE(212),
    [sym__hc_start_period] = STATE(212),
    [sym__hc_retries] = STATE(212),
    [sym__hc_options] = STATE(212),
    [sym__hc_command] = STATE(160),
    [aux_sym_healthcheck_repeat1] = STATE(212),
    [aux_sym_cmd_token1] = ACTIONS(619),
    [anon_sym_DASH_DASHinterval] = ACTIONS(623),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(625),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(627),
    [anon_sym_DASH_DASHretires] = ACTIONS(629),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [202] = {
    [sym_repository] = STATE(213),
    [sym__repository_start] = STATE(204),
    [sym_image] = STATE(102),
    [anon_sym_DOLLAR] = ACTIONS(609),
    [aux_sym_platform_token1] = ACTIONS(611),
    [aux_sym__repository_start_token1] = ACTIONS(609),
    [aux_sym__repository_start_token4] = ACTIONS(613),
    [aux_sym__repository_start_token6] = ACTIONS(613),
    [aux_sym__repository_start_token8] = ACTIONS(615),
    [aux_sym__repository_start_token10] = ACTIONS(615),
    [aux_sym__repository_start_token12] = ACTIONS(617),
    [aux_sym__repository_start_token14] = ACTIONS(617),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [203] = {
    [sym__repository_continued] = STATE(203),
    [aux_sym_repository_repeat1] = STATE(203),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [aux_sym_platform_token1] = ACTIONS(636),
    [aux_sym__repository_start_token1] = ACTIONS(633),
    [aux_sym__repository_start_token4] = ACTIONS(639),
    [aux_sym__repository_start_token6] = ACTIONS(639),
    [aux_sym__repository_start_token8] = ACTIONS(642),
    [aux_sym__repository_start_token10] = ACTIONS(642),
    [aux_sym__repository_start_token12] = ACTIONS(645),
    [aux_sym__repository_start_token14] = ACTIONS(645),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [204] = {
    [sym__repository_continued] = STATE(205),
    [aux_sym_repository_repeat1] = STATE(205),
    [anon_sym_DOLLAR] = ACTIONS(648),
    [aux_sym_platform_token1] = ACTIONS(651),
    [aux_sym__repository_start_token1] = ACTIONS(648),
    [aux_sym__repository_start_token4] = ACTIONS(654),
    [aux_sym__repository_start_token6] = ACTIONS(654),
    [aux_sym__repository_start_token8] = ACTIONS(657),
    [aux_sym__repository_start_token10] = ACTIONS(657),
    [aux_sym__repository_start_token12] = ACTIONS(660),
    [aux_sym__repository_start_token14] = ACTIONS(660),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [205] = {
    [sym__repository_continued] = STATE(203),
    [aux_sym_repository_repeat1] = STATE(203),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [aux_sym_platform_token1] = ACTIONS(666),
    [aux_sym__repository_start_token1] = ACTIONS(663),
    [aux_sym__repository_start_token4] = ACTIONS(669),
    [aux_sym__repository_start_token6] = ACTIONS(669),
    [aux_sym__repository_start_token8] = ACTIONS(672),
    [aux_sym__repository_start_token10] = ACTIONS(672),
    [aux_sym__repository_start_token12] = ACTIONS(675),
    [aux_sym__repository_start_token14] = ACTIONS(675),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [206] = {
    [sym_digest] = STATE(134),
    [anon_sym_sha256_COLON] = ACTIONS(678),
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
  [207] = {
    [sym_digest] = STATE(138),
    [anon_sym_sha256_COLON] = ACTIONS(690),
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
  [208] = {
    [sym_digest] = STATE(147),
    [anon_sym_sha256_COLON] = ACTIONS(692),
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
  [209] = {
    [sym_digest] = STATE(136),
    [anon_sym_sha256_COLON] = ACTIONS(694),
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
  [210] = {
    [sym_digest] = STATE(139),
    [anon_sym_sha256_COLON] = ACTIONS(696),
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
  [211] = {
    [sym_digest] = STATE(142),
    [anon_sym_sha256_COLON] = ACTIONS(698),
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
  [212] = {
    [sym__hc_interval] = STATE(212),
    [sym__hc_timeout] = STATE(212),
    [sym__hc_start_period] = STATE(212),
    [sym__hc_retries] = STATE(212),
    [sym__hc_options] = STATE(212),
    [aux_sym_healthcheck_repeat1] = STATE(212),
    [aux_sym_cmd_token1] = ACTIONS(700),
    [anon_sym_DASH_DASHinterval] = ACTIONS(702),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(705),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(708),
    [anon_sym_DASH_DASHretires] = ACTIONS(711),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [213] = {
    [sym_image] = STATE(107),
    [anon_sym_DOLLAR] = ACTIONS(714),
    [aux_sym_platform_token1] = ACTIONS(716),
    [aux_sym__repository_start_token1] = ACTIONS(714),
    [aux_sym__repository_start_token4] = ACTIONS(718),
    [aux_sym__repository_start_token6] = ACTIONS(718),
    [aux_sym__repository_start_token8] = ACTIONS(720),
    [aux_sym__repository_start_token10] = ACTIONS(720),
    [aux_sym__repository_start_token12] = ACTIONS(722),
    [aux_sym__repository_start_token14] = ACTIONS(722),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [214] = {
    [sym_digest] = STATE(138),
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
  [215] = {
    [sym_digest] = STATE(142),
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
  [216] = {
    [sym_digest] = STATE(147),
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
  [217] = {
    [sym_as_name] = STATE(173),
    [anon_sym_DOLLAR] = ACTIONS(724),
    [aux_sym_platform_token1] = ACTIONS(726),
    [aux_sym__repository_start_token1] = ACTIONS(724),
    [aux_sym__repository_start_token4] = ACTIONS(728),
    [aux_sym__repository_start_token6] = ACTIONS(728),
    [aux_sym__repository_start_token8] = ACTIONS(730),
    [aux_sym__repository_start_token10] = ACTIONS(730),
    [aux_sym__repository_start_token12] = ACTIONS(732),
    [aux_sym__repository_start_token14] = ACTIONS(732),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [218] = {
    [sym_digest] = STATE(146),
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
  [219] = {
    [sym_digest] = STATE(134),
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
  [220] = {
    [sym_as_name] = STATE(155),
    [anon_sym_DOLLAR] = ACTIONS(724),
    [aux_sym_platform_token1] = ACTIONS(726),
    [aux_sym__repository_start_token1] = ACTIONS(724),
    [aux_sym__repository_start_token4] = ACTIONS(728),
    [aux_sym__repository_start_token6] = ACTIONS(728),
    [aux_sym__repository_start_token8] = ACTIONS(730),
    [aux_sym__repository_start_token10] = ACTIONS(730),
    [aux_sym__repository_start_token12] = ACTIONS(732),
    [aux_sym__repository_start_token14] = ACTIONS(732),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [221] = {
    [sym_tag] = STATE(117),
    [anon_sym_DOLLAR] = ACTIONS(734),
    [aux_sym_platform_token1] = ACTIONS(736),
    [aux_sym__repository_start_token1] = ACTIONS(734),
    [aux_sym__repository_start_token4] = ACTIONS(738),
    [aux_sym__repository_start_token6] = ACTIONS(738),
    [aux_sym__repository_start_token8] = ACTIONS(740),
    [aux_sym__repository_start_token10] = ACTIONS(740),
    [aux_sym__repository_start_token12] = ACTIONS(742),
    [aux_sym__repository_start_token14] = ACTIONS(742),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [222] = {
    [sym_as_name] = STATE(180),
    [anon_sym_DOLLAR] = ACTIONS(724),
    [aux_sym_platform_token1] = ACTIONS(726),
    [aux_sym__repository_start_token1] = ACTIONS(724),
    [aux_sym__repository_start_token4] = ACTIONS(728),
    [aux_sym__repository_start_token6] = ACTIONS(728),
    [aux_sym__repository_start_token8] = ACTIONS(730),
    [aux_sym__repository_start_token10] = ACTIONS(730),
    [aux_sym__repository_start_token12] = ACTIONS(732),
    [aux_sym__repository_start_token14] = ACTIONS(732),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [223] = {
    [sym_image] = STATE(108),
    [anon_sym_DOLLAR] = ACTIONS(714),
    [aux_sym_platform_token1] = ACTIONS(716),
    [aux_sym__repository_start_token1] = ACTIONS(714),
    [aux_sym__repository_start_token4] = ACTIONS(718),
    [aux_sym__repository_start_token6] = ACTIONS(718),
    [aux_sym__repository_start_token8] = ACTIONS(720),
    [aux_sym__repository_start_token10] = ACTIONS(720),
    [aux_sym__repository_start_token12] = ACTIONS(722),
    [aux_sym__repository_start_token14] = ACTIONS(722),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [224] = {
    [sym_as_name] = STATE(194),
    [anon_sym_DOLLAR] = ACTIONS(724),
    [aux_sym_platform_token1] = ACTIONS(726),
    [aux_sym__repository_start_token1] = ACTIONS(724),
    [aux_sym__repository_start_token4] = ACTIONS(728),
    [aux_sym__repository_start_token6] = ACTIONS(728),
    [aux_sym__repository_start_token8] = ACTIONS(730),
    [aux_sym__repository_start_token10] = ACTIONS(730),
    [aux_sym__repository_start_token12] = ACTIONS(732),
    [aux_sym__repository_start_token14] = ACTIONS(732),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [225] = {
    [sym_as_name] = STATE(172),
    [anon_sym_DOLLAR] = ACTIONS(724),
    [aux_sym_platform_token1] = ACTIONS(726),
    [aux_sym__repository_start_token1] = ACTIONS(724),
    [aux_sym__repository_start_token4] = ACTIONS(728),
    [aux_sym__repository_start_token6] = ACTIONS(728),
    [aux_sym__repository_start_token8] = ACTIONS(730),
    [aux_sym__repository_start_token10] = ACTIONS(730),
    [aux_sym__repository_start_token12] = ACTIONS(732),
    [aux_sym__repository_start_token14] = ACTIONS(732),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [226] = {
    [sym_as_name] = STATE(196),
    [anon_sym_DOLLAR] = ACTIONS(724),
    [aux_sym_platform_token1] = ACTIONS(726),
    [aux_sym__repository_start_token1] = ACTIONS(724),
    [aux_sym__repository_start_token4] = ACTIONS(728),
    [aux_sym__repository_start_token6] = ACTIONS(728),
    [aux_sym__repository_start_token8] = ACTIONS(730),
    [aux_sym__repository_start_token10] = ACTIONS(730),
    [aux_sym__repository_start_token12] = ACTIONS(732),
    [aux_sym__repository_start_token14] = ACTIONS(732),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [227] = {
    [sym_tag] = STATE(126),
    [anon_sym_DOLLAR] = ACTIONS(734),
    [aux_sym_platform_token1] = ACTIONS(736),
    [aux_sym__repository_start_token1] = ACTIONS(734),
    [aux_sym__repository_start_token4] = ACTIONS(738),
    [aux_sym__repository_start_token6] = ACTIONS(738),
    [aux_sym__repository_start_token8] = ACTIONS(740),
    [aux_sym__repository_start_token10] = ACTIONS(740),
    [aux_sym__repository_start_token12] = ACTIONS(742),
    [aux_sym__repository_start_token14] = ACTIONS(742),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [228] = {
    [sym_as_name] = STATE(157),
    [anon_sym_DOLLAR] = ACTIONS(724),
    [aux_sym_platform_token1] = ACTIONS(726),
    [aux_sym__repository_start_token1] = ACTIONS(724),
    [aux_sym__repository_start_token4] = ACTIONS(728),
    [aux_sym__repository_start_token6] = ACTIONS(728),
    [aux_sym__repository_start_token8] = ACTIONS(730),
    [aux_sym__repository_start_token10] = ACTIONS(730),
    [aux_sym__repository_start_token12] = ACTIONS(732),
    [aux_sym__repository_start_token14] = ACTIONS(732),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [229] = {
    [sym_as_name] = STATE(195),
    [anon_sym_DOLLAR] = ACTIONS(724),
    [aux_sym_platform_token1] = ACTIONS(726),
    [aux_sym__repository_start_token1] = ACTIONS(724),
    [aux_sym__repository_start_token4] = ACTIONS(728),
    [aux_sym__repository_start_token6] = ACTIONS(728),
    [aux_sym__repository_start_token8] = ACTIONS(730),
    [aux_sym__repository_start_token10] = ACTIONS(730),
    [aux_sym__repository_start_token12] = ACTIONS(732),
    [aux_sym__repository_start_token14] = ACTIONS(732),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [230] = {
    [sym_as_name] = STATE(191),
    [anon_sym_DOLLAR] = ACTIONS(724),
    [aux_sym_platform_token1] = ACTIONS(726),
    [aux_sym__repository_start_token1] = ACTIONS(724),
    [aux_sym__repository_start_token4] = ACTIONS(728),
    [aux_sym__repository_start_token6] = ACTIONS(728),
    [aux_sym__repository_start_token8] = ACTIONS(730),
    [aux_sym__repository_start_token10] = ACTIONS(730),
    [aux_sym__repository_start_token12] = ACTIONS(732),
    [aux_sym__repository_start_token14] = ACTIONS(732),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [231] = {
    [sym_tag] = STATE(132),
    [anon_sym_DOLLAR] = ACTIONS(734),
    [aux_sym_platform_token1] = ACTIONS(736),
    [aux_sym__repository_start_token1] = ACTIONS(734),
    [aux_sym__repository_start_token4] = ACTIONS(738),
    [aux_sym__repository_start_token6] = ACTIONS(738),
    [aux_sym__repository_start_token8] = ACTIONS(740),
    [aux_sym__repository_start_token10] = ACTIONS(740),
    [aux_sym__repository_start_token12] = ACTIONS(742),
    [aux_sym__repository_start_token14] = ACTIONS(742),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [232] = {
    [sym_tag] = STATE(130),
    [anon_sym_DOLLAR] = ACTIONS(734),
    [aux_sym_platform_token1] = ACTIONS(736),
    [aux_sym__repository_start_token1] = ACTIONS(734),
    [aux_sym__repository_start_token4] = ACTIONS(738),
    [aux_sym__repository_start_token6] = ACTIONS(738),
    [aux_sym__repository_start_token8] = ACTIONS(740),
    [aux_sym__repository_start_token10] = ACTIONS(740),
    [aux_sym__repository_start_token12] = ACTIONS(742),
    [aux_sym__repository_start_token14] = ACTIONS(742),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [233] = {
    [sym_digest] = STATE(139),
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
  [234] = {
    [anon_sym_DOLLAR] = ACTIONS(744),
    [aux_sym_platform_token1] = ACTIONS(746),
    [aux_sym__repository_start_token1] = ACTIONS(744),
    [aux_sym__repository_start_token4] = ACTIONS(744),
    [aux_sym__repository_start_token6] = ACTIONS(744),
    [aux_sym__repository_start_token8] = ACTIONS(744),
    [aux_sym__repository_start_token10] = ACTIONS(744),
    [aux_sym__repository_start_token12] = ACTIONS(744),
    [aux_sym__repository_start_token14] = ACTIONS(744),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [235] = {
    [anon_sym_DOLLAR] = ACTIONS(748),
    [aux_sym_platform_token1] = ACTIONS(750),
    [aux_sym__repository_start_token1] = ACTIONS(748),
    [aux_sym__repository_start_token4] = ACTIONS(748),
    [aux_sym__repository_start_token6] = ACTIONS(748),
    [aux_sym__repository_start_token8] = ACTIONS(748),
    [aux_sym__repository_start_token10] = ACTIONS(748),
    [aux_sym__repository_start_token12] = ACTIONS(748),
    [aux_sym__repository_start_token14] = ACTIONS(748),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [236] = {
    [anon_sym_DOLLAR] = ACTIONS(752),
    [aux_sym_platform_token1] = ACTIONS(754),
    [aux_sym__repository_start_token1] = ACTIONS(752),
    [aux_sym__repository_start_token4] = ACTIONS(752),
    [aux_sym__repository_start_token6] = ACTIONS(752),
    [aux_sym__repository_start_token8] = ACTIONS(752),
    [aux_sym__repository_start_token10] = ACTIONS(752),
    [aux_sym__repository_start_token12] = ACTIONS(752),
    [aux_sym__repository_start_token14] = ACTIONS(752),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [237] = {
    [sym__port_spec] = STATE(413),
    [sym_mapped_port] = STATE(413),
    [sym__port] = STATE(360),
    [sym_port] = STATE(375),
    [sym_port_range] = STATE(375),
    [sym__port_part] = STATE(333),
    [anon_sym_DQUOTE] = ACTIONS(756),
    [anon_sym_DOLLAR] = ACTIONS(758),
    [aux_sym__port_part_token1] = ACTIONS(760),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [238] = {
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
  [239] = {
    [anon_sym_DOLLAR] = ACTIONS(762),
    [aux_sym_platform_token1] = ACTIONS(764),
    [aux_sym__repository_start_token1] = ACTIONS(762),
    [aux_sym__repository_start_token4] = ACTIONS(762),
    [aux_sym__repository_start_token6] = ACTIONS(762),
    [aux_sym__repository_start_token8] = ACTIONS(762),
    [aux_sym__repository_start_token10] = ACTIONS(762),
    [aux_sym__repository_start_token12] = ACTIONS(762),
    [aux_sym__repository_start_token14] = ACTIONS(762),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [240] = {
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
  [241] = {
    [anon_sym_DOLLAR] = ACTIONS(766),
    [aux_sym_platform_token1] = ACTIONS(768),
    [aux_sym__repository_start_token1] = ACTIONS(766),
    [aux_sym__repository_start_token4] = ACTIONS(766),
    [aux_sym__repository_start_token6] = ACTIONS(766),
    [aux_sym__repository_start_token8] = ACTIONS(766),
    [aux_sym__repository_start_token10] = ACTIONS(766),
    [aux_sym__repository_start_token12] = ACTIONS(766),
    [aux_sym__repository_start_token14] = ACTIONS(766),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [242] = {
    [anon_sym_DOLLAR] = ACTIONS(770),
    [aux_sym_platform_token1] = ACTIONS(772),
    [aux_sym__repository_start_token1] = ACTIONS(770),
    [aux_sym__repository_start_token4] = ACTIONS(770),
    [aux_sym__repository_start_token6] = ACTIONS(770),
    [aux_sym__repository_start_token8] = ACTIONS(770),
    [aux_sym__repository_start_token10] = ACTIONS(770),
    [aux_sym__repository_start_token12] = ACTIONS(770),
    [aux_sym__repository_start_token14] = ACTIONS(770),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [243] = {
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
  [244] = {
    [anon_sym_DOLLAR] = ACTIONS(774),
    [aux_sym_platform_token1] = ACTIONS(776),
    [aux_sym__repository_start_token1] = ACTIONS(774),
    [aux_sym__repository_start_token4] = ACTIONS(774),
    [aux_sym__repository_start_token6] = ACTIONS(774),
    [aux_sym__repository_start_token8] = ACTIONS(774),
    [aux_sym__repository_start_token10] = ACTIONS(774),
    [aux_sym__repository_start_token12] = ACTIONS(774),
    [aux_sym__repository_start_token14] = ACTIONS(774),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [245] = {
    [anon_sym_DOLLAR] = ACTIONS(778),
    [aux_sym_platform_token1] = ACTIONS(780),
    [aux_sym__repository_start_token1] = ACTIONS(778),
    [aux_sym__repository_start_token4] = ACTIONS(778),
    [aux_sym__repository_start_token6] = ACTIONS(778),
    [aux_sym__repository_start_token8] = ACTIONS(778),
    [aux_sym__repository_start_token10] = ACTIONS(778),
    [aux_sym__repository_start_token12] = ACTIONS(778),
    [aux_sym__repository_start_token14] = ACTIONS(778),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [246] = {
    [anon_sym_DOLLAR] = ACTIONS(782),
    [aux_sym_platform_token1] = ACTIONS(784),
    [aux_sym__repository_start_token1] = ACTIONS(782),
    [aux_sym__repository_start_token4] = ACTIONS(782),
    [aux_sym__repository_start_token6] = ACTIONS(782),
    [aux_sym__repository_start_token8] = ACTIONS(782),
    [aux_sym__repository_start_token10] = ACTIONS(782),
    [aux_sym__repository_start_token12] = ACTIONS(782),
    [aux_sym__repository_start_token14] = ACTIONS(782),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [anon_sym_DOLLAR] = ACTIONS(786),
    [aux_sym_platform_token1] = ACTIONS(788),
    [aux_sym__repository_start_token1] = ACTIONS(786),
    [aux_sym__repository_start_token4] = ACTIONS(786),
    [aux_sym__repository_start_token6] = ACTIONS(786),
    [aux_sym__repository_start_token8] = ACTIONS(786),
    [aux_sym__repository_start_token10] = ACTIONS(786),
    [aux_sym__repository_start_token12] = ACTIONS(786),
    [aux_sym__repository_start_token14] = ACTIONS(786),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [anon_sym_DOLLAR] = ACTIONS(790),
    [aux_sym_platform_token1] = ACTIONS(792),
    [aux_sym__repository_start_token1] = ACTIONS(790),
    [aux_sym__repository_start_token4] = ACTIONS(790),
    [aux_sym__repository_start_token6] = ACTIONS(790),
    [aux_sym__repository_start_token8] = ACTIONS(790),
    [aux_sym__repository_start_token10] = ACTIONS(790),
    [aux_sym__repository_start_token12] = ACTIONS(790),
    [aux_sym__repository_start_token14] = ACTIONS(790),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [anon_sym_DOLLAR] = ACTIONS(794),
    [aux_sym_platform_token1] = ACTIONS(796),
    [aux_sym__repository_start_token1] = ACTIONS(794),
    [aux_sym__repository_start_token4] = ACTIONS(794),
    [aux_sym__repository_start_token6] = ACTIONS(794),
    [aux_sym__repository_start_token8] = ACTIONS(794),
    [aux_sym__repository_start_token10] = ACTIONS(794),
    [aux_sym__repository_start_token12] = ACTIONS(794),
    [aux_sym__repository_start_token14] = ACTIONS(794),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [250] = {
    [sym__port] = STATE(177),
    [sym_port] = STATE(177),
    [sym_port_range] = STATE(177),
    [sym__port_part] = STATE(59),
    [anon_sym_DQUOTE] = ACTIONS(798),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [251] = {
    [aux_sym__json_string] = STATE(309),
    [aux_sym_json_array_repeat1] = STATE(351),
    [anon_sym_DQUOTE] = ACTIONS(800),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(804),
    [aux_sym__json_string_token1] = ACTIONS(806),
    [sym__json_escape_sequence] = ACTIONS(808),
  },
  [252] = {
    [sym__port] = STATE(104),
    [sym_port] = STATE(104),
    [sym_port_range] = STATE(104),
    [sym__port_part] = STATE(59),
    [anon_sym_DQUOTE] = ACTIONS(798),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [253] = {
    [sym__port] = STATE(409),
    [sym_port] = STATE(409),
    [sym_port_range] = STATE(409),
    [sym__port_part] = STATE(333),
    [anon_sym_DQUOTE] = ACTIONS(756),
    [anon_sym_DOLLAR] = ACTIONS(758),
    [aux_sym__port_part_token1] = ACTIONS(760),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [254] = {
    [sym_hc_command] = STATE(178),
    [aux_sym__anything] = STATE(116),
    [sym_json_array] = STATE(174),
    [sym__anything_or_json_array] = STATE(174),
    [aux_sym__anything_token1] = ACTIONS(810),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(812),
  },
  [255] = {
    [aux_sym__repository_start_repeat2] = STATE(255),
    [anon_sym_SLASH] = ACTIONS(137),
    [aux_sym__repository_start_token3] = ACTIONS(139),
    [aux_sym__repository_start_token4] = ACTIONS(814),
    [aux_sym__repository_start_token7] = ACTIONS(814),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [256] = {
    [sym_variable_default_value] = STATE(482),
    [sym_variable_this_or_null] = STATE(482),
    [anon_sym_RBRACE] = ACTIONS(817),
    [anon_sym_COLON_DASH] = ACTIONS(819),
    [anon_sym_COLON_PLUS] = ACTIONS(821),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [257] = {
    [aux_sym__anything] = STATE(116),
    [sym_json_array] = STATE(184),
    [sym__anything_or_json_array] = STATE(184),
    [aux_sym__anything_token1] = ACTIONS(810),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(812),
  },
  [258] = {
    [sym_user_name] = STATE(153),
    [sym_user_id] = STATE(144),
    [anon_sym_DOLLAR] = ACTIONS(823),
    [aux_sym__port_part_token1] = ACTIONS(825),
    [aux_sym_user_name_token1] = ACTIONS(827),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [259] = {
    [sym_template_expr_less_than_equals] = STATE(476),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(276),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(829),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [260] = {
    [sym_variable_default_value] = STATE(452),
    [sym_variable_this_or_null] = STATE(452),
    [anon_sym_RBRACE] = ACTIONS(831),
    [anon_sym_COLON_DASH] = ACTIONS(819),
    [anon_sym_COLON_PLUS] = ACTIONS(821),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [261] = {
    [aux_sym__repository_start_repeat4] = STATE(261),
    [anon_sym_SLASH] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(182),
    [aux_sym__repository_start_token12] = ACTIONS(833),
    [aux_sym__repository_start_token15] = ACTIONS(833),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [262] = {
    [aux_sym__repository_start_repeat3] = STATE(262),
    [anon_sym_SLASH] = ACTIONS(173),
    [aux_sym__repository_start_token3] = ACTIONS(175),
    [aux_sym__repository_start_token8] = ACTIONS(836),
    [aux_sym__repository_start_token11] = ACTIONS(836),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [263] = {
    [aux_sym__repository_start_repeat1] = STATE(269),
    [anon_sym_DOLLAR] = ACTIONS(839),
    [anon_sym_SLASH] = ACTIONS(841),
    [aux_sym__repository_start_token2] = ACTIONS(839),
    [aux_sym__repository_start_token3] = ACTIONS(843),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [264] = {
    [aux_sym__repository_start_repeat2] = STATE(301),
    [anon_sym_SLASH] = ACTIONS(841),
    [aux_sym__repository_start_token3] = ACTIONS(843),
    [aux_sym__repository_start_token4] = ACTIONS(845),
    [aux_sym__repository_start_token7] = ACTIONS(845),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [265] = {
    [aux_sym__repository_start_repeat3] = STATE(300),
    [anon_sym_SLASH] = ACTIONS(841),
    [aux_sym__repository_start_token3] = ACTIONS(843),
    [aux_sym__repository_start_token8] = ACTIONS(847),
    [aux_sym__repository_start_token11] = ACTIONS(847),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [266] = {
    [aux_sym__repository_start_repeat4] = STATE(299),
    [anon_sym_SLASH] = ACTIONS(841),
    [aux_sym__repository_start_token3] = ACTIONS(843),
    [aux_sym__repository_start_token12] = ACTIONS(849),
    [aux_sym__repository_start_token15] = ACTIONS(849),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [267] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(267),
    [aux_sym__repository_start_token13] = ACTIONS(851),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(853),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(853),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(853),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [268] = {
    [sym_template_expr_less_than_equals] = STATE(470),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(276),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(829),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [269] = {
    [aux_sym__repository_start_repeat1] = STATE(269),
    [anon_sym_DOLLAR] = ACTIONS(856),
    [anon_sym_SLASH] = ACTIONS(156),
    [aux_sym__repository_start_token2] = ACTIONS(856),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [270] = {
    [sym_template_expr_less_than_equals] = STATE(464),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(276),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(829),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [271] = {
    [sym_template_expr_less_than_equals] = STATE(408),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(276),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(829),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [272] = {
    [sym_port] = STATE(458),
    [sym_port_range] = STATE(458),
    [sym__port_part] = STATE(333),
    [anon_sym_DOLLAR] = ACTIONS(758),
    [aux_sym__port_part_token1] = ACTIONS(760),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [273] = {
    [sym_variable_default_value] = STATE(484),
    [sym_variable_this_or_null] = STATE(484),
    [anon_sym_RBRACE] = ACTIONS(859),
    [anon_sym_COLON_DASH] = ACTIONS(819),
    [anon_sym_COLON_PLUS] = ACTIONS(821),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [274] = {
    [aux_sym__anything] = STATE(116),
    [sym_json_array] = STATE(166),
    [sym__anything_or_json_array] = STATE(166),
    [aux_sym__anything_token1] = ACTIONS(810),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(812),
  },
  [275] = {
    [aux_sym__repository_start_repeat1] = STATE(263),
    [anon_sym_DOLLAR] = ACTIONS(839),
    [anon_sym_SLASH] = ACTIONS(861),
    [aux_sym__repository_start_token2] = ACTIONS(839),
    [aux_sym__repository_start_token3] = ACTIONS(863),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [276] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(267),
    [aux_sym__repository_start_token13] = ACTIONS(865),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(867),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [277] = {
    [sym_variable_default_value] = STATE(480),
    [sym_variable_this_or_null] = STATE(480),
    [anon_sym_RBRACE] = ACTIONS(869),
    [anon_sym_COLON_DASH] = ACTIONS(819),
    [anon_sym_COLON_PLUS] = ACTIONS(821),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [278] = {
    [sym_template_expr_less_than_equals] = STATE(433),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(276),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(829),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [279] = {
    [sym_variable_default_value] = STATE(478),
    [sym_variable_this_or_null] = STATE(478),
    [anon_sym_RBRACE] = ACTIONS(871),
    [anon_sym_COLON_DASH] = ACTIONS(819),
    [anon_sym_COLON_PLUS] = ACTIONS(821),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [280] = {
    [sym_variable_default_value] = STATE(473),
    [sym_variable_this_or_null] = STATE(473),
    [anon_sym_RBRACE] = ACTIONS(873),
    [anon_sym_COLON_DASH] = ACTIONS(819),
    [anon_sym_COLON_PLUS] = ACTIONS(821),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [281] = {
    [sym_template_expr_less_than_equals] = STATE(425),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(276),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(829),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [282] = {
    [aux_sym__anything] = STATE(116),
    [sym_json_array] = STATE(170),
    [sym__anything_or_json_array] = STATE(170),
    [aux_sym__anything_token1] = ACTIONS(810),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(812),
  },
  [283] = {
    [sym_port_protocol] = STATE(327),
    [anon_sym_DQUOTE] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [anon_sym_SLASH] = ACTIONS(875),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [284] = {
    [sym_template_expr_less_than_equals] = STATE(489),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(276),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(829),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [285] = {
    [sym_variable_default_value] = STATE(467),
    [sym_variable_this_or_null] = STATE(467),
    [anon_sym_RBRACE] = ACTIONS(877),
    [anon_sym_COLON_DASH] = ACTIONS(819),
    [anon_sym_COLON_PLUS] = ACTIONS(821),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [286] = {
    [sym_template_expr_less_than_equals] = STATE(419),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(276),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(829),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [287] = {
    [sym_variable_default_value] = STATE(461),
    [sym_variable_this_or_null] = STATE(461),
    [anon_sym_RBRACE] = ACTIONS(879),
    [anon_sym_COLON_DASH] = ACTIONS(819),
    [anon_sym_COLON_PLUS] = ACTIONS(821),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [288] = {
    [sym_port_protocol] = STATE(330),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [anon_sym_SLASH] = ACTIONS(875),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [289] = {
    [aux_sym_cmd_token1] = ACTIONS(881),
    [anon_sym_DASH_DASHinterval] = ACTIONS(881),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(881),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(881),
    [anon_sym_DASH_DASHretires] = ACTIONS(881),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [290] = {
    [sym_template_expr_less_than_equals] = STATE(389),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(276),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(829),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [291] = {
    [aux_sym_cmd_token1] = ACTIONS(883),
    [anon_sym_DASH_DASHinterval] = ACTIONS(883),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(883),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(883),
    [anon_sym_DASH_DASHretires] = ACTIONS(883),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [292] = {
    [aux_sym_cmd_token1] = ACTIONS(885),
    [anon_sym_DASH_DASHinterval] = ACTIONS(885),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(885),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(885),
    [anon_sym_DASH_DASHretires] = ACTIONS(885),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [293] = {
    [aux_sym_cmd_token1] = ACTIONS(887),
    [anon_sym_DASH_DASHinterval] = ACTIONS(887),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(887),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(887),
    [anon_sym_DASH_DASHretires] = ACTIONS(887),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [294] = {
    [sym_port] = STATE(407),
    [sym_port_range] = STATE(407),
    [sym__port_part] = STATE(333),
    [anon_sym_DOLLAR] = ACTIONS(758),
    [aux_sym__port_part_token1] = ACTIONS(760),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [295] = {
    [aux_sym_cmd_token1] = ACTIONS(889),
    [anon_sym_DASH_DASHinterval] = ACTIONS(889),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(889),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(889),
    [anon_sym_DASH_DASHretires] = ACTIONS(889),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [296] = {
    [aux_sym_cmd_token1] = ACTIONS(891),
    [anon_sym_DASH_DASHinterval] = ACTIONS(891),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(891),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(891),
    [anon_sym_DASH_DASHretires] = ACTIONS(891),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [297] = {
    [aux_sym_cmd_token1] = ACTIONS(893),
    [anon_sym_DASH_DASHinterval] = ACTIONS(893),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(893),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(893),
    [anon_sym_DASH_DASHretires] = ACTIONS(893),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [298] = {
    [aux_sym_cmd_token1] = ACTIONS(895),
    [anon_sym_DASH_DASHinterval] = ACTIONS(895),
    [anon_sym_DASH_DASHtimeout] = ACTIONS(895),
    [anon_sym_DASH_DASHstart_DASHperiod] = ACTIONS(895),
    [anon_sym_DASH_DASHretires] = ACTIONS(895),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [299] = {
    [aux_sym__repository_start_repeat4] = STATE(261),
    [anon_sym_SLASH] = ACTIONS(897),
    [aux_sym__repository_start_token3] = ACTIONS(899),
    [aux_sym__repository_start_token12] = ACTIONS(849),
    [aux_sym__repository_start_token15] = ACTIONS(849),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [300] = {
    [aux_sym__repository_start_repeat3] = STATE(262),
    [anon_sym_SLASH] = ACTIONS(897),
    [aux_sym__repository_start_token3] = ACTIONS(899),
    [aux_sym__repository_start_token8] = ACTIONS(847),
    [aux_sym__repository_start_token11] = ACTIONS(847),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [301] = {
    [aux_sym__repository_start_repeat2] = STATE(255),
    [anon_sym_SLASH] = ACTIONS(897),
    [aux_sym__repository_start_token3] = ACTIONS(899),
    [aux_sym__repository_start_token4] = ACTIONS(845),
    [aux_sym__repository_start_token7] = ACTIONS(845),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [302] = {
    [sym_template_expr_less_than_equals] = STATE(479),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(276),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(829),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(829),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [303] = {
    [anon_sym_DOLLAR] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [aux_sym__repository_start_token2] = ACTIONS(207),
    [aux_sym__repository_start_token3] = ACTIONS(209),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [304] = {
    [anon_sym_SLASH] = ACTIONS(199),
    [aux_sym__repository_start_token3] = ACTIONS(201),
    [aux_sym__repository_start_token12] = ACTIONS(199),
    [aux_sym__repository_start_token15] = ACTIONS(199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [305] = {
    [anon_sym_SLASH] = ACTIONS(195),
    [aux_sym__repository_start_token3] = ACTIONS(197),
    [aux_sym__repository_start_token8] = ACTIONS(195),
    [aux_sym__repository_start_token11] = ACTIONS(195),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [306] = {
    [aux_sym__paths] = STATE(124),
    [sym_json_array] = STATE(197),
    [sym_path] = ACTIONS(901),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(812),
  },
  [307] = {
    [sym_label_value] = STATE(140),
    [anon_sym_DQUOTE] = ACTIONS(903),
    [aux_sym_label_value_token1] = ACTIONS(905),
    [aux_sym_label_value_token2] = ACTIONS(905),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [308] = {
    [aux_sym__json_string] = STATE(311),
    [anon_sym_DQUOTE] = ACTIONS(907),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(909),
    [sym__json_escape_sequence] = ACTIONS(909),
  },
  [309] = {
    [aux_sym__json_string] = STATE(311),
    [anon_sym_DQUOTE] = ACTIONS(911),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(909),
    [sym__json_escape_sequence] = ACTIONS(909),
  },
  [310] = {
    [aux_sym__json_string] = STATE(308),
    [anon_sym_DQUOTE] = ACTIONS(913),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(915),
    [sym__json_escape_sequence] = ACTIONS(915),
  },
  [311] = {
    [aux_sym__json_string] = STATE(311),
    [anon_sym_DQUOTE] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [aux_sym__json_string_token1] = ACTIONS(919),
    [sym__json_escape_sequence] = ACTIONS(919),
  },
  [312] = {
    [anon_sym_SLASH] = ACTIONS(191),
    [aux_sym__repository_start_token3] = ACTIONS(193),
    [aux_sym__repository_start_token4] = ACTIONS(191),
    [aux_sym__repository_start_token7] = ACTIONS(191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [313] = {
    [anon_sym_DOLLAR] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(156),
    [aux_sym__repository_start_token2] = ACTIONS(156),
    [aux_sym__repository_start_token3] = ACTIONS(158),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [314] = {
    [aux_sym__paths] = STATE(127),
    [sym_json_array] = STATE(162),
    [sym_path] = ACTIONS(901),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(812),
  },
  [315] = {
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [316] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [317] = {
    [aux_sym__paths] = STATE(129),
    [sym_json_array] = STATE(169),
    [sym_path] = ACTIONS(901),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(812),
  },
  [318] = {
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [aux_sym__repository_start_token2] = ACTIONS(187),
    [aux_sym__repository_start_token3] = ACTIONS(189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [319] = {
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [320] = {
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [aux_sym__repository_start_token2] = ACTIONS(203),
    [aux_sym__repository_start_token3] = ACTIONS(205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [321] = {
    [anon_sym_DOLLAR] = ACTIONS(922),
    [aux_sym_port_protocol_token1] = ACTIONS(924),
    [aux_sym_port_protocol_token2] = ACTIONS(924),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [322] = {
    [sym_docker_variable] = STATE(77),
    [anon_sym_LBRACE] = ACTIONS(926),
    [sym__docker_variable] = ACTIONS(928),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [323] = {
    [sym_docker_variable] = STATE(109),
    [anon_sym_LBRACE] = ACTIONS(926),
    [sym__docker_variable] = ACTIONS(928),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [324] = {
    [sym_docker_variable] = STATE(90),
    [anon_sym_LBRACE] = ACTIONS(930),
    [sym__docker_variable] = ACTIONS(932),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [325] = {
    [aux_sym_json_array_repeat1] = STATE(358),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(934),
  },
  [326] = {
    [sym_signal_name] = STATE(182),
    [sym_signal_num] = ACTIONS(936),
    [aux_sym_signal_name_token1] = ACTIONS(938),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [327] = {
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [328] = {
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_DASH] = ACTIONS(299),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [329] = {
    [sym_docker_variable] = STATE(288),
    [anon_sym_LBRACE] = ACTIONS(940),
    [sym__docker_variable] = ACTIONS(942),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [330] = {
    [anon_sym_DQUOTE] = ACTIONS(271),
    [anon_sym_COLON] = ACTIONS(271),
    [anon_sym_DASH] = ACTIONS(271),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [331] = {
    [aux_sym_label_value_repeat1] = STATE(331),
    [anon_sym_DQUOTE] = ACTIONS(944),
    [aux_sym_label_value_token3] = ACTIONS(946),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [332] = {
    [aux_sym__labels] = STATE(95),
    [sym_label_pair] = STATE(95),
    [sym_label_key] = ACTIONS(377),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [333] = {
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_COLON] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(949),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [334] = {
    [sym_docker_variable] = STATE(56),
    [anon_sym_LBRACE] = ACTIONS(951),
    [sym__docker_variable] = ACTIONS(953),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [335] = {
    [sym__port_part] = STATE(365),
    [anon_sym_DOLLAR] = ACTIONS(758),
    [aux_sym__port_part_token1] = ACTIONS(760),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [336] = {
    [anon_sym_DOLLAR] = ACTIONS(955),
    [aux_sym_workdir_token2] = ACTIONS(957),
    [aux_sym_workdir_token3] = ACTIONS(955),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [sym_docker_variable] = STATE(313),
    [anon_sym_LBRACE] = ACTIONS(959),
    [sym__docker_variable] = ACTIONS(961),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [sym_docker_variable] = STATE(69),
    [anon_sym_LBRACE] = ACTIONS(963),
    [sym__docker_variable] = ACTIONS(965),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [339] = {
    [sym_docker_variable] = STATE(275),
    [anon_sym_LBRACE] = ACTIONS(959),
    [sym__docker_variable] = ACTIONS(961),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [340] = {
    [aux_sym_json_array_repeat1] = STATE(325),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(967),
  },
  [341] = {
    [sym_docker_variable] = STATE(110),
    [anon_sym_LBRACE] = ACTIONS(930),
    [sym__docker_variable] = ACTIONS(932),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [342] = {
    [sym_docker_variable] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(963),
    [sym__docker_variable] = ACTIONS(965),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [343] = {
    [aux_sym_json_array_repeat1] = STATE(344),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(969),
  },
  [344] = {
    [aux_sym_json_array_repeat1] = STATE(358),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(967),
  },
  [345] = {
    [anon_sym_DOLLAR] = ACTIONS(971),
    [aux_sym_port_protocol_token1] = ACTIONS(973),
    [aux_sym_port_protocol_token2] = ACTIONS(973),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [346] = {
    [aux_sym_label_value_repeat1] = STATE(331),
    [anon_sym_DQUOTE] = ACTIONS(975),
    [aux_sym_label_value_token3] = ACTIONS(977),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [347] = {
    [sym_docker_variable] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(963),
    [sym__docker_variable] = ACTIONS(965),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [348] = {
    [sym_platform] = STATE(202),
    [anon_sym_DOLLAR] = ACTIONS(979),
    [aux_sym_platform_token1] = ACTIONS(981),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [349] = {
    [anon_sym_DQUOTE] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [350] = {
    [sym_docker_variable] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(983),
    [sym__docker_variable] = ACTIONS(985),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [351] = {
    [aux_sym_json_array_repeat1] = STATE(358),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_RBRACK] = ACTIONS(969),
  },
  [352] = {
    [sym_docker_variable] = STATE(31),
    [anon_sym_LBRACE] = ACTIONS(951),
    [sym__docker_variable] = ACTIONS(953),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [353] = {
    [sym_docker_variable] = STATE(328),
    [anon_sym_LBRACE] = ACTIONS(940),
    [sym__docker_variable] = ACTIONS(942),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [354] = {
    [sym__port_part] = STATE(80),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym__port_part_token1] = ACTIONS(114),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [355] = {
    [sym_docker_variable] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(963),
    [sym__docker_variable] = ACTIONS(965),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [356] = {
    [sym_docker_variable] = STATE(70),
    [anon_sym_LBRACE] = ACTIONS(983),
    [sym__docker_variable] = ACTIONS(985),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [357] = {
    [sym_docker_variable] = STATE(235),
    [anon_sym_LBRACE] = ACTIONS(987),
    [sym__docker_variable] = ACTIONS(989),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [358] = {
    [aux_sym_json_array_repeat1] = STATE(358),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(991),
    [anon_sym_RBRACK] = ACTIONS(994),
  },
  [359] = {
    [sym_docker_variable] = STATE(165),
    [anon_sym_LBRACE] = ACTIONS(983),
    [sym__docker_variable] = ACTIONS(985),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [360] = {
    [anon_sym_DQUOTE] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(996),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [361] = {
    [anon_sym_DQUOTE] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [362] = {
    [sym_hc_interval] = STATE(291),
    [aux_sym_hc_interval_token1] = ACTIONS(998),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [363] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(994),
    [anon_sym_RBRACK] = ACTIONS(994),
  },
  [364] = {
    [aux_sym_label_value_repeat1] = STATE(346),
    [aux_sym_label_value_token3] = ACTIONS(1000),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [365] = {
    [anon_sym_DQUOTE] = ACTIONS(328),
    [anon_sym_COLON] = ACTIONS(328),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [366] = {
    [sym_user_group_id] = STATE(192),
    [aux_sym__port_part_token1] = ACTIONS(1002),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [367] = {
    [sym_user_group] = STATE(192),
    [aux_sym_user_name_token1] = ACTIONS(1004),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [368] = {
    [sym_arg_default] = STATE(176),
    [aux_sym_workdir_token2] = ACTIONS(1006),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [369] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1008),
    [anon_sym_RBRACK] = ACTIONS(1008),
  },
  [370] = {
    [sym_hc_retries] = STATE(298),
    [aux_sym__port_part_token1] = ACTIONS(1010),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [371] = {
    [sym__json_value] = STATE(363),
    [anon_sym_DQUOTE] = ACTIONS(1012),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [372] = {
    [sym_hc_start_period] = STATE(296),
    [aux_sym_hc_interval_token1] = ACTIONS(1014),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [373] = {
    [sym_hc_timeout] = STATE(293),
    [aux_sym_hc_interval_token1] = ACTIONS(1016),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [374] = {
    [aux_sym__anything] = STATE(120),
    [aux_sym__anything_token1] = ACTIONS(1018),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [375] = {
    [anon_sym_DQUOTE] = ACTIONS(1020),
    [anon_sym_COLON] = ACTIONS(1023),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [376] = {
    [sym_json_array] = STATE(181),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [sym__json_prefix] = ACTIONS(812),
  },
  [377] = {
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(1025),
    [anon_sym_RBRACK] = ACTIONS(1025),
  },
  [378] = {
    [aux_sym__anything] = STATE(119),
    [aux_sym__anything_token1] = ACTIONS(1027),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(5),
  },
  [379] = {
    [aux_sym_from_token2] = ACTIONS(1029),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [380] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1031),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [381] = {
    [aux_sym_from_token2] = ACTIONS(1033),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [382] = {
    [aux_sym_from_token2] = ACTIONS(1035),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [383] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1037),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [384] = {
    [anon_sym_SLASH] = ACTIONS(897),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [385] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1039),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [386] = {
    [aux_sym_from_token2] = ACTIONS(1041),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [387] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1043),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [388] = {
    [aux_sym_from_token2] = ACTIONS(1045),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [389] = {
    [aux_sym__repository_start_token13] = ACTIONS(1047),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [390] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1049),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [391] = {
    [aux_sym__repository_start_token9] = ACTIONS(1051),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [392] = {
    [aux_sym__repository_start_token5] = ACTIONS(1053),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [393] = {
    [sym_template_expr_curly_braces] = ACTIONS(1055),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [394] = {
    [sym_template_expr_percent_signs] = ACTIONS(1057),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [395] = {
    [anon_sym_SLASH] = ACTIONS(1059),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [396] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1061),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [397] = {
    [anon_sym_EQ] = ACTIONS(1063),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [398] = {
    [aux_sym_from_token2] = ACTIONS(1065),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [399] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1067),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [400] = {
    [anon_sym_EQ] = ACTIONS(1069),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [401] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1071),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [402] = {
    [anon_sym_EQ] = ACTIONS(1073),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [403] = {
    [sym_template_expr_percent_signs] = ACTIONS(1075),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [404] = {
    [sym_template_expr_curly_braces] = ACTIONS(1077),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [405] = {
    [anon_sym_EQ] = ACTIONS(1079),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [406] = {
    [aux_sym_signal_name_token2] = ACTIONS(1081),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [407] = {
    [anon_sym_DQUOTE] = ACTIONS(1083),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [408] = {
    [aux_sym__repository_start_token13] = ACTIONS(1085),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [409] = {
    [anon_sym_DQUOTE] = ACTIONS(396),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [410] = {
    [aux_sym__repository_start_token9] = ACTIONS(1087),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [411] = {
    [aux_sym__repository_start_token5] = ACTIONS(1089),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [412] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1091),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [413] = {
    [anon_sym_DQUOTE] = ACTIONS(1093),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [414] = {
    [aux_sym_from_token2] = ACTIONS(1095),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [415] = {
    [anon_sym_RBRACE] = ACTIONS(1097),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [416] = {
    [anon_sym_RBRACE] = ACTIONS(1099),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [417] = {
    [sym__docker_variable] = ACTIONS(1101),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [418] = {
    [sym_arg_name] = ACTIONS(1103),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [419] = {
    [aux_sym__repository_start_token13] = ACTIONS(1105),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [420] = {
    [aux_sym__repository_start_token9] = ACTIONS(1107),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [421] = {
    [ts_builtin_sym_end] = ACTIONS(1109),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [422] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1111),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [423] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1113),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [424] = {
    [aux_sym__repository_start_token5] = ACTIONS(1115),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [425] = {
    [aux_sym__repository_start_token13] = ACTIONS(1117),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [426] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1119),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [427] = {
    [aux_sym__repository_start_token9] = ACTIONS(1121),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [428] = {
    [aux_sym__repository_start_token5] = ACTIONS(1123),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [429] = {
    [anon_sym_SLASH] = ACTIONS(841),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [430] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1125),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [431] = {
    [aux_sym__repository_start_token5] = ACTIONS(1127),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [432] = {
    [aux_sym__repository_start_token9] = ACTIONS(1129),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [433] = {
    [aux_sym__repository_start_token13] = ACTIONS(1131),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [434] = {
    [sym_template_expr_percent_signs] = ACTIONS(1133),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [435] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1135),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [436] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1137),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [437] = {
    [sym_template_expr_curly_braces] = ACTIONS(1139),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [438] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1141),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [439] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1143),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [440] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1145),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [441] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1147),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [442] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1149),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [443] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1151),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [444] = {
    [sym_template_expr_curly_braces] = ACTIONS(1153),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [445] = {
    [sym_template_expr_percent_signs] = ACTIONS(1155),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [446] = {
    [anon_sym_EQ] = ACTIONS(1157),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [447] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1159),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [448] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1161),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [449] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1163),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [450] = {
    [anon_sym_SLASH] = ACTIONS(1165),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [451] = {
    [sym_template_expr_curly_braces] = ACTIONS(1167),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [452] = {
    [anon_sym_RBRACE] = ACTIONS(1169),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [453] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1171),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [454] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1173),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [455] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1175),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [456] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1177),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [457] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(1179),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [458] = {
    [anon_sym_DQUOTE] = ACTIONS(1181),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [459] = {
    [sym_template_expr_percent_signs] = ACTIONS(1183),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [460] = {
    [sym__space] = ACTIONS(3),
    [sym__space_no_newline] = ACTIONS(1185),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [461] = {
    [anon_sym_RBRACE] = ACTIONS(1187),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [462] = {
    [aux_sym__repository_start_token5] = ACTIONS(1189),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [463] = {
    [aux_sym__repository_start_token9] = ACTIONS(1191),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [464] = {
    [aux_sym__repository_start_token13] = ACTIONS(1193),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [465] = {
    [sym_template_expr_percent_signs] = ACTIONS(1195),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [466] = {
    [sym_template_expr_curly_braces] = ACTIONS(1197),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [467] = {
    [anon_sym_RBRACE] = ACTIONS(1199),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [468] = {
    [aux_sym__repository_start_token5] = ACTIONS(1201),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [469] = {
    [aux_sym__repository_start_token9] = ACTIONS(1203),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [470] = {
    [aux_sym__repository_start_token13] = ACTIONS(1205),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [471] = {
    [aux_sym_from_token2] = ACTIONS(1207),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [472] = {
    [sym_template_expr_percent_signs] = ACTIONS(1209),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [473] = {
    [anon_sym_RBRACE] = ACTIONS(1211),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [474] = {
    [aux_sym__repository_start_token5] = ACTIONS(1213),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [475] = {
    [aux_sym__repository_start_token9] = ACTIONS(1215),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [476] = {
    [aux_sym__repository_start_token13] = ACTIONS(1217),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [477] = {
    [sym_template_expr_curly_braces] = ACTIONS(1219),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [478] = {
    [anon_sym_RBRACE] = ACTIONS(1221),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [479] = {
    [aux_sym__repository_start_token13] = ACTIONS(1223),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [480] = {
    [anon_sym_RBRACE] = ACTIONS(1225),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [481] = {
    [aux_sym__repository_start_token9] = ACTIONS(1227),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [482] = {
    [anon_sym_RBRACE] = ACTIONS(1229),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [483] = {
    [aux_sym__repository_start_token5] = ACTIONS(1231),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [484] = {
    [anon_sym_RBRACE] = ACTIONS(1233),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [485] = {
    [aux_sym_from_token2] = ACTIONS(1235),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [486] = {
    [sym__docker_variable] = ACTIONS(1237),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [487] = {
    [sym_template_expr_curly_braces] = ACTIONS(1239),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [488] = {
    [sym_template_expr_percent_signs] = ACTIONS(1241),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [489] = {
    [aux_sym__repository_start_token13] = ACTIONS(1243),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [490] = {
    [sym__docker_variable] = ACTIONS(1245),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [491] = {
    [sym_template_expr_curly_braces] = ACTIONS(1247),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [492] = {
    [sym_template_expr_percent_signs] = ACTIONS(1249),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [493] = {
    [aux_sym__repository_start_token9] = ACTIONS(1251),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [494] = {
    [sym__docker_variable] = ACTIONS(1253),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [495] = {
    [sym_template_expr_curly_braces] = ACTIONS(1255),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [496] = {
    [sym_template_expr_percent_signs] = ACTIONS(1257),
    [sym__space] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [497] = {
    [aux_sym__repository_start_token5] = ACTIONS(1259),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [sym_line_continuation] = ACTIONS(5),
  },
  [498] = {
    [sym__docker_variable] = ACTIONS(1261),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [499] = {
    [sym__docker_variable] = ACTIONS(1263),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [500] = {
    [sym__docker_variable] = ACTIONS(1265),
    [sym__space] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [501] = {
    [sym__docker_variable] = ACTIONS(1267),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(401),
  [11] = {.count = 1, .reusable = true}, SHIFT(455),
  [13] = {.count = 1, .reusable = true}, SHIFT(454),
  [15] = {.count = 1, .reusable = true}, SHIFT(453),
  [17] = {.count = 1, .reusable = true}, SHIFT(449),
  [19] = {.count = 1, .reusable = true}, SHIFT(448),
  [21] = {.count = 1, .reusable = true}, SHIFT(447),
  [23] = {.count = 1, .reusable = true}, SHIFT(443),
  [25] = {.count = 1, .reusable = true}, SHIFT(442),
  [27] = {.count = 1, .reusable = true}, SHIFT(441),
  [29] = {.count = 1, .reusable = true}, SHIFT(440),
  [31] = {.count = 1, .reusable = true}, SHIFT(439),
  [33] = {.count = 1, .reusable = true}, SHIFT(438),
  [35] = {.count = 1, .reusable = true}, SHIFT(436),
  [37] = {.count = 1, .reusable = true}, SHIFT(435),
  [39] = {.count = 1, .reusable = true}, SHIFT(426),
  [41] = {.count = 1, .reusable = true}, SHIFT(423),
  [43] = {.count = 1, .reusable = true}, SHIFT(422),
  [45] = {.count = 1, .reusable = true}, SHIFT(158),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(401),
  [54] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(455),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(454),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(453),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(449),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(448),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(447),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(443),
  [75] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(442),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(441),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(440),
  [84] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(439),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(438),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(436),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(435),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(426),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(423),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(422),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(158),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 3),
  [110] = {.count = 1, .reusable = true}, SHIFT(237),
  [112] = {.count = 1, .reusable = true}, SHIFT(350),
  [114] = {.count = 1, .reusable = true}, SHIFT(37),
  [116] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(237),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(350),
  [124] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(37),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [131] = {.count = 1, .reusable = true}, SHIFT(355),
  [133] = {.count = 1, .reusable = true}, SHIFT(236),
  [135] = {.count = 1, .reusable = false}, SHIFT(63),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(444),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [148] = {.count = 1, .reusable = true}, SHIFT(241),
  [150] = {.count = 1, .reusable = false}, SHIFT(68),
  [152] = {.count = 1, .reusable = true}, SHIFT(271),
  [154] = {.count = 1, .reusable = true}, SHIFT(434),
  [156] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [158] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(355),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [167] = {.count = 1, .reusable = true}, SHIFT(239),
  [169] = {.count = 1, .reusable = false}, SHIFT(66),
  [171] = {.count = 1, .reusable = true}, SHIFT(444),
  [173] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(434),
  [180] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(271),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [191] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [197] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [199] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [201] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [211] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(488),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(334),
  [217] = {.count = 1, .reusable = false}, SHIFT(106),
  [219] = {.count = 1, .reusable = true}, SHIFT(488),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(487),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [226] = {.count = 1, .reusable = true}, SHIFT(345),
  [228] = {.count = 1, .reusable = true}, SHIFT(334),
  [230] = {.count = 1, .reusable = false}, SHIFT(115),
  [232] = {.count = 1, .reusable = false}, SHIFT(93),
  [234] = {.count = 1, .reusable = true}, SHIFT(487),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(270),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [241] = {.count = 1, .reusable = true}, SHIFT(270),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [247] = {.count = 1, .reusable = false}, SHIFT(121),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [253] = {.count = 1, .reusable = false}, SHIFT(118),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [259] = {.count = 1, .reusable = false}, SHIFT(131),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [265] = {.count = 1, .reusable = false}, SHIFT(143),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [269] = {.count = 1, .reusable = true}, SHIFT(354),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [277] = {.count = 1, .reusable = false}, SHIFT(152),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [283] = {.count = 1, .reusable = true}, SHIFT(242),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [289] = {.count = 1, .reusable = true}, SHIFT(247),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [297] = {.count = 1, .reusable = false}, SHIFT(141),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [305] = {.count = 1, .reusable = false}, SHIFT(154),
  [307] = {.count = 1, .reusable = true}, SHIFT(259),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [311] = {.count = 1, .reusable = true}, SHIFT(252),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 4),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 4),
  [317] = {.count = 1, .reusable = false}, SHIFT(323),
  [319] = {.count = 1, .reusable = true}, SHIFT(323),
  [321] = {.count = 1, .reusable = false}, SHIFT(187),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(259),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [330] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(496),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 5),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 5),
  [337] = {.count = 1, .reusable = false}, SHIFT(159),
  [339] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(495),
  [342] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(341),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [349] = {.count = 1, .reusable = false}, SHIFT(179),
  [351] = {.count = 1, .reusable = true}, SHIFT(496),
  [353] = {.count = 1, .reusable = true}, SHIFT(495),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [359] = {.count = 1, .reusable = true}, SHIFT(341),
  [361] = {.count = 1, .reusable = false}, SHIFT(167),
  [363] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2),
  [365] = {.count = 1, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2),
  [367] = {.count = 2, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(323),
  [370] = {.count = 2, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(323),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [377] = {.count = 1, .reusable = true}, SHIFT(405),
  [379] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(aux_sym__labels, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(aux_sym__labels, 2),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym__labels, 2), SHIFT_REPEAT(405),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [390] = {.count = 1, .reusable = true}, SHIFT(231),
  [392] = {.count = 1, .reusable = true}, SHIFT(211),
  [394] = {.count = 1, .reusable = false}, SHIFT(379),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [400] = {.count = 1, .reusable = true}, SHIFT(221),
  [402] = {.count = 1, .reusable = true}, SHIFT(209),
  [404] = {.count = 1, .reusable = false}, SHIFT(471),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [408] = {.count = 1, .reusable = true}, SHIFT(232),
  [410] = {.count = 1, .reusable = true}, SHIFT(210),
  [412] = {.count = 1, .reusable = false}, SHIFT(414),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [416] = {.count = 1, .reusable = true}, SHIFT(227),
  [418] = {.count = 1, .reusable = true}, SHIFT(206),
  [420] = {.count = 1, .reusable = false}, SHIFT(485),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [426] = {.count = 1, .reusable = false}, SHIFT(133),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 3),
  [432] = {.count = 1, .reusable = false}, SHIFT(123),
  [434] = {.count = 1, .reusable = false}, SHIFT(163),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_env, 3),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_env, 3),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 5),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 1),
  [448] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [450] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [452] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(123),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 3),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_volume, 3),
  [459] = {.count = 1, .reusable = false}, SHIFT(125),
  [461] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 1),
  [463] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 1),
  [465] = {.count = 1, .reusable = false}, SHIFT(151),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_add, 3),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_add, 3),
  [471] = {.count = 1, .reusable = true}, REDUCE(aux_sym__paths, 2),
  [473] = {.count = 1, .reusable = false}, REDUCE(aux_sym__paths, 2),
  [475] = {.count = 2, .reusable = false}, REDUCE(aux_sym__paths, 2), SHIFT_REPEAT(125),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_copy, 3),
  [480] = {.count = 1, .reusable = false}, REDUCE(sym_copy, 3),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [484] = {.count = 1, .reusable = true}, SHIFT(207),
  [486] = {.count = 1, .reusable = false}, SHIFT(388),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [490] = {.count = 1, .reusable = true}, SHIFT(208),
  [492] = {.count = 1, .reusable = false}, SHIFT(398),
  [494] = {.count = 2, .reusable = false}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(133),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 1),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 1),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [503] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 1),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [507] = {.count = 1, .reusable = false}, SHIFT(381),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_label_pair, 3),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_label_pair, 3),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 5),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [519] = {.count = 1, .reusable = true}, SHIFT(366),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 3),
  [523] = {.count = 1, .reusable = true}, SHIFT(368),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [527] = {.count = 1, .reusable = false}, SHIFT(386),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [531] = {.count = 1, .reusable = false}, SHIFT(382),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_label_value, 3),
  [537] = {.count = 1, .reusable = false}, REDUCE(sym_label_value, 3),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [541] = {.count = 1, .reusable = true}, SHIFT(367),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_onbuild, 3),
  [547] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 6),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 4),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_user, 4),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 3),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 5),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_hc_command, 1),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_arg_default, 1),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 5),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym__hc_command, 3),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 3),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 3),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 2),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 4),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 3),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_healthcheck, 3),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_from, 13),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_from, 15),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_from, 14),
  [607] = {.count = 1, .reusable = true}, SHIFT(348),
  [609] = {.count = 1, .reusable = true}, SHIFT(347),
  [611] = {.count = 1, .reusable = false}, SHIFT(65),
  [613] = {.count = 1, .reusable = true}, SHIFT(393),
  [615] = {.count = 1, .reusable = true}, SHIFT(394),
  [617] = {.count = 1, .reusable = true}, SHIFT(278),
  [619] = {.count = 1, .reusable = true}, SHIFT(396),
  [621] = {.count = 1, .reusable = true}, SHIFT(189),
  [623] = {.count = 1, .reusable = true}, SHIFT(397),
  [625] = {.count = 1, .reusable = true}, SHIFT(400),
  [627] = {.count = 1, .reusable = true}, SHIFT(446),
  [629] = {.count = 1, .reusable = true}, SHIFT(402),
  [631] = {.count = 1, .reusable = true}, SHIFT(250),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(339),
  [636] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(450),
  [639] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(451),
  [642] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(459),
  [645] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(302),
  [648] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(339),
  [651] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(450),
  [654] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(451),
  [657] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(459),
  [660] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(302),
  [663] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(339),
  [666] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(450),
  [669] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(451),
  [672] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(459),
  [675] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(302),
  [678] = {.count = 1, .reusable = true}, SHIFT(215),
  [680] = {.count = 1, .reusable = true}, SHIFT(338),
  [682] = {.count = 1, .reusable = false}, SHIFT(137),
  [684] = {.count = 1, .reusable = true}, SHIFT(466),
  [686] = {.count = 1, .reusable = true}, SHIFT(465),
  [688] = {.count = 1, .reusable = true}, SHIFT(286),
  [690] = {.count = 1, .reusable = true}, SHIFT(218),
  [692] = {.count = 1, .reusable = true}, SHIFT(214),
  [694] = {.count = 1, .reusable = true}, SHIFT(219),
  [696] = {.count = 1, .reusable = true}, SHIFT(216),
  [698] = {.count = 1, .reusable = true}, SHIFT(233),
  [700] = {.count = 1, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2),
  [702] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(397),
  [705] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(400),
  [708] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(446),
  [711] = {.count = 2, .reusable = true}, REDUCE(aux_sym_healthcheck_repeat1, 2), SHIFT_REPEAT(402),
  [714] = {.count = 1, .reusable = true}, SHIFT(352),
  [716] = {.count = 1, .reusable = false}, SHIFT(113),
  [718] = {.count = 1, .reusable = true}, SHIFT(437),
  [720] = {.count = 1, .reusable = true}, SHIFT(445),
  [722] = {.count = 1, .reusable = true}, SHIFT(284),
  [724] = {.count = 1, .reusable = true}, SHIFT(324),
  [726] = {.count = 1, .reusable = false}, SHIFT(161),
  [728] = {.count = 1, .reusable = true}, SHIFT(404),
  [730] = {.count = 1, .reusable = true}, SHIFT(403),
  [732] = {.count = 1, .reusable = true}, SHIFT(290),
  [734] = {.count = 1, .reusable = true}, SHIFT(342),
  [736] = {.count = 1, .reusable = false}, SHIFT(122),
  [738] = {.count = 1, .reusable = true}, SHIFT(477),
  [740] = {.count = 1, .reusable = true}, SHIFT(472),
  [742] = {.count = 1, .reusable = true}, SHIFT(281),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [746] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [750] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [752] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [754] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [756] = {.count = 1, .reusable = true}, SHIFT(294),
  [758] = {.count = 1, .reusable = true}, SHIFT(329),
  [760] = {.count = 1, .reusable = true}, SHIFT(283),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [764] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [766] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [768] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [770] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [772] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [774] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [776] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [780] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [782] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [784] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [788] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [790] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [792] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [796] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [798] = {.count = 1, .reusable = true}, SHIFT(272),
  [800] = {.count = 1, .reusable = true}, SHIFT(343),
  [802] = {.count = 1, .reusable = true}, SHIFT(371),
  [804] = {.count = 1, .reusable = true}, SHIFT(183),
  [806] = {.count = 1, .reusable = false}, SHIFT(309),
  [808] = {.count = 1, .reusable = true}, SHIFT(309),
  [810] = {.count = 1, .reusable = false}, SHIFT(116),
  [812] = {.count = 1, .reusable = true}, SHIFT(251),
  [814] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(491),
  [817] = {.count = 1, .reusable = true}, SHIFT(303),
  [819] = {.count = 1, .reusable = true}, SHIFT(457),
  [821] = {.count = 1, .reusable = true}, SHIFT(456),
  [823] = {.count = 1, .reusable = true}, SHIFT(359),
  [825] = {.count = 1, .reusable = true}, SHIFT(148),
  [827] = {.count = 1, .reusable = true}, SHIFT(150),
  [829] = {.count = 1, .reusable = true}, SHIFT(276),
  [831] = {.count = 1, .reusable = true}, SHIFT(43),
  [833] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(268),
  [836] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(492),
  [839] = {.count = 1, .reusable = true}, SHIFT(337),
  [841] = {.count = 1, .reusable = true}, SHIFT(246),
  [843] = {.count = 1, .reusable = false}, SHIFT(384),
  [845] = {.count = 1, .reusable = true}, SHIFT(491),
  [847] = {.count = 1, .reusable = true}, SHIFT(492),
  [849] = {.count = 1, .reusable = true}, SHIFT(268),
  [851] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [853] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(267),
  [856] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(337),
  [859] = {.count = 1, .reusable = true}, SHIFT(96),
  [861] = {.count = 1, .reusable = true}, SHIFT(249),
  [863] = {.count = 1, .reusable = false}, SHIFT(429),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_template_expr_less_than_equals, 1),
  [867] = {.count = 1, .reusable = true}, SHIFT(267),
  [869] = {.count = 1, .reusable = true}, SHIFT(51),
  [871] = {.count = 1, .reusable = true}, SHIFT(240),
  [873] = {.count = 1, .reusable = true}, SHIFT(316),
  [875] = {.count = 1, .reusable = true}, SHIFT(321),
  [877] = {.count = 1, .reusable = true}, SHIFT(112),
  [879] = {.count = 1, .reusable = true}, SHIFT(25),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_hc_interval, 1),
  [883] = {.count = 1, .reusable = true}, REDUCE(sym__hc_interval, 3),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym_hc_timeout, 1),
  [887] = {.count = 1, .reusable = true}, REDUCE(sym__hc_timeout, 3),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym_hc_start_period, 1),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym__hc_start_period, 3),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym_hc_retries, 1),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym__hc_retries, 3),
  [897] = {.count = 1, .reusable = true}, SHIFT(245),
  [899] = {.count = 1, .reusable = false}, SHIFT(395),
  [901] = {.count = 1, .reusable = true}, SHIFT(125),
  [903] = {.count = 1, .reusable = false}, SHIFT(364),
  [905] = {.count = 1, .reusable = true}, SHIFT(135),
  [907] = {.count = 1, .reusable = true}, SHIFT(369),
  [909] = {.count = 1, .reusable = true}, SHIFT(311),
  [911] = {.count = 1, .reusable = true}, SHIFT(340),
  [913] = {.count = 1, .reusable = true}, SHIFT(377),
  [915] = {.count = 1, .reusable = true}, SHIFT(308),
  [917] = {.count = 1, .reusable = true}, REDUCE(aux_sym__json_string, 2),
  [919] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_string, 2), SHIFT_REPEAT(311),
  [922] = {.count = 1, .reusable = true}, SHIFT(353),
  [924] = {.count = 1, .reusable = true}, SHIFT(349),
  [926] = {.count = 1, .reusable = true}, SHIFT(490),
  [928] = {.count = 1, .reusable = true}, SHIFT(114),
  [930] = {.count = 1, .reusable = true}, SHIFT(501),
  [932] = {.count = 1, .reusable = true}, SHIFT(97),
  [934] = {.count = 1, .reusable = true}, SHIFT(171),
  [936] = {.count = 1, .reusable = true}, SHIFT(182),
  [938] = {.count = 1, .reusable = true}, SHIFT(406),
  [940] = {.count = 1, .reusable = true}, SHIFT(494),
  [942] = {.count = 1, .reusable = true}, SHIFT(315),
  [944] = {.count = 1, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2),
  [946] = {.count = 2, .reusable = true}, REDUCE(aux_sym_label_value_repeat1, 2), SHIFT_REPEAT(331),
  [949] = {.count = 1, .reusable = true}, SHIFT(335),
  [951] = {.count = 1, .reusable = true}, SHIFT(499),
  [953] = {.count = 1, .reusable = true}, SHIFT(40),
  [955] = {.count = 1, .reusable = false}, SHIFT(322),
  [957] = {.count = 1, .reusable = false}, SHIFT(186),
  [959] = {.count = 1, .reusable = true}, SHIFT(500),
  [961] = {.count = 1, .reusable = true}, SHIFT(318),
  [963] = {.count = 1, .reusable = true}, SHIFT(486),
  [965] = {.count = 1, .reusable = true}, SHIFT(19),
  [967] = {.count = 1, .reusable = true}, SHIFT(185),
  [969] = {.count = 1, .reusable = true}, SHIFT(168),
  [971] = {.count = 1, .reusable = true}, SHIFT(356),
  [973] = {.count = 1, .reusable = true}, SHIFT(67),
  [975] = {.count = 1, .reusable = true}, SHIFT(149),
  [977] = {.count = 1, .reusable = true}, SHIFT(331),
  [979] = {.count = 1, .reusable = true}, SHIFT(357),
  [981] = {.count = 1, .reusable = true}, SHIFT(248),
  [983] = {.count = 1, .reusable = true}, SHIFT(417),
  [985] = {.count = 1, .reusable = true}, SHIFT(46),
  [987] = {.count = 1, .reusable = true}, SHIFT(498),
  [989] = {.count = 1, .reusable = true}, SHIFT(243),
  [991] = {.count = 2, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(371),
  [994] = {.count = 1, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2),
  [996] = {.count = 1, .reusable = true}, SHIFT(253),
  [998] = {.count = 1, .reusable = true}, SHIFT(289),
  [1000] = {.count = 1, .reusable = true}, SHIFT(346),
  [1002] = {.count = 1, .reusable = true}, SHIFT(188),
  [1004] = {.count = 1, .reusable = true}, SHIFT(193),
  [1006] = {.count = 1, .reusable = true}, SHIFT(175),
  [1008] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 3),
  [1010] = {.count = 1, .reusable = true}, SHIFT(297),
  [1012] = {.count = 1, .reusable = true}, SHIFT(310),
  [1014] = {.count = 1, .reusable = true}, SHIFT(295),
  [1016] = {.count = 1, .reusable = true}, SHIFT(292),
  [1018] = {.count = 1, .reusable = true}, SHIFT(120),
  [1020] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(78),
  [1023] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [1025] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 2),
  [1027] = {.count = 1, .reusable = true}, SHIFT(119),
  [1029] = {.count = 1, .reusable = true}, SHIFT(412),
  [1031] = {.count = 1, .reusable = true}, SHIFT(220),
  [1033] = {.count = 1, .reusable = true}, SHIFT(387),
  [1035] = {.count = 1, .reusable = true}, SHIFT(383),
  [1037] = {.count = 1, .reusable = true}, SHIFT(230),
  [1039] = {.count = 1, .reusable = true}, SHIFT(217),
  [1041] = {.count = 1, .reusable = true}, SHIFT(390),
  [1043] = {.count = 1, .reusable = true}, SHIFT(229),
  [1045] = {.count = 1, .reusable = true}, SHIFT(380),
  [1047] = {.count = 1, .reusable = true}, SHIFT(75),
  [1049] = {.count = 1, .reusable = true}, SHIFT(224),
  [1051] = {.count = 1, .reusable = true}, SHIFT(88),
  [1053] = {.count = 1, .reusable = true}, SHIFT(89),
  [1055] = {.count = 1, .reusable = true}, SHIFT(431),
  [1057] = {.count = 1, .reusable = true}, SHIFT(432),
  [1059] = {.count = 1, .reusable = true}, SHIFT(244),
  [1061] = {.count = 1, .reusable = true}, SHIFT(254),
  [1063] = {.count = 1, .reusable = true}, SHIFT(362),
  [1065] = {.count = 1, .reusable = true}, SHIFT(385),
  [1067] = {.count = 1, .reusable = true}, SHIFT(228),
  [1069] = {.count = 1, .reusable = true}, SHIFT(373),
  [1071] = {.count = 1, .reusable = true}, SHIFT(314),
  [1073] = {.count = 1, .reusable = true}, SHIFT(370),
  [1075] = {.count = 1, .reusable = true}, SHIFT(391),
  [1077] = {.count = 1, .reusable = true}, SHIFT(392),
  [1079] = {.count = 1, .reusable = true}, SHIFT(307),
  [1081] = {.count = 1, .reusable = true}, SHIFT(164),
  [1083] = {.count = 1, .reusable = true}, SHIFT(361),
  [1085] = {.count = 1, .reusable = true}, SHIFT(22),
  [1087] = {.count = 1, .reusable = true}, SHIFT(21),
  [1089] = {.count = 1, .reusable = true}, SHIFT(20),
  [1091] = {.count = 1, .reusable = true}, SHIFT(225),
  [1093] = {.count = 1, .reusable = true}, SHIFT(98),
  [1095] = {.count = 1, .reusable = true}, SHIFT(399),
  [1097] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [1099] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [1101] = {.count = 1, .reusable = true}, SHIFT(260),
  [1103] = {.count = 1, .reusable = true}, SHIFT(145),
  [1105] = {.count = 1, .reusable = true}, SHIFT(64),
  [1107] = {.count = 1, .reusable = true}, SHIFT(74),
  [1109] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [1111] = {.count = 1, .reusable = true}, SHIFT(336),
  [1113] = {.count = 1, .reusable = true}, SHIFT(306),
  [1115] = {.count = 1, .reusable = true}, SHIFT(73),
  [1117] = {.count = 1, .reusable = true}, SHIFT(44),
  [1119] = {.count = 1, .reusable = true}, SHIFT(258),
  [1121] = {.count = 1, .reusable = true}, SHIFT(45),
  [1123] = {.count = 1, .reusable = true}, SHIFT(48),
  [1125] = {.count = 1, .reusable = true}, SHIFT(226),
  [1127] = {.count = 1, .reusable = true}, SHIFT(15),
  [1129] = {.count = 1, .reusable = true}, SHIFT(10),
  [1131] = {.count = 1, .reusable = true}, SHIFT(9),
  [1133] = {.count = 1, .reusable = true}, SHIFT(410),
  [1135] = {.count = 1, .reusable = true}, SHIFT(326),
  [1137] = {.count = 1, .reusable = true}, SHIFT(376),
  [1139] = {.count = 1, .reusable = true}, SHIFT(497),
  [1141] = {.count = 1, .reusable = true}, SHIFT(257),
  [1143] = {.count = 1, .reusable = true}, SHIFT(6),
  [1145] = {.count = 1, .reusable = true}, SHIFT(378),
  [1147] = {.count = 1, .reusable = true}, SHIFT(332),
  [1149] = {.count = 1, .reusable = true}, SHIFT(199),
  [1151] = {.count = 1, .reusable = true}, SHIFT(198),
  [1153] = {.count = 1, .reusable = true}, SHIFT(411),
  [1155] = {.count = 1, .reusable = true}, SHIFT(493),
  [1157] = {.count = 1, .reusable = true}, SHIFT(372),
  [1159] = {.count = 1, .reusable = true}, SHIFT(200),
  [1161] = {.count = 1, .reusable = true}, SHIFT(374),
  [1163] = {.count = 1, .reusable = true}, SHIFT(282),
  [1165] = {.count = 1, .reusable = true}, SHIFT(234),
  [1167] = {.count = 1, .reusable = true}, SHIFT(483),
  [1169] = {.count = 1, .reusable = true}, SHIFT(47),
  [1171] = {.count = 1, .reusable = true}, SHIFT(317),
  [1173] = {.count = 1, .reusable = true}, SHIFT(274),
  [1175] = {.count = 1, .reusable = true}, SHIFT(418),
  [1177] = {.count = 1, .reusable = true}, SHIFT(415),
  [1179] = {.count = 1, .reusable = true}, SHIFT(416),
  [1181] = {.count = 1, .reusable = true}, SHIFT(78),
  [1183] = {.count = 1, .reusable = true}, SHIFT(481),
  [1185] = {.count = 1, .reusable = true}, SHIFT(222),
  [1187] = {.count = 1, .reusable = true}, SHIFT(24),
  [1189] = {.count = 1, .reusable = true}, SHIFT(57),
  [1191] = {.count = 1, .reusable = true}, SHIFT(55),
  [1193] = {.count = 1, .reusable = true}, SHIFT(50),
  [1195] = {.count = 1, .reusable = true}, SHIFT(420),
  [1197] = {.count = 1, .reusable = true}, SHIFT(424),
  [1199] = {.count = 1, .reusable = true}, SHIFT(111),
  [1201] = {.count = 1, .reusable = true}, SHIFT(312),
  [1203] = {.count = 1, .reusable = true}, SHIFT(305),
  [1205] = {.count = 1, .reusable = true}, SHIFT(304),
  [1207] = {.count = 1, .reusable = true}, SHIFT(460),
  [1209] = {.count = 1, .reusable = true}, SHIFT(427),
  [1211] = {.count = 1, .reusable = true}, SHIFT(319),
  [1213] = {.count = 1, .reusable = true}, SHIFT(103),
  [1215] = {.count = 1, .reusable = true}, SHIFT(101),
  [1217] = {.count = 1, .reusable = true}, SHIFT(99),
  [1219] = {.count = 1, .reusable = true}, SHIFT(428),
  [1221] = {.count = 1, .reusable = true}, SHIFT(238),
  [1223] = {.count = 1, .reusable = true}, SHIFT(266),
  [1225] = {.count = 1, .reusable = true}, SHIFT(49),
  [1227] = {.count = 1, .reusable = true}, SHIFT(265),
  [1229] = {.count = 1, .reusable = true}, SHIFT(320),
  [1231] = {.count = 1, .reusable = true}, SHIFT(264),
  [1233] = {.count = 1, .reusable = true}, SHIFT(94),
  [1235] = {.count = 1, .reusable = true}, SHIFT(430),
  [1237] = {.count = 1, .reusable = true}, SHIFT(287),
  [1239] = {.count = 1, .reusable = true}, SHIFT(462),
  [1241] = {.count = 1, .reusable = true}, SHIFT(463),
  [1243] = {.count = 1, .reusable = true}, SHIFT(38),
  [1245] = {.count = 1, .reusable = true}, SHIFT(285),
  [1247] = {.count = 1, .reusable = true}, SHIFT(468),
  [1249] = {.count = 1, .reusable = true}, SHIFT(469),
  [1251] = {.count = 1, .reusable = true}, SHIFT(36),
  [1253] = {.count = 1, .reusable = true}, SHIFT(280),
  [1255] = {.count = 1, .reusable = true}, SHIFT(474),
  [1257] = {.count = 1, .reusable = true}, SHIFT(475),
  [1259] = {.count = 1, .reusable = true}, SHIFT(33),
  [1261] = {.count = 1, .reusable = true}, SHIFT(279),
  [1263] = {.count = 1, .reusable = true}, SHIFT(277),
  [1265] = {.count = 1, .reusable = true}, SHIFT(256),
  [1267] = {.count = 1, .reusable = true}, SHIFT(273),
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
