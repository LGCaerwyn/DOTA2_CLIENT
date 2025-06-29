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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Slark_Pounce : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t pounce_distance; // 0x1878            
            std::int32_t pounce_distance_scepter; // 0x187c            
            float pounce_speed; // 0x1880            
            float pounce_acceleration; // 0x1884            
            std::int32_t pounce_radius; // 0x1888            
            std::int32_t pounce_damage; // 0x188c            
            float leash_duration; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Slark_Pounce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Slark_Pounce) == 0x1898);
    };
};
