#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/ParticleAttachment_t.hpp"
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x98
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Particle Tag"
        #pragma pack(push, 1)
        class CParticleAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            uint8_t _pad0050[0x8]; // 0x50
            // metadata: MPropertySuppressField
            // m_hParticleSystem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hParticleSystem;
            char m_hParticleSystem[0x8]; // 0x58            
            // metadata: MPropertyAttributeEditor "AssetBrowse( vpcf )"
            // metadata: MPropertyFriendlyName "Particle System"
            CUtlString m_particleSystemName; // 0x60            
            // metadata: MPropertyFriendlyName "Configuration"
            CUtlString m_configName; // 0x68            
            // metadata: MPropertyFriendlyName "Detach From Owner"
            bool m_bDetachFromOwner; // 0x70            
            // metadata: MPropertyFriendlyName "Stop on Tag End"
            // metadata: MPropertyGroupName "Ending"
            bool m_bStopWhenTagEnds; // 0x71            
            // metadata: MPropertyFriendlyName "Tag End Stop is Instant"
            // metadata: MPropertyGroupName "Ending"
            bool m_bTagEndStopIsInstant; // 0x72            
            uint8_t _pad0073[0x5]; // 0x73
            // metadata: MPropertyFriendlyName "Attachment"
            // metadata: MPropertyGroupName "Attachments"
            // metadata: MPropertyAttributeChoiceName "Attachment"
            CUtlString m_attachmentName; // 0x78            
            // metadata: MPropertyFriendlyName "Attachment Type"
            // metadata: MPropertyGroupName "Attachments"
            source2sdk::animationsystem::ParticleAttachment_t m_attachmentType; // 0x80            
            uint8_t _pad0084[0x4]; // 0x84
            // metadata: MPropertyFriendlyName "Attachment (Control Point 1)"
            // metadata: MPropertyGroupName "Attachments"
            // metadata: MPropertyAttributeChoiceName "Attachment"
            CUtlString m_attachmentCP1Name; // 0x88            
            // metadata: MPropertyFriendlyName "Attachment Type (Control Point 1)"
            // metadata: MPropertyGroupName "Attachments"
            source2sdk::animationsystem::ParticleAttachment_t m_attachmentCP1Type; // 0x90            
            uint8_t _pad0094[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CParticleAnimTag) == 0x98);
    };
};
