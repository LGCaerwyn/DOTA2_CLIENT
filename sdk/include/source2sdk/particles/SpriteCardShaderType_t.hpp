#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class SpriteCardShaderType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Default"
            SPRITECARD_SHADER_BASE = 0x0,
            // MPropertyFriendlyName "Custom"
            SPRITECARD_SHADER_CUSTOM = 0x1,
        };
    };
};
