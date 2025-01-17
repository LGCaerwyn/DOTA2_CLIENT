#pragma once
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Techies_LandMine : public server::CDOTA_Modifier_Invisible
    {
    public:
        float radius; // 0x1718        
        float proximity_threshold; // 0x171c        
        float damage; // 0x1720        
        float activation_delay; // 0x1724        
        float outer_damage; // 0x1728        
        int32_t min_distance; // 0x172c        
        bool bActivated; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x7]; // 0x1731
        server::CountdownTimer m_Timer; // 0x1738        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_LandMine because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_LandMine) == 0x1750);
};
