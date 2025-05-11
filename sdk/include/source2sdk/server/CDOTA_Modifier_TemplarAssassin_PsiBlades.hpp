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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_TemplarAssassin_PsiBlades : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bonus_attack_range; // 0x17f8            
            float attack_spill_range; // 0x17fc            
            float attack_spill_width; // 0x1800            
            std::int32_t attack_spill_pct; // 0x1804            
            std::int32_t attack_spill_penalty; // 0x1808            
            float additional_bonus_attack_range; // 0x180c            
            float additional_attack_spill_range; // 0x1810            
            float spill_slow_duration; // 0x1814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TemplarAssassin_PsiBlades because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TemplarAssassin_PsiBlades) == 0x1818);
    };
};
