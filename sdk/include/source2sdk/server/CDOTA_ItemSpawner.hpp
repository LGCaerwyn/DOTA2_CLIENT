#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4e0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_ItemSpawner : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_szItemName; // 0x4d8            
            
            // Datamap fields:
            // void InputSpawnItem; // 0x0
            // CUtlSymbolLarge InputSetItemName; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_ItemSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_ItemSpawner) == 0x4e0);
    };
};
