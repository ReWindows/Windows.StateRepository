#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 33 member(s).
namespace Windows::Internal::StateRepository {
class AutoUpdatePackageServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutoUpdatePackageServer@StateRepository@Internal@Windows@@QEAA@XZ
    AutoUpdatePackageServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppInstaller@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIAppInstaller@234@@Z
    virtual long GetAppInstaller(::Windows::Internal::StateRepository::IAppInstaller * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamily@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageFamily@234@@Z
    virtual long GetPackageFamily(::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AutoUpdatePackageServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AutoUpdatePackageServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppInstaller@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_AppInstaller(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Architecture@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_Architecture(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4AutoUpdatePackageFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamily@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_PackageFamily(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageType@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackageType@234@@Z
    virtual long get_PackageType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Uri(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UriAsUri@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long get_UriAsUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_Version(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__AutoUpdatePackageID@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__AutoUpdatePackageID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoUpdatePackageServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AutoUpdatePackageServer();
};
} // namespace Windows::Internal::StateRepository
