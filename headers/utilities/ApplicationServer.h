#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 134 member(s).
namespace Windows::Internal::StateRepository {
class ApplicationServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplicationServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationServer@StateRepository@Internal@Windows@@QEAA@XZ
    ApplicationServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivation@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIActivation@234@@Z
    virtual long GetActivation(::Windows::Internal::StateRepository::IActivation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentDirectoryPathAsStorageFolder@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFolder@Storage@4@@Z
    virtual long GetCurrentDirectoryPathAsStorageFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptionLocalized@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDescriptionLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptionReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDescriptionReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameLocalized@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDisplayNameLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDisplayNameReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExecutableAsStorageFile@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetExecutableAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMrtApplication@ApplicationServer@StateRepository@Internal@Windows@@QEBAJAEAVMrtApplication@Entity@2@@Z
    long GetMrtApplication(WindissectOpaque &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSplashScreenImageAsStorageFile@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIStorageFile@Storage@4@@Z
    virtual long GetSplashScreenImageAsStorageFile(::Windows::Storage::IStorageFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSplashScreenImageLocalized@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSplashScreenImageLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSplashScreenImageLocalizedAsRandomAccessStreamReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJUSize@Foundation@4@PEAPEAUIRandomAccessStreamReference@Streams@Storage@4@@Z
    virtual long GetSplashScreenImageLocalizedAsRandomAccessStreamReference(WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSplashScreenImageLocalizedAsUri@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long GetSplashScreenImageLocalizedAsUri(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSplashScreenImageReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSplashScreenImageReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare150x150LogoLocalized@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSquare150x150LogoLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare150x150LogoLocalizedAsRandomAccessStreamReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJUSize@Foundation@4@PEAPEAUIRandomAccessStreamReference@Streams@Storage@4@@Z
    virtual long GetSquare150x150LogoLocalizedAsRandomAccessStreamReference(WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare150x150LogoLocalizedAsUri@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long GetSquare150x150LogoLocalizedAsUri(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare150x150LogoReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSquare150x150LogoReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare310x310LogoLocalized@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSquare310x310LogoLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare310x310LogoLocalizedAsRandomAccessStreamReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJUSize@Foundation@4@PEAPEAUIRandomAccessStreamReference@Streams@Storage@4@@Z
    virtual long GetSquare310x310LogoLocalizedAsRandomAccessStreamReference(WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare310x310LogoLocalizedAsUri@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long GetSquare310x310LogoLocalizedAsUri(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare310x310LogoReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSquare310x310LogoReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare44x44LogoLocalized@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSquare44x44LogoLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare44x44LogoLocalizedAsRandomAccessStreamReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJUSize@Foundation@4@PEAPEAUIRandomAccessStreamReference@Streams@Storage@4@@Z
    virtual long GetSquare44x44LogoLocalizedAsRandomAccessStreamReference(WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare44x44LogoLocalizedAsUri@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long GetSquare44x44LogoLocalizedAsUri(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare44x44LogoReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSquare44x44LogoReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare71x71LogoLocalized@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSquare71x71LogoLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare71x71LogoLocalizedAsRandomAccessStreamReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJUSize@Foundation@4@PEAPEAUIRandomAccessStreamReference@Streams@Storage@4@@Z
    virtual long GetSquare71x71LogoLocalizedAsRandomAccessStreamReference(WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare71x71LogoLocalizedAsUri@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long GetSquare71x71LogoLocalizedAsUri(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSquare71x71LogoReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetSquare71x71LogoReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualGroupLocalized@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetVisualGroupLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualGroupReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetVisualGroupReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWide310x150LogoLocalized@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetWide310x150LogoLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWide310x150LogoLocalizedAsRandomAccessStreamReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJUSize@Foundation@4@PEAPEAUIRandomAccessStreamReference@Streams@Storage@4@@Z
    virtual long GetWide310x150LogoLocalizedAsRandomAccessStreamReference(WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWide310x150LogoLocalizedAsUri@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long GetWide310x150LogoLocalizedAsUri(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWide310x150LogoReference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetWide310x150LogoReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ApplicationServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ApplicationServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ApplicationServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplicationServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Activation@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Activation(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppLifecycleBehavior@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4AppLifecycleBehavior@234@@Z
    virtual long get_AppLifecycleBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppListEntry@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4AppListEntry@234@@Z
    virtual long get_AppListEntry(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationType@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4ApplicationType@234@@Z
    virtual long get_ApplicationType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationUserModelId@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationViewMinWidth@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4ApplicationViewWidth@234@@Z
    virtual long get_ApplicationViewMinWidth(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BackgroundColor@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_BackgroundColor(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BnoIsolation@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4BnoIsolation@234@@Z
    virtual long get_BnoIsolation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BnoIsolationIsPackage@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_BnoIsolationIsPackage(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentDirectoryPath@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CurrentDirectoryPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentDirectoryPath_MacrosExpanded@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CurrentDirectoryPath_MacrosExpanded(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditionId@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EditionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Entrypoint@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Entrypoint(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Executable@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Executable(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4ApplicationFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ForegroundText@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ForegroundText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostId@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HostId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialRotationPreference@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4RotationPreference@234@@Z
    virtual long get_InitialRotationPreference(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCentennial@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCentennial(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCentennialFullTrust@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCentennialFullTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCentennialPartialTrust@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCentennialPartialTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCurrentDirectoryPathNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsCurrentDirectoryPathNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEditionIdNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEditionIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEntrypointNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEntrypointNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsExecutableNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsExecutableNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsForegroundTextNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsForegroundTextNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsHostIdNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsHostIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsLockScreenBadgeLogoNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsLockScreenBadgeLogoNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsParametersNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsParametersNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResourceGroupNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsResourceGroupNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsServerApplication@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsServerApplication(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSplashScreenImageNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsSplashScreenImageNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSquare150x150LogoNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsSquare150x150LogoNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSquare310x310LogoNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsSquare310x310LogoNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSquare71x71LogoNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsSquare71x71LogoNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsStartPageNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsStartPageNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsVisualGroupNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsVisualGroupNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWide310x150LogoNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsWide310x150LogoNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LockScreenBadgeLogo@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_LockScreenBadgeLogo(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LockScreenNotification@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4LockScreenNotification@234@@Z
    virtual long get_LockScreenNotification(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageRelativeApplicationId@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageRelativeApplicationId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parameters@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Parameters(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parameters_MacrosExpanded@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Parameters_MacrosExpanded(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourceGroup@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResourceGroup(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehavior@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4RuntimeBehavior@234@@Z
    virtual long get_RuntimeBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsAppSilo@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsAppSilo(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsDesktopBridge@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsDesktopBridge(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsUniversal@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsUniversal(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsUnknown@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsUnknown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RuntimeBehaviorIsWin32alacarte@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RuntimeBehaviorIsWin32alacarte(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SplashScreenBackgroundColor@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_SplashScreenBackgroundColor(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SplashScreenImage@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SplashScreenImage(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SplashScreenIsOptional@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SplashScreenIsOptional(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Square150x150Logo@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Square150x150Logo(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Square310x310Logo@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Square310x310Logo(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Square44x44Logo@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Square44x44Logo(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Square71x71Logo@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Square71x71Logo(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartPage@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_StartPage(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Subsystem@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4Subsystem@234@@Z
    virtual long get_Subsystem(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsMultipleInstances@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsMultipleInstances(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevel@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAW4SRTrustLevel@234@@Z
    virtual long get_TrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevelIsFullTrust@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_TrustLevelIsFullTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevelIsPartialTrust@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_TrustLevelIsPartialTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrustLevelIsUnknown@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_TrustLevelIsUnknown(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualGroup@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_VisualGroup(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Wide310x150Logo@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Wide310x150Logo(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__ApplicationID@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__ApplicationID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@ApplicationServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BnoIsolationIsPackage@ApplicationServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_BnoIsolationIsPackage(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsServerApplication@ApplicationServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsServerApplication(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RuntimeBehavior@ApplicationServer@StateRepository@Internal@Windows@@UEAAJW4RuntimeBehavior@234@@Z
    virtual long put_RuntimeBehavior(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SplashScreenIsOptional@ApplicationServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SplashScreenIsOptional(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsMultipleInstances@ApplicationServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsMultipleInstances(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TrustLevel@ApplicationServer@StateRepository@Internal@Windows@@UEAAJW4SRTrustLevel@234@@Z
    virtual long put_TrustLevel(int);
};
} // namespace Windows::Internal::StateRepository
