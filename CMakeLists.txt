cmake_minimum_required(VERSION 3.23)
project(LearnC C)

set(CMAKE_C_STANDARD 99)

add_executable(LearnC main.c basic/tokens.c basic/constants.c basic/operators.c basic/data_types.c)
