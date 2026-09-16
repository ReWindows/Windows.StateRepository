#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 33 member(s).
namespace Windows::Internal::StateRepository {
class DependencyGraphFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DependencyGraphFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    DependencyGraphFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByDependencyType@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJW4DependencyGraphType@234@PEAE@Z
    virtual long ExistsByDependencyType(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBySupplierPackage@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsBySupplierPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackage@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAE@Z
    virtual long ExistsByUserAndDependentPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackageAndDependencyType@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@W4DependencyGraphType@234@PEAE@Z
    virtual long ExistsByUserAndDependentPackageAndDependencyType(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackageAndDependencyTypeAnd_DependencyGraphID@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@W4DependencyGraphType@234@_JPEAE@Z
    virtual long ExistsByUserAndDependentPackageAndDependencyTypeAnd_DependencyGraphID(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, int, int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackageAndIndex@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@HPEAE@Z
    virtual long ExistsByUserAndDependentPackageAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackageAndSupplierPackage@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@1PEAE@Z
    virtual long ExistsByUserAndDependentPackageAndSupplierPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackageAndSupplierPackageFamilyName@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndDependentPackageAndSupplierPackageFamilyName(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackageFullNameAndHasExternalLocation@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndDependentPackageFullNameAndHasExternalLocation(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndSupplierPackage@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAE@Z
    virtual long ExistsByUserAndSupplierPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVDependencyGraph@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByDependencyType@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJW4DependencyGraphType@234@PEAPEAU?$IVectorView@PEAVDependencyGraph@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByDependencyType(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBySupplierPackage@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVDependencyGraph@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindBySupplierPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVDependencyGraph@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackage@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAU?$IVectorView@PEAVDependencyGraph@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndDependentPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackageAndDependencyType@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@W4DependencyGraphType@234@PEAPEAU?$IVectorView@PEAVDependencyGraph@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndDependentPackageAndDependencyType(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackageAndDependencyTypeAnd_DependencyGraphID@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@W4DependencyGraphType@234@_JPEAPEAU?$IVectorView@PEAVDependencyGraph@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndDependentPackageAndDependencyTypeAnd_DependencyGraphID(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, int, int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackageAndIndex@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@HPEAPEAU?$IVectorView@PEAVDependencyGraph@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndDependentPackageAndIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackage_SortedByIndex@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAU?$IVectorView@PEAVDependencyGraph@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndDependentPackage_SortedByIndex(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndSupplierPackage@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAU?$IVectorView@PEAVDependencyGraph@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndSupplierPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndSupplierPackageAndDependencyType@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@W4DependencyGraphType@234@PEAPEAU?$IVectorView@PEAVDependencyGraph@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndSupplierPackageAndDependencyType(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIDependencyGraph@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IDependencyGraph * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndDependentPackageAndSupplierPackage@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@1PEAPEAUIDependencyGraph@234@@Z
    virtual long GetByUserAndDependentPackageAndSupplierPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IDependencyGraph * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIDependencyGraph@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IDependencyGraph * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndDependentPackageAndSupplierPackage@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@1PEAPEAUIDependencyGraph@234@@Z
    virtual long TryGetByUserAndDependentPackageAndSupplierPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IDependencyGraph * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@DependencyGraphFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIDependencyGraph@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IDependencyGraph * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DependencyGraphFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~DependencyGraphFactoryServer();
};
} // namespace Windows::Internal::StateRepository
