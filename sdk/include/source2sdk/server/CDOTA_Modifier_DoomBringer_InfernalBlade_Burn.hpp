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
    class CDOTA_Modifier_DoomBringer_InfernalBlade_Burn : public client::CDOTA_Buff
    {
    public:
        int32_t burn_damage; // 0x1708        
        float burn_damage_pct; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DoomBringer_InfernalBlade_Burn because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DoomBringer_InfernalBlade_Burn) == 0x1710);
};
