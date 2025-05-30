#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 31
        // Alignment: 4
        // Size: 0x4
        enum class DOTAVisualNovelDialogueEffect_t : std::uint32_t
        {
            VN_DIALOGUE_EFFECT_NONE = 0x0,
            VN_DIALOGUE_EFFECT_ENTRANCE_SLIDE_SLOW = 0x1,
            VN_DIALOGUE_EFFECT_ENTRANCE_SLIDE_FAST = 0x2,
            VN_DIALOGUE_EFFECT_ENTRANCE_RISING = 0x4,
            VN_DIALOGUE_EFFECT_ENTRANCE_FALLING = 0x8,
            VN_DIALOGUE_EFFECT_ENTRANCE_LEFT = 0x10,
            VN_DIALOGUE_EFFECT_ENTRANCE_RIGHT = 0x20,
            VN_DIALOGUE_EFFECT_EXIT_INSTANT = 0x40,
            VN_DIALOGUE_EFFECT_EXIT_SLIDE_SLOW = 0x80,
            VN_DIALOGUE_EFFECT_EXIT_SLIDE_FAST = 0x100,
            VN_DIALOGUE_EFFECT_EXIT_FALLING = 0x200,
            VN_DIALOGUE_EFFECT_EXIT_RISING = 0x400,
            VN_DIALOGUE_EFFECT_WINDOW_SHAKE = 0x800,
            VN_DIALOGUE_EFFECT_PORTRAIT_SHAKE = 0x1000,
            VN_DIALOGUE_EFFECT_PORTRAIT_WEAVE = 0x2000,
            VN_DIALOGUE_EFFECT_PORTRAIT_FLIP = 0x4000,
            VN_DIALOGUE_EFFECT_TEXT_INSTANT = 0x8000,
            VN_DIALOGUE_EFFECT_TEXT_FAST = 0x10000,
            VN_DIALOGUE_EFFECT_TEXT_BOLD = 0x20000,
            VN_DIALOGUE_EFFECT_TEXT_SMALL = 0x40000,
            VN_DIALOGUE_EFFECT_NO_WAIT = 0x80000,
            VN_DIALOGUE_EFFECT_ACTOR_ANGER = 0x100000,
            VN_DIALOGUE_EFFECT_ACTOR_ANXIETY = 0x200000,
            VN_DIALOGUE_EFFECT_ACTOR_SWEATDROP = 0x400000,
            VN_DIALOGUE_EFFECT_POPUP_WET = 0x800000,
            VN_DIALOGUE_EFFECT_POPUP_FOCUS_BOTTOM = 0x1000000,
            VN_DIALOGUE_EFFECT_POPUP_FOCUS_TOP = 0x2000000,
            VN_DIALOGUE_EFFECT_PORTRAIT_BIG = 0x4000000,
            VN_DIALOGUE_EFFECT_CLEAR_STAGE = 0x8000000,
            VN_DIALOGUE_EFFECT_PORTRAIT_JITTER = 0x10000000,
            VN_DIALOGUE_EFFECT_PORTRAIT_BORDER_FROZEN = 0x20000000,
        };
    };
};
