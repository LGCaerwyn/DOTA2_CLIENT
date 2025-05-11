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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Huskar_Berserkers_Blood : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t maximum_health_regen; // 0x17f8            
            std::int32_t maximum_attack_speed; // 0x17fc            
            std::int32_t maximum_magic_resist; // 0x1800            
            std::int32_t hp_threshold_max; // 0x1804            
            bool m_bIsActive; // 0x1808            
            uint8_t _pad1809[0x3]; // 0x1809
            std::int32_t aura_effectiveness; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Huskar_Berserkers_Blood because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Huskar_Berserkers_Blood) == 0x1810);
    };
};
