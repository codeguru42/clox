#include "compiler.h"

#include <stdio.h>

#include "scanner.h"

bool compile(const char *source, Chunk *chunk) {
    initScanner(source);
    advance();
    expression();
    consume(TOKEN_EOF, "Expect end of expression.");
}
