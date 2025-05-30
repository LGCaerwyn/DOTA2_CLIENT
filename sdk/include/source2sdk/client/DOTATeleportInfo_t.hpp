#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x40
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flTime"
        // static metadata: MNetworkVarNames "Vector2D m_vPosition"
        // static metadata: MNetworkVarNames "bool m_bIsOutpost"
        #pragma pack(push, 1)
        struct DOTATeleportInfo_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTime; // 0x30            
            // metadata: MNetworkEnable
            Vector2D m_vPosition; // 0x34            
            // metadata: MNetworkEnable
            bool m_bIsOutpost; // 0x3c            
            uint8_t _pad003d[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTATeleportInfo_t, m_flTime) == 0x30);
        static_assert(offsetof(source2sdk::client::DOTATeleportInfo_t, m_vPosition) == 0x34);
        static_assert(offsetof(source2sdk::client::DOTATeleportInfo_t, m_bIsOutpost) == 0x3c);
        
        static_assert(sizeof(source2sdk::client::DOTATeleportInfo_t) == 0x40);
    };
};
