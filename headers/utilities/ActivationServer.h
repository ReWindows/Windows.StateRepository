#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 56 member(s).
namespace Windows::Internal::StateRepository {
class ActivationServer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivationServer@StateRepository@Internal@Windows@@QEAA@XZ
    ActivationServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ActivationServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExecutableAsStorageFile@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetExecutableAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartPageAsStorageFile@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetStartPageAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ActivationServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ActivationServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ActivationServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ActivationServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ActivationServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationKey@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ActivationKey(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BnoIsolationIsPackage@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_BnoIsolationIsPackage(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Entrypoint@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Entrypoint(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Executable@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Executable(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAW4ActivationFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostId@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HostId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActivationKeyNull@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsActivationKeyNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsConsoleSubsystem@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsConsoleSubsystem(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEntrypointNull@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEntrypointNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsExecutableNull@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsExecutableNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHostIdNull@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsHostIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResourceGroupNull@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsResourceGroupNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRuntimeTypeNull@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsRuntimeTypeNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsServerApplication@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsServerApplication(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsStartPageNull@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsStartPageNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourceGroup@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResourceGroup(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsAppSilo@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsAppSilo(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsDesktopBridge@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsDesktopBridge(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsUniversal@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsUniversal(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsWin32alacarte@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsWin32alacarte(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeType@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RuntimeType(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPage@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_StartPage(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsMultipleInstances@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsMultipleInstances(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsMultipleUsers@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsMultipleUsers(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevelIsFullTrust@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_TrustLevelIsFullTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevelIsPartialTrust@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_TrustLevelIsPartialTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__ActivationID@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__ActivationID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@ActivationServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BnoIsolationIsPackage@ActivationServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_BnoIsolationIsPackage(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsConsoleSubsystem@ActivationServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsConsoleSubsystem(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsServerApplication@ActivationServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsServerApplication(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsMultipleInstances@ActivationServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsMultipleInstances(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsMultipleUsers@ActivationServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsMultipleUsers(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivationServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ActivationServer();
};
} // namespace Windows::Internal::StateRepository
