set(TARGET_NAME shared_types_lib)

set(SOURCE_FILES
    Control.cpp
    RegimeRange.cpp
)

add_library(${TARGET_NAME} ${SOURCE_FILES})
target_link_libraries(${TARGET_NAME} PRIVATE shared_types_include)
