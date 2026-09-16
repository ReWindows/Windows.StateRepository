#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 29 member(s).
namespace Windows::Internal::StateRepository {
class DeploymentHistoryServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DeploymentHistoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    DeploymentHistoryServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageIdentity@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageIdentity@234@@Z
    virtual long GetPackageIdentity(::Windows::Internal::StateRepository::IPackageIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DeploymentHistoryServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DeploymentHistoryServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HResult@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_HResult(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageIdentity@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_PackageIdentity(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WhenOccurred@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEAUDateTime@Foundation@4@@Z
    virtual long get_WhenOccurred(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__DeploymentHistoryID@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__DeploymentHistoryID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeploymentHistoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~DeploymentHistoryServer();
};
} // namespace Windows::Internal::StateRepository
