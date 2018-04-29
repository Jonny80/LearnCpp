cmake_minimum_required(VERSION 3.10)
project(ecg_tree)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(ecg_tree
        main.cpp
        node.cpp
        node.h)
