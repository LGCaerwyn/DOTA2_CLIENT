#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

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
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "float m_flScattering"
        // static metadata: MNetworkVarNames "Color m_TintColor"
        // static metadata: MNetworkVarNames "float m_flAnisotropy"
        // static metadata: MNetworkVarNames "float m_flFadeSpeed"
        // static metadata: MNetworkVarNames "float m_flDrawDistance"
        // static metadata: MNetworkVarNames "float m_flFadeInStart"
        // static metadata: MNetworkVarNames "float m_flFadeInEnd"
        // static metadata: MNetworkVarNames "float m_flIndirectStrength"
        // static metadata: MNetworkVarNames "int m_nVolumeDepth"
        // static metadata: MNetworkVarNames "float m_fFirstVolumeSliceThickness"
        // static metadata: MNetworkVarNames "int m_nIndirectTextureDimX"
        // static metadata: MNetworkVarNames "int m_nIndirectTextureDimY"
        // static metadata: MNetworkVarNames "int m_nIndirectTextureDimZ"
        // static metadata: MNetworkVarNames "Vector m_vBoxMins"
        // static metadata: MNetworkVarNames "Vector m_vBoxMaxs"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartAnisoTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartScatterTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartDrawDistanceTime"
        // static metadata: MNetworkVarNames "float m_flStartAnisotropy"
        // static metadata: MNetworkVarNames "float m_flStartScattering"
        // static metadata: MNetworkVarNames "float m_flStartDrawDistance"
        // static metadata: MNetworkVarNames "float m_flDefaultAnisotropy"
        // static metadata: MNetworkVarNames "float m_flDefaultScattering"
        // static metadata: MNetworkVarNames "float m_flDefaultDrawDistance"
        // static metadata: MNetworkVarNames "bool m_bStartDisabled"
        // static metadata: MNetworkVarNames "bool m_bEnableIndirect"
        // static metadata: MNetworkVarNames "bool m_bIndirectUseLPVs"
        // static metadata: MNetworkVarNames "bool m_bIsMaster"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_hFogIndirectTexture"
        // static metadata: MNetworkVarNames "int m_nForceRefreshCount"
        // static metadata: MNetworkVarNames "float m_fNoiseSpeed"
        // static metadata: MNetworkVarNames "float m_fNoiseStrength"
        // static metadata: MNetworkVarNames "Vector m_vNoiseScale"
        // static metadata: MNetworkVarNames "float m_fWindSpeed"
        // static metadata: MNetworkVarNames "Vector m_vWindDirection"
        #pragma pack(push, 1)
        class C_EnvVolumetricFogController : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flScattering; // 0x510            
            // metadata: MNetworkEnable
            Color m_TintColor; // 0x514            
            // metadata: MNetworkEnable
            float m_flAnisotropy; // 0x518            
            // metadata: MNetworkEnable
            float m_flFadeSpeed; // 0x51c            
            // metadata: MNetworkEnable
            float m_flDrawDistance; // 0x520            
            // metadata: MNetworkEnable
            float m_flFadeInStart; // 0x524            
            // metadata: MNetworkEnable
            float m_flFadeInEnd; // 0x528            
            // metadata: MNetworkEnable
            float m_flIndirectStrength; // 0x52c            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeDepth; // 0x530            
            // metadata: MNetworkEnable
            float m_fFirstVolumeSliceThickness; // 0x534            
            // metadata: MNetworkEnable
            std::int32_t m_nIndirectTextureDimX; // 0x538            
            // metadata: MNetworkEnable
            std::int32_t m_nIndirectTextureDimY; // 0x53c            
            // metadata: MNetworkEnable
            std::int32_t m_nIndirectTextureDimZ; // 0x540            
            // metadata: MNetworkEnable
            Vector m_vBoxMins; // 0x544            
            // metadata: MNetworkEnable
            Vector m_vBoxMaxs; // 0x550            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x55c            
            uint8_t _pad055d[0x3]; // 0x55d
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartAnisoTime; // 0x560            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartScatterTime; // 0x564            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartDrawDistanceTime; // 0x568            
            // metadata: MNetworkEnable
            float m_flStartAnisotropy; // 0x56c            
            // metadata: MNetworkEnable
            float m_flStartScattering; // 0x570            
            // metadata: MNetworkEnable
            float m_flStartDrawDistance; // 0x574            
            // metadata: MNetworkEnable
            float m_flDefaultAnisotropy; // 0x578            
            // metadata: MNetworkEnable
            float m_flDefaultScattering; // 0x57c            
            // metadata: MNetworkEnable
            float m_flDefaultDrawDistance; // 0x580            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x584            
            // metadata: MNetworkEnable
            bool m_bEnableIndirect; // 0x585            
            // metadata: MNetworkEnable
            bool m_bIndirectUseLPVs; // 0x586            
            // metadata: MNetworkEnable
            bool m_bIsMaster; // 0x587            
            // metadata: MNetworkEnable
            // m_hFogIndirectTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogIndirectTexture;
            char m_hFogIndirectTexture[0x8]; // 0x588            
            // metadata: MNetworkEnable
            std::int32_t m_nForceRefreshCount; // 0x590            
            // metadata: MNetworkEnable
            float m_fNoiseSpeed; // 0x594            
            // metadata: MNetworkEnable
            float m_fNoiseStrength; // 0x598            
            // metadata: MNetworkEnable
            Vector m_vNoiseScale; // 0x59c            
            // metadata: MNetworkEnable
            float m_fWindSpeed; // 0x5a8            
            // metadata: MNetworkEnable
            Vector m_vWindDirection; // 0x5ac            
            bool m_bFirstTime; // 0x5b8            
            uint8_t _pad05b9[0x7];
            
            // Datamap fields:
            // void InputSetToDefaults; // 0x0
            // float InputSetScattering; // 0x0
            // float InputSetAnisotropy; // 0x0
            // float InputSetFadeSpeed; // 0x0
            // float InputSetDrawDistance; // 0x0
            // bool EnableIndirect; // 0x0
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
            // void ForceRefresh; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvVolumetricFogController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvVolumetricFogController) == 0x5c0);
    };
};
