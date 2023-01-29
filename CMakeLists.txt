cmake_minimum_required (VERSION 3.12)
enable_language(CXX)
project(gold)

set(CMAKE_CXX_STANDARD 20)
set(CXX_STANDARD_REQUIRED ON)

include(cmake/warnings.cmake)

add_subdirectory(3rdparty)
add_subdirectory(libs)


