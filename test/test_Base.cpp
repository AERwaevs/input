#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "platform.h"
#include "inherit.h"
#include "object.h"
#include "ref_ptr.h"
#include "observer_ptr.h"

struct Foo : public Inherit< Object, Foo > {};
struct Bar : public Inherit< Foo, Bar > {};
struct Baz : public Inherit< Bar, Baz > {};
struct Gen {};

TEST_CASE( "ref_ptr", "[ref_ptr]" )
{

    ref_ptr<Foo> foo( new Foo() );

    REQUIRE( foo->ref_count() == 1 );

    ref_ptr<Foo> foo2( foo );

    REQUIRE( foo->ref_count() == 2 );

    ref_ptr<Gen> gen( new Gen() );

}