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
    // Size: 0x1710
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Muerta_PartingShot_ProjectileReturn : public client::CDOTA_Buff
    {
    public:
        int32_t m_nProjectileHandle; // 0x1708        
        // m_hPhysicalBody has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPhysicalBody;
        char m_hPhysicalBody[0x4]; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Muerta_PartingShot_ProjectileReturn because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Muerta_PartingShot_ProjectileReturn) == 0x1710);
};
