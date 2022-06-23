cmake_minimum_required(VERSION 3.19)
project(designs-c C)

set(CMAKE_C_STANDARD 11)

# Turn on sanitizer for debugging
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
#    include(sanitizer.cmake)
endif ()

# Enable cMake's CTest
include(CTest)

# Dependencies: Solving external package dependencies
#set(EXTERNAL_DIR ${CMAKE_SOURCE_DIR}/externals)
#include(${EXTERNAL_DIR}/libcheck.cmake)

include_directories(${CMAKE_SOURCE_DIR}/src)

add_subdirectory(src)