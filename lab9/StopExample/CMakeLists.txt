cmake_minimum_required(VERSION 3.16)
project(vectorExample)

set(CMAKE_CXX_STANDARD 20)
add_executable(vectorExample Stop.cpp vExample.cpp Line.cpp Line.h)