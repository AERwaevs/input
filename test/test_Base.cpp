#define CONFIG_CATCH_MAIN

#include "catch.hpp"

#include <../src/Base/Base.h>

TEST_CASE( "ref_ptr has_reference_methods", "[ref_ptr]" )
{
    struct Foo : public Inherit< Object, Foo > {};
    struct Bar : public Inherit< Foo, Bar > {};
    struct Baz { void ref(){}; void unref(){}; };
    struct Bin : public Inherit< Baz, Bin > {};

    ref_ptr<Foo> foo( new Foo() );
    ref_ptr<Bar> bar( new Bar() );
    ref_ptr<Baz> baz( new Baz() );
    ref_ptr<Bin> bin( new Bin() );

    REQUIRE( typename Foo == typename Foo );
    REQUIRE( typename Foo == typename Bar );
}