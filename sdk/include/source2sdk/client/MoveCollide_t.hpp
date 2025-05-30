#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 6
        // Alignment: 1
        // Size: 0x1
        enum class MoveCollide_t : std::uint8_t
        {
            MOVECOLLIDE_DEFAULT = 0x0,
            MOVECOLLIDE_FLY_BOUNCE = 0x1,
            MOVECOLLIDE_FLY_CUSTOM = 0x2,
            MOVECOLLIDE_FLY_SLIDE = 0x3,
            MOVECOLLIDE_COUNT = 0x4,
            MOVECOLLIDE_MAX_BITS = 0x3,
        };
    };
};
