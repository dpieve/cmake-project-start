cmake_minimum_required(VERSION 3.22)

project(frontend 
    VERSION 1.0.0 
    LANGUAGES C CXX)

set(EXECUTABLE_NAME Executable)
set(LIBRARY_NAME Library)

include_directories(../backend/inc)

add_subdirectory(src)
add_subdirectory(inc)
add_subdirectory(app)
