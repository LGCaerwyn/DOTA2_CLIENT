#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ArcWarden_MagneticField_Distortion : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        float projectile_slow; // 0x170c        
        Vector vStart; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_MagneticField_Distortion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ArcWarden_MagneticField_Distortion) == 0x1720);
};
