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
        // Enumerator count: 34
        // Alignment: 4
        // Size: 0x4
        enum class DOTAHUDVisibility_t : std::uint32_t
        {
            DOTA_HUD_VISIBILITY_INVALID = 0xffffffff,
            DOTA_HUD_VISIBILITY_TOP_TIMEOFDAY = 0x0,
            DOTA_HUD_VISIBILITY_TOP_HEROES = 0x1,
            DOTA_HUD_VISIBILITY_TOP_SCOREBOARD = 0x2,
            DOTA_HUD_VISIBILITY_ACTION_PANEL = 0x3,
            DOTA_HUD_VISIBILITY_ACTION_MINIMAP = 0x4,
            DOTA_HUD_VISIBILITY_INVENTORY_PANEL = 0x5,
            DOTA_HUD_VISIBILITY_INVENTORY_SHOP = 0x6,
            DOTA_HUD_VISIBILITY_INVENTORY_ITEMS = 0x7,
            DOTA_HUD_VISIBILITY_INVENTORY_QUICKBUY = 0x8,
            DOTA_HUD_VISIBILITY_INVENTORY_COURIER = 0x9,
            DOTA_HUD_VISIBILITY_INVENTORY_PROTECT = 0xa,
            DOTA_HUD_VISIBILITY_INVENTORY_GOLD = 0xb,
            DOTA_HUD_VISIBILITY_SHOP_SUGGESTEDITEMS = 0xc,
            DOTA_HUD_VISIBILITY_SHOP_COMMONITEMS = 0xd,
            DOTA_HUD_VISIBILITY_HERO_SELECTION_TEAMS = 0xe,
            DOTA_HUD_VISIBILITY_HERO_SELECTION_GAME_NAME = 0xf,
            DOTA_HUD_VISIBILITY_HERO_SELECTION_CLOCK = 0x10,
            DOTA_HUD_VISIBILITY_HERO_SELECTION_HEADER = 0x11,
            DOTA_HUD_VISIBILITY_TOP_MENU_BUTTONS = 0x12,
            DOTA_HUD_VISIBILITY_TOP_BAR_BACKGROUND = 0x13,
            DOTA_HUD_VISIBILITY_TOP_BAR_RADIANT_TEAM = 0x14,
            DOTA_HUD_VISIBILITY_TOP_BAR_DIRE_TEAM = 0x15,
            DOTA_HUD_VISIBILITY_TOP_BAR_SCORE = 0x16,
            DOTA_HUD_VISIBILITY_ENDGAME = 0x17,
            DOTA_HUD_VISIBILITY_ENDGAME_CHAT = 0x18,
            DOTA_HUD_VISIBILITY_QUICK_STATS = 0x19,
            DOTA_HUD_VISIBILITY_PREGAME_STRATEGYUI = 0x1a,
            DOTA_HUD_VISIBILITY_KILLCAM = 0x1b,
            DOTA_HUD_VISIBILITY_FIGHT_RECAP = 0x1c,
            DOTA_HUD_VISIBILITY_TOP_BAR = 0x1d,
            DOTA_HUD_CUSTOMUI_BEHIND_HUD_ELEMENTS = 0x1e,
            DOTA_HUD_VISIBILITY_AGHANIMS_STATUS = 0x1f,
            DOTA_HUD_VISIBILITY_COUNT = 0x20,
        };
    };
};
