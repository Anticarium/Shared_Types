# REMOVE THIS DIRECTORY AFTER IMPLEMENTING THIS BUILD STRUCTURE IN ANTICARIUM_DESKTOP!!

include(extern_libs)

set(TARGET_NAME shared_types_app)
add_executable(${TARGET_NAME}
    main.cpp
)

target_link_libraries(${TARGET_NAME} PRIVATE shared_types_lib shared_types_include)
ADDJSON(${TARGET_NAME})
