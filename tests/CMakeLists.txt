include(extern_libs)
include(GoogleTest)

set(TARGET_NAME shared_types_tests)

set(SOURCE_FILES
    main.cpp
    test_serializers/ControlSerializerTest.cpp
)
add_executable(${TARGET_NAME}
    ${SOURCE_FILES}
)

target_link_libraries(${TARGET_NAME} PRIVATE shared_types_lib shared_types_include)

ADDJSON(${TARGET_NAME})

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/53495a2a7d6ba7e0691a7f3602e9a5324bba6e45.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()
target_link_libraries(${TARGET_NAME} PRIVATE gtest_main)
include(GoogleTest)
gtest_discover_tests(${TARGET_NAME})


find_package(Qt6 COMPONENTS Core REQUIRED)
target_link_libraries(${TARGET_NAME} PRIVATE Qt6::Core)
