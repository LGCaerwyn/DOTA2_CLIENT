#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_DeathProphet_SpiritSiphon : public client::C_DOTABaseAbility
    {
    public:
        Vector m_vStartPos; // 0x600        
        int32_t m_iArrowProjectile; // 0x60c        
        int32_t m_nFXIndex; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_DeathProphet_SpiritSiphon because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_DeathProphet_SpiritSiphon) == 0x618);
};
