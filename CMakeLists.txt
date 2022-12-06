add_library(                aeon-base STATIC        Base.cpp )
set_target_properties(      aeon-base PROPERTIES    POSITION_INDEPENDENT_CODE   TRUE )
target_include_directories( aeon-base PUBLIC        ${AEON_DIR} )
target_precompile_headers(  aeon-base PUBLIC        ${AEON_PRECOMP}     )

install( TARGETS aeon-base )
