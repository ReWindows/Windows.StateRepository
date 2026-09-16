#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 50 member(s).
namespace Windows::Internal::StateRepository {
class AppInstallerServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AppInstallerServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppInstallerServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppInstallerServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamily@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageFamily@234@@Z
    virtual long GetPackageFamily(::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AppInstallerServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@AppInstallerServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AppInstallerServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AdminLayer@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_AdminLayer(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CheckInBackground@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_CheckInBackground(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CheckOnLaunch@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_CheckOnLaunch(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CheckUpdateInterval@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_CheckUpdateInterval(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeveloperManaged@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_DeveloperManaged(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisableAutoRepair@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_DisableAutoRepair(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisableAutoUpdate@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_DisableAutoUpdate(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAW4AppInstallerFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForceUpdateFromAnyVersion@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ForceUpdateFromAnyVersion(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LastChecked@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAUDateTime@Foundation@4@@Z
    virtual long get_LastChecked(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamily@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_PackageFamily(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PauseUntil@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAUDateTime@Foundation@4@@Z
    virtual long get_PauseUntil(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PromptToCheckOnLaunch@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_PromptToCheckOnLaunch(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UpdateBlocksActivation@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_UpdateBlocksActivation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Uri@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Uri(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UriAsUri@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long get_UriAsUri(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_Version(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__AppInstallerID@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__AppInstallerID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AdminLayer@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_AdminLayer(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CheckInBackground@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_CheckInBackground(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CheckOnLaunch@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_CheckOnLaunch(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DeveloperManaged@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_DeveloperManaged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisableAutoRepair@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_DisableAutoRepair(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisableAutoUpdate@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_DisableAutoUpdate(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ForceUpdateFromAnyVersion@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_ForceUpdateFromAnyVersion(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PromptToCheckOnLaunch@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_PromptToCheckOnLaunch(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UpdateBlocksActivation@AppInstallerServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_UpdateBlocksActivation(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInstallerServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppInstallerServer();
};
} // namespace Windows::Internal::StateRepository
