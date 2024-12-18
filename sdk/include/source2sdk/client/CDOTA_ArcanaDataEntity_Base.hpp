#pragma once
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x30
    // Has VTable
    // MConstructibleClassBase
    #pragma pack(push, 1)
    class CDOTA_ArcanaDataEntity_Base
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkChangeAccessorFieldPathIndex
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_ArcanaDataEntity_Base, __m_pChainEntity) == 0x8);
    
    static_assert(sizeof(CDOTA_ArcanaDataEntity_Base) == 0x30);
};
