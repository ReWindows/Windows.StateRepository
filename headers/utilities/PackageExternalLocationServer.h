#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 29 member(s).
namespace Windows::Internal::StateRepository {
class PackageExternalLocationServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPathAsStorageFolder@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@4@@Z
    virtual long GetPathAsStorageFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageExternalLocationServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageExternalLocationServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExternalLocationServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageExternalLocationServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Path@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Path(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PackageExternalLocationID@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PackageExternalLocationID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExternalLocationServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageExternalLocationServer();
};
} // namespace Windows::Internal::StateRepository
