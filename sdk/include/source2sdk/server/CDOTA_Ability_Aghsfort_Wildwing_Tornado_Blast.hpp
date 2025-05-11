#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Aghsfort_Wildwing_Tornado_Blast : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float disable_duration; // 0x5b8            
            float damage; // 0x5bc            
            source2sdk::client::ParticleIndex_t m_nPreviewFX; // 0x5c0            
            uint8_t _pad05c4[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Aghsfort_Wildwing_Tornado_Blast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Aghsfort_Wildwing_Tornado_Blast) == 0x5d0);
    };
};
