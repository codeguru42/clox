#include <stdlib.h>

#include "chunks.h"

void initChnk(Chunk* chunk) {
    chunk->count = 0;
    chunk->capacity = 0;
    chunk->code = NULL;
}
