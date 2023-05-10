#pragma once

#include <Base/Base.h>
#include <Base/Event.h>

#include <Input/KeyCodes.h>

namespace AEON
{
    
namespace Graphics
{
    class Window;   // forward declare
}

struct KeyEvent : public Event, ITypeInfo< KeyEvent >
{
    KeyEvent( Graphics::Window* window, Key::ScanCode& code, Key::Code& key, Key::Mod& mod )
    : _window( window ), _code( code ), _key( key ), _mod( mod ) {};
    
    spy_ptr<Graphics::Window>  window() const { return _window; }
    Key::ScanCode              code()   const { return _code; }
    Key::Code                  key()    const { return _key; }
    Key::Mod                   mod()    const { return _mod; }
private:
    spy_ptr<Graphics::Window>  _window;
    Key::ScanCode              _code;
    Key::Code                  _key;
    Key::Mod                   _mod;
};

struct KeyDownEvent : public KeyEvent, ITypeInfo< KeyDownEvent >
{
    KeyDownEvent( auto* window, auto& code, auto& key, auto& mod )
    : KeyEvent( window, code, key, mod ) {};
};

struct KeyUpEvent : public KeyEvent, ITypeInfo< KeyUpEvent >
{
    KeyUpEvent( auto* window, auto& code, auto& key, auto& mod )
    : KeyEvent( window, code, key, mod ) {};
};

struct KeyHoldEvent : public KeyEvent, ITypeInfo< KeyHoldEvent >
{
    KeyHoldEvent( auto* window, auto& code, auto& key, auto& mod, uint32_t repeats )
    : KeyEvent( window, code, key, mod ), _repeats( repeats ) {};

    uint32_t repeats() const { return _repeats; }
private:
    uint32_t _repeats;
};

}