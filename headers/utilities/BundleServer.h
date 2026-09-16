#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 29 member(s).
namespace Windows::Internal::StateRepository {
class BundleServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BundleServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BundleServer@StateRepository@Internal@Windows@@QEAA@XZ
    BundleServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BundleServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@BundleServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BundleServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BundleServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@BundleServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@BundleServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@BundleServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@BundleServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BundleServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BundleServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUniqueLanguageNull@BundleServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsUniqueLanguageNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@BundleServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@BundleServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UniqueDXFeatureLevel@BundleServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_UniqueDXFeatureLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UniqueLanguage@BundleServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UniqueLanguage(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UniqueScale@BundleServer@StateRepository@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_UniqueScale(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__BundleID@BundleServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__BundleID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@BundleServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BundleServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~BundleServer();
};
} // namespace Windows::Internal::StateRepository
