#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1808
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pudge_Swallow_Hide : public source2sdk::client::CDOTA_Buff
        {
        public:
            float order_lock_duration; // 0x17f8            
            source2sdk::entity2::GameTime_t m_fOrderLockDone; // 0x17fc            
            std::int32_t m_nFXIndex; // 0x1800            
            float shard_regen_pct; // 0x1804            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Swallow_Hide because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pudge_Swallow_Hide) == 0x1808);
    };
};
