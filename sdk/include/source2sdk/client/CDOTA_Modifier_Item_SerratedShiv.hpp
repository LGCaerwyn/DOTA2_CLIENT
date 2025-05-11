#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_SerratedShiv : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t proc_chance; // 0x17f8            
            float hp_dmg; // 0x17fc            
            float hp_dmg_rosh; // 0x1800            
            uint8_t _pad1804[0x4]; // 0x1804
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1808            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_SerratedShiv because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_SerratedShiv) == 0x1820);
    };
};
