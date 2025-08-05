#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/OverworldNodeID_t.hpp"
#include "source2sdk/client/OverworldRoomID_t.hpp"

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
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldRoom
        {
        public:
            source2sdk::client::OverworldRoomID_t m_unRoomID; // 0x0            
            uint8_t _pad0002[0x2]; // 0x2
            // metadata: MPropertyDescription "The left top of the Room, in 2d panel space."
            Vector2D m_vPos; // 0x4            
            // metadata: MPropertyDescription "The width and height of the Room, in 2d panel space"
            Vector2D m_vSize; // 0xc            
            uint8_t _pad0014[0x4]; // 0x14
            // metadata: MPropertyDescription "The Node IDs that belong to this room."
            // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::OverworldNodeID_t> m_vecNodes;
            char m_vecNodes[0x18]; // 0x18            
            // metadata: MPropertyDescription "This room becomes accessible when the given node is unlocked. If invalid, this room starts off accessible."
            source2sdk::client::OverworldNodeID_t m_unUnlockedByNodeID; // 0x30            
            uint8_t _pad0032[0x1e];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoom, m_unRoomID) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoom, m_vPos) == 0x4);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoom, m_vSize) == 0xc);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoom, m_vecNodes) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldRoom, m_unUnlockedByNodeID) == 0x30);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldRoom) == 0x50);
    };
};
