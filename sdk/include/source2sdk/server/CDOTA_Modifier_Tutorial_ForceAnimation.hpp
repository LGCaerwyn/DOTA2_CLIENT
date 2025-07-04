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
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tutorial_ForceAnimation : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nActivity; // 0x1878            
            bool m_bLoop; // 0x187c            
            bool m_bFacePlayer; // 0x187d            
            uint8_t _pad187e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tutorial_ForceAnimation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tutorial_ForceAnimation) == 0x1880);
    };
};
