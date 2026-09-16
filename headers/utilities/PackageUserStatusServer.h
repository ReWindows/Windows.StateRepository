#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 28 member(s).
namespace Windows::Internal::StateRepository {
class PackageUserStatusServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageIdentity@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageIdentity@234@@Z
    virtual long GetPackageIdentity(::Windows::Internal::StateRepository::IPackageIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageUserStatusServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageUserStatusServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageUserStatusServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageUserStatusServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageIdentity@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_PackageIdentity(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackageStatus@234@@Z
    virtual long get_Status(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PackageUserStatusID@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PackageUserStatusID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PackageUserStatusServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageUserStatusServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageUserStatusServer();
};
} // namespace Windows::Internal::StateRepository
