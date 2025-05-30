#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CShmupBossBodyPart.hpp"

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
        // Size: 0x48
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupBossDefinition
        {
        public:
            // m_vecBodyParts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CShmupBossBodyPart> m_vecBodyParts;
            char m_vecBodyParts[0x18]; // 0x0            
            float m_flIntroDuration; // 0x18            
            float m_flMouthLaserChargeTime; // 0x1c            
            float m_flMouthLaserDuration; // 0x20            
            float m_flWingBarrageChargeTime; // 0x24            
            float m_flWingBarrageDuration; // 0x28            
            std::int32_t m_nSplinterBlastCount; // 0x2c            
            float m_fSplinterBlastChargeTime; // 0x30            
            float m_flSplinterBlastDuration; // 0x34            
            float m_flColdEmbraceDuration; // 0x38            
            Vector2D m_vIdlePosition; // 0x3c            
            uint8_t _pad0044[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_vecBodyParts) == 0x0);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flIntroDuration) == 0x18);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flMouthLaserChargeTime) == 0x1c);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flMouthLaserDuration) == 0x20);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flWingBarrageChargeTime) == 0x24);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flWingBarrageDuration) == 0x28);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_nSplinterBlastCount) == 0x2c);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_fSplinterBlastChargeTime) == 0x30);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flSplinterBlastDuration) == 0x34);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_flColdEmbraceDuration) == 0x38);
        static_assert(offsetof(source2sdk::client::CShmupBossDefinition, m_vIdlePosition) == 0x3c);
        
        static_assert(sizeof(source2sdk::client::CShmupBossDefinition) == 0x48);
    };
};
