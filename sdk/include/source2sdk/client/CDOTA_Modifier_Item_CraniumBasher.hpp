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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_CraniumBasher : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_strength; // 0x1878            
            std::int32_t bash_chance_melee; // 0x187c            
            std::int32_t bash_chance_ranged; // 0x1880            
            float bash_duration; // 0x1884            
            float bash_cooldown; // 0x1888            
            std::int32_t bonus_chance_damage; // 0x188c            
            std::int32_t bonus_damage; // 0x1890            
            uint8_t _pad1894[0x4]; // 0x1894
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1898            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_CraniumBasher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_CraniumBasher) == 0x18b0);
    };
};
