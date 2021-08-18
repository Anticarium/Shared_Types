cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(TARGET_NAME "shared_types")

project(${TARGET_NAME} VERSION 1.0)
configure_file(VersionConfig.h.in VersionConfig.h)

add_subdirectory("src")
add_executable(${TARGET_NAME} main.cpp)

target_link_libraries(${TARGET_NAME} PUBLIC "shared_types_lib")

find_package(nlohmann_json CONFIG REQUIRED)
target_link_libraries(${TARGET_NAME} PRIVATE nlohmann_json nlohmann_json::nlohmann_json)
