#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCEntityLump.hpp"
#include "source2sdk/worldrenderer/BakedLightingInfo_t.hpp"
#include "source2sdk/worldrenderer/NodeData_t.hpp"
#include "source2sdk/worldrenderer/WorldBuilderParams_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xa8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct World_t
        {
        public:
            source2sdk::worldrenderer::WorldBuilderParams_t m_builderParams; // 0x0            
            // m_worldNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::NodeData_t> m_worldNodes;
            char m_worldNodes[0x18]; // 0x48            
            source2sdk::worldrenderer::BakedLightingInfo_t m_worldLightingInfo; // 0x60            
            // m_entityLumps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeCEntityLump>> m_entityLumps;
            char m_entityLumps[0x18]; // 0x90            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::World_t, m_builderParams) == 0x0);
        static_assert(offsetof(source2sdk::worldrenderer::World_t, m_worldNodes) == 0x48);
        static_assert(offsetof(source2sdk::worldrenderer::World_t, m_worldLightingInfo) == 0x60);
        static_assert(offsetof(source2sdk::worldrenderer::World_t, m_entityLumps) == 0x90);
        
        static_assert(sizeof(source2sdk::worldrenderer::World_t) == 0xa8);
    };
};
