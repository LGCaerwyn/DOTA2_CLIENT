#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/CourierState_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1968
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "PlayerID_t m_nSoleControllingPlayer"
    // static metadata: MNetworkVarNames "bool m_bFlyingCourier"
    // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
    // static metadata: MNetworkVarNames "CourierState_t m_nCourierState"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hCourierStateEntity"
    #pragma pack(push, 1)
    class C_DOTA_Unit_Courier : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        bool m_bUnitRespawned; // 0x1870        
        bool m_bPreUpdateFlyingCourier; // 0x1871        
        [[maybe_unused]] std::uint8_t pad_0x1872[0x2]; // 0x1872
        // metadata: MNetworkEnable
        client::PlayerID_t m_nSoleControllingPlayer; // 0x1874        
        // metadata: MNetworkEnable
        bool m_bFlyingCourier; // 0x1878        
        [[maybe_unused]] std::uint8_t pad_0x1879[0x3]; // 0x1879
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0x187c        
        // metadata: MNetworkEnable
        client::CourierState_t m_nCourierState; // 0x1880        
        // metadata: MNetworkEnable
        // m_hCourierStateEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hCourierStateEntity;
        char m_hCourierStateEntity[0x4]; // 0x1884        
        [[maybe_unused]] std::uint8_t pad_0x1888[0xe0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Unit_Courier because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Unit_Courier) == 0x1968);
};
