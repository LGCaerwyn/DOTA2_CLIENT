#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CDOTA_BaseNPC_Hero_KillInfo_t
        {
        public:
            CUtlSymbolLarge m_victimname; // 0x0            
            CUtlSymbolLarge m_inflictorname; // 0x8            
            bool m_bEnemyInFOW; // 0x10            
            bool m_bWasFirstBlood; // 0x11            
            uint8_t _pad0012[0x2]; // 0x12
            std::int32_t m_iKillCount; // 0x14            
            float m_flBlinkTime; // 0x18            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t, m_victimname) == 0x0);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t, m_inflictorname) == 0x8);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t, m_bEnemyInFOW) == 0x10);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t, m_bWasFirstBlood) == 0x11);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t, m_iKillCount) == 0x14);
        static_assert(offsetof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t, m_flBlinkTime) == 0x18);
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Hero_KillInfo_t) == 0x20);
    };
};
