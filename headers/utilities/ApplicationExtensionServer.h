#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 100 member(s).
namespace Windows::Internal::StateRepository {
class ApplicationExtensionServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationExtensionServer@StateRepository@Internal@Windows@@QEAA@XZ
    ApplicationExtensionServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivation@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIActivation@234@@Z
    virtual long GetActivation(::Windows::Internal::StateRepository::IActivation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplication@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplication@234@@Z
    virtual long GetApplication(::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentDirectoryPathAsStorageFolder@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@4@@Z
    virtual long GetCurrentDirectoryPathAsStorageFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExecutableAsStorageFile@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetExecutableAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartPageAsStorageFile@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetStartPageAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_LocalizedDictionary@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_LocalizedDictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ApplicationExtensionServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ApplicationExtensionServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Activation@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Activation(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppLifecycleBehavior@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4AppLifecycleBehavior@234@@Z
    virtual long get_AppLifecycleBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Application(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BnoIsolation@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4BnoIsolation@234@@Z
    virtual long get_BnoIsolation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BnoIsolationIsPackage@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_BnoIsolationIsPackage(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Category@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Category(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompatMode@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4CompatMode@234@@Z
    virtual long get_CompatMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompatModeIsClassic@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_CompatModeIsClassic(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompatModeIsModern@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_CompatModeIsModern(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompatModeIsUnknown@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_CompatModeIsUnknown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentDirectoryPath@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CurrentDirectoryPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentDirectoryPath_MacrosExpanded@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CurrentDirectoryPath_MacrosExpanded(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DoesNotSupportMultipleInstances@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_DoesNotSupportMultipleInstances(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Entrypoint@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Entrypoint(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Executable@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Executable(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4ApplicationExtensionFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostId@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HostId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCentennial@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCentennial(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCentennialFullTrust@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCentennialFullTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCentennialPartialTrust@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCentennialPartialTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCurrentDirectoryPathNull@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCurrentDirectoryPathNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEntrypointNull@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEntrypointNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsExecutableNull@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsExecutableNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsExplicitProgId@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsExplicitProgId(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHostIdNull@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsHostIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIdNull@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsParametersNull@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsParametersNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResourceGroupNull@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsResourceGroupNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRuntimeTypeNull@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsRuntimeTypeNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsStartPageNull@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsStartPageNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWindowsSubsystem@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsWindowsSubsystem(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_LocalizedDictionaryNull@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_LocalizedDictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalizedDictionaryIsReady@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_LocalizedDictionaryIsReady(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalizedDictionaryNeedsResolution@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_LocalizedDictionaryNeedsResolution(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parameters@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Parameters(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parameters_MacrosExpanded@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Parameters_MacrosExpanded(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourceGroup@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResourceGroup(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehavior@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4RuntimeBehavior@234@@Z
    virtual long get_RuntimeBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsAppSilo@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsAppSilo(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsDesktopBridge@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsDesktopBridge(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsUniversal@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsUniversal(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsUnknown@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsUnknown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsWin32alacarte@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsWin32alacarte(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeType@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_RuntimeType(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Scope@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4Scope@234@@Z
    virtual long get_Scope(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScopeIsMachine@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ScopeIsMachine(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScopeIsUnknown@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ScopeIsUnknown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScopeIsUser@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_ScopeIsUser(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPage@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_StartPage(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Subsystem@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4Subsystem@234@@Z
    virtual long get_Subsystem(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsMultipleInstances@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsMultipleInstances(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevel@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAW4SRTrustLevel@234@@Z
    virtual long get_TrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevelIsFullTrust@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_TrustLevelIsFullTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevelIsPartialTrust@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_TrustLevelIsPartialTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevelIsUnknown@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_TrustLevelIsUnknown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__ApplicationExtensionID@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__ApplicationExtensionID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__LocalizedDictionaryIsReady@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get__LocalizedDictionaryIsReady(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__LocalizedDictionaryNeedsResolution@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get__LocalizedDictionaryNeedsResolution(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BnoIsolationIsPackage@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_BnoIsolationIsPackage(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CompatMode@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJW4CompatMode@234@@Z
    virtual long put_CompatMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DoesNotSupportMultipleInstances@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_DoesNotSupportMultipleInstances(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsExplicitProgId@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsExplicitProgId(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsWindowsSubsystem@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsWindowsSubsystem(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LocalizedDictionaryIsReady@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_LocalizedDictionaryIsReady(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LocalizedDictionaryNeedsResolution@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_LocalizedDictionaryNeedsResolution(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RuntimeBehavior@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJW4RuntimeBehavior@234@@Z
    virtual long put_RuntimeBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Scope@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJW4Scope@234@@Z
    virtual long put_Scope(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsMultipleInstances@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsMultipleInstances(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TrustLevel@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJW4SRTrustLevel@234@@Z
    virtual long put_TrustLevel(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__LocalizedDictionaryIsReady@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put__LocalizedDictionaryIsReady(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__LocalizedDictionaryNeedsResolution@ApplicationExtensionServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put__LocalizedDictionaryNeedsResolution(unsigned char);
};
} // namespace Windows::Internal::StateRepository
