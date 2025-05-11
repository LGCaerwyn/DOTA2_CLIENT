#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/HeroPickType.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct HeroPickRecord_t
        {
        public:
            source2sdk::client::HeroPickType eType; // 0x0            
            source2sdk::client::HeroID_t nHeroID; // 0x4            
            std::int32_t nTeam; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::HeroPickRecord_t, eType) == 0x0);
        static_assert(offsetof(source2sdk::client::HeroPickRecord_t, nHeroID) == 0x4);
        static_assert(offsetof(source2sdk::client::HeroPickRecord_t, nTeam) == 0x8);
        
        static_assert(sizeof(source2sdk::client::HeroPickRecord_t) == 0xc);
    };
};
