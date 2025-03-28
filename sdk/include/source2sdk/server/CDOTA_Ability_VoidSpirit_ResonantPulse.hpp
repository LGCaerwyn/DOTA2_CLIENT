#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_VoidSpirit_ResonantPulse : public server::CDOTABaseAbility
    {
    public:
        bool m_bGrantedScepterCharges; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5c9[0x3]; // 0x5c9
        float buff_duration; // 0x5cc        
        int32_t base_absorb_amount; // 0x5d0        
        int32_t absorb_per_hero_hit; // 0x5d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_ResonantPulse because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_VoidSpirit_ResonantPulse) == 0x5d8);
};
