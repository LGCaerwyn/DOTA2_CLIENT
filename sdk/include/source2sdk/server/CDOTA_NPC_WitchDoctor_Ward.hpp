#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // 
        // static metadata: MNetworkVarNames "int m_nTargetType"
        // static metadata: MNetworkVarNames "int m_nTargetFlags"
        #pragma pack(push, 1)
        class CDOTA_NPC_WitchDoctor_Ward : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nTargetType; // 0x1860            
            // metadata: MNetworkEnable
            std::int32_t m_nTargetFlags; // 0x1864            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_NPC_WitchDoctor_Ward because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_NPC_WitchDoctor_Ward) == 0x1868);
    };
};
