set(TARGET_NAME "shared_types_lib")

set(TARGET_HEADERS
	shared_types/test.h
)

set(TARGET_SOURCES
	shared_types/test.cpp
)

add_library(${TARGET_NAME} STATIC ${TARGET_HEADERS} ${TARGET_SOURCES})

find_package(nlohmann_json CONFIG REQUIRED)
target_link_libraries(${TARGET_NAME} PRIVATE nlohmann_json nlohmann_json::nlohmann_json)