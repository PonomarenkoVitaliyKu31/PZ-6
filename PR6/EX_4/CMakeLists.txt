cmake_minimum_required(VERSION 3.26)
project(EX_4 C)

set(CMAKE_C_STANDARD 11)

add_executable(EX_4 main.c
        catalan.h
        catalan.c
        prime.h
        prime.c
        thread.h
        thread.c)
