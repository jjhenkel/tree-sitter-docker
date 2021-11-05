#include <tree_sitter/parser.h>
#include <string>
#include <iostream>
#include <algorithm>

#undef DEBUG_PRINT

namespace {
    using std::string;
    long idx = 0;

    enum TokenType {
        _DIRECTIVE_START,
        ESCAPE_DIRECTIVE,
        LINE_CONTINUATION,
        _TEMPLATE_EXPR_AT_SYMBOLS_START_EX,
        _DIGEST_START_EX,
        _JSON_ARRAY_START,
        _ANYTHING_EX,
        _MALFORMED_EMPTY_DIRECTIVE
    };

    struct Scanner {
        void skip(TSLexer *lexer) {
            lexer->advance(lexer, true);
        }

        void advance(TSLexer *lexer) {
#ifdef DEBUG_PRINT
            _debug_str += lexer->lookahead;
#endif
            lexer->advance(lexer, false);
        }

        unsigned serialize(char *buffer) {
            buffer[0] = windows_escape;
            buffer[1] = comment_seen;
#ifdef DEBUG_PRINT
            std::cout << "Serialized comment_seen=" << comment_seen << std::endl;
#endif
            return 2;
        }

#ifdef DEBUG_PRINT
        void debug_print(const std::string& pre) {
            std::cout << pre << ":";
            if (_marked != "") {
                std::cout << _marked << std::endl;
            } else {
                std::cout << _debug_str << std::endl;
            }
        }

        void mark_debug() {
            _marked = _debug_str;
        }

        void debug_clear() {
            _debug_str = "";
            _marked = "";
        }
#endif

        void deserialize(const char *buffer, unsigned length) {
            if (length == 0) {
                windows_escape = false; // Default escape is '\'
                just_started = true;
                comment_seen = false;
            } else {
                windows_escape = buffer[0];
                comment_seen = buffer[1];
                just_started = false;
            }
#ifdef DEBUG_PRINT
            std::cout << "De-serialized comment_seen=" << comment_seen << std::endl;
#endif
#ifdef DEBUG_PRINT
            _debug_str = "";
            _marked = "";
#endif
        }

        bool eat_spaces_including_line_continuation(TSLexer *lexer, bool have_backslash = false) {
            
            while (!lexer->eof(lexer)) {
                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    skip(lexer);
                }

                if ((have_backslash || lexer->lookahead == '\\') && !windows_escape) {
                    if (have_backslash) {
                        have_backslash = false;
                    } else {
                        skip(lexer);
                    }

                    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                        skip(lexer);
                    }

                    if (lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                        return false;
                    } else {
                        while (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
                            skip(lexer);
                        }
                    }
                } else if (lexer->lookahead == '`' && windows_escape) {
                    skip(lexer);

                    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                        skip(lexer);
                    }

