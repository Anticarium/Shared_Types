set(TARGET_NAME "shared_types_include")

set(HEADER_FILES
    shared_types/Control.h
    shared_types/ControlSerializer.hpp
    shared_types/SensorData.h
    shared_types/SensorDataSerializer.hpp
    shared_types/RegimeValue.h
    shared_types/RegimeValueSerializer.hpp
    shared_types/Regimes.h
    shared_types/RegimesSerializer.hpp
    shared_types/Regime.h
    shared_types/RegimeSerializer.hpp
)

add_library(${TARGET_NAME} INTERFACE ${HEADER_FILES})

target_include_directories(${TARGET_NAME} INTERFACE
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)
