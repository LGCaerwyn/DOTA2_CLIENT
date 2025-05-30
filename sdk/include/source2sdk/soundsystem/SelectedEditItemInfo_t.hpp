#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/SosEditItemInfo_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SelectedEditItemInfo_t
        {
        public:
            // m_EditItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::SosEditItemInfo_t> m_EditItems;
            char m_EditItems[0x18]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::SelectedEditItemInfo_t, m_EditItems) == 0x0);
        
        static_assert(sizeof(source2sdk::soundsystem::SelectedEditItemInfo_t) == 0x18);
    };
};
