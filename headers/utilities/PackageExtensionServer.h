#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 92 member(s).
namespace Windows::Internal::StateRepository {
class PackageExtensionServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivation@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIActivation@234@@Z
    virtual long GetActivation(::Windows::Internal::StateRepository::IActivation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentDirectoryPathAsStorageFolder@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@4@@Z
    virtual long GetCurrentDirectoryPathAsStorageFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExecutableAsStorageFile@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetExecutableAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartPageAsStorageFile@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetStartPageAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageExtensionServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageExtensionServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExtensionServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageExtensionServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Activation@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Activation(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppLifecycleBehavior@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4AppLifecycleBehavior@234@@Z
    virtual long get_AppLifecycleBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BnoIsolation@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4BnoIsolation@234@@Z
    virtual long get_BnoIsolation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BnoIsolationIsPackage@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_BnoIsolationIsPackage(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Category@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Category(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompatMode@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4CompatMode@234@@Z
    virtual long get_CompatMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompatModeIsClassic@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_CompatModeIsClassic(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompatModeIsModern@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_CompatModeIsModern(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompatModeIsUnknown@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_CompatModeIsUnknown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentDirectoryPath@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CurrentDirectoryPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentDirectoryPath_MacrosExpanded@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CurrentDirectoryPath_MacrosExpanded(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Entrypoint@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Entrypoint(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Executable@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Executable(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackageExtensionFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostId@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HostId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCentennial@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCentennial(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCentennialFullTrust@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCentennialFullTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCentennialPartialTrust@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCentennialPartialTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsConsoleSubsystem@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsConsoleSubsystem(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCurrentDirectoryPathNull@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCurrentDirectoryPathNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEntrypointNull@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEntrypointNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsExecutableNull@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsExecutableNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHostIdNull@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsHostIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIdNull@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsParametersNull@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsParametersNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResourceGroupNull@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsResourceGroupNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRuntimeTypeNull@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsRuntimeTypeNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsStartPageNull@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsStartPageNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalizedDictionaryIsReady@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_LocalizedDictionaryIsReady(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalizedDictionaryNeedsResolution@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_LocalizedDictionaryNeedsResolution(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parameters@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Parameters(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parameters_MacrosExpanded@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Parameters_MacrosExpanded(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourceGroup@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResourceGroup(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehavior@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4RuntimeBehavior@234@@Z
    virtual long get_RuntimeBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsAppSilo@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsAppSilo(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsDesktopBridge@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsDesktopBridge(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsUniversal@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsUniversal(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsUnknown@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsUnknown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsWin32alacarte@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsWin32alacarte(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeType@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RuntimeType(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scope@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4Scope@234@@Z
    virtual long get_Scope(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScopeIsMachine@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ScopeIsMachine(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScopeIsUnknown@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ScopeIsUnknown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScopeIsUser@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ScopeIsUser(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPage@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_StartPage(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsMultipleInstances@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsMultipleInstances(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevel@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4SRTrustLevel@234@@Z
    virtual long get_TrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevelIsFullTrust@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_TrustLevelIsFullTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevelIsPartialTrust@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_TrustLevelIsPartialTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevelIsUnknown@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_TrustLevelIsUnknown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__LocalizedDictionaryIsReady@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get__LocalizedDictionaryIsReady(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__LocalizedDictionaryNeedsResolution@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get__LocalizedDictionaryNeedsResolution(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PackageExtensionID@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PackageExtensionID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CompatMode@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJW4CompatMode@234@@Z
    virtual long put_CompatMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LocalizedDictionaryIsReady@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_LocalizedDictionaryIsReady(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LocalizedDictionaryNeedsResolution@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_LocalizedDictionaryNeedsResolution(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RuntimeBehavior@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJW4RuntimeBehavior@234@@Z
    virtual long put_RuntimeBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Scope@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJW4Scope@234@@Z
    virtual long put_Scope(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsMultipleInstances@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsMultipleInstances(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TrustLevel@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJW4SRTrustLevel@234@@Z
    virtual long put_TrustLevel(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__LocalizedDictionaryIsReady@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put__LocalizedDictionaryIsReady(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__LocalizedDictionaryNeedsResolution@PackageExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put__LocalizedDictionaryNeedsResolution(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExtensionServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageExtensionServer();
};
} // namespace Windows::Internal::StateRepository
