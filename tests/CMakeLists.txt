include(extern_libs)
include(GoogleTest)

set(TARGET_NAME shared_types_tests)
set(TEST_DATA_DIR_HEADER_PATH ${CMAKE_BINARY_DIR}/tests/include/shared_types_tests)

set(HEADER_FILES
    include/shared_types_tests/TestsUtility.hpp
)

set(SOURCE_FILES
    main.cpp
    serializers/ControlSerializerTest.cpp
)
add_executable(${TARGET_NAME}
    ${HEADER_FILES}
    ${SOURCE_FILES}
)

target_include_directories(${TARGET_NAME} PRIVATE include ${TEST_DATA_DIR_HEADER_PATH})
target_link_libraries(${TARGET_NAME} PRIVATE shared_types_lib shared_types_include)

ADDJSON(${TARGET_NAME})

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/2f80c2ba71c0e8922a03b9b855e5b019ad1f7064.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()
target_link_libraries(${TARGET_NAME} PRIVATE gtest_main)
include(GoogleTest)
gtest_discover_tests(${TARGET_NAME})

find_package(Qt6 COMPONENTS Core REQUIRED)
target_link_libraries(${TARGET_NAME} PRIVATE Qt6::Core)

configure_file(TestDataDirectory.h.in  ${TEST_DATA_DIR_HEADER_PATH}/TestDataDirectory.h)
