#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 15 member(s).
namespace Windows::Internal::StateRepository {
class NamedDependencyFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@NamedDependencyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@NamedDependencyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@NamedDependencyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndDependencyType@NamedDependencyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@W4NamedDependencyType@234@PEAE@Z
    virtual long ExistsByPackageAndDependencyType(::Windows::Internal::StateRepository::IPackage *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndDependencyTypeAndIndex@NamedDependencyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@W4NamedDependencyType@234@HPEAE@Z
    virtual long ExistsByPackageAndDependencyTypeAndIndex(::Windows::Internal::StateRepository::IPackage *, int, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@NamedDependencyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVNamedDependency@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@NamedDependencyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVNamedDependency@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageAndDependencyType@NamedDependencyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@W4NamedDependencyType@234@PEAPEAU?$IVectorView@PEAVNamedDependency@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageAndDependencyType(::Windows::Internal::StateRepository::IPackage *, int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NamedDependencyFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    NamedDependencyFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@NamedDependencyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUINamedDependency@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::INamedDependency * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndDependencyTypeAndIndex@NamedDependencyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@W4NamedDependencyType@234@HPEAPEAUINamedDependency@234@@Z
    virtual long TryGetByPackageAndDependencyTypeAndIndex(::Windows::Internal::StateRepository::IPackage *, int, int, ::Windows::Internal::StateRepository::INamedDependency * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@NamedDependencyFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUINamedDependency@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::INamedDependency * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NamedDependencyFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~NamedDependencyFactoryServer();
};
} // namespace Windows::Internal::StateRepository
