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
        class C_DOTA_Ability_Huskar_Berserkers_Blood : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool activatable; // 0x5b0            
            uint8_t _pad05b1[0x3]; // 0x5b1
            std::int32_t m_nHealthCost; // 0x5b4            
            std::int32_t m_nDebuffCount; // 0x5b8            
            uint8_t _pad05bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Huskar_Berserkers_Blood because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Huskar_Berserkers_Blood) == 0x5c0);
    };
};
