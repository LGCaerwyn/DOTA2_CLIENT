#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_HallOfFame_Glow : public client::CDOTA_Buff
    {
    public:
        // m_vecGlowingPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::PlayerID_t> m_vecGlowingPlayerIDs;
        char m_vecGlowingPlayerIDs[0x18]; // 0x1708        
        // m_vecGlowingPlayerIDs2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::PlayerID_t> m_vecGlowingPlayerIDs2;
        char m_vecGlowingPlayerIDs2[0x18]; // 0x1720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_HallOfFame_Glow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_HallOfFame_Glow) == 0x1738);
};
