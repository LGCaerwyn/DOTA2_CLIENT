#pragma once
#include "source2sdk/server/CDOTA_Modifier_PersistentInvisibility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Oracle_FalsePromise_Invis : public server::CDOTA_Modifier_PersistentInvisibility
    {
    public:
        float shard_spell_amp_bonus; // 0x1718        
        float shard_bat_bonus; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Oracle_FalsePromise_Invis because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Oracle_FalsePromise_Invis) == 0x1720);
};
