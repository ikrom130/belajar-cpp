cmake_minimum_required(VERSION 3.31)
project(preprocessing_directive_ifDef_ifendDef)

set(CMAKE_CXX_STANDARD 20)

add_executable(preprocessing_directive_ifDef_ifendDef main.cpp
        foo.h
        bar.h
        bersama.h)
