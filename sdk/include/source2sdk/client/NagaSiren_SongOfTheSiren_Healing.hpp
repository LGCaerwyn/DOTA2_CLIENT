#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class NagaSiren_SongOfTheSiren_Healing : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t heal_pct; // 0x1878            
            std::int32_t mana_pct; // 0x187c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in NagaSiren_SongOfTheSiren_Healing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::NagaSiren_SongOfTheSiren_Healing) == 0x1880);
    };
};
