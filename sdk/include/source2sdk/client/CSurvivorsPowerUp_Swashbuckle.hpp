#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUp.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x728
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp_Swashbuckle : public source2sdk::client::CSurvivorsPowerUp
        {
        public:
            uint8_t _pad0608[0x40]; // 0x608
            // m_sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticle;
            char m_sParticle[0xe0]; // 0x648            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_Swashbuckle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_Swashbuckle) == 0x728);
    };
};
