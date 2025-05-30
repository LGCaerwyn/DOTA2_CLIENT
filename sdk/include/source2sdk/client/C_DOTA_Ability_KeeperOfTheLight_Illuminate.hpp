#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_KeeperOfTheLight_Illuminate : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x5b0            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x5b4            
            std::int32_t m_iProjectile; // 0x5b8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5bc            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x5c0            
            Vector m_vPos; // 0x5c4            
            std::int32_t total_damage; // 0x5d0            
            bool m_bStarted; // 0x5d4            
            uint8_t _pad05d5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_KeeperOfTheLight_Illuminate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_KeeperOfTheLight_Illuminate) == 0x5d8);
    };
};
