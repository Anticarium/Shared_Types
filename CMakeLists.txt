cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

project("shared_types" VERSION 1.0.0)
configure_file(VersionConfig.h.in VersionConfig.h)

add_subdirectory("include")
add_subdirectory("src")
add_subdirectory("apps")

# TODO: add only if passed parameter -DADD_TESTS=ON
add_subdirectory("tests")
