#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 42 member(s).
namespace Windows::Internal::StateRepository {
class PackageUserFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageUser@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::IPackageUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOneTimeRegisterRowsForUserSid@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long AddOneTimeRegisterRowsForUserSid(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWorkByWorkId@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long ClearWorkByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageUser@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::IPackageUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackage@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@@Z
    virtual long DeleteByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByWorkId@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppDataVolume@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long ExistsByAppDataVolume(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyNameAndPackageType@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4PackageType@234@PEAE@Z
    virtual long ExistsByPackageFamilyNameAndPackageType(HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFullName@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageFullName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFullNameAndDeploymentState@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4DeploymentState@234@PEAE@Z
    virtual long ExistsByPackageFullNameAndDeploymentState(HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDeploymentState@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@W4DeploymentState@234@PEAE@Z
    virtual long ExistsByUserAndDeploymentState(::Windows::Internal::StateRepository::IUser *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDeploymentStateAndIsExplicitlyInstalled@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@W4DeploymentState@234@EPEAE@Z
    virtual long ExistsByUserAndDeploymentStateAndIsExplicitlyInstalled(::Windows::Internal::StateRepository::IUser *, int, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAE@Z
    virtual long ExistsByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyNameAndPackageType@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@W4PackageType@234@PEAE@Z
    virtual long ExistsByUserAndPackageFamilyNameAndPackageType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFullName@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackageUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppDataVolume@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAU?$IVectorView@PEAVPackageUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByAppDataVolume(int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVPackageUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyNameAndPackageType@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4PackageType@234@PEAPEAU?$IVectorView@PEAVPackageUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamilyNameAndPackageType(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFullName@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFullName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVPackageUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDeploymentState@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@W4DeploymentState@234@PEAPEAU?$IVectorView@PEAVPackageUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndDeploymentState(::Windows::Internal::StateRepository::IUser *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDeploymentStateAndIsExplicitlyInstalled@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@W4DeploymentState@234@EPEAPEAU?$IVectorView@PEAVPackageUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndDeploymentStateAndIsExplicitlyInstalled(::Windows::Internal::StateRepository::IUser *, int, unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyNameAndPackageType@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@W4PackageType@234@PEAPEAU?$IVectorView@PEAVPackageUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamilyNameAndPackageType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageUser@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPackageUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndPackage@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAUIPackageUser@234@@Z
    virtual long GetByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IPackageUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndPackageFullName@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIPackageUser@234@@Z
    virtual long GetByUserAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPackageUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainPackageFullNameByUserAndPackageFamilyName@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU6@@Z
    virtual long GetMainPackageFullNameByUserAndPackageFamilyName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__* *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageUserFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageUserFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageUser@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackage@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAUIPackageUser@234@@Z
    virtual long TryGetByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IPackageUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFullName@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIPackageUser@234@@Z
    virtual long TryGetByUserAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPackageUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageUser@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::IPackageUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkId@PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J0@Z
    virtual long UpdateWorkId(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageUserFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageUser@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageUser * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageUserFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageUserFactoryServer();
};
} // namespace Windows::Internal::StateRepository
