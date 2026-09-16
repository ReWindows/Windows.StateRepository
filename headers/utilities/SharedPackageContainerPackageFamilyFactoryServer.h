#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 13 member(s).
namespace Windows::Internal::StateRepository {
class SharedPackageContainerPackageFamilyFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@SharedPackageContainerPackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@SharedPackageContainerPackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBySharedPackageContainer@SharedPackageContainerPackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISharedPackageContainer@234@PEAE@Z
    virtual long ExistsBySharedPackageContainer(::Windows::Internal::StateRepository::ISharedPackageContainer *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBySharedPackageContainerAndPackageFamilyName@SharedPackageContainerPackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISharedPackageContainer@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsBySharedPackageContainerAndPackageFamilyName(::Windows::Internal::StateRepository::ISharedPackageContainer *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@SharedPackageContainerPackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVSharedPackageContainerPackageFamily@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBySharedPackageContainer@SharedPackageContainerPackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISharedPackageContainer@234@PEAPEAU?$IVectorView@PEAVSharedPackageContainerPackageFamily@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindBySharedPackageContainer(::Windows::Internal::StateRepository::ISharedPackageContainer *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedPackageContainerPackageFamilyFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    SharedPackageContainerPackageFamilyFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@SharedPackageContainerPackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISharedPackageContainerPackageFamily@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::ISharedPackageContainerPackageFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBySharedPackageContainerAndPackageFamilyName@SharedPackageContainerPackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISharedPackageContainer@234@PEAUHSTRING__@@PEAPEAUISharedPackageContainerPackageFamily@234@@Z
    virtual long TryGetBySharedPackageContainerAndPackageFamilyName(::Windows::Internal::StateRepository::ISharedPackageContainer *, HSTRING__*, ::Windows::Internal::StateRepository::ISharedPackageContainerPackageFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@SharedPackageContainerPackageFamilyFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUISharedPackageContainerPackageFamily@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::ISharedPackageContainerPackageFamily * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedPackageContainerPackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SharedPackageContainerPackageFamilyFactoryServer();
};
} // namespace Windows::Internal::StateRepository
