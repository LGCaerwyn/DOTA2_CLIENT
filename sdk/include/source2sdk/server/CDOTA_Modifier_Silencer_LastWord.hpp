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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Silencer_LastWord : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t duration; // 0x1878            
            bool spellcast; // 0x187c            
            uint8_t _pad187d[0x3]; // 0x187d
            std::int32_t damage; // 0x1880            
            float debuff_duration; // 0x1884            
            float int_multiplier; // 0x1888            
            float radius; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Silencer_LastWord because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Silencer_LastWord) == 0x1890);
    };
};
