#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Marci_Guardian_Buff : public client::CDOTA_Buff
    {
    public:
        float lifesteal_pct; // 0x1708        
        int32_t bonus_damage; // 0x170c        
        int32_t bonus_attack_range; // 0x1710        
        int32_t max_partner_distance; // 0x1714        
        int32_t max_partner_penalty; // 0x1718        
        int32_t creep_lifesteal_reduction_pct; // 0x171c        
        float m_fLifestealPct; // 0x1720        
        float m_fDamageAbsorbed; // 0x1724        
        bool m_bActive; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x3]; // 0x1729
        client::ParticleIndex_t m_nFxIndex; // 0x172c        
        // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPartner;
        char m_hPartner[0x4]; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Guardian_Buff because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Marci_Guardian_Buff) == 0x1738);
};
