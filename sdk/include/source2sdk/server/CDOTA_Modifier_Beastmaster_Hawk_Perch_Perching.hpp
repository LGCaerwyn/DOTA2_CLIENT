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
    class CDOTA_Modifier_Beastmaster_Hawk_Perch_Perching : public client::CDOTA_Buff
    {
    public:
        int32_t perching_tree_height; // 0x1708        
        // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTree;
        char m_hTree[0x4]; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_Hawk_Perch_Perching because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Beastmaster_Hawk_Perch_Perching) == 0x1710);
};
