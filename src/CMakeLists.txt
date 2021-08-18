set(TARGET_NAME "shared_types_lib")

set(HEADER_FILES
    shared_types/models/Control.h
    shared_types/serializers/ControlSerializer.hpp
)

set(SOURCE_FILES
    shared_types/models/Control.cpp
)

add_library(${TARGET_NAME} STATIC ${HEADER_FILES} ${SOURCE_FILES})

target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} shared_types)

find_package(nlohmann_json CONFIG REQUIRED)
target_link_libraries(${TARGET_NAME} PRIVATE nlohmann_json nlohmann_json::nlohmann_json)

