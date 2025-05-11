#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1800
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KeeperOfTheLight_Recall : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bWasAttacked; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            // m_hDestinationTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDestinationTarget;
            char m_hDestinationTarget[0x4]; // 0x17fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Recall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_KeeperOfTheLight_Recall) == 0x1800);
    };
};
