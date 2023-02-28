#pragma once

#include "object.h"
#include "ref_ptr.h"

template< typename T >
class Singleton : public Object< T >
{
public:
    static  ref_ptr<T> instance() { return ref_ptr<T>( s_instance ); }

    template< typename... Args >
    static inline auto get_or_create( Args&&... args )
    {
        if( !s_instance ) s_instance = T::create( args... ).get();
        return ref_ptr<T>( s_instance );
    }
protected:
    static inline   T*  s_instance;
};