#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct VertexPositionColor_t
        {
        public:
            Vector m_vPosition; // 0x0            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::VertexPositionColor_t, m_vPosition) == 0x0);
        
        static_assert(sizeof(source2sdk::physicslib::VertexPositionColor_t) == 0x10);
    };
};
