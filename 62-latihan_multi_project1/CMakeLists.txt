cmake_minimum_required(VERSION 3.31)
project(latihan_multi_project1)

set(CMAKE_CXX_STANDARD 20)

add_executable(latihan_multi_project1 main.cpp
        crud.h
        crud.cpp)
