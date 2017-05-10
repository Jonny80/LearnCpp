cmake_minimum_required(VERSION 3.7)
project(ecg_tree)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp main.h node.cpp)
add_executable(ecg_tree ${SOURCE_FILES})