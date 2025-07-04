#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enigma_BlackHole_Pull : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t pull_speed; // 0x1878            
            float radius; // 0x187c            
            float damage; // 0x1880            
            float tick_rate; // 0x1884            
            float pull_rotate_speed; // 0x1888            
            float animation_rate; // 0x188c            
            float scepter_pct_damage; // 0x1890            
            float m_flBlackHoleDuration; // 0x1894            
            float m_flBlackHoleCreationTime; // 0x1898            
            source2sdk::entity2::GameTime_t m_flDamageTick; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_BlackHole_Pull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Enigma_BlackHole_Pull) == 0x18a0);
    };
};
