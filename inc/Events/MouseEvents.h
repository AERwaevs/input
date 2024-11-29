#pragma once

#include <Base/Base.h>
#include <Base/Event.h>

#include <Input/MouseCodes.h>

namespace aer
{

class Window;

struct MouseEvent : public Event
{
    MouseEvent( Window* window, int32_t in_x, int32_t in_y ) 
    : window( window ), x( in_x ), y( in_y ) {};
    virtual ~MouseEvent() noexcept = default;
    
    const spy_ptr<Window>  window;
    const int32_t          x;
    const int32_t          y;
};

struct MouseMoveEvent : public MouseEvent
{
    MouseMoveEvent( auto* window, auto x, auto y ) 
    : MouseEvent( window, x, y ) {};
};

struct MouseScrollEvent : public MouseEvent
{
    MouseScrollEvent( auto* window, auto x, auto y, int32_t z ) 
    : MouseEvent( window, x, y ), _z( z ) {};

    int32_t z() const { return _z; }
private:
    int32_t _z;
};

struct MouseButtonEvent : public MouseEvent
{
    MouseButtonEvent( auto* window, auto x, auto y, MouseCode button )
    : MouseEvent( window, x, y ), _button( button ) {};
    
    MouseCode button() const { return _button; }
private:
    MouseCode _button;
};

struct MouseDownEvent : public MouseButtonEvent
{
    MouseDownEvent( auto* window, auto x, auto y, auto button ) 
    : MouseButtonEvent( window, x, y, button ) {};
};
    
struct MouseUpEvent : public MouseButtonEvent
{
    MouseUpEvent( auto* window, auto x, auto y, auto button ) 
    : MouseButtonEvent( window, x, y, button ) {};
};

struct MouseDoubleEvent : public MouseButtonEvent
{
    MouseDoubleEvent( auto* window, auto x, auto y, auto button )
    : MouseButtonEvent( window, x, y, button ) {};
};

} // namespace aer