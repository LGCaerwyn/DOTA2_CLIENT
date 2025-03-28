#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_PhantomAssassin_BlurActive : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x1708        
        float fade_duration; // 0x170c        
        int32_t break_on_attack; // 0x1710        
        bool m_bDestroyNext; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3]; // 0x1715
        int32_t manacost_reduction_during_blur_pct; // 0x1718        
        // m_hVisibleEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hVisibleEntity;
        char m_hVisibleEntity[0x4]; // 0x171c        
        float m_flCountdown; // 0x1720        
        float buff_duration_after_break; // 0x1724        
        int32_t active_movespeed_bonus; // 0x1728        
        entity2::GameTime_t m_rtLastTime; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_BlurActive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PhantomAssassin_BlurActive) == 0x1730);
};
