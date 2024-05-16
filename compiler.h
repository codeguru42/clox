#ifndef clox_compmiler_h
#define clox_compmiler_h

#include "vm.h"

bool compile(const char *source, Chunk *chunk);

#endif
