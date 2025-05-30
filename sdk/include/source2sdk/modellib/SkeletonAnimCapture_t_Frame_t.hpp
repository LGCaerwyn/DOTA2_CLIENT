#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/SkeletonAnimCapture_t_FrameStamp_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0xc0
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SkeletonAnimCapture_t_Frame_t
        {
        public:
            float m_flTime; // 0x0            
            source2sdk::modellib::SkeletonAnimCapture_t_FrameStamp_t m_Stamp; // 0x4            
            CTransform m_Transform; // 0x20            
            bool m_bTeleport; // 0x40            
            uint8_t _pad0041[0x7]; // 0x41
            // m_CompositeBones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_CompositeBones;
            char m_CompositeBones[0x18]; // 0x48            
            // m_SimStateBones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_SimStateBones;
            char m_SimStateBones[0x18]; // 0x60            
            // m_FeModelAnims has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CTransform> m_FeModelAnims;
            char m_FeModelAnims[0x18]; // 0x78            
            // m_FeModelPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<VectorAligned> m_FeModelPos;
            char m_FeModelPos[0x18]; // 0x90            
            // m_FlexControllerWeights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_FlexControllerWeights;
            char m_FlexControllerWeights[0x18]; // 0xa8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_flTime) == 0x0);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_Stamp) == 0x4);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_Transform) == 0x20);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_bTeleport) == 0x40);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_CompositeBones) == 0x48);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_SimStateBones) == 0x60);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_FeModelAnims) == 0x78);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_FeModelPos) == 0x90);
        static_assert(offsetof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t, m_FlexControllerWeights) == 0xa8);
        
        static_assert(sizeof(source2sdk::modellib::SkeletonAnimCapture_t_Frame_t) == 0xc0);
    };
};
