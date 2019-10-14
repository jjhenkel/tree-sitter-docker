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
#define STATE_COUNT 360
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 12

enum {
  aux_sym_stopsignal_token1 = 1,
  aux_sym_signal_name_token1 = 2,
  aux_sym_signal_name_token2 = 3,
  sym_signal_num = 4,
  aux_sym_shell_token1 = 5,
  aux_sym_volume_token1 = 6,
  aux_sym_path_token1 = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_path_token2 = 9,
  aux_sym_workdir_token1 = 10,
  aux_sym_workdir_token2 = 11,
  anon_sym_DOLLAR = 12,
  aux_sym_workdir_token3 = 13,
  aux_sym_workdir_token4 = 14,
  aux_sym_workdir_token5 = 15,
  aux_sym_user_token1 = 16,
  anon_sym_COLON = 17,
  aux_sym_user_name_token1 = 18,
  aux_sym_user_id_token1 = 19,
  aux_sym_cmd_token1 = 20,
  aux_sym_entrypoint_token1 = 21,
  aux_sym_run_token1 = 22,
  aux_sym_maintainer_token1 = 23,
  aux_sym_expose_token1 = 24,
  anon_sym_DASH = 25,
  anon_sym_SLASH = 26,
  aux_sym_port_protocol_token1 = 27,
  aux_sym_port_protocol_token2 = 28,
  aux_sym_from_token1 = 29,
  anon_sym_DASH_DASHplatform_EQ = 30,
  anon_sym_AT = 31,
  anon_sym_sha256_COLON = 32,
  aux_sym_from_token2 = 33,
  aux_sym_platform_token1 = 34,
  aux_sym__repository_start_token1 = 35,
  aux_sym__repository_start_token2 = 36,
  aux_sym__repository_start_token3 = 37,
  aux_sym__repository_start_token4 = 38,
  aux_sym__repository_start_token5 = 39,
  aux_sym__repository_start_token6 = 40,
  aux_sym__repository_start_token7 = 41,
  aux_sym__repository_start_token8 = 42,
  aux_sym__repository_start_token9 = 43,
  aux_sym__repository_start_token10 = 44,
  aux_sym__repository_start_token11 = 45,
  aux_sym__repository_start_token12 = 46,
  aux_sym__repository_start_token13 = 47,
  aux_sym__repository_start_token14 = 48,
  aux_sym__repository_start_token15 = 49,
  aux_sym__repository_start_token16 = 50,
  anon_sym_LBRACE = 51,
  anon_sym_RBRACE = 52,
  sym__docker_variable = 53,
  anon_sym_COLON_DASH = 54,
  aux_sym_variable_default_value_token1 = 55,
  anon_sym_COLON_PLUS = 56,
  aux_sym__anything_token1 = 57,
  aux_sym__anything_token2 = 58,
  sym__almost_json_prefix = 59,
  sym__json_prefix = 60,
  sym__not_json_prefix = 61,
  anon_sym_COMMA = 62,
  anon_sym_RBRACK = 63,
  sym__space_no_newline = 64,
  sym_template_expr_curly_braces = 65,
  sym_template_expr_percent_signs = 66,
  aux_sym_template_expr_less_than_equals_token1 = 67,
  aux_sym_template_expr_less_than_equals_token2 = 68,
  aux_sym_template_expr_less_than_equals_token3 = 69,
  sym_comment = 70,
  sym_line_continuation = 71,
  aux_sym__json_string_token1 = 72,
  sym__json_escape_sequence = 73,
  sym_dockerfile = 74,
  sym__directive = 75,
  sym_stopsignal = 76,
  sym_signal_name = 77,
  sym_shell = 78,
  sym_volume = 79,
  sym_path = 80,
  sym_workdir = 81,
  sym_user = 82,
  sym_user_name = 83,
  sym_user_group = 84,
  sym_user_id = 85,
  sym_user_group_id = 86,
  sym_cmd = 87,
  sym_entrypoint = 88,
  sym_run = 89,
  sym_maintainer = 90,
  sym_expose = 91,
  sym__port_spec = 92,
  sym_mapped_port = 93,
  sym_mapped_no_lhs = 94,
  sym__port = 95,
  sym_port = 96,
  sym_port_range = 97,
  sym__port_part = 98,
  sym_port_protocol = 99,
  sym_from = 100,
  sym_platform = 101,
  sym_repository = 102,
  sym__repository_start = 103,
  sym__repository_continued = 104,
  sym_image = 105,
  sym_tag = 106,
  sym_digest = 107,
  sym_as_name = 108,
  sym_docker_variable = 109,
  sym_variable_default_value = 110,
  sym_variable_this_or_null = 111,
  aux_sym__anything = 112,
  sym_json_array = 113,
  sym__anything_or_json_array = 114,
  sym_template_expr_less_than_equals = 115,
  sym__json_value = 116,
  aux_sym__json_string = 117,
  aux_sym_dockerfile_repeat1 = 118,
  aux_sym_volume_repeat1 = 119,
  aux_sym_workdir_repeat1 = 120,
  aux_sym_expose_repeat1 = 121,
  aux_sym_repository_repeat1 = 122,
  aux_sym__repository_start_repeat1 = 123,
  aux_sym__repository_start_repeat2 = 124,
  aux_sym__repository_start_repeat3 = 125,
  aux_sym__repository_start_repeat4 = 126,
  aux_sym_json_array_repeat1 = 127,
  aux_sym_template_expr_less_than_equals_repeat1 = 128,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_stopsignal_token1] = "stopsignal_token1",
  [aux_sym_signal_name_token1] = "signal_name_token1",
  [aux_sym_signal_name_token2] = "signal_name_token2",
  [sym_signal_num] = "signal_num",
  [aux_sym_shell_token1] = "shell_token1",
  [aux_sym_volume_token1] = "volume_token1",
  [aux_sym_path_token1] = "path_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_path_token2] = "path_token2",
  [aux_sym_workdir_token1] = "workdir_token1",
  [aux_sym_workdir_token2] = "workdir_token2",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_workdir_token3] = "workdir_token3",
  [aux_sym_workdir_token4] = "workdir_token4",
  [aux_sym_workdir_token5] = "workdir_token5",
  [aux_sym_user_token1] = "user_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_user_name_token1] = "user_name_token1",
  [aux_sym_user_id_token1] = "user_id_token1",
  [aux_sym_cmd_token1] = "cmd_token1",
  [aux_sym_entrypoint_token1] = "entrypoint_token1",
  [aux_sym_run_token1] = "run_token1",
  [aux_sym_maintainer_token1] = "maintainer_token1",
  [aux_sym_expose_token1] = "expose_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [aux_sym_port_protocol_token1] = "port_protocol_token1",
  [aux_sym_port_protocol_token2] = "port_protocol_token2",
  [aux_sym_from_token1] = "from_token1",
  [anon_sym_DASH_DASHplatform_EQ] = "--platform=",
  [anon_sym_AT] = "@",
  [anon_sym_sha256_COLON] = "sha256:",
  [aux_sym_from_token2] = "from_token2",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__docker_variable] = "_docker_variable",
  [anon_sym_COLON_DASH] = ":-",
  [aux_sym_variable_default_value_token1] = "variable_default_value_token1",
  [anon_sym_COLON_PLUS] = ":+",
  [aux_sym__anything_token1] = "_anything_token1",
  [aux_sym__anything_token2] = "_anything_token2",
  [sym__almost_json_prefix] = "_almost_json_prefix",
  [sym__json_prefix] = "_json_prefix",
  [sym__not_json_prefix] = "_not_json_prefix",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym__space_no_newline] = "_space_no_newline",
  [sym_template_expr_curly_braces] = "template_expr_curly_braces",
  [sym_template_expr_percent_signs] = "template_expr_percent_signs",
  [aux_sym_template_expr_less_than_equals_token1] = "template_expr_less_than_equals_token1",
  [aux_sym_template_expr_less_than_equals_token2] = "template_expr_less_than_equals_token2",
  [aux_sym_template_expr_less_than_equals_token3] = "template_expr_less_than_equals_token3",
  [sym_comment] = "comment",
  [sym_line_continuation] = "line_continuation",
  [aux_sym__json_string_token1] = "_json_string_token1",
  [sym__json_escape_sequence] = "_json_escape_sequence",
  [sym_dockerfile] = "dockerfile",
  [sym__directive] = "_directive",
  [sym_stopsignal] = "stopsignal",
  [sym_signal_name] = "signal_name",
  [sym_shell] = "shell",
  [sym_volume] = "volume",
  [sym_path] = "path",
  [sym_workdir] = "workdir",
  [sym_user] = "user",
  [sym_user_name] = "user_name",
  [sym_user_group] = "user_group",
  [sym_user_id] = "user_id",
  [sym_user_group_id] = "user_group_id",
  [sym_cmd] = "cmd",
  [sym_entrypoint] = "entrypoint",
  [sym_run] = "run",
  [sym_maintainer] = "maintainer",
  [sym_expose] = "expose",
  [sym__port_spec] = "_port_spec",
  [sym_mapped_port] = "mapped_port",
  [sym_mapped_no_lhs] = "mapped_no_lhs",
  [sym__port] = "_port",
  [sym_port] = "port",
  [sym_port_range] = "port_range",
  [sym__port_part] = "_port_part",
  [sym_port_protocol] = "port_protocol",
  [sym_from] = "from",
  [sym_platform] = "platform",
  [sym_repository] = "repository",
  [sym__repository_start] = "_repository_start",
  [sym__repository_continued] = "_repository_continued",
  [sym_image] = "image",
  [sym_tag] = "tag",
  [sym_digest] = "digest",
  [sym_as_name] = "as_name",
  [sym_docker_variable] = "docker_variable",
  [sym_variable_default_value] = "variable_default_value",
  [sym_variable_this_or_null] = "variable_this_or_null",
  [aux_sym__anything] = "_anything",
  [sym_json_array] = "json_array",
  [sym__anything_or_json_array] = "_anything_or_json_array",
  [sym_template_expr_less_than_equals] = "template_expr_less_than_equals",
  [sym__json_value] = "_json_value",
  [aux_sym__json_string] = "_json_string",
  [aux_sym_dockerfile_repeat1] = "dockerfile_repeat1",
  [aux_sym_volume_repeat1] = "volume_repeat1",
  [aux_sym_workdir_repeat1] = "workdir_repeat1",
  [aux_sym_expose_repeat1] = "expose_repeat1",
  [aux_sym_repository_repeat1] = "repository_repeat1",
  [aux_sym__repository_start_repeat1] = "_repository_start_repeat1",
  [aux_sym__repository_start_repeat2] = "_repository_start_repeat2",
  [aux_sym__repository_start_repeat3] = "_repository_start_repeat3",
  [aux_sym__repository_start_repeat4] = "_repository_start_repeat4",
  [aux_sym_json_array_repeat1] = "json_array_repeat1",
  [aux_sym_template_expr_less_than_equals_repeat1] = "template_expr_less_than_equals_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_stopsignal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_signal_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_signal_name_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_signal_num] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_shell_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_volume_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_path_token2] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
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
  [aux_sym_user_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
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
  [aux_sym_cmd_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entrypoint_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_maintainer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
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
  [aux_sym_from_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASHplatform_EQ] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__docker_variable] = {
    .visible = false,
    .named = true,
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
  [aux_sym__anything_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__anything_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__almost_json_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__json_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__not_json_prefix] = {
    .visible = false,
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
  [sym__space_no_newline] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_continuation] = {
    .visible = true,
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
  [sym_stopsignal] = {
    .visible = true,
    .named = true,
  },
  [sym_signal_name] = {
    .visible = true,
    .named = true,
  },
  [sym_shell] = {
    .visible = true,
    .named = true,
  },
  [sym_volume] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_workdir] = {
    .visible = true,
    .named = true,
  },
  [sym_user] = {
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
  [sym_cmd] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint] = {
    .visible = true,
    .named = true,
  },
  [sym_run] = {
    .visible = true,
    .named = true,
  },
  [sym_maintainer] = {
    .visible = true,
    .named = true,
  },
  [sym_expose] = {
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
  [sym_from] = {
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
  [aux_sym__anything] = {
    .visible = false,
    .named = false,
  },
  [sym_json_array] = {
    .visible = true,
    .named = true,
  },
  [sym__anything_or_json_array] = {
    .visible = false,
    .named = true,
  },
  [sym_template_expr_less_than_equals] = {
    .visible = true,
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
  [aux_sym_volume_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workdir_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expose_repeat1] = {
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
  [aux_sym_json_array_repeat1] = {
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

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '%') ADVANCE(543);
      if (lookahead == ',') ADVANCE(624);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S') ADVANCE(95);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(85);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(625);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == '{') ADVANCE(559);
      if (lookahead == '}') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(228);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(237);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(270);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(256);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(588);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(608);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(567);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(615);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(610);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(596);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(598);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(570);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '%') ADVANCE(543);
      if (lookahead == ',') ADVANCE(624);
      if (lookahead == '-') ADVANCE(291);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S') ADVANCE(95);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(85);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(625);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(63);
      if (lookahead == '-') ADVANCE(290);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '}') ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(187);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(162);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(206);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(192);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '%') ADVANCE(543);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '%') ADVANCE(543);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(117);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(425);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(445);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(466);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(469);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(454);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 17:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(425);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(445);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(466);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(474);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(469);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(454);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '=' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 18:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '%') ADVANCE(543);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(393);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(413);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(421);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(416);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(401);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(403);
      if (lookahead == '\\') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '$' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 19:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '%') ADVANCE(543);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(414);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(393);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(413);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(373);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(421);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(416);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(401);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(403);
      if (lookahead == '\\') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 20:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(499);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(519);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(479);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(488);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(522);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(507);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(509);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 21:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(478);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(499);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(519);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(479);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(527);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(488);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(522);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(507);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(509);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 22:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(372);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '/') ADVANCE(292);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(341);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(361);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(321);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(364);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(349);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(351);
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '%' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 23:
      if (lookahead == 0) ADVANCE(145);
      if (lookahead == '#') ADVANCE(372);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == '@') ADVANCE(297);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(341);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(361);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(321);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(364);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(349);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(351);
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          (lookahead < '<' || '?' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(75);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(639);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(556);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(639);
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(554);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(639);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(642);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == '\n') SKIP(43)
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(641);
      if (lookahead == ',') ADVANCE(624);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == ']') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(641);
      if (lookahead != 0) ADVANCE(641);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '%') ADVANCE(65);
      if (lookahead == '?') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(636);
      END_STATE();
    case 35:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(622);
      if (lookahead != 0) ADVANCE(623);
      END_STATE();
    case 36:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '#') ADVANCE(565);
      if (lookahead == '\\') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 37:
      if (lookahead == '\n') SKIP(44)
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(641);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(641);
      if (lookahead != 0) ADVANCE(641);
      END_STATE();
    case 38:
      if (lookahead == '\n') SKIP(38)
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 39:
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(627);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(626);
      END_STATE();
    case 40:
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '\\') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(630);
      END_STATE();
    case 41:
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '#') ADVANCE(633);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(633);
      END_STATE();
    case 42:
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(218);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == ',') ADVANCE(624);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '[') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '%') ADVANCE(545);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '}') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '%') ADVANCE(545);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '%') ADVANCE(543);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(317);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '%') ADVANCE(543);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(317);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead == '{') ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(561);
      if (lookahead == '\\') ADVANCE(561);
      if (lookahead == '{') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(318);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(318);
      END_STATE();
    case 56:
      if (lookahead == '+') ADVANCE(566);
      if (lookahead == '-') ADVANCE(562);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == '5') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == '6') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(298);
      END_STATE();
    case 62:
      if (lookahead == '=') ADVANCE(296);
      END_STATE();
    case 63:
      if (lookahead == '>') ADVANCE(552);
      END_STATE();
    case 64:
      if (lookahead == '>') ADVANCE(552);
      if (lookahead != 0) ADVANCE(637);
      END_STATE();
    case 65:
      if (lookahead == '>') ADVANCE(552);
      if (lookahead != 0) ADVANCE(638);
      END_STATE();
    case 66:
      if (lookahead == 'H') ADVANCE(89);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 75:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead == '"') ADVANCE(621);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 76:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead == '"') ADVANCE(621);
      if (lookahead == '\\') ADVANCE(33);
      END_STATE();
    case 77:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(551);
      END_STATE();
    case 78:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(556);
      END_STATE();
    case 79:
      if (lookahead == '%' ||
          lookahead == '?') ADVANCE(554);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 83:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 85:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 86:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 93:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 94:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(89);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(89);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 97:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 98:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 99:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 100:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 101:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 102:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(295);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 111:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(126);
      END_STATE();
    case 112:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 117:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 121:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 123:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 124:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 126:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 127:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(299);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 141:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 142:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 143:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 144:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(637);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_stopsignal_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_signal_name_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_signal_name_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_signal_num);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_signal_num);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_shell_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_volume_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead == '"') ADVANCE(621);
      if (lookahead == '\\') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(214);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(169);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '#') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_workdir_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == '$') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_workdir_token2);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_workdir_token4);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(268);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(228);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(237);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(270);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(256);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(234);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(273);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_workdir_token5);
      if (lookahead == '$') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_user_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_user_name_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_user_id_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_cmd_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_entrypoint_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_run_token1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_maintainer_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_expose_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_port_protocol_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_port_protocol_token2);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DASH_DASHplatform_EQ);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_sha256_COLON);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_from_token2);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '-') ADVANCE(314);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '2') ADVANCE(302);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '5') ADVANCE(303);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '6') ADVANCE(304);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(296);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == 'h') ADVANCE(308);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(306);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == 't') ADVANCE(309);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_platform_token1);
      if (lookahead == '$') ADVANCE(319);
      if (lookahead == '%') ADVANCE(547);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '{') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(317);
      END_STATE();
    case 318:
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
          lookahead != '}') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__repository_start_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__repository_start_token2);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
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
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
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
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(327);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
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
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '$') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
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
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(419);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
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
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
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
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '%') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(432);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(472);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '=' || '@' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(490);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(495);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(491);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(478);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(492);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(516);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(503);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(485);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(510);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(487);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(504);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(505);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(483);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(478);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(528);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(495);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(478);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(482);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(484);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(478);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(525);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(514);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(480);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(526);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(486);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(524);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(496);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(513);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(523);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(521);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(511);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(512);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(478);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(494);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(508);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(489);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(486);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(484);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(518);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(501);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(500);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__repository_start_token3);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(515);
      if (lookahead == '{') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '%' &&
          lookahead != '/' &&
          lookahead != ':' &&
          (lookahead < '<' || '@' < lookahead) &&
          lookahead != '}') ADVANCE(478);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(532);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__repository_start_token4);
      if (lookahead == '}') ADVANCE(530);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(533);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__repository_start_token5);
      if (lookahead == '}') ADVANCE(534);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(536);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__repository_start_token6);
      if (lookahead == '}') ADVANCE(537);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(539);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__repository_start_token7);
      if (lookahead == '}') ADVANCE(540);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__repository_start_token8);
      if (lookahead == '%') ADVANCE(542);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__repository_start_token9);
      if (lookahead == '%') ADVANCE(544);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__repository_start_token10);
      if (lookahead == '%') ADVANCE(546);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__repository_start_token11);
      if (lookahead == '%') ADVANCE(548);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__repository_start_token12);
      if (lookahead == '=') ADVANCE(550);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__repository_start_token13);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__repository_start_token14);
      if (lookahead == '=') ADVANCE(553);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__repository_start_token15);
      if (lookahead == '=') ADVANCE(555);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__repository_start_token16);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(532);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 561:
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
          lookahead != '}') ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '#') ADVANCE(565);
      if (lookahead == '\\') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_variable_default_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(588);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(608);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(567);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(615);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(577);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(610);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(596);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(574);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(613);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym__anything_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym__anything_token2);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__almost_json_prefix);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__json_prefix);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__not_json_prefix);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(623);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__not_json_prefix);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '' ||
          lookahead == '') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__space_no_newline);
      if (lookahead == '\t' ||
          ('' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '\\') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(630);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(630);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_template_expr_curly_braces);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '#') ADVANCE(633);
      if (lookahead == '\\') ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(633);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_template_expr_percent_signs);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '\\') ADVANCE(635);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(636);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token2);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_template_expr_less_than_equals_token3);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(639);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_line_continuation);
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym__json_string_token1);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__json_escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 22},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 22},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 52},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 52},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 53},
  [172] = {.lex_state = 52},
  [173] = {.lex_state = 53},
  [174] = {.lex_state = 53},
  [175] = {.lex_state = 53},
  [176] = {.lex_state = 53},
  [177] = {.lex_state = 52},
  [178] = {.lex_state = 52},
  [179] = {.lex_state = 53},
  [180] = {.lex_state = 52},
  [181] = {.lex_state = 52},
  [182] = {.lex_state = 52},
  [183] = {.lex_state = 52},
  [184] = {.lex_state = 52},
  [185] = {.lex_state = 52},
  [186] = {.lex_state = 52},
  [187] = {.lex_state = 52},
  [188] = {.lex_state = 52},
  [189] = {.lex_state = 52},
  [190] = {.lex_state = 52},
  [191] = {.lex_state = 52},
  [192] = {.lex_state = 52},
  [193] = {.lex_state = 52},
  [194] = {.lex_state = 52},
  [195] = {.lex_state = 52},
  [196] = {.lex_state = 52},
  [197] = {.lex_state = 52},
  [198] = {.lex_state = 52},
  [199] = {.lex_state = 52},
  [200] = {.lex_state = 52},
  [201] = {.lex_state = 52},
  [202] = {.lex_state = 52},
  [203] = {.lex_state = 52},
  [204] = {.lex_state = 52},
  [205] = {.lex_state = 52},
  [206] = {.lex_state = 52},
  [207] = {.lex_state = 52},
  [208] = {.lex_state = 52},
  [209] = {.lex_state = 52},
  [210] = {.lex_state = 52},
  [211] = {.lex_state = 52},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 52},
  [214] = {.lex_state = 52},
  [215] = {.lex_state = 52},
  [216] = {.lex_state = 52},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 32},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 45},
  [221] = {.lex_state = 34},
  [222] = {.lex_state = 16},
  [223] = {.lex_state = 34},
  [224] = {.lex_state = 34},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 47},
  [227] = {.lex_state = 16},
  [228] = {.lex_state = 22},
  [229] = {.lex_state = 34},
  [230] = {.lex_state = 34},
  [231] = {.lex_state = 18},
  [232] = {.lex_state = 35},
  [233] = {.lex_state = 34},
  [234] = {.lex_state = 34},
  [235] = {.lex_state = 34},
  [236] = {.lex_state = 20},
  [237] = {.lex_state = 35},
  [238] = {.lex_state = 18},
  [239] = {.lex_state = 35},
  [240] = {.lex_state = 47},
  [241] = {.lex_state = 20},
  [242] = {.lex_state = 22},
  [243] = {.lex_state = 34},
  [244] = {.lex_state = 34},
  [245] = {.lex_state = 47},
  [246] = {.lex_state = 47},
  [247] = {.lex_state = 47},
  [248] = {.lex_state = 47},
  [249] = {.lex_state = 37},
  [250] = {.lex_state = 37},
  [251] = {.lex_state = 37},
  [252] = {.lex_state = 37},
  [253] = {.lex_state = 54},
  [254] = {.lex_state = 54},
  [255] = {.lex_state = 54},
  [256] = {.lex_state = 51},
  [257] = {.lex_state = 38},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 54},
  [260] = {.lex_state = 55},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 54},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 54},
  [267] = {.lex_state = 54},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 54},
  [271] = {.lex_state = 54},
  [272] = {.lex_state = 54},
  [273] = {.lex_state = 54},
  [274] = {.lex_state = 54},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 54},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 47},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 39},
  [289] = {.lex_state = 40},
  [290] = {.lex_state = 41},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 40},
  [293] = {.lex_state = 41},
  [294] = {.lex_state = 41},
  [295] = {.lex_state = 40},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 47},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 47},
  [302] = {.lex_state = 39},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 47},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 41},
  [310] = {.lex_state = 40},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 41},
  [313] = {.lex_state = 40},
  [314] = {.lex_state = 47},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 47},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 36},
  [320] = {.lex_state = 47},
  [321] = {.lex_state = 54},
  [322] = {.lex_state = 40},
  [323] = {.lex_state = 39},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 41},
  [326] = {.lex_state = 42},
  [327] = {.lex_state = 50},
  [328] = {.lex_state = 41},
  [329] = {.lex_state = 40},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 47},
  [335] = {.lex_state = 36},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 39},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 39},
  [341] = {.lex_state = 39},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 47},
  [346] = {.lex_state = 4},
  [347] = {.lex_state = 39},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 39},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 39},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 54},
  [354] = {.lex_state = 40},
  [355] = {.lex_state = 41},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 54},
  [358] = {.lex_state = 54},
  [359] = {.lex_state = 54},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_stopsignal_token1] = ACTIONS(1),
    [aux_sym_signal_name_token1] = ACTIONS(1),
    [sym_signal_num] = ACTIONS(1),
    [aux_sym_shell_token1] = ACTIONS(1),
    [aux_sym_volume_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_workdir_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_user_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_user_id_token1] = ACTIONS(1),
    [aux_sym_cmd_token1] = ACTIONS(1),
    [aux_sym_entrypoint_token1] = ACTIONS(1),
    [aux_sym_run_token1] = ACTIONS(1),
    [aux_sym_maintainer_token1] = ACTIONS(1),
    [aux_sym_expose_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_port_protocol_token1] = ACTIONS(1),
    [aux_sym_port_protocol_token2] = ACTIONS(1),
    [aux_sym_from_token1] = ACTIONS(1),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_sha256_COLON] = ACTIONS(1),
    [aux_sym_from_token2] = ACTIONS(1),
    [aux_sym__repository_start_token4] = ACTIONS(1),
    [aux_sym__repository_start_token8] = ACTIONS(1),
    [aux_sym__repository_start_token9] = ACTIONS(1),
    [aux_sym__repository_start_token12] = ACTIONS(1),
    [aux_sym__repository_start_token16] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__anything_token2] = ACTIONS(1),
    [sym__almost_json_prefix] = ACTIONS(1),
    [sym__json_prefix] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
    [sym__json_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_dockerfile] = STATE(337),
    [sym__directive] = STATE(141),
    [sym_stopsignal] = STATE(141),
    [sym_shell] = STATE(141),
    [sym_volume] = STATE(141),
    [sym_workdir] = STATE(141),
    [sym_user] = STATE(141),
    [sym_cmd] = STATE(141),
    [sym_entrypoint] = STATE(141),
    [sym_run] = STATE(141),
    [sym_maintainer] = STATE(141),
    [sym_expose] = STATE(141),
    [sym_from] = STATE(141),
    [aux_sym_dockerfile_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_stopsignal_token1] = ACTIONS(7),
    [aux_sym_shell_token1] = ACTIONS(9),
    [aux_sym_volume_token1] = ACTIONS(11),
    [aux_sym_workdir_token1] = ACTIONS(13),
    [aux_sym_user_token1] = ACTIONS(15),
    [aux_sym_cmd_token1] = ACTIONS(17),
    [aux_sym_entrypoint_token1] = ACTIONS(19),
    [aux_sym_run_token1] = ACTIONS(21),
    [aux_sym_maintainer_token1] = ACTIONS(23),
    [aux_sym_expose_token1] = ACTIONS(25),
    [aux_sym_from_token1] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [2] = {
    [sym__directive] = STATE(141),
    [sym_stopsignal] = STATE(141),
    [sym_shell] = STATE(141),
    [sym_volume] = STATE(141),
    [sym_workdir] = STATE(141),
    [sym_user] = STATE(141),
    [sym_cmd] = STATE(141),
    [sym_entrypoint] = STATE(141),
    [sym_run] = STATE(141),
    [sym_maintainer] = STATE(141),
    [sym_expose] = STATE(141),
    [sym_from] = STATE(141),
    [aux_sym_dockerfile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_stopsignal_token1] = ACTIONS(31),
    [aux_sym_shell_token1] = ACTIONS(34),
    [aux_sym_volume_token1] = ACTIONS(37),
    [aux_sym_workdir_token1] = ACTIONS(40),
    [aux_sym_user_token1] = ACTIONS(43),
    [aux_sym_cmd_token1] = ACTIONS(46),
    [aux_sym_entrypoint_token1] = ACTIONS(49),
    [aux_sym_run_token1] = ACTIONS(52),
    [aux_sym_maintainer_token1] = ACTIONS(55),
    [aux_sym_expose_token1] = ACTIONS(58),
    [aux_sym_from_token1] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [3] = {
    [sym__directive] = STATE(141),
    [sym_stopsignal] = STATE(141),
    [sym_shell] = STATE(141),
    [sym_volume] = STATE(141),
    [sym_workdir] = STATE(141),
    [sym_user] = STATE(141),
    [sym_cmd] = STATE(141),
    [sym_entrypoint] = STATE(141),
    [sym_run] = STATE(141),
    [sym_maintainer] = STATE(141),
    [sym_expose] = STATE(141),
    [sym_from] = STATE(141),
    [aux_sym_dockerfile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(64),
    [aux_sym_stopsignal_token1] = ACTIONS(7),
    [aux_sym_shell_token1] = ACTIONS(9),
    [aux_sym_volume_token1] = ACTIONS(11),
    [aux_sym_workdir_token1] = ACTIONS(13),
    [aux_sym_user_token1] = ACTIONS(15),
    [aux_sym_cmd_token1] = ACTIONS(17),
    [aux_sym_entrypoint_token1] = ACTIONS(19),
    [aux_sym_run_token1] = ACTIONS(21),
    [aux_sym_maintainer_token1] = ACTIONS(23),
    [aux_sym_expose_token1] = ACTIONS(25),
    [aux_sym_from_token1] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [4] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym__port] = STATE(82),
    [sym_port] = STATE(82),
    [sym_port_range] = STATE(82),
    [sym__port_part] = STATE(58),
    [aux_sym_expose_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(66),
    [aux_sym_stopsignal_token1] = ACTIONS(66),
    [aux_sym_shell_token1] = ACTIONS(66),
    [aux_sym_volume_token1] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [aux_sym_workdir_token1] = ACTIONS(66),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_user_token1] = ACTIONS(66),
    [aux_sym_user_id_token1] = ACTIONS(72),
    [aux_sym_cmd_token1] = ACTIONS(66),
    [aux_sym_entrypoint_token1] = ACTIONS(66),
    [aux_sym_run_token1] = ACTIONS(66),
    [aux_sym_maintainer_token1] = ACTIONS(66),
    [aux_sym_expose_token1] = ACTIONS(66),
    [aux_sym_from_token1] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [5] = {
    [sym__port_spec] = STATE(5),
    [sym_mapped_port] = STATE(5),
    [sym__port] = STATE(82),
    [sym_port] = STATE(82),
    [sym_port_range] = STATE(82),
    [sym__port_part] = STATE(58),
    [aux_sym_expose_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym_stopsignal_token1] = ACTIONS(74),
    [aux_sym_shell_token1] = ACTIONS(74),
    [aux_sym_volume_token1] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [aux_sym_workdir_token1] = ACTIONS(74),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [aux_sym_user_token1] = ACTIONS(74),
    [aux_sym_user_id_token1] = ACTIONS(82),
    [aux_sym_cmd_token1] = ACTIONS(74),
    [aux_sym_entrypoint_token1] = ACTIONS(74),
    [aux_sym_run_token1] = ACTIONS(74),
    [aux_sym_maintainer_token1] = ACTIONS(74),
    [aux_sym_expose_token1] = ACTIONS(74),
    [aux_sym_from_token1] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [6] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(85),
    [aux_sym_stopsignal_token1] = ACTIONS(87),
    [aux_sym_shell_token1] = ACTIONS(87),
    [aux_sym_volume_token1] = ACTIONS(87),
    [aux_sym_workdir_token1] = ACTIONS(87),
    [aux_sym_user_token1] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [aux_sym_cmd_token1] = ACTIONS(87),
    [aux_sym_entrypoint_token1] = ACTIONS(87),
    [aux_sym_run_token1] = ACTIONS(87),
    [aux_sym_maintainer_token1] = ACTIONS(87),
    [aux_sym_expose_token1] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(85),
    [aux_sym_from_token1] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(85),
    [aux_sym_from_token2] = ACTIONS(87),
    [aux_sym__repository_start_token3] = ACTIONS(87),
    [aux_sym__repository_start_token12] = ACTIONS(89),
    [aux_sym__repository_start_token15] = ACTIONS(89),
    [aux_sym__repository_start_token16] = ACTIONS(85),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [7] = {
    [aux_sym__repository_start_repeat4] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_stopsignal_token1] = ACTIONS(96),
    [aux_sym_shell_token1] = ACTIONS(96),
    [aux_sym_volume_token1] = ACTIONS(96),
    [aux_sym_workdir_token1] = ACTIONS(96),
    [aux_sym_user_token1] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [aux_sym_cmd_token1] = ACTIONS(96),
    [aux_sym_entrypoint_token1] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(96),
    [aux_sym_maintainer_token1] = ACTIONS(96),
    [aux_sym_expose_token1] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(98),
    [aux_sym_from_token1] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(94),
    [aux_sym_from_token2] = ACTIONS(96),
    [aux_sym__repository_start_token3] = ACTIONS(100),
    [aux_sym__repository_start_token12] = ACTIONS(102),
    [aux_sym__repository_start_token15] = ACTIONS(102),
    [aux_sym__repository_start_token16] = ACTIONS(98),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [8] = {
    [aux_sym__repository_start_repeat3] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_stopsignal_token1] = ACTIONS(106),
    [aux_sym_shell_token1] = ACTIONS(106),
    [aux_sym_volume_token1] = ACTIONS(106),
    [aux_sym_workdir_token1] = ACTIONS(106),
    [aux_sym_user_token1] = ACTIONS(106),
    [anon_sym_COLON] = ACTIONS(106),
    [aux_sym_cmd_token1] = ACTIONS(106),
    [aux_sym_entrypoint_token1] = ACTIONS(106),
    [aux_sym_run_token1] = ACTIONS(106),
    [aux_sym_maintainer_token1] = ACTIONS(106),
    [aux_sym_expose_token1] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(104),
    [aux_sym_from_token1] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(104),
    [aux_sym_from_token2] = ACTIONS(106),
    [aux_sym__repository_start_token3] = ACTIONS(106),
    [aux_sym__repository_start_token8] = ACTIONS(108),
    [aux_sym__repository_start_token11] = ACTIONS(108),
    [aux_sym__repository_start_token16] = ACTIONS(104),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [9] = {
    [aux_sym__repository_start_repeat3] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_stopsignal_token1] = ACTIONS(96),
    [aux_sym_shell_token1] = ACTIONS(96),
    [aux_sym_volume_token1] = ACTIONS(96),
    [aux_sym_workdir_token1] = ACTIONS(96),
    [aux_sym_user_token1] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [aux_sym_cmd_token1] = ACTIONS(96),
    [aux_sym_entrypoint_token1] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(96),
    [aux_sym_maintainer_token1] = ACTIONS(96),
    [aux_sym_expose_token1] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(98),
    [aux_sym_from_token1] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(94),
    [aux_sym_from_token2] = ACTIONS(96),
    [aux_sym__repository_start_token3] = ACTIONS(100),
    [aux_sym__repository_start_token8] = ACTIONS(111),
    [aux_sym__repository_start_token11] = ACTIONS(111),
    [aux_sym__repository_start_token16] = ACTIONS(98),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [10] = {
    [aux_sym__repository_start_repeat2] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_stopsignal_token1] = ACTIONS(96),
    [aux_sym_shell_token1] = ACTIONS(96),
    [aux_sym_volume_token1] = ACTIONS(96),
    [aux_sym_workdir_token1] = ACTIONS(96),
    [aux_sym_user_token1] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [aux_sym_cmd_token1] = ACTIONS(96),
    [aux_sym_entrypoint_token1] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(96),
    [aux_sym_maintainer_token1] = ACTIONS(96),
    [aux_sym_expose_token1] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(98),
    [aux_sym_from_token1] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(94),
    [aux_sym_from_token2] = ACTIONS(96),
    [aux_sym__repository_start_token3] = ACTIONS(100),
    [aux_sym__repository_start_token4] = ACTIONS(113),
    [aux_sym__repository_start_token7] = ACTIONS(113),
    [aux_sym__repository_start_token16] = ACTIONS(98),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [11] = {
    [aux_sym__repository_start_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(115),
    [aux_sym_stopsignal_token1] = ACTIONS(117),
    [aux_sym_shell_token1] = ACTIONS(117),
    [aux_sym_volume_token1] = ACTIONS(117),
    [aux_sym_workdir_token1] = ACTIONS(117),
    [aux_sym_user_token1] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [aux_sym_cmd_token1] = ACTIONS(117),
    [aux_sym_entrypoint_token1] = ACTIONS(117),
    [aux_sym_run_token1] = ACTIONS(117),
    [aux_sym_maintainer_token1] = ACTIONS(117),
    [aux_sym_expose_token1] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(115),
    [aux_sym_from_token1] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(115),
    [aux_sym_from_token2] = ACTIONS(117),
    [aux_sym__repository_start_token3] = ACTIONS(117),
    [aux_sym__repository_start_token4] = ACTIONS(119),
    [aux_sym__repository_start_token7] = ACTIONS(119),
    [aux_sym__repository_start_token16] = ACTIONS(115),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [12] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_stopsignal_token1] = ACTIONS(96),
    [aux_sym_shell_token1] = ACTIONS(96),
    [aux_sym_volume_token1] = ACTIONS(96),
    [aux_sym_workdir_token1] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [aux_sym_user_token1] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [aux_sym_cmd_token1] = ACTIONS(96),
    [aux_sym_entrypoint_token1] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(96),
    [aux_sym_maintainer_token1] = ACTIONS(96),
    [aux_sym_expose_token1] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(98),
    [aux_sym_from_token1] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(94),
    [aux_sym_from_token2] = ACTIONS(96),
    [aux_sym__repository_start_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(100),
    [aux_sym__repository_start_token16] = ACTIONS(98),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [13] = {
    [aux_sym__repository_start_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_stopsignal_token1] = ACTIONS(126),
    [aux_sym_shell_token1] = ACTIONS(126),
    [aux_sym_volume_token1] = ACTIONS(126),
    [aux_sym_workdir_token1] = ACTIONS(126),
    [aux_sym_user_token1] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(126),
    [aux_sym_cmd_token1] = ACTIONS(126),
    [aux_sym_entrypoint_token1] = ACTIONS(126),
    [aux_sym_run_token1] = ACTIONS(126),
    [aux_sym_maintainer_token1] = ACTIONS(126),
    [aux_sym_expose_token1] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [aux_sym_from_token1] = ACTIONS(126),
    [anon_sym_AT] = ACTIONS(124),
    [aux_sym_from_token2] = ACTIONS(126),
    [aux_sym__repository_start_token3] = ACTIONS(130),
    [aux_sym__repository_start_token4] = ACTIONS(113),
    [aux_sym__repository_start_token7] = ACTIONS(113),
    [aux_sym__repository_start_token16] = ACTIONS(128),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [14] = {
    [aux_sym__repository_start_repeat3] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_stopsignal_token1] = ACTIONS(126),
    [aux_sym_shell_token1] = ACTIONS(126),
    [aux_sym_volume_token1] = ACTIONS(126),
    [aux_sym_workdir_token1] = ACTIONS(126),
    [aux_sym_user_token1] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(126),
    [aux_sym_cmd_token1] = ACTIONS(126),
    [aux_sym_entrypoint_token1] = ACTIONS(126),
    [aux_sym_run_token1] = ACTIONS(126),
    [aux_sym_maintainer_token1] = ACTIONS(126),
    [aux_sym_expose_token1] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [aux_sym_from_token1] = ACTIONS(126),
    [anon_sym_AT] = ACTIONS(124),
    [aux_sym_from_token2] = ACTIONS(126),
    [aux_sym__repository_start_token3] = ACTIONS(130),
    [aux_sym__repository_start_token8] = ACTIONS(111),
    [aux_sym__repository_start_token11] = ACTIONS(111),
    [aux_sym__repository_start_token16] = ACTIONS(128),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [15] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_stopsignal_token1] = ACTIONS(126),
    [aux_sym_shell_token1] = ACTIONS(126),
    [aux_sym_volume_token1] = ACTIONS(126),
    [aux_sym_workdir_token1] = ACTIONS(126),
    [aux_sym_user_token1] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(126),
    [aux_sym_cmd_token1] = ACTIONS(126),
    [aux_sym_entrypoint_token1] = ACTIONS(126),
    [aux_sym_run_token1] = ACTIONS(126),
    [aux_sym_maintainer_token1] = ACTIONS(126),
    [aux_sym_expose_token1] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(128),
    [aux_sym_from_token1] = ACTIONS(126),
    [anon_sym_AT] = ACTIONS(124),
    [aux_sym_from_token2] = ACTIONS(126),
    [aux_sym__repository_start_token3] = ACTIONS(130),
    [aux_sym__repository_start_token12] = ACTIONS(102),
    [aux_sym__repository_start_token15] = ACTIONS(102),
    [aux_sym__repository_start_token16] = ACTIONS(128),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [16] = {
    [aux_sym__repository_start_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(132),
    [aux_sym_stopsignal_token1] = ACTIONS(134),
    [aux_sym_shell_token1] = ACTIONS(134),
    [aux_sym_volume_token1] = ACTIONS(134),
    [aux_sym_workdir_token1] = ACTIONS(134),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [aux_sym_user_token1] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(134),
    [aux_sym_cmd_token1] = ACTIONS(134),
    [aux_sym_entrypoint_token1] = ACTIONS(134),
    [aux_sym_run_token1] = ACTIONS(134),
    [aux_sym_maintainer_token1] = ACTIONS(134),
    [aux_sym_expose_token1] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(136),
    [aux_sym_from_token1] = ACTIONS(134),
    [anon_sym_AT] = ACTIONS(132),
    [aux_sym_from_token2] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(138),
    [aux_sym__repository_start_token16] = ACTIONS(136),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [17] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(140),
    [aux_sym_stopsignal_token1] = ACTIONS(142),
    [aux_sym_shell_token1] = ACTIONS(142),
    [aux_sym_volume_token1] = ACTIONS(142),
    [aux_sym_workdir_token1] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [aux_sym_user_token1] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [aux_sym_cmd_token1] = ACTIONS(142),
    [aux_sym_entrypoint_token1] = ACTIONS(142),
    [aux_sym_run_token1] = ACTIONS(142),
    [aux_sym_maintainer_token1] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(140),
    [aux_sym_from_token1] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(140),
    [aux_sym_from_token2] = ACTIONS(142),
    [aux_sym__repository_start_token2] = ACTIONS(144),
    [aux_sym__repository_start_token3] = ACTIONS(142),
    [aux_sym__repository_start_token16] = ACTIONS(140),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(149),
    [aux_sym_shell_token1] = ACTIONS(149),
    [aux_sym_volume_token1] = ACTIONS(149),
    [aux_sym_workdir_token1] = ACTIONS(149),
    [aux_sym_user_token1] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_run_token1] = ACTIONS(149),
    [aux_sym_maintainer_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(147),
    [aux_sym_from_token1] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_from_token2] = ACTIONS(149),
    [aux_sym__repository_start_token3] = ACTIONS(149),
    [aux_sym__repository_start_token8] = ACTIONS(147),
    [aux_sym__repository_start_token11] = ACTIONS(147),
    [aux_sym__repository_start_token16] = ACTIONS(147),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [aux_sym_stopsignal_token1] = ACTIONS(153),
    [aux_sym_shell_token1] = ACTIONS(153),
    [aux_sym_volume_token1] = ACTIONS(153),
    [aux_sym_workdir_token1] = ACTIONS(153),
    [aux_sym_user_token1] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [aux_sym_cmd_token1] = ACTIONS(153),
    [aux_sym_entrypoint_token1] = ACTIONS(153),
    [aux_sym_run_token1] = ACTIONS(153),
    [aux_sym_maintainer_token1] = ACTIONS(153),
    [aux_sym_expose_token1] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(151),
    [aux_sym_from_token1] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(151),
    [aux_sym_from_token2] = ACTIONS(153),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token12] = ACTIONS(151),
    [aux_sym__repository_start_token15] = ACTIONS(151),
    [aux_sym__repository_start_token16] = ACTIONS(151),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_stopsignal_token1] = ACTIONS(157),
    [aux_sym_shell_token1] = ACTIONS(157),
    [aux_sym_volume_token1] = ACTIONS(157),
    [aux_sym_workdir_token1] = ACTIONS(157),
    [aux_sym_user_token1] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(157),
    [aux_sym_cmd_token1] = ACTIONS(157),
    [aux_sym_entrypoint_token1] = ACTIONS(157),
    [aux_sym_run_token1] = ACTIONS(157),
    [aux_sym_maintainer_token1] = ACTIONS(157),
    [aux_sym_expose_token1] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(155),
    [aux_sym_from_token1] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(155),
    [aux_sym_from_token2] = ACTIONS(157),
    [aux_sym__repository_start_token3] = ACTIONS(157),
    [aux_sym__repository_start_token4] = ACTIONS(155),
    [aux_sym__repository_start_token7] = ACTIONS(155),
    [aux_sym__repository_start_token16] = ACTIONS(155),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(159),
    [aux_sym_user_token1] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(161),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(159),
    [aux_sym_from_token1] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(159),
    [aux_sym_from_token2] = ACTIONS(161),
    [aux_sym__repository_start_token2] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(161),
    [aux_sym__repository_start_token16] = ACTIONS(159),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_stopsignal_token1] = ACTIONS(165),
    [aux_sym_shell_token1] = ACTIONS(165),
    [aux_sym_volume_token1] = ACTIONS(165),
    [aux_sym_workdir_token1] = ACTIONS(165),
    [anon_sym_DOLLAR] = ACTIONS(163),
    [aux_sym_user_token1] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(165),
    [aux_sym_cmd_token1] = ACTIONS(165),
    [aux_sym_entrypoint_token1] = ACTIONS(165),
    [aux_sym_run_token1] = ACTIONS(165),
    [aux_sym_maintainer_token1] = ACTIONS(165),
    [aux_sym_expose_token1] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(163),
    [aux_sym_from_token1] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(163),
    [aux_sym_from_token2] = ACTIONS(165),
    [aux_sym__repository_start_token2] = ACTIONS(163),
    [aux_sym__repository_start_token3] = ACTIONS(165),
    [aux_sym__repository_start_token16] = ACTIONS(163),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [aux_sym_stopsignal_token1] = ACTIONS(142),
    [aux_sym_shell_token1] = ACTIONS(142),
    [aux_sym_volume_token1] = ACTIONS(142),
    [aux_sym_workdir_token1] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [aux_sym_user_token1] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [aux_sym_cmd_token1] = ACTIONS(142),
    [aux_sym_entrypoint_token1] = ACTIONS(142),
    [aux_sym_run_token1] = ACTIONS(142),
    [aux_sym_maintainer_token1] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(140),
    [aux_sym_from_token1] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(140),
    [aux_sym_from_token2] = ACTIONS(142),
    [aux_sym__repository_start_token2] = ACTIONS(140),
    [aux_sym__repository_start_token3] = ACTIONS(142),
    [aux_sym__repository_start_token16] = ACTIONS(140),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym_stopsignal_token1] = ACTIONS(169),
    [aux_sym_shell_token1] = ACTIONS(169),
    [aux_sym_volume_token1] = ACTIONS(169),
    [aux_sym_workdir_token1] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(167),
    [aux_sym_user_token1] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [aux_sym_cmd_token1] = ACTIONS(169),
    [aux_sym_entrypoint_token1] = ACTIONS(169),
    [aux_sym_run_token1] = ACTIONS(169),
    [aux_sym_maintainer_token1] = ACTIONS(169),
    [aux_sym_expose_token1] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(167),
    [aux_sym_from_token1] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(167),
    [aux_sym_from_token2] = ACTIONS(169),
    [aux_sym__repository_start_token2] = ACTIONS(167),
    [aux_sym__repository_start_token3] = ACTIONS(169),
    [aux_sym__repository_start_token16] = ACTIONS(167),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [25] = {
    [aux_sym__repository_start_repeat2] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(115),
    [aux_sym_stopsignal_token1] = ACTIONS(117),
    [aux_sym_shell_token1] = ACTIONS(117),
    [aux_sym_volume_token1] = ACTIONS(117),
    [aux_sym_workdir_token1] = ACTIONS(117),
    [aux_sym_user_token1] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(115),
    [aux_sym_cmd_token1] = ACTIONS(117),
    [aux_sym_entrypoint_token1] = ACTIONS(117),
    [aux_sym_run_token1] = ACTIONS(117),
    [aux_sym_maintainer_token1] = ACTIONS(117),
    [aux_sym_expose_token1] = ACTIONS(117),
    [aux_sym_from_token1] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(115),
    [aux_sym_from_token2] = ACTIONS(117),
    [aux_sym__repository_start_token3] = ACTIONS(117),
    [aux_sym__repository_start_token4] = ACTIONS(171),
    [aux_sym__repository_start_token7] = ACTIONS(171),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [26] = {
    [aux_sym__repository_start_repeat4] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_stopsignal_token1] = ACTIONS(126),
    [aux_sym_shell_token1] = ACTIONS(126),
    [aux_sym_volume_token1] = ACTIONS(126),
    [aux_sym_workdir_token1] = ACTIONS(126),
    [aux_sym_user_token1] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [aux_sym_cmd_token1] = ACTIONS(126),
    [aux_sym_entrypoint_token1] = ACTIONS(126),
    [aux_sym_run_token1] = ACTIONS(126),
    [aux_sym_maintainer_token1] = ACTIONS(126),
    [aux_sym_expose_token1] = ACTIONS(126),
    [aux_sym_from_token1] = ACTIONS(126),
    [anon_sym_AT] = ACTIONS(124),
    [aux_sym_from_token2] = ACTIONS(126),
    [aux_sym__repository_start_token3] = ACTIONS(174),
    [aux_sym__repository_start_token12] = ACTIONS(176),
    [aux_sym__repository_start_token15] = ACTIONS(176),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [27] = {
    [aux_sym__repository_start_repeat3] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_stopsignal_token1] = ACTIONS(126),
    [aux_sym_shell_token1] = ACTIONS(126),
    [aux_sym_volume_token1] = ACTIONS(126),
    [aux_sym_workdir_token1] = ACTIONS(126),
    [aux_sym_user_token1] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [aux_sym_cmd_token1] = ACTIONS(126),
    [aux_sym_entrypoint_token1] = ACTIONS(126),
    [aux_sym_run_token1] = ACTIONS(126),
    [aux_sym_maintainer_token1] = ACTIONS(126),
    [aux_sym_expose_token1] = ACTIONS(126),
    [aux_sym_from_token1] = ACTIONS(126),
    [anon_sym_AT] = ACTIONS(124),
    [aux_sym_from_token2] = ACTIONS(126),
    [aux_sym__repository_start_token3] = ACTIONS(174),
    [aux_sym__repository_start_token8] = ACTIONS(178),
    [aux_sym__repository_start_token11] = ACTIONS(178),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [28] = {
    [aux_sym__repository_start_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(140),
    [aux_sym_stopsignal_token1] = ACTIONS(142),
    [aux_sym_shell_token1] = ACTIONS(142),
    [aux_sym_volume_token1] = ACTIONS(142),
    [aux_sym_workdir_token1] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(180),
    [aux_sym_user_token1] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(140),
    [aux_sym_cmd_token1] = ACTIONS(142),
    [aux_sym_entrypoint_token1] = ACTIONS(142),
    [aux_sym_run_token1] = ACTIONS(142),
    [aux_sym_maintainer_token1] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(140),
    [aux_sym_from_token2] = ACTIONS(142),
    [aux_sym__repository_start_token2] = ACTIONS(180),
    [aux_sym__repository_start_token3] = ACTIONS(142),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [29] = {
    [aux_sym__repository_start_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(132),
    [aux_sym_stopsignal_token1] = ACTIONS(134),
    [aux_sym_shell_token1] = ACTIONS(134),
    [aux_sym_volume_token1] = ACTIONS(134),
    [aux_sym_workdir_token1] = ACTIONS(134),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [aux_sym_user_token1] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(132),
    [aux_sym_cmd_token1] = ACTIONS(134),
    [aux_sym_entrypoint_token1] = ACTIONS(134),
    [aux_sym_run_token1] = ACTIONS(134),
    [aux_sym_maintainer_token1] = ACTIONS(134),
    [aux_sym_expose_token1] = ACTIONS(134),
    [aux_sym_from_token1] = ACTIONS(134),
    [anon_sym_AT] = ACTIONS(132),
    [aux_sym_from_token2] = ACTIONS(134),
    [aux_sym__repository_start_token2] = ACTIONS(183),
    [aux_sym__repository_start_token3] = ACTIONS(185),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [30] = {
    [aux_sym__repository_start_repeat4] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_stopsignal_token1] = ACTIONS(96),
    [aux_sym_shell_token1] = ACTIONS(96),
    [aux_sym_volume_token1] = ACTIONS(96),
    [aux_sym_workdir_token1] = ACTIONS(96),
    [aux_sym_user_token1] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
    [aux_sym_cmd_token1] = ACTIONS(96),
    [aux_sym_entrypoint_token1] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(96),
    [aux_sym_maintainer_token1] = ACTIONS(96),
    [aux_sym_expose_token1] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(94),
    [aux_sym_from_token2] = ACTIONS(96),
    [aux_sym__repository_start_token3] = ACTIONS(187),
    [aux_sym__repository_start_token12] = ACTIONS(176),
    [aux_sym__repository_start_token15] = ACTIONS(176),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [31] = {
    [aux_sym__repository_start_repeat2] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_stopsignal_token1] = ACTIONS(126),
    [aux_sym_shell_token1] = ACTIONS(126),
    [aux_sym_volume_token1] = ACTIONS(126),
    [aux_sym_workdir_token1] = ACTIONS(126),
    [aux_sym_user_token1] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [aux_sym_cmd_token1] = ACTIONS(126),
    [aux_sym_entrypoint_token1] = ACTIONS(126),
    [aux_sym_run_token1] = ACTIONS(126),
    [aux_sym_maintainer_token1] = ACTIONS(126),
    [aux_sym_expose_token1] = ACTIONS(126),
    [aux_sym_from_token1] = ACTIONS(126),
    [anon_sym_AT] = ACTIONS(124),
    [aux_sym_from_token2] = ACTIONS(126),
    [aux_sym__repository_start_token3] = ACTIONS(174),
    [aux_sym__repository_start_token4] = ACTIONS(189),
    [aux_sym__repository_start_token7] = ACTIONS(189),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [32] = {
    [aux_sym__repository_start_repeat3] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_stopsignal_token1] = ACTIONS(96),
    [aux_sym_shell_token1] = ACTIONS(96),
    [aux_sym_volume_token1] = ACTIONS(96),
    [aux_sym_workdir_token1] = ACTIONS(96),
    [aux_sym_user_token1] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
    [aux_sym_cmd_token1] = ACTIONS(96),
    [aux_sym_entrypoint_token1] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(96),
    [aux_sym_maintainer_token1] = ACTIONS(96),
    [aux_sym_expose_token1] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(94),
    [aux_sym_from_token2] = ACTIONS(96),
    [aux_sym__repository_start_token3] = ACTIONS(187),
    [aux_sym__repository_start_token8] = ACTIONS(178),
    [aux_sym__repository_start_token11] = ACTIONS(178),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [33] = {
    [aux_sym__repository_start_repeat3] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(104),
    [aux_sym_stopsignal_token1] = ACTIONS(106),
    [aux_sym_shell_token1] = ACTIONS(106),
    [aux_sym_volume_token1] = ACTIONS(106),
    [aux_sym_workdir_token1] = ACTIONS(106),
    [aux_sym_user_token1] = ACTIONS(106),
    [anon_sym_COLON] = ACTIONS(104),
    [aux_sym_cmd_token1] = ACTIONS(106),
    [aux_sym_entrypoint_token1] = ACTIONS(106),
    [aux_sym_run_token1] = ACTIONS(106),
    [aux_sym_maintainer_token1] = ACTIONS(106),
    [aux_sym_expose_token1] = ACTIONS(106),
    [aux_sym_from_token1] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(104),
    [aux_sym_from_token2] = ACTIONS(106),
    [aux_sym__repository_start_token3] = ACTIONS(106),
    [aux_sym__repository_start_token8] = ACTIONS(191),
    [aux_sym__repository_start_token11] = ACTIONS(191),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [34] = {
    [aux_sym__repository_start_repeat2] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_stopsignal_token1] = ACTIONS(96),
    [aux_sym_shell_token1] = ACTIONS(96),
    [aux_sym_volume_token1] = ACTIONS(96),
    [aux_sym_workdir_token1] = ACTIONS(96),
    [aux_sym_user_token1] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
    [aux_sym_cmd_token1] = ACTIONS(96),
    [aux_sym_entrypoint_token1] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(96),
    [aux_sym_maintainer_token1] = ACTIONS(96),
    [aux_sym_expose_token1] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(94),
    [aux_sym_from_token2] = ACTIONS(96),
    [aux_sym__repository_start_token3] = ACTIONS(187),
    [aux_sym__repository_start_token4] = ACTIONS(189),
    [aux_sym__repository_start_token7] = ACTIONS(189),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [35] = {
    [sym_port_protocol] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym_stopsignal_token1] = ACTIONS(194),
    [aux_sym_shell_token1] = ACTIONS(194),
    [aux_sym_volume_token1] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [aux_sym_workdir_token1] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [aux_sym_user_token1] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [aux_sym_user_id_token1] = ACTIONS(194),
    [aux_sym_cmd_token1] = ACTIONS(194),
    [aux_sym_entrypoint_token1] = ACTIONS(194),
    [aux_sym_run_token1] = ACTIONS(194),
    [aux_sym_maintainer_token1] = ACTIONS(194),
    [aux_sym_expose_token1] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(196),
    [aux_sym_from_token1] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [36] = {
    [aux_sym__repository_start_repeat4] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(85),
    [aux_sym_stopsignal_token1] = ACTIONS(87),
    [aux_sym_shell_token1] = ACTIONS(87),
    [aux_sym_volume_token1] = ACTIONS(87),
    [aux_sym_workdir_token1] = ACTIONS(87),
    [aux_sym_user_token1] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(85),
    [aux_sym_cmd_token1] = ACTIONS(87),
    [aux_sym_entrypoint_token1] = ACTIONS(87),
    [aux_sym_run_token1] = ACTIONS(87),
    [aux_sym_maintainer_token1] = ACTIONS(87),
    [aux_sym_expose_token1] = ACTIONS(87),
    [aux_sym_from_token1] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(85),
    [aux_sym_from_token2] = ACTIONS(87),
    [aux_sym__repository_start_token3] = ACTIONS(87),
    [aux_sym__repository_start_token12] = ACTIONS(198),
    [aux_sym__repository_start_token15] = ACTIONS(198),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [37] = {
    [aux_sym__repository_start_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_stopsignal_token1] = ACTIONS(96),
    [aux_sym_shell_token1] = ACTIONS(96),
    [aux_sym_volume_token1] = ACTIONS(96),
    [aux_sym_workdir_token1] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [aux_sym_user_token1] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(94),
    [aux_sym_cmd_token1] = ACTIONS(96),
    [aux_sym_entrypoint_token1] = ACTIONS(96),
    [aux_sym_run_token1] = ACTIONS(96),
    [aux_sym_maintainer_token1] = ACTIONS(96),
    [aux_sym_expose_token1] = ACTIONS(96),
    [aux_sym_from_token1] = ACTIONS(96),
    [anon_sym_AT] = ACTIONS(94),
    [aux_sym_from_token2] = ACTIONS(96),
    [aux_sym__repository_start_token2] = ACTIONS(183),
    [aux_sym__repository_start_token3] = ACTIONS(187),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [38] = {
    [sym_port_protocol] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_stopsignal_token1] = ACTIONS(201),
    [aux_sym_shell_token1] = ACTIONS(201),
    [aux_sym_volume_token1] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_user_token1] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [aux_sym_user_id_token1] = ACTIONS(201),
    [aux_sym_cmd_token1] = ACTIONS(201),
    [aux_sym_entrypoint_token1] = ACTIONS(201),
    [aux_sym_run_token1] = ACTIONS(201),
    [aux_sym_maintainer_token1] = ACTIONS(201),
    [aux_sym_expose_token1] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(196),
    [aux_sym_from_token1] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_stopsignal_token1] = ACTIONS(157),
    [aux_sym_shell_token1] = ACTIONS(157),
    [aux_sym_volume_token1] = ACTIONS(157),
    [aux_sym_workdir_token1] = ACTIONS(157),
    [aux_sym_user_token1] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(155),
    [aux_sym_cmd_token1] = ACTIONS(157),
    [aux_sym_entrypoint_token1] = ACTIONS(157),
    [aux_sym_run_token1] = ACTIONS(157),
    [aux_sym_maintainer_token1] = ACTIONS(157),
    [aux_sym_expose_token1] = ACTIONS(157),
    [aux_sym_from_token1] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(155),
    [aux_sym_from_token2] = ACTIONS(157),
    [aux_sym__repository_start_token3] = ACTIONS(157),
    [aux_sym__repository_start_token4] = ACTIONS(155),
    [aux_sym__repository_start_token7] = ACTIONS(155),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_stopsignal_token1] = ACTIONS(149),
    [aux_sym_shell_token1] = ACTIONS(149),
    [aux_sym_volume_token1] = ACTIONS(149),
    [aux_sym_workdir_token1] = ACTIONS(149),
    [aux_sym_user_token1] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(147),
    [aux_sym_cmd_token1] = ACTIONS(149),
    [aux_sym_entrypoint_token1] = ACTIONS(149),
    [aux_sym_run_token1] = ACTIONS(149),
    [aux_sym_maintainer_token1] = ACTIONS(149),
    [aux_sym_expose_token1] = ACTIONS(149),
    [aux_sym_from_token1] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(147),
    [aux_sym_from_token2] = ACTIONS(149),
    [aux_sym__repository_start_token3] = ACTIONS(149),
    [aux_sym__repository_start_token8] = ACTIONS(147),
    [aux_sym__repository_start_token11] = ACTIONS(147),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_stopsignal_token1] = ACTIONS(159),
    [aux_sym_shell_token1] = ACTIONS(159),
    [aux_sym_volume_token1] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [aux_sym_workdir_token1] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(159),
    [aux_sym_user_token1] = ACTIONS(159),
    [anon_sym_COLON] = ACTIONS(159),
    [aux_sym_user_id_token1] = ACTIONS(159),
    [aux_sym_cmd_token1] = ACTIONS(159),
    [aux_sym_entrypoint_token1] = ACTIONS(159),
    [aux_sym_run_token1] = ACTIONS(159),
    [aux_sym_maintainer_token1] = ACTIONS(159),
    [aux_sym_expose_token1] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [aux_sym_from_token1] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [42] = {
    [aux_sym__repository_start_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_stopsignal_token1] = ACTIONS(205),
    [aux_sym_shell_token1] = ACTIONS(205),
    [aux_sym_volume_token1] = ACTIONS(205),
    [aux_sym_workdir_token1] = ACTIONS(205),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [aux_sym_user_token1] = ACTIONS(205),
    [aux_sym_cmd_token1] = ACTIONS(205),
    [aux_sym_entrypoint_token1] = ACTIONS(205),
    [aux_sym_run_token1] = ACTIONS(205),
    [aux_sym_maintainer_token1] = ACTIONS(205),
    [aux_sym_expose_token1] = ACTIONS(205),
    [aux_sym_from_token1] = ACTIONS(205),
    [anon_sym_AT] = ACTIONS(203),
    [aux_sym_from_token2] = ACTIONS(205),
    [aux_sym__repository_start_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(207),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_stopsignal_token1] = ACTIONS(163),
    [aux_sym_shell_token1] = ACTIONS(163),
    [aux_sym_volume_token1] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [aux_sym_workdir_token1] = ACTIONS(163),
    [anon_sym_DOLLAR] = ACTIONS(163),
    [aux_sym_user_token1] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [aux_sym_user_id_token1] = ACTIONS(163),
    [aux_sym_cmd_token1] = ACTIONS(163),
    [aux_sym_entrypoint_token1] = ACTIONS(163),
    [aux_sym_run_token1] = ACTIONS(163),
    [aux_sym_maintainer_token1] = ACTIONS(163),
    [aux_sym_expose_token1] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(163),
    [aux_sym_from_token1] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [44] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(211),
    [aux_sym_shell_token1] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(211),
    [aux_sym_workdir_token1] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [aux_sym_user_token1] = ACTIONS(211),
    [aux_sym_cmd_token1] = ACTIONS(211),
    [aux_sym_entrypoint_token1] = ACTIONS(211),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(209),
    [aux_sym_from_token2] = ACTIONS(211),
    [aux_sym__repository_start_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(213),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [45] = {
    [aux_sym__repository_start_repeat2] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(211),
    [aux_sym_shell_token1] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(211),
    [aux_sym_workdir_token1] = ACTIONS(211),
    [aux_sym_user_token1] = ACTIONS(211),
    [aux_sym_cmd_token1] = ACTIONS(211),
    [aux_sym_entrypoint_token1] = ACTIONS(211),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(209),
    [aux_sym_from_token2] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(213),
    [aux_sym__repository_start_token4] = ACTIONS(113),
    [aux_sym__repository_start_token7] = ACTIONS(113),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [46] = {
    [aux_sym__repository_start_repeat4] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(211),
    [aux_sym_shell_token1] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(211),
    [aux_sym_workdir_token1] = ACTIONS(211),
    [aux_sym_user_token1] = ACTIONS(211),
    [aux_sym_cmd_token1] = ACTIONS(211),
    [aux_sym_entrypoint_token1] = ACTIONS(211),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(209),
    [aux_sym_from_token2] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(213),
    [aux_sym__repository_start_token12] = ACTIONS(102),
    [aux_sym__repository_start_token15] = ACTIONS(102),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym_stopsignal_token1] = ACTIONS(169),
    [aux_sym_shell_token1] = ACTIONS(169),
    [aux_sym_volume_token1] = ACTIONS(169),
    [aux_sym_workdir_token1] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(167),
    [aux_sym_user_token1] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(167),
    [aux_sym_cmd_token1] = ACTIONS(169),
    [aux_sym_entrypoint_token1] = ACTIONS(169),
    [aux_sym_run_token1] = ACTIONS(169),
    [aux_sym_maintainer_token1] = ACTIONS(169),
    [aux_sym_expose_token1] = ACTIONS(169),
    [aux_sym_from_token1] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(167),
    [aux_sym_from_token2] = ACTIONS(169),
    [aux_sym__repository_start_token2] = ACTIONS(167),
    [aux_sym__repository_start_token3] = ACTIONS(169),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [aux_sym_stopsignal_token1] = ACTIONS(153),
    [aux_sym_shell_token1] = ACTIONS(153),
    [aux_sym_volume_token1] = ACTIONS(153),
    [aux_sym_workdir_token1] = ACTIONS(153),
    [aux_sym_user_token1] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(151),
    [aux_sym_cmd_token1] = ACTIONS(153),
    [aux_sym_entrypoint_token1] = ACTIONS(153),
    [aux_sym_run_token1] = ACTIONS(153),
    [aux_sym_maintainer_token1] = ACTIONS(153),
    [aux_sym_expose_token1] = ACTIONS(153),
    [aux_sym_from_token1] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(151),
    [aux_sym_from_token2] = ACTIONS(153),
    [aux_sym__repository_start_token3] = ACTIONS(153),
    [aux_sym__repository_start_token12] = ACTIONS(151),
    [aux_sym__repository_start_token15] = ACTIONS(151),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_stopsignal_token1] = ACTIONS(165),
    [aux_sym_shell_token1] = ACTIONS(165),
    [aux_sym_volume_token1] = ACTIONS(165),
    [aux_sym_workdir_token1] = ACTIONS(165),
    [anon_sym_DOLLAR] = ACTIONS(163),
    [aux_sym_user_token1] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(163),
    [aux_sym_cmd_token1] = ACTIONS(165),
    [aux_sym_entrypoint_token1] = ACTIONS(165),
    [aux_sym_run_token1] = ACTIONS(165),
    [aux_sym_maintainer_token1] = ACTIONS(165),
    [aux_sym_expose_token1] = ACTIONS(165),
    [aux_sym_from_token1] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(163),
    [aux_sym_from_token2] = ACTIONS(165),
    [aux_sym__repository_start_token2] = ACTIONS(163),
    [aux_sym__repository_start_token3] = ACTIONS(165),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [50] = {
    [aux_sym__repository_start_repeat3] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(211),
    [aux_sym_shell_token1] = ACTIONS(211),
    [aux_sym_volume_token1] = ACTIONS(211),
    [aux_sym_workdir_token1] = ACTIONS(211),
    [aux_sym_user_token1] = ACTIONS(211),
    [aux_sym_cmd_token1] = ACTIONS(211),
    [aux_sym_entrypoint_token1] = ACTIONS(211),
    [aux_sym_run_token1] = ACTIONS(211),
    [aux_sym_maintainer_token1] = ACTIONS(211),
    [aux_sym_expose_token1] = ACTIONS(211),
    [aux_sym_from_token1] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(209),
    [aux_sym_from_token2] = ACTIONS(211),
    [aux_sym__repository_start_token3] = ACTIONS(213),
    [aux_sym__repository_start_token8] = ACTIONS(111),
    [aux_sym__repository_start_token11] = ACTIONS(111),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(159),
    [aux_sym_user_token1] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(159),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [aux_sym_from_token1] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(159),
    [aux_sym_from_token2] = ACTIONS(161),
    [aux_sym__repository_start_token2] = ACTIONS(159),
    [aux_sym__repository_start_token3] = ACTIONS(161),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [52] = {
    [aux_sym__repository_start_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym_stopsignal_token1] = ACTIONS(217),
    [aux_sym_shell_token1] = ACTIONS(217),
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [aux_sym_user_token1] = ACTIONS(217),
    [aux_sym_cmd_token1] = ACTIONS(217),
    [aux_sym_entrypoint_token1] = ACTIONS(217),
    [aux_sym_run_token1] = ACTIONS(217),
    [aux_sym_maintainer_token1] = ACTIONS(217),
    [aux_sym_expose_token1] = ACTIONS(217),
    [aux_sym_from_token1] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(215),
    [aux_sym_from_token2] = ACTIONS(217),
    [aux_sym__repository_start_token3] = ACTIONS(219),
    [aux_sym__repository_start_token4] = ACTIONS(113),
    [aux_sym__repository_start_token7] = ACTIONS(113),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [53] = {
    [aux_sym__repository_start_repeat3] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym_stopsignal_token1] = ACTIONS(217),
    [aux_sym_shell_token1] = ACTIONS(217),
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [aux_sym_user_token1] = ACTIONS(217),
    [aux_sym_cmd_token1] = ACTIONS(217),
    [aux_sym_entrypoint_token1] = ACTIONS(217),
    [aux_sym_run_token1] = ACTIONS(217),
    [aux_sym_maintainer_token1] = ACTIONS(217),
    [aux_sym_expose_token1] = ACTIONS(217),
    [aux_sym_from_token1] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(215),
    [aux_sym_from_token2] = ACTIONS(217),
    [aux_sym__repository_start_token3] = ACTIONS(219),
    [aux_sym__repository_start_token8] = ACTIONS(111),
    [aux_sym__repository_start_token11] = ACTIONS(111),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [aux_sym_stopsignal_token1] = ACTIONS(142),
    [aux_sym_shell_token1] = ACTIONS(142),
    [aux_sym_volume_token1] = ACTIONS(142),
    [aux_sym_workdir_token1] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [aux_sym_user_token1] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(140),
    [aux_sym_cmd_token1] = ACTIONS(142),
    [aux_sym_entrypoint_token1] = ACTIONS(142),
    [aux_sym_run_token1] = ACTIONS(142),
    [aux_sym_maintainer_token1] = ACTIONS(142),
    [aux_sym_expose_token1] = ACTIONS(142),
    [aux_sym_from_token1] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(140),
    [aux_sym_from_token2] = ACTIONS(142),
    [aux_sym__repository_start_token2] = ACTIONS(140),
    [aux_sym__repository_start_token3] = ACTIONS(142),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [55] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym_stopsignal_token1] = ACTIONS(217),
    [aux_sym_shell_token1] = ACTIONS(217),
    [aux_sym_volume_token1] = ACTIONS(217),
    [aux_sym_workdir_token1] = ACTIONS(217),
    [aux_sym_user_token1] = ACTIONS(217),
    [aux_sym_cmd_token1] = ACTIONS(217),
    [aux_sym_entrypoint_token1] = ACTIONS(217),
    [aux_sym_run_token1] = ACTIONS(217),
    [aux_sym_maintainer_token1] = ACTIONS(217),
    [aux_sym_expose_token1] = ACTIONS(217),
    [aux_sym_from_token1] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(215),
    [aux_sym_from_token2] = ACTIONS(217),
    [aux_sym__repository_start_token3] = ACTIONS(219),
    [aux_sym__repository_start_token12] = ACTIONS(102),
    [aux_sym__repository_start_token15] = ACTIONS(102),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym_stopsignal_token1] = ACTIONS(167),
    [aux_sym_shell_token1] = ACTIONS(167),
    [aux_sym_volume_token1] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [aux_sym_workdir_token1] = ACTIONS(167),
    [anon_sym_DOLLAR] = ACTIONS(167),
    [aux_sym_user_token1] = ACTIONS(167),
    [anon_sym_COLON] = ACTIONS(167),
    [aux_sym_user_id_token1] = ACTIONS(167),
    [aux_sym_cmd_token1] = ACTIONS(167),
    [aux_sym_entrypoint_token1] = ACTIONS(167),
    [aux_sym_run_token1] = ACTIONS(167),
    [aux_sym_maintainer_token1] = ACTIONS(167),
    [aux_sym_expose_token1] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [aux_sym_from_token1] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [57] = {
    [aux_sym__repository_start_repeat3] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(221),
    [aux_sym_stopsignal_token1] = ACTIONS(223),
    [aux_sym_shell_token1] = ACTIONS(223),
    [aux_sym_volume_token1] = ACTIONS(223),
    [aux_sym_workdir_token1] = ACTIONS(223),
    [aux_sym_user_token1] = ACTIONS(223),
    [aux_sym_cmd_token1] = ACTIONS(223),
    [aux_sym_entrypoint_token1] = ACTIONS(223),
    [aux_sym_run_token1] = ACTIONS(223),
    [aux_sym_maintainer_token1] = ACTIONS(223),
    [aux_sym_expose_token1] = ACTIONS(223),
    [aux_sym_from_token1] = ACTIONS(223),
    [aux_sym_from_token2] = ACTIONS(223),
    [aux_sym__repository_start_token3] = ACTIONS(225),
    [aux_sym__repository_start_token8] = ACTIONS(111),
    [aux_sym__repository_start_token11] = ACTIONS(111),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [aux_sym_stopsignal_token1] = ACTIONS(227),
    [aux_sym_shell_token1] = ACTIONS(227),
    [aux_sym_volume_token1] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(227),
    [aux_sym_workdir_token1] = ACTIONS(227),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [aux_sym_user_token1] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(227),
    [aux_sym_user_id_token1] = ACTIONS(227),
    [aux_sym_cmd_token1] = ACTIONS(227),
    [aux_sym_entrypoint_token1] = ACTIONS(227),
    [aux_sym_run_token1] = ACTIONS(227),
    [aux_sym_maintainer_token1] = ACTIONS(227),
    [aux_sym_expose_token1] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(229),
    [aux_sym_from_token1] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [59] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(221),
    [aux_sym_stopsignal_token1] = ACTIONS(223),
    [aux_sym_shell_token1] = ACTIONS(223),
    [aux_sym_volume_token1] = ACTIONS(223),
    [aux_sym_workdir_token1] = ACTIONS(223),
    [aux_sym_user_token1] = ACTIONS(223),
    [aux_sym_cmd_token1] = ACTIONS(223),
    [aux_sym_entrypoint_token1] = ACTIONS(223),
    [aux_sym_run_token1] = ACTIONS(223),
    [aux_sym_maintainer_token1] = ACTIONS(223),
    [aux_sym_expose_token1] = ACTIONS(223),
    [aux_sym_from_token1] = ACTIONS(223),
    [aux_sym_from_token2] = ACTIONS(223),
    [aux_sym__repository_start_token3] = ACTIONS(225),
    [aux_sym__repository_start_token12] = ACTIONS(102),
    [aux_sym__repository_start_token15] = ACTIONS(102),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_stopsignal_token1] = ACTIONS(124),
    [aux_sym_shell_token1] = ACTIONS(124),
    [aux_sym_volume_token1] = ACTIONS(124),
    [aux_sym_workdir_token1] = ACTIONS(124),
    [aux_sym_user_token1] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(126),
    [aux_sym_cmd_token1] = ACTIONS(124),
    [aux_sym_entrypoint_token1] = ACTIONS(124),
    [aux_sym_run_token1] = ACTIONS(124),
    [aux_sym_maintainer_token1] = ACTIONS(124),
    [aux_sym_expose_token1] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(128),
    [aux_sym_from_token1] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(124),
    [aux_sym_from_token2] = ACTIONS(124),
    [aux_sym__repository_start_token16] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [61] = {
    [aux_sym__repository_start_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(221),
    [aux_sym_stopsignal_token1] = ACTIONS(223),
    [aux_sym_shell_token1] = ACTIONS(223),
    [aux_sym_volume_token1] = ACTIONS(223),
    [aux_sym_workdir_token1] = ACTIONS(223),
    [aux_sym_user_token1] = ACTIONS(223),
    [aux_sym_cmd_token1] = ACTIONS(223),
    [aux_sym_entrypoint_token1] = ACTIONS(223),
    [aux_sym_run_token1] = ACTIONS(223),
    [aux_sym_maintainer_token1] = ACTIONS(223),
    [aux_sym_expose_token1] = ACTIONS(223),
    [aux_sym_from_token1] = ACTIONS(223),
    [aux_sym_from_token2] = ACTIONS(223),
    [aux_sym__repository_start_token3] = ACTIONS(225),
    [aux_sym__repository_start_token4] = ACTIONS(113),
    [aux_sym__repository_start_token7] = ACTIONS(113),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [aux_sym_stopsignal_token1] = ACTIONS(231),
    [aux_sym_shell_token1] = ACTIONS(231),
    [aux_sym_volume_token1] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [aux_sym_workdir_token1] = ACTIONS(231),
    [anon_sym_DOLLAR] = ACTIONS(231),
    [aux_sym_user_token1] = ACTIONS(231),
    [anon_sym_COLON] = ACTIONS(231),
    [aux_sym_user_id_token1] = ACTIONS(231),
    [aux_sym_cmd_token1] = ACTIONS(231),
    [aux_sym_entrypoint_token1] = ACTIONS(231),
    [aux_sym_run_token1] = ACTIONS(231),
    [aux_sym_maintainer_token1] = ACTIONS(231),
    [aux_sym_expose_token1] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [aux_sym_from_token1] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [aux_sym_stopsignal_token1] = ACTIONS(233),
    [aux_sym_shell_token1] = ACTIONS(233),
    [aux_sym_volume_token1] = ACTIONS(233),
    [aux_sym_workdir_token1] = ACTIONS(233),
    [aux_sym_user_token1] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(235),
    [aux_sym_cmd_token1] = ACTIONS(233),
    [aux_sym_entrypoint_token1] = ACTIONS(233),
    [aux_sym_run_token1] = ACTIONS(233),
    [aux_sym_maintainer_token1] = ACTIONS(233),
    [aux_sym_expose_token1] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(237),
    [aux_sym_from_token1] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(233),
    [aux_sym_from_token2] = ACTIONS(233),
    [aux_sym__repository_start_token16] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_stopsignal_token1] = ACTIONS(94),
    [aux_sym_shell_token1] = ACTIONS(94),
    [aux_sym_volume_token1] = ACTIONS(94),
    [aux_sym_workdir_token1] = ACTIONS(94),
    [aux_sym_user_token1] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(96),
    [aux_sym_cmd_token1] = ACTIONS(94),
    [aux_sym_entrypoint_token1] = ACTIONS(94),
    [aux_sym_run_token1] = ACTIONS(94),
    [aux_sym_maintainer_token1] = ACTIONS(94),
    [aux_sym_expose_token1] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(98),
    [aux_sym_from_token1] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(94),
    [aux_sym_from_token2] = ACTIONS(94),
    [aux_sym__repository_start_token16] = ACTIONS(98),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [65] = {
    [aux_sym__repository_start_repeat4] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_stopsignal_token1] = ACTIONS(241),
    [aux_sym_shell_token1] = ACTIONS(241),
    [aux_sym_volume_token1] = ACTIONS(241),
    [aux_sym_workdir_token1] = ACTIONS(241),
    [aux_sym_user_token1] = ACTIONS(241),
    [aux_sym_cmd_token1] = ACTIONS(241),
    [aux_sym_entrypoint_token1] = ACTIONS(241),
    [aux_sym_run_token1] = ACTIONS(241),
    [aux_sym_maintainer_token1] = ACTIONS(241),
    [aux_sym_expose_token1] = ACTIONS(241),
    [aux_sym_from_token1] = ACTIONS(241),
    [aux_sym_from_token2] = ACTIONS(241),
    [aux_sym__repository_start_token3] = ACTIONS(243),
    [aux_sym__repository_start_token12] = ACTIONS(102),
    [aux_sym__repository_start_token15] = ACTIONS(102),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [66] = {
    [aux_sym__repository_start_repeat1] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(245),
    [aux_sym_stopsignal_token1] = ACTIONS(247),
    [aux_sym_shell_token1] = ACTIONS(247),
    [aux_sym_volume_token1] = ACTIONS(247),
    [aux_sym_workdir_token1] = ACTIONS(247),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [aux_sym_user_token1] = ACTIONS(247),
    [aux_sym_cmd_token1] = ACTIONS(247),
    [aux_sym_entrypoint_token1] = ACTIONS(247),
    [aux_sym_run_token1] = ACTIONS(247),
    [aux_sym_maintainer_token1] = ACTIONS(247),
    [aux_sym_expose_token1] = ACTIONS(247),
    [aux_sym_from_token1] = ACTIONS(247),
    [aux_sym_from_token2] = ACTIONS(247),
    [aux_sym__repository_start_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(249),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [67] = {
    [aux_sym__repository_start_repeat3] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_stopsignal_token1] = ACTIONS(241),
    [aux_sym_shell_token1] = ACTIONS(241),
    [aux_sym_volume_token1] = ACTIONS(241),
    [aux_sym_workdir_token1] = ACTIONS(241),
    [aux_sym_user_token1] = ACTIONS(241),
    [aux_sym_cmd_token1] = ACTIONS(241),
    [aux_sym_entrypoint_token1] = ACTIONS(241),
    [aux_sym_run_token1] = ACTIONS(241),
    [aux_sym_maintainer_token1] = ACTIONS(241),
    [aux_sym_expose_token1] = ACTIONS(241),
    [aux_sym_from_token1] = ACTIONS(241),
    [aux_sym_from_token2] = ACTIONS(241),
    [aux_sym__repository_start_token3] = ACTIONS(243),
    [aux_sym__repository_start_token8] = ACTIONS(111),
    [aux_sym__repository_start_token11] = ACTIONS(111),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [aux_sym_stopsignal_token1] = ACTIONS(251),
    [aux_sym_shell_token1] = ACTIONS(251),
    [aux_sym_volume_token1] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [aux_sym_workdir_token1] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(251),
    [aux_sym_user_token1] = ACTIONS(251),
    [anon_sym_COLON] = ACTIONS(251),
    [aux_sym_user_id_token1] = ACTIONS(251),
    [aux_sym_cmd_token1] = ACTIONS(251),
    [aux_sym_entrypoint_token1] = ACTIONS(251),
    [aux_sym_run_token1] = ACTIONS(251),
    [aux_sym_maintainer_token1] = ACTIONS(251),
    [aux_sym_expose_token1] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [aux_sym_from_token1] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [69] = {
    [aux_sym__repository_start_repeat2] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_stopsignal_token1] = ACTIONS(241),
    [aux_sym_shell_token1] = ACTIONS(241),
    [aux_sym_volume_token1] = ACTIONS(241),
    [aux_sym_workdir_token1] = ACTIONS(241),
    [aux_sym_user_token1] = ACTIONS(241),
    [aux_sym_cmd_token1] = ACTIONS(241),
    [aux_sym_entrypoint_token1] = ACTIONS(241),
    [aux_sym_run_token1] = ACTIONS(241),
    [aux_sym_maintainer_token1] = ACTIONS(241),
    [aux_sym_expose_token1] = ACTIONS(241),
    [aux_sym_from_token1] = ACTIONS(241),
    [aux_sym_from_token2] = ACTIONS(241),
    [aux_sym__repository_start_token3] = ACTIONS(243),
    [aux_sym__repository_start_token4] = ACTIONS(113),
    [aux_sym__repository_start_token7] = ACTIONS(113),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_stopsignal_token1] = ACTIONS(253),
    [aux_sym_shell_token1] = ACTIONS(253),
    [aux_sym_volume_token1] = ACTIONS(253),
    [aux_sym_workdir_token1] = ACTIONS(253),
    [aux_sym_user_token1] = ACTIONS(253),
    [anon_sym_COLON] = ACTIONS(255),
    [aux_sym_cmd_token1] = ACTIONS(253),
    [aux_sym_entrypoint_token1] = ACTIONS(253),
    [aux_sym_run_token1] = ACTIONS(253),
    [aux_sym_maintainer_token1] = ACTIONS(253),
    [aux_sym_expose_token1] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(257),
    [aux_sym_from_token1] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(253),
    [aux_sym_from_token2] = ACTIONS(253),
    [aux_sym__repository_start_token16] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [71] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_stopsignal_token1] = ACTIONS(241),
    [aux_sym_shell_token1] = ACTIONS(241),
    [aux_sym_volume_token1] = ACTIONS(241),
    [aux_sym_workdir_token1] = ACTIONS(241),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [aux_sym_user_token1] = ACTIONS(241),
    [aux_sym_cmd_token1] = ACTIONS(241),
    [aux_sym_entrypoint_token1] = ACTIONS(241),
    [aux_sym_run_token1] = ACTIONS(241),
    [aux_sym_maintainer_token1] = ACTIONS(241),
    [aux_sym_expose_token1] = ACTIONS(241),
    [aux_sym_from_token1] = ACTIONS(241),
    [aux_sym_from_token2] = ACTIONS(241),
    [aux_sym__repository_start_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(243),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [aux_sym_stopsignal_token1] = ACTIONS(259),
    [aux_sym_shell_token1] = ACTIONS(259),
    [aux_sym_volume_token1] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [aux_sym_workdir_token1] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(259),
    [aux_sym_user_token1] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(259),
    [aux_sym_user_id_token1] = ACTIONS(259),
    [aux_sym_cmd_token1] = ACTIONS(259),
    [aux_sym_entrypoint_token1] = ACTIONS(259),
    [aux_sym_run_token1] = ACTIONS(259),
    [aux_sym_maintainer_token1] = ACTIONS(259),
    [aux_sym_expose_token1] = ACTIONS(259),
    [anon_sym_DASH] = ACTIONS(259),
    [aux_sym_from_token1] = ACTIONS(259),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_stopsignal_token1] = ACTIONS(201),
    [aux_sym_shell_token1] = ACTIONS(201),
    [aux_sym_volume_token1] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [aux_sym_workdir_token1] = ACTIONS(201),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_user_token1] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [aux_sym_user_id_token1] = ACTIONS(201),
    [aux_sym_cmd_token1] = ACTIONS(201),
    [aux_sym_entrypoint_token1] = ACTIONS(201),
    [aux_sym_run_token1] = ACTIONS(201),
    [aux_sym_maintainer_token1] = ACTIONS(201),
    [aux_sym_expose_token1] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [aux_sym_from_token1] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_stopsignal_token1] = ACTIONS(261),
    [aux_sym_shell_token1] = ACTIONS(261),
    [aux_sym_volume_token1] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [aux_sym_workdir_token1] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [aux_sym_user_token1] = ACTIONS(261),
    [anon_sym_COLON] = ACTIONS(261),
    [aux_sym_user_id_token1] = ACTIONS(261),
    [aux_sym_cmd_token1] = ACTIONS(261),
    [aux_sym_entrypoint_token1] = ACTIONS(261),
    [aux_sym_run_token1] = ACTIONS(261),
    [aux_sym_maintainer_token1] = ACTIONS(261),
    [aux_sym_expose_token1] = ACTIONS(261),
    [aux_sym_from_token1] = ACTIONS(261),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [75] = {
    [aux_sym__repository_start_repeat4] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_stopsignal_token1] = ACTIONS(265),
    [aux_sym_shell_token1] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(265),
    [aux_sym_workdir_token1] = ACTIONS(265),
    [aux_sym_user_token1] = ACTIONS(265),
    [aux_sym_cmd_token1] = ACTIONS(265),
    [aux_sym_entrypoint_token1] = ACTIONS(265),
    [aux_sym_run_token1] = ACTIONS(265),
    [aux_sym_maintainer_token1] = ACTIONS(265),
    [aux_sym_expose_token1] = ACTIONS(265),
    [aux_sym_from_token1] = ACTIONS(265),
    [aux_sym__repository_start_token3] = ACTIONS(267),
    [aux_sym__repository_start_token12] = ACTIONS(102),
    [aux_sym__repository_start_token15] = ACTIONS(102),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [76] = {
    [aux_sym__repository_start_repeat1] = STATE(87),
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_stopsignal_token1] = ACTIONS(271),
    [aux_sym_shell_token1] = ACTIONS(271),
    [aux_sym_volume_token1] = ACTIONS(271),
    [aux_sym_workdir_token1] = ACTIONS(271),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [aux_sym_user_token1] = ACTIONS(271),
    [aux_sym_cmd_token1] = ACTIONS(271),
    [aux_sym_entrypoint_token1] = ACTIONS(271),
    [aux_sym_run_token1] = ACTIONS(271),
    [aux_sym_maintainer_token1] = ACTIONS(271),
    [aux_sym_expose_token1] = ACTIONS(271),
    [aux_sym_from_token1] = ACTIONS(271),
    [aux_sym__repository_start_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(273),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [77] = {
    [aux_sym__repository_start_repeat2] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_stopsignal_token1] = ACTIONS(277),
    [aux_sym_shell_token1] = ACTIONS(277),
    [aux_sym_volume_token1] = ACTIONS(277),
    [aux_sym_workdir_token1] = ACTIONS(277),
    [aux_sym_user_token1] = ACTIONS(277),
    [aux_sym_cmd_token1] = ACTIONS(277),
    [aux_sym_entrypoint_token1] = ACTIONS(277),
    [aux_sym_run_token1] = ACTIONS(277),
    [aux_sym_maintainer_token1] = ACTIONS(277),
    [aux_sym_expose_token1] = ACTIONS(277),
    [aux_sym_from_token1] = ACTIONS(277),
    [aux_sym__repository_start_token3] = ACTIONS(279),
    [aux_sym__repository_start_token4] = ACTIONS(113),
    [aux_sym__repository_start_token7] = ACTIONS(113),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [78] = {
    [aux_sym_workdir_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(281),
    [aux_sym_stopsignal_token1] = ACTIONS(283),
    [aux_sym_shell_token1] = ACTIONS(283),
    [aux_sym_volume_token1] = ACTIONS(283),
    [aux_sym_workdir_token1] = ACTIONS(283),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [aux_sym_workdir_token4] = ACTIONS(285),
    [aux_sym_workdir_token5] = ACTIONS(287),
    [aux_sym_user_token1] = ACTIONS(283),
    [aux_sym_cmd_token1] = ACTIONS(283),
    [aux_sym_entrypoint_token1] = ACTIONS(283),
    [aux_sym_run_token1] = ACTIONS(283),
    [aux_sym_maintainer_token1] = ACTIONS(283),
    [aux_sym_expose_token1] = ACTIONS(283),
    [aux_sym_from_token1] = ACTIONS(283),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [79] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_stopsignal_token1] = ACTIONS(277),
    [aux_sym_shell_token1] = ACTIONS(277),
    [aux_sym_volume_token1] = ACTIONS(277),
    [aux_sym_workdir_token1] = ACTIONS(277),
    [aux_sym_user_token1] = ACTIONS(277),
    [aux_sym_cmd_token1] = ACTIONS(277),
    [aux_sym_entrypoint_token1] = ACTIONS(277),
    [aux_sym_run_token1] = ACTIONS(277),
    [aux_sym_maintainer_token1] = ACTIONS(277),
    [aux_sym_expose_token1] = ACTIONS(277),
    [aux_sym_from_token1] = ACTIONS(277),
    [aux_sym__repository_start_token3] = ACTIONS(279),
    [aux_sym__repository_start_token12] = ACTIONS(102),
    [aux_sym__repository_start_token15] = ACTIONS(102),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [80] = {
    [sym_path] = STATE(80),
    [aux_sym_volume_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(289),
    [aux_sym_stopsignal_token1] = ACTIONS(291),
    [aux_sym_shell_token1] = ACTIONS(291),
    [aux_sym_volume_token1] = ACTIONS(291),
    [aux_sym_path_token1] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(296),
    [aux_sym_workdir_token1] = ACTIONS(291),
    [aux_sym_user_token1] = ACTIONS(291),
    [aux_sym_cmd_token1] = ACTIONS(291),
    [aux_sym_entrypoint_token1] = ACTIONS(291),
    [aux_sym_run_token1] = ACTIONS(291),
    [aux_sym_maintainer_token1] = ACTIONS(291),
    [aux_sym_expose_token1] = ACTIONS(291),
    [aux_sym_from_token1] = ACTIONS(291),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [81] = {
    [aux_sym_workdir_repeat1] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_stopsignal_token1] = ACTIONS(301),
    [aux_sym_shell_token1] = ACTIONS(301),
    [aux_sym_volume_token1] = ACTIONS(301),
    [aux_sym_workdir_token1] = ACTIONS(301),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [aux_sym_workdir_token4] = ACTIONS(285),
    [aux_sym_workdir_token5] = ACTIONS(303),
    [aux_sym_user_token1] = ACTIONS(301),
    [aux_sym_cmd_token1] = ACTIONS(301),
    [aux_sym_entrypoint_token1] = ACTIONS(301),
    [aux_sym_run_token1] = ACTIONS(301),
    [aux_sym_maintainer_token1] = ACTIONS(301),
    [aux_sym_expose_token1] = ACTIONS(301),
    [aux_sym_from_token1] = ACTIONS(301),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [aux_sym_stopsignal_token1] = ACTIONS(305),
    [aux_sym_shell_token1] = ACTIONS(305),
    [aux_sym_volume_token1] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_workdir_token1] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [aux_sym_user_token1] = ACTIONS(305),
    [anon_sym_COLON] = ACTIONS(307),
    [aux_sym_user_id_token1] = ACTIONS(305),
    [aux_sym_cmd_token1] = ACTIONS(305),
    [aux_sym_entrypoint_token1] = ACTIONS(305),
    [aux_sym_run_token1] = ACTIONS(305),
    [aux_sym_maintainer_token1] = ACTIONS(305),
    [aux_sym_expose_token1] = ACTIONS(305),
    [aux_sym_from_token1] = ACTIONS(305),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [83] = {
    [aux_sym__repository_start_repeat3] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_stopsignal_token1] = ACTIONS(265),
    [aux_sym_shell_token1] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(265),
    [aux_sym_workdir_token1] = ACTIONS(265),
    [aux_sym_user_token1] = ACTIONS(265),
    [aux_sym_cmd_token1] = ACTIONS(265),
    [aux_sym_entrypoint_token1] = ACTIONS(265),
    [aux_sym_run_token1] = ACTIONS(265),
    [aux_sym_maintainer_token1] = ACTIONS(265),
    [aux_sym_expose_token1] = ACTIONS(265),
    [aux_sym_from_token1] = ACTIONS(265),
    [aux_sym__repository_start_token3] = ACTIONS(267),
    [aux_sym__repository_start_token8] = ACTIONS(111),
    [aux_sym__repository_start_token11] = ACTIONS(111),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [aux_sym_stopsignal_token1] = ACTIONS(309),
    [aux_sym_shell_token1] = ACTIONS(309),
    [aux_sym_volume_token1] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [aux_sym_workdir_token1] = ACTIONS(309),
    [anon_sym_DOLLAR] = ACTIONS(309),
    [aux_sym_user_token1] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(309),
    [aux_sym_user_id_token1] = ACTIONS(309),
    [aux_sym_cmd_token1] = ACTIONS(309),
    [aux_sym_entrypoint_token1] = ACTIONS(309),
    [aux_sym_run_token1] = ACTIONS(309),
    [aux_sym_maintainer_token1] = ACTIONS(309),
    [aux_sym_expose_token1] = ACTIONS(309),
    [aux_sym_from_token1] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [85] = {
    [aux_sym__repository_start_repeat3] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_stopsignal_token1] = ACTIONS(277),
    [aux_sym_shell_token1] = ACTIONS(277),
    [aux_sym_volume_token1] = ACTIONS(277),
    [aux_sym_workdir_token1] = ACTIONS(277),
    [aux_sym_user_token1] = ACTIONS(277),
    [aux_sym_cmd_token1] = ACTIONS(277),
    [aux_sym_entrypoint_token1] = ACTIONS(277),
    [aux_sym_run_token1] = ACTIONS(277),
    [aux_sym_maintainer_token1] = ACTIONS(277),
    [aux_sym_expose_token1] = ACTIONS(277),
    [aux_sym_from_token1] = ACTIONS(277),
    [aux_sym__repository_start_token3] = ACTIONS(279),
    [aux_sym__repository_start_token8] = ACTIONS(111),
    [aux_sym__repository_start_token11] = ACTIONS(111),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [86] = {
    [sym_path] = STATE(80),
    [aux_sym_volume_repeat1] = STATE(80),
    [ts_builtin_sym_end] = ACTIONS(311),
    [aux_sym_stopsignal_token1] = ACTIONS(313),
    [aux_sym_shell_token1] = ACTIONS(313),
    [aux_sym_volume_token1] = ACTIONS(313),
    [aux_sym_path_token1] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [aux_sym_workdir_token1] = ACTIONS(313),
    [aux_sym_user_token1] = ACTIONS(313),
    [aux_sym_cmd_token1] = ACTIONS(313),
    [aux_sym_entrypoint_token1] = ACTIONS(313),
    [aux_sym_run_token1] = ACTIONS(313),
    [aux_sym_maintainer_token1] = ACTIONS(313),
    [aux_sym_expose_token1] = ACTIONS(313),
    [aux_sym_from_token1] = ACTIONS(313),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [87] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_stopsignal_token1] = ACTIONS(265),
    [aux_sym_shell_token1] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(265),
    [aux_sym_workdir_token1] = ACTIONS(265),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [aux_sym_user_token1] = ACTIONS(265),
    [aux_sym_cmd_token1] = ACTIONS(265),
    [aux_sym_entrypoint_token1] = ACTIONS(265),
    [aux_sym_run_token1] = ACTIONS(265),
    [aux_sym_maintainer_token1] = ACTIONS(265),
    [aux_sym_expose_token1] = ACTIONS(265),
    [aux_sym_from_token1] = ACTIONS(265),
    [aux_sym__repository_start_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(267),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [88] = {
    [aux_sym_workdir_repeat1] = STATE(88),
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_stopsignal_token1] = ACTIONS(321),
    [aux_sym_shell_token1] = ACTIONS(321),
    [aux_sym_volume_token1] = ACTIONS(321),
    [aux_sym_workdir_token1] = ACTIONS(321),
    [anon_sym_DOLLAR] = ACTIONS(323),
    [aux_sym_workdir_token4] = ACTIONS(323),
    [aux_sym_workdir_token5] = ACTIONS(321),
    [aux_sym_user_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_maintainer_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [89] = {
    [aux_sym__repository_start_repeat2] = STATE(77),
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_stopsignal_token1] = ACTIONS(265),
    [aux_sym_shell_token1] = ACTIONS(265),
    [aux_sym_volume_token1] = ACTIONS(265),
    [aux_sym_workdir_token1] = ACTIONS(265),
    [aux_sym_user_token1] = ACTIONS(265),
    [aux_sym_cmd_token1] = ACTIONS(265),
    [aux_sym_entrypoint_token1] = ACTIONS(265),
    [aux_sym_run_token1] = ACTIONS(265),
    [aux_sym_maintainer_token1] = ACTIONS(265),
    [aux_sym_expose_token1] = ACTIONS(265),
    [aux_sym_from_token1] = ACTIONS(265),
    [aux_sym__repository_start_token3] = ACTIONS(267),
    [aux_sym__repository_start_token4] = ACTIONS(113),
    [aux_sym__repository_start_token7] = ACTIONS(113),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [90] = {
    [aux_sym__anything] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(326),
    [aux_sym_stopsignal_token1] = ACTIONS(328),
    [aux_sym_shell_token1] = ACTIONS(328),
    [aux_sym_volume_token1] = ACTIONS(328),
    [aux_sym_workdir_token1] = ACTIONS(328),
    [aux_sym_user_token1] = ACTIONS(328),
    [aux_sym_cmd_token1] = ACTIONS(328),
    [aux_sym_entrypoint_token1] = ACTIONS(328),
    [aux_sym_run_token1] = ACTIONS(328),
    [aux_sym_maintainer_token1] = ACTIONS(328),
    [aux_sym_expose_token1] = ACTIONS(328),
    [aux_sym_from_token1] = ACTIONS(328),
    [aux_sym__anything_token1] = ACTIONS(330),
    [aux_sym__anything_token2] = ACTIONS(330),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_stopsignal_token1] = ACTIONS(94),
    [aux_sym_shell_token1] = ACTIONS(94),
    [aux_sym_volume_token1] = ACTIONS(94),
    [aux_sym_workdir_token1] = ACTIONS(94),
    [aux_sym_user_token1] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(94),
    [aux_sym_cmd_token1] = ACTIONS(94),
    [aux_sym_entrypoint_token1] = ACTIONS(94),
    [aux_sym_run_token1] = ACTIONS(94),
    [aux_sym_maintainer_token1] = ACTIONS(94),
    [aux_sym_expose_token1] = ACTIONS(94),
    [aux_sym_from_token1] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(94),
    [aux_sym_from_token2] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_stopsignal_token1] = ACTIONS(165),
    [aux_sym_shell_token1] = ACTIONS(165),
    [aux_sym_volume_token1] = ACTIONS(165),
    [aux_sym_workdir_token1] = ACTIONS(165),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [aux_sym_workdir_token4] = ACTIONS(165),
    [aux_sym_workdir_token5] = ACTIONS(165),
    [aux_sym_user_token1] = ACTIONS(165),
    [aux_sym_cmd_token1] = ACTIONS(165),
    [aux_sym_entrypoint_token1] = ACTIONS(165),
    [aux_sym_run_token1] = ACTIONS(165),
    [aux_sym_maintainer_token1] = ACTIONS(165),
    [aux_sym_expose_token1] = ACTIONS(165),
    [aux_sym_from_token1] = ACTIONS(165),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [aux_sym_stopsignal_token1] = ACTIONS(332),
    [aux_sym_shell_token1] = ACTIONS(332),
    [aux_sym_volume_token1] = ACTIONS(332),
    [aux_sym_workdir_token1] = ACTIONS(332),
    [aux_sym_user_token1] = ACTIONS(332),
    [anon_sym_COLON] = ACTIONS(334),
    [aux_sym_cmd_token1] = ACTIONS(332),
    [aux_sym_entrypoint_token1] = ACTIONS(332),
    [aux_sym_run_token1] = ACTIONS(332),
    [aux_sym_maintainer_token1] = ACTIONS(332),
    [aux_sym_expose_token1] = ACTIONS(332),
    [aux_sym_from_token1] = ACTIONS(332),
    [anon_sym_AT] = ACTIONS(336),
    [aux_sym_from_token2] = ACTIONS(338),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_stopsignal_token1] = ACTIONS(161),
    [aux_sym_shell_token1] = ACTIONS(161),
    [aux_sym_volume_token1] = ACTIONS(161),
    [aux_sym_workdir_token1] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [aux_sym_workdir_token4] = ACTIONS(161),
    [aux_sym_workdir_token5] = ACTIONS(161),
    [aux_sym_user_token1] = ACTIONS(161),
    [aux_sym_cmd_token1] = ACTIONS(161),
    [aux_sym_entrypoint_token1] = ACTIONS(161),
    [aux_sym_run_token1] = ACTIONS(161),
    [aux_sym_maintainer_token1] = ACTIONS(161),
    [aux_sym_expose_token1] = ACTIONS(161),
    [aux_sym_from_token1] = ACTIONS(161),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [aux_sym_stopsignal_token1] = ACTIONS(340),
    [aux_sym_shell_token1] = ACTIONS(340),
    [aux_sym_volume_token1] = ACTIONS(340),
    [aux_sym_workdir_token1] = ACTIONS(340),
    [aux_sym_user_token1] = ACTIONS(340),
    [anon_sym_COLON] = ACTIONS(342),
    [aux_sym_cmd_token1] = ACTIONS(340),
    [aux_sym_entrypoint_token1] = ACTIONS(340),
    [aux_sym_run_token1] = ACTIONS(340),
    [aux_sym_maintainer_token1] = ACTIONS(340),
    [aux_sym_expose_token1] = ACTIONS(340),
    [aux_sym_from_token1] = ACTIONS(340),
    [anon_sym_AT] = ACTIONS(344),
    [aux_sym_from_token2] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym_stopsignal_token1] = ACTIONS(169),
    [aux_sym_shell_token1] = ACTIONS(169),
    [aux_sym_volume_token1] = ACTIONS(169),
    [aux_sym_workdir_token1] = ACTIONS(169),
    [anon_sym_DOLLAR] = ACTIONS(169),
    [aux_sym_workdir_token4] = ACTIONS(169),
    [aux_sym_workdir_token5] = ACTIONS(169),
    [aux_sym_user_token1] = ACTIONS(169),
    [aux_sym_cmd_token1] = ACTIONS(169),
    [aux_sym_entrypoint_token1] = ACTIONS(169),
    [aux_sym_run_token1] = ACTIONS(169),
    [aux_sym_maintainer_token1] = ACTIONS(169),
    [aux_sym_expose_token1] = ACTIONS(169),
    [aux_sym_from_token1] = ACTIONS(169),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [97] = {
    [aux_sym__anything] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(348),
    [aux_sym_stopsignal_token1] = ACTIONS(350),
    [aux_sym_shell_token1] = ACTIONS(350),
    [aux_sym_volume_token1] = ACTIONS(350),
    [aux_sym_workdir_token1] = ACTIONS(350),
    [aux_sym_user_token1] = ACTIONS(350),
    [aux_sym_cmd_token1] = ACTIONS(350),
    [aux_sym_entrypoint_token1] = ACTIONS(350),
    [aux_sym_run_token1] = ACTIONS(350),
    [aux_sym_maintainer_token1] = ACTIONS(350),
    [aux_sym_expose_token1] = ACTIONS(350),
    [aux_sym_from_token1] = ACTIONS(350),
    [aux_sym__anything_token1] = ACTIONS(352),
    [aux_sym__anything_token2] = ACTIONS(352),
    [sym_comment] = ACTIONS(354),
    [sym_line_continuation] = ACTIONS(92),
  },
  [98] = {
    [aux_sym__anything] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(356),
    [aux_sym_stopsignal_token1] = ACTIONS(358),
    [aux_sym_shell_token1] = ACTIONS(358),
    [aux_sym_volume_token1] = ACTIONS(358),
    [aux_sym_workdir_token1] = ACTIONS(358),
    [aux_sym_user_token1] = ACTIONS(358),
    [aux_sym_cmd_token1] = ACTIONS(358),
    [aux_sym_entrypoint_token1] = ACTIONS(358),
    [aux_sym_run_token1] = ACTIONS(358),
    [aux_sym_maintainer_token1] = ACTIONS(358),
    [aux_sym_expose_token1] = ACTIONS(358),
    [aux_sym_from_token1] = ACTIONS(358),
    [aux_sym__anything_token1] = ACTIONS(360),
    [aux_sym__anything_token2] = ACTIONS(360),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_stopsignal_token1] = ACTIONS(363),
    [aux_sym_shell_token1] = ACTIONS(363),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [aux_sym_user_token1] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(365),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [anon_sym_AT] = ACTIONS(367),
    [aux_sym_from_token2] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [aux_sym_stopsignal_token1] = ACTIONS(371),
    [aux_sym_shell_token1] = ACTIONS(371),
    [aux_sym_volume_token1] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [aux_sym_workdir_token1] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(371),
    [aux_sym_user_token1] = ACTIONS(371),
    [aux_sym_user_id_token1] = ACTIONS(371),
    [aux_sym_cmd_token1] = ACTIONS(371),
    [aux_sym_entrypoint_token1] = ACTIONS(371),
    [aux_sym_run_token1] = ACTIONS(371),
    [aux_sym_maintainer_token1] = ACTIONS(371),
    [aux_sym_expose_token1] = ACTIONS(371),
    [aux_sym_from_token1] = ACTIONS(371),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [aux_sym_stopsignal_token1] = ACTIONS(233),
    [aux_sym_shell_token1] = ACTIONS(233),
    [aux_sym_volume_token1] = ACTIONS(233),
    [aux_sym_workdir_token1] = ACTIONS(233),
    [aux_sym_user_token1] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [aux_sym_cmd_token1] = ACTIONS(233),
    [aux_sym_entrypoint_token1] = ACTIONS(233),
    [aux_sym_run_token1] = ACTIONS(233),
    [aux_sym_maintainer_token1] = ACTIONS(233),
    [aux_sym_expose_token1] = ACTIONS(233),
    [aux_sym_from_token1] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(233),
    [aux_sym_from_token2] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [aux_sym_stopsignal_token1] = ACTIONS(321),
    [aux_sym_shell_token1] = ACTIONS(321),
    [aux_sym_volume_token1] = ACTIONS(321),
    [aux_sym_workdir_token1] = ACTIONS(321),
    [anon_sym_DOLLAR] = ACTIONS(321),
    [aux_sym_workdir_token4] = ACTIONS(321),
    [aux_sym_workdir_token5] = ACTIONS(321),
    [aux_sym_user_token1] = ACTIONS(321),
    [aux_sym_cmd_token1] = ACTIONS(321),
    [aux_sym_entrypoint_token1] = ACTIONS(321),
    [aux_sym_run_token1] = ACTIONS(321),
    [aux_sym_maintainer_token1] = ACTIONS(321),
    [aux_sym_expose_token1] = ACTIONS(321),
    [aux_sym_from_token1] = ACTIONS(321),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_stopsignal_token1] = ACTIONS(124),
    [aux_sym_shell_token1] = ACTIONS(124),
    [aux_sym_volume_token1] = ACTIONS(124),
    [aux_sym_workdir_token1] = ACTIONS(124),
    [aux_sym_user_token1] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(124),
    [aux_sym_cmd_token1] = ACTIONS(124),
    [aux_sym_entrypoint_token1] = ACTIONS(124),
    [aux_sym_run_token1] = ACTIONS(124),
    [aux_sym_maintainer_token1] = ACTIONS(124),
    [aux_sym_expose_token1] = ACTIONS(124),
    [aux_sym_from_token1] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(124),
    [aux_sym_from_token2] = ACTIONS(124),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [aux_sym_stopsignal_token1] = ACTIONS(373),
    [aux_sym_shell_token1] = ACTIONS(373),
    [aux_sym_volume_token1] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [aux_sym_workdir_token1] = ACTIONS(373),
    [anon_sym_DOLLAR] = ACTIONS(373),
    [aux_sym_user_token1] = ACTIONS(373),
    [aux_sym_user_id_token1] = ACTIONS(373),
    [aux_sym_cmd_token1] = ACTIONS(373),
    [aux_sym_entrypoint_token1] = ACTIONS(373),
    [aux_sym_run_token1] = ACTIONS(373),
    [aux_sym_maintainer_token1] = ACTIONS(373),
    [aux_sym_expose_token1] = ACTIONS(373),
    [aux_sym_from_token1] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_stopsignal_token1] = ACTIONS(253),
    [aux_sym_shell_token1] = ACTIONS(253),
    [aux_sym_volume_token1] = ACTIONS(253),
    [aux_sym_workdir_token1] = ACTIONS(253),
    [aux_sym_user_token1] = ACTIONS(253),
    [anon_sym_COLON] = ACTIONS(253),
    [aux_sym_cmd_token1] = ACTIONS(253),
    [aux_sym_entrypoint_token1] = ACTIONS(253),
    [aux_sym_run_token1] = ACTIONS(253),
    [aux_sym_maintainer_token1] = ACTIONS(253),
    [aux_sym_expose_token1] = ACTIONS(253),
    [aux_sym_from_token1] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(253),
    [aux_sym_from_token2] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [106] = {
    [aux_sym__anything] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(356),
    [aux_sym_stopsignal_token1] = ACTIONS(358),
    [aux_sym_shell_token1] = ACTIONS(358),
    [aux_sym_volume_token1] = ACTIONS(358),
    [aux_sym_workdir_token1] = ACTIONS(358),
    [aux_sym_user_token1] = ACTIONS(358),
    [aux_sym_cmd_token1] = ACTIONS(358),
    [aux_sym_entrypoint_token1] = ACTIONS(358),
    [aux_sym_run_token1] = ACTIONS(358),
    [aux_sym_maintainer_token1] = ACTIONS(358),
    [aux_sym_expose_token1] = ACTIONS(358),
    [aux_sym_from_token1] = ACTIONS(358),
    [aux_sym__anything_token1] = ACTIONS(375),
    [aux_sym__anything_token2] = ACTIONS(375),
    [sym_comment] = ACTIONS(358),
    [sym_line_continuation] = ACTIONS(92),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [aux_sym_stopsignal_token1] = ACTIONS(378),
    [aux_sym_shell_token1] = ACTIONS(378),
    [aux_sym_volume_token1] = ACTIONS(378),
    [aux_sym_workdir_token1] = ACTIONS(378),
    [aux_sym_user_token1] = ACTIONS(378),
    [anon_sym_COLON] = ACTIONS(380),
    [aux_sym_cmd_token1] = ACTIONS(378),
    [aux_sym_entrypoint_token1] = ACTIONS(378),
    [aux_sym_run_token1] = ACTIONS(378),
    [aux_sym_maintainer_token1] = ACTIONS(378),
    [aux_sym_expose_token1] = ACTIONS(378),
    [aux_sym_from_token1] = ACTIONS(378),
    [anon_sym_AT] = ACTIONS(382),
    [aux_sym_from_token2] = ACTIONS(384),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [108] = {
    [aux_sym__anything] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(386),
    [aux_sym_stopsignal_token1] = ACTIONS(388),
    [aux_sym_shell_token1] = ACTIONS(388),
    [aux_sym_volume_token1] = ACTIONS(388),
    [aux_sym_workdir_token1] = ACTIONS(388),
    [aux_sym_user_token1] = ACTIONS(388),
    [aux_sym_cmd_token1] = ACTIONS(388),
    [aux_sym_entrypoint_token1] = ACTIONS(388),
    [aux_sym_run_token1] = ACTIONS(388),
    [aux_sym_maintainer_token1] = ACTIONS(388),
    [aux_sym_expose_token1] = ACTIONS(388),
    [aux_sym_from_token1] = ACTIONS(388),
    [aux_sym__anything_token1] = ACTIONS(390),
    [aux_sym__anything_token2] = ACTIONS(390),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_stopsignal_token1] = ACTIONS(363),
    [aux_sym_shell_token1] = ACTIONS(363),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [aux_sym_user_token1] = ACTIONS(363),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [anon_sym_AT] = ACTIONS(367),
    [aux_sym_from_token2] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [aux_sym_stopsignal_token1] = ACTIONS(340),
    [aux_sym_shell_token1] = ACTIONS(340),
    [aux_sym_volume_token1] = ACTIONS(340),
    [aux_sym_workdir_token1] = ACTIONS(340),
    [aux_sym_user_token1] = ACTIONS(340),
    [aux_sym_cmd_token1] = ACTIONS(340),
    [aux_sym_entrypoint_token1] = ACTIONS(340),
    [aux_sym_run_token1] = ACTIONS(340),
    [aux_sym_maintainer_token1] = ACTIONS(340),
    [aux_sym_expose_token1] = ACTIONS(340),
    [aux_sym_from_token1] = ACTIONS(340),
    [anon_sym_AT] = ACTIONS(344),
    [aux_sym_from_token2] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_stopsignal_token1] = ACTIONS(209),
    [aux_sym_shell_token1] = ACTIONS(209),
    [aux_sym_volume_token1] = ACTIONS(209),
    [aux_sym_workdir_token1] = ACTIONS(209),
    [aux_sym_user_token1] = ACTIONS(209),
    [aux_sym_cmd_token1] = ACTIONS(209),
    [aux_sym_entrypoint_token1] = ACTIONS(209),
    [aux_sym_run_token1] = ACTIONS(209),
    [aux_sym_maintainer_token1] = ACTIONS(209),
    [aux_sym_expose_token1] = ACTIONS(209),
    [aux_sym_from_token1] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(209),
    [aux_sym_from_token2] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [aux_sym_stopsignal_token1] = ACTIONS(392),
    [aux_sym_shell_token1] = ACTIONS(392),
    [aux_sym_volume_token1] = ACTIONS(392),
    [aux_sym_workdir_token1] = ACTIONS(392),
    [aux_sym_user_token1] = ACTIONS(392),
    [aux_sym_cmd_token1] = ACTIONS(392),
    [aux_sym_entrypoint_token1] = ACTIONS(392),
    [aux_sym_run_token1] = ACTIONS(392),
    [aux_sym_maintainer_token1] = ACTIONS(392),
    [aux_sym_expose_token1] = ACTIONS(392),
    [aux_sym_from_token1] = ACTIONS(392),
    [anon_sym_AT] = ACTIONS(394),
    [aux_sym_from_token2] = ACTIONS(396),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [aux_sym_stopsignal_token1] = ACTIONS(398),
    [aux_sym_shell_token1] = ACTIONS(398),
    [aux_sym_volume_token1] = ACTIONS(398),
    [aux_sym_workdir_token1] = ACTIONS(398),
    [aux_sym_user_token1] = ACTIONS(398),
    [aux_sym_cmd_token1] = ACTIONS(398),
    [aux_sym_entrypoint_token1] = ACTIONS(398),
    [aux_sym_run_token1] = ACTIONS(398),
    [aux_sym_maintainer_token1] = ACTIONS(398),
    [aux_sym_expose_token1] = ACTIONS(398),
    [aux_sym_from_token1] = ACTIONS(398),
    [anon_sym_AT] = ACTIONS(398),
    [aux_sym_from_token2] = ACTIONS(398),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym_stopsignal_token1] = ACTIONS(400),
    [aux_sym_shell_token1] = ACTIONS(400),
    [aux_sym_volume_token1] = ACTIONS(400),
    [aux_sym_workdir_token1] = ACTIONS(400),
    [aux_sym_user_token1] = ACTIONS(400),
    [aux_sym_cmd_token1] = ACTIONS(400),
    [aux_sym_entrypoint_token1] = ACTIONS(400),
    [aux_sym_run_token1] = ACTIONS(400),
    [aux_sym_maintainer_token1] = ACTIONS(400),
    [aux_sym_expose_token1] = ACTIONS(400),
    [aux_sym_from_token1] = ACTIONS(400),
    [anon_sym_AT] = ACTIONS(402),
    [aux_sym_from_token2] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [aux_sym_stopsignal_token1] = ACTIONS(408),
    [aux_sym_shell_token1] = ACTIONS(408),
    [aux_sym_volume_token1] = ACTIONS(408),
    [aux_sym_path_token1] = ACTIONS(408),
    [anon_sym_DQUOTE] = ACTIONS(406),
    [aux_sym_workdir_token1] = ACTIONS(408),
    [aux_sym_user_token1] = ACTIONS(408),
    [aux_sym_cmd_token1] = ACTIONS(408),
    [aux_sym_entrypoint_token1] = ACTIONS(408),
    [aux_sym_run_token1] = ACTIONS(408),
    [aux_sym_maintainer_token1] = ACTIONS(408),
    [aux_sym_expose_token1] = ACTIONS(408),
    [aux_sym_from_token1] = ACTIONS(408),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [aux_sym_stopsignal_token1] = ACTIONS(215),
    [aux_sym_shell_token1] = ACTIONS(215),
    [aux_sym_volume_token1] = ACTIONS(215),
    [aux_sym_workdir_token1] = ACTIONS(215),
    [aux_sym_user_token1] = ACTIONS(215),
    [aux_sym_cmd_token1] = ACTIONS(215),
    [aux_sym_entrypoint_token1] = ACTIONS(215),
    [aux_sym_run_token1] = ACTIONS(215),
    [aux_sym_maintainer_token1] = ACTIONS(215),
    [aux_sym_expose_token1] = ACTIONS(215),
    [aux_sym_from_token1] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(215),
    [aux_sym_from_token2] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [aux_sym_stopsignal_token1] = ACTIONS(410),
    [aux_sym_shell_token1] = ACTIONS(410),
    [aux_sym_volume_token1] = ACTIONS(410),
    [aux_sym_workdir_token1] = ACTIONS(410),
    [aux_sym_user_token1] = ACTIONS(410),
    [aux_sym_cmd_token1] = ACTIONS(410),
    [aux_sym_entrypoint_token1] = ACTIONS(410),
    [aux_sym_run_token1] = ACTIONS(410),
    [aux_sym_maintainer_token1] = ACTIONS(410),
    [aux_sym_expose_token1] = ACTIONS(410),
    [aux_sym_from_token1] = ACTIONS(410),
    [anon_sym_AT] = ACTIONS(410),
    [aux_sym_from_token2] = ACTIONS(410),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [aux_sym_stopsignal_token1] = ACTIONS(414),
    [aux_sym_shell_token1] = ACTIONS(414),
    [aux_sym_volume_token1] = ACTIONS(414),
    [aux_sym_path_token1] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(412),
    [aux_sym_workdir_token1] = ACTIONS(414),
    [aux_sym_user_token1] = ACTIONS(414),
    [aux_sym_cmd_token1] = ACTIONS(414),
    [aux_sym_entrypoint_token1] = ACTIONS(414),
    [aux_sym_run_token1] = ACTIONS(414),
    [aux_sym_maintainer_token1] = ACTIONS(414),
    [aux_sym_expose_token1] = ACTIONS(414),
    [aux_sym_from_token1] = ACTIONS(414),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [aux_sym_stopsignal_token1] = ACTIONS(340),
    [aux_sym_shell_token1] = ACTIONS(340),
    [aux_sym_volume_token1] = ACTIONS(340),
    [aux_sym_workdir_token1] = ACTIONS(340),
    [aux_sym_user_token1] = ACTIONS(340),
    [aux_sym_cmd_token1] = ACTIONS(340),
    [aux_sym_entrypoint_token1] = ACTIONS(340),
    [aux_sym_run_token1] = ACTIONS(340),
    [aux_sym_maintainer_token1] = ACTIONS(340),
    [aux_sym_expose_token1] = ACTIONS(340),
    [aux_sym_from_token1] = ACTIONS(340),
    [aux_sym_from_token2] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [aux_sym_stopsignal_token1] = ACTIONS(239),
    [aux_sym_shell_token1] = ACTIONS(239),
    [aux_sym_volume_token1] = ACTIONS(239),
    [aux_sym_workdir_token1] = ACTIONS(239),
    [aux_sym_user_token1] = ACTIONS(239),
    [aux_sym_cmd_token1] = ACTIONS(239),
    [aux_sym_entrypoint_token1] = ACTIONS(239),
    [aux_sym_run_token1] = ACTIONS(239),
    [aux_sym_maintainer_token1] = ACTIONS(239),
    [aux_sym_expose_token1] = ACTIONS(239),
    [aux_sym_from_token1] = ACTIONS(239),
    [aux_sym_from_token2] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [aux_sym_stopsignal_token1] = ACTIONS(392),
    [aux_sym_shell_token1] = ACTIONS(392),
    [aux_sym_volume_token1] = ACTIONS(392),
    [aux_sym_workdir_token1] = ACTIONS(392),
    [aux_sym_user_token1] = ACTIONS(392),
    [aux_sym_cmd_token1] = ACTIONS(392),
    [aux_sym_entrypoint_token1] = ACTIONS(392),
    [aux_sym_run_token1] = ACTIONS(392),
    [aux_sym_maintainer_token1] = ACTIONS(392),
    [aux_sym_expose_token1] = ACTIONS(392),
    [aux_sym_from_token1] = ACTIONS(392),
    [aux_sym_from_token2] = ACTIONS(396),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [aux_sym_stopsignal_token1] = ACTIONS(416),
    [aux_sym_shell_token1] = ACTIONS(416),
    [aux_sym_volume_token1] = ACTIONS(416),
    [aux_sym_workdir_token1] = ACTIONS(416),
    [aux_sym_user_token1] = ACTIONS(416),
    [aux_sym_cmd_token1] = ACTIONS(416),
    [aux_sym_entrypoint_token1] = ACTIONS(416),
    [aux_sym_run_token1] = ACTIONS(416),
    [aux_sym_maintainer_token1] = ACTIONS(416),
    [aux_sym_expose_token1] = ACTIONS(416),
    [aux_sym_from_token1] = ACTIONS(416),
    [aux_sym_from_token2] = ACTIONS(416),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [aux_sym_stopsignal_token1] = ACTIONS(418),
    [aux_sym_shell_token1] = ACTIONS(418),
    [aux_sym_volume_token1] = ACTIONS(418),
    [aux_sym_workdir_token1] = ACTIONS(418),
    [aux_sym_user_token1] = ACTIONS(418),
    [anon_sym_COLON] = ACTIONS(418),
    [aux_sym_cmd_token1] = ACTIONS(418),
    [aux_sym_entrypoint_token1] = ACTIONS(418),
    [aux_sym_run_token1] = ACTIONS(418),
    [aux_sym_maintainer_token1] = ACTIONS(418),
    [aux_sym_expose_token1] = ACTIONS(418),
    [aux_sym_from_token1] = ACTIONS(418),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym_stopsignal_token1] = ACTIONS(400),
    [aux_sym_shell_token1] = ACTIONS(400),
    [aux_sym_volume_token1] = ACTIONS(400),
    [aux_sym_workdir_token1] = ACTIONS(400),
    [aux_sym_user_token1] = ACTIONS(400),
    [aux_sym_cmd_token1] = ACTIONS(400),
    [aux_sym_entrypoint_token1] = ACTIONS(400),
    [aux_sym_run_token1] = ACTIONS(400),
    [aux_sym_maintainer_token1] = ACTIONS(400),
    [aux_sym_expose_token1] = ACTIONS(400),
    [aux_sym_from_token1] = ACTIONS(400),
    [aux_sym_from_token2] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_stopsignal_token1] = ACTIONS(363),
    [aux_sym_shell_token1] = ACTIONS(363),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [aux_sym_user_token1] = ACTIONS(363),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [aux_sym_from_token2] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [aux_sym_stopsignal_token1] = ACTIONS(420),
    [aux_sym_shell_token1] = ACTIONS(420),
    [aux_sym_volume_token1] = ACTIONS(420),
    [aux_sym_workdir_token1] = ACTIONS(420),
    [aux_sym_user_token1] = ACTIONS(420),
    [aux_sym_cmd_token1] = ACTIONS(420),
    [aux_sym_entrypoint_token1] = ACTIONS(420),
    [aux_sym_run_token1] = ACTIONS(420),
    [aux_sym_maintainer_token1] = ACTIONS(420),
    [aux_sym_expose_token1] = ACTIONS(420),
    [aux_sym_from_token1] = ACTIONS(420),
    [aux_sym_from_token2] = ACTIONS(420),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [aux_sym_stopsignal_token1] = ACTIONS(422),
    [aux_sym_shell_token1] = ACTIONS(422),
    [aux_sym_volume_token1] = ACTIONS(422),
    [aux_sym_workdir_token1] = ACTIONS(422),
    [aux_sym_user_token1] = ACTIONS(422),
    [aux_sym_cmd_token1] = ACTIONS(422),
    [aux_sym_entrypoint_token1] = ACTIONS(422),
    [aux_sym_run_token1] = ACTIONS(422),
    [aux_sym_maintainer_token1] = ACTIONS(422),
    [aux_sym_expose_token1] = ACTIONS(422),
    [aux_sym_from_token1] = ACTIONS(422),
    [aux_sym_from_token2] = ACTIONS(424),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [128] = {
    [sym_repository] = STATE(183),
    [sym__repository_start] = STATE(178),
    [sym_image] = STATE(107),
    [anon_sym_DOLLAR] = ACTIONS(426),
    [anon_sym_DASH_DASHplatform_EQ] = ACTIONS(428),
    [aux_sym_platform_token1] = ACTIONS(430),
    [aux_sym__repository_start_token1] = ACTIONS(426),
    [aux_sym__repository_start_token4] = ACTIONS(432),
    [aux_sym__repository_start_token6] = ACTIONS(432),
    [aux_sym__repository_start_token8] = ACTIONS(434),
    [aux_sym__repository_start_token10] = ACTIONS(434),
    [aux_sym__repository_start_token12] = ACTIONS(436),
    [aux_sym__repository_start_token14] = ACTIONS(436),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(438),
    [aux_sym_stopsignal_token1] = ACTIONS(438),
    [aux_sym_shell_token1] = ACTIONS(438),
    [aux_sym_volume_token1] = ACTIONS(438),
    [aux_sym_workdir_token1] = ACTIONS(438),
    [aux_sym_user_token1] = ACTIONS(438),
    [anon_sym_COLON] = ACTIONS(438),
    [aux_sym_cmd_token1] = ACTIONS(438),
    [aux_sym_entrypoint_token1] = ACTIONS(438),
    [aux_sym_run_token1] = ACTIONS(438),
    [aux_sym_maintainer_token1] = ACTIONS(438),
    [aux_sym_expose_token1] = ACTIONS(438),
    [aux_sym_from_token1] = ACTIONS(438),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [aux_sym_stopsignal_token1] = ACTIONS(440),
    [aux_sym_shell_token1] = ACTIONS(440),
    [aux_sym_volume_token1] = ACTIONS(440),
    [aux_sym_workdir_token1] = ACTIONS(440),
    [aux_sym_user_token1] = ACTIONS(440),
    [aux_sym_cmd_token1] = ACTIONS(440),
    [aux_sym_entrypoint_token1] = ACTIONS(440),
    [aux_sym_run_token1] = ACTIONS(440),
    [aux_sym_maintainer_token1] = ACTIONS(440),
    [aux_sym_expose_token1] = ACTIONS(440),
    [aux_sym_from_token1] = ACTIONS(440),
    [aux_sym_from_token2] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [aux_sym_stopsignal_token1] = ACTIONS(221),
    [aux_sym_shell_token1] = ACTIONS(221),
    [aux_sym_volume_token1] = ACTIONS(221),
    [aux_sym_workdir_token1] = ACTIONS(221),
    [aux_sym_user_token1] = ACTIONS(221),
    [aux_sym_cmd_token1] = ACTIONS(221),
    [aux_sym_entrypoint_token1] = ACTIONS(221),
    [aux_sym_run_token1] = ACTIONS(221),
    [aux_sym_maintainer_token1] = ACTIONS(221),
    [aux_sym_expose_token1] = ACTIONS(221),
    [aux_sym_from_token1] = ACTIONS(221),
    [aux_sym_from_token2] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [aux_sym_stopsignal_token1] = ACTIONS(444),
    [aux_sym_shell_token1] = ACTIONS(444),
    [aux_sym_volume_token1] = ACTIONS(444),
    [aux_sym_workdir_token1] = ACTIONS(444),
    [aux_sym_user_token1] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(446),
    [aux_sym_cmd_token1] = ACTIONS(444),
    [aux_sym_entrypoint_token1] = ACTIONS(444),
    [aux_sym_run_token1] = ACTIONS(444),
    [aux_sym_maintainer_token1] = ACTIONS(444),
    [aux_sym_expose_token1] = ACTIONS(444),
    [aux_sym_from_token1] = ACTIONS(444),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [aux_sym_stopsignal_token1] = ACTIONS(444),
    [aux_sym_shell_token1] = ACTIONS(444),
    [aux_sym_volume_token1] = ACTIONS(444),
    [aux_sym_workdir_token1] = ACTIONS(444),
    [aux_sym_user_token1] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(448),
    [aux_sym_cmd_token1] = ACTIONS(444),
    [aux_sym_entrypoint_token1] = ACTIONS(444),
    [aux_sym_run_token1] = ACTIONS(444),
    [aux_sym_maintainer_token1] = ACTIONS(444),
    [aux_sym_expose_token1] = ACTIONS(444),
    [aux_sym_from_token1] = ACTIONS(444),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [aux_sym_stopsignal_token1] = ACTIONS(450),
    [aux_sym_shell_token1] = ACTIONS(450),
    [aux_sym_volume_token1] = ACTIONS(450),
    [aux_sym_workdir_token1] = ACTIONS(450),
    [aux_sym_user_token1] = ACTIONS(450),
    [aux_sym_cmd_token1] = ACTIONS(450),
    [aux_sym_entrypoint_token1] = ACTIONS(450),
    [aux_sym_run_token1] = ACTIONS(450),
    [aux_sym_maintainer_token1] = ACTIONS(450),
    [aux_sym_expose_token1] = ACTIONS(450),
    [aux_sym_from_token1] = ACTIONS(450),
    [aux_sym_from_token2] = ACTIONS(452),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(454),
    [aux_sym_stopsignal_token1] = ACTIONS(454),
    [aux_sym_shell_token1] = ACTIONS(454),
    [aux_sym_volume_token1] = ACTIONS(454),
    [aux_sym_workdir_token1] = ACTIONS(454),
    [aux_sym_user_token1] = ACTIONS(454),
    [aux_sym_cmd_token1] = ACTIONS(454),
    [aux_sym_entrypoint_token1] = ACTIONS(454),
    [aux_sym_run_token1] = ACTIONS(454),
    [aux_sym_maintainer_token1] = ACTIONS(454),
    [aux_sym_expose_token1] = ACTIONS(454),
    [aux_sym_from_token1] = ACTIONS(454),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [aux_sym_stopsignal_token1] = ACTIONS(275),
    [aux_sym_shell_token1] = ACTIONS(275),
    [aux_sym_volume_token1] = ACTIONS(275),
    [aux_sym_workdir_token1] = ACTIONS(275),
    [aux_sym_user_token1] = ACTIONS(275),
    [aux_sym_cmd_token1] = ACTIONS(275),
    [aux_sym_entrypoint_token1] = ACTIONS(275),
    [aux_sym_run_token1] = ACTIONS(275),
    [aux_sym_maintainer_token1] = ACTIONS(275),
    [aux_sym_expose_token1] = ACTIONS(275),
    [aux_sym_from_token1] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [aux_sym_stopsignal_token1] = ACTIONS(263),
    [aux_sym_shell_token1] = ACTIONS(263),
    [aux_sym_volume_token1] = ACTIONS(263),
    [aux_sym_workdir_token1] = ACTIONS(263),
    [aux_sym_user_token1] = ACTIONS(263),
    [aux_sym_cmd_token1] = ACTIONS(263),
    [aux_sym_entrypoint_token1] = ACTIONS(263),
    [aux_sym_run_token1] = ACTIONS(263),
    [aux_sym_maintainer_token1] = ACTIONS(263),
    [aux_sym_expose_token1] = ACTIONS(263),
    [aux_sym_from_token1] = ACTIONS(263),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [138] = {
    [sym__port_spec] = STATE(4),
    [sym_mapped_port] = STATE(4),
    [sym_mapped_no_lhs] = STATE(163),
    [sym__port] = STATE(82),
    [sym_port] = STATE(82),
    [sym_port_range] = STATE(82),
    [sym__port_part] = STATE(58),
    [aux_sym_expose_repeat1] = STATE(4),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(456),
    [aux_sym_user_id_token1] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [aux_sym_stopsignal_token1] = ACTIONS(458),
    [aux_sym_shell_token1] = ACTIONS(458),
    [aux_sym_volume_token1] = ACTIONS(458),
    [aux_sym_workdir_token1] = ACTIONS(458),
    [aux_sym_user_token1] = ACTIONS(458),
    [aux_sym_cmd_token1] = ACTIONS(458),
    [aux_sym_entrypoint_token1] = ACTIONS(458),
    [aux_sym_run_token1] = ACTIONS(458),
    [aux_sym_maintainer_token1] = ACTIONS(458),
    [aux_sym_expose_token1] = ACTIONS(458),
    [aux_sym_from_token1] = ACTIONS(458),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [aux_sym_stopsignal_token1] = ACTIONS(311),
    [aux_sym_shell_token1] = ACTIONS(311),
    [aux_sym_volume_token1] = ACTIONS(311),
    [aux_sym_workdir_token1] = ACTIONS(311),
    [aux_sym_user_token1] = ACTIONS(311),
    [aux_sym_cmd_token1] = ACTIONS(311),
    [aux_sym_entrypoint_token1] = ACTIONS(311),
    [aux_sym_run_token1] = ACTIONS(311),
    [aux_sym_maintainer_token1] = ACTIONS(311),
    [aux_sym_expose_token1] = ACTIONS(311),
    [aux_sym_from_token1] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [aux_sym_stopsignal_token1] = ACTIONS(460),
    [aux_sym_shell_token1] = ACTIONS(460),
    [aux_sym_volume_token1] = ACTIONS(460),
    [aux_sym_workdir_token1] = ACTIONS(460),
    [aux_sym_user_token1] = ACTIONS(460),
    [aux_sym_cmd_token1] = ACTIONS(460),
    [aux_sym_entrypoint_token1] = ACTIONS(460),
    [aux_sym_run_token1] = ACTIONS(460),
    [aux_sym_maintainer_token1] = ACTIONS(460),
    [aux_sym_expose_token1] = ACTIONS(460),
    [aux_sym_from_token1] = ACTIONS(460),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(462),
    [aux_sym_stopsignal_token1] = ACTIONS(462),
    [aux_sym_shell_token1] = ACTIONS(462),
    [aux_sym_volume_token1] = ACTIONS(462),
    [aux_sym_workdir_token1] = ACTIONS(462),
    [aux_sym_user_token1] = ACTIONS(462),
    [aux_sym_cmd_token1] = ACTIONS(462),
    [aux_sym_entrypoint_token1] = ACTIONS(462),
    [aux_sym_run_token1] = ACTIONS(462),
    [aux_sym_maintainer_token1] = ACTIONS(462),
    [aux_sym_expose_token1] = ACTIONS(462),
    [aux_sym_from_token1] = ACTIONS(462),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(464),
    [aux_sym_stopsignal_token1] = ACTIONS(464),
    [aux_sym_shell_token1] = ACTIONS(464),
    [aux_sym_volume_token1] = ACTIONS(464),
    [aux_sym_workdir_token1] = ACTIONS(464),
    [aux_sym_user_token1] = ACTIONS(464),
    [aux_sym_cmd_token1] = ACTIONS(464),
    [aux_sym_entrypoint_token1] = ACTIONS(464),
    [aux_sym_run_token1] = ACTIONS(464),
    [aux_sym_maintainer_token1] = ACTIONS(464),
    [aux_sym_expose_token1] = ACTIONS(464),
    [aux_sym_from_token1] = ACTIONS(464),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(466),
    [aux_sym_stopsignal_token1] = ACTIONS(466),
    [aux_sym_shell_token1] = ACTIONS(466),
    [aux_sym_volume_token1] = ACTIONS(466),
    [aux_sym_workdir_token1] = ACTIONS(466),
    [aux_sym_user_token1] = ACTIONS(466),
    [aux_sym_cmd_token1] = ACTIONS(466),
    [aux_sym_entrypoint_token1] = ACTIONS(466),
    [aux_sym_run_token1] = ACTIONS(466),
    [aux_sym_maintainer_token1] = ACTIONS(466),
    [aux_sym_expose_token1] = ACTIONS(466),
    [aux_sym_from_token1] = ACTIONS(466),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [aux_sym_stopsignal_token1] = ACTIONS(468),
    [aux_sym_shell_token1] = ACTIONS(468),
    [aux_sym_volume_token1] = ACTIONS(468),
    [aux_sym_workdir_token1] = ACTIONS(468),
    [aux_sym_user_token1] = ACTIONS(468),
    [aux_sym_cmd_token1] = ACTIONS(468),
    [aux_sym_entrypoint_token1] = ACTIONS(468),
    [aux_sym_run_token1] = ACTIONS(468),
    [aux_sym_maintainer_token1] = ACTIONS(468),
    [aux_sym_expose_token1] = ACTIONS(468),
    [aux_sym_from_token1] = ACTIONS(468),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [aux_sym_stopsignal_token1] = ACTIONS(392),
    [aux_sym_shell_token1] = ACTIONS(392),
    [aux_sym_volume_token1] = ACTIONS(392),
    [aux_sym_workdir_token1] = ACTIONS(392),
    [aux_sym_user_token1] = ACTIONS(392),
    [aux_sym_cmd_token1] = ACTIONS(392),
    [aux_sym_entrypoint_token1] = ACTIONS(392),
    [aux_sym_run_token1] = ACTIONS(392),
    [aux_sym_maintainer_token1] = ACTIONS(392),
    [aux_sym_expose_token1] = ACTIONS(392),
    [aux_sym_from_token1] = ACTIONS(392),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [aux_sym_stopsignal_token1] = ACTIONS(470),
    [aux_sym_shell_token1] = ACTIONS(470),
    [aux_sym_volume_token1] = ACTIONS(470),
    [aux_sym_workdir_token1] = ACTIONS(470),
    [aux_sym_user_token1] = ACTIONS(470),
    [aux_sym_cmd_token1] = ACTIONS(470),
    [aux_sym_entrypoint_token1] = ACTIONS(470),
    [aux_sym_run_token1] = ACTIONS(470),
    [aux_sym_maintainer_token1] = ACTIONS(470),
    [aux_sym_expose_token1] = ACTIONS(470),
    [aux_sym_from_token1] = ACTIONS(470),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [aux_sym_stopsignal_token1] = ACTIONS(472),
    [aux_sym_shell_token1] = ACTIONS(472),
    [aux_sym_volume_token1] = ACTIONS(472),
    [aux_sym_workdir_token1] = ACTIONS(472),
    [aux_sym_user_token1] = ACTIONS(472),
    [aux_sym_cmd_token1] = ACTIONS(472),
    [aux_sym_entrypoint_token1] = ACTIONS(472),
    [aux_sym_run_token1] = ACTIONS(472),
    [aux_sym_maintainer_token1] = ACTIONS(472),
    [aux_sym_expose_token1] = ACTIONS(472),
    [aux_sym_from_token1] = ACTIONS(472),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [aux_sym_stopsignal_token1] = ACTIONS(340),
    [aux_sym_shell_token1] = ACTIONS(340),
    [aux_sym_volume_token1] = ACTIONS(340),
    [aux_sym_workdir_token1] = ACTIONS(340),
    [aux_sym_user_token1] = ACTIONS(340),
    [aux_sym_cmd_token1] = ACTIONS(340),
    [aux_sym_entrypoint_token1] = ACTIONS(340),
    [aux_sym_run_token1] = ACTIONS(340),
    [aux_sym_maintainer_token1] = ACTIONS(340),
    [aux_sym_expose_token1] = ACTIONS(340),
    [aux_sym_from_token1] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [aux_sym_stopsignal_token1] = ACTIONS(474),
    [aux_sym_shell_token1] = ACTIONS(474),
    [aux_sym_volume_token1] = ACTIONS(474),
    [aux_sym_workdir_token1] = ACTIONS(474),
    [aux_sym_user_token1] = ACTIONS(474),
    [aux_sym_cmd_token1] = ACTIONS(474),
    [aux_sym_entrypoint_token1] = ACTIONS(474),
    [aux_sym_run_token1] = ACTIONS(474),
    [aux_sym_maintainer_token1] = ACTIONS(474),
    [aux_sym_expose_token1] = ACTIONS(474),
    [aux_sym_from_token1] = ACTIONS(474),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [aux_sym_stopsignal_token1] = ACTIONS(476),
    [aux_sym_shell_token1] = ACTIONS(476),
    [aux_sym_volume_token1] = ACTIONS(476),
    [aux_sym_workdir_token1] = ACTIONS(476),
    [aux_sym_user_token1] = ACTIONS(476),
    [aux_sym_cmd_token1] = ACTIONS(476),
    [aux_sym_entrypoint_token1] = ACTIONS(476),
    [aux_sym_run_token1] = ACTIONS(476),
    [aux_sym_maintainer_token1] = ACTIONS(476),
    [aux_sym_expose_token1] = ACTIONS(476),
    [aux_sym_from_token1] = ACTIONS(476),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [aux_sym_stopsignal_token1] = ACTIONS(400),
    [aux_sym_shell_token1] = ACTIONS(400),
    [aux_sym_volume_token1] = ACTIONS(400),
    [aux_sym_workdir_token1] = ACTIONS(400),
    [aux_sym_user_token1] = ACTIONS(400),
    [aux_sym_cmd_token1] = ACTIONS(400),
    [aux_sym_entrypoint_token1] = ACTIONS(400),
    [aux_sym_run_token1] = ACTIONS(400),
    [aux_sym_maintainer_token1] = ACTIONS(400),
    [aux_sym_expose_token1] = ACTIONS(400),
    [aux_sym_from_token1] = ACTIONS(400),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [aux_sym_stopsignal_token1] = ACTIONS(478),
    [aux_sym_shell_token1] = ACTIONS(478),
    [aux_sym_volume_token1] = ACTIONS(478),
    [aux_sym_workdir_token1] = ACTIONS(478),
    [aux_sym_user_token1] = ACTIONS(478),
    [aux_sym_cmd_token1] = ACTIONS(478),
    [aux_sym_entrypoint_token1] = ACTIONS(478),
    [aux_sym_run_token1] = ACTIONS(478),
    [aux_sym_maintainer_token1] = ACTIONS(478),
    [aux_sym_expose_token1] = ACTIONS(478),
    [aux_sym_from_token1] = ACTIONS(478),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(480),
    [aux_sym_stopsignal_token1] = ACTIONS(480),
    [aux_sym_shell_token1] = ACTIONS(480),
    [aux_sym_volume_token1] = ACTIONS(480),
    [aux_sym_workdir_token1] = ACTIONS(480),
    [aux_sym_user_token1] = ACTIONS(480),
    [aux_sym_cmd_token1] = ACTIONS(480),
    [aux_sym_entrypoint_token1] = ACTIONS(480),
    [aux_sym_run_token1] = ACTIONS(480),
    [aux_sym_maintainer_token1] = ACTIONS(480),
    [aux_sym_expose_token1] = ACTIONS(480),
    [aux_sym_from_token1] = ACTIONS(480),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [aux_sym_stopsignal_token1] = ACTIONS(299),
    [aux_sym_shell_token1] = ACTIONS(299),
    [aux_sym_volume_token1] = ACTIONS(299),
    [aux_sym_workdir_token1] = ACTIONS(299),
    [aux_sym_user_token1] = ACTIONS(299),
    [aux_sym_cmd_token1] = ACTIONS(299),
    [aux_sym_entrypoint_token1] = ACTIONS(299),
    [aux_sym_run_token1] = ACTIONS(299),
    [aux_sym_maintainer_token1] = ACTIONS(299),
    [aux_sym_expose_token1] = ACTIONS(299),
    [aux_sym_from_token1] = ACTIONS(299),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [156] = {
    [sym_repository] = STATE(194),
    [sym__repository_start] = STATE(178),
    [sym_image] = STATE(95),
    [anon_sym_DOLLAR] = ACTIONS(426),
    [aux_sym_platform_token1] = ACTIONS(430),
    [aux_sym__repository_start_token1] = ACTIONS(426),
    [aux_sym__repository_start_token4] = ACTIONS(432),
    [aux_sym__repository_start_token6] = ACTIONS(432),
    [aux_sym__repository_start_token8] = ACTIONS(434),
    [aux_sym__repository_start_token10] = ACTIONS(434),
    [aux_sym__repository_start_token12] = ACTIONS(436),
    [aux_sym__repository_start_token14] = ACTIONS(436),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [aux_sym_stopsignal_token1] = ACTIONS(482),
    [aux_sym_shell_token1] = ACTIONS(482),
    [aux_sym_volume_token1] = ACTIONS(482),
    [aux_sym_workdir_token1] = ACTIONS(482),
    [aux_sym_user_token1] = ACTIONS(482),
    [aux_sym_cmd_token1] = ACTIONS(482),
    [aux_sym_entrypoint_token1] = ACTIONS(482),
    [aux_sym_run_token1] = ACTIONS(482),
    [aux_sym_maintainer_token1] = ACTIONS(482),
    [aux_sym_expose_token1] = ACTIONS(482),
    [aux_sym_from_token1] = ACTIONS(482),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(484),
    [aux_sym_stopsignal_token1] = ACTIONS(484),
    [aux_sym_shell_token1] = ACTIONS(484),
    [aux_sym_volume_token1] = ACTIONS(484),
    [aux_sym_workdir_token1] = ACTIONS(484),
    [aux_sym_user_token1] = ACTIONS(484),
    [aux_sym_cmd_token1] = ACTIONS(484),
    [aux_sym_entrypoint_token1] = ACTIONS(484),
    [aux_sym_run_token1] = ACTIONS(484),
    [aux_sym_maintainer_token1] = ACTIONS(484),
    [aux_sym_expose_token1] = ACTIONS(484),
    [aux_sym_from_token1] = ACTIONS(484),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [aux_sym_stopsignal_token1] = ACTIONS(486),
    [aux_sym_shell_token1] = ACTIONS(486),
    [aux_sym_volume_token1] = ACTIONS(486),
    [aux_sym_workdir_token1] = ACTIONS(486),
    [aux_sym_user_token1] = ACTIONS(486),
    [aux_sym_cmd_token1] = ACTIONS(486),
    [aux_sym_entrypoint_token1] = ACTIONS(486),
    [aux_sym_run_token1] = ACTIONS(486),
    [aux_sym_maintainer_token1] = ACTIONS(486),
    [aux_sym_expose_token1] = ACTIONS(486),
    [aux_sym_from_token1] = ACTIONS(486),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [aux_sym_stopsignal_token1] = ACTIONS(488),
    [aux_sym_shell_token1] = ACTIONS(488),
    [aux_sym_volume_token1] = ACTIONS(488),
    [aux_sym_workdir_token1] = ACTIONS(488),
    [aux_sym_user_token1] = ACTIONS(488),
    [aux_sym_cmd_token1] = ACTIONS(488),
    [aux_sym_entrypoint_token1] = ACTIONS(488),
    [aux_sym_run_token1] = ACTIONS(488),
    [aux_sym_maintainer_token1] = ACTIONS(488),
    [aux_sym_expose_token1] = ACTIONS(488),
    [aux_sym_from_token1] = ACTIONS(488),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [aux_sym_stopsignal_token1] = ACTIONS(450),
    [aux_sym_shell_token1] = ACTIONS(450),
    [aux_sym_volume_token1] = ACTIONS(450),
    [aux_sym_workdir_token1] = ACTIONS(450),
    [aux_sym_user_token1] = ACTIONS(450),
    [aux_sym_cmd_token1] = ACTIONS(450),
    [aux_sym_entrypoint_token1] = ACTIONS(450),
    [aux_sym_run_token1] = ACTIONS(450),
    [aux_sym_maintainer_token1] = ACTIONS(450),
    [aux_sym_expose_token1] = ACTIONS(450),
    [aux_sym_from_token1] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(490),
    [aux_sym_stopsignal_token1] = ACTIONS(490),
    [aux_sym_shell_token1] = ACTIONS(490),
    [aux_sym_volume_token1] = ACTIONS(490),
    [aux_sym_workdir_token1] = ACTIONS(490),
    [aux_sym_user_token1] = ACTIONS(490),
    [aux_sym_cmd_token1] = ACTIONS(490),
    [aux_sym_entrypoint_token1] = ACTIONS(490),
    [aux_sym_run_token1] = ACTIONS(490),
    [aux_sym_maintainer_token1] = ACTIONS(490),
    [aux_sym_expose_token1] = ACTIONS(490),
    [aux_sym_from_token1] = ACTIONS(490),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [163] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [aux_sym_stopsignal_token1] = ACTIONS(66),
    [aux_sym_shell_token1] = ACTIONS(66),
    [aux_sym_volume_token1] = ACTIONS(66),
    [aux_sym_workdir_token1] = ACTIONS(66),
    [aux_sym_user_token1] = ACTIONS(66),
    [aux_sym_cmd_token1] = ACTIONS(66),
    [aux_sym_entrypoint_token1] = ACTIONS(66),
    [aux_sym_run_token1] = ACTIONS(66),
    [aux_sym_maintainer_token1] = ACTIONS(66),
    [aux_sym_expose_token1] = ACTIONS(66),
    [aux_sym_from_token1] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [aux_sym_stopsignal_token1] = ACTIONS(422),
    [aux_sym_shell_token1] = ACTIONS(422),
    [aux_sym_volume_token1] = ACTIONS(422),
    [aux_sym_workdir_token1] = ACTIONS(422),
    [aux_sym_user_token1] = ACTIONS(422),
    [aux_sym_cmd_token1] = ACTIONS(422),
    [aux_sym_entrypoint_token1] = ACTIONS(422),
    [aux_sym_run_token1] = ACTIONS(422),
    [aux_sym_maintainer_token1] = ACTIONS(422),
    [aux_sym_expose_token1] = ACTIONS(422),
    [aux_sym_from_token1] = ACTIONS(422),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [aux_sym_stopsignal_token1] = ACTIONS(440),
    [aux_sym_shell_token1] = ACTIONS(440),
    [aux_sym_volume_token1] = ACTIONS(440),
    [aux_sym_workdir_token1] = ACTIONS(440),
    [aux_sym_user_token1] = ACTIONS(440),
    [aux_sym_cmd_token1] = ACTIONS(440),
    [aux_sym_entrypoint_token1] = ACTIONS(440),
    [aux_sym_run_token1] = ACTIONS(440),
    [aux_sym_maintainer_token1] = ACTIONS(440),
    [aux_sym_expose_token1] = ACTIONS(440),
    [aux_sym_from_token1] = ACTIONS(440),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(492),
    [aux_sym_stopsignal_token1] = ACTIONS(492),
    [aux_sym_shell_token1] = ACTIONS(492),
    [aux_sym_volume_token1] = ACTIONS(492),
    [aux_sym_workdir_token1] = ACTIONS(492),
    [aux_sym_user_token1] = ACTIONS(492),
    [aux_sym_cmd_token1] = ACTIONS(492),
    [aux_sym_entrypoint_token1] = ACTIONS(492),
    [aux_sym_run_token1] = ACTIONS(492),
    [aux_sym_maintainer_token1] = ACTIONS(492),
    [aux_sym_expose_token1] = ACTIONS(492),
    [aux_sym_from_token1] = ACTIONS(492),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(494),
    [aux_sym_stopsignal_token1] = ACTIONS(494),
    [aux_sym_shell_token1] = ACTIONS(494),
    [aux_sym_volume_token1] = ACTIONS(494),
    [aux_sym_workdir_token1] = ACTIONS(494),
    [aux_sym_user_token1] = ACTIONS(494),
    [aux_sym_cmd_token1] = ACTIONS(494),
    [aux_sym_entrypoint_token1] = ACTIONS(494),
    [aux_sym_run_token1] = ACTIONS(494),
    [aux_sym_maintainer_token1] = ACTIONS(494),
    [aux_sym_expose_token1] = ACTIONS(494),
    [aux_sym_from_token1] = ACTIONS(494),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [aux_sym_stopsignal_token1] = ACTIONS(496),
    [aux_sym_shell_token1] = ACTIONS(496),
    [aux_sym_volume_token1] = ACTIONS(496),
    [aux_sym_workdir_token1] = ACTIONS(496),
    [aux_sym_user_token1] = ACTIONS(496),
    [aux_sym_cmd_token1] = ACTIONS(496),
    [aux_sym_entrypoint_token1] = ACTIONS(496),
    [aux_sym_run_token1] = ACTIONS(496),
    [aux_sym_maintainer_token1] = ACTIONS(496),
    [aux_sym_expose_token1] = ACTIONS(496),
    [aux_sym_from_token1] = ACTIONS(496),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [aux_sym_stopsignal_token1] = ACTIONS(363),
    [aux_sym_shell_token1] = ACTIONS(363),
    [aux_sym_volume_token1] = ACTIONS(363),
    [aux_sym_workdir_token1] = ACTIONS(363),
    [aux_sym_user_token1] = ACTIONS(363),
    [aux_sym_cmd_token1] = ACTIONS(363),
    [aux_sym_entrypoint_token1] = ACTIONS(363),
    [aux_sym_run_token1] = ACTIONS(363),
    [aux_sym_maintainer_token1] = ACTIONS(363),
    [aux_sym_expose_token1] = ACTIONS(363),
    [aux_sym_from_token1] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(498),
    [aux_sym_stopsignal_token1] = ACTIONS(498),
    [aux_sym_shell_token1] = ACTIONS(498),
    [aux_sym_volume_token1] = ACTIONS(498),
    [aux_sym_workdir_token1] = ACTIONS(498),
    [aux_sym_user_token1] = ACTIONS(498),
    [aux_sym_cmd_token1] = ACTIONS(498),
    [aux_sym_entrypoint_token1] = ACTIONS(498),
    [aux_sym_run_token1] = ACTIONS(498),
    [aux_sym_maintainer_token1] = ACTIONS(498),
    [aux_sym_expose_token1] = ACTIONS(498),
    [aux_sym_from_token1] = ACTIONS(498),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [171] = {
    [sym_digest] = STATE(121),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [anon_sym_sha256_COLON] = ACTIONS(502),
    [aux_sym_platform_token1] = ACTIONS(504),
    [aux_sym__repository_start_token1] = ACTIONS(500),
    [aux_sym__repository_start_token4] = ACTIONS(506),
    [aux_sym__repository_start_token6] = ACTIONS(506),
    [aux_sym__repository_start_token8] = ACTIONS(508),
    [aux_sym__repository_start_token10] = ACTIONS(508),
    [aux_sym__repository_start_token12] = ACTIONS(510),
    [aux_sym__repository_start_token14] = ACTIONS(510),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [172] = {
    [sym__repository_continued] = STATE(177),
    [aux_sym_repository_repeat1] = STATE(177),
    [anon_sym_DOLLAR] = ACTIONS(512),
    [aux_sym_platform_token1] = ACTIONS(515),
    [aux_sym__repository_start_token1] = ACTIONS(512),
    [aux_sym__repository_start_token4] = ACTIONS(518),
    [aux_sym__repository_start_token6] = ACTIONS(518),
    [aux_sym__repository_start_token8] = ACTIONS(521),
    [aux_sym__repository_start_token10] = ACTIONS(521),
    [aux_sym__repository_start_token12] = ACTIONS(524),
    [aux_sym__repository_start_token14] = ACTIONS(524),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [173] = {
    [sym_digest] = STATE(130),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [anon_sym_sha256_COLON] = ACTIONS(527),
    [aux_sym_platform_token1] = ACTIONS(504),
    [aux_sym__repository_start_token1] = ACTIONS(500),
    [aux_sym__repository_start_token4] = ACTIONS(506),
    [aux_sym__repository_start_token6] = ACTIONS(506),
    [aux_sym__repository_start_token8] = ACTIONS(508),
    [aux_sym__repository_start_token10] = ACTIONS(508),
    [aux_sym__repository_start_token12] = ACTIONS(510),
    [aux_sym__repository_start_token14] = ACTIONS(510),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [174] = {
    [sym_digest] = STATE(119),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [anon_sym_sha256_COLON] = ACTIONS(529),
    [aux_sym_platform_token1] = ACTIONS(504),
    [aux_sym__repository_start_token1] = ACTIONS(500),
    [aux_sym__repository_start_token4] = ACTIONS(506),
    [aux_sym__repository_start_token6] = ACTIONS(506),
    [aux_sym__repository_start_token8] = ACTIONS(508),
    [aux_sym__repository_start_token10] = ACTIONS(508),
    [aux_sym__repository_start_token12] = ACTIONS(510),
    [aux_sym__repository_start_token14] = ACTIONS(510),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [175] = {
    [sym_digest] = STATE(124),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [anon_sym_sha256_COLON] = ACTIONS(531),
    [aux_sym_platform_token1] = ACTIONS(504),
    [aux_sym__repository_start_token1] = ACTIONS(500),
    [aux_sym__repository_start_token4] = ACTIONS(506),
    [aux_sym__repository_start_token6] = ACTIONS(506),
    [aux_sym__repository_start_token8] = ACTIONS(508),
    [aux_sym__repository_start_token10] = ACTIONS(508),
    [aux_sym__repository_start_token12] = ACTIONS(510),
    [aux_sym__repository_start_token14] = ACTIONS(510),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [176] = {
    [sym_digest] = STATE(127),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [anon_sym_sha256_COLON] = ACTIONS(533),
    [aux_sym_platform_token1] = ACTIONS(504),
    [aux_sym__repository_start_token1] = ACTIONS(500),
    [aux_sym__repository_start_token4] = ACTIONS(506),
    [aux_sym__repository_start_token6] = ACTIONS(506),
    [aux_sym__repository_start_token8] = ACTIONS(508),
    [aux_sym__repository_start_token10] = ACTIONS(508),
    [aux_sym__repository_start_token12] = ACTIONS(510),
    [aux_sym__repository_start_token14] = ACTIONS(510),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [177] = {
    [sym__repository_continued] = STATE(177),
    [aux_sym_repository_repeat1] = STATE(177),
    [anon_sym_DOLLAR] = ACTIONS(535),
    [aux_sym_platform_token1] = ACTIONS(538),
    [aux_sym__repository_start_token1] = ACTIONS(535),
    [aux_sym__repository_start_token4] = ACTIONS(541),
    [aux_sym__repository_start_token6] = ACTIONS(541),
    [aux_sym__repository_start_token8] = ACTIONS(544),
    [aux_sym__repository_start_token10] = ACTIONS(544),
    [aux_sym__repository_start_token12] = ACTIONS(547),
    [aux_sym__repository_start_token14] = ACTIONS(547),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [178] = {
    [sym__repository_continued] = STATE(172),
    [aux_sym_repository_repeat1] = STATE(172),
    [anon_sym_DOLLAR] = ACTIONS(550),
    [aux_sym_platform_token1] = ACTIONS(553),
    [aux_sym__repository_start_token1] = ACTIONS(550),
    [aux_sym__repository_start_token4] = ACTIONS(556),
    [aux_sym__repository_start_token6] = ACTIONS(556),
    [aux_sym__repository_start_token8] = ACTIONS(559),
    [aux_sym__repository_start_token10] = ACTIONS(559),
    [aux_sym__repository_start_token12] = ACTIONS(562),
    [aux_sym__repository_start_token14] = ACTIONS(562),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [179] = {
    [sym_digest] = STATE(125),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [anon_sym_sha256_COLON] = ACTIONS(565),
    [aux_sym_platform_token1] = ACTIONS(504),
    [aux_sym__repository_start_token1] = ACTIONS(500),
    [aux_sym__repository_start_token4] = ACTIONS(506),
    [aux_sym__repository_start_token6] = ACTIONS(506),
    [aux_sym__repository_start_token8] = ACTIONS(508),
    [aux_sym__repository_start_token10] = ACTIONS(508),
    [aux_sym__repository_start_token12] = ACTIONS(510),
    [aux_sym__repository_start_token14] = ACTIONS(510),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [180] = {
    [sym_digest] = STATE(127),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [aux_sym_platform_token1] = ACTIONS(504),
    [aux_sym__repository_start_token1] = ACTIONS(500),
    [aux_sym__repository_start_token4] = ACTIONS(506),
    [aux_sym__repository_start_token6] = ACTIONS(506),
    [aux_sym__repository_start_token8] = ACTIONS(508),
    [aux_sym__repository_start_token10] = ACTIONS(508),
    [aux_sym__repository_start_token12] = ACTIONS(510),
    [aux_sym__repository_start_token14] = ACTIONS(510),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [181] = {
    [sym_as_name] = STATE(169),
    [anon_sym_DOLLAR] = ACTIONS(567),
    [aux_sym_platform_token1] = ACTIONS(569),
    [aux_sym__repository_start_token1] = ACTIONS(567),
    [aux_sym__repository_start_token4] = ACTIONS(571),
    [aux_sym__repository_start_token6] = ACTIONS(571),
    [aux_sym__repository_start_token8] = ACTIONS(573),
    [aux_sym__repository_start_token10] = ACTIONS(573),
    [aux_sym__repository_start_token12] = ACTIONS(575),
    [aux_sym__repository_start_token14] = ACTIONS(575),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [182] = {
    [sym_digest] = STATE(125),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [aux_sym_platform_token1] = ACTIONS(504),
    [aux_sym__repository_start_token1] = ACTIONS(500),
    [aux_sym__repository_start_token4] = ACTIONS(506),
    [aux_sym__repository_start_token6] = ACTIONS(506),
    [aux_sym__repository_start_token8] = ACTIONS(508),
    [aux_sym__repository_start_token10] = ACTIONS(508),
    [aux_sym__repository_start_token12] = ACTIONS(510),
    [aux_sym__repository_start_token14] = ACTIONS(510),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [183] = {
    [sym_image] = STATE(93),
    [anon_sym_DOLLAR] = ACTIONS(577),
    [aux_sym_platform_token1] = ACTIONS(579),
    [aux_sym__repository_start_token1] = ACTIONS(577),
    [aux_sym__repository_start_token4] = ACTIONS(581),
    [aux_sym__repository_start_token6] = ACTIONS(581),
    [aux_sym__repository_start_token8] = ACTIONS(583),
    [aux_sym__repository_start_token10] = ACTIONS(583),
    [aux_sym__repository_start_token12] = ACTIONS(585),
    [aux_sym__repository_start_token14] = ACTIONS(585),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [184] = {
    [sym_tag] = STATE(109),
    [anon_sym_DOLLAR] = ACTIONS(587),
    [aux_sym_platform_token1] = ACTIONS(589),
    [aux_sym__repository_start_token1] = ACTIONS(587),
    [aux_sym__repository_start_token4] = ACTIONS(591),
    [aux_sym__repository_start_token6] = ACTIONS(591),
    [aux_sym__repository_start_token8] = ACTIONS(593),
    [aux_sym__repository_start_token10] = ACTIONS(593),
    [aux_sym__repository_start_token12] = ACTIONS(595),
    [aux_sym__repository_start_token14] = ACTIONS(595),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [185] = {
    [sym_as_name] = STATE(145),
    [anon_sym_DOLLAR] = ACTIONS(567),
    [aux_sym_platform_token1] = ACTIONS(569),
    [aux_sym__repository_start_token1] = ACTIONS(567),
    [aux_sym__repository_start_token4] = ACTIONS(571),
    [aux_sym__repository_start_token6] = ACTIONS(571),
    [aux_sym__repository_start_token8] = ACTIONS(573),
    [aux_sym__repository_start_token10] = ACTIONS(573),
    [aux_sym__repository_start_token12] = ACTIONS(575),
    [aux_sym__repository_start_token14] = ACTIONS(575),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [186] = {
    [sym_as_name] = STATE(153),
    [anon_sym_DOLLAR] = ACTIONS(567),
    [aux_sym_platform_token1] = ACTIONS(569),
    [aux_sym__repository_start_token1] = ACTIONS(567),
    [aux_sym__repository_start_token4] = ACTIONS(571),
    [aux_sym__repository_start_token6] = ACTIONS(571),
    [aux_sym__repository_start_token8] = ACTIONS(573),
    [aux_sym__repository_start_token10] = ACTIONS(573),
    [aux_sym__repository_start_token12] = ACTIONS(575),
    [aux_sym__repository_start_token14] = ACTIONS(575),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [187] = {
    [sym_as_name] = STATE(161),
    [anon_sym_DOLLAR] = ACTIONS(567),
    [aux_sym_platform_token1] = ACTIONS(569),
    [aux_sym__repository_start_token1] = ACTIONS(567),
    [aux_sym__repository_start_token4] = ACTIONS(571),
    [aux_sym__repository_start_token6] = ACTIONS(571),
    [aux_sym__repository_start_token8] = ACTIONS(573),
    [aux_sym__repository_start_token10] = ACTIONS(573),
    [aux_sym__repository_start_token12] = ACTIONS(575),
    [aux_sym__repository_start_token14] = ACTIONS(575),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [188] = {
    [sym_digest] = STATE(134),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [aux_sym_platform_token1] = ACTIONS(504),
    [aux_sym__repository_start_token1] = ACTIONS(500),
    [aux_sym__repository_start_token4] = ACTIONS(506),
    [aux_sym__repository_start_token6] = ACTIONS(506),
    [aux_sym__repository_start_token8] = ACTIONS(508),
    [aux_sym__repository_start_token10] = ACTIONS(508),
    [aux_sym__repository_start_token12] = ACTIONS(510),
    [aux_sym__repository_start_token14] = ACTIONS(510),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [189] = {
    [sym_tag] = STATE(112),
    [anon_sym_DOLLAR] = ACTIONS(587),
    [aux_sym_platform_token1] = ACTIONS(589),
    [aux_sym__repository_start_token1] = ACTIONS(587),
    [aux_sym__repository_start_token4] = ACTIONS(591),
    [aux_sym__repository_start_token6] = ACTIONS(591),
    [aux_sym__repository_start_token8] = ACTIONS(593),
    [aux_sym__repository_start_token10] = ACTIONS(593),
    [aux_sym__repository_start_token12] = ACTIONS(595),
    [aux_sym__repository_start_token14] = ACTIONS(595),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [190] = {
    [sym_as_name] = STATE(164),
    [anon_sym_DOLLAR] = ACTIONS(567),
    [aux_sym_platform_token1] = ACTIONS(569),
    [aux_sym__repository_start_token1] = ACTIONS(567),
    [aux_sym__repository_start_token4] = ACTIONS(571),
    [aux_sym__repository_start_token6] = ACTIONS(571),
    [aux_sym__repository_start_token8] = ACTIONS(573),
    [aux_sym__repository_start_token10] = ACTIONS(573),
    [aux_sym__repository_start_token12] = ACTIONS(575),
    [aux_sym__repository_start_token14] = ACTIONS(575),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [191] = {
    [sym_as_name] = STATE(146),
    [anon_sym_DOLLAR] = ACTIONS(567),
    [aux_sym_platform_token1] = ACTIONS(569),
    [aux_sym__repository_start_token1] = ACTIONS(567),
    [aux_sym__repository_start_token4] = ACTIONS(571),
    [aux_sym__repository_start_token6] = ACTIONS(571),
    [aux_sym__repository_start_token8] = ACTIONS(573),
    [aux_sym__repository_start_token10] = ACTIONS(573),
    [aux_sym__repository_start_token12] = ACTIONS(575),
    [aux_sym__repository_start_token14] = ACTIONS(575),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [192] = {
    [sym_tag] = STATE(114),
    [anon_sym_DOLLAR] = ACTIONS(587),
    [aux_sym_platform_token1] = ACTIONS(589),
    [aux_sym__repository_start_token1] = ACTIONS(587),
    [aux_sym__repository_start_token4] = ACTIONS(591),
    [aux_sym__repository_start_token6] = ACTIONS(591),
    [aux_sym__repository_start_token8] = ACTIONS(593),
    [aux_sym__repository_start_token10] = ACTIONS(593),
    [aux_sym__repository_start_token12] = ACTIONS(595),
    [aux_sym__repository_start_token14] = ACTIONS(595),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [193] = {
    [sym_digest] = STATE(130),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [aux_sym_platform_token1] = ACTIONS(504),
    [aux_sym__repository_start_token1] = ACTIONS(500),
    [aux_sym__repository_start_token4] = ACTIONS(506),
    [aux_sym__repository_start_token6] = ACTIONS(506),
    [aux_sym__repository_start_token8] = ACTIONS(508),
    [aux_sym__repository_start_token10] = ACTIONS(508),
    [aux_sym__repository_start_token12] = ACTIONS(510),
    [aux_sym__repository_start_token14] = ACTIONS(510),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [194] = {
    [sym_image] = STATE(99),
    [anon_sym_DOLLAR] = ACTIONS(577),
    [aux_sym_platform_token1] = ACTIONS(579),
    [aux_sym__repository_start_token1] = ACTIONS(577),
    [aux_sym__repository_start_token4] = ACTIONS(581),
    [aux_sym__repository_start_token6] = ACTIONS(581),
    [aux_sym__repository_start_token8] = ACTIONS(583),
    [aux_sym__repository_start_token10] = ACTIONS(583),
    [aux_sym__repository_start_token12] = ACTIONS(585),
    [aux_sym__repository_start_token14] = ACTIONS(585),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [195] = {
    [sym_tag] = STATE(110),
    [anon_sym_DOLLAR] = ACTIONS(587),
    [aux_sym_platform_token1] = ACTIONS(589),
    [aux_sym__repository_start_token1] = ACTIONS(587),
    [aux_sym__repository_start_token4] = ACTIONS(591),
    [aux_sym__repository_start_token6] = ACTIONS(591),
    [aux_sym__repository_start_token8] = ACTIONS(593),
    [aux_sym__repository_start_token10] = ACTIONS(593),
    [aux_sym__repository_start_token12] = ACTIONS(595),
    [aux_sym__repository_start_token14] = ACTIONS(595),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [196] = {
    [sym_as_name] = STATE(152),
    [anon_sym_DOLLAR] = ACTIONS(567),
    [aux_sym_platform_token1] = ACTIONS(569),
    [aux_sym__repository_start_token1] = ACTIONS(567),
    [aux_sym__repository_start_token4] = ACTIONS(571),
    [aux_sym__repository_start_token6] = ACTIONS(571),
    [aux_sym__repository_start_token8] = ACTIONS(573),
    [aux_sym__repository_start_token10] = ACTIONS(573),
    [aux_sym__repository_start_token12] = ACTIONS(575),
    [aux_sym__repository_start_token14] = ACTIONS(575),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [197] = {
    [sym_digest] = STATE(121),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [aux_sym_platform_token1] = ACTIONS(504),
    [aux_sym__repository_start_token1] = ACTIONS(500),
    [aux_sym__repository_start_token4] = ACTIONS(506),
    [aux_sym__repository_start_token6] = ACTIONS(506),
    [aux_sym__repository_start_token8] = ACTIONS(508),
    [aux_sym__repository_start_token10] = ACTIONS(508),
    [aux_sym__repository_start_token12] = ACTIONS(510),
    [aux_sym__repository_start_token14] = ACTIONS(510),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [198] = {
    [sym_as_name] = STATE(149),
    [anon_sym_DOLLAR] = ACTIONS(567),
    [aux_sym_platform_token1] = ACTIONS(569),
    [aux_sym__repository_start_token1] = ACTIONS(567),
    [aux_sym__repository_start_token4] = ACTIONS(571),
    [aux_sym__repository_start_token6] = ACTIONS(571),
    [aux_sym__repository_start_token8] = ACTIONS(573),
    [aux_sym__repository_start_token10] = ACTIONS(573),
    [aux_sym__repository_start_token12] = ACTIONS(575),
    [aux_sym__repository_start_token14] = ACTIONS(575),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [199] = {
    [sym_digest] = STATE(124),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [aux_sym_platform_token1] = ACTIONS(504),
    [aux_sym__repository_start_token1] = ACTIONS(500),
    [aux_sym__repository_start_token4] = ACTIONS(506),
    [aux_sym__repository_start_token6] = ACTIONS(506),
    [aux_sym__repository_start_token8] = ACTIONS(508),
    [aux_sym__repository_start_token10] = ACTIONS(508),
    [aux_sym__repository_start_token12] = ACTIONS(510),
    [aux_sym__repository_start_token14] = ACTIONS(510),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [200] = {
    [sym_as_name] = STATE(165),
    [anon_sym_DOLLAR] = ACTIONS(567),
    [aux_sym_platform_token1] = ACTIONS(569),
    [aux_sym__repository_start_token1] = ACTIONS(567),
    [aux_sym__repository_start_token4] = ACTIONS(571),
    [aux_sym__repository_start_token6] = ACTIONS(571),
    [aux_sym__repository_start_token8] = ACTIONS(573),
    [aux_sym__repository_start_token10] = ACTIONS(573),
    [aux_sym__repository_start_token12] = ACTIONS(575),
    [aux_sym__repository_start_token14] = ACTIONS(575),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [201] = {
    [anon_sym_DOLLAR] = ACTIONS(597),
    [aux_sym_platform_token1] = ACTIONS(599),
    [aux_sym__repository_start_token1] = ACTIONS(597),
    [aux_sym__repository_start_token4] = ACTIONS(597),
    [aux_sym__repository_start_token6] = ACTIONS(597),
    [aux_sym__repository_start_token8] = ACTIONS(597),
    [aux_sym__repository_start_token10] = ACTIONS(597),
    [aux_sym__repository_start_token12] = ACTIONS(597),
    [aux_sym__repository_start_token14] = ACTIONS(597),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [202] = {
    [anon_sym_DOLLAR] = ACTIONS(601),
    [aux_sym_platform_token1] = ACTIONS(603),
    [aux_sym__repository_start_token1] = ACTIONS(601),
    [aux_sym__repository_start_token4] = ACTIONS(601),
    [aux_sym__repository_start_token6] = ACTIONS(601),
    [aux_sym__repository_start_token8] = ACTIONS(601),
    [aux_sym__repository_start_token10] = ACTIONS(601),
    [aux_sym__repository_start_token12] = ACTIONS(601),
    [aux_sym__repository_start_token14] = ACTIONS(601),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [203] = {
    [anon_sym_DOLLAR] = ACTIONS(605),
    [aux_sym_platform_token1] = ACTIONS(607),
    [aux_sym__repository_start_token1] = ACTIONS(605),
    [aux_sym__repository_start_token4] = ACTIONS(605),
    [aux_sym__repository_start_token6] = ACTIONS(605),
    [aux_sym__repository_start_token8] = ACTIONS(605),
    [aux_sym__repository_start_token10] = ACTIONS(605),
    [aux_sym__repository_start_token12] = ACTIONS(605),
    [aux_sym__repository_start_token14] = ACTIONS(605),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [204] = {
    [anon_sym_DOLLAR] = ACTIONS(167),
    [aux_sym_platform_token1] = ACTIONS(169),
    [aux_sym__repository_start_token1] = ACTIONS(167),
    [aux_sym__repository_start_token4] = ACTIONS(167),
    [aux_sym__repository_start_token6] = ACTIONS(167),
    [aux_sym__repository_start_token8] = ACTIONS(167),
    [aux_sym__repository_start_token10] = ACTIONS(167),
    [aux_sym__repository_start_token12] = ACTIONS(167),
    [aux_sym__repository_start_token14] = ACTIONS(167),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [205] = {
    [anon_sym_DOLLAR] = ACTIONS(609),
    [aux_sym_platform_token1] = ACTIONS(611),
    [aux_sym__repository_start_token1] = ACTIONS(609),
    [aux_sym__repository_start_token4] = ACTIONS(609),
    [aux_sym__repository_start_token6] = ACTIONS(609),
    [aux_sym__repository_start_token8] = ACTIONS(609),
    [aux_sym__repository_start_token10] = ACTIONS(609),
    [aux_sym__repository_start_token12] = ACTIONS(609),
    [aux_sym__repository_start_token14] = ACTIONS(609),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [206] = {
    [anon_sym_DOLLAR] = ACTIONS(163),
    [aux_sym_platform_token1] = ACTIONS(165),
    [aux_sym__repository_start_token1] = ACTIONS(163),
    [aux_sym__repository_start_token4] = ACTIONS(163),
    [aux_sym__repository_start_token6] = ACTIONS(163),
    [aux_sym__repository_start_token8] = ACTIONS(163),
    [aux_sym__repository_start_token10] = ACTIONS(163),
    [aux_sym__repository_start_token12] = ACTIONS(163),
    [aux_sym__repository_start_token14] = ACTIONS(163),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [207] = {
    [anon_sym_DOLLAR] = ACTIONS(613),
    [aux_sym_platform_token1] = ACTIONS(615),
    [aux_sym__repository_start_token1] = ACTIONS(613),
    [aux_sym__repository_start_token4] = ACTIONS(613),
    [aux_sym__repository_start_token6] = ACTIONS(613),
    [aux_sym__repository_start_token8] = ACTIONS(613),
    [aux_sym__repository_start_token10] = ACTIONS(613),
    [aux_sym__repository_start_token12] = ACTIONS(613),
    [aux_sym__repository_start_token14] = ACTIONS(613),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [208] = {
    [anon_sym_DOLLAR] = ACTIONS(159),
    [aux_sym_platform_token1] = ACTIONS(161),
    [aux_sym__repository_start_token1] = ACTIONS(159),
    [aux_sym__repository_start_token4] = ACTIONS(159),
    [aux_sym__repository_start_token6] = ACTIONS(159),
    [aux_sym__repository_start_token8] = ACTIONS(159),
    [aux_sym__repository_start_token10] = ACTIONS(159),
    [aux_sym__repository_start_token12] = ACTIONS(159),
    [aux_sym__repository_start_token14] = ACTIONS(159),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [209] = {
    [anon_sym_DOLLAR] = ACTIONS(617),
    [aux_sym_platform_token1] = ACTIONS(619),
    [aux_sym__repository_start_token1] = ACTIONS(617),
    [aux_sym__repository_start_token4] = ACTIONS(617),
    [aux_sym__repository_start_token6] = ACTIONS(617),
    [aux_sym__repository_start_token8] = ACTIONS(617),
    [aux_sym__repository_start_token10] = ACTIONS(617),
    [aux_sym__repository_start_token12] = ACTIONS(617),
    [aux_sym__repository_start_token14] = ACTIONS(617),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [210] = {
    [anon_sym_DOLLAR] = ACTIONS(621),
    [aux_sym_platform_token1] = ACTIONS(623),
    [aux_sym__repository_start_token1] = ACTIONS(621),
    [aux_sym__repository_start_token4] = ACTIONS(621),
    [aux_sym__repository_start_token6] = ACTIONS(621),
    [aux_sym__repository_start_token8] = ACTIONS(621),
    [aux_sym__repository_start_token10] = ACTIONS(621),
    [aux_sym__repository_start_token12] = ACTIONS(621),
    [aux_sym__repository_start_token14] = ACTIONS(621),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [211] = {
    [anon_sym_DOLLAR] = ACTIONS(625),
    [aux_sym_platform_token1] = ACTIONS(627),
    [aux_sym__repository_start_token1] = ACTIONS(625),
    [aux_sym__repository_start_token4] = ACTIONS(625),
    [aux_sym__repository_start_token6] = ACTIONS(625),
    [aux_sym__repository_start_token8] = ACTIONS(625),
    [aux_sym__repository_start_token10] = ACTIONS(625),
    [aux_sym__repository_start_token12] = ACTIONS(625),
    [aux_sym__repository_start_token14] = ACTIONS(625),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [212] = {
    [sym__port_spec] = STATE(356),
    [sym_mapped_port] = STATE(356),
    [sym__port] = STATE(82),
    [sym_port] = STATE(286),
    [sym_port_range] = STATE(286),
    [sym__port_part] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_user_id_token1] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [213] = {
    [anon_sym_DOLLAR] = ACTIONS(631),
    [aux_sym_platform_token1] = ACTIONS(633),
    [aux_sym__repository_start_token1] = ACTIONS(631),
    [aux_sym__repository_start_token4] = ACTIONS(631),
    [aux_sym__repository_start_token6] = ACTIONS(631),
    [aux_sym__repository_start_token8] = ACTIONS(631),
    [aux_sym__repository_start_token10] = ACTIONS(631),
    [aux_sym__repository_start_token12] = ACTIONS(631),
    [aux_sym__repository_start_token14] = ACTIONS(631),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [214] = {
    [anon_sym_DOLLAR] = ACTIONS(635),
    [aux_sym_platform_token1] = ACTIONS(637),
    [aux_sym__repository_start_token1] = ACTIONS(635),
    [aux_sym__repository_start_token4] = ACTIONS(635),
    [aux_sym__repository_start_token6] = ACTIONS(635),
    [aux_sym__repository_start_token8] = ACTIONS(635),
    [aux_sym__repository_start_token10] = ACTIONS(635),
    [aux_sym__repository_start_token12] = ACTIONS(635),
    [aux_sym__repository_start_token14] = ACTIONS(635),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [215] = {
    [anon_sym_DOLLAR] = ACTIONS(639),
    [aux_sym_platform_token1] = ACTIONS(641),
    [aux_sym__repository_start_token1] = ACTIONS(639),
    [aux_sym__repository_start_token4] = ACTIONS(639),
    [aux_sym__repository_start_token6] = ACTIONS(639),
    [aux_sym__repository_start_token8] = ACTIONS(639),
    [aux_sym__repository_start_token10] = ACTIONS(639),
    [aux_sym__repository_start_token12] = ACTIONS(639),
    [aux_sym__repository_start_token14] = ACTIONS(639),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [216] = {
    [anon_sym_DOLLAR] = ACTIONS(643),
    [aux_sym_platform_token1] = ACTIONS(645),
    [aux_sym__repository_start_token1] = ACTIONS(643),
    [aux_sym__repository_start_token4] = ACTIONS(643),
    [aux_sym__repository_start_token6] = ACTIONS(643),
    [aux_sym__repository_start_token8] = ACTIONS(643),
    [aux_sym__repository_start_token10] = ACTIONS(643),
    [aux_sym__repository_start_token12] = ACTIONS(643),
    [aux_sym__repository_start_token14] = ACTIONS(643),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [217] = {
    [sym__port] = STATE(144),
    [sym_port] = STATE(144),
    [sym_port_range] = STATE(144),
    [sym__port_part] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_user_id_token1] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [218] = {
    [aux_sym__json_string] = STATE(249),
    [aux_sym_json_array_repeat1] = STATE(269),
    [anon_sym_DQUOTE] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(649),
    [anon_sym_RBRACK] = ACTIONS(651),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
    [aux_sym__json_string_token1] = ACTIONS(653),
    [sym__json_escape_sequence] = ACTIONS(655),
  },
  [219] = {
    [sym__port] = STATE(100),
    [sym_port] = STATE(100),
    [sym_port_range] = STATE(100),
    [sym__port_part] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_user_id_token1] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [220] = {
    [sym_path] = STATE(86),
    [sym_json_array] = STATE(140),
    [aux_sym_volume_repeat1] = STATE(86),
    [aux_sym_path_token1] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym__json_prefix] = ACTIONS(657),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [221] = {
    [sym_template_expr_less_than_equals] = STATE(297),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(223),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(659),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(661),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(661),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [222] = {
    [aux_sym__repository_start_repeat4] = STATE(227),
    [anon_sym_SLASH] = ACTIONS(663),
    [aux_sym__repository_start_token3] = ACTIONS(665),
    [aux_sym__repository_start_token12] = ACTIONS(102),
    [aux_sym__repository_start_token15] = ACTIONS(102),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [223] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(244),
    [aux_sym__repository_start_token13] = ACTIONS(667),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(669),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(671),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(671),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [224] = {
    [sym_template_expr_less_than_equals] = STATE(307),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(223),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(659),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(661),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(661),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [225] = {
    [sym_port] = STATE(305),
    [sym_port_range] = STATE(305),
    [sym__port_part] = STATE(58),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_user_id_token1] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [226] = {
    [sym_variable_default_value] = STATE(324),
    [sym_variable_this_or_null] = STATE(324),
    [anon_sym_RBRACE] = ACTIONS(673),
    [anon_sym_COLON_DASH] = ACTIONS(675),
    [anon_sym_COLON_PLUS] = ACTIONS(677),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [227] = {
    [aux_sym__repository_start_repeat4] = STATE(6),
    [anon_sym_SLASH] = ACTIONS(679),
    [aux_sym__repository_start_token3] = ACTIONS(681),
    [aux_sym__repository_start_token12] = ACTIONS(102),
    [aux_sym__repository_start_token15] = ACTIONS(102),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [228] = {
    [aux_sym__repository_start_repeat1] = STATE(242),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(683),
    [aux_sym__repository_start_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(685),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [229] = {
    [sym_template_expr_less_than_equals] = STATE(315),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(223),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(659),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(661),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(661),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [230] = {
    [sym_template_expr_less_than_equals] = STATE(300),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(223),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(659),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(661),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(661),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [231] = {
    [aux_sym__repository_start_repeat3] = STATE(8),
    [anon_sym_SLASH] = ACTIONS(679),
    [aux_sym__repository_start_token3] = ACTIONS(681),
    [aux_sym__repository_start_token8] = ACTIONS(111),
    [aux_sym__repository_start_token11] = ACTIONS(111),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [232] = {
    [sym_json_array] = STATE(143),
    [sym__anything_or_json_array] = STATE(143),
    [sym__almost_json_prefix] = ACTIONS(687),
    [sym__json_prefix] = ACTIONS(657),
    [sym__not_json_prefix] = ACTIONS(689),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [233] = {
    [sym_template_expr_less_than_equals] = STATE(339),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(223),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(659),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(661),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(661),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [234] = {
    [sym_template_expr_less_than_equals] = STATE(346),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(223),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(659),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(661),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(661),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [235] = {
    [sym_template_expr_less_than_equals] = STATE(318),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(223),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(659),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(661),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(661),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [236] = {
    [aux_sym__repository_start_repeat2] = STATE(11),
    [anon_sym_SLASH] = ACTIONS(679),
    [aux_sym__repository_start_token3] = ACTIONS(681),
    [aux_sym__repository_start_token4] = ACTIONS(113),
    [aux_sym__repository_start_token7] = ACTIONS(113),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [237] = {
    [sym_json_array] = STATE(142),
    [sym__anything_or_json_array] = STATE(142),
    [sym__almost_json_prefix] = ACTIONS(687),
    [sym__json_prefix] = ACTIONS(657),
    [sym__not_json_prefix] = ACTIONS(689),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [238] = {
    [aux_sym__repository_start_repeat3] = STATE(231),
    [anon_sym_SLASH] = ACTIONS(663),
    [aux_sym__repository_start_token3] = ACTIONS(665),
    [aux_sym__repository_start_token8] = ACTIONS(111),
    [aux_sym__repository_start_token11] = ACTIONS(111),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [239] = {
    [sym_json_array] = STATE(135),
    [sym__anything_or_json_array] = STATE(135),
    [sym__almost_json_prefix] = ACTIONS(687),
    [sym__json_prefix] = ACTIONS(657),
    [sym__not_json_prefix] = ACTIONS(689),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [240] = {
    [sym_variable_default_value] = STATE(352),
    [sym_variable_this_or_null] = STATE(352),
    [anon_sym_RBRACE] = ACTIONS(691),
    [anon_sym_COLON_DASH] = ACTIONS(675),
    [anon_sym_COLON_PLUS] = ACTIONS(677),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [241] = {
    [aux_sym__repository_start_repeat2] = STATE(236),
    [anon_sym_SLASH] = ACTIONS(663),
    [aux_sym__repository_start_token3] = ACTIONS(665),
    [aux_sym__repository_start_token4] = ACTIONS(113),
    [aux_sym__repository_start_token7] = ACTIONS(113),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [242] = {
    [aux_sym__repository_start_repeat1] = STATE(17),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(663),
    [aux_sym__repository_start_token2] = ACTIONS(122),
    [aux_sym__repository_start_token3] = ACTIONS(665),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [243] = {
    [sym_template_expr_less_than_equals] = STATE(331),
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(223),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(659),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(661),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(661),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [244] = {
    [aux_sym_template_expr_less_than_equals_repeat1] = STATE(244),
    [aux_sym__repository_start_token13] = ACTIONS(693),
    [aux_sym_template_expr_less_than_equals_token1] = ACTIONS(695),
    [aux_sym_template_expr_less_than_equals_token2] = ACTIONS(698),
    [aux_sym_template_expr_less_than_equals_token3] = ACTIONS(698),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [245] = {
    [sym_variable_default_value] = STATE(343),
    [sym_variable_this_or_null] = STATE(343),
    [anon_sym_RBRACE] = ACTIONS(701),
    [anon_sym_COLON_DASH] = ACTIONS(675),
    [anon_sym_COLON_PLUS] = ACTIONS(677),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [246] = {
    [sym_variable_default_value] = STATE(348),
    [sym_variable_this_or_null] = STATE(348),
    [anon_sym_RBRACE] = ACTIONS(703),
    [anon_sym_COLON_DASH] = ACTIONS(675),
    [anon_sym_COLON_PLUS] = ACTIONS(677),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [247] = {
    [sym_variable_default_value] = STATE(350),
    [sym_variable_this_or_null] = STATE(350),
    [anon_sym_RBRACE] = ACTIONS(705),
    [anon_sym_COLON_DASH] = ACTIONS(675),
    [anon_sym_COLON_PLUS] = ACTIONS(677),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [248] = {
    [sym_user_name] = STATE(133),
    [sym_user_id] = STATE(132),
    [aux_sym_user_name_token1] = ACTIONS(707),
    [aux_sym_user_id_token1] = ACTIONS(709),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [249] = {
    [aux_sym__json_string] = STATE(251),
    [anon_sym_DQUOTE] = ACTIONS(711),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
    [aux_sym__json_string_token1] = ACTIONS(713),
    [sym__json_escape_sequence] = ACTIONS(713),
  },
  [250] = {
    [aux_sym__json_string] = STATE(252),
    [anon_sym_DQUOTE] = ACTIONS(715),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
    [aux_sym__json_string_token1] = ACTIONS(717),
    [sym__json_escape_sequence] = ACTIONS(717),
  },
  [251] = {
    [aux_sym__json_string] = STATE(251),
    [anon_sym_DQUOTE] = ACTIONS(719),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
    [aux_sym__json_string_token1] = ACTIONS(721),
    [sym__json_escape_sequence] = ACTIONS(721),
  },
  [252] = {
    [aux_sym__json_string] = STATE(251),
    [anon_sym_DQUOTE] = ACTIONS(724),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
    [aux_sym__json_string_token1] = ACTIONS(713),
    [sym__json_escape_sequence] = ACTIONS(713),
  },
  [253] = {
    [sym_docker_variable] = STATE(228),
    [anon_sym_LBRACE] = ACTIONS(726),
    [sym__docker_variable] = ACTIONS(728),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [254] = {
    [sym_docker_variable] = STATE(38),
    [anon_sym_LBRACE] = ACTIONS(730),
    [sym__docker_variable] = ACTIONS(732),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [255] = {
    [sym_docker_variable] = STATE(54),
    [anon_sym_LBRACE] = ACTIONS(734),
    [sym__docker_variable] = ACTIONS(736),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [256] = {
    [sym_signal_name] = STATE(151),
    [aux_sym_signal_name_token1] = ACTIONS(738),
    [sym_signal_num] = ACTIONS(740),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [257] = {
    [aux_sym_workdir_token2] = ACTIONS(742),
    [anon_sym_DOLLAR] = ACTIONS(744),
    [aux_sym_workdir_token3] = ACTIONS(744),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [258] = {
    [aux_sym__anything] = STATE(97),
    [aux_sym__anything_token1] = ACTIONS(746),
    [aux_sym__anything_token2] = ACTIONS(746),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [259] = {
    [sym_docker_variable] = STATE(16),
    [anon_sym_LBRACE] = ACTIONS(726),
    [sym__docker_variable] = ACTIONS(728),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [260] = {
    [sym_platform] = STATE(156),
    [anon_sym_DOLLAR] = ACTIONS(748),
    [aux_sym_platform_token1] = ACTIONS(750),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [261] = {
    [aux_sym_json_array_repeat1] = STATE(277),
    [anon_sym_COMMA] = ACTIONS(752),
    [anon_sym_RBRACK] = ACTIONS(754),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [262] = {
    [sym_docker_variable] = STATE(78),
    [anon_sym_LBRACE] = ACTIONS(756),
    [sym__docker_variable] = ACTIONS(758),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [263] = {
    [aux_sym__anything] = STATE(108),
    [aux_sym__anything_token1] = ACTIONS(330),
    [aux_sym__anything_token2] = ACTIONS(330),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [264] = {
    [anon_sym_DOLLAR] = ACTIONS(760),
    [aux_sym_port_protocol_token1] = ACTIONS(762),
    [aux_sym_port_protocol_token2] = ACTIONS(762),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [265] = {
    [sym__port_part] = STATE(84),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_user_id_token1] = ACTIONS(72),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [266] = {
    [sym_docker_variable] = STATE(210),
    [anon_sym_LBRACE] = ACTIONS(764),
    [sym__docker_variable] = ACTIONS(766),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [267] = {
    [sym_docker_variable] = STATE(29),
    [anon_sym_LBRACE] = ACTIONS(734),
    [sym__docker_variable] = ACTIONS(736),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [268] = {
    [aux_sym_json_array_repeat1] = STATE(275),
    [anon_sym_COMMA] = ACTIONS(752),
    [anon_sym_RBRACK] = ACTIONS(768),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [269] = {
    [aux_sym_json_array_repeat1] = STATE(277),
    [anon_sym_COMMA] = ACTIONS(752),
    [anon_sym_RBRACK] = ACTIONS(768),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [270] = {
    [sym_docker_variable] = STATE(62),
    [anon_sym_LBRACE] = ACTIONS(730),
    [sym__docker_variable] = ACTIONS(732),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [271] = {
    [sym_docker_variable] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(726),
    [sym__docker_variable] = ACTIONS(728),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [272] = {
    [sym_docker_variable] = STATE(42),
    [anon_sym_LBRACE] = ACTIONS(726),
    [sym__docker_variable] = ACTIONS(728),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [273] = {
    [sym_docker_variable] = STATE(66),
    [anon_sym_LBRACE] = ACTIONS(726),
    [sym__docker_variable] = ACTIONS(728),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [274] = {
    [sym_docker_variable] = STATE(76),
    [anon_sym_LBRACE] = ACTIONS(726),
    [sym__docker_variable] = ACTIONS(728),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [275] = {
    [aux_sym_json_array_repeat1] = STATE(277),
    [anon_sym_COMMA] = ACTIONS(752),
    [anon_sym_RBRACK] = ACTIONS(770),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [276] = {
    [aux_sym_json_array_repeat1] = STATE(261),
    [anon_sym_COMMA] = ACTIONS(752),
    [anon_sym_RBRACK] = ACTIONS(770),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [277] = {
    [aux_sym_json_array_repeat1] = STATE(277),
    [anon_sym_COMMA] = ACTIONS(772),
    [anon_sym_RBRACK] = ACTIONS(775),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [278] = {
    [sym_docker_variable] = STATE(102),
    [anon_sym_LBRACE] = ACTIONS(756),
    [sym__docker_variable] = ACTIONS(758),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [279] = {
    [anon_sym_COMMA] = ACTIONS(775),
    [anon_sym_RBRACK] = ACTIONS(775),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [280] = {
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RBRACK] = ACTIONS(777),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [281] = {
    [sym_user_group_id] = STATE(158),
    [aux_sym_user_id_token1] = ACTIONS(779),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [282] = {
    [sym_user_group] = STATE(158),
    [aux_sym_user_name_token1] = ACTIONS(781),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [283] = {
    [sym__json_value] = STATE(279),
    [anon_sym_DQUOTE] = ACTIONS(783),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [284] = {
    [sym_json_array] = STATE(148),
    [sym__json_prefix] = ACTIONS(657),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [285] = {
    [anon_sym_COMMA] = ACTIONS(785),
    [anon_sym_RBRACK] = ACTIONS(785),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [286] = {
    [anon_sym_DQUOTE] = ACTIONS(787),
    [anon_sym_COLON] = ACTIONS(790),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [287] = {
    [aux_sym__repository_start_token5] = ACTIONS(792),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [288] = {
    [sym__space_no_newline] = ACTIONS(794),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [289] = {
    [sym_template_expr_curly_braces] = ACTIONS(796),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [290] = {
    [sym_template_expr_percent_signs] = ACTIONS(798),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [291] = {
    [anon_sym_SLASH] = ACTIONS(800),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [292] = {
    [sym_template_expr_curly_braces] = ACTIONS(802),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [293] = {
    [sym_template_expr_percent_signs] = ACTIONS(804),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [294] = {
    [sym_template_expr_percent_signs] = ACTIONS(806),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [295] = {
    [sym_template_expr_curly_braces] = ACTIONS(808),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [296] = {
    [anon_sym_SLASH] = ACTIONS(663),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [297] = {
    [aux_sym__repository_start_token13] = ACTIONS(810),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [298] = {
    [aux_sym__repository_start_token9] = ACTIONS(812),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [299] = {
    [aux_sym__repository_start_token5] = ACTIONS(814),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [300] = {
    [aux_sym__repository_start_token13] = ACTIONS(816),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [301] = {
    [aux_sym__repository_start_token9] = ACTIONS(818),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [302] = {
    [sym__space_no_newline] = ACTIONS(820),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [303] = {
    [aux_sym__repository_start_token5] = ACTIONS(822),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [304] = {
    [aux_sym__repository_start_token9] = ACTIONS(824),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [305] = {
    [anon_sym_DQUOTE] = ACTIONS(826),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [306] = {
    [anon_sym_DQUOTE] = ACTIONS(828),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [307] = {
    [aux_sym__repository_start_token13] = ACTIONS(830),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [308] = {
    [aux_sym__repository_start_token5] = ACTIONS(832),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [309] = {
    [sym_template_expr_percent_signs] = ACTIONS(834),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [310] = {
    [sym_template_expr_curly_braces] = ACTIONS(836),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [311] = {
    [anon_sym_SLASH] = ACTIONS(838),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [312] = {
    [sym_template_expr_percent_signs] = ACTIONS(840),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [313] = {
    [sym_template_expr_curly_braces] = ACTIONS(842),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [314] = {
    [aux_sym__repository_start_token9] = ACTIONS(844),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [315] = {
    [aux_sym__repository_start_token13] = ACTIONS(846),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [316] = {
    [aux_sym__repository_start_token9] = ACTIONS(848),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [317] = {
    [aux_sym__repository_start_token5] = ACTIONS(850),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [318] = {
    [aux_sym__repository_start_token13] = ACTIONS(852),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [319] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(854),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [320] = {
    [aux_sym__repository_start_token9] = ACTIONS(856),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [321] = {
    [sym__docker_variable] = ACTIONS(858),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [322] = {
    [sym_template_expr_curly_braces] = ACTIONS(860),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [323] = {
    [sym__space_no_newline] = ACTIONS(862),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [324] = {
    [anon_sym_RBRACE] = ACTIONS(864),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [325] = {
    [sym_template_expr_percent_signs] = ACTIONS(866),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [326] = {
    [aux_sym_path_token2] = ACTIONS(868),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [327] = {
    [aux_sym_signal_name_token2] = ACTIONS(870),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [328] = {
    [sym_template_expr_percent_signs] = ACTIONS(872),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [329] = {
    [sym_template_expr_curly_braces] = ACTIONS(874),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [330] = {
    [aux_sym__repository_start_token5] = ACTIONS(876),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [331] = {
    [aux_sym__repository_start_token13] = ACTIONS(878),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [332] = {
    [anon_sym_RBRACE] = ACTIONS(880),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [333] = {
    [aux_sym__repository_start_token5] = ACTIONS(882),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [334] = {
    [aux_sym__repository_start_token9] = ACTIONS(884),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [335] = {
    [aux_sym_variable_default_value_token1] = ACTIONS(886),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [336] = {
    [anon_sym_RBRACE] = ACTIONS(888),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [337] = {
    [ts_builtin_sym_end] = ACTIONS(890),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [338] = {
    [sym__space_no_newline] = ACTIONS(892),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [339] = {
    [aux_sym__repository_start_token13] = ACTIONS(894),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [340] = {
    [sym__space_no_newline] = ACTIONS(896),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [341] = {
    [sym__space_no_newline] = ACTIONS(898),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [342] = {
    [anon_sym_SLASH] = ACTIONS(679),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [343] = {
    [anon_sym_RBRACE] = ACTIONS(900),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [344] = {
    [aux_sym__repository_start_token5] = ACTIONS(902),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [345] = {
    [aux_sym__repository_start_token9] = ACTIONS(904),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [346] = {
    [aux_sym__repository_start_token13] = ACTIONS(906),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [347] = {
    [sym__space_no_newline] = ACTIONS(908),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [348] = {
    [anon_sym_RBRACE] = ACTIONS(910),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [349] = {
    [sym__space_no_newline] = ACTIONS(912),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [350] = {
    [anon_sym_RBRACE] = ACTIONS(914),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [351] = {
    [sym__space_no_newline] = ACTIONS(916),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [352] = {
    [anon_sym_RBRACE] = ACTIONS(918),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [353] = {
    [sym__docker_variable] = ACTIONS(920),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [354] = {
    [sym_template_expr_curly_braces] = ACTIONS(922),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [355] = {
    [sym_template_expr_percent_signs] = ACTIONS(924),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [356] = {
    [anon_sym_DQUOTE] = ACTIONS(926),
    [sym_comment] = ACTIONS(3),
    [sym_line_continuation] = ACTIONS(3),
  },
  [357] = {
    [sym__docker_variable] = ACTIONS(928),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [358] = {
    [sym__docker_variable] = ACTIONS(930),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
  [359] = {
    [sym__docker_variable] = ACTIONS(932),
    [sym_comment] = ACTIONS(92),
    [sym_line_continuation] = ACTIONS(92),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(302),
  [9] = {.count = 1, .reusable = true}, SHIFT(323),
  [11] = {.count = 1, .reusable = true}, SHIFT(351),
  [13] = {.count = 1, .reusable = true}, SHIFT(349),
  [15] = {.count = 1, .reusable = true}, SHIFT(347),
  [17] = {.count = 1, .reusable = true}, SHIFT(341),
  [19] = {.count = 1, .reusable = true}, SHIFT(340),
  [21] = {.count = 1, .reusable = true}, SHIFT(288),
  [23] = {.count = 1, .reusable = true}, SHIFT(338),
  [25] = {.count = 1, .reusable = true}, SHIFT(138),
  [27] = {.count = 1, .reusable = true}, SHIFT(128),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3),
  [31] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(302),
  [34] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(323),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(351),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(349),
  [43] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(347),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(341),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(340),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(288),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(338),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(138),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 2, .production_id = 3), SHIFT_REPEAT(128),
  [64] = {.count = 1, .reusable = true}, REDUCE(sym_dockerfile, 1, .production_id = 2),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_expose, 2),
  [68] = {.count = 1, .reusable = true}, SHIFT(212),
  [70] = {.count = 1, .reusable = true}, SHIFT(254),
  [72] = {.count = 1, .reusable = true}, SHIFT(35),
  [74] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(212),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(254),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 2), SHIFT_REPEAT(35),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [87] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 2),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(243),
  [92] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_image, 3),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_image, 3),
  [98] = {.count = 1, .reusable = true}, SHIFT(214),
  [100] = {.count = 1, .reusable = false}, SHIFT(60),
  [102] = {.count = 1, .reusable = true}, SHIFT(243),
  [104] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [106] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 2),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(293),
  [111] = {.count = 1, .reusable = true}, SHIFT(293),
  [113] = {.count = 1, .reusable = true}, SHIFT(322),
  [115] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 2),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(322),
  [122] = {.count = 1, .reusable = true}, SHIFT(271),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_image, 4),
  [126] = {.count = 1, .reusable = false}, REDUCE(sym_image, 4),
  [128] = {.count = 1, .reusable = true}, SHIFT(201),
  [130] = {.count = 1, .reusable = false}, SHIFT(63),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_image, 2),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_image, 2),
  [136] = {.count = 1, .reusable = true}, SHIFT(213),
  [138] = {.count = 1, .reusable = false}, SHIFT(64),
  [140] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [142] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat1, 2),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(271),
  [147] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [149] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat3, 3),
  [151] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [153] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat4, 3),
  [155] = {.count = 1, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [157] = {.count = 1, .reusable = false}, REDUCE(aux_sym__repository_start_repeat2, 3),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 1),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 1),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 3),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 3),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_docker_variable, 4),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_docker_variable, 4),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat2, 2), SHIFT_REPEAT(354),
  [174] = {.count = 1, .reusable = false}, SHIFT(101),
  [176] = {.count = 1, .reusable = true}, SHIFT(234),
  [178] = {.count = 1, .reusable = true}, SHIFT(355),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat1, 2), SHIFT_REPEAT(255),
  [183] = {.count = 1, .reusable = true}, SHIFT(255),
  [185] = {.count = 1, .reusable = false}, SHIFT(91),
  [187] = {.count = 1, .reusable = false}, SHIFT(103),
  [189] = {.count = 1, .reusable = true}, SHIFT(354),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat3, 2), SHIFT_REPEAT(355),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 1),
  [196] = {.count = 1, .reusable = true}, SHIFT(264),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym__repository_start_repeat4, 2), SHIFT_REPEAT(234),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 2),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [207] = {.count = 1, .reusable = false}, SHIFT(111),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 3),
  [213] = {.count = 1, .reusable = false}, SHIFT(116),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 4),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 4),
  [219] = {.count = 1, .reusable = false}, SHIFT(117),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 4),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 4),
  [225] = {.count = 1, .reusable = false}, SHIFT(126),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_port, 1),
  [229] = {.count = 1, .reusable = true}, SHIFT(265),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_image, 5),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_image, 5),
  [237] = {.count = 1, .reusable = true}, SHIFT(211),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 3),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 3),
  [243] = {.count = 1, .reusable = false}, SHIFT(131),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 2),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_digest, 2),
  [249] = {.count = 1, .reusable = false}, SHIFT(120),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_port_protocol, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_image, 1),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_image, 1),
  [257] = {.count = 1, .reusable = true}, SHIFT(216),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym__port_part, 3),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym__port, 3),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 3),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 3),
  [267] = {.count = 1, .reusable = false}, SHIFT(136),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 2),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 2),
  [273] = {.count = 1, .reusable = false}, SHIFT(137),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 4),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_as_name, 4),
  [279] = {.count = 1, .reusable = false}, SHIFT(170),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 4),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 4),
  [285] = {.count = 1, .reusable = false}, SHIFT(278),
  [287] = {.count = 1, .reusable = false}, SHIFT(155),
  [289] = {.count = 1, .reusable = true}, REDUCE(aux_sym_volume_repeat1, 2),
  [291] = {.count = 1, .reusable = false}, REDUCE(aux_sym_volume_repeat1, 2),
  [293] = {.count = 2, .reusable = false}, REDUCE(aux_sym_volume_repeat1, 2), SHIFT_REPEAT(115),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_volume_repeat1, 2), SHIFT_REPEAT(326),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 5),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_workdir, 5),
  [303] = {.count = 1, .reusable = false}, SHIFT(166),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym__port_spec, 1),
  [307] = {.count = 1, .reusable = true}, SHIFT(219),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_port_range, 3),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_volume, 3),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_volume, 3),
  [315] = {.count = 1, .reusable = false}, SHIFT(115),
  [317] = {.count = 1, .reusable = true}, SHIFT(326),
  [319] = {.count = 1, .reusable = true}, REDUCE(aux_sym_workdir_repeat1, 2),
  [321] = {.count = 1, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2),
  [323] = {.count = 2, .reusable = false}, REDUCE(aux_sym_workdir_repeat1, 2), SHIFT_REPEAT(278),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 1),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 1),
  [330] = {.count = 1, .reusable = true}, SHIFT(108),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_from, 3),
  [334] = {.count = 1, .reusable = true}, SHIFT(184),
  [336] = {.count = 1, .reusable = true}, SHIFT(179),
  [338] = {.count = 1, .reusable = true}, SHIFT(181),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_from, 4),
  [342] = {.count = 1, .reusable = true}, SHIFT(189),
  [344] = {.count = 1, .reusable = true}, SHIFT(171),
  [346] = {.count = 1, .reusable = true}, SHIFT(191),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 3),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym_maintainer, 3),
  [352] = {.count = 1, .reusable = true}, SHIFT(106),
  [354] = {.count = 1, .reusable = false}, SHIFT(154),
  [356] = {.count = 1, .reusable = true}, REDUCE(aux_sym__anything, 2),
  [358] = {.count = 1, .reusable = false}, REDUCE(aux_sym__anything, 2),
  [360] = {.count = 2, .reusable = true}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(98),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_from, 5),
  [365] = {.count = 1, .reusable = true}, SHIFT(192),
  [367] = {.count = 1, .reusable = true}, SHIFT(175),
  [369] = {.count = 1, .reusable = true}, SHIFT(196),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_port, 3),
  [373] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expose_repeat1, 3),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym__anything, 2), SHIFT_REPEAT(106),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_from, 2),
  [380] = {.count = 1, .reusable = true}, SHIFT(195),
  [382] = {.count = 1, .reusable = true}, SHIFT(174),
  [384] = {.count = 1, .reusable = true}, SHIFT(198),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym__anything_or_json_array, 2),
  [388] = {.count = 1, .reusable = false}, REDUCE(sym__anything_or_json_array, 2),
  [390] = {.count = 1, .reusable = true}, SHIFT(98),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym_from, 6),
  [394] = {.count = 1, .reusable = true}, SHIFT(176),
  [396] = {.count = 1, .reusable = true}, SHIFT(190),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 1),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_from, 7),
  [402] = {.count = 1, .reusable = true}, SHIFT(173),
  [404] = {.count = 1, .reusable = true}, SHIFT(200),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_path, 1),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_path, 1),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 5),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_path, 3),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_path, 3),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 1),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_user_id, 1),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_digest, 5),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_from, 8),
  [424] = {.count = 1, .reusable = true}, SHIFT(187),
  [426] = {.count = 1, .reusable = true}, SHIFT(259),
  [428] = {.count = 1, .reusable = true}, SHIFT(260),
  [430] = {.count = 1, .reusable = false}, SHIFT(70),
  [432] = {.count = 1, .reusable = true}, SHIFT(329),
  [434] = {.count = 1, .reusable = true}, SHIFT(328),
  [436] = {.count = 1, .reusable = true}, SHIFT(229),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_user_name, 1),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_from, 9),
  [442] = {.count = 1, .reusable = true}, SHIFT(186),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_user, 3),
  [446] = {.count = 1, .reusable = true}, SHIFT(281),
  [448] = {.count = 1, .reusable = true}, SHIFT(282),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_from, 10),
  [452] = {.count = 1, .reusable = true}, SHIFT(185),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_cmd, 3),
  [456] = {.count = 1, .reusable = true}, SHIFT(217),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 3),
  [460] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dockerfile_repeat1, 1, .production_id = 1),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_entrypoint, 3),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_run, 3),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_mapped_no_lhs, 2),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_from, 12),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 1),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_shell, 3),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 3),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_stopsignal, 3),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_from, 11),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_maintainer, 4),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_user_group, 1),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_user, 5),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_user_group_id, 1),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 4),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 5),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_workdir, 6),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_json_array, 2),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_signal_name, 2),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_as_name, 5),
  [500] = {.count = 1, .reusable = true}, SHIFT(273),
  [502] = {.count = 1, .reusable = true}, SHIFT(199),
  [504] = {.count = 1, .reusable = false}, SHIFT(122),
  [506] = {.count = 1, .reusable = true}, SHIFT(292),
  [508] = {.count = 1, .reusable = true}, SHIFT(290),
  [510] = {.count = 1, .reusable = true}, SHIFT(235),
  [512] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(253),
  [515] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 2), SHIFT(311),
  [518] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(310),
  [521] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(309),
  [524] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 2), SHIFT(221),
  [527] = {.count = 1, .reusable = true}, SHIFT(188),
  [529] = {.count = 1, .reusable = true}, SHIFT(182),
  [531] = {.count = 1, .reusable = true}, SHIFT(180),
  [533] = {.count = 1, .reusable = true}, SHIFT(193),
  [535] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(253),
  [538] = {.count = 2, .reusable = false}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(311),
  [541] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(310),
  [544] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(309),
  [547] = {.count = 2, .reusable = true}, REDUCE(aux_sym_repository_repeat1, 2), SHIFT_REPEAT(221),
  [550] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(253),
  [553] = {.count = 2, .reusable = false}, REDUCE(sym_repository, 1), SHIFT(311),
  [556] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(310),
  [559] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(309),
  [562] = {.count = 2, .reusable = true}, REDUCE(sym_repository, 1), SHIFT(221),
  [565] = {.count = 1, .reusable = true}, SHIFT(197),
  [567] = {.count = 1, .reusable = true}, SHIFT(274),
  [569] = {.count = 1, .reusable = false}, SHIFT(147),
  [571] = {.count = 1, .reusable = true}, SHIFT(289),
  [573] = {.count = 1, .reusable = true}, SHIFT(325),
  [575] = {.count = 1, .reusable = true}, SHIFT(233),
  [577] = {.count = 1, .reusable = true}, SHIFT(267),
  [579] = {.count = 1, .reusable = false}, SHIFT(105),
  [581] = {.count = 1, .reusable = true}, SHIFT(313),
  [583] = {.count = 1, .reusable = true}, SHIFT(312),
  [585] = {.count = 1, .reusable = true}, SHIFT(230),
  [587] = {.count = 1, .reusable = true}, SHIFT(272),
  [589] = {.count = 1, .reusable = false}, SHIFT(113),
  [591] = {.count = 1, .reusable = true}, SHIFT(295),
  [593] = {.count = 1, .reusable = true}, SHIFT(294),
  [595] = {.count = 1, .reusable = true}, SHIFT(224),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 5),
  [599] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 5),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 1),
  [603] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 1),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 4),
  [607] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 4),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 6),
  [611] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 6),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 3),
  [615] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 3),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 5),
  [619] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 5),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym_platform, 2),
  [623] = {.count = 1, .reusable = false}, REDUCE(sym_platform, 2),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 6),
  [627] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 6),
  [629] = {.count = 1, .reusable = true}, SHIFT(225),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 3),
  [633] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 3),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 4),
  [637] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 4),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym__repository_continued, 2),
  [641] = {.count = 1, .reusable = false}, REDUCE(sym__repository_continued, 2),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym__repository_start, 2),
  [645] = {.count = 1, .reusable = false}, REDUCE(sym__repository_start, 2),
  [647] = {.count = 1, .reusable = false}, SHIFT(268),
  [649] = {.count = 1, .reusable = false}, SHIFT(283),
  [651] = {.count = 1, .reusable = false}, SHIFT(167),
  [653] = {.count = 1, .reusable = false}, SHIFT(249),
  [655] = {.count = 1, .reusable = true}, SHIFT(249),
  [657] = {.count = 1, .reusable = true}, SHIFT(218),
  [659] = {.count = 1, .reusable = true}, SHIFT(223),
  [661] = {.count = 1, .reusable = false}, SHIFT(223),
  [663] = {.count = 1, .reusable = true}, SHIFT(203),
  [665] = {.count = 1, .reusable = false}, SHIFT(342),
  [667] = {.count = 1, .reusable = false}, REDUCE(sym_template_expr_less_than_equals, 1),
  [669] = {.count = 1, .reusable = true}, SHIFT(244),
  [671] = {.count = 1, .reusable = false}, SHIFT(244),
  [673] = {.count = 1, .reusable = true}, SHIFT(43),
  [675] = {.count = 1, .reusable = true}, SHIFT(319),
  [677] = {.count = 1, .reusable = true}, SHIFT(335),
  [679] = {.count = 1, .reusable = true}, SHIFT(209),
  [681] = {.count = 1, .reusable = false}, SHIFT(291),
  [683] = {.count = 1, .reusable = true}, SHIFT(207),
  [685] = {.count = 1, .reusable = false}, SHIFT(296),
  [687] = {.count = 1, .reusable = true}, SHIFT(263),
  [689] = {.count = 1, .reusable = true}, SHIFT(90),
  [691] = {.count = 1, .reusable = true}, SHIFT(49),
  [693] = {.count = 1, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2),
  [695] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(244),
  [698] = {.count = 2, .reusable = false}, REDUCE(aux_sym_template_expr_less_than_equals_repeat1, 2), SHIFT_REPEAT(244),
  [701] = {.count = 1, .reusable = true}, SHIFT(22),
  [703] = {.count = 1, .reusable = true}, SHIFT(92),
  [705] = {.count = 1, .reusable = true}, SHIFT(206),
  [707] = {.count = 1, .reusable = true}, SHIFT(129),
  [709] = {.count = 1, .reusable = true}, SHIFT(123),
  [711] = {.count = 1, .reusable = false}, SHIFT(276),
  [713] = {.count = 1, .reusable = true}, SHIFT(251),
  [715] = {.count = 1, .reusable = false}, SHIFT(285),
  [717] = {.count = 1, .reusable = true}, SHIFT(252),
  [719] = {.count = 1, .reusable = false}, REDUCE(aux_sym__json_string, 2),
  [721] = {.count = 2, .reusable = true}, REDUCE(aux_sym__json_string, 2), SHIFT_REPEAT(251),
  [724] = {.count = 1, .reusable = false}, SHIFT(280),
  [726] = {.count = 1, .reusable = true}, SHIFT(353),
  [728] = {.count = 1, .reusable = true}, SHIFT(21),
  [730] = {.count = 1, .reusable = true}, SHIFT(321),
  [732] = {.count = 1, .reusable = true}, SHIFT(41),
  [734] = {.count = 1, .reusable = true}, SHIFT(359),
  [736] = {.count = 1, .reusable = true}, SHIFT(51),
  [738] = {.count = 1, .reusable = true}, SHIFT(327),
  [740] = {.count = 1, .reusable = true}, SHIFT(151),
  [742] = {.count = 1, .reusable = false}, SHIFT(139),
  [744] = {.count = 1, .reusable = false}, SHIFT(262),
  [746] = {.count = 1, .reusable = true}, SHIFT(97),
  [748] = {.count = 1, .reusable = true}, SHIFT(266),
  [750] = {.count = 1, .reusable = true}, SHIFT(202),
  [752] = {.count = 1, .reusable = true}, SHIFT(283),
  [754] = {.count = 1, .reusable = true}, SHIFT(162),
  [756] = {.count = 1, .reusable = true}, SHIFT(357),
  [758] = {.count = 1, .reusable = true}, SHIFT(94),
  [760] = {.count = 1, .reusable = true}, SHIFT(270),
  [762] = {.count = 1, .reusable = true}, SHIFT(68),
  [764] = {.count = 1, .reusable = true}, SHIFT(358),
  [766] = {.count = 1, .reusable = true}, SHIFT(208),
  [768] = {.count = 1, .reusable = true}, SHIFT(150),
  [770] = {.count = 1, .reusable = true}, SHIFT(160),
  [772] = {.count = 2, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2), SHIFT_REPEAT(283),
  [775] = {.count = 1, .reusable = true}, REDUCE(aux_sym_json_array_repeat1, 2),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 3),
  [779] = {.count = 1, .reusable = true}, SHIFT(159),
  [781] = {.count = 1, .reusable = true}, SHIFT(157),
  [783] = {.count = 1, .reusable = true}, SHIFT(250),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym__json_value, 2),
  [787] = {.count = 2, .reusable = true}, REDUCE(sym__port, 1), SHIFT(74),
  [790] = {.count = 1, .reusable = true}, REDUCE(sym__port, 1),
  [792] = {.count = 1, .reusable = true}, SHIFT(89),
  [794] = {.count = 1, .reusable = true}, SHIFT(232),
  [796] = {.count = 1, .reusable = true}, SHIFT(287),
  [798] = {.count = 1, .reusable = true}, SHIFT(314),
  [800] = {.count = 1, .reusable = true}, SHIFT(205),
  [802] = {.count = 1, .reusable = true}, SHIFT(308),
  [804] = {.count = 1, .reusable = true}, SHIFT(334),
  [806] = {.count = 1, .reusable = true}, SHIFT(304),
  [808] = {.count = 1, .reusable = true}, SHIFT(303),
  [810] = {.count = 1, .reusable = true}, SHIFT(222),
  [812] = {.count = 1, .reusable = true}, SHIFT(238),
  [814] = {.count = 1, .reusable = true}, SHIFT(241),
  [816] = {.count = 1, .reusable = true}, SHIFT(30),
  [818] = {.count = 1, .reusable = true}, SHIFT(32),
  [820] = {.count = 1, .reusable = true}, SHIFT(256),
  [822] = {.count = 1, .reusable = true}, SHIFT(45),
  [824] = {.count = 1, .reusable = true}, SHIFT(50),
  [826] = {.count = 1, .reusable = true}, SHIFT(74),
  [828] = {.count = 1, .reusable = true}, SHIFT(118),
  [830] = {.count = 1, .reusable = true}, SHIFT(46),
  [832] = {.count = 1, .reusable = true}, SHIFT(69),
  [834] = {.count = 1, .reusable = true}, SHIFT(298),
  [836] = {.count = 1, .reusable = true}, SHIFT(299),
  [838] = {.count = 1, .reusable = true}, SHIFT(215),
  [840] = {.count = 1, .reusable = true}, SHIFT(301),
  [842] = {.count = 1, .reusable = true}, SHIFT(330),
  [844] = {.count = 1, .reusable = true}, SHIFT(67),
  [846] = {.count = 1, .reusable = true}, SHIFT(7),
  [848] = {.count = 1, .reusable = true}, SHIFT(9),
  [850] = {.count = 1, .reusable = true}, SHIFT(10),
  [852] = {.count = 1, .reusable = true}, SHIFT(65),
  [854] = {.count = 1, .reusable = true}, SHIFT(336),
  [856] = {.count = 1, .reusable = true}, SHIFT(83),
  [858] = {.count = 1, .reusable = true}, SHIFT(226),
  [860] = {.count = 1, .reusable = true}, SHIFT(333),
  [862] = {.count = 1, .reusable = true}, SHIFT(284),
  [864] = {.count = 1, .reusable = true}, SHIFT(56),
  [866] = {.count = 1, .reusable = true}, SHIFT(320),
  [868] = {.count = 1, .reusable = true}, SHIFT(306),
  [870] = {.count = 1, .reusable = true}, SHIFT(168),
  [872] = {.count = 1, .reusable = true}, SHIFT(316),
  [874] = {.count = 1, .reusable = true}, SHIFT(317),
  [876] = {.count = 1, .reusable = true}, SHIFT(34),
  [878] = {.count = 1, .reusable = true}, SHIFT(19),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym_variable_this_or_null, 2),
  [882] = {.count = 1, .reusable = true}, SHIFT(20),
  [884] = {.count = 1, .reusable = true}, SHIFT(18),
  [886] = {.count = 1, .reusable = true}, SHIFT(332),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym_variable_default_value, 2),
  [890] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [892] = {.count = 1, .reusable = true}, SHIFT(258),
  [894] = {.count = 1, .reusable = true}, SHIFT(75),
  [896] = {.count = 1, .reusable = true}, SHIFT(237),
  [898] = {.count = 1, .reusable = true}, SHIFT(239),
  [900] = {.count = 1, .reusable = true}, SHIFT(24),
  [902] = {.count = 1, .reusable = true}, SHIFT(39),
  [904] = {.count = 1, .reusable = true}, SHIFT(40),
  [906] = {.count = 1, .reusable = true}, SHIFT(48),
  [908] = {.count = 1, .reusable = true}, SHIFT(248),
  [910] = {.count = 1, .reusable = true}, SHIFT(96),
  [912] = {.count = 1, .reusable = true}, SHIFT(257),
  [914] = {.count = 1, .reusable = true}, SHIFT(204),
  [916] = {.count = 1, .reusable = true}, SHIFT(220),
  [918] = {.count = 1, .reusable = true}, SHIFT(47),
  [920] = {.count = 1, .reusable = true}, SHIFT(245),
  [922] = {.count = 1, .reusable = true}, SHIFT(344),
  [924] = {.count = 1, .reusable = true}, SHIFT(345),
  [926] = {.count = 1, .reusable = true}, SHIFT(104),
  [928] = {.count = 1, .reusable = true}, SHIFT(246),
  [930] = {.count = 1, .reusable = true}, SHIFT(247),
  [932] = {.count = 1, .reusable = true}, SHIFT(240),
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
