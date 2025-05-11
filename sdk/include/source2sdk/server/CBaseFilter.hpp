#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0x530
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseFilter : public source2sdk::server::CLogicalEntity
        {
        public:
            bool m_bNegated; // 0x4d8            
            uint8_t _pad04d9[0x7]; // 0x4d9
            source2sdk::entity2::CEntityIOOutput m_OnPass; // 0x4e0            
            source2sdk::entity2::CEntityIOOutput m_OnFail; // 0x508            
            
            // Datamap fields:
            // void InputTestActivator; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseFilter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseFilter) == 0x530);
    };
};
