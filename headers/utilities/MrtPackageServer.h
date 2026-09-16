#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 30 member(s).
namespace Windows::Internal::StateRepository {
class MrtPackageServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MrtPackageServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@MrtPackageServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@MrtPackageServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrtPackageServer@StateRepository@Internal@Windows@@QEAA@XZ
    MrtPackageServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MrtPackageServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DescriptionReference@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DescriptionReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayNameReference@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayNameReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDescriptionReferenceNull@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsDescriptionReferenceNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogoReference@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_LogoReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PublisherDisplayNameReference@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PublisherDisplayNameReference(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__MrtPackageID@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__MrtPackageID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@MrtPackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrtPackageServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~MrtPackageServer();
};
} // namespace Windows::Internal::StateRepository
