#pragma once

/* <editor-fold desc="MIT License">

Copyright( c) 2018 Robert Osfield

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

</editor-fold> */

template< class T >
class observer_ptr
{
public:
    using element_type = T;

    observer_ptr()                                      : ptr( nullptr )   {}
    observer_ptr( const observer_ptr& rhs )             : ptr( rhs.ptr )   {}
    ~observer_ptr()                                                        {}

    template< class R >
    explicit observer_ptr( R* rhs )                     : ptr( rhs )       {}

    template< class R >
    explicit observer_ptr( const observer_ptr<R>& rhs ) : ptr( rhs.ptr )   {}

    template< class R >
    explicit observer_ptr( const ref_ptr<R>& rhs )      : ptr( rhs.get() ) {}


    template< class R >
    observer_ptr& operator = ( R* rhs)                      { ptr = rhs;       return *this; }

    observer_ptr& operator = ( const observer_ptr& rhs )    { ptr = rhs.ptr;   return *this; }

    template< class R >
    observer_ptr& operator = ( const observer_ptr<R>& rhs ) { ptr = rhs.ptr;   return *this; }

    template< class R >
    observer_ptr& operator = ( const ref_ptr<R>& rhs )      { ptr = rhs.get(); return *this; }

    template< class R >
    bool operator <  ( const observer_ptr<R>& rhs ) const { return ( ptr <  rhs.ptr ); }
 
    template< class R > 
    bool operator >  ( const observer_ptr<R>& rhs ) const { return ( ptr >  rhs.ptr ); }
 
    template< class R > 
    bool operator == ( const observer_ptr<R>& rhs ) const { return ( ptr == rhs.ptr ); }
 
    template< class R > 
    bool operator != ( const observer_ptr<R>& rhs ) const { return ( ptr != rhs.ptr ); }

    template< class R >
    bool operator <  ( const R* rhs )               const { return ( ptr <  rhs ); }

    template< class R >
    bool operator >  ( const R* rhs )               const { return ( ptr >  rhs ); }

    template< class R >
    bool operator == ( const R* rhs )               const { return ( ptr == rhs ); }

    template< class R >
    bool operator != ( const R* rhs )               const { return ( ptr != rhs ); }

    bool valid()             const noexcept { return ptr != nullptr; }

    explicit operator bool() const noexcept { return valid(); }

    template< class R >
    operator ref_ptr<R>() const { return valid() ? ref_ptr<R>( ptr ) : ref_ptr<R>(); }

protected:
    template< class R >
    friend class observer_ptr;

    T* ptr;
};
