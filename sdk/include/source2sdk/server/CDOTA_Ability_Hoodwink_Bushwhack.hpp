#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Hoodwink_Bushwhack : public server::CDOTABaseAbility
    {
    public:
        int32_t trap_radius; // 0x5c8        
        int32_t m_nProjectileHandle; // 0x5cc        
        client::ParticleIndex_t m_nFXIndex; // 0x5d0        
        [[maybe_unused]] std::uint8_t pad_0x5d4[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Hoodwink_Bushwhack because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Hoodwink_Bushwhack) == 0x5e0);
};
