#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: networksystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace networksystem
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct ChangeAccessorFieldPathIndex_t
        {
        public:
            std::int32_t m_Value; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::networksystem::ChangeAccessorFieldPathIndex_t, m_Value) == 0x0);
        
        static_assert(sizeof(source2sdk::networksystem::ChangeAccessorFieldPathIndex_t) == 0x4);
    };
};
