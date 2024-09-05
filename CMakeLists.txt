cmake_minimum_required(VERSION 3.10)
project(projectC)

set(CMAKE_C_STANDARD 99)


add_executable(projectC_if_else if-else.c)
add_executable(projectC_for for.c)
add_executable(projectC_while while.c)
add_executable(projectC_switch_case switch-case.c)