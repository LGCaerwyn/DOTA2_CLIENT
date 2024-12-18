#pragma once
#include "source2sdk/server/CDOTA_Modifier_Cyclone.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Eul_Cyclone : public server::CDOTA_Modifier_Cyclone
    {
    public:
        // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBlocker;
        char m_hBlocker[0x4]; // 0x1720        
        bool m_bBlockerCreated; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1725[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Eul_Cyclone because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Eul_Cyclone) == 0x1728);
};
