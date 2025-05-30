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
        // Size: 0x10
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CrownfallCreditsAABB_t
        {
        public:
            std::int32_t x; // 0x0            
            std::int32_t y; // 0x4            
            std::int32_t w; // 0x8            
            std::int32_t h; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CrownfallCreditsAABB_t, x) == 0x0);
        static_assert(offsetof(source2sdk::client::CrownfallCreditsAABB_t, y) == 0x4);
        static_assert(offsetof(source2sdk::client::CrownfallCreditsAABB_t, w) == 0x8);
        static_assert(offsetof(source2sdk::client::CrownfallCreditsAABB_t, h) == 0xc);
        
        static_assert(sizeof(source2sdk::client::CrownfallCreditsAABB_t) == 0x10);
    };
};
