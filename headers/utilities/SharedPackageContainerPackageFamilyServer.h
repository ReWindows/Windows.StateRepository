#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 27 member(s).
namespace Windows::Internal::StateRepository {
class SharedPackageContainerPackageFamilyServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedPackageContainer@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUISharedPackageContainer@234@@Z
    virtual long GetSharedPackageContainer(::Windows::Internal::StateRepository::ISharedPackageContainer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@QEAA@XZ
    SharedPackageContainerPackageFamilyServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SharedPackageContainer@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_SharedPackageContainer(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__SharedPackageContainerPackageFamilyID@SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__SharedPackageContainerPackageFamilyID(int64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedPackageContainerPackageFamilyServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SharedPackageContainerPackageFamilyServer();
};
} // namespace Windows::Internal::StateRepository
