#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enchantress_NaturesAttendants_DamageTracker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iDamageTaken; // 0x1878            
            std::int32_t overprotective_damage_threshold; // 0x187c            
            float overprotective_damage_reset_interval; // 0x1880            
            float overprotective_wisp_duration; // 0x1884            
            std::int32_t overprotective_wisp_count; // 0x1888            
            float heal_interval; // 0x188c            
            std::int32_t overprotective_max_wisps; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_NaturesAttendants_DamageTracker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Enchantress_NaturesAttendants_DamageTracker) == 0x1898);
    };
};
