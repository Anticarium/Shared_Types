set(TARGET_NAME "shared_types_include")

set(HEADER_FILES
    shared_types/Control.h
    shared_types/ControlSerializer.hpp
    shared_types/RegimeRange.h
    shared_types/RegimeRangeSerializer.hpp
)

add_library(${TARGET_NAME} INTERFACE ${HEADER_FILES})
target_include_directories(${TARGET_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
