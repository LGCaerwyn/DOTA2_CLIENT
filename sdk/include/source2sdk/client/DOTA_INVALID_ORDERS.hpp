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
        // Enumerator count: 124
        // Alignment: 4
        // Size: 0x4
        enum class DOTA_INVALID_ORDERS : std::uint32_t
        {
            DOTA_ORDER_SUCCESS = 0xffffffff,
            DOTA_INVALID_ORDER_NOT_CONTROLLABLE_BY_PLAYER = 0x0,
            DOTA_INVALID_ORDER_UNIT_IS_NOT_NPC = 0x1,
            DOTA_INVALID_ORDER_BAD_ABILITY_ENTITY = 0x2,
            DOTA_INVALID_ORDER_UNRECOGNIZED_ORDER = 0x3,
            DOTA_INVALID_ORDER_ABILITY_REQUIRED = 0x4,
            DOTA_INVALID_ORDER_NPC_TARGET_REQUIRED = 0x5,
            DOTA_INVALID_ORDER_TARGET_TREE_INDEX_NOT_A_TREE = 0x6,
            DOTA_INVALID_ORDER_TARGET_ENTITY_INDEX_OUT_OF_RANGE = 0x7,
            DOTA_INVALID_ORDER_ABILITY_NOT_AN_ITEM = 0x8,
            DOTA_INVALID_ORDER_PHYSICAL_ITEM_TARGET_REQUIRED = 0x9,
            DOTA_INVALID_ORDER_RUNE_TARGET_REQUIRED = 0xa,
            DOTA_INVALID_ORDER_ABILITY_NOT_OWNED_BY_UNIT = 0xb,
            DOTA_INVALID_ORDER_ABILITY_CANT_BE_UPGRADED = 0xc,
            DOTA_INVALID_ORDER_NO_POINTS_FOR_ABILITY_UPGRADE = 0xd,
            DOTA_INVALID_ORDER_NOT_ENOUGH_MANA = 0xe,
            DOTA_INVALID_ORDER_ABILITY_IN_COOLDOWN = 0xf,
            DOTA_INVALID_ORDER_ABILITY_NOT_LEARNED = 0x10,
            DOTA_INVALID_ORDER_CANT_CAST_PASSIVE_ABILITY = 0x11,
            DOTA_INVALID_ORDER_PHANTOM_TARGET = 0x12,
            DOTA_INVALID_ORDER_DEAD_TARGET = 0x13,
            DOTA_INVALID_ORDER_UNIT_IS_DEAD = 0x14,
            DOTA_INVALID_ORDER_TARGET_MAGIC_IMMUNE_ENEMY = 0x15,
            DOTA_INVALID_ORDER_TARGET_INVULNERABLE = 0x16,
            DOTA_INVALID_ORDER_TARGET_ATTACK_IMMUNE = 0x17,
            DOTA_INVALID_ORDER_UNIT_SILENCED = 0x18,
            DOTA_INVALID_ORDER_ABILITY_CANT_BE_TOGGLED = 0x19,
            DOTA_INVALID_ORDER_TARGET_CANT_BE_SEEN = 0x1a,
            DOTA_INVALID_ORDER_TARGET_INVISIBLE = 0x1b,
            DOTA_INVALID_ORDER_HERO_CANT_BE_DENIED = 0x1c,
            DOTA_INVALID_ORDER_CANT_CAST_ON_TEAMMATE = 0x1d,
            DOTA_INVALID_ORDER_CANT_CAST_ON_ENEMY = 0x1e,
            DOTA_INVALID_ORDER_UNIT_CANT_MOVE = 0x1f,
            DOTA_INVALID_ORDER_CANT_CAST_ON_ATTACK_IMMUNE = 0x20,
            DOTA_INVALID_ORDER_PURCHASE_INVALID_ITEM = 0x21,
            DOTA_INVALID_ORDER_ITEM_NOT_IN_INVENTORY = 0x22,
            DOTA_INVALID_ORDER_ITEM_NOT_IN_UNIT_INVENTORY = 0x23,
            DOTA_INVALID_ORDER_TARGET_UNSELECTABLE = 0x24,
            DOTA_INVALID_ORDER_ITEM_NOT_IN_ACTIVE_INVENTORY = 0x25,
            DOTA_INVALID_ORDER_UNIT_CANT_PICK_UP_RUNES = 0x26,
            DOTA_INVALID_ORDER_UNIT_CANT_MANIPULATE_ITEMS = 0x27,
            DOTA_INVALID_ORDER_UNIT_IS_ILLUSION = 0x28,
            DOTA_INVALID_ORDER_UNIT_CANT_ATTACK = 0x29,
            DOTA_INVALID_ORDER_ITEM_CANT_BE_DROPPED = 0x2a,
            DOTA_INVALID_ORDER_TARGET_TREE_NOT_ACTIVE = 0x2b,
            DOTA_INVALID_ORDER_ABILITY_CANT_AUTO_CAST = 0x2c,
            DOTA_INVALID_ORDER_TARGET_POSITION_OFF_MAP = 0x2d,
            DOTA_INVALID_ORDER_UNIT_CANT_MOVE_TARGET_OUT_OF_RANGE = 0x2e,
            DOTA_INVALID_ORDER_CANT_CAST_ON_HERO = 0x2f,
            DOTA_INVALID_ORDER_CANT_CAST_ON_OTHER = 0x30,
            DOTA_INVALID_ORDER_CANT_CAST_ON_BUILDING = 0x31,
            DOTA_INVALID_ORDER_CANT_CAST_ON_ANCIENT = 0x32,
            DOTA_INVALID_ORDER_ITEM_CANT_BE_MOVED_TO_STASH = 0x33,
            DOTA_INVALID_ORDER_ITEM_CANT_BE_MOVED_TO_SLOT = 0x34,
            DOTA_INVALID_ORDER_CANT_CAST_ON_MECHANICAL = 0x35,
            DOTA_INVALID_ORDER_CANT_ACCEPT_ATTACK_TARGET = 0x36,
            DOTA_INVALID_ORDER_CANT_CAST_NO_CHARGES = 0x37,
            DOTA_INVALID_ORDER_CANT_CAST_ON_CREEP = 0x38,
            DOTA_INVALID_ORDER_TARGET_CANT_TAKE_ITEMS = 0x39,
            DOTA_INVALID_ORDER_CANT_GIVE_ITEM_TO_ENEMY = 0x3a,
            DOTA_INVALID_ORDER_CANT_CAST_ON_COURIER = 0x3b,
            DOTA_INVALID_ORDER_ABILITY_IS_HIDDEN = 0x3c,
            DOTA_INVALID_ORDER_ITEM_IN_COOLDOWN = 0x3d,
            DOTA_INVALID_ORDER_SECRET_SHOP_NOT_IN_RANGE = 0x3e,
            DOTA_INVALID_ORDER_NOT_ENOUGH_GOLD = 0x3f,
            DOTA_INVALID_ORDER_PURCHASE_AUTOCOMBINE_RECIPE = 0x40,
            DOTA_INVALID_ORDER_CANT_DENY_HEALTH_TOO_HIGH = 0x41,
            DOTA_INVALID_ORDER_SIDE_SHOP_NOT_IN_RANGE = 0x42,
            DOTA_INVALID_ORDER_HOME_SHOP_NOT_IN_RANGE = 0x43,
            DOTA_INVALID_ORDER_CANT_PICK_UP_ITEM = 0x44,
            DOTA_INVALID_ORDER_CANT_SELL_NO_SHOP_IN_RANGE = 0x45,
            DOTA_INVALID_ORDER_CANT_SELL_ITEM = 0x46,
            DOTA_INVALID_ORDER_CANT_SELL_ITEM_WHILE_DEAD = 0x47,
            DOTA_INVALID_ORDER_TARGET_CANT_BE_DENIED = 0x48,
            DOTA_INVALID_ORDER_ABILITY_DISABLED_BY_ROOT = 0x49,
            DOTA_INVALID_ORDER_UNIT_COMMAND_RESTRICTED = 0x4a,
            DOTA_INVALID_ORDER_UNIT_MUTED = 0x4b,
            DOTA_INVALID_ORDER_CANT_CAST_ON_SUMMONED = 0x4c,
            DOTA_INVALID_ORDER_TARGET_MAGIC_IMMUNE_ALLY = 0x4d,
            DOTA_INVALID_ORDER_CANT_PURCHASE_DISALLOWED_ITEM = 0x4e,
            DOTA_INVALID_ORDER_CANT_CAST_ON_DOMINATED = 0x4f,
            DOTA_INVALID_ORDER_CAST_CUSTOM = 0x50,
            DOTA_INVALID_ORDER_ITEM_NOT_DISASSEMBLABLE = 0x51,
            DOTA_INVALID_ORDER_ITEM_OUT_OF_STOCK = 0x52,
            DOTA_INVALID_ORDER_ABILITY_CANT_BE_UPGRADED_AT_MAX = 0x53,
            DOTA_INVALID_ORDER_ABILITY_INACTIVE = 0x54,
            DOTA_INVALID_ORDER_ITEM_NOT_IN_MAIN_INVENTORY = 0x55,
            DOTA_INVALID_ORDER_CANT_GLYPH = 0x56,
            DOTA_INVALID_ORDER_CANT_DRAG_CHANNELING_ITEM = 0x57,
            DOTA_INVALID_ORDER_CANT_BUYBACK_UNIT_NOT_A_HERO = 0x58,
            DOTA_INVALID_ORDER_CANT_BUYBACK_UNIT_NOT_DEAD = 0x59,
            DOTA_INVALID_ORDER_CANT_BUYBACK_NOT_ENOUGH_GOLD = 0x5a,
            DOTA_INVALID_ORDER_CANT_BUYBACK_IN_COOLDOWN = 0x5b,
            DOTA_INVALID_ORDER_CANT_DISASSEMBLE_STASH_OUT_OF_RANGE = 0x5c,
            DOTA_INVALID_ORDER_CANT_EJECT_ITEM_NOT_IN_STASH = 0x5d,
            DOTA_INVALID_ORDER_GAME_IS_PAUSED = 0x5e,
            DOTA_INVALID_ORDER_CANT_CAST_ON_CONSIDERED_HERO = 0x5f,
            DOTA_INVALID_ORDER_CANT_SHOP_AUTO_BUY_ENABLED = 0x60,
            DOTA_INVALID_ORDER_ONLY_DELIBERATE_CHANNELING_CANCEL = 0x61,
            DOTA_INVALID_ORDER_CANT_BUYBACK_REAPERS_SCYTHE = 0x62,
            DOTA_INVALID_ORDER_CANT_BUYBACK_DISABLED_BY_GAME_MODE = 0x63,
            DOTA_INVALID_ORDER_CANT_ABILITY_PING_BAD_TEAM = 0x64,
            DOTA_INVALID_ORDER_ABILITY_NOT_POSITIONED = 0x65,
            DOTA_INVALID_ORDER_ABILITY_NOT_TARGETTED = 0x66,
            DOTA_INVALID_ORDER_ABILITY_REQUIRES_TARGET = 0x67,
            DOTA_INVALID_ORDER_CANT_RADAR = 0x68,
            DOTA_INVALID_ORDER_NO_COURIER = 0x69,
            DOTA_INVALID_ORDER_CUSTOM_SHOP_NOT_IN_RANGE = 0x6a,
            DOTA_INVALID_ORDER_CANT_CAST_RIVER_PAINT = 0x6b,
            DOTA_INVALID_ORDER_UNIT_OBSTRUCTED = 0x6c,
            DOTA_INVALID_ORDER_CANT_CAST_DRAG_REQUIRED = 0x6d,
            DOTA_INVALID_ORDER_ABILITY_DISABLED_BY_TETHER = 0x6e,
            DOTA_INVALID_ORDER_ABILITY_NOT_UNLOCKED = 0x6f,
            DOTA_INVALID_ORDER_CANT_FOUNTAIN_DROP_UNIT_NOT_DEAD = 0x70,
            DOTA_INVALID_ORDER_ITEM_NOT_IN_NEUTRAL_ITEM_STASH = 0x71,
            DOTA_INVALID_ORDER_ITEM_ALREADY_PURCHASED = 0x72,
            DOTA_INVALID_ORDER_BEYOND_PHYSICAL_ITEM_LIMIT = 0x73,
            DOTA_INVALID_ORDER_ABILITY_PING_DEAD_ALLY = 0x74,
            DOTA_INVALID_ORDER_CANT_LOCKCOMBINE_NEUTRAL_ITEMS = 0x75,
            DOTA_INVALID_ORDER_ABILITY_CANT_ALT_CAST = 0x76,
            DOTA_INVALID_ORDER_ITEM_CANNOT_BE_CONSUMED = 0x77,
            DOTA_INVALID_ORDER_CANT_BUYBACK_CEASELESS_DIRGE = 0x78,
            DOTA_INVALID_ORDER_CANT_ATTACK_BUILDINGS = 0x79,
            DOTA_INVALID_ORDER_COUNT = 0x7a,
        };
    };
};
