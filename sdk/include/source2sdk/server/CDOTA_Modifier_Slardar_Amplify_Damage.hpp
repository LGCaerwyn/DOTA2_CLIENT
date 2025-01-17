#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Slardar_Amplify_Damage : public client::CDOTA_Buff
    {
    public:
        int32_t armor_reduction; // 0x1708        
        float scepter_delay; // 0x170c        
        int32_t undispellable; // 0x1710        
        float puddle_radius; // 0x1714        
        float puddle_duration; // 0x1718        
        Vector m_vecLastPuddle; // 0x171c        
        // m_hPuddle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPuddle;
        char m_hPuddle[0x4]; // 0x1728        
        int32_t m_nSelfBuffSerialNumber; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slardar_Amplify_Damage because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slardar_Amplify_Damage) == 0x1730);
};
