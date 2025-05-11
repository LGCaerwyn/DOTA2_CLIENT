#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/toolscene/CLightRigBackground.hpp"
#include "source2sdk/toolscene/CLightRigExposure.hpp"
#include "source2sdk/toolscene/CLightRigGrid.hpp"
#include "source2sdk/toolscene/CLightRigPointLight.hpp"
#include "source2sdk/toolscene/CLightRigPostProcessing.hpp"
#include "source2sdk/toolscene/CLightRigSky.hpp"
#include "source2sdk/toolscene/CLightRigSpotLight.hpp"
#include "source2sdk/toolscene/CLightRigSunLight.hpp"
#include "source2sdk/toolscene/CLightRigVMap.hpp"
#include "source2sdk/toolscene/LightRigType_t.hpp"

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
        // Size: 0x168
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataAssociatedFile
        #pragma pack(push, 1)
        class CToolSceneLightRig
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::toolscene::LightRigType_t m_nRigType; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // m_Suns has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::toolscene::CLightRigSunLight> m_Suns;
            char m_Suns[0x18]; // 0x10            
            // m_PointLights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::toolscene::CLightRigPointLight> m_PointLights;
            char m_PointLights[0x18]; // 0x28            
            // m_SpotLights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::toolscene::CLightRigSpotLight> m_SpotLights;
            char m_SpotLights[0x18]; // 0x40            
            source2sdk::toolscene::CLightRigBackground m_Background; // 0x58            
            source2sdk::toolscene::CLightRigGrid m_Grid; // 0x5d            
            uint8_t _pad0062[0x2]; // 0x62
            source2sdk::toolscene::CLightRigExposure m_Exposure; // 0x64            
            source2sdk::toolscene::CLightRigPostProcessing m_PostProcessing; // 0x70            
            source2sdk::toolscene::CLightRigSky m_Sky; // 0x78            
            source2sdk::toolscene::CLightRigVMap m_BackgroundMap; // 0x80            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::toolscene::CToolSceneLightRig, m_nRigType) == 0x8);
        static_assert(offsetof(source2sdk::toolscene::CToolSceneLightRig, m_Suns) == 0x10);
        static_assert(offsetof(source2sdk::toolscene::CToolSceneLightRig, m_PointLights) == 0x28);
        static_assert(offsetof(source2sdk::toolscene::CToolSceneLightRig, m_SpotLights) == 0x40);
        static_assert(offsetof(source2sdk::toolscene::CToolSceneLightRig, m_Background) == 0x58);
        static_assert(offsetof(source2sdk::toolscene::CToolSceneLightRig, m_Grid) == 0x5d);
        static_assert(offsetof(source2sdk::toolscene::CToolSceneLightRig, m_Exposure) == 0x64);
        static_assert(offsetof(source2sdk::toolscene::CToolSceneLightRig, m_PostProcessing) == 0x70);
        static_assert(offsetof(source2sdk::toolscene::CToolSceneLightRig, m_Sky) == 0x78);
        static_assert(offsetof(source2sdk::toolscene::CToolSceneLightRig, m_BackgroundMap) == 0x80);
        
        static_assert(sizeof(source2sdk::toolscene::CToolSceneLightRig) == 0x168);
    };
};
