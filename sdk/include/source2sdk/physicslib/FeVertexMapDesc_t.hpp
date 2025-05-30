#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeVertexMapDesc_t
        {
        public:
            CUtlString sName; // 0x0            
            std::uint32_t nNameHash; // 0x8            
            std::uint32_t nColor; // 0xc            
            std::uint32_t nFlags; // 0x10            
            std::uint16_t nVertexBase; // 0x14            
            std::uint16_t nVertexCount; // 0x16            
            std::uint32_t nMapOffset; // 0x18            
            std::uint32_t nNodeListOffset; // 0x1c            
            Vector vCenterOfMass; // 0x20            
            float flVolumetricSolveStrength; // 0x2c            
            std::int16_t nScaleSourceNode; // 0x30            
            std::uint16_t nNodeListCount; // 0x32            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, sName) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nNameHash) == 0x8);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nColor) == 0xc);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nFlags) == 0x10);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nVertexBase) == 0x14);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nVertexCount) == 0x16);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nMapOffset) == 0x18);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nNodeListOffset) == 0x1c);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, vCenterOfMass) == 0x20);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, flVolumetricSolveStrength) == 0x2c);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nScaleSourceNode) == 0x30);
        static_assert(offsetof(source2sdk::physicslib::FeVertexMapDesc_t, nNodeListCount) == 0x32);
        
        static_assert(sizeof(source2sdk::physicslib::FeVertexMapDesc_t) == 0x38);
    };
};
