#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 162 member(s).
namespace Windows::Internal::StateRepository {
class PackageServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PackageServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptionLocalized@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDescriptionLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptionReference@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDescriptionReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameLocalized@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDisplayNameLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameReference@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDisplayNameReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnterprise@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIEnterprise@234@@Z
    virtual long GetEnterprise(::Windows::Internal::StateRepository::IEnterprise * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogoLocalized@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetLogoLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogoLocalizedAsRandomAccessStreamReference@PackageServer@StateRepository@Internal@Windows@@UEAAJUSize@Foundation@4@PEAPEAUIRandomAccessStreamReference@Streams@Storage@4@@Z
    virtual long GetLogoLocalizedAsRandomAccessStreamReference(WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogoLocalizedAsUri@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@4@@Z
    virtual long GetLogoLocalizedAsUri(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogoReference@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetLogoReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMrtPackage@PackageServer@StateRepository@Internal@Windows@@QEBAJAEAVMrtPackage@Entity@2@@Z
    long GetMrtPackage(WindissectOpaque &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFamily@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageFamily@234@@Z
    virtual long GetPackageFamily(::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublisherDisplayNameLocalized@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPublisherDisplayNameLocalized(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPublisherDisplayNameReference@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPublisherDisplayNameReference(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PackageServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PackageServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PackageServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PackageServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PackageServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowExternalLocation@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_AllowExternalLocation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Architecture@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_Architecture(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Capabilities@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAI@Z
    virtual long get_Capabilities(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisableInetCacheRedirection@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_DisableInetCacheRedirection(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisableInetCookiesRedirection@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_DisableInetCookiesRedirection(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisableInetHistoryRedirection@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_DisableInetHistoryRedirection(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DoNotAllowExecution@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_DoNotAllowExecution(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditionId@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EditionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectiveIsUninstallable@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_EffectiveIsUninstallable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectiveSupportedUsers@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4SupportedUsers@234@@Z
    virtual long get_EffectiveSupportedUsers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Enterprise@PackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Enterprise(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FileSystemWriteVirtualizationDisabled@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_FileSystemWriteVirtualizationDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackageFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags2@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackageFlags2@234@@Z
    virtual long get_Flags2(int*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCentennial@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasCentennial(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasDependencyTargetCapability@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasDependencyTargetCapability(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasFullTrust@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasFullTrust(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasHostId@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasHostId(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasHostRuntime@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasHostRuntime(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasInProcessMediaExtensionCapability@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasInProcessMediaExtensionCapability(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasInstalledLocationVirtualization@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasInstalledLocationVirtualization(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasRunFullTrustCapability@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasRunFullTrustCapability(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasServerApplication@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasServerApplication(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasVersionSupercedencePerformed@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasVersionSupercedencePerformed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasWin32alacarte@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasWin32alacarte(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasWindowsRTEKU@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_HasWindowsRTEKU(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InPlaceUpdateBaseline@PackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_InPlaceUpdateBaseline(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDescriptionNull@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsDescriptionNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDevelopmentMode@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsDevelopmentMode(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEditionIdNull@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEditionIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInRelatedSet@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsInRelatedSet(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInbox@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsInbox(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInstalledByElevatedUser@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsInstalledByElevatedUser(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMachineRegistered@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMachineRegistered(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMetadataLocationUnderSystemMetadata@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMetadataLocationUnderSystemMetadata(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsModificationPackage@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsModificationPackage(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMsixvc@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMsixvc(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsMutablePackageDirectoryProcessed@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsMutablePackageDirectoryProcessed(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsNonQualifiedResourcePackage@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsNonQualifiedResourcePackage(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOneTimeRegistered@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsOneTimeRegistered(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPackagePayloadEncrypted@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsPackagePayloadEncrypted(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResourceIdNull@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsResourceIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSingletonRegistered@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsSingletonRegistered(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsStub@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsStub(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSystemRegistered@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsSystemRegistered(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUserMutablePackage@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsUserMutablePackage(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LoaderSearchPathOverride@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_LoaderSearchPathOverride(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Logo@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Logo(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MostRecentlyStagedInFamily@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_MostRecentlyStagedInFamily(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NeedsSingletonRegistration@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_NeedsSingletonRegistration(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OSMaxVersionTested@PackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_OSMaxVersionTested(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OSMinVersion@PackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_OSMinVersion(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OSVersionWhenIndexed@PackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_OSVersionWhenIndexed(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamily@PackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_PackageFamily(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageIntegrityForContent_EnforcementIsDefault@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_PackageIntegrityForContent_EnforcementIsDefault(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageIntegrityForContent_EnforcementIsOff@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_PackageIntegrityForContent_EnforcementIsOff(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageIntegrityForContent_EnforcementIsOn@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_PackageIntegrityForContent_EnforcementIsOn(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageIntegrityForExeSigning_EnforcementIsDefault@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_PackageIntegrityForExeSigning_EnforcementIsDefault(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageIntegrityForExeSigning_EnforcementIsOn@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_PackageIntegrityForExeSigning_EnforcementIsOn(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageIntegrityForModuleSigning_EnforcementIsDefault@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_PackageIntegrityForModuleSigning_EnforcementIsDefault(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageIntegrityForModuleSigning_EnforcementIsOn@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_PackageIntegrityForModuleSigning_EnforcementIsOn(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageOrigin@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackageOrigin@234@@Z
    virtual long get_PackageOrigin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageType@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackageType@234@@Z
    virtual long get_PackageType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PublisherDisplayName@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PublisherDisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RegistryWriteVirtualizationDisabled@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RegistryWriteVirtualizationDisabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequiresWin32HeapCompatProfile@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_RequiresWin32HeapCompatProfile(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Reserved_0x00000080@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Reserved_0x00000080(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Reserved_0x00000200@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Reserved_0x00000200(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourceId@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ResourceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SignatureOrigin@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4SignatureOrigin@234@@Z
    virtual long get_SignatureOrigin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceBundle@PackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_SourceBundle(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StageInPlace@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_StageInPlace(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StageWhileInUse@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_StageWhileInUse(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedUsers@PackageServer@StateRepository@Internal@Windows@@UEAAJPEAW4SupportedUsers@234@@Z
    virtual long get_SupportedUsers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetDeviceFamily@PackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_TargetDeviceFamily(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Version@PackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get_Version(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PackageID@PackageServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PackageID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PackageServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AllowExternalLocation@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_AllowExternalLocation(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisableInetCacheRedirection@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_DisableInetCacheRedirection(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisableInetCookiesRedirection@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_DisableInetCookiesRedirection(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DisableInetHistoryRedirection@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_DisableInetHistoryRedirection(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DoNotAllowExecution@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_DoNotAllowExecution(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FileSystemWriteVirtualizationDisabled@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_FileSystemWriteVirtualizationDisabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasCentennial@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasCentennial(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasDependencyTargetCapability@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasDependencyTargetCapability(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasFullTrust@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasFullTrust(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasHostId@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasHostId(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasHostRuntime@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasHostRuntime(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasInProcessMediaExtensionCapability@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasInProcessMediaExtensionCapability(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasInstalledLocationVirtualization@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasInstalledLocationVirtualization(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasRunFullTrustCapability@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasRunFullTrustCapability(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasServerApplication@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasServerApplication(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasVersionSupercedencePerformed@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasVersionSupercedencePerformed(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasWin32alacarte@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasWin32alacarte(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HasWindowsRTEKU@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_HasWindowsRTEKU(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsDevelopmentMode@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsDevelopmentMode(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsInRelatedSet@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsInRelatedSet(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsInstalledByElevatedUser@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsInstalledByElevatedUser(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMachineRegistered@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsMachineRegistered(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMetadataLocationUnderSystemMetadata@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsMetadataLocationUnderSystemMetadata(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsModificationPackage@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsModificationPackage(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMsixvc@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsMsixvc(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsMutablePackageDirectoryProcessed@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsMutablePackageDirectoryProcessed(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsNonQualifiedResourcePackage@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsNonQualifiedResourcePackage(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsOneTimeRegistered@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsOneTimeRegistered(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsPackagePayloadEncrypted@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsPackagePayloadEncrypted(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsSingletonRegistered@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsSingletonRegistered(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsSystemRegistered@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsSystemRegistered(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsUserMutablePackage@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_IsUserMutablePackage(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LoaderSearchPathOverride@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_LoaderSearchPathOverride(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MostRecentlyStagedInFamily@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_MostRecentlyStagedInFamily(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NeedsSingletonRegistration@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_NeedsSingletonRegistration(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageIntegrityForContent_EnforcementIsDefault@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_PackageIntegrityForContent_EnforcementIsDefault(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageIntegrityForContent_EnforcementIsOff@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_PackageIntegrityForContent_EnforcementIsOff(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageIntegrityForContent_EnforcementIsOn@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_PackageIntegrityForContent_EnforcementIsOn(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageIntegrityForExeSigning_EnforcementIsDefault@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_PackageIntegrityForExeSigning_EnforcementIsDefault(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageIntegrityForExeSigning_EnforcementIsOn@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_PackageIntegrityForExeSigning_EnforcementIsOn(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageIntegrityForModuleSigning_EnforcementIsDefault@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_PackageIntegrityForModuleSigning_EnforcementIsDefault(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PackageIntegrityForModuleSigning_EnforcementIsOn@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_PackageIntegrityForModuleSigning_EnforcementIsOn(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RegistryWriteVirtualizationDisabled@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_RegistryWriteVirtualizationDisabled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RequiresWin32HeapCompatProfile@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_RequiresWin32HeapCompatProfile(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Reserved_0x00000080@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_Reserved_0x00000080(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Reserved_0x00000200@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_Reserved_0x00000200(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StageInPlace@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_StageInPlace(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StageWhileInUse@PackageServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_StageWhileInUse(unsigned char);
};
} // namespace Windows::Internal::StateRepository
