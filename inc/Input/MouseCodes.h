#pragma once

#include <stdint.h>

namespace aer
{

enum MouseCode : uint16_t
{
    MOUSE_None        = 0,
    MOUSE_Primary     = 1 << 0,
    MOUSE_Secondary   = 1 << 1,
    MOUSE_Tertiary    = 1 << 2,
    MOUSE_Auxilliary1 = 1 << 3,
    MOUSE_Auxilliary2 = 1 << 4,
    MOUSE_Left        = MOUSE_Primary,
    MOUSE_Right       = MOUSE_Secondary,
    MOUSE_Middle      = MOUSE_Tertiary,
    MOUSE_Front       = MOUSE_Auxilliary2,
    MOUSE_Back        = MOUSE_Auxilliary1
};


}