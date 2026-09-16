#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 30 member(s).
namespace Windows::Internal::StateRepository {
class DependencyGraphServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DependencyGraphServer@StateRepository@Internal@Windows@@QEAA@XZ
    DependencyGraphServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDependentPackage@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetDependentPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupplierPackage@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetSupplierPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DependencyGraphServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DependencyGraphServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DependencyType@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEAW4DependencyGraphType@234@@Z
    virtual long get_DependencyType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DependentPackage@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_DependentPackage(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupplierPackage@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_SupplierPackage(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__DependencyGraphID@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__DependencyGraphID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@DependencyGraphServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
};
} // namespace Windows::Internal::StateRepository
