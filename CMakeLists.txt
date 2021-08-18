cmake_minimum_required(VERSION 3.17)
set(TARGET_NAME "shared_types")
project(${TARGET_NAME})
SET(CMAKE_CXX_STANDARD 20)

add_subdirectory("src")

#add_executable(${TARGET_NAME} main.cpp)
#target_link_libraries(${TARGET_NAME} "shared_types_lib")
