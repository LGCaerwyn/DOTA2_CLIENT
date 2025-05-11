#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"

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
        class CDOTA_Modifier_Smoke_Of_Deceit : public source2sdk::client::CDOTA_Modifier_Invisible
        {
        public:
            std::int32_t bonus_movement_speed; // 0x1808            
            std::int32_t visibility_radius; // 0x180c            
            std::int32_t secondary_application_radius; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Smoke_Of_Deceit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Smoke_Of_Deceit) == 0x1818);
    };
};
