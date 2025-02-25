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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_HeavyQuiver : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_projectile_speed_pct; // 0x1708        
        int32_t bonus_attack_range; // 0x170c        
        int32_t deadly_blow_multiplier; // 0x1710        
        float maim_duration; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_HeavyQuiver because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_HeavyQuiver) == 0x1718);
};
