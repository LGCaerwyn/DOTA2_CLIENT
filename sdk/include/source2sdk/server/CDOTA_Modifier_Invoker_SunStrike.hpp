#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_SunStrike : public client::CDOTA_Buff
    {
    public:
        int32_t area_of_effect; // 0x1708        
        float damage; // 0x170c        
        int32_t vision_distance; // 0x1710        
        float vision_duration; // 0x1714        
        float spell_amp; // 0x1718        
        float spell_lifesteal; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_SunStrike because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_SunStrike) == 0x1720);
};
