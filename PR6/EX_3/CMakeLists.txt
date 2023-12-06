cmake_minimum_required(VERSION 3.26)
project(EX_3 C)

set(CMAKE_C_STANDARD 11)

add_executable(EX_3 main.c
        thread_functions.h
        thread_functions.c)
