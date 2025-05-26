#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/CModifierParams.hpp"

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
        // Size: 0x1960
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Mirror_Shield : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            source2sdk::client::CModifierParams m_LastParams; // 0x1878            
            std::int32_t all_stats; // 0x1950            
            std::int32_t reflect_chance; // 0x1954            
            bool m_bProcSuccessful; // 0x1958            
            uint8_t _pad1959[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mirror_Shield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Mirror_Shield) == 0x1960);
    };
};
