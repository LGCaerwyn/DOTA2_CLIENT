#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/SkeletonAnimCapture_t_Camera_t.hpp"
namespace source2sdk
{
    namespace modellib
    {
        struct SkeletonAnimCapture_t;
    };
};

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SkeletonDemoDb_t
        {
        public:
            // m_AnimCaptures has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::SkeletonAnimCapture_t*> m_AnimCaptures;
            char m_AnimCaptures[0x18]; // 0x0            
            // m_CameraTrack has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::SkeletonAnimCapture_t_Camera_t> m_CameraTrack;
            char m_CameraTrack[0x18]; // 0x18            
            float m_flRecordingTime; // 0x30            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::SkeletonDemoDb_t, m_AnimCaptures) == 0x0);
        static_assert(offsetof(source2sdk::modellib::SkeletonDemoDb_t, m_CameraTrack) == 0x18);
        static_assert(offsetof(source2sdk::modellib::SkeletonDemoDb_t, m_flRecordingTime) == 0x30);
        
        static_assert(sizeof(source2sdk::modellib::SkeletonDemoDb_t) == 0x38);
    };
};
