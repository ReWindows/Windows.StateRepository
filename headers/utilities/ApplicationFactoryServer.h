#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 56 member(s).
namespace Windows::Internal::StateRepository {
class ApplicationFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    ApplicationFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationUserModelId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByApplicationUserModelId(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByEditionId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByEditionId(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndPackageRelativeApplicationId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageAndPackageRelativeApplicationId(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyName@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageFamilyName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFullName@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageFullName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationUserModelId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAE@Z
    virtual long ExistsByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamily@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAE@Z
    virtual long ExistsByUserAndPackageFamily(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndPackageType@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@W4PackageType@234@PEAE@Z
    virtual long ExistsByUserAndPackageFamilyAndPackageType(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyName@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndPackageFamilyName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyNameAndPackageType@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@W4PackageType@234@PEAE@Z
    virtual long ExistsByUserAndPackageFamilyNameAndPackageType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFullName@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndApplicationUserModelId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserOrDefaultAccountAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndPackageFamilyNameAndPackageType@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@W4PackageType@234@PEAE@Z
    virtual long ExistsByUserOrDefaultAccountAndPackageFamilyNameAndPackageType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndPackageFullName@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserOrDefaultAccountAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplicationUserModelId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByApplicationUserModelId(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByEditionId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByEditionId(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyName@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamilyName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFullName@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFullName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndAnyAppExecutionAlias@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndAnyAppExecutionAlias(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndAppListEntry@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@W4AppListEntry@234@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndAppListEntry(::Windows::Internal::StateRepository::IUser *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackage@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamily@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamily(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyAndPackageType@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@W4PackageType@234@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamilyAndPackageType(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyName@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamilyName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyNameAndAppListEntry@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@W4AppListEntry@234@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamilyNameAndAppListEntry(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyNameAndPackageType@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@W4PackageType@234@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamilyNameAndPackageType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFullName@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccount@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccount(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndAppListEntry@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@W4AppListEntry@234@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndAppListEntry(::Windows::Internal::StateRepository::IUser *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndApplicationUserModelId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndHostId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndHostId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFamilyNameAndPackageType@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@W4PackageType@234@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndPackageFamilyNameAndPackageType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFullName@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAnd_ApplicationID@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@_JPEAPEAU?$IVectorView@PEAVApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAnd_ApplicationID(::Windows::Internal::StateRepository::IUser *, int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIApplication@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationTypeByUserAndApplicationUserModelId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAW4ApplicationType@234@@Z
    virtual long GetApplicationTypeByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageAndPackageRelativeApplicationId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAPEAUIApplication@234@@Z
    virtual long GetByPackageAndPackageRelativeApplicationId(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, ::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndApplicationUserModelId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIApplication@234@@Z
    virtual long GetByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAnd_ApplicationId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@_JPEAPEAUIApplication@234@@Z
    virtual long GetByUserAnd_ApplicationId(::Windows::Internal::StateRepository::IUser *, int64_t, ::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrent@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplication@234@@Z
    virtual long GetCurrent(::Windows::Internal::StateRepository::IApplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIApplication@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IApplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetActivationInfoByUserAndApplicationUserModelId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAW4ActivationInfoFlags@234@PEAPEAU6@3PEAE@Z
    virtual long TryGetActivationInfoByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int *, HSTRING__* *, HSTRING__* *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndPackageRelativeApplicationId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAPEAUIApplication@234@@Z
    virtual long TryGetByPackageAndPackageRelativeApplicationId(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, ::Windows::Internal::StateRepository::IApplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplicationUserModelId@ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIApplication@234@@Z
    virtual long TryGetByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IApplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@ApplicationFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIApplication@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IApplication * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ApplicationFactoryServer();
};
} // namespace Windows::Internal::StateRepository
