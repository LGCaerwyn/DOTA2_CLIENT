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
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_EarthSpirit_GeomagneticGrip : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x5b0            
            uint8_t _pad05b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_EarthSpirit_GeomagneticGrip because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_EarthSpirit_GeomagneticGrip) == 0x5b8);
    };
};
