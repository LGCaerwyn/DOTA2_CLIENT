#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsAttributeValue.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/SurvivorsHeroID_t.hpp"
#include "source2sdk/client/SurvivorsPowerUpID_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/client/style_index_t.hpp"

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
        // Standard-layout class: true
        // Size: 0xb8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsHeroDefinition
        {
        public:
            source2sdk::client::SurvivorsHeroID_t m_unHeroID; // 0x0            
            source2sdk::client::HeroID_t m_nDOTAHeroID; // 0x4            
            uint8_t _pad0008[0x8]; // 0x8
            float m_flBaseHealth; // 0x10            
            float m_flBaseSpeed; // 0x14            
            float m_flBasePickupRadius; // 0x18            
            float m_flBaseDashSpeed; // 0x1c            
            float m_flBaseDashDuration; // 0x20            
            float m_flBaseDashCooldown; // 0x24            
            std::int32_t m_nBaseNumDashes; // 0x28            
            float m_flMass; // 0x2c            
            float m_flCollisionRadius; // 0x30            
            float m_flCollisionHeight; // 0x34            
            float m_flTriggerCollisionRadiusPadding; // 0x38            
            uint8_t _pad003c[0x4]; // 0x3c
            CUtlString m_pszPlayerHitSoundEvent; // 0x40            
            CUtlString m_sLocDisplayName; // 0x48            
            // m_vecEconItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::item_definition_index_t> m_vecEconItems;
            char m_vecEconItems[0x18]; // 0x50            
            source2sdk::client::style_index_t m_unStyleIndex; // 0x68            
            uint8_t _pad0069[0x7]; // 0x69
            // m_vecBaseAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsAttributeValue> m_vecBaseAttributes;
            char m_vecBaseAttributes[0x18]; // 0x70            
            // m_vecStartingPowerUps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsPowerUpID_t> m_vecStartingPowerUps;
            char m_vecStartingPowerUps[0x18]; // 0x88            
            // m_vecInnatePowerUps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsPowerUpID_t> m_vecInnatePowerUps;
            char m_vecInnatePowerUps[0x18]; // 0xa0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_unHeroID) == 0x0);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_nDOTAHeroID) == 0x4);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flBaseHealth) == 0x10);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flBaseSpeed) == 0x14);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flBasePickupRadius) == 0x18);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flBaseDashSpeed) == 0x1c);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flBaseDashDuration) == 0x20);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flBaseDashCooldown) == 0x24);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_nBaseNumDashes) == 0x28);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flMass) == 0x2c);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flCollisionRadius) == 0x30);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flCollisionHeight) == 0x34);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flTriggerCollisionRadiusPadding) == 0x38);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_pszPlayerHitSoundEvent) == 0x40);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_sLocDisplayName) == 0x48);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_vecEconItems) == 0x50);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_unStyleIndex) == 0x68);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_vecBaseAttributes) == 0x70);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_vecStartingPowerUps) == 0x88);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_vecInnatePowerUps) == 0xa0);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsHeroDefinition) == 0xb8);
    };
};
