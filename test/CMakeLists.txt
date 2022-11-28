cmake_minimum_required(VERSION 3.0.0)
set( CMAKE_CXX_STANDARD 20 )

if(BUILD_TESTING)
    add_executable( test_base test_Base.cpp )
    add_test( NAME aeon-base COMMAND test_base )
    target_link_libraries( test_base PUBLIC aeon-base )
endif()