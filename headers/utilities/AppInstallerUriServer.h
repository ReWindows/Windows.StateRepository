#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 29 member(s).
namespace Windows::Internal::StateRepository {
class AppInstallerUriServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppInstallerUriServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppInstallerUriServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppInstaller@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIAppInstaller@234@@Z
    virtual long GetAppInstaller(::Windows::Internal::StateRepository::IAppInstaller * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppInstallerUriServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppInstallerUriServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppInstaller@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_AppInstaller(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Uri(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UriAsUri@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long get_UriAsUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UriType@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEAW4AppInstallerUriType@234@@Z
    virtual long get_UriType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__AppInstallerUriID@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__AppInstallerUriID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@AppInstallerUriServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInstallerUriServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppInstallerUriServer();
};
} // namespace Windows::Internal::StateRepository
