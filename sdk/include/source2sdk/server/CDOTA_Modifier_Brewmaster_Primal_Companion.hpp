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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_Primal_Companion : public source2sdk::client::CDOTA_Buff
        {
        public:
            float cooldown_on_death; // 0x1888            
            float cooldown_on_take_damage; // 0x188c            
            std::int32_t disable_distance; // 0x1890            
            std::int32_t movement_slow_when_out_of_range; // 0x1894            
            bool m_bCanAttack; // 0x1898            
            uint8_t _pad1899[0x3]; // 0x1899
            source2sdk::client::ParticleIndex_t m_nFxIndex; // 0x189c            
            std::int32_t cooldown_penalty_pct; // 0x18a0            
            std::int32_t bonus_brewling_hp; // 0x18a4            
            std::int32_t bonus_damage; // 0x18a8            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_Primal_Companion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Brewmaster_Primal_Companion) == 0x18b0);
    };
};
