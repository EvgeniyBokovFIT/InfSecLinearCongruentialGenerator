cmake_minimum_required(VERSION 3.23)
project(InfSecLinearCongruentialGenerator C)

set(CMAKE_C_STANDARD 99)

add_executable(InfSecLinearCongruentialGenerator main.c LinearCongruentialGenerator.h LinearCongruentialGenerator.c)
