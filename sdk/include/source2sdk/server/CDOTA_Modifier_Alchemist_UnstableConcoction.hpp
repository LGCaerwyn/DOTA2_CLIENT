#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Alchemist_UnstableConcoction : public source2sdk::client::CDOTA_Buff
        {
        public:
            float brew_time; // 0x1878            
            float brew_explosion; // 0x187c            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1880            
            source2sdk::entity2::GameTime_t m_fLastAlertTime; // 0x1884            
            source2sdk::client::ParticleIndex_t m_nConcoctionFXIndex; // 0x1888            
            bool m_bHasStunned; // 0x188c            
            uint8_t _pad188d[0x3]; // 0x188d
            std::int32_t damage_resistance; // 0x1890            
            std::int32_t move_speed; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Alchemist_UnstableConcoction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Alchemist_UnstableConcoction) == 0x1898);
    };
};
