cmake_minimum_required(VERSION 3.10)

# Project name
project(Test)

# C++ standard
set(CMAKE_CXX_STANDARD 11)

# Include directory
include_directories(include)

# Build executable
add_executable(test_swap
    src/swap.cpp
    src/test_for_swap.cpp
)
