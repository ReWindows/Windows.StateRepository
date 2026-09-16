#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 26 member(s).
namespace Windows::Internal::StateRepository {
class PackageMachineStatusServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageIdentity@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageIdentity@234@@Z
    virtual long GetPackageIdentity(::Windows::Internal::StateRepository::IPackageIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageMachineStatusServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageMachineStatusServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageMachineStatusServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageMachineStatusServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageIdentity@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_PackageIdentity(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackageStatus@234@@Z
    virtual long get_Status(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PackageMachineStatusID@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PackageMachineStatusID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageMachineStatusServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageMachineStatusServer();
};
} // namespace Windows::Internal::StateRepository
