#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "uint64 m_nInteractsAs"
        // static metadata: MNetworkVarNames "uint64 m_nInteractsWith"
        // static metadata: MNetworkVarNames "uint64 m_nInteractsExclude"
        // static metadata: MNetworkVarNames "uint32 m_nEntityId"
        // static metadata: MNetworkVarNames "uint32 m_nOwnerId"
        // static metadata: MNetworkVarNames "uint16 m_nHierarchyId"
        // static metadata: MNetworkVarNames "uint8 m_nCollisionGroup"
        // static metadata: MNetworkVarNames "uint8 m_nCollisionFunctionMask"
        #pragma pack(push, 1)
        struct VPhysicsCollisionAttribute_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            std::uint64_t m_nInteractsAs; // 0x8            
            // metadata: MNetworkEnable
            std::uint64_t m_nInteractsWith; // 0x10            
            // metadata: MNetworkEnable
            std::uint64_t m_nInteractsExclude; // 0x18            
            // metadata: MNetworkEnable
            std::uint32_t m_nEntityId; // 0x20            
            // metadata: MNetworkEnable
            std::uint32_t m_nOwnerId; // 0x24            
            // metadata: MNetworkEnable
            std::uint16_t m_nHierarchyId; // 0x28            
            // metadata: MNetworkEnable
            std::uint8_t m_nCollisionGroup; // 0x2a            
            // metadata: MNetworkEnable
            std::uint8_t m_nCollisionFunctionMask; // 0x2b            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nInteractsAs) == 0x8);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nInteractsWith) == 0x10);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nInteractsExclude) == 0x18);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nEntityId) == 0x20);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nOwnerId) == 0x24);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nHierarchyId) == 0x28);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nCollisionGroup) == 0x2a);
        static_assert(offsetof(source2sdk::client::VPhysicsCollisionAttribute_t, m_nCollisionFunctionMask) == 0x2b);
        
        static_assert(sizeof(source2sdk::client::VPhysicsCollisionAttribute_t) == 0x30);
    };
};
