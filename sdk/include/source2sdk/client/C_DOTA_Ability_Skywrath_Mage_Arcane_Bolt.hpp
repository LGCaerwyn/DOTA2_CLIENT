#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Skywrath_Mage_Arcane_Bolt : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t bolt_vision; // 0x5b0            
            float vision_duration; // 0x5b4            
            float m_flDamage; // 0x5b8            
            std::int32_t m_nFXIndex; // 0x5bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Skywrath_Mage_Arcane_Bolt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Skywrath_Mage_Arcane_Bolt) == 0x5c0);
    };
};
