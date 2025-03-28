#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Lycan_SummonWolves : public server::CDOTABaseAbility
    {
    public:
        char szUnitName[260]; // 0x5c8        
        int32_t wolf_index; // 0x6cc        
        float wolf_duration; // 0x6d0        
        [[maybe_unused]] std::uint8_t pad_0x6d4[0x4]; // 0x6d4
        // m_hExistingUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hExistingUnits;
        char m_hExistingUnits[0x18]; // 0x6d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Lycan_SummonWolves because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Lycan_SummonWolves) == 0x6f0);
};
