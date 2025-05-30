#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFlexDesc
        {
        public:
            CUtlString m_szFacs; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CFlexDesc, m_szFacs) == 0x0);
        
        static_assert(sizeof(source2sdk::modellib::CFlexDesc) == 0x8);
    };
};
