cmake_minimum_required(VERSION 3.19)
project(designs-c C)

set(CMAKE_C_STANDARD 11)

# Turn on sanitizer for debugging
include(sanitizer.cmake)

# Enable cMake's CTest
include(CTest)

# Dependencies: Solving external package dependencies
#set(EXTERNAL_DIR ${CMAKE_SOURCE_DIR}/externals)
#include(${EXTERNAL_DIR}/libcheck.cmake)

include_directories(${CMAKE_SOURCE_DIR}/src)

add_subdirectory(src)