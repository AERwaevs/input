#pragma once

namespace AEON
{
    namespace Key
    {
        enum Mod : uint16_t
        {
            MOD_None                    = 0,
            MOD_Shift                   = BIT( 0 ),
            MOD_Control                 = BIT( 1 ),
            MOD_Alt                     = BIT( 2 ),
            MOD_CapsLock                = BIT( 3 ),
            MOD_NumLock                 = BIT( 4 ),
            MOD_Super                   = MOD_Shift & MOD_Control,
            MOD_Hyper                   = MOD_Shift & MOD_Alt,
            MOD_Ultra                   = MOD_Control & MOD_Alt,
            MOD_Meta                    = MOD_Shift & MOD_Control & MOD_Alt
        };

        enum Code : uint16_t
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
            Home_NP                 = 0xFFB2,
            Left_NP                 = 0xFFB3,
            Up_NP                   = 0xFFB4,
            Right_NP                = 0xFFB5,
            Down_NP                 = 0xFFB6,
            PageUp_NP               = 0xFFB7,
            PageDown_NP             = 0xFFB8,
            End_NP                  = 0xFFB9,
            Insert_NP               = 0xFFBA,
            Delete_NP               = 0xFFBB,
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
        };

        /* Names are from en_US keyboard layout */
        enum ScanCode : uint16_t
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
        };
    
        constexpr const char* GetName( Code code ) noexcept
        {
            switch( code )
            {
                case Code::None:                return "None";

                case Code::Zero:                return "0";
                case Code::One:                 return "1";
                case Code::Two:                 return "2";
                case Code::Three:               return "3";
                case Code::Four:                return "4";
                case Code::Five:                return "5";
                case Code::Six:                 return "6";
                case Code::Seven:               return "7";
                case Code::Eight:               return "8";
                case Code::Nine:                return "9";

                case Code::a:                   return "a";
                case Code::b:                   return "b";
                case Code::c:                   return "c";
                case Code::d:                   return "d";
                case Code::e:                   return "e";
                case Code::f:                   return "f";
                case Code::g:                   return "g";
                case Code::h:                   return "h";
                case Code::i:                   return "i";
                case Code::j:                   return "j";
                case Code::k:                   return "k";
                case Code::l:                   return "l";
                case Code::m:                   return "m";
                case Code::n:                   return "n";
                case Code::o:                   return "o";
                case Code::p:                   return "p";
                case Code::q:                   return "q";
                case Code::r:                   return "r";
                case Code::s:                   return "s";
                case Code::t:                   return "t";
                case Code::u:                   return "u";
                case Code::v:                   return "v";
                case Code::w:                   return "w";
                case Code::x:                   return "x";
                case Code::y:                   return "y";
                case Code::z:                   return "z";

                case Code::A:                   return "A";
                case Code::B:                   return "B";
                case Code::C:                   return "C";
                case Code::D:                   return "D";
                case Code::E:                   return "E";
                case Code::F:                   return "F";
                case Code::G:                   return "G";
                case Code::H:                   return "H";
                case Code::I:                   return "I";
                case Code::J:                   return "J";
                case Code::K:                   return "K";
                case Code::L:                   return "L";
                case Code::M:                   return "M";
                case Code::N:                   return "N";
                case Code::O:                   return "O";
                case Code::P:                   return "P";
                case Code::Q:                   return "Q";
                case Code::R:                   return "R";
                case Code::S:                   return "S";
                case Code::T:                   return "T";
                case Code::U:                   return "U";
                case Code::V:                   return "V";
                case Code::W:                   return "W";
                case Code::X:                   return "X";
                case Code::Y:                   return "Y";
                case Code::Z:                   return "Z";

                case Code::Space:               return " ";
                case Code::Grave:               return "`";
                case Code::Tilde:               return "~";
                case Code::ExclamationMark:     return "!";
                case Code::At:                  return "@";
                case Code::Hash:                return "#";
                case Code::Dollar:              return "$";
                case Code::Percent:             return "%";
                case Code::Caret:               return "^";
                case Code::Ampersand:           return "&";
                case Code::Asterisk:            return "*";
                case Code::LeftParenthesis:     return "(";
                case Code::RightParenthesis:    return ")";
                case Code::Underscore:          return "_";
                case Code::Plus:                return "+";
                case Code::Minus:               return "-";
                case Code::Equals:              return "=";
                case Code::LeftBracket:         return "[";
                case Code::RightBracket:        return "]";
                case Code::BackSlash:           return "\\";
                case Code::VerticalSlash:       return "|";
                case Code::LeftCurlyBracket:    return "{";
                case Code::RightCurlyBracket:   return "}";
                case Code::Semicolon:           return ";";
                case Code::Apostrophe:          return "\'";
                case Code::Colon:               return ":";
                case Code::Quote:               return "\"";
                case Code::Comma:               return ",";
                case Code::Period:              return ".";
                case Code::Slash:               return "/";
                case Code::Less:                return "<";
                case Code::Greater:             return ">";
                case Code::Question:            return "?";

                case Code::F1:                  return "F1";
                case Code::F2:                  return "F2";
                case Code::F3:                  return "F3";
                case Code::F4:                  return "F4";
                case Code::F5:                  return "F5";
                case Code::F6:                  return "F6";
                case Code::F7:                  return "F7";
                case Code::F8:                  return "F8";
                case Code::F9:                  return "F9";
                case Code::F10:                 return "F10";
                case Code::F11:                 return "F11";
                case Code::F12:                 return "F12";

                case Code::Backspace:           return "Backspace";
                case Code::Tab:                 return "Tab";
                case Code::Enter:               return "Enter";
                case Code::Escape:              return "Escape";
                case Code::CapsLock:            return "CapsLock";

                case Code::PrintScreen:         return "PrintScreen";
                case Code::PauseBreak:          return "PauseBreak";
                case Code::ScrollLock:          return "ScrollLock";

                case Code::Insert:              return "Insert";
                case Code::Home:                return "Home";
                case Code::PageUp:              return "PageUp";
                case Code::PageDown:            return "PageDown";
                case Code::Delete:              return "Delete";
                case Code::End:                 return "End";

                case Code::Left:                return "Left";
                case Code::Up:                  return "Up";
                case Code::Right:               return "Right";
                case Code::Down:                return "Down";

                case Code::NumLock_NP:          return "NumLock_NP";
                case Code::Enter_NP:            return "Enter_NP";
                case Code::Home_NP:             return "Home_NP";
                case Code::Left_NP:             return "Left_NP";
                case Code::Up_NP:               return "Up_NP";
                case Code::Right_NP:            return "Right_NP";
                case Code::Down_NP:             return "Down_NP";
                case Code::PageUp_NP:           return "PageUp_NP";
                case Code::PageDown_NP:         return "PageDown_NP";
                case Code::End_NP:              return "End_NP";
                case Code::Insert_NP:           return "Insert_NP";
                case Code::Delete_NP:           return "Delete_NP";
                case Code::Equals_NP:           return "Equals_NP";
                case Code::Multiply_NP:         return "Multiply_NP";
                case Code::Add_NP:              return "Add_NP";
                case Code::Subtract_NP:         return "Subtract_NP";
                case Code::Decimal_NP:          return "Decimal_NP";
                case Code::Divide_NP:           return "Divide_NP"; 
                case Code::Zero_NP:             return "Zero_NP";
                case Code::One_NP:              return "One_NP";
                case Code::Two_NP:              return "Two_NP";
                case Code::Three_NP:            return "Three_NP";
                case Code::Four_NP:             return "Four_NP";
                case Code::Five_NP:             return "Five_NP";
                case Code::Six_NP:              return "Six_NP";
                case Code::Seven_NP:            return "Seven_NP";
                case Code::Eight_NP:            return "Eight_NP";
                case Code::Nine_NP:             return "Nine_NP";

                case Code::Shift_L:             return "Shift_L";
                case Code::Shift_R:             return "Shift_R";
                case Code::Control_L:           return "Control_L";
                case Code::Control_R:           return "Control_R";
                case Code::Alt_L:               return "Alt_L";
                case Code::Alt_R:               return "Alt_R";

                case Code::Menu_L:              return "Menu_L";
                case Code::Menu_R:              return "Menu_R";
                default:                        return "Unknown";
            }
        }
    }
}