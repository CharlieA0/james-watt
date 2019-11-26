cmake_minimum_required (VERSION 2.8.9)
project (efficiency-map)

include_directories(inc)

file(GLOB SOURCES "src/*.cpp")

add_library (effmap MODULE ${SOURCES})
add_executable (main ${SOURCES})
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
