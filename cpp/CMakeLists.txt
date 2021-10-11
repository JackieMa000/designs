cmake_minimum_required(VERSION 3.15)

# set the project name and version
project(designs-cpp VERSION 1.0)

##### specify the C/C++ standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Turn on sanitizer for debugging
include(sanitizer.cmake)

# Enable cMake's CTest
include(CTest)

# Dependencies: Solving external package dependencies
#set(EXTERNAL_DIR ${CMAKE_SOURCE_DIR}/externals)
#include(${EXTERNAL_DIR}/gtest.cmake)

include_directories(${CMAKE_SOURCE_DIR}/src)

add_subdirectory(src)