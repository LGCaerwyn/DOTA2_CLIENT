#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CEconWearable.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseAnimatingActivity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_flAnimTime"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByName "m_vLookTargetPosition"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_nForceBone"
        // static metadata: MNetworkExcludeByName "m_vecForce"
        // static metadata: MNetworkExcludeByName "m_nHitboxSet"
        // static metadata: MNetworkExcludeByName "m_flEncodedController"
        // static metadata: MNetworkExcludeByName "m_flSimulationTime"
        // static metadata: MNetworkExcludeByName "m_angRotation"
        // static metadata: MNetworkExcludeByName "m_vecOrigin"
        // static metadata: MNetworkExcludeByName "m_cellX"
        // static metadata: MNetworkExcludeByName "m_cellY"
        // static metadata: MNetworkExcludeByName "m_cellZ"
        // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
        // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
        // static metadata: MNetworkExcludeByName "m_vecMaxs"
        // static metadata: MNetworkExcludeByName "m_vecMins"
        // static metadata: MNetworkExcludeByName "m_hOwnerEntity"
        // static metadata: MNetworkExcludeByName "m_hParent"
        // static metadata: MNetworkExcludeByName "m_flCreateTime"
        // static metadata: MNetworkExcludeByName "CAttributeManager::m_hOuter"
        // static metadata: MNetworkExcludeByName "VPhysicsCollisionAttribute_t::m_nEntityId"
        // static metadata: MNetworkExcludeByName "VPhysicsCollisionAttribute_t::m_nOwnerId"
        // static metadata: MNetworkExcludeByName "VPhysicsCollisionAttribute_t::m_nHierarchyId"
        // static metadata: MNetworkExcludeByName "CEconItemView::m_iInventoryPosition"
        // static metadata: MNetworkVarNames "bool m_bOwnerModelChanged"
        // static metadata: MNetworkVarNames "bool m_bIsGeneratingEconItem"
        // static metadata: MNetworkVarNames "bool m_bIsItemVisibleOnGeneratedEntity"
        // static metadata: MNetworkVarNames "bool m_bHideWearableButDrawAdditionalWearables"
        // static metadata: MNetworkVarNames "CHandle< CBaseAnimating> m_hAdditionalWearable"
        #pragma pack(push, 1)
        class CDOTAWearableItem : public source2sdk::server::CEconWearable
        {
        public:
            // metadata: MNetworkEnable
            bool m_bOwnerModelChanged; // 0x9a8            
            // metadata: MNetworkEnable
            bool m_bIsGeneratingEconItem; // 0x9a9            
            // metadata: MNetworkEnable
            bool m_bIsItemVisibleOnGeneratedEntity; // 0x9aa            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHideWearableButDrawAdditionalWearablesChanged"
            bool m_bHideWearableButDrawAdditionalWearables; // 0x9ab            
            // metadata: MNetworkEnable
            // m_hAdditionalWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseAnimatingActivity> m_hAdditionalWearable;
            char m_hAdditionalWearable[0x4]; // 0x9ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAWearableItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAWearableItem) == 0x9b0);
    };
};
