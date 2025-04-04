#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x17f8
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lua : public client::CDOTA_Buff
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1708[0xe8]; // 0x1708
        bool m_bHasCustomTransmitterData; // 0x17f0        
        [[maybe_unused]] std::uint8_t pad_0x17f1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lua because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lua) == 0x17f8);
};
