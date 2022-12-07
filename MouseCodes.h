#pragma once

namespace AEON
{
    namespace Mouse
    {
        enum Code : uint8_t
        {
            None        = 0,
            Left        = BIT( 0 ),
            Right       = BIT( 1 ),
            Middle      = BIT( 2 ),
            Side1       = BIT( 3 ),
            Side2       = BIT( 4 ),
            Button5     = BIT( 5 ),
            Button6     = BIT( 6 ),
            Button7     = BIT( 7 )
        };
    }
}