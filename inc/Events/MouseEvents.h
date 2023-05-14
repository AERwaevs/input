#pragma once

#include <Base/Base.h>
#include <Base/Event.h>

#include "../Input/MouseCodes.h"

namespace AEON
{

namespace Graphics
{
    class Window;   // forward declare
}

struct MouseEvent : public Event, ITypeInfo< MouseEvent >
{
    MouseEvent( Graphics::Window* window, const int32_t& x, const int32_t& y ) 
    : _window( window ), _x( x ), _y( y ) {};

    spy_ptr<Graphics::Window> window() const { return _window; }
    int32_t                   x()      const { return _x;  }
    int32_t                   y()      const { return _y;  }
private:
    spy_ptr<Graphics::Window>  _window;
    int32_t                    _x;
    int32_t                    _y;
};

struct MouseMoveEvent : public MouseEvent, ITypeInfo< MouseMoveEvent >
{
    MouseMoveEvent( auto* window, const auto x, const auto y ) 
    : MouseEvent( window, x, y ) {};
};

struct MouseScrollEvent : public MouseEvent, ITypeInfo< MouseScrollEvent >
{
    MouseScrollEvent( auto* window, const auto x, const auto y, const int32_t& z ) 
    : MouseEvent( window, x, y ), _z( z ) {};

    int32_t z() const { return _z; }
private:
    int32_t _z;
};

struct MouseButtonEvent : public MouseEvent, ITypeInfo< MouseButtonEvent >
{
    MouseButtonEvent( auto* window, const auto x, const auto y, Mouse::Code& button )
    : MouseEvent( window, x, y ), _button( button ) {};
    
    Mouse::Code button() const { return _button; }
private:
    Mouse::Code _button;
};

struct MouseDownEvent : public MouseButtonEvent, ITypeInfo< MouseDownEvent >
{
    MouseDownEvent( auto* window, const auto x, const auto y, auto button ) 
    : MouseButtonEvent( window, x, y, button ) {};
};
    
struct MouseUpEvent : public MouseButtonEvent, ITypeInfo< MouseUpEvent >
{
    MouseUpEvent( auto* window, const auto x, const auto y, auto button ) 
    : MouseButtonEvent( window, x, y, button ) {};
};

struct MouseDoubleEvent : public MouseButtonEvent, ITypeInfo< MouseDoubleEvent >
{
    MouseDoubleEvent( auto* window, const auto x, const auto y, auto button )
    : MouseButtonEvent( window, x, y, button ) {};
};

} // namespace AEON