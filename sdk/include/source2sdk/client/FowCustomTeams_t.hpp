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
        // Enumerator count: 9
        // Alignment: 4
        // Size: 0x4
        enum class FowCustomTeams_t : std::uint32_t
        {
            FOW_TEAM_NONE = 0x0,
            FOW_TEAM_NIGHTSTALKER = 0x6,
            FOW_TEAM_ARENA_OF_BLOOD = 0x7,
            FOW_TEAM_TUNNEL_VISION = 0x8,
            FOW_TEAM_WEIGHTED_PIE = 0x9,
            FOW_TEAM_BLOB = 0xa,
            FOW_TEAM_UNUSED5 = 0xb,
            FOW_TEAM_UNUSED6 = 0xc,
            FOW_TEAM_UNUSED7 = 0xd,
        };
    };
};
