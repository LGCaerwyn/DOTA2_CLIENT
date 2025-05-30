#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DotaSubquestBase;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x890
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "char m_pszQuestTitle"
        // static metadata: MNetworkVarNames "char m_pszQuestText"
        // static metadata: MNetworkVarNames "int m_nQuestType"
        // static metadata: MNetworkVarNames "CHandle< CDotaSubquestBase > m_hSubquests"
        // static metadata: MNetworkVarNames "bool m_bHidden"
        // static metadata: MNetworkVarNames "bool m_bCompleted"
        // static metadata: MNetworkVarNames "bool m_bWinIfCompleted"
        // static metadata: MNetworkVarNames "bool m_bLoseIfCompleted"
        // static metadata: MNetworkVarNames "char m_pszGameEndText"
        // static metadata: MNetworkVarNames "int m_pnTextReplaceValuesCDotaQuest"
        // static metadata: MNetworkVarNames "char m_pszTextReplaceString"
        // static metadata: MNetworkVarNames "int m_nTextReplaceValueVersion"
        #pragma pack(push, 1)
        class C_DotaQuest : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            char m_pszQuestTitle[256]; // 0x510            
            // metadata: MNetworkEnable
            char m_pszQuestText[256]; // 0x610            
            // metadata: MNetworkEnable
            std::int32_t m_nQuestType; // 0x710            
            // metadata: MNetworkEnable
            // m_hSubquests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DotaSubquestBase> m_hSubquests[8];
            char m_hSubquests[0x20]; // 0x714            
            // metadata: MNetworkEnable
            bool m_bHidden; // 0x734            
            // metadata: MNetworkEnable
            bool m_bCompleted; // 0x735            
            // metadata: MNetworkEnable
            bool m_bWinIfCompleted; // 0x736            
            // metadata: MNetworkEnable
            bool m_bLoseIfCompleted; // 0x737            
            // metadata: MNetworkEnable
            char m_pszGameEndText[256]; // 0x738            
            // metadata: MNetworkEnable
            std::int32_t m_pnTextReplaceValuesCDotaQuest[4]; // 0x838            
            // metadata: MNetworkEnable
            char m_pszTextReplaceString[64]; // 0x848            
            // metadata: MNetworkEnable
            std::int32_t m_nTextReplaceValueVersion; // 0x888            
            bool m_bWasCompleted; // 0x88c            
            uint8_t _pad088d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DotaQuest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DotaQuest) == 0x890);
    };
};
