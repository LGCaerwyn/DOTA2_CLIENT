#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_DoomBringer_Devour : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool m_bIsAltCastState; // 0x5b0            
            uint8_t _pad05b1[0x3]; // 0x5b1
            std::int32_t ability_bonus_level; // 0x5b4            
            // m_vecAbilityDraftStolenAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_DOTABaseAbility>> m_vecAbilityDraftStolenAbilities;
            char m_vecAbilityDraftStolenAbilities[0x18]; // 0x5b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_DoomBringer_Devour because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_DoomBringer_Devour) == 0x5d0);
    };
};
