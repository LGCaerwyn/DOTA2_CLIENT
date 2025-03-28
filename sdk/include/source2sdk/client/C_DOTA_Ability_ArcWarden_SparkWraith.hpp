#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_ArcWarden_SparkWraith : public client::C_DOTABaseAbility
    {
    public:
        float duration; // 0x600        
        float activation_delay; // 0x604        
        float wraith_vision_duration; // 0x608        
        float wraith_vision_radius; // 0x60c        
        float spark_damage; // 0x610        
        int32_t creep_damage_bonus_pct; // 0x614        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_ArcWarden_SparkWraith because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_ArcWarden_SparkWraith) == 0x618);
};
