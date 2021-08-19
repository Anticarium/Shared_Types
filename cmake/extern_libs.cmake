function(ADDJSON TARGET_NAME)
	find_package(nlohmann_json CONFIG REQUIRED)
	target_link_libraries(${TARGET_NAME} PRIVATE nlohmann_json nlohmann_json::nlohmann_json)
endfunction()