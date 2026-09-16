#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 14 member(s).
namespace Windows::Internal::StateRepository {
class PackageSourceUriFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageSourceUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageSourceUriFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackageSourceUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndKind@PackageSourceUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@W4PackageSourceUriKind@234@PEAE@Z
    virtual long ExistsByPackageAndKind(::Windows::Internal::StateRepository::IPackage *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackageSourceUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackageSourceUri@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PackageSourceUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVPackageSourceUri@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageAndKind@PackageSourceUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@W4PackageSourceUriKind@234@PEAPEAU?$IVectorView@PEAVPackageSourceUri@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageAndKind(::Windows::Internal::StateRepository::IPackage *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageSourceUriFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageSourceUri@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPackageSourceUri * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageSourceUriFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageSourceUriFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageSourceUriFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageSourceUri@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageSourceUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageSourceUriFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageSourceUri@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageSourceUri * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageSourceUriFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageSourceUriFactoryServer();
};
} // namespace Windows::Internal::StateRepository
