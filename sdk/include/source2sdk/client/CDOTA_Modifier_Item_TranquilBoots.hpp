#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_TranquilBoots : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_movement_speed; // 0x17f8            
            std::int32_t broken_movement_speed; // 0x17fc            
            std::int32_t bonus_armor; // 0x1800            
            std::int32_t bonus_health_regen; // 0x1804            
            std::int32_t break_threshold; // 0x1808            
            std::int32_t break_time; // 0x180c            
            std::int32_t break_count; // 0x1810            
            float m_flResetTime; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_TranquilBoots because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_TranquilBoots) == 0x1818);
    };
};
