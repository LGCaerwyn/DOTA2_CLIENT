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
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Lance_of_Pursuit_Slow : public client::CDOTA_Buff
    {
    public:
        int32_t slow_pct_melee; // 0x1708        
        int32_t slow_pct_ranged; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Lance_of_Pursuit_Slow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Lance_of_Pursuit_Slow) == 0x1710);
};
