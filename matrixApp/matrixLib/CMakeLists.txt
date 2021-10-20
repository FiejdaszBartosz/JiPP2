cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(simpleLibLib STATIC src/lib.cpp)