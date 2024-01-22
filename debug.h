#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"
#include "vm.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);
void trace_stack(VM* vm);

#endif
