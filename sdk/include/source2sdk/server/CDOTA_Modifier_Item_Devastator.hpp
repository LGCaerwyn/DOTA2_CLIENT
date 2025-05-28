#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Devastator : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_armor; // 0x1888            
            std::int32_t projectile_speed; // 0x188c            
            std::int32_t bonus_intellect; // 0x1890            
            std::int32_t bonus_attack_speed; // 0x1894            
            float bonus_mana_regen; // 0x1898            
            std::int32_t mana_cost; // 0x189c            
            std::int32_t slow_duration; // 0x18a0            
            std::int32_t spell_amp_duration; // 0x18a4            
            std::int32_t damage_penalty; // 0x18a8            
            std::int32_t passive_cooldown; // 0x18ac            
            // m_InFlightWitchBladeAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightWitchBladeAttackRecords;
            char m_InFlightWitchBladeAttackRecords[0x18]; // 0x18b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Devastator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Devastator) == 0x18c8);
    };
};
