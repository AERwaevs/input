#pragma once

#include <stdint.h>

namespace aer::Key
{

typedef enum : uint16_t
{
    MOD_None                    = 0B00000000,
    MOD_Shift                   = 0B00000001,
    MOD_CapsLock                = 0B00000010,
    MOD_Control                 = 0B00000100,
    MOD_Alt                     = 0B00001000,
    MOD_NumLock                 = 0B00010000,
    MOD_Super                   = 0B00100000,
    MOD_Hyper                   = 0B01000000,
    MOD_Meta                    = 0B10000000,
} Mod;

typedef enum : uint16_t
{
    None                    = 0,

    Zero                    = '0',
    One                     = '1',
    Two                     = '2',
    Three                   = '3',
    Four                    = '4',
    Five                    = '5',
    Six                     = '6',
    Seven                   = '7',
    Eight                   = '8',
    Nine                    = '9',

    a                       = 'a',
    b                       = 'b',
    c                       = 'c',
    d                       = 'd',
    e                       = 'e',
    f                       = 'f',
    g                       = 'g',
    h                       = 'h',
    i                       = 'i',
    j                       = 'j',
    k                       = 'k',
    l                       = 'l',
    m                       = 'm',
    n                       = 'n',
    o                       = 'o',
    p                       = 'p',
    q                       = 'q',
    r                       = 'r',
    s                       = 's',
    t                       = 't',
    u                       = 'u',
    v                       = 'v',
    w                       = 'w',
    x                       = 'x',
    y                       = 'y',
    z                       = 'z',

    A                       = 'A',
    B                       = 'B',
    C                       = 'C',
    D                       = 'D',
    E                       = 'E',
    F                       = 'F',
    G                       = 'G',
    H                       = 'H',
    I                       = 'I',
    J                       = 'J',
    K                       = 'K',
    L                       = 'L',
    M                       = 'M',
    N                       = 'N',
    O                       = 'O',
    P                       = 'P',
    Q                       = 'Q',
    R                       = 'R',
    S                       = 'S',
    T                       = 'T',
    U                       = 'U',
    V                       = 'V',
    W                       = 'W',
    X                       = 'X',
    Y                       = 'Y',
    Z                       = 'Z',

    Space                   = ' ',
    Grave                   = '`',
    Tilde                   = '~',
    ExclamationMark         = '!',
    At                      = '@',
    Hash                    = '#',
    Dollar                  = '$',
    Percent                 = '%',
    Caret                   = '^',
    Ampersand               = '&',
    Asterisk                = '*',
    LeftParenthesis         = '(',
    RightParenthesis        = ')',
    Underscore              = '_',
    Plus                    = '+',
    Minus                   = '-',
    Equals                  = '=',
    LeftBracket             = '[',
    RightBracket            = ']',
    BackSlash               = '\\',
    VerticalSlash           = '|',
    LeftCurlyBracket        = '{',
    RightCurlyBracket       = '}',
    Semicolon               = ';',
    Apostrophe              = '\'',
    Colon                   = ':',
    Quote                   = '"',
    Comma                   = ',',
    Period                  = '.',
    Slash                   = '/',
    Less                    = '<',
    Greater                 = '>',
    Question                = '?',

    F1                      = 0xFF01,
    F2                      = 0xFF02,
    F3                      = 0xFF03,
    F4                      = 0xFF04,
    F5                      = 0xFF05,
    F6                      = 0xFF06,
    F7                      = 0xFF07,
    F8                      = 0xFF08,
    F9                      = 0xFF09,
    F10                     = 0xFF0A,
    F11                     = 0xFF0B,
    F12                     = 0xFF0C,

    Backspace               = 0xFF0D,
    Tab                     = 0xFF0E,
    Enter                   = 0xFF0F,
    Escape                  = 0xFFA1,
    CapsLock                = 0xFFA2,

    PrintScreen             = 0xFFA3,
    PauseBreak              = 0xFFA4,
    ScrollLock              = 0xFFA5,

    Insert                  = 0xFFA6,
    Home                    = 0xFFA7,
    PageUp                  = 0xFFA8,
    PageDown                = 0xFFA9,
    Delete                  = 0xFFAA,
    End                     = 0xFFAB,

    Left                    = 0xFFAC,
    Up                      = 0xFFAD,
    Right                   = 0xFFAE,
    Down                    = 0xFFAF,

    NumLock_NP              = 0xFFB0,
    Enter_NP                = 0xFFB1,

    Left_NP                 = 0xFFB3,
    Up_NP                   = 0xFFB4,
    Right_NP                = 0xFFB5,
    Down_NP                 = 0xFFB6,

    Insert_NP               = 0xFFBA,
    Home_NP                 = 0xFFB2,
    PageUp_NP               = 0xFFB7,
    PageDown_NP             = 0xFFB8,
    Delete_NP               = 0xFFBB,
    End_NP                  = 0xFFB9,

    Equals_NP               = 0xFFBC,
    Multiply_NP             = 0xFFBD,
    Add_NP                  = 0xFFBE,
    Subtract_NP             = 0xFFBF,
    Decimal_NP              = 0xFFC0,
    Divide_NP               = 0xFFC1,

    Zero_NP                 = 0xFFC2,
    One_NP                  = 0xFFC3,
    Two_NP                  = 0xFFC4,
    Three_NP                = 0xFFC5,
    Four_NP                 = 0xFFC6,
    Five_NP                 = 0xFFC7,
    Six_NP                  = 0xFFC8,
    Seven_NP                = 0xFFC9,
    Eight_NP                = 0xFFCA,
    Nine_NP                 = 0xFFCB,

    Shift_L                 = 0xFFCC,
    Shift_R                 = 0xFFCD,
    Control_L               = 0xFFCE,
    Control_R               = 0xFFCF,
    Alt_L                   = 0xFFD0,
    Alt_R                   = 0xFFD1,

    Menu_L                  = 0xFFD2,
    Menu_R                  = 0xFFD3
} Key;

/* Scancodes are from en_US keyboard layout */
typedef enum : uint16_t
{
    KB_None                 = 0,

    KB_A                    = 4,
    KB_B                    = 5,
    KB_C                    = 6,
    KB_D                    = 7,
    KB_E                    = 8,
    KB_F                    = 9,
    KB_G                    = 10,
    KB_H                    = 11,
    KB_I                    = 12,
    KB_J                    = 13,
    KB_K                    = 14,
    KB_L                    = 15,
    KB_M                    = 16,
    KB_N                    = 17,
    KB_O                    = 18,
    KB_P                    = 19,
    KB_Q                    = 20,
    KB_R                    = 21,
    KB_S                    = 22,
    KB_T                    = 23,
    KB_U                    = 24,
    KB_V                    = 25,
    KB_W                    = 26,
    KB_X                    = 27,
    KB_Y                    = 28,
    KB_Z                    = 29,
    KB_1                    = 30,
    KB_2                    = 31,
    KB_3                    = 32,
    KB_4                    = 33,
    KB_5                    = 34,
    KB_6                    = 35,
    KB_7                    = 36,
    KB_8                    = 37,
    KB_9                    = 38,
    KB_0                    = 39,

    KB_Escape               = 41,
    KB_Backspace            = 42,
    KB_Tab                  = 43,
    KB_Space                = 44,
    KB_Minus                = 45,
    KB_Equals               = 46,
    KB_LeftBracket          = 47,
    KB_RightBracket         = 48,
    KB_Backslash            = 49,
    KB_Semicolon            = 51,
    KB_Quote                = 52,
    KB_Grave                = 53,
    KB_Comma                = 54,
    KB_Period               = 55,
    KB_Slash                = 56,
    KB_CapsLock             = 57,

    KB_F1                   = 58,
    KB_F2                   = 59,
    KB_F3                   = 60,
    KB_F4                   = 61,
    KB_F5                   = 62,
    KB_F6                   = 63,
    KB_F7                   = 64,
    KB_F8                   = 65,
    KB_F9                   = 66,
    KB_F10                  = 67,
    KB_F11                  = 68,
    KB_F12                  = 69,

    KB_PrintScreen          = 70,
    KB_ScrollLock           = 71,
    KB_Pause                = 72,
    KB_Insert               = 73,
    KB_Home                 = 74,
    KB_PageUp               = 75,
    KB_Delete               = 76,
    KB_End                  = 77,
    KB_PageDown             = 78,
    KB_Right                = 79,
    KB_Left                 = 80,
    KB_Down                 = 81,
    KB_Up                   = 82,

    NP_NumLock              = 83,
    NP_Divide               = 84,
    NP_Multiply             = 85,
    NP_Subtract             = 86,
    NP_Add                  = 87,
    NP_Enter                = 88,
    NP_1                    = 89,
    NP_2                    = 90,
    NP_3                    = 91,
    NP_4                    = 92,
    NP_5                    = 93,
    NP_6                    = 94,
    NP_7                    = 95,
    NP_8                    = 96,
    NP_9                    = 97,
    NP_0                    = 98,
    NP_Decimal              = 99,

    KB_NonUSBackslash       = 100,

    NP_Equals               = 103,

    KB_F13                  = 104,
    KB_F14                  = 105,
    KB_F15                  = 106,
    KB_F16                  = 107,
    KB_F17                  = 108,
    KB_F18                  = 109,
    KB_F19                  = 110,
    KB_F20                  = 111,
    KB_F21                  = 112,
    KB_F22                  = 113,
    KB_F23                  = 114,
    KB_F24                  = 115,

    KB_Help                 = 117,
    KB_Menu                 = 118,
    KB_Mute                 = 127,
    KB_SysReq               = 154,
    KB_Return               = 158,

    NP_Clear                = 216,
    NP_Point                = 220,

    KB_LeftControl          = 224,
    KB_LeftShift            = 225,
    KB_LeftAlt              = 226,
    KB_LeftMenu             = 227,
    KB_RightControl         = 228,
    KB_RightShift           = 229,
    KB_RightAlt             = 230,
    KB_RightMenu            = 231
} Code;

constexpr const char* GetName( Key key ) noexcept
{
    switch( key )
    {
        case Key::None:                return "None";

        case Key::Zero:                return "0";
        case Key::One:                 return "1";
        case Key::Two:                 return "2";
        case Key::Three:               return "3";
        case Key::Four:                return "4";
        case Key::Five:                return "5";
        case Key::Six:                 return "6";
        case Key::Seven:               return "7";
        case Key::Eight:               return "8";
        case Key::Nine:                return "9";

        case Key::a:                   return "a";
        case Key::b:                   return "b";
        case Key::c:                   return "c";
        case Key::d:                   return "d";
        case Key::e:                   return "e";
        case Key::f:                   return "f";
        case Key::g:                   return "g";
        case Key::h:                   return "h";
        case Key::i:                   return "i";
        case Key::j:                   return "j";
        case Key::k:                   return "k";
        case Key::l:                   return "l";
        case Key::m:                   return "m";
        case Key::n:                   return "n";
        case Key::o:                   return "o";
        case Key::p:                   return "p";
        case Key::q:                   return "q";
        case Key::r:                   return "r";
        case Key::s:                   return "s";
        case Key::t:                   return "t";
        case Key::u:                   return "u";
        case Key::v:                   return "v";
        case Key::w:                   return "w";
        case Key::x:                   return "x";
        case Key::y:                   return "y";
        case Key::z:                   return "z";

        case Key::A:                   return "A";
        case Key::B:                   return "B";
        case Key::C:                   return "C";
        case Key::D:                   return "D";
        case Key::E:                   return "E";
        case Key::F:                   return "F";
        case Key::G:                   return "G";
        case Key::H:                   return "H";
        case Key::I:                   return "I";
        case Key::J:                   return "J";
        case Key::K:                   return "K";
        case Key::L:                   return "L";
        case Key::M:                   return "M";
        case Key::N:                   return "N";
        case Key::O:                   return "O";
        case Key::P:                   return "P";
        case Key::Q:                   return "Q";
        case Key::R:                   return "R";
        case Key::S:                   return "S";
        case Key::T:                   return "T";
        case Key::U:                   return "U";
        case Key::V:                   return "V";
        case Key::W:                   return "W";
        case Key::X:                   return "X";
        case Key::Y:                   return "Y";
        case Key::Z:                   return "Z";

        case Key::Space:               return " ";
        case Key::Grave:               return "`";
        case Key::Tilde:               return "~";
        case Key::ExclamationMark:     return "!";
        case Key::At:                  return "@";
        case Key::Hash:                return "#";
        case Key::Dollar:              return "$";
        case Key::Percent:             return "%";
        case Key::Caret:               return "^";
        case Key::Ampersand:           return "&";
        case Key::Asterisk:            return "*";
        case Key::LeftParenthesis:     return "(";
        case Key::RightParenthesis:    return ")";
        case Key::Underscore:          return "_";
        case Key::Plus:                return "+";
        case Key::Minus:               return "-";
        case Key::Equals:              return "=";
        case Key::LeftBracket:         return "[";
        case Key::RightBracket:        return "]";
        case Key::BackSlash:           return "\\";
        case Key::VerticalSlash:       return "|";
        case Key::LeftCurlyBracket:    return "{";
        case Key::RightCurlyBracket:   return "}";
        case Key::Semicolon:           return ";";
        case Key::Apostrophe:          return "\'";
        case Key::Colon:               return ":";
        case Key::Quote:               return "\"";
        case Key::Comma:               return ",";
        case Key::Period:              return ".";
        case Key::Slash:               return "/";
        case Key::Less:                return "<";
        case Key::Greater:             return ">";
        case Key::Question:            return "?";

        case Key::F1:                  return "F1";
        case Key::F2:                  return "F2";
        case Key::F3:                  return "F3";
        case Key::F4:                  return "F4";
        case Key::F5:                  return "F5";
        case Key::F6:                  return "F6";
        case Key::F7:                  return "F7";
        case Key::F8:                  return "F8";
        case Key::F9:                  return "F9";
        case Key::F10:                 return "F10";
        case Key::F11:                 return "F11";
        case Key::F12:                 return "F12";

        case Key::Backspace:           return "Backspace";
        case Key::Tab:                 return "Tab";
        case Key::Enter:               return "Enter";
        case Key::Escape:              return "Escape";
        case Key::CapsLock:            return "CapsLock";

        case Key::PrintScreen:         return "PrintScreen";
        case Key::PauseBreak:          return "PauseBreak";
        case Key::ScrollLock:          return "ScrollLock";

        case Key::Insert:              return "Insert";
        case Key::Home:                return "Home";
        case Key::PageUp:              return "PageUp";
        case Key::PageDown:            return "PageDown";
        case Key::Delete:              return "Delete";
        case Key::End:                 return "End";

        case Key::Left:                return "Left";
        case Key::Up:                  return "Up";
        case Key::Right:               return "Right";
        case Key::Down:                return "Down";

        case Key::NumLock_NP:          return "NumLock_NP";
        case Key::Enter_NP:            return "Enter_NP";
        case Key::Home_NP:             return "Home_NP";
        case Key::Left_NP:             return "Left_NP";
        case Key::Up_NP:               return "Up_NP";
        case Key::Right_NP:            return "Right_NP";
        case Key::Down_NP:             return "Down_NP";
        case Key::PageUp_NP:           return "PageUp_NP";
        case Key::PageDown_NP:         return "PageDown_NP";
        case Key::End_NP:              return "End_NP";
        case Key::Insert_NP:           return "Insert_NP";
        case Key::Delete_NP:           return "Delete_NP";
        case Key::Equals_NP:           return "Equals_NP";
        case Key::Multiply_NP:         return "Multiply_NP";
        case Key::Add_NP:              return "Add_NP";
        case Key::Subtract_NP:         return "Subtract_NP";
        case Key::Decimal_NP:          return "Decimal_NP";
        case Key::Divide_NP:           return "Divide_NP"; 
        case Key::Zero_NP:             return "Zero_NP";
        case Key::One_NP:              return "One_NP";
        case Key::Two_NP:              return "Two_NP";
        case Key::Three_NP:            return "Three_NP";
        case Key::Four_NP:             return "Four_NP";
        case Key::Five_NP:             return "Five_NP";
        case Key::Six_NP:              return "Six_NP";
        case Key::Seven_NP:            return "Seven_NP";
        case Key::Eight_NP:            return "Eight_NP";
        case Key::Nine_NP:             return "Nine_NP";

        case Key::Shift_L:             return "Shift_L";
        case Key::Shift_R:             return "Shift_R";
        case Key::Control_L:           return "Control_L";
        case Key::Control_R:           return "Control_R";
        case Key::Alt_L:               return "Alt_L";
        case Key::Alt_R:               return "Alt_R";

        case Key::Menu_L:              return "Menu_L";
        case Key::Menu_R:              return "Menu_R";
        default:                       return "Unknown";
    }
}

constexpr const char* GetName( Code code ) noexcept
{
    switch( code )
    {
        case Code::KB_None:           return "Code::None";

        case Code::KB_A:              return "Code::A";
        case Code::KB_B:              return "Code::B";
        case Code::KB_C:              return "Code::C";
        case Code::KB_D:              return "Code::D";
        case Code::KB_E:              return "Code::E";
        case Code::KB_F:              return "Code::F";
        case Code::KB_G:              return "Code::G";
        case Code::KB_H:              return "Code::H";
        case Code::KB_I:              return "Code::I";
        case Code::KB_J:              return "Code::J";
        case Code::KB_K:              return "Code::K";
        case Code::KB_L:              return "Code::L";
        case Code::KB_M:              return "Code::M";
        case Code::KB_N:              return "Code::N";
        case Code::KB_O:              return "Code::O";
        case Code::KB_P:              return "Code::P";
        case Code::KB_Q:              return "Code::Q";
        case Code::KB_R:              return "Code::R";
        case Code::KB_S:              return "Code::S";
        case Code::KB_T:              return "Code::T";
        case Code::KB_U:              return "Code::U";
        case Code::KB_V:              return "Code::V";
        case Code::KB_W:              return "Code::W";
        case Code::KB_X:              return "Code::X";
        case Code::KB_Y:              return "Code::Y";
        case Code::KB_Z:              return "Code::Z";
        case Code::KB_1:              return "Code::1";
        case Code::KB_2:              return "Code::2";
        case Code::KB_3:              return "Code::3";
        case Code::KB_4:              return "Code::4";
        case Code::KB_5:              return "Code::5";
        case Code::KB_6:              return "Code::6";
        case Code::KB_7:              return "Code::7";
        case Code::KB_8:              return "Code::8";
        case Code::KB_9:              return "Code::9";
        case Code::KB_0:              return "Code::0";

        case Code::KB_Escape:         return "Code::Escape";
        case Code::KB_Backspace:      return "Code::Backspace";
        case Code::KB_Tab:            return "Code::Tab";
        case Code::KB_Space:          return "Code::Space";
        case Code::KB_Minus:          return "Code::Minus";
        case Code::KB_Equals:         return "Code::Equals";
        case Code::KB_LeftBracket:    return "Code::LeftBracket";
        case Code::KB_RightBracket:   return "Code::RightBracket";
        case Code::KB_Backslash:      return "Code::Backslash";
        case Code::KB_Semicolon:      return "Code::Semicolon";
        case Code::KB_Quote:          return "Code::Quote";
        case Code::KB_Grave:          return "Code::Grave";
        case Code::KB_Comma:          return "Code::Comma";
        case Code::KB_Period:         return "Code::Period";
        case Code::KB_Slash:          return "Code::Slash";
        case Code::KB_CapsLock:       return "Code::CapsLock";

        case Code::KB_F1:             return "Code::F1";
        case Code::KB_F2:             return "Code::F2";
        case Code::KB_F3:             return "Code::F3";
        case Code::KB_F4:             return "Code::F4";
        case Code::KB_F5:             return "Code::F5";
        case Code::KB_F6:             return "Code::F6";
        case Code::KB_F7:             return "Code::F7";
        case Code::KB_F8:             return "Code::F8";
        case Code::KB_F9:             return "Code::F9";
        case Code::KB_F10:            return "Code::F10";
        case Code::KB_F11:            return "Code::F11";
        case Code::KB_F12:            return "Code::F12";

        case Code::KB_PrintScreen:    return "Code::PrintScreen";
        case Code::KB_ScrollLock:     return "Code::ScrollLock";
        case Code::KB_Pause:          return "Code::Pause";
        case Code::KB_Insert:         return "Code::Insert";
        case Code::KB_Home:           return "Code::Home";
        case Code::KB_PageUp:         return "Code::PageUp";
        case Code::KB_Delete:         return "Code::Delete";
        case Code::KB_End:            return "Code::End";
        case Code::KB_PageDown:       return "Code::PageDown";
        case Code::KB_Right:          return "Code::Right";
        case Code::KB_Left:           return "Code::Left";
        case Code::KB_Down:           return "Code::Down";
        case Code::KB_Up:             return "Code::Up";

        case Code::NP_NumLock:        return "Code::NumLock_NP";
        case Code::NP_Divide:         return "Code::Divide_NP";
        case Code::NP_Multiply:       return "Code::Multiply_NP";
        case Code::NP_Subtract:       return "Code::Subtract_NP";
        case Code::NP_Add:            return "Code::Add_NP";
        case Code::NP_Enter:          return "Code::Enter_NP";
        case Code::NP_1:              return "Code::1_NP";
        case Code::NP_2:              return "Code::2_NP";
        case Code::NP_3:              return "Code::3_NP";
        case Code::NP_4:              return "Code::4_NP";
        case Code::NP_5:              return "Code::5_NP";
        case Code::NP_6:              return "Code::6_NP";
        case Code::NP_7:              return "Code::7_NP";
        case Code::NP_8:              return "Code::8_NP";
        case Code::NP_9:              return "Code::9_NP";
        case Code::NP_0:              return "Code::0_NP";
        case Code::NP_Decimal:        return "Code::Decimal_NP";

        case Code::KB_NonUSBackslash: return "Code::NonUSBackslash";

        case Code::NP_Equals:         return "Code::Equals_NP";

        case Code::KB_F13:            return "Code::F13";
        case Code::KB_F14:            return "Code::F14";
        case Code::KB_F15:            return "Code::F15";
        case Code::KB_F16:            return "Code::F16";
        case Code::KB_F17:            return "Code::F17";
        case Code::KB_F18:            return "Code::F18";
        case Code::KB_F19:            return "Code::F19";
        case Code::KB_F20:            return "Code::F20";
        case Code::KB_F21:            return "Code::F21";
        case Code::KB_F22:            return "Code::F22";
        case Code::KB_F23:            return "Code::F23";
        case Code::KB_F24:            return "Code::F24";

        case Code::KB_Help:           return "Code::Help";
        case Code::KB_Menu:           return "Code::Menu";
        case Code::KB_Mute:           return "Code::Mute";
        case Code::KB_SysReq:         return "Code::SysReq";
        case Code::KB_Return:         return "Code::Return";

        case Code::NP_Clear:          return "Code::Clear_NP";
        case Code::NP_Point:          return "Code::Point_NP";

        case Code::KB_LeftControl:    return "Code::LeftControl";
        case Code::KB_LeftShift:      return "Code::LeftShift";
        case Code::KB_LeftAlt:        return "Code::LeftAlt";
        case Code::KB_LeftMenu:       return "Code::LeftMenu";
        case Code::KB_RightControl:   return "Code::RightControl";
        case Code::KB_RightShift:     return "Code::RightShift";
        case Code::KB_RightAlt:       return "Code::RightAlt";
        case Code::KB_RightMenu:      return "Code::RightMenu";
        default:                      return "Code::Unknown";
    }
}

constexpr const char* GetName( Mod mod ) noexcept
{
    switch ( mod )
    {
        case Mod::MOD_None:     return "Mod::None";
        case Mod::MOD_Shift:    return "Mod::Shift";
        case Mod::MOD_Control:  return "Mod::Control";
        case Mod::MOD_Alt:      return "Mod::Alt";
        case Mod::MOD_CapsLock: return "Mod::CapsLock";
        case Mod::MOD_NumLock:  return "Mod::NumLock";
        case Mod::MOD_Super:    return "Mod::Super";
        case Mod::MOD_Hyper:    return "Mod::Hyper";
        case Mod::MOD_Ultra:    return "Mod::Ultra";
        case Mod::MOD_Meta:     return "Mod::Meta";
        default:                return "Mod::Unknown";
    }
}

}