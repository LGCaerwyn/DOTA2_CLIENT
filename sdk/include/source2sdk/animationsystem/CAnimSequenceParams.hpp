#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimSequenceParams
        {
        public:
            float m_flFadeInTime; // 0x0            
            float m_flFadeOutTime; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimSequenceParams, m_flFadeInTime) == 0x0);
        static_assert(offsetof(source2sdk::animationsystem::CAnimSequenceParams, m_flFadeOutTime) == 0x4);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimSequenceParams) == 0x8);
    };
};
