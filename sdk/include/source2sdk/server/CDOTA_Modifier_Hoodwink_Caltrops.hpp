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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_Caltrops : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t effect_radius; // 0x1878            
            std::int32_t caltrops_damage; // 0x187c            
            std::int32_t activation_radius; // 0x1880            
            float debuff_duration; // 0x1884            
            float activation_delay; // 0x1888            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Caltrops because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_Caltrops) == 0x1890);
    };
};
