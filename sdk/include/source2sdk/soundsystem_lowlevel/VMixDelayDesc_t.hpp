#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/VMixFilterDesc_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x28
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VMixDelayDesc_t
        {
        public:
            source2sdk::soundsystem_lowlevel::VMixFilterDesc_t m_feedbackFilter; // 0x0            
            bool m_bEnableFilter; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            float m_flDelay; // 0x14            
            float m_flDirectGain; // 0x18            
            float m_flDelayGain; // 0x1c            
            float m_flFeedbackGain; // 0x20            
            float m_flWidth; // 0x24            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDelayDesc_t, m_feedbackFilter) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDelayDesc_t, m_bEnableFilter) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDelayDesc_t, m_flDelay) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDelayDesc_t, m_flDirectGain) == 0x18);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDelayDesc_t, m_flDelayGain) == 0x1c);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDelayDesc_t, m_flFeedbackGain) == 0x20);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixDelayDesc_t, m_flWidth) == 0x24);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixDelayDesc_t) == 0x28);
    };
};
