include(ExternLibs)
include(GoogleTest)

set(TARGET_NAME shared_types_tests)
set(TEST_DATA_DIR_HEADER_PATH ${CMAKE_BINARY_DIR}/tests/include/shared_types_tests)

set(HEADER_FILES
    shared_types_tests/TestsUtility.h
)

set(SOURCE_FILES
    main.cpp
    serializers/ControlSerializerTest.cpp
    serializers/SensorDataSerializerTest.cpp
    serializers/RegimeValueSerializerTest.cpp
    serializers/RegimesSerializerTest.cpp
    serializers/CurrentRegimeSerializerTest.cpp
    shared_types_tests/TestsUtility.cpp
)


add_executable(${TARGET_NAME}
    ${HEADER_FILES}
    ${SOURCE_FILES}
)

configure_file(TestDataDirectory.h.in  ${TEST_DATA_DIR_HEADER_PATH}/TestDataDirectory.h)

target_include_directories(${TARGET_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} ${TEST_DATA_DIR_HEADER_PATH})
target_link_libraries(${TARGET_NAME} PRIVATE shared_types_lib shared_types_include)

ADDJSON(${TARGET_NAME})
ADDGTEST(${TARGET_NAME})
ADDQT5CORE(${TARGET_NAME})


