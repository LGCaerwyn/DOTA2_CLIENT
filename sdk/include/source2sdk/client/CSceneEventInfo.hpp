#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/SceneEventId_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x50
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CSceneEventInfo
        {
        public:
            std::int32_t m_iLayer; // 0x0            
            std::int32_t m_iPriority; // 0x4            
            source2sdk::animationsystem::HSequence m_hSequence; // 0x8            
            float m_flWeight; // 0xc            
            bool m_bHasArrived; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            std::int32_t m_nType; // 0x14            
            source2sdk::entity2::GameTime_t m_flNext; // 0x18            
            bool m_bIsGesture; // 0x1c            
            bool m_bShouldRemove; // 0x1d            
            uint8_t _pad001e[0x26]; // 0x1e
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x44            
            source2sdk::client::SceneEventId_t m_nSceneEventId; // 0x48            
            bool m_bClientSide; // 0x4c            
            bool m_bStarted; // 0x4d            
            uint8_t _pad004e[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_iLayer) == 0x0);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_iPriority) == 0x4);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_hSequence) == 0x8);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_flWeight) == 0xc);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bHasArrived) == 0x10);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_nType) == 0x14);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_flNext) == 0x18);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bIsGesture) == 0x1c);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bShouldRemove) == 0x1d);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_hTarget) == 0x44);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_nSceneEventId) == 0x48);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bClientSide) == 0x4c);
        static_assert(offsetof(source2sdk::client::CSceneEventInfo, m_bStarted) == 0x4d);
        
        static_assert(sizeof(source2sdk::client::CSceneEventInfo) == 0x50);
    };
};
