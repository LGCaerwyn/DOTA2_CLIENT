#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors_Playing : public client::CDOTA_Buff
    {
    public:
        float input_duration; // 0x1708        
        float think_interval; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI11_RockPaperScissors_Playing because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_TI11_RockPaperScissors_Playing) == 0x1710);
};
