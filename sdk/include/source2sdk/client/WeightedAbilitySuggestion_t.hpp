#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"

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
        // Size: 0x8
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct WeightedAbilitySuggestion_t
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::AbilityID_t nSuggestion; // 0x0            
            // metadata: MNetworkEnable
            float fWeight; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::WeightedAbilitySuggestion_t, nSuggestion) == 0x0);
        static_assert(offsetof(source2sdk::client::WeightedAbilitySuggestion_t, fWeight) == 0x4);
        
        static_assert(sizeof(source2sdk::client::WeightedAbilitySuggestion_t) == 0x8);
    };
};
