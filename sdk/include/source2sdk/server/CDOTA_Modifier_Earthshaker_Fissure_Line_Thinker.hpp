#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1770
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t fissure_radius; // 0x1708        
        float fissure_movement_speed; // 0x170c        
        float stun_duration; // 0x1710        
        float fissure_damage; // 0x1714        
        float free_pathing_linger_duration; // 0x1718        
        float fissure_max_distance_moved; // 0x171c        
        entity2::GameTime_t m_flLastThinkTime; // 0x1720        
        Vector m_vFissureStart; // 0x1724        
        Vector m_vFissureStep; // 0x1730        
        Vector m_vMoveDir; // 0x173c        
        int32_t m_nSegments; // 0x1748        
        float m_flDurationOriginal; // 0x174c        
        float m_flTotalDistanceMoved; // 0x1750        
        client::ParticleIndex_t m_nFissureEffectIndex; // 0x1754        
        // thinkerEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTA_BaseNPC*> thinkerEntities;
        char thinkerEntities[0x18]; // 0x1758        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Earthshaker_Fissure_Line_Thinker) == 0x1770);
};
