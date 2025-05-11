#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nyx_Assassin_Vendetta : public source2sdk::client::CDOTA_Modifier_Invisible
        {
        public:
            std::int32_t bonus_damage; // 0x1808            
            std::int32_t movement_speed; // 0x180c            
            std::int32_t mana_removal_pct; // 0x1810            
            std::int32_t free_pathing_duration; // 0x1814            
            std::int32_t attack_animation_bonus; // 0x1818            
            std::int32_t attack_range_bonus; // 0x181c            
            std::int32_t free_pathing_movement_speed_bonus; // 0x1820            
            uint8_t _pad1824[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nyx_Assassin_Vendetta because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Nyx_Assassin_Vendetta) == 0x1828);
    };
};
