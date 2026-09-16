#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 27 member(s).
namespace Windows::Internal::StateRepository {
class MrtSharedPriServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilenameAsStorageFile@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetFilenameAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@MrtSharedPriServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@MrtSharedPriServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrtSharedPriServer@StateRepository@Internal@Windows@@QEAA@XZ
    MrtSharedPriServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Filename@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Filename(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__MrtSharedPriID@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__MrtSharedPriID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@MrtSharedPriServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrtSharedPriServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~MrtSharedPriServer();
};
} // namespace Windows::Internal::StateRepository
