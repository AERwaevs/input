cmake_minimum_required(VERSION 3.0.0)
set( CMAKE_CXX_STANDARD 20 )

include(    GenerateExportHeader    )

add_library(                aeon-base STATIC        Base.h )
target_include_directories( aeon-base PUBLIC        ${CMAKE_CURRENT_SOURCE_DIR} )
set_target_properties(      aeon-base PROPERTIES    LINKER_LANGUAGE CXX )

GENERATE_EXPORT_HEADER( aeon-base )

install( TARGETS aeon-base )
