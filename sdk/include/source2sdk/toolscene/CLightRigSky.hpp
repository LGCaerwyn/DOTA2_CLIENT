#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

// /////////////////////////////////////////////////////////////
// Module: toolscene
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace toolscene
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLightRigSky
        {
        public:
            // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
            char m_hSkyMaterial[0x8]; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::toolscene::CLightRigSky, m_hSkyMaterial) == 0x0);
        
        static_assert(sizeof(source2sdk::toolscene::CLightRigSky) == 0x8);
    };
};
