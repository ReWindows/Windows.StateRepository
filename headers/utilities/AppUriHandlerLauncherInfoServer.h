#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 31 member(s).
namespace Windows::Internal::StateRepository {
class AppUriHandlerLauncherInfoServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppUriHandlerLauncherInfoServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUriHandler@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIAppUriHandler@234@@Z
    virtual long GetAppUriHandler(::Windows::Internal::StateRepository::IAppUriHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplication@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplication@234@@Z
    virtual long GetApplication(::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUriHandler@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_AppUriHandler(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Application(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationUserModelId@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectiveSupportedUsers@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAW4SupportedUsers@234@@Z
    virtual long get_EffectiveSupportedUsers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProgIDNull@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsProgIDNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageOrigin@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackageOrigin@234@@Z
    virtual long get_PackageOrigin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgID@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProgID(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedUsers@AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAW4SupportedUsers@234@@Z
    virtual long get_SupportedUsers(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerLauncherInfoServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppUriHandlerLauncherInfoServer();
};
} // namespace Windows::Internal::StateRepository
