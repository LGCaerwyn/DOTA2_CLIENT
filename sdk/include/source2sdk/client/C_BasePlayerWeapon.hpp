#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"

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
        // Size: 0x9d0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkIncludeByName "m_nNextThinkTick"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkUserGroupProxy "CBasePlayerWeapon"
        // static metadata: MNetworkVarNames "GameTick_t m_nNextPrimaryAttackTick"
        // static metadata: MNetworkVarNames "float32 m_flNextPrimaryAttackTickRatio"
        // static metadata: MNetworkVarNames "GameTick_t m_nNextSecondaryAttackTick"
        // static metadata: MNetworkVarNames "float32 m_flNextSecondaryAttackTickRatio"
        // static metadata: MNetworkVarNames "int32 m_iClip1"
        // static metadata: MNetworkVarNames "int32 m_iClip2"
        // static metadata: MNetworkVarNames "int m_pReserveAmmo"
        #pragma pack(push, 1)
        class C_BasePlayerWeapon : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTick_t m_nNextPrimaryAttackTick; // 0x998            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            float m_flNextPrimaryAttackTickRatio; // 0x99c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            source2sdk::entity2::GameTick_t m_nNextSecondaryAttackTick; // 0x9a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            float m_flNextSecondaryAttackTickRatio; // 0x9a4            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkPriority "32"
            std::int32_t m_iClip1; // 0x9a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int32_t m_iClip2; // 0x9ac            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalWeaponExclusive"
            std::int32_t m_pReserveAmmo[2]; // 0x9b0            
            uint8_t _pad09b8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BasePlayerWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BasePlayerWeapon) == 0x9d0);
    };
};
