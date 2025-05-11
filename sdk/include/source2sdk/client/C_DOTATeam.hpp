#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_Team.hpp"

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
        // Standard-layout class: false
        // Size: 0x620
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_iHeroKills"
        // static metadata: MNetworkVarNames "int m_iTowerKills"
        // static metadata: MNetworkVarNames "int m_iBarracksKills"
        // static metadata: MNetworkVarNames "uint32 m_unTournamentTeamID"
        // static metadata: MNetworkVarNames "uint64 m_ulTeamLogo"
        // static metadata: MNetworkVarNames "uint64 m_ulTeamBaseLogo"
        // static metadata: MNetworkVarNames "uint64 m_ulTeamBannerLogo"
        // static metadata: MNetworkVarNames "bool m_bTeamComplete"
        // static metadata: MNetworkVarNames "bool m_bTeamIsHomeTeam"
        // static metadata: MNetworkVarNames "bool m_bTeamCanSeeExactRoshanTimer"
        // static metadata: MNetworkVarNames "bool m_bTeamCanSeeNextPowerRune"
        // static metadata: MNetworkVarNames "Color m_CustomHealthbarColor"
        // static metadata: MNetworkVarNames "char m_szTag"
        #pragma pack(push, 1)
        class C_DOTATeam : public source2sdk::client::C_Team
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iHeroKills; // 0x5c8            
            // metadata: MNetworkEnable
            std::int32_t m_iTowerKills; // 0x5cc            
            // metadata: MNetworkEnable
            std::int32_t m_iBarracksKills; // 0x5d0            
            // metadata: MNetworkEnable
            std::uint32_t m_unTournamentTeamID; // 0x5d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_ulTeamLogo; // 0x5d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_ulTeamBaseLogo; // 0x5e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            std::uint64_t m_ulTeamBannerLogo; // 0x5e8            
            // metadata: MNetworkEnable
            bool m_bTeamComplete; // 0x5f0            
            // metadata: MNetworkEnable
            bool m_bTeamIsHomeTeam; // 0x5f1            
            // metadata: MNetworkEnable
            bool m_bTeamCanSeeExactRoshanTimer; // 0x5f2            
            // metadata: MNetworkEnable
            bool m_bTeamCanSeeNextPowerRune; // 0x5f3            
            // metadata: MNetworkEnable
            Color m_CustomHealthbarColor; // 0x5f4            
            // metadata: MNetworkEnable
            char m_szTag[33]; // 0x5f8            
            uint8_t _pad0619[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTATeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTATeam) == 0x620);
    };
};
