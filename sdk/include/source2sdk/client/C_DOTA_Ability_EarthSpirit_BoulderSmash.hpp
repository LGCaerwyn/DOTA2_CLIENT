#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_EarthSpirit_BoulderSmash : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float speed; // 0x5b0            
            float rock_damage; // 0x5b4            
            float creep_multiplier; // 0x5b8            
            float radius; // 0x5bc            
            float rock_search_aoe; // 0x5c0            
            float unit_distance; // 0x5c4            
            float rock_distance; // 0x5c8            
            std::int32_t m_nProjectileID; // 0x5cc            
            // m_hCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCursorTarget;
            char m_hCursorTarget[0x4]; // 0x5d0            
            bool m_bUsedStone; // 0x5d4            
            uint8_t _pad05d5[0x3]; // 0x5d5
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x5d8            
            bool m_bTargetStone; // 0x5dc            
            uint8_t _pad05dd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_EarthSpirit_BoulderSmash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_EarthSpirit_BoulderSmash) == 0x5e0);
    };
};
