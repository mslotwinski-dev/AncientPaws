cmake_minimum_required(VERSION 3.10)

project(AncientPaws)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(src)

file(GLOB_RECURSE SOURCES
    src/*.cpp
    src/**/*.cpp
    src/**/**/*.cpp
    main.cpp 
)

add_executable(${PROJECT_NAME} ${SOURCES})