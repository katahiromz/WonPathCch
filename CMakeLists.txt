# CMakeLists.txt --- CMake project settings
##############################################################################

# CMake minimum version
cmake_minimum_required(VERSION 3.10)

# project name and language
project(WonPathCch C)

# libWonPathCch.a
add_library(WonPathCch STATIC path.c)
target_compile_definitions(WonPathCch PUBLIC STATIC_PATHCCH)
target_include_directories(WonPathCch INTERFACE .)

# tests
add_subdirectory(tests)
