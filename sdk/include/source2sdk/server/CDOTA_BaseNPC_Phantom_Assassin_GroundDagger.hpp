#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"

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
        // Size: 0x1868
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Phantom_Assassin_GroundDagger : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1860            
            uint8_t _pad1864[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Phantom_Assassin_GroundDagger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Phantom_Assassin_GroundDagger) == 0x1868);
    };
};
