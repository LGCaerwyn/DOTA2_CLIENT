#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bCanBeResummoned; // 0x17f8            
            bool m_bCanAttack; // 0x17f9            
            uint8_t _pad17fa[0x2]; // 0x17fa
            source2sdk::client::ParticleIndex_t m_nFxIndex; // 0x17fc            
            source2sdk::client::ParticleIndex_t m_nStatusFxIndex; // 0x1800            
            std::int32_t bear_attack_leash_range; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck) == 0x1808);
    };
};
