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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_Bushwhack_Trap : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t visual_height; // 0x17f8            
            float animation_rate; // 0x17fc            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1800            
            bool m_bPullComplete; // 0x1804            
            uint8_t _pad1805[0x3]; // 0x1805
            std::uint32_t m_TreeId; // 0x1808            
            float m_flDamagePerTick; // 0x180c            
            std::int32_t m_nDamageTicks; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Bushwhack_Trap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Hoodwink_Bushwhack_Trap) == 0x1818);
    };
};
