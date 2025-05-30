#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x630
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Mirana_Arrow : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float scepter_radius; // 0x5b0            
            Vector m_vStartPos; // 0x5b4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5c0            
            uint8_t _pad05c4[0x4]; // 0x5c4
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hAlreadyHitList[2];
            char hAlreadyHitList[0x30]; // 0x5c8            
            // hStarfallList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hStarfallList[2];
            char hStarfallList[0x30]; // 0x5f8            
            std::int32_t m_nActiveArrow; // 0x628            
            uint8_t _pad062c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Mirana_Arrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Mirana_Arrow) == 0x630);
    };
};
