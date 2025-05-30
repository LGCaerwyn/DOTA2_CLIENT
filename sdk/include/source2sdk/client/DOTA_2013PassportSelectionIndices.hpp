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
        // Enumerator count: 96
        // Alignment: 4
        // Size: 0x4
        enum class DOTA_2013PassportSelectionIndices : std::uint32_t
        {
            PP13_SEL_ALLSTAR_PLAYER_0 = 0x0,
            PP13_SEL_ALLSTAR_PLAYER_1 = 0x1,
            PP13_SEL_ALLSTAR_PLAYER_2 = 0x2,
            PP13_SEL_ALLSTAR_PLAYER_3 = 0x3,
            PP13_SEL_ALLSTAR_PLAYER_4 = 0x4,
            PP13_SEL_ALLSTAR_PLAYER_5 = 0x5,
            PP13_SEL_ALLSTAR_PLAYER_6 = 0x6,
            PP13_SEL_ALLSTAR_PLAYER_7 = 0x7,
            PP13_SEL_ALLSTAR_PLAYER_8 = 0x8,
            PP13_SEL_ALLSTAR_PLAYER_9 = 0x9,
            PP13_SEL_QUALPRED_WEST_0 = 0xa,
            PP13_SEL_QUALPRED_WEST_1 = 0xb,
            PP13_SEL_QUALPRED_WEST_2 = 0xc,
            PP13_SEL_QUALPRED_WEST_3 = 0xd,
            PP13_SEL_QUALPRED_WEST_4 = 0xe,
            PP13_SEL_QUALPRED_WEST_5 = 0xf,
            PP13_SEL_QUALPRED_WEST_6 = 0x10,
            PP13_SEL_QUALPRED_WEST_7 = 0x11,
            PP13_SEL_QUALPRED_WEST_8 = 0x12,
            PP13_SEL_QUALPRED_WEST_9 = 0x13,
            PP13_SEL_QUALPRED_WEST_10 = 0x14,
            PP13_SEL_QUALPRED_WEST_11 = 0x15,
            PP13_SEL_QUALPRED_WEST_12 = 0x16,
            PP13_SEL_QUALPRED_WEST_13 = 0x17,
            PP13_SEL_QUALPRED_WEST_14 = 0x18,
            PP13_SEL_QUALPRED_EAST_0 = 0x19,
            PP13_SEL_QUALPRED_EAST_1 = 0x1a,
            PP13_SEL_QUALPRED_EAST_2 = 0x1b,
            PP13_SEL_QUALPRED_EAST_3 = 0x1c,
            PP13_SEL_QUALPRED_EAST_4 = 0x1d,
            PP13_SEL_QUALPRED_EAST_5 = 0x1e,
            PP13_SEL_QUALPRED_EAST_6 = 0x1f,
            PP13_SEL_QUALPRED_EAST_7 = 0x20,
            PP13_SEL_QUALPRED_EAST_8 = 0x21,
            PP13_SEL_QUALPRED_EAST_9 = 0x22,
            PP13_SEL_QUALPRED_EAST_10 = 0x23,
            PP13_SEL_QUALPRED_EAST_11 = 0x24,
            PP13_SEL_QUALPRED_EAST_12 = 0x25,
            PP13_SEL_QUALPRED_EAST_13 = 0x26,
            PP13_SEL_QUALPRED_EAST_14 = 0x27,
            PP13_SEL_TEAMCUP_TEAM = 0x28,
            PP13_SEL_TEAMCUP_PLAYER = 0x29,
            PP13_SEL_TEAMCUP_TEAM_LOCK = 0x2a,
            PP13_SEL_TEAMCUP_PLAYER_LOCK = 0x2b,
            PP13_SEL_EVENTPRED_0 = 0x2c,
            PP13_SEL_EVENTPRED_1 = 0x2d,
            PP13_SEL_EVENTPRED_2 = 0x2e,
            PP13_SEL_EVENTPRED_3 = 0x2f,
            PP13_SEL_EVENTPRED_4 = 0x30,
            PP13_SEL_EVENTPRED_5 = 0x31,
            PP13_SEL_EVENTPRED_6 = 0x32,
            PP13_SEL_EVENTPRED_7 = 0x33,
            PP13_SEL_EVENTPRED_8 = 0x34,
            PP13_SEL_EVENTPRED_9 = 0x35,
            PP13_SEL_EVENTPRED_10 = 0x36,
            PP13_SEL_EVENTPRED_11 = 0x37,
            PP13_SEL_EVENTPRED_12 = 0x38,
            PP13_SEL_EVENTPRED_13 = 0x39,
            PP13_SEL_EVENTPRED_14 = 0x3a,
            PP13_SEL_EVENTPRED_15 = 0x3b,
            PP13_SEL_EVENTPRED_16 = 0x3c,
            PP13_SEL_EVENTPRED_17 = 0x3d,
            PP13_SEL_EVENTPRED_18 = 0x3e,
            PP13_SEL_EVENTPRED_19 = 0x3f,
            PP13_SEL_EVENTPRED_20 = 0x40,
            PP13_SEL_EVENTPRED_21 = 0x41,
            PP13_SEL_EVENTPRED_22 = 0x42,
            PP13_SEL_EVENTPRED_23 = 0x43,
            PP13_SEL_EVENTPRED_24 = 0x44,
            PP13_SEL_EVENTPRED_25 = 0x45,
            PP13_SEL_EVENTPRED_26 = 0x46,
            PP13_SEL_EVENTPRED_27 = 0x47,
            PP13_SEL_EVENTPRED_28 = 0x48,
            PP13_SEL_EVENTPRED_29 = 0x49,
            PP13_SEL_EVENTPRED_30 = 0x4a,
            PP13_SEL_EVENTPRED_31 = 0x4b,
            PP13_SEL_EVENTPRED_32 = 0x4c,
            PP13_SEL_EVENTPRED_33 = 0x4d,
            PP13_SEL_EVENTPRED_34 = 0x4e,
            PP13_SEL_EVENTPRED_35 = 0x4f,
            PP13_SEL_EVENTPRED_36 = 0x50,
            PP13_SEL_EVENTPRED_37 = 0x51,
            PP13_SEL_EVENTPRED_38 = 0x52,
            PP13_SEL_EVENTPRED_39 = 0x53,
            PP13_SEL_EVENTPRED_40 = 0x54,
            PP13_SEL_EVENTPRED_41 = 0x55,
            PP13_SEL_EVENTPRED_42 = 0x56,
            PP13_SEL_EVENTPRED_43 = 0x57,
            PP13_SEL_SOLO_0 = 0x58,
            PP13_SEL_SOLO_1 = 0x59,
            PP13_SEL_SOLO_2 = 0x5a,
            PP13_SEL_SOLO_3 = 0x5b,
            PP13_SEL_SOLO_4 = 0x5c,
            PP13_SEL_SOLO_5 = 0x5d,
            PP13_SEL_SOLO_6 = 0x5e,
            PP13_SEL_SOLO_7 = 0x5f,
        };
    };
};
