#pragma once

#include <stdint.h>

namespace aer
{

enum MouseCode : uint16_t
{
    MOUSE_None        = 0,
    MOUSE_Primary     = 0b0000100000000,
    MOUSE_Secondary   = 0b0001000000000,
    MOUSE_Tertiary    = 0b0010000000000,
    MOUSE_Auxilliary1 = 0b0100000000000,
    MOUSE_Auxilliary2 = 0b1000000000000,
    MOUSE_Left        = MOUSE_Primary,
    MOUSE_Right       = MOUSE_Secondary,
    MOUSE_Middle      = MOUSE_Tertiary,
    MOUSE_Forward     = MOUSE_Auxilliary2,
    MOUSE_Backward    = MOUSE_Auxilliary1
};


}