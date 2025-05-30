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
        // Enumerator count: 46
        // Alignment: 4
        // Size: 0x4
        enum class DOTA_COMBATLOG_TYPES : std::uint32_t
        {
            DOTA_COMBATLOG_INVALID = 0xffffffff,
            DOTA_COMBATLOG_DAMAGE = 0x0,
            DOTA_COMBATLOG_HEAL = 0x1,
            DOTA_COMBATLOG_MODIFIER_ADD = 0x2,
            DOTA_COMBATLOG_MODIFIER_REMOVE = 0x3,
            DOTA_COMBATLOG_DEATH = 0x4,
            DOTA_COMBATLOG_ABILITY = 0x5,
            DOTA_COMBATLOG_ITEM = 0x6,
            DOTA_COMBATLOG_LOCATION = 0x7,
            DOTA_COMBATLOG_GOLD = 0x8,
            DOTA_COMBATLOG_GAME_STATE = 0x9,
            DOTA_COMBATLOG_XP = 0xa,
            DOTA_COMBATLOG_PURCHASE = 0xb,
            DOTA_COMBATLOG_BUYBACK = 0xc,
            DOTA_COMBATLOG_ABILITY_TRIGGER = 0xd,
            DOTA_COMBATLOG_PLAYERSTATS = 0xe,
            DOTA_COMBATLOG_MULTIKILL = 0xf,
            DOTA_COMBATLOG_KILLSTREAK = 0x10,
            DOTA_COMBATLOG_TEAM_BUILDING_KILL = 0x11,
            DOTA_COMBATLOG_FIRST_BLOOD = 0x12,
            DOTA_COMBATLOG_MODIFIER_STACK_EVENT = 0x13,
            DOTA_COMBATLOG_NEUTRAL_CAMP_STACK = 0x14,
            DOTA_COMBATLOG_PICKUP_RUNE = 0x15,
            DOTA_COMBATLOG_REVEALED_INVISIBLE = 0x16,
            DOTA_COMBATLOG_HERO_SAVED = 0x17,
            DOTA_COMBATLOG_MANA_RESTORED = 0x18,
            DOTA_COMBATLOG_HERO_LEVELUP = 0x19,
            DOTA_COMBATLOG_BOTTLE_HEAL_ALLY = 0x1a,
            DOTA_COMBATLOG_ENDGAME_STATS = 0x1b,
            DOTA_COMBATLOG_INTERRUPT_CHANNEL = 0x1c,
            DOTA_COMBATLOG_ALLIED_GOLD = 0x1d,
            DOTA_COMBATLOG_AEGIS_TAKEN = 0x1e,
            DOTA_COMBATLOG_MANA_DAMAGE = 0x1f,
            DOTA_COMBATLOG_PHYSICAL_DAMAGE_PREVENTED = 0x20,
            DOTA_COMBATLOG_UNIT_SUMMONED = 0x21,
            DOTA_COMBATLOG_ATTACK_EVADE = 0x22,
            DOTA_COMBATLOG_TREE_CUT = 0x23,
            DOTA_COMBATLOG_SUCCESSFUL_SCAN = 0x24,
            DOTA_COMBATLOG_END_KILLSTREAK = 0x25,
            DOTA_COMBATLOG_BLOODSTONE_CHARGE = 0x26,
            DOTA_COMBATLOG_CRITICAL_DAMAGE = 0x27,
            DOTA_COMBATLOG_SPELL_ABSORB = 0x28,
            DOTA_COMBATLOG_UNIT_TELEPORTED = 0x29,
            DOTA_COMBATLOG_KILL_EATER_EVENT = 0x2a,
            DOTA_COMBATLOG_NEUTRAL_ITEM_EARNED = 0x2b,
            DOTA_COMBATLOG_STAT_TRACKER_PLAYER = 0x2c,
        };
    };
};
