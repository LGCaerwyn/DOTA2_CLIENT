#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CDOTA_BuffParticle
        {
        public:
            source2sdk::client::ParticleIndex_t m_iIndex; // 0x0            
            std::int32_t m_iPriority; // 0x4            
            bool m_bDestroyImmediatly; // 0x8            
            bool m_bStatusEffect; // 0x9            
            bool m_bHeroEffect; // 0xa            
            bool m_bOverheadEffectOffset; // 0xb            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTA_BuffParticle, m_iIndex) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTA_BuffParticle, m_iPriority) == 0x4);
        static_assert(offsetof(source2sdk::client::CDOTA_BuffParticle, m_bDestroyImmediatly) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTA_BuffParticle, m_bStatusEffect) == 0x9);
        static_assert(offsetof(source2sdk::client::CDOTA_BuffParticle, m_bHeroEffect) == 0xa);
        static_assert(offsetof(source2sdk::client::CDOTA_BuffParticle, m_bOverheadEffectOffset) == 0xb);
        
        static_assert(sizeof(source2sdk::client::CDOTA_BuffParticle) == 0xc);
    };
};
