#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTABaseAbility;
    };
};

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
        // Size: 0x1838
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Phylactery : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t bonus_health; // 0x17f8            
            std::int32_t bonus_mana; // 0x17fc            
            float bonus_mana_regen; // 0x1800            
            float bonus_spell_damage; // 0x1804            
            float slow_duration; // 0x1808            
            std::int32_t bonus_all_stats; // 0x180c            
            float bonus_per_kill; // 0x1810            
            float max_kill_bonus; // 0x1814            
            float kill_bonus_window; // 0x1818            
            uint8_t _pad181c[0x4]; // 0x181c
            // vecActivatedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_DOTABaseAbility*> vecActivatedAbilities;
            char vecActivatedAbilities[0x18]; // 0x1820            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Phylactery because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Phylactery) == 0x1838);
    };
};
