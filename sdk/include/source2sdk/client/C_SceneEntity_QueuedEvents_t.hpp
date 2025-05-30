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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct C_SceneEntity_QueuedEvents_t
        {
        public:
            float starttime; // 0x0            
            uint8_t _pad0004[0x14];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_SceneEntity_QueuedEvents_t, starttime) == 0x0);
        
        static_assert(sizeof(source2sdk::client::C_SceneEntity_QueuedEvents_t) == 0x18);
    };
};
