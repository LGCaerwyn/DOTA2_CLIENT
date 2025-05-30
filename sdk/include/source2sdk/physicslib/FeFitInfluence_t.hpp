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
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeFitInfluence_t
        {
        public:
            std::uint32_t nVertexNode; // 0x0            
            float flWeight; // 0x4            
            std::uint32_t nMatrixNode; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeFitInfluence_t, nVertexNode) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeFitInfluence_t, flWeight) == 0x4);
        static_assert(offsetof(source2sdk::physicslib::FeFitInfluence_t, nMatrixNode) == 0x8);
        
        static_assert(sizeof(source2sdk::physicslib::FeFitInfluence_t) == 0xc);
    };
};
