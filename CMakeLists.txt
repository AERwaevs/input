cmake_minimum_required(VERSION 3.0.0)
set( CMAKE_CXX_STANDARD 20 )
project(aeon-base VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory( "src" )

set( CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/build )

if(BUILD_TESTING)
    add_subdirectory( "test" )
endif()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)