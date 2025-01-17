#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/TrackedStatNetworkData_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x548
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "TrackedStatNetworkData_t m_vecTrackedStats"
    #pragma pack(push, 1)
    class CBaseTrackedStatsEntity : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTrackedStatsChanged"
        // m_vecTrackedStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::TrackedStatNetworkData_t> m_vecTrackedStats;
        char m_vecTrackedStats[0x68]; // 0x4e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseTrackedStatsEntity because it is not a standard-layout class
    static_assert(sizeof(CBaseTrackedStatsEntity) == 0x548);
};
