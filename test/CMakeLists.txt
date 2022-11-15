SET( AEON_INC ../AEON/inc )
SET( AEON_SRC ../AEON/src )

set( AEON_BASE ${AEON_SRC}/Base )

set( TEST_FILES test_Base.cpp )

add_executable( test ${TEST_FILES} )
target_include_directories( test PRIVATE ${AEON_INC} ${AEON_SRC} )