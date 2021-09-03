cmake_minimum_required(VERSION 3.17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(TARGET_NAME shared_types)
set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/_deps)

FILE(READ VERSION CURRENT_VERSION)
project(${TARGET_NAME} VERSION ${CURRENT_VERSION})
message(STATUS "Adding ${TARGET_NAME} v${CURRENT_VERSION}")
configure_file(VersionConfig.h.in VersionConfig.h)

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(apps)

if(ADD_TESTS)
    add_subdirectory(tests)
endif()
