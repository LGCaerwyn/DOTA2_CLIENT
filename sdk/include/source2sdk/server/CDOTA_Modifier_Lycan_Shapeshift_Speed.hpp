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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lycan_Shapeshift_Speed : public client::CDOTA_Buff
    {
    public:
        int32_t speed; // 0x1708        
        int32_t crit_chance; // 0x170c        
        int32_t crit_multiplier; // 0x1710        
        int32_t health_bonus; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lycan_Shapeshift_Speed because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lycan_Shapeshift_Speed) == 0x1718);
};
