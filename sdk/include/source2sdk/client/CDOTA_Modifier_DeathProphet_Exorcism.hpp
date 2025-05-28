#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct sSpiritInfo;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1908
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DeathProphet_Exorcism : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1888            
            std::int32_t spirit_speed; // 0x188c            
            std::int32_t max_distance; // 0x1890            
            std::int32_t give_up_distance; // 0x1894            
            std::int32_t heal_percent; // 0x1898            
            std::int32_t spirit_duration; // 0x189c            
            float ghost_spawn_rate; // 0x18a0            
            std::int32_t movement_bonus; // 0x18a4            
            std::int32_t m_iSpirits; // 0x18a8            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x18ac            
            source2sdk::entity2::GameTime_t m_fLastThinkTime; // 0x18b0            
            source2sdk::entity2::GameTime_t m_fSpawnTime; // 0x18b4            
            bool m_bFirstSpawn; // 0x18b8            
            bool m_bCommentedOnExpired; // 0x18b9            
            bool m_bForceExpired; // 0x18ba            
            uint8_t _pad18bb[0x5]; // 0x18bb
            // m_vecDeadHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecDeadHeroes;
            char m_vecDeadHeroes[0x18]; // 0x18c0            
            // m_vecSpirits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sSpiritInfo*> m_vecSpirits;
            char m_vecSpirits[0x18]; // 0x18d8            
            uint8_t _pad18f0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DeathProphet_Exorcism because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DeathProphet_Exorcism) == 0x1908);
    };
};
