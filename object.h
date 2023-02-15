#pragma once

#include <atomic>
#include <typeinfo>

#include "platform.h"
#include "ref_ptr.h"

class AEON_DLL Object
{
public:
    Object()                                    : _ref_num( 0 ) {}
    Object( const Object& rhs )                 : Object()      {}
    Object& operator = ( const Object& rhs )                    { return *this; }

    template< typename T, typename... Args >
    static inline auto create( Args&&... args )
    {
        return ref_ptr<T>( new T( args... ) );
    }

    inline unsigned int ref_count() const noexcept 
    { 
        return _ref_num.load(); 
    }

protected:
    virtual ~Object() {}

private:
    inline void ref() const noexcept 
    { 
        _ref_num.fetch_add( 1, std::memory_order_relaxed ); 
    }

    inline void unref() const noexcept 
    { 
        if ( _ref_num.fetch_sub( 1, std::memory_order_seq_cst ) <= 1 ) delete this;
    }

protected:
    template< class R >
    friend class ref_ptr;

    template< class R >
    friend struct is_referenced;

private:
    mutable std::atomic_uint _ref_num;
};