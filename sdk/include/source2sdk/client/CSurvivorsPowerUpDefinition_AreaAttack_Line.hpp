#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUpDefinition_AreaAttack.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x870
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsPowerUpDefinition_AreaAttack_Line : public source2sdk::client::CSurvivorsPowerUpDefinition_AreaAttack
        {
        public:
            bool m_bUseFacingDirection; // 0x868            
            uint8_t _pad0869[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUpDefinition_AreaAttack_Line because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUpDefinition_AreaAttack_Line) == 0x870);
    };
};
