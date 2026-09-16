#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 17 member(s).
namespace Windows::Internal::StateRepository {
class AutoUpdatePackageFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    AutoUpdatePackageFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstaller@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@PEAE@Z
    virtual long ExistsByAppInstaller(::Windows::Internal::StateRepository::IAppInstaller *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstallerAndPackageFamily@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@PEAUIPackageFamily@234@PEAE@Z
    virtual long ExistsByAppInstallerAndPackageFamily(::Windows::Internal::StateRepository::IAppInstaller *, ::Windows::Internal::StateRepository::IPackageFamily *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstallerAndPackageFamilyAndVersion@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@PEAUIPackageFamily@234@_KPEAE@Z
    virtual long ExistsByAppInstallerAndPackageFamilyAndVersion(::Windows::Internal::StateRepository::IAppInstaller *, ::Windows::Internal::StateRepository::IPackageFamily *, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstallerAndPackageFamilyAndVersionAndArchitecture@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@PEAUIPackageFamily@234@_KIPEAE@Z
    virtual long ExistsByAppInstallerAndPackageFamilyAndVersionAndArchitecture(::Windows::Internal::StateRepository::IAppInstaller *, ::Windows::Internal::StateRepository::IPackageFamily *, uint64_t, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAutoUpdatePackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppInstaller@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@PEAPEAU?$IVectorView@PEAVAutoUpdatePackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByAppInstaller(::Windows::Internal::StateRepository::IAppInstaller *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppInstallerAndPackageFamily@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@PEAUIPackageFamily@234@PEAPEAU?$IVectorView@PEAVAutoUpdatePackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByAppInstallerAndPackageFamily(::Windows::Internal::StateRepository::IAppInstaller *, ::Windows::Internal::StateRepository::IPackageFamily *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppInstallerAndPackageFamilyAndVersion@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@PEAUIPackageFamily@234@_KPEAPEAU?$IVectorView@PEAVAutoUpdatePackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByAppInstallerAndPackageFamilyAndVersion(::Windows::Internal::StateRepository::IAppInstaller *, ::Windows::Internal::StateRepository::IPackageFamily *, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAutoUpdatePackage@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IAutoUpdatePackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByAppInstallerAndPackageFamilyAndVersionAndArchitecture@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@PEAUIPackageFamily@234@_KIPEAPEAUIAutoUpdatePackage@234@@Z
    virtual long TryGetByAppInstallerAndPackageFamilyAndVersionAndArchitecture(::Windows::Internal::StateRepository::IAppInstaller *, ::Windows::Internal::StateRepository::IPackageFamily *, uint64_t, unsigned int, ::Windows::Internal::StateRepository::IAutoUpdatePackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIAutoUpdatePackage@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IAutoUpdatePackage * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoUpdatePackageFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AutoUpdatePackageFactoryServer();
};
} // namespace Windows::Internal::StateRepository
