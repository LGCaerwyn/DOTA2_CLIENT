#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"

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
        // Size: 0x1e98
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bShouldRespawn"
        // static metadata: MNetworkVarNames "bool m_bStolen"
        #pragma pack(push, 1)
        class CDOTA_Unit_SpiritBear : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            // metadata: MNetworkEnable
            bool m_bShouldRespawn; // 0x1e90            
            // metadata: MNetworkEnable
            bool m_bStolen; // 0x1e91            
            uint8_t _pad1e92[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_SpiritBear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_SpiritBear) == 0x1e98);
    };
};