                    if (lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                        return false;
                    } else {
                        while (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
                            skip(lexer);
                        }
                    }
                } else if (lexer->lookahead == '#') {
                  // Gulp comments too
                  while (lexer->lookahead != '\n' && lexer->lookahead != 0) {
                      skip(lexer);
                  }
                  skip(lexer);
                } else {
                    break;
                }
            }

            return true;
        }

        int consume_json_array_item (TSLexer *lexer, char quote) {
            advance(lexer);

            while (!lexer->eof(lexer)) {
                bool last_nonspace_was_close_bracket = false;
                while (
                    lexer->lookahead != quote 
                    && lexer->lookahead != '\\' 
                    && (lexer->lookahead != '`' || !windows_escape) 
                    && lexer->lookahead != '\n' 
                    && lexer->lookahead != 0
                ) {
                    if (lexer->lookahead != ' ' && lexer->lookahead != '\t' && lexer->lookahead != '\r' && lexer->lookahead != ']') {
                        last_nonspace_was_close_bracket = false;
                    } else if (lexer->lookahead == ']') {
                        last_nonspace_was_close_bracket = true;
                    }

                    advance(lexer);
                }
                if (lexer->lookahead == quote) {
                    advance(lexer);
                    if (!eat_spaces_including_line_continuation(lexer)) { 
                        return -1; 
                    }
                    break;
                }
                else if (lexer->lookahead == '\\') {
                    advance(lexer);
                    if (!eat_spaces_including_line_continuation(lexer, true)) { 
                        // Let anything be after slash to deal with things like windows paths in ENTRYPOINT arrays
                        advance(lexer);
                    }
                    continue;
                } else if (lexer->lookahead == '`' && windows_escape) {
                    if (!eat_spaces_including_line_continuation(lexer)) { 
                        return -1; 
                    }
                    continue;
                } else {
                    if (last_nonspace_was_close_bracket) {
                        return -2;
                    }

                    return -1;
                }
            }

            if (lexer->lookahead == ',') {
                advance(lexer);
                return 1;
            } else { 
                return 0; 
            }
        }

        int is_directive(TSLexer *lexer) {
            lexer->mark_end(lexer);

            std::string _maybe_directive = "";
            while (isalpha(lexer->lookahead) && lexer->lookahead != 0) {
                _maybe_directive += (char)lexer->lookahead;
                advance(lexer);
            }

            std::transform(
                _maybe_directive.begin(),
                _maybe_directive.end(), 
                _maybe_directive.begin(),
                ::toupper
            );
            just_started = false;

#ifdef DEBUG_PRINT
            std::cout << "Maybe directive: " << _maybe_directive << std::endl;
#endif

            if (
                _maybe_directive == "ADD" ||
                _maybe_directive == "ARG" ||
                _maybe_directive == "CMD" ||
                _maybe_directive == "COPY" ||
                _maybe_directive == "ENTRYPOINT" ||
                _maybe_directive == "ENV" ||
                _maybe_directive == "EXPOSE" ||
                _maybe_directive == "FROM" ||
                _maybe_directive == "HEALTHCHECK" ||
                _maybe_directive == "LABEL" ||
                _maybe_directive == "MAINTAINER" ||
                _maybe_directive == "ONBUILD" ||
                _maybe_directive == "RUN" ||
                _maybe_directive == "SHELL" ||
                _maybe_directive == "STOPSIGNAL" ||
                _maybe_directive == "USER" ||
                _maybe_directive == "VOLUME" ||
                _maybe_directive == "WORKDIR"
            ) {
                if (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\\') {
                    return 1;
                } else if (lexer->lookahead == '\r' || lexer->lookahead == '\n' || lexer->lookahead == 0) {
                    return 3;
                } else {
                    return 2;
                }
            }
            
            if (_maybe_directive.length() > 0) {
                return 2;
            }

            return -1;
        }

        bool scan(TSLexer *lexer, const bool *valid_symbols) {
            bool was_just_started = just_started;
            just_started = false;

#ifdef DEBUG_PRINT
            std::cout << comment_seen << " ";
            std::cout << valid_symbols[_DIRECTIVE_START] << " ";
            std::cout << valid_symbols[ESCAPE_DIRECTIVE] << " ";
            std::cout << valid_symbols[LINE_CONTINUATION] << " ";
            std::cout << valid_symbols[_TEMPLATE_EXPR_AT_SYMBOLS_START_EX] << " ";
            std::cout << valid_symbols[_DIGEST_START_EX] << " ";
            std::cout << valid_symbols[_JSON_ARRAY_START] << " ";
            std::cout << valid_symbols[_ANYTHING_EX] << " ";
            std::cout << valid_symbols[_MALFORMED_EMPTY_DIRECTIVE] << std::endl;
            std::cout << (was_just_started ? "Just started." : "Continuing.") << std::endl;
            std::cout << lexer->lookahead << " " << (char)lexer->lookahead << std::endl;
#endif

            if ((valid_symbols[_DIGEST_START_EX] || valid_symbols[_TEMPLATE_EXPR_AT_SYMBOLS_START_EX]) && lexer->lookahead == '@') {
                // std::cout << "A: " << (char)lexer->lookahead << std::endl;
                advance(lexer);
                lexer->mark_end(lexer);

                if (lexer->lookahead == '@') {
                    while (lexer->lookahead == '@') {
                        advance(lexer);
                    }
                    lexer->mark_end(lexer);
                    while (lexer->lookahead != '\n'
                       && lexer->lookahead != '@'
                       && lexer->lookahead != 0
                    ) {
                        advance(lexer);
                    }
                    if (lexer->lookahead == '@' && valid_symbols[_TEMPLATE_EXPR_AT_SYMBOLS_START_EX]) {
                        while (lexer->lookahead == '@') {
                            advance(lexer);
                        }
                        lexer->result_symbol = _TEMPLATE_EXPR_AT_SYMBOLS_START_EX;
                        return true;
                    } else {
                        return false;
                    }
                }

                while (lexer->lookahead != '\r'
                       && lexer->lookahead != '\n'
                       && lexer->lookahead != '@'
                       && lexer->lookahead != 0
                ) {
                    // std::cout << "C: " << (char)lexer->lookahead << std::endl;
                    advance(lexer);
                }

                if (lexer->lookahead == '@' && valid_symbols[_TEMPLATE_EXPR_AT_SYMBOLS_START_EX]) {
                    lexer->result_symbol = _TEMPLATE_EXPR_AT_SYMBOLS_START_EX;
                // std::cout << "HERE1" << std::endl;
                    return true;
                } else if (lexer->lookahead != '@' && valid_symbols[_DIGEST_START_EX]) {
                    lexer->result_symbol = _DIGEST_START_EX;
                // std::cout << "HERE2" << std::endl;
                    return true;
                } else {
                // std::cout << "HERE3" << std::endl;
                    return false;
                }
            }
            
            if (valid_symbols[LINE_CONTINUATION] && lexer->lookahead == '`' && windows_escape) {
                while (lexer->lookahead == '`') { advance(lexer); }
                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    advance(lexer);
                } 
                if (lexer->lookahead == '\n' || lexer->lookahead == '\r' || lexer->lookahead == 0) {
                    while (lexer->lookahead == '\n' || lexer->lookahead == '\r' || lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                        advance(lexer);
                    }

                    lexer->result_symbol = LINE_CONTINUATION;
                    return true;
                }
            }

            if (valid_symbols[LINE_CONTINUATION] && lexer->lookahead == '\\' && !windows_escape) {
                while (lexer->lookahead == '\\') { advance(lexer); }
                while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\\') {
                    advance(lexer);
                } 
                if (lexer->lookahead == '\n' || lexer->lookahead == '\r' || lexer->lookahead == 0) {
                    while (lexer->lookahead == '\n' || lexer->lookahead == '\r' || lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                        advance(lexer);
                    }

                    lexer->result_symbol = LINE_CONTINUATION;
                    return true;
                } 
            }

            bool chomped_spaces = false;
            if (valid_symbols[_DIRECTIVE_START] && (lexer->get_column(lexer) == 0 || was_just_started)) {
                // Slurp spaces
                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    skip(lexer);
                    chomped_spaces = true;
                }

                int result = is_directive(lexer);

