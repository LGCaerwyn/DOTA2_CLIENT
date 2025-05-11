#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_Arc_Warden_Magnetic_Field_Thinker_Rune_Magnet : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x17f8            
            float rune_pull_strength; // 0x17fc            
            float rune_pull_max_speed_as_multiplier_of_pull_strength; // 0x1800            
            float rune_activate_radius_buffer; // 0x1804            
            float rune_pull_falloff_multiplier; // 0x1808            
            float rune_pull_radius; // 0x180c            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x1810            
            source2sdk::entity2::GameTime_t m_flBubbleExpirationTime; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Arc_Warden_Magnetic_Field_Thinker_Rune_Magnet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Arc_Warden_Magnetic_Field_Thinker_Rune_Magnet) == 0x1818);
    };
};
