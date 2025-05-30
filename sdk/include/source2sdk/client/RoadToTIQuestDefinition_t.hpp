#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ERoadToTIQuestType.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/MatchID_t.hpp"

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
        // Size: 0x48
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct RoadToTIQuestDefinition_t
        {
        public:
            // metadata: MPropertyDescription "unique integer ID of this Road To TI quest within the challenge"
            // game bug: prop with no declared class info (RoadToTIQuestID_t)
            char m_unID[0x1]; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            // metadata: MPropertyDescription "Quest type (match or player)"
            source2sdk::client::ERoadToTIQuestType m_eQuestType; // 0x4            
            // metadata: MPropertyDescription "Period the quest represents"
            std::uint32_t m_unPeriod; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            // metadata: MPropertyDescription "Match ID for match quests"
            source2sdk::client::MatchID_t m_unMatchID; // 0x10            
            // metadata: MPropertyDescription "Series ID for match quests"
            std::uint32_t m_unSeriesID; // 0x18            
            // metadata: MPropertyDescription "League ID for match quests"
            std::uint32_t m_unLeagueID; // 0x1c            
            // metadata: MPropertyDescription "Player account ID for player quests"
            std::uint32_t m_unPlayerID; // 0x20            
            // metadata: MPropertyDescription "Team ID of the player or match winner"
            std::uint32_t m_unTeamID; // 0x24            
            // metadata: MPropertyDescription "Heroes available for the quest"
            // m_vecHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroID_t> m_vecHeroes;
            char m_vecHeroes[0x18]; // 0x28            
            // metadata: MPropertyDescription "True if this is a developer quest"
            bool m_bDeveloper; // 0x40            
            uint8_t _pad0041[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::RoadToTIQuestDefinition_t, m_unID) == 0x0);
        static_assert(offsetof(source2sdk::client::RoadToTIQuestDefinition_t, m_eQuestType) == 0x4);
        static_assert(offsetof(source2sdk::client::RoadToTIQuestDefinition_t, m_unPeriod) == 0x8);
        static_assert(offsetof(source2sdk::client::RoadToTIQuestDefinition_t, m_unMatchID) == 0x10);
        static_assert(offsetof(source2sdk::client::RoadToTIQuestDefinition_t, m_unSeriesID) == 0x18);
        static_assert(offsetof(source2sdk::client::RoadToTIQuestDefinition_t, m_unLeagueID) == 0x1c);
        static_assert(offsetof(source2sdk::client::RoadToTIQuestDefinition_t, m_unPlayerID) == 0x20);
        static_assert(offsetof(source2sdk::client::RoadToTIQuestDefinition_t, m_unTeamID) == 0x24);
        static_assert(offsetof(source2sdk::client::RoadToTIQuestDefinition_t, m_vecHeroes) == 0x28);
        static_assert(offsetof(source2sdk::client::RoadToTIQuestDefinition_t, m_bDeveloper) == 0x40);
        
        static_assert(sizeof(source2sdk::client::RoadToTIQuestDefinition_t) == 0x48);
    };
};
