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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KeeperOfTheLight_ManaLeak : public source2sdk::client::CDOTA_Buff
        {
        public:
            float mana_leak_pct; // 0x1878            
            Vector vLastPos; // 0x187c            
            bool bResetPosition; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            float m_fAccumulatedManaLeak; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_ManaLeak because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_KeeperOfTheLight_ManaLeak) == 0x1890);
    };
};
