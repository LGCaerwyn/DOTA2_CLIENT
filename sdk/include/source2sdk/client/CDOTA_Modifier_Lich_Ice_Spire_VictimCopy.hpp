#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lich_Ice_Spire_VictimCopy : public client::CDOTA_Buff
    {
    public:
        float aura_radius; // 0x1708        
        client::ParticleIndex_t m_nFXIndex; // 0x170c        
        client::CountdownTimer m_Timer; // 0x1710        
        bool m_bIsHeroSpire; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lich_Ice_Spire_VictimCopy because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lich_Ice_Spire_VictimCopy) == 0x1730);
};
