cmake_minimum_required(VERSION 3.27)
project(clox C)

set(CMAKE_C_STANDARD 23)

add_executable(clox main.c
        common.h
        chunk.h
        chunk.c
        memory.h
        memory.c
        debug.h
        debug.c
        value.h
        value.c
        vm.c
        vm.h
        compiler.c
        compiler.h
        scanner.c
        scanner.h
)
