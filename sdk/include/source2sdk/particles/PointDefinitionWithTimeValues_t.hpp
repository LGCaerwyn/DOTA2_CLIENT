#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/PointDefinition_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x18
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PointDefinitionWithTimeValues_t : public source2sdk::particles::PointDefinition_t
        {
        public:
            // metadata: MPropertyFriendlyName "Duration value for path point"
            float m_flTimeDuration; // 0x14            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in PointDefinitionWithTimeValues_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::PointDefinitionWithTimeValues_t) == 0x18);
    };
};
