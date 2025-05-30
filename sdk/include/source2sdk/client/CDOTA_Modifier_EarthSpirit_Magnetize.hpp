#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EarthSpirit_Magnetize : public source2sdk::client::CDOTA_Buff
        {
        public:
            float rock_search_radius; // 0x17f8            
            float damage_per_second; // 0x17fc            
            float damage_interval; // 0x1800            
            float rock_explosion_delay; // 0x1804            
            float damage_duration; // 0x1808            
            float cast_radius; // 0x180c            
            float rock_explosion_radius; // 0x1810            
            bool magnetized_rocks_buff_self; // 0x1814            
            uint8_t _pad1815[0x3]; // 0x1815
            std::int32_t magnetized_rocks_buff_self_duration; // 0x1818            
            uint8_t _pad181c[0x4]; // 0x181c
            // m_hExplodedRocks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hExplodedRocks;
            char m_hExplodedRocks[0x18]; // 0x1820            
            float duration; // 0x1838            
            bool m_bShowOverhead; // 0x183c            
            uint8_t _pad183d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_Magnetize because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_EarthSpirit_Magnetize) == 0x1840);
    };
};
