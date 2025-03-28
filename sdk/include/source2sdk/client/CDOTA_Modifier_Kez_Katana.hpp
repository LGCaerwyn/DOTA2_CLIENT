#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kez_Katana : public client::CDOTA_Buff
    {
    public:
        int32_t katana_attack_range; // 0x1708        
        float katana_base_attack_time; // 0x170c        
        int32_t katana_bonus_damage; // 0x1710        
        int32_t katana_bleed_attack_damage_pct; // 0x1714        
        float katana_bleed_duration; // 0x1718        
        int32_t m_nBonusPreAttackDamage; // 0x171c        
        bool m_bShardAttack; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1721[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kez_Katana because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kez_Katana) == 0x1728);
};
