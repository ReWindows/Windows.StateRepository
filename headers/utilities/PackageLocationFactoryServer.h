#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 17 member(s).
namespace Windows::Internal::StateRepository {
class PackageLocationFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByInstalledLocation@PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByInstalledLocation(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByVolume@PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long ExistsByVolume(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackageLocation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByInstalledLocation@PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageLocation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByInstalledLocation(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByVolume@PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAU?$IVectorView@PEAVPackageLocation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByVolume(int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageLocation@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPackageLocation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackage@PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAUIPackageLocation@234@@Z
    virtual long GetByPackage(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IPackageLocation * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageLocationFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageLocationFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageLocation@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageLocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackage@PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAUIPackageLocation@234@@Z
    virtual long TryGetByPackage(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IPackageLocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageLocationFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageLocation@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageLocation * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageLocationFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageLocationFactoryServer();
};
} // namespace Windows::Internal::StateRepository
