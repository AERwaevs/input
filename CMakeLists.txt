project( aeon_base )

add_library( aeon_base 
    STATIC
    Base.cpp
)
set_target_properties( aeon_base
    PROPERTIES
    LINKER_LANGUAGE             CXX
    PUBLIC_HEADER               "Base.h"
    POSITION_INDEPENDENT_CODE   TRUE
)
target_include_directories( aeon_base PUBLIC        ${CMAKE_CURRENT_SOURCE_DIR} )
target_precompile_headers(  aeon_base PUBLIC        ${AEON_PRECOMP}     )

install( TARGETS aeon_base )
