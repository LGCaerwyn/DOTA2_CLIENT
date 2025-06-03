#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Track_Order_Issuer : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::PlayerID_t m_nIssuerPlayerIndex; // 0x1878            
            bool m_bTeamFirstCourier; // 0x187c            
            uint8_t _pad187d[0x3]; // 0x187d
            source2sdk::entity2::GameTime_t m_nPlayerCommandTime[24]; // 0x1880            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Track_Order_Issuer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Track_Order_Issuer) == 0x18e0);
    };
};
