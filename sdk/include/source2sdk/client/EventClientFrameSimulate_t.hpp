#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EngineLoopState_t.hpp"

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
        // Size: 0x38
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct EventClientFrameSimulate_t
        {
        public:
            source2sdk::client::EngineLoopState_t m_LoopState; // 0x0            
            float m_flRealTime; // 0x28            
            float m_flFrameTime; // 0x2c            
            bool m_bScheduleSendTickPacket; // 0x30            
            uint8_t _pad0031[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EventClientFrameSimulate_t, m_LoopState) == 0x0);
        static_assert(offsetof(source2sdk::client::EventClientFrameSimulate_t, m_flRealTime) == 0x28);
        static_assert(offsetof(source2sdk::client::EventClientFrameSimulate_t, m_flFrameTime) == 0x2c);
        static_assert(offsetof(source2sdk::client::EventClientFrameSimulate_t, m_bScheduleSendTickPacket) == 0x30);
        
        static_assert(sizeof(source2sdk::client::EventClientFrameSimulate_t) == 0x38);
    };
};
