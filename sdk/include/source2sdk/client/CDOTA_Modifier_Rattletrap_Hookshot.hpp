#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rattletrap_Hookshot : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1888[0x14]; // 0x1888
            std::int32_t speed; // 0x189c            
            float stun_radius; // 0x18a0            
            float radius_ally; // 0x18a4            
            float cooldown_refund_ally; // 0x18a8            
            float damage; // 0x18ac            
            float duration; // 0x18b0            
            float ally_shield_duration; // 0x18b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_Hookshot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rattletrap_Hookshot) == 0x18b8);
    };
};
