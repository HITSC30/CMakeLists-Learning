# cmake version
cmake_minimum_required(VERSION 3.20)
# project name
project(HITSC30)
# c++ standard 
set(CMAKE_CXX_STANDARD 17)
# cmake model: release/debug
set(CMAKE_BUILD_TYPE Debug)
#.h file position
include_directories(${CMAKE_SOURCE_DIR}/include)
#output position
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# support .cpp position
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)
# make a union with all cpp
add_executable(HappyGame 
${CMAKE_SOURCE_DIR}/main.cpp 
${SRC_LIST}
)