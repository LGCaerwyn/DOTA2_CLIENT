#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shadow_Demon_Shadow_Poison : public source2sdk::client::CDOTA_Buff
        {
        public:
            float stack_damage; // 0x1878            
            float bonus_stack_damage; // 0x187c            
            std::int32_t max_multiply_stacks; // 0x1880            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Shadow_Demon_Shadow_Poison because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Shadow_Demon_Shadow_Poison) == 0x1888);
    };
};
