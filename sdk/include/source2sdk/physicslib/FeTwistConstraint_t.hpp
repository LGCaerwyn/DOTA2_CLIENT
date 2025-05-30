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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeTwistConstraint_t
        {
        public:
            std::uint16_t nNodeOrient; // 0x0            
            std::uint16_t nNodeEnd; // 0x2            
            float flTwistRelax; // 0x4            
            float flSwingRelax; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeTwistConstraint_t, nNodeOrient) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeTwistConstraint_t, nNodeEnd) == 0x2);
        static_assert(offsetof(source2sdk::physicslib::FeTwistConstraint_t, flTwistRelax) == 0x4);
        static_assert(offsetof(source2sdk::physicslib::FeTwistConstraint_t, flSwingRelax) == 0x8);
        
        static_assert(sizeof(source2sdk::physicslib::FeTwistConstraint_t) == 0xc);
    };
};
