#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vPathDir; // 0x17f8            
            float shard_trail_radius; // 0x1804            
            float shard_debuff_linger_duration; // 0x1808            
            float shard_interval; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Thinker) == 0x1810);
    };
};
