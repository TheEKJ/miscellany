cmake_minimum_required(VERSION 3.10)

project(miscellany CXX)

set(CMAKE_INCLUDE_DIRECTORIES_BEFORE ON)

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/src")

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/Win32")
message(STATUS "Win32 added!")
