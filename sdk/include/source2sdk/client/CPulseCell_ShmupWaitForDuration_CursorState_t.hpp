#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CPulseCell_ShmupWaitForDuration_CursorState_t
        {
        public:
            panorama_CPanelPtr m_hPanel; // 0x0            
            std::int32_t m_nTargetTick; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CPulseCell_ShmupWaitForDuration_CursorState_t, m_hPanel) == 0x0);
        static_assert(offsetof(source2sdk::client::CPulseCell_ShmupWaitForDuration_CursorState_t, m_nTargetTick) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CPulseCell_ShmupWaitForDuration_CursorState_t) == 0xc);
    };
};
