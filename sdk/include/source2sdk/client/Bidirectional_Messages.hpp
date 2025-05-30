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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class Bidirectional_Messages : std::uint32_t
        {
            bi_RebroadcastGameEvent = 0x10,
            bi_RebroadcastSource = 0x11,
            bi_GameEvent = 0x12,
            bi_PredictionEvent = 0x13,
        };
    };
};
