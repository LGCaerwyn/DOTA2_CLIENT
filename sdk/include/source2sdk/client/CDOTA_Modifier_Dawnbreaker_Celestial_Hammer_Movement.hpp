#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nProjectileID; // 0x1888            
            std::int32_t projectile_speed; // 0x188c            
            std::int32_t travel_speed_pct; // 0x1890            
            std::int32_t m_nMaxRange; // 0x1894            
            Vector m_vStartPoint; // 0x1898            
            Vector m_vLastTrailThinkerLocation; // 0x18a4            
            Vector m_vEndPointShard; // 0x18b0            
            source2sdk::client::ParticleIndex_t m_nStatusFXIndex; // 0x18bc            
            float flare_radius; // 0x18c0            
            bool bHasStartedBurning; // 0x18c4            
            uint8_t _pad18c5[0x3]; // 0x18c5
            float flare_debuff_duration; // 0x18c8            
            float fire_trail_health_regen; // 0x18cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement) == 0x18d0);
    };
};
