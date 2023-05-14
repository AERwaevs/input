#pragma once

namespace AEON::Mouse
{
    typedef enum : uint8_t
    {
        None        = 0,
        Primary     = BIT( 0 ),
        Secondary   = BIT( 1 ),
        Tertiary    = BIT( 2 ),
        Auxilliary1 = BIT( 3 ),
        Auxilliary2 = BIT( 4 ),
        Left        = Primary,
        Right       = Secondary,
        Middle      = Tertiary,
        Front       = Auxilliary2,
        Back        = Auxilliary1
    } Code;
}