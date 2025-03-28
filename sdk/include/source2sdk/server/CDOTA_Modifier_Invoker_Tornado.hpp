#pragma once
#include "source2sdk/server/CDOTA_Modifier_Cyclone.hpp"
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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Invoker_Tornado : public server::CDOTA_Modifier_Cyclone
    {
    public:
        float m_flLandDamage; // 0x1720        
        float spell_lifesteal; // 0x1724        
        float spell_amp; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_Tornado because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Invoker_Tornado) == 0x1730);
};
