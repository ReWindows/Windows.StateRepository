#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 78 member(s).
namespace Windows::Internal::StateRepository {
class PackageFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByEditionId@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByEditionId(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamily@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAE@Z
    virtual long ExistsByPackageFamily(::Windows::Internal::StateRepository::IPackageFamily *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@W4PackageType@234@PEAE@Z
    virtual long ExistsByPackageFamilyAndPackageType(::Windows::Internal::StateRepository::IPackageFamily *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndPackageTypeAndResourceId@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@W4PackageType@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageFamilyAndPackageTypeAndResourceId(::Windows::Internal::StateRepository::IPackageFamily *, int, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndPackageTypeAndResourceIdAndVersion@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@W4PackageType@234@PEAUHSTRING__@@_KPEAE@Z
    virtual long ExistsByPackageFamilyAndPackageTypeAndResourceIdAndVersion(::Windows::Internal::StateRepository::IPackageFamily *, int, HSTRING__*, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndResourceId@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageFamilyAndResourceId(::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndResourceIdAndArchitecture@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAUHSTRING__@@IPEAE@Z
    virtual long ExistsByPackageFamilyAndResourceIdAndArchitecture(::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndResourceIdAndArchitectureAndVersion@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAUHSTRING__@@I_KPEAE@Z
    virtual long ExistsByPackageFamilyAndResourceIdAndArchitectureAndVersion(::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, unsigned int, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageFamilyName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyNameAndPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4PackageType@234@PEAE@Z
    virtual long ExistsByPackageFamilyNameAndPackageType(HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageFullName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBySourceBundle@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long ExistsBySourceBundle(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBySourceBundleAndPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JW4PackageType@234@PEAE@Z
    virtual long ExistsBySourceBundleAndPackageType(int64_t, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationUserModelId@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamily@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAE@Z
    virtual long ExistsByUserAndPackageFamily(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@W4PackageType@234@PEAE@Z
    virtual long ExistsByUserAndPackageFamilyAndPackageType(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndPackageFamilyName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyNameAndPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@W4PackageType@234@PEAE@Z
    virtual long ExistsByUserAndPackageFamilyNameAndPackageType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndApplicationUserModelId@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserOrDefaultAccountAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndPackageFamilyNameAndPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@W4PackageType@234@PEAE@Z
    virtual long ExistsByUserOrDefaultAccountAndPackageFamilyNameAndPackageType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserOrDefaultAccountAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBundleAndMainOrOptionalNotPartOfBundleByUserAndNotOtherUser_SortedByPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindBundleAndMainOrOptionalNotPartOfBundleByUserAndNotOtherUser_SortedByPackageType(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByEditionId@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByEditionId(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamily@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamily(::Windows::Internal::StateRepository::IPackageFamily *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@W4PackageType@234@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamilyAndPackageType(::Windows::Internal::StateRepository::IPackageFamily *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndPackageTypeAndResourceId@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@W4PackageType@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamilyAndPackageTypeAndResourceId(::Windows::Internal::StateRepository::IPackageFamily *, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndPackageTypeAndResourceIdAndVersion@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@W4PackageType@234@PEAUHSTRING__@@_KPEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamilyAndPackageTypeAndResourceIdAndVersion(::Windows::Internal::StateRepository::IPackageFamily *, int, HSTRING__*, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndResourceId@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamilyAndResourceId(::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndResourceIdAndArchitecture@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamilyAndResourceIdAndArchitecture(::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamilyName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyNameAndPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4PackageType@234@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamilyNameAndPackageType(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageOrigin@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJW4PackageOrigin@234@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageOrigin(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBySourceBundle@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindBySourceBundle(int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBySourceBundleAndPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JW4PackageType@234@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindBySourceBundleAndPackageType(int64_t, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamily@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamily(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyAndPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@W4PackageType@234@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamilyAndPackageType(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamilyName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyNameAndPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@W4PackageType@234@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamilyNameAndPackageType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageTypeAndNotOtherUser@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4PackageType@234@0PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageTypeAndNotOtherUser(HSTRING__*, int, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccount@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccount(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndApplicationUserModelId@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFamilyNameAndPackageType@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@W4PackageType@234@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndPackageFamilyNameAndPackageType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMainOrOptionalByUserAndNotByFamilyAndOtherUser@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IVectorView@PEAVPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindMainOrOptionalByUserAndNotByFamilyAndOtherUser(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackageFullNamesByUserSidAndPackageTypeAndTargetDeviceFamily@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4PackageType@234@IPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    virtual long FindPackageFullNamesByUserSidAndPackageTypeAndTargetDeviceFamily(HSTRING__*, int, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackage@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByInstalledLocation@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIPackage@234@@Z
    virtual long GetByInstalledLocation(HSTRING__*, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageFamilyAndResourceIdAndArchitectureAndVersion@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAUHSTRING__@@I_KPEAPEAUIPackage@234@@Z
    virtual long GetByPackageFamilyAndResourceIdAndArchitectureAndVersion(::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, unsigned int, uint64_t, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIPackage@234@@Z
    virtual long GetByPackageFullName(HSTRING__*, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndApplicationUserModelId@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIPackage@234@@Z
    virtual long GetByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIPackage@234@@Z
    virtual long GetByUserAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserOrDefaultAccountAndPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIPackage@234@@Z
    virtual long GetByUserOrDefaultAccountAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrent@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetCurrent(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveIsUninstallableByPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long GetEffectiveIsUninstallableByPackageFullName(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveSupportedUsersByApplicationUserModelId@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAW4SupportedUsers@234@@Z
    virtual long GetEffectiveSupportedUsersByApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveSupportedUsersByPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAW4SupportedUsers@234@@Z
    virtual long GetEffectiveSupportedUsersByPackageFullName(HSTRING__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPackageDependencyByUserAndSupplierPackage@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAU6234@@Z
    virtual long GetMainPackageDependencyByUserAndSupplierPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageOriginByUserAndPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAW4PackageOrigin@234@@Z
    virtual long GetPackageOriginByUserAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStagedPackageOriginByPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAW4PackageOrigin@234@@Z
    virtual long GetStagedPackageOriginByPackageFullName(HSTRING__*, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackage@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFamilyAndResourceIdAndArchitectureAndVersion@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAUHSTRING__@@I_KPEAPEAUIPackage@234@@Z
    virtual long TryGetByPackageFamilyAndResourceIdAndArchitectureAndVersion(::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, unsigned int, uint64_t, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIPackage@234@@Z
    virtual long TryGetByPackageFullName(HSTRING__*, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIPackage@234@@Z
    virtual long TryGetByUserAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetEffectiveLocationByUserAndApplicationUserModelId@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU6@@Z
    virtual long TryGetEffectiveLocationByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetEffectiveLocationByUserAndPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU6@@Z
    virtual long TryGetEffectiveLocationByUserAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetPackageReadyOrNewerAvailableStatus@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@_KW4SRProcessorArchitectureType@234@PEAW4PackageReadyOrNewerAvailableStatus@234@@Z
    virtual long TryGetPackageReadyOrNewerAvailableStatus(::Windows::Internal::StateRepository::IUser *, HSTRING__*, uint64_t, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMachineRegisteredByPackageFullName@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@E@Z
    virtual long UpdateIsMachineRegisteredByPackageFullName(HSTRING__*, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsSingletonRegistered@PackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JE@Z
    virtual long UpdateIsSingletonRegistered(int64_t, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackage@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackage * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageFactoryServer();
};
} // namespace Windows::Internal::StateRepository
