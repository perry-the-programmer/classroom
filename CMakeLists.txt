cmake_minimum_required(VERSION 3.10)

project(Classroom)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_subdirectory(student-dl)

add_executable(Classroom classroom.cpp)

target_link_libraries(Classroom PUBLIC StudentDL)
target_include_directories(Classroom PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/student-dl")

