# cmake -------------------------------------------------------------------------------------------
cmake_minimum_required( VERSION 3.2.0 )

set( CMAKE_CXX_STANDARD          20  )
set( CMAKE_CXX_STANDARD_REQUIRED ON  )
set( CMAKE_CXX_EXTENSIONS        OFF )
# AEON::Core ------------------------------------------------------------------------------------------
set( INPUT_LIB ${CMAKE_CURRENT_SOURCE_DIR}/lib )
set( INPUT_INC ${CMAKE_CURRENT_SOURCE_DIR}/inc )
set( INPUT_SRC ${INPUT_INC}/Input )

add_library( aeon-input INTERFACE
    ${INPUT_SRC}/KeyCodes.h
    ${INPUT_SRC}/MouseCodes.h
    ${INPUT_INC}/Events/KeyEvents.h
    ${INPUT_INC}/Events/MouseEvents.h
)

add_dependencies( aeon-input
    aeon-base
)

target_include_directories( aeon-input INTERFACE ${INPUT_INC} )

target_link_libraries( aeon-input INTERFACE aeon-base )
