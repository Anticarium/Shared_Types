set(TARGET_NAME "shared_types_include")

set(HEADER_FILES
    shared_types/Control.h
    shared_types/ControlSerializer.hpp
    shared_types/RegimeRange.h
    shared_types/RegimeRangeSerializer.hpp
    shared_types/RegimeProperty.h
    shared_types/RegimePropertySerializer.hpp
    shared_types/CustomRegime.h
    shared_types/CustomRegimeSerializer.hpp
    shared_types/TerrariumData.h
    shared_types/TerrariumDataSerializer.hpp
)

add_library(${TARGET_NAME} INTERFACE ${HEADER_FILES})

target_include_directories(${TARGET_NAME} INTERFACE
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    )
