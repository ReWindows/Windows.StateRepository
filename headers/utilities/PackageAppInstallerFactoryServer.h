#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 17 member(s).
namespace Windows::Internal::StateRepository {
class PackageAppInstallerFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstaller@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@PEAE@Z
    virtual long ExistsByAppInstaller(::Windows::Internal::StateRepository::IAppInstaller *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndAppInstaller@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUIAppInstaller@234@PEAE@Z
    virtual long ExistsByPackageAndAppInstaller(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IAppInstaller *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackageAppInstaller@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppInstaller@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@PEAPEAU?$IVectorView@PEAVPackageAppInstaller@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByAppInstaller(::Windows::Internal::StateRepository::IAppInstaller *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVPackageAppInstaller@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageAppInstaller@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPackageAppInstaller * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageAndAppInstaller@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUIAppInstaller@234@PEAPEAUIPackageAppInstaller@234@@Z
    virtual long GetByPackageAndAppInstaller(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IAppInstaller *, ::Windows::Internal::StateRepository::IPackageAppInstaller * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageAppInstallerFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageAppInstaller@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageAppInstaller * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndAppInstaller@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUIAppInstaller@234@PEAPEAUIPackageAppInstaller@234@@Z
    virtual long TryGetByPackageAndAppInstaller(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IAppInstaller *, ::Windows::Internal::StateRepository::IPackageAppInstaller * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageAppInstaller@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageAppInstaller * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageAppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageAppInstallerFactoryServer();
};
} // namespace Windows::Internal::StateRepository
