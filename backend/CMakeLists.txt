cmake_minimum_required(VERSION 3.22)

project(backend VERSION 1.0.0 LANGUAGES C CXX)

set(BACK_LIBRARY_NAME ${PROJECT_NAME})

add_subdirectory(src)
add_subdirectory(inc)
