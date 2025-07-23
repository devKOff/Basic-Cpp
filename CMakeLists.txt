cmake_minimum_required(VERSION 3.31)
project(platform)

set(CMAKE_CXX_STANDARD 20)

add_executable(platform main.cpp)
add_executable(platform loop.cpp)
add_executable(platform sample.cpp)
add_executable(platform functions.cpp
        array.cpp
        2-Darray.cpp
)