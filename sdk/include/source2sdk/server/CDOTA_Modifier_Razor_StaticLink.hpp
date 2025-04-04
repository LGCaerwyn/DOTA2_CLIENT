#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CDOTA_Buff;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Razor_StaticLink : public client::CDOTA_Buff
    {
    public:
        float flSmoothness; // 0x1708        
        float drain_duration; // 0x170c        
        int32_t drain_rate; // 0x1710        
        int32_t drain_range; // 0x1714        
        int32_t drain_range_buffer; // 0x1718        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x171c        
        int32_t m_iTotalDrainAmount; // 0x1720        
        int32_t pull_speed; // 0x1724        
        int32_t min_pull_range; // 0x1728        
        client::ParticleIndex_t m_iLinkIndex; // 0x172c        
        client::CDOTA_Buff* m_pBuffPositive; // 0x1730        
        client::CDOTA_Buff* m_pNegative; // 0x1738        
        entity2::GameTime_t m_flLastThinkTime; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Razor_StaticLink because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Razor_StaticLink) == 0x1750);
};
