#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Item_Physical.hpp"

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
        // Size: 0x7d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_Tombstone_Drop : public source2sdk::server::CDOTA_Item_Physical
        {
        public:
            std::int32_t m_iTempViewer; // 0x7d0            
            std::int32_t m_iTeam; // 0x7d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Tombstone_Drop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_Tombstone_Drop) == 0x7d8);
    };
};
