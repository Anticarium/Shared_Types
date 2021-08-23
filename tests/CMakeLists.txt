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

configure_file(TestDataDirectory.h.in  ${TEST_DATA_DIR_HEADER_PATH}/TestDataDirectory.h)

target_include_directories(${TARGET_NAME} PRIVATE include ${TEST_DATA_DIR_HEADER_PATH})
target_link_libraries(${TARGET_NAME} PRIVATE shared_types_lib shared_types_include)

ADDJSON(${TARGET_NAME})
ADDGTEST(${TARGET_NAME})
ADDQT6CORE(${TARGET_NAME})