#ifdef DEBUG_PRINT
                std::cout << "is_directive: " << (result == 1 ? "Yes" : (result == 2 ? "_anything_ex" : std::to_string(result))) << std::endl;
#endif

                if (result == 1) {
                    // _ANYTHING_EX takes precedence over _DIRECTIVE_START
                    if (valid_symbols[_ANYTHING_EX]) {
                        lexer->mark_end(lexer);
                        lexer->result_symbol = _ANYTHING_EX;
                        return true;
                    }
                    lexer->result_symbol = _DIRECTIVE_START;
                    return true;
                } else if (result == 2 && valid_symbols[_ANYTHING_EX]) {
                    lexer->mark_end(lexer);
                    lexer->result_symbol = _ANYTHING_EX;
                    return true;
                } else if (result == 3 && valid_symbols[_MALFORMED_EMPTY_DIRECTIVE]) {
                    lexer->mark_end(lexer);
                    lexer->result_symbol = _MALFORMED_EMPTY_DIRECTIVE;
                    return true;
                }
            }

            if (valid_symbols[ESCAPE_DIRECTIVE] || valid_symbols[_JSON_ARRAY_START] || valid_symbols[_ANYTHING_EX]) {
                // Slurp spaces
                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    skip(lexer);
                    chomped_spaces = true;
                }
            }

            if (valid_symbols[ESCAPE_DIRECTIVE] && !comment_seen && lexer->lookahead == '#') {
#ifdef DEBUG_PRINT
                std::cout << "Trying escape: " << std::endl;
#endif
                advance(lexer);

                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    advance(lexer);
                }

                if (lexer->lookahead == 'e' || lexer->lookahead == 'E') {
                    advance(lexer);
                } else { comment_seen = true; return false; }
                if (lexer->lookahead == 's' || lexer->lookahead == 'S') {
                    advance(lexer);
                } else { comment_seen = true; return false; }
                if (lexer->lookahead == 'c' || lexer->lookahead == 'C') {
                    advance(lexer);
                } else { comment_seen = true; return false; }
                if (lexer->lookahead == 'a' || lexer->lookahead == 'A') {
                    advance(lexer);
                } else { comment_seen = true; return false; }
                if (lexer->lookahead == 'p' || lexer->lookahead == 'P') {
                    advance(lexer);
                } else { comment_seen = true; return false; }
                if (lexer->lookahead == 'e' || lexer->lookahead == 'E') {
                    advance(lexer);
                } else { comment_seen = true; return false; }

                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    advance(lexer);
                }

                if (lexer->lookahead == '=') {
                    advance(lexer);
                } else { comment_seen = true; return false; }

                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    advance(lexer);
                }
                
                // std::cout << (char)lexer->lookahead << std::endl;

                if (lexer->lookahead == '`') {
                    windows_escape = true;
                    advance(lexer);
                    lexer->result_symbol = ESCAPE_DIRECTIVE;
                    lexer->mark_end(lexer);
                    return true;
                } else if (lexer->lookahead == '\\') {
                    windows_escape = false;
                    advance(lexer);
                    lexer->result_symbol = ESCAPE_DIRECTIVE;
                    lexer->mark_end(lexer);
                    return true;
                } else {
                    comment_seen = true;
                    return false;
                }
            }

            if (valid_symbols[_JSON_ARRAY_START] && lexer->lookahead == '[') {
                
                advance(lexer);
                lexer->mark_end(lexer);

                while (!lexer->eof(lexer)) {
                    if (!eat_spaces_including_line_continuation(lexer)) { return false; }
                    
                    if (lexer->lookahead == '"') {
                        int result = consume_json_array_item(lexer, '"');

                        if (result == 1) {
                            continue;
                        } else if (result == 0) {
                            break;
                        } else if (result == -1) {
                            return false;
                        } else if (result == -2) {
                            lexer->result_symbol = _JSON_ARRAY_START;
                            return true;
                        }
                    } else if (lexer->lookahead == '\'') {
                        int result = consume_json_array_item(lexer, '\'');

                        if (result == 1) {
                            continue;
                        } else if (result == 0) {
                            break;
                        } else if (result == -1) {
                            return false;
                        } else if (result == -2) {
                            lexer->result_symbol = _JSON_ARRAY_START;
                            return true;
                        }
                    } else if (lexer->lookahead == ']') {
                        break;
                    } else if (valid_symbols[_ANYTHING_EX]) {
                        lexer->result_symbol = _ANYTHING_EX;
                        lexer->mark_end(lexer);
                        return true;
                    } else {
                        return false;
                    }
                }

                if (!eat_spaces_including_line_continuation(lexer)) { return false; }

                if (lexer->lookahead == ']') {
                    lexer->result_symbol = _JSON_ARRAY_START;
                    return true;
                } else if (valid_symbols[_ANYTHING_EX]) {
                    lexer->mark_end(lexer);
                    lexer->result_symbol = _ANYTHING_EX;
                    return true;
                } else {
                    return false;
                }
            }
            
            if (valid_symbols[_ANYTHING_EX]) {
                bool anything = false;

                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') { advance(lexer); }

                if (lexer->lookahead == 0) {
                    return false; // Nothing, end
                }

#ifdef DEBUG_PRINT
                debug_clear();
#endif

                // Avoid gulping up comments
                if (lexer->lookahead == '#') {
                    return false;
                }

                while (lexer->lookahead != '\n' && lexer->lookahead != '\r' && lexer->lookahead != 0) {
                    anything = true;
                    if (lexer->lookahead != '\\' && !windows_escape) {
                        advance(lexer);
                    } else if (lexer->lookahead != '`' && windows_escape) {
                        advance(lexer);
                    }
                    else if (lexer->lookahead == '\\' && !windows_escape) {
                        lexer->mark_end(lexer);
#ifdef DEBUG_PRINT
                        mark_debug();
#endif
                        advance(lexer);
                        while (lexer->lookahead == ' '|| lexer->lookahead == '\t' || lexer->lookahead == '\r') {
                            advance(lexer);
                        }
                        if (lexer->lookahead == '\n') {
#ifdef DEBUG_PRINT
                            debug_print("  @B");
#endif
                            lexer->result_symbol = _ANYTHING_EX;
                            return true;
                        } else {
                            continue;
                        }
                    }
                    else if (lexer->lookahead == '`' && windows_escape) {
                        lexer->mark_end(lexer);
#ifdef DEBUG_PRINT
                        mark_debug();
#endif
                        advance(lexer);
                        while (lexer->lookahead == ' '|| lexer->lookahead == '\t' || lexer->lookahead == '\r') {
                            advance(lexer);
                        }
                        if (lexer->lookahead == '\n') {
#ifdef DEBUG_PRINT
                            debug_print("  @C");
#endif
                            lexer->result_symbol = _ANYTHING_EX;
                            return true;
                        } else {
                            continue;
                        }

                    }
                }
                if (anything || chomped_spaces) {
                    if (!anything && chomped_spaces) {
                        while (lexer->lookahead == '\r' || lexer->lookahead == '\n') {
                            advance(lexer);
                        }
                    }

                    lexer->result_symbol = _ANYTHING_EX;
                    lexer->mark_end(lexer);
#ifdef DEBUG_PRINT
                    mark_debug();
                    debug_print("  @A");
#endif
                    return true;
                } else {
                    return false;
                }
            }

            return false;
        }

        bool windows_escape;
        bool comment_seen = false;
        bool just_started = true;
      
#ifdef DEBUG_PRINT
        std::string _marked;
        std::string _debug_str;
#endif
    };
}

extern "C" {
    void *tree_sitter_docker_external_scanner_create() {
        return new Scanner();
    }

    bool tree_sitter_docker_external_scanner_scan(void *payload, TSLexer *lexer,
                                                const bool *valid_symbols) {
        Scanner *scanner = static_cast<Scanner *>(payload);
        return scanner->scan(lexer, valid_symbols);
    }

    unsigned tree_sitter_docker_external_scanner_serialize(void *payload, char *state) {
        Scanner *scanner = static_cast<Scanner *>(payload);
        return scanner->serialize(state);
    }

    void tree_sitter_docker_external_scanner_deserialize(void *payload, const char *state, unsigned length) {
        Scanner *scanner = static_cast<Scanner *>(payload);
        scanner->deserialize(state, length);
    }

    void tree_sitter_docker_external_scanner_destroy(void *payload) {
        Scanner *scanner = static_cast<Scanner *>(payload);
        delete scanner;
    }
}
