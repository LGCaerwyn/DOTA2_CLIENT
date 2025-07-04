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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_Shodo_Sai_Mark : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t vuln_slow; // 0x1878            
            std::int32_t base_crit_pct; // 0x187c            
            std::int32_t parry_bonus_crit; // 0x1880            
            std::int32_t invis_bonus_crit; // 0x1884            
            float stun_duration; // 0x1888            
            float parry_stun_duration; // 0x188c            
            // m_vecAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_vecAttackRecords;
            char m_vecAttackRecords[0x18]; // 0x1890            
            bool m_bFromParry; // 0x18a8            
            bool m_bParryBonus; // 0x18a9            
            bool m_bConsumed; // 0x18aa            
            bool m_bForceInvisBonus; // 0x18ab            
            source2sdk::client::ParticleIndex_t m_nOverheadFXIndex; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_Shodo_Sai_Mark because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kez_Shodo_Sai_Mark) == 0x18b0);
    };
};
