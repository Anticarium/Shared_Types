include(ExternLibs)
set(TARGET_NAME shared_types_lib)

set(SOURCE_FILES
    Control.cpp
    SensorData.cpp
    RegimeValue.cpp
    Regimes.cpp
    Regime.cpp
)

include(ExternLibs)
add_library(${TARGET_NAME} ${SOURCE_FILES})
target_link_libraries(${TARGET_NAME} PRIVATE shared_types_include)
ADDQT5CORE(${TARGET_NAME})
ADDJSON(${TARGET_NAME})
