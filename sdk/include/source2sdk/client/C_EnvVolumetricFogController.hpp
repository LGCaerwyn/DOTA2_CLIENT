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
        // Size: 0x698
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
            float m_flScattering; // 0x5e8            
            // metadata: MNetworkEnable
            Color m_TintColor; // 0x5ec            
            // metadata: MNetworkEnable
            float m_flAnisotropy; // 0x5f0            
            // metadata: MNetworkEnable
            float m_flFadeSpeed; // 0x5f4            
            // metadata: MNetworkEnable
            float m_flDrawDistance; // 0x5f8            
            // metadata: MNetworkEnable
            float m_flFadeInStart; // 0x5fc            
            // metadata: MNetworkEnable
            float m_flFadeInEnd; // 0x600            
            // metadata: MNetworkEnable
            float m_flIndirectStrength; // 0x604            
            // metadata: MNetworkEnable
            std::int32_t m_nVolumeDepth; // 0x608            
            // metadata: MNetworkEnable
            float m_fFirstVolumeSliceThickness; // 0x60c            
            // metadata: MNetworkEnable
            std::int32_t m_nIndirectTextureDimX; // 0x610            
            // metadata: MNetworkEnable
            std::int32_t m_nIndirectTextureDimY; // 0x614            
            // metadata: MNetworkEnable
            std::int32_t m_nIndirectTextureDimZ; // 0x618            
            // metadata: MNetworkEnable
            Vector m_vBoxMins; // 0x61c            
            // metadata: MNetworkEnable
            Vector m_vBoxMaxs; // 0x628            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x634            
            uint8_t _pad0635[0x3]; // 0x635
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartAnisoTime; // 0x638            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartScatterTime; // 0x63c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartDrawDistanceTime; // 0x640            
            // metadata: MNetworkEnable
            float m_flStartAnisotropy; // 0x644            
            // metadata: MNetworkEnable
            float m_flStartScattering; // 0x648            
            // metadata: MNetworkEnable
            float m_flStartDrawDistance; // 0x64c            
            // metadata: MNetworkEnable
            float m_flDefaultAnisotropy; // 0x650            
            // metadata: MNetworkEnable
            float m_flDefaultScattering; // 0x654            
            // metadata: MNetworkEnable
            float m_flDefaultDrawDistance; // 0x658            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x65c            
            // metadata: MNetworkEnable
            bool m_bEnableIndirect; // 0x65d            
            // metadata: MNetworkEnable
            bool m_bIsMaster; // 0x65e            
            uint8_t _pad065f[0x1]; // 0x65f
            // metadata: MNetworkEnable
            // m_hFogIndirectTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hFogIndirectTexture;
            char m_hFogIndirectTexture[0x8]; // 0x660            
            // metadata: MNetworkEnable
            std::int32_t m_nForceRefreshCount; // 0x668            
            // metadata: MNetworkEnable
            float m_fNoiseSpeed; // 0x66c            
            // metadata: MNetworkEnable
            float m_fNoiseStrength; // 0x670            
            // metadata: MNetworkEnable
            Vector m_vNoiseScale; // 0x674            
            // metadata: MNetworkEnable
            float m_fWindSpeed; // 0x680            
            // metadata: MNetworkEnable
            Vector m_vWindDirection; // 0x684            
            bool m_bFirstTime; // 0x690            
            uint8_t _pad0691[0x7];
            
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
        
        static_assert(sizeof(source2sdk::client::C_EnvVolumetricFogController) == 0x698);
    };
};
