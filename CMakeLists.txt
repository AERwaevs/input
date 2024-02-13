# cmake -------------------------------------------------------------------------------------------
cmake_minimum_required( VERSION 3.20 )

set( CMAKE_CXX_STANDARD          20  )
set( CMAKE_CXX_STANDARD_REQUIRED ON  )
set( CMAKE_CXX_EXTENSIONS        OFF )
# AEON::Core ------------------------------------------------------------------------------------------
set( INPUT_LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib )
set( INPUT_INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/inc )
set( INPUT_SRC_DIR ${INPUT_INC_DIR}/Input )

add_library( input INTERFACE
    ${INPUT_SRC_DIR}/KeyCodes.h
    ${INPUT_SRC_DIR}/MouseCodes.h
    ${INPUT_INC_DIR}/Events/KeyEvents.h
    ${INPUT_INC_DIR}/Events/MouseEvents.h
)
target_include_directories( input
    INTERFACE
        $<BUILD_INTERFACE:${INPUT_INC_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
target_link_libraries( input INTERFACE base )

add_library( aer::input ALIAS input )