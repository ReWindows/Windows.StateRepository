#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 35 member(s).
namespace Windows::Internal::StateRepository {
class PackageLocationServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageLocationServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstalledLocationAsStorageFolder@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@4@@Z
    virtual long GetInstalledLocationAsStorageFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMutableLinkAsStorageFolder@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@4@@Z
    virtual long GetMutableLinkAsStorageFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMutableLocationAsStorageFolder@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@4@@Z
    virtual long GetMutableLocationAsStorageFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageLocationServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageLocationServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageLocationServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageLocationServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageLocationServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstalledLocation@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_InstalledLocation(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMutableLinkNull@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMutableLinkNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMutableLocationNull@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMutableLocationNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProjectionIdNull@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsProjectionIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MutableLink@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MutableLink(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MutableLocation@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_MutableLocation(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProjectionId@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProjectionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Volume@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Volume(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PackageLocationID@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PackageLocationID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PackageLocationServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
};
} // namespace Windows::Internal::StateRepository
