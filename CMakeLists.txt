cmake_minimum_required(VERSION 3.6)
project(shakyamuni)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Test.h)
add_executable(shakyamuni ${SOURCE_FILES})