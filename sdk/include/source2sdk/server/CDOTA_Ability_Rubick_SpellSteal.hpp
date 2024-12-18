#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CDOTABaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "char m_ActivityModifier"
    // static metadata: MNetworkVarNames "float m_fStolenCastPoint"
    #pragma pack(push, 1)
    class CDOTA_Ability_Rubick_SpellSteal : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        char m_ActivityModifier[256]; // 0x5c8        
        // metadata: MNetworkEnable
        float m_fStolenCastPoint; // 0x6c8        
        // m_hStealTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hStealTarget;
        char m_hStealTarget[0x4]; // 0x6cc        
        // m_hStealAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTABaseAbility> m_hStealAbility;
        char m_hStealAbility[0x4]; // 0x6d0        
        client::ParticleIndex_t m_nFXIndex; // 0x6d4        
        int32_t m_hProjectile; // 0x6d8        
        [[maybe_unused]] std::uint8_t pad_0x6dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Rubick_SpellSteal because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Rubick_SpellSteal) == 0x6e0);
};
