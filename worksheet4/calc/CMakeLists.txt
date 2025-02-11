 cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

# Define the project name
project(calc)

# This project contains a library
add_library(maths adder.cpp)

# Note: You could force CMake to always build as a static/shared library:
# add_library(maths STATIC adder.cpp)
# add_library(maths SHARED adder.cpp)

if(NOT BUILD_SHARED_LIBS)
    # If static libs are compiled, we need to communicate that to the source code.
    # The definition will be used to determine how MATHSLIB_API is defined in adder.h.
    add_definitions(-Dmaths_STATIC)
endif()

# This project also contains an executable
add_executable(calc calc.cpp)

# The executable uses the library
target_link_libraries(calc maths)
