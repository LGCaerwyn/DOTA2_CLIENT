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
        // Registered alignment: 0x2
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeSourceEdge_t
        {
        public:
            std::uint16_t nNode[2]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeSourceEdge_t, nNode) == 0x0);
        
        static_assert(sizeof(source2sdk::physicslib::FeSourceEdge_t) == 0x4);
    };
};
