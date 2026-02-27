# CMake version
cmake_minimum_required(VERSION 3.20)

# Project name
project(HITSC30
VERSION 1.0.0
DESCRIPTION "CMakeLists Template Learning"
LANGUAGES CXX
)
# C++ standard 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Prepare For Clangd
# 自动将 compile_commands.json 软链接或拷贝到项目根目录
# 1. 首先开启导出功能（建议放在 project 之后）
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# ProjectType: release/debug
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# Auxiliary Find Source Directory
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)

# Definition Lib
add_library(lib_address
SHARED
${SRC_LIST})

#include_directories(${CMAKE_SOURCE_DIR}/include)
target_include_directories(lib_address 
PUBLIC
${CMAKE_SOURCE_DIR}/include)

#Definition Lib Address
set_target_properties(lib_address 
PROPERTIES
LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/My_libs")

# Find Include Directory

# Target File
set(TARGET_NAME "MyShot")

add_executable(${TARGET_NAME}
    ${CMAKE_SOURCE_DIR}/main.cpp)

# Link Lib
target_link_libraries(${TARGET_NAME} 
PRIVATE
lib_address)
# Set Final Product Directory
set_target_properties(${TARGET_NAME}
    PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)
