cmake_minimum_required(VERSION 3.7)
project(ecg_tree)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp node.cpp node.h node.cpp node.h)
add_executable(ecg_tree ${SOURCE_FILES})