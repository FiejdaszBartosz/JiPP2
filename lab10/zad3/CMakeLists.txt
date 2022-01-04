cmake_minimum_required(VERSION 3.16)
project(zad1)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)
add_executable(zad1 src/main.cpp src/Vector.cpp)