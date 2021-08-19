set(TARGET_NAME "shared_types_lib")

set(SOURCE_FILES
    Control.cpp
)

add_library(${TARGET_NAME} ${SOURCE_FILES})
target_link_libraries(${TARGET_NAME} PUBLIC "shared_types_include")
