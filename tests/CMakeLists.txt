include("extern_libs")
include("GoogleTest")

set(TARGET_NAME "shared_types_tests")
add_executable(${TARGET_NAME}
    main.cpp
)

target_link_libraries(${TARGET_NAME} PUBLIC "shared_types_lib" "shared_types_include")

ADDJSON(${TARGET_NAME})

enable_testing()
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
find_package(GTest CONFIG REQUIRED)

target_link_libraries(${TARGET_NAME} PRIVATE GTest::gmock GTest::gtest GTest::gmock_main GTest::gtest_main)
gtest_discover_tests(${TARGET_NAME})



