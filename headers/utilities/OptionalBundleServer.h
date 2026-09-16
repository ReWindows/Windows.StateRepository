#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 31 member(s).
namespace Windows::Internal::StateRepository {
class OptionalBundleServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilenameAsStorageFile@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetFilenameAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainBundle@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIBundle@234@@Z
    virtual long GetMainBundle(::Windows::Internal::StateRepository::IBundle * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@OptionalBundleServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@OptionalBundleServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OptionalBundleServer@StateRepository@Internal@Windows@@QEAA@XZ
    OptionalBundleServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Filename@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Filename(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFilenameNull@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsFilenameNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MainBundle@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_MainBundle(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Publisher@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Publisher(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_Version(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__OptionalBundleID@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__OptionalBundleID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@OptionalBundleServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OptionalBundleServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~OptionalBundleServer();
};
} // namespace Windows::Internal::StateRepository
