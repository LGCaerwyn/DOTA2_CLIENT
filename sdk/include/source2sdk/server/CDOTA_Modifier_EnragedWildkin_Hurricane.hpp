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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EnragedWildkin_Hurricane : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vDirection; // 0x17f8            
            float m_flEndTime; // 0x1804            
            float m_flCurTime; // 0x1808            
            source2sdk::client::ParticleIndex_t m_FX; // 0x180c            
            std::int32_t distance; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EnragedWildkin_Hurricane because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_EnragedWildkin_Hurricane) == 0x1818);
    };
};
