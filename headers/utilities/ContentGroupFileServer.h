#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 27 member(s).
namespace Windows::Internal::StateRepository {
class ContentGroupFileServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContentGroupFileServer@StateRepository@Internal@Windows@@QEAA@XZ
    ContentGroupFileServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentGroup@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIContentGroup@234@@Z
    virtual long GetContentGroup(::Windows::Internal::StateRepository::IContentGroup * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFile@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIFile@234@@Z
    virtual long GetFile(::Windows::Internal::StateRepository::IFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ContentGroupFileServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ContentGroupFileServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentGroup@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ContentGroup(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_File@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_File(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__ContentGroupFileID@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__ContentGroupFileID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@ContentGroupFileServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentGroupFileServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ContentGroupFileServer();
};
} // namespace Windows::Internal::StateRepository
