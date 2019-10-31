#include <tree_sitter/parser.h>
#include <string>
#include <iostream>

namespace {
    using std::string;
    long idx = 0;

    enum TokenType {
        ESCAPE_DIRECTIVE,
        LINE_CONTINUATION,
        _TEMPLATE_EXPR_AT_SYMBOLS_START_EX,
        _DIGEST_START_EX,
        _JSON_ARRAY_START,
        _ANYTHING_EX
    };

    struct Scanner {
        void skip(TSLexer *lexer) {
            lexer->advance(lexer, true);
        }

        void advance(TSLexer *lexer) {
            lexer->advance(lexer, false);
        }

        unsigned serialize(char *buffer) {
            buffer[0] = windows_escape;
            return 1;
        }

        // void debug_print(const std::string& pre) {
        //     std::cout << pre << ":";
        //     if (_marked != "") {
        //         std::cout << _marked << std::endl;
        //     } else {
        //         std::cout << _debug_str << std::endl;
        //     }
        // }

        // void advance_debug(TSLexer *lexer) {
        //     lexer->advance(lexer, false);
        //     _debug_str += lexer->lookahead;
        // }

        // void mark_debug() {
        //     _marked = _debug_str;
        // }

        // void debug_clear() {
        //     _debug_str = "";
        //     _marked = "";
        // }

        void deserialize(const char *buffer, unsigned length) {
            if (length == 0) {
                windows_escape = false; // Default escape is '\'
            } else {
                windows_escape = buffer[0];
            }
            // _debug_str = "";
            // _marked = "";
        }

        bool eat_spaces_including_line_continuation(TSLexer *lexer, bool have_backslash = false) {
            
            while (true) {
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

            while (true) {
                while (
                    lexer->lookahead != quote 
                    && lexer->lookahead != '\\' 
                    && (lexer->lookahead != '`' || !windows_escape) 
                    && lexer->lookahead != '\n' 
                    && lexer->lookahead != 0
                ) {
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
                        continue;
                    }
                    continue;
                } else if (lexer->lookahead == '`' && windows_escape) {
                    if (!eat_spaces_including_line_continuation(lexer)) { 
                        return -1; 
                    }
                    continue;
                } else {
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

        bool scan(TSLexer *lexer, const bool *valid_symbols) {
            // std::cout << valid_symbols[ESCAPE_DIRECTIVE] << " ";
            // std::cout << valid_symbols[LINE_CONTINUATION] << " ";
            // std::cout << valid_symbols[_JSON_ARRAY_START] << " ";
            // std::cout << valid_symbols[_ANYTHING_EX] << std::endl;

            if (valid_symbols[ESCAPE_DIRECTIVE] && !comment_seen) {
                
                // Slurp spaces
                while (lexer->lookahead == '\n' || lexer->lookahead == '\r' || lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    skip(lexer);
                }

                if (lexer->lookahead != '#') {
                    return false;
                } else {
                    advance(lexer);
                }

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
                    // std::cout << windows_escape << std::endl;
                    return true;
                } else if (lexer->lookahead == '\\') {
                    windows_escape = false;
                    advance(lexer);
                    lexer->result_symbol = ESCAPE_DIRECTIVE;
                    // std::cout << windows_escape << std::endl;
                    return true;
                } else {
                    comment_seen = true;
                    return false;
                }
            }

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

            if (valid_symbols[_JSON_ARRAY_START]) {
                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') { skip(lexer); }
            }

            if (valid_symbols[_JSON_ARRAY_START] && lexer->lookahead == '[') {
                
                advance(lexer);
                lexer->mark_end(lexer);

                while (true) {
                    if (!eat_spaces_including_line_continuation(lexer)) { return false; }
                    
                    if (lexer->lookahead == '"') {
                        int result = consume_json_array_item(lexer, '"');

                        if (result == 1) {
                            continue;
                        } else if (result == 0) {
                            break;
                        } else {
                            return false;
                        }
                    } else if (lexer->lookahead == '\'') {
                        int result = consume_json_array_item(lexer, '\'');

                        if (result == 1) {
                            continue;
                        } else if (result == 0) {
                            break;
                        } else {
                            return false;
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
                    lexer->result_symbol = _ANYTHING_EX;
                    return true;
                } else {
                    return false;
                }
            }
            
            if (valid_symbols[_ANYTHING_EX]) {
                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') { advance(lexer); }

                if (lexer->lookahead == 0) {
                    return false; // Nothing, end
                }

                bool anything = false;
                // debug_clear();

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
                        // mark_debug();
                        advance(lexer);
                        while (lexer->lookahead == ' '|| lexer->lookahead == '\t' || lexer->lookahead == '\r') {
                            advance(lexer);
                        }
                        if (lexer->lookahead == '\n') {
                            // debug_print("  @B");
                            lexer->result_symbol = _ANYTHING_EX;
                            return true;
                        } else {
                            continue;
                        }
                    }
                    else if (lexer->lookahead == '`' && windows_escape) {
                        lexer->mark_end(lexer);
                        // mark_debug();
                        advance(lexer);
                        while (lexer->lookahead == ' '|| lexer->lookahead == '\t' || lexer->lookahead == '\r') {
                            advance(lexer);
                        }
                        if (lexer->lookahead == '\n') {
                            // debug_print("  @C");
                            lexer->result_symbol = _ANYTHING_EX;
                            return true;
                        } else {
                            continue;
                        }

                    }
                }
                if (anything) {
                    lexer->result_symbol = _ANYTHING_EX;
                    lexer->mark_end(lexer);
                    // mark_debug();
                    // debug_print("  @A");
                    return true;
                } else {
                    return false;
                }
            }

            return false;
        }

        bool windows_escape;
        bool comment_seen;
        // std::string _marked;
        // std::string _debug_str;
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
