#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Hurricane_Whirlpool : public source2sdk::client::CDOTA_Buff
        {
        public:
            float pull_switch_interval; // 0x1878            
            std::int32_t pull_speed; // 0x187c            
            bool m_bForward; // 0x1880            
            uint8_t _pad1881[0x3]; // 0x1881
            source2sdk::client::ParticleIndex_t m_nfxIndex; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Hurricane_Whirlpool because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Hurricane_Whirlpool) == 0x1888);
    };
};
