#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_DebuffImmune.hpp"

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
        // Size: 0x17f8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Huskar_Life_Break_Charge : public source2sdk::server::CDOTA_Modifier_DebuffImmune
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Huskar_Life_Break_Charge) == 0x17f8);
    };
};
