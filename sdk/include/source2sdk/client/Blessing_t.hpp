#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BlessingID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataOutlinerIconExpr "'tools/images/common/icon_node_generic.png'"
        #pragma pack(push, 1)
        struct Blessing_t
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "m_nNextBlessingID"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::BlessingID_t nID; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // metadata: MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessingTypes/*)"
            CUtlString BlessingType; // 0x8            
            uint8_t _pad0010[0x4]; // 0x10
            // metadata: MPropertyDescription "fragment cost"
            std::int32_t nCost; // 0x14            
            // metadata: MPropertyDescription "number of grants of action to give"
            std::int32_t nValue; // 0x18            
            // metadata: MPropertyDescription "can you unlock this node without owning any connected nodes?"
            bool bStartNode; // 0x1c            
            uint8_t _pad001d[0xb]; // 0x1d
            Vector2D vecPos; // 0x28            
            // metadata: MPropertyAttributeRange "0 10"
            float flSize; // 0x30            
            // metadata: MPropertyDescription "node color"
            Color color; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::Blessing_t, nID) == 0x0);
        static_assert(offsetof(source2sdk::client::Blessing_t, BlessingType) == 0x8);
        static_assert(offsetof(source2sdk::client::Blessing_t, nCost) == 0x14);
        static_assert(offsetof(source2sdk::client::Blessing_t, nValue) == 0x18);
        static_assert(offsetof(source2sdk::client::Blessing_t, bStartNode) == 0x1c);
        static_assert(offsetof(source2sdk::client::Blessing_t, vecPos) == 0x28);
        static_assert(offsetof(source2sdk::client::Blessing_t, flSize) == 0x30);
        static_assert(offsetof(source2sdk::client::Blessing_t, color) == 0x34);
        
        static_assert(sizeof(source2sdk::client::Blessing_t) == 0x38);
    };
};
