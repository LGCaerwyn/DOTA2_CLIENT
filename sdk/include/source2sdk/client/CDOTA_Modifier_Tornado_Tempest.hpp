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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tornado_Tempest : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t near_radius; // 0x1878            
            std::int32_t near_damage; // 0x187c            
            float far_radius; // 0x1880            
            std::int32_t far_damage; // 0x1884            
            float tick_rate; // 0x1888            
            uint8_t _pad188c[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tornado_Tempest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tornado_Tempest) == 0x18a0);
    };
};
