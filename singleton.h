#pragma once

#include "object.h"
#include "ref_ptr.h"

template< typename T >
class Singleton : public Object
{
public:
    static  ref_ptr<T> instance() { return s_instance; }

    template< typename... Args >
    static inline auto create( Args&&... args )
    {
        return ref_ptr<T>( new T( args... ) );
    }

    template< typename... Args >
    static  ref_ptr<T> get_or_create( Args&&... args )
    {
        if( !s_instance ) s_instance = T::create( args... );
        return s_instance;
    }
protected:
    static inline   ref_ptr<T> s_instance;
};