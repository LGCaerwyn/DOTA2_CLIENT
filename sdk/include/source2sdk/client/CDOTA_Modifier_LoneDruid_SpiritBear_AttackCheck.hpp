#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bCanBeResummoned; // 0x1878            
            bool m_bCanAttack; // 0x1879            
            uint8_t _pad187a[0x2]; // 0x187a
            source2sdk::client::ParticleIndex_t m_nFxIndex; // 0x187c            
            source2sdk::client::ParticleIndex_t m_nStatusFxIndex; // 0x1880            
            std::int32_t bear_attack_leash_range; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck) == 0x1888);
    };
};
