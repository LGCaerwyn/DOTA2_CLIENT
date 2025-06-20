#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vPathDir; // 0x1878            
            float shard_trail_radius; // 0x1884            
            float shard_debuff_linger_duration; // 0x1888            
            float shard_interval; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Special_Mars_Spear_Burning_Trail_Thinker) == 0x1890);
    };
};
