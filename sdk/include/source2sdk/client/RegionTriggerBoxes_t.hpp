#pragma once
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x30
    #pragma pack(push, 1)
    struct RegionTriggerBoxes_t
    {
    public:
        // metadata: MNetworkEnable
        mathlib_extended::AABB_t regionBox; // 0x0        
        // metadata: MNetworkEnable
        Vector vRegionBoxOrigin; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4]; // 0x24
        // metadata: MNetworkEnable
        CUtlString strRegionName; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RegionTriggerBoxes_t, regionBox) == 0x0);
    static_assert(offsetof(RegionTriggerBoxes_t, vRegionBoxOrigin) == 0x18);
    static_assert(offsetof(RegionTriggerBoxes_t, strRegionName) == 0x28);
    
    static_assert(sizeof(RegionTriggerBoxes_t) == 0x30);
};
