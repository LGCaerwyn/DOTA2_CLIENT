#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Passive_Mango_Tree : public client::CDOTA_Buff
    {
    public:
        // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTree;
        char m_hTree[0x4]; // 0x1708        
        int32_t m_nMangoSeconds; // 0x170c        
        client::CountdownTimer m_MangoTimer; // 0x1710        
        int32_t m_nRespawnSeconds; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4]; // 0x172c
        client::CountdownTimer m_RespawnTimer; // 0x1730        
        int32_t m_nMangosAvailable; // 0x1748        
        int32_t m_nChannelCount; // 0x174c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Passive_Mango_Tree because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Passive_Mango_Tree) == 0x1750);
};
