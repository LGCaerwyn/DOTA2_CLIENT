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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_JumpBoots : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vDirection; // 0x1888            
            float m_flStartZ; // 0x1894            
            float m_flCurTime; // 0x1898            
            std::int32_t push_length; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_JumpBoots because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_JumpBoots) == 0x18a0);
    };
};
