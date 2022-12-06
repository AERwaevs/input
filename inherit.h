#pragma once

#include <memory>
#include <typeinfo>
#include <concepts>

#include "object.h"
#include "ref_ptr.h"

template< typename T >
concept Managed = std::derived_from<T, Object>;

template< typename T >
concept Compatible = requires( T t )
{
    { t.type_info() } -> std::same_as< const std::type_info& >;
    { t.is_compatible( t.type_info() ) } -> std::same_as< bool >;
};
 
template< class B, class D >
class Inherit : public B
{
public:
    using base_t    = B;
private:
    using derived_t = D;
    
public:
    template< typename... Args >
    static inline auto create( Args&&... args )
    {
        return ref_ptr<derived_t>( new derived_t( args... ) );
    }

    static inline const unsigned int instance_count() noexcept
    {
        return _instances.load();
    }

    const std::type_info& type_info() const noexcept override
    {
        return typeid( derived_t );
    }

    bool is_compatible( const std::type_info& type ) const noexcept override
    {
        return typeid( derived_t ) == type 
               ? true
               : base_t::is_compatible( type );
    }

protected:
    template< typename... Args >
    Inherit( Args&&... args ) : base_t( args... ) 
    { 
        _instances.fetch_add( 1, std::memory_order_relaxed ); 
    }

    virtual ~Inherit() 
    { 
        _instances.fetch_sub( 1, std::memory_order_seq_cst );
    }

protected:
    static inline std::atomic_uint _instances;
};