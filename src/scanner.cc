#include <tree_sitter/parser.h>
#include <string>
#include <iostream>

namespace {
    using std::string;
    long idx = 0;

    enum TokenType {
        ESCAPE_DIRECTIVE,
        LINE_CONTINUATION,
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

        bool eat_spaces_including_line_continuation(TSLexer *lexer) {
            
            while (true) {
                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    skip(lexer);
                }

                if (lexer->lookahead == '\\' && !windows_escape) {
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
                } else {
                    break;
                }
            }

            return true;
        }

        bool scan(TSLexer *lexer, const bool *valid_symbols) {
            // std::cout << valid_symbols[ESCAPE_DIRECTIVE] << " ";
            // std::cout << valid_symbols[LINE_CONTINUATION] << " ";
            // std::cout << valid_symbols[_JSON_ARRAY_START] << " ";
            // std::cout << valid_symbols[_ANYTHING_EX] << std::endl;

            if (valid_symbols[ESCAPE_DIRECTIVE]) {
                
                while (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
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
                } else { return false; }
                if (lexer->lookahead == 's' || lexer->lookahead == 'S') {
                    advance(lexer);
                } else { return false; }
                if (lexer->lookahead == 'c' || lexer->lookahead == 'C') {
                    advance(lexer);
                } else { return false; }
                if (lexer->lookahead == 'a' || lexer->lookahead == 'A') {
                    advance(lexer);
                } else { return false; }
                if (lexer->lookahead == 'p' || lexer->lookahead == 'P') {
                    advance(lexer);
                } else { return false; }
                if (lexer->lookahead == 'e' || lexer->lookahead == 'E') {
                    advance(lexer);
                } else { return false; }

                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    advance(lexer);
                }

                if (lexer->lookahead == '=') {
                    advance(lexer);
                } else { return false; }

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
                } else {
                    windows_escape = false;
                    advance(lexer);
                    lexer->result_symbol = ESCAPE_DIRECTIVE;
                    // std::cout << windows_escape << std::endl;
                    return true;
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
                        advance(lexer);

                        while (true) {
                            while (lexer->lookahead != '"' && lexer->lookahead != '\\' && lexer->lookahead != '\n' && lexer->lookahead != 0) {
                                advance(lexer);
                            }

                            if (lexer->lookahead == '"') {
                                advance(lexer);
                                if (!eat_spaces_including_line_continuation(lexer)) { 
                                    return false; 
                                }
                                break;
                            }
                            else if (lexer->lookahead == '\\') {
                                advance(lexer);
                                if (lexer->lookahead == '"' ||
                                    lexer->lookahead == '\\' ||
                                    lexer->lookahead == '/' ||
                                    lexer->lookahead == 'b' ||
                                    lexer->lookahead == 'f' ||
                                    lexer->lookahead == 'n' ||
                                    lexer->lookahead == 'r' ||
                                    lexer->lookahead == 't' ||
                                    lexer->lookahead == 'u'
                                ) {
                                    advance(lexer);
                                } else {
                                    return false;
                                }
                            } else {
                                return false;
                            }
                        }

                        if (lexer->lookahead == ',') {
                            advance(lexer);
                            continue;
                        } else { 
                            break; 
                        }
                    } else if (lexer->lookahead == '\'') {
                        advance(lexer);

                        while (true) {
                            while (lexer->lookahead != '\'' && lexer->lookahead != '\\' && lexer->lookahead != '\n' && lexer->lookahead != 0) {
                                advance(lexer);
                            }

                            if (lexer->lookahead == '\'') {
                                advance(lexer);
                                if (!eat_spaces_including_line_continuation(lexer)) { 
                                    return false; 
                                }
                                break;
                            }
                            else if (lexer->lookahead == '\\') {
                                advance(lexer);
                                if (lexer->lookahead == '\'' ||
                                    lexer->lookahead == '\\' ||
                                    lexer->lookahead == '/' ||
                                    lexer->lookahead == 'b' ||
                                    lexer->lookahead == 'f' ||
                                    lexer->lookahead == 'n' ||
                                    lexer->lookahead == 'r' ||
                                    lexer->lookahead == 't' ||
                                    lexer->lookahead == 'u'
                                ) {
                                    advance(lexer);
                                } else {
                                    return false;
                                }
                            } else {
                                return false;
                            }
                        }

                        if (lexer->lookahead == ',') {
                            advance(lexer);
                            continue;
                        } else { 
                            break; 
                        }
                    } else if (lexer->lookahead == ']') {
                        break;
                    } 
                    else {
                        lexer->result_symbol = _ANYTHING_EX;
                        lexer->mark_end(lexer);
                        return true;
                    }
                }

                if (!eat_spaces_including_line_continuation(lexer)) { return false; }

                if (lexer->lookahead == ']') {
                    lexer->result_symbol = _JSON_ARRAY_START;
                    return true;
                } else {
                    lexer->result_symbol = _ANYTHING_EX;
                    return true;
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
