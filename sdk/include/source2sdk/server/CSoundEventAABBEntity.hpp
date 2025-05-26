#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundEventEntity.hpp"

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
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "Vector m_vMins"
        // static metadata: MNetworkVarNames "Vector m_vMaxs"
        #pragma pack(push, 1)
        class CSoundEventAABBEntity : public source2sdk::server::CSoundEventEntity
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vMins; // 0x5a8            
            // metadata: MNetworkEnable
            Vector m_vMaxs; // 0x5b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventAABBEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventAABBEntity) == 0x5c0);
    };
};
