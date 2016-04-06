cmake_minimum_required(VERSION 3.4)
project(04)


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lm -Werror")

set(SOURCE_FILES main.c io.h io.c file.c file.h)
add_executable(04 ${SOURCE_FILES} file.c file.h)