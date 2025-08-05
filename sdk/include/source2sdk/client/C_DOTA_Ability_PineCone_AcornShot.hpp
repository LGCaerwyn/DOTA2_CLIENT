#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "DotaTreeId_t m_nAcornTree"
        #pragma pack(push, 1)
        class C_DOTA_Ability_PineCone_AcornShot : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPineConeAcornTreePlanted"
            std::uint32_t m_nAcornTree; // 0x688            
            float projectile_speed; // 0x68c            
            float bounce_delay; // 0x690            
            std::int32_t bounce_range; // 0x694            
            std::int32_t bounce_count; // 0x698            
            uint8_t _pad069c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_PineCone_AcornShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_PineCone_AcornShot) == 0x6a0);
    };
};
