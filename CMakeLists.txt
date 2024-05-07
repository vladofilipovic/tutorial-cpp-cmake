cmake_minimum_required(VERSION 3.10)

message("Processing / ...")

project(
    Solver 
    VERSION 0.0.1 
    DESCRIPTION "Solver that uses universal optimizer"
    LANGUAGES CXX
)

set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

message("Project_Name: ${PROJECT_NAME}")
message("Project_Dir: ${PROJECT_DIR}")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)
