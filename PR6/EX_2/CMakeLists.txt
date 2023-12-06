cmake_minimum_required(VERSION 3.26)
project(EX_2 C)

set(CMAKE_C_STANDARD 11)

add_executable(EX_2 main.c
        threads.h
        threads.c)
