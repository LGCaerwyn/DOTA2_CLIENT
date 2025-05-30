#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmTarget
        {
        public:
            CTransform m_transform; // 0x0            
            CGlobalSymbol m_boneID; // 0x20            
            bool m_bIsBoneTarget; // 0x28            
            bool m_bIsUsingBoneSpaceOffsets; // 0x29            
            bool m_bHasOffsets; // 0x2a            
            bool m_bIsSet; // 0x2b            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmTarget, m_transform) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmTarget, m_boneID) == 0x20);
        static_assert(offsetof(source2sdk::animlib::CNmTarget, m_bIsBoneTarget) == 0x28);
        static_assert(offsetof(source2sdk::animlib::CNmTarget, m_bIsUsingBoneSpaceOffsets) == 0x29);
        static_assert(offsetof(source2sdk::animlib::CNmTarget, m_bHasOffsets) == 0x2a);
        static_assert(offsetof(source2sdk::animlib::CNmTarget, m_bIsSet) == 0x2b);
        
        static_assert(sizeof(source2sdk::animlib::CNmTarget) == 0x30);
    };
};
