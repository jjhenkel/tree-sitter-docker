#include <tree_sitter/parser.h>
#include <string>
#include <iostream>

namespace {
    using std::string;

    enum TokenType {
        ESCAPE_DIRECTIVE,
        ESCAPE,
        LINE_CONTINUATION
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

        void deserialize(const char *buffer, unsigned length) {
            if (length == 0) {
                windows_escape = false; // Default escape is '\'
            } else {
                windows_escape = buffer[0];
            }
        }

        bool scan(TSLexer *lexer, const bool *valid_symbols) {
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

            if (valid_symbols[ESCAPE]) {
                if (lexer->lookahead == '`' && windows_escape) {
                    lexer->result_symbol = ESCAPE;
                } else if (lexer->lookahead == '\\' && !windows_escape) {
                    lexer->result_symbol = ESCAPE;
                }
            }

            if (valid_symbols[LINE_CONTINUATION]) {
                if (lexer->lookahead == '`' && windows_escape) {
                    while (lexer->lookahead == '`') { advance(lexer); }
                } else if (lexer->lookahead == '\\' && !windows_escape) {
                    while (lexer->lookahead == '\\') { advance(lexer); }
                } else {
                    return false;
                }

                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                    advance(lexer);
                }

                if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
                    while (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
                        advance(lexer);
                    }

                    lexer->result_symbol = LINE_CONTINUATION;
                    return true;
                } else {
                    return false;
                }
            }

            return false;
        }

        bool windows_escape;
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
