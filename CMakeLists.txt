# CMake version
cmake_minimum_required(VERSION 3.20)
# Project name
project(HITSC30
VERSION 1.0.0
DESCRIPTION "CMakeLists Template Learnning"
LANGUAGES CXX
)
# C++ standard 
set(CMAKE_CXX_STANDARD 17)
# ProjectType: release/debug
set(CMAKE_BUILD_TYPE Debug)
# Find Include Directory
include_directories(${CMAKE_SOURCE_DIR}/include)
# Auxiliary Find Source Directory
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)
# Target File
set(TARGET_NAME "MyShot")

add_executable(${TARGET_NAME}
    ${CMAKE_SOURCE_DIR}/main.cpp 
    ${SRC_LIST}
)
# Set Final Product Directory
set_target_properties(${TARGET_NAME}
    PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)
