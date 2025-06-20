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
        class CDOTA_Modifier_Item_Veil_Of_Discord_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1878            
            float debuff_radius; // 0x187c            
            float resist_debuff_duration; // 0x1880            
            std::int32_t m_nHeroesHit; // 0x1884            
            bool m_bHitInvisibleHero; // 0x1888            
            bool m_bFirstPulse; // 0x1889            
            uint8_t _pad188a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Veil_Of_Discord_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Item_Veil_Of_Discord_Thinker) == 0x1890);
    };
};
