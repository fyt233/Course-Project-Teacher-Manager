cmake_minimum_required(VERSION 3.30)
project(Course_Project)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

set( CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/build)

add_executable(Course_Project
    build/main.exe
    include/mymath.h
    src/main.c
        src/login.c
        src/teacher.h
)
