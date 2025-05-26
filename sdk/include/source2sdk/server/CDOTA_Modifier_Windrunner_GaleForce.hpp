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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Windrunner_GaleForce : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vEndpoint; // 0x1878            
            Vector m_vFlowPosition; // 0x1884            
            Vector m_vPull; // 0x1890            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x189c            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x18a0            
            float wind_strength; // 0x18a4            
            uint8_t _pad18a8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_GaleForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Windrunner_GaleForce) == 0x18b0);
    };
};
