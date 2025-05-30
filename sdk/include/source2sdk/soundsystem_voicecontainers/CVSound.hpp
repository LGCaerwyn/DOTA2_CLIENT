#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CAudioSentence.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVSoundFormat_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x80
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVSound
        {
        public:
            std::int32_t m_nRate; // 0x0            
            source2sdk::soundsystem_voicecontainers::CVSoundFormat_t m_nFormat; // 0x4            
            uint8_t _pad0005[0x3]; // 0x5
            std::uint32_t m_nChannels; // 0x8            
            std::int32_t m_nLoopStart; // 0xc            
            std::uint32_t m_nSampleCount; // 0x10            
            float m_flDuration; // 0x14            
            // m_Sentences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_voicecontainers::CAudioSentence> m_Sentences;
            char m_Sentences[0x18]; // 0x18            
            std::uint32_t m_nStreamingSize; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            // m_nSeekTable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nSeekTable;
            char m_nSeekTable[0x18]; // 0x38            
            std::int32_t m_nLoopEnd; // 0x50            
            uint8_t _pad0054[0x4]; // 0x54
            // metadata: MFgdFromSchemaCompletelySkipField
            CUtlBinaryBlock m_encodedHeader; // 0x58            
            uint8_t _pad0070[0x10];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nRate) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nFormat) == 0x4);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nChannels) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nLoopStart) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nSampleCount) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_flDuration) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_Sentences) == 0x18);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nStreamingSize) == 0x30);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nSeekTable) == 0x38);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_nLoopEnd) == 0x50);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVSound, m_encodedHeader) == 0x58);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVSound) == 0x80);
    };
};
