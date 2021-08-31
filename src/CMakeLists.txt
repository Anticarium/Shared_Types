include(ExternLibs)
set(TARGET_NAME shared_types_lib)

set(SOURCE_FILES
    Control.cpp
    RegimeRange.cpp
    RegimeProperty.cpp
    CustomRegime.cpp
    TerrariumData.cpp
)

add_library(${TARGET_NAME} ${SOURCE_FILES})
target_link_libraries(${TARGET_NAME} PRIVATE shared_types_include)
ADDQT6CORE(${TARGET_NAME})
