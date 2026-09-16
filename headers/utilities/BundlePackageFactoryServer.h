#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 24 member(s).
namespace Windows::Internal::StateRepository {
class BundlePackageFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BundlePackageFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    BundlePackageFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByBundle@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@PEAE@Z
    virtual long ExistsByBundle(::Windows::Internal::StateRepository::IBundle *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByBundleAndVersion@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@_KPEAE@Z
    virtual long ExistsByBundleAndVersion(::Windows::Internal::StateRepository::IBundle *, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByBundleAndVersionAndArchitecture@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@_KIPEAE@Z
    virtual long ExistsByBundleAndVersionAndArchitecture(::Windows::Internal::StateRepository::IBundle *, uint64_t, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByBundleAndVersionAndArchitectureAndResourceId@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@_KIPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByBundleAndVersionAndArchitectureAndResourceId(::Windows::Internal::StateRepository::IBundle *, uint64_t, unsigned int, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyNameAndResourceId@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long ExistsByPackageFamilyNameAndResourceId(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageType@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJW4BundlePackageType@234@PEAE@Z
    virtual long ExistsByPackageType(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageTypeAndBundle@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJW4BundlePackageType@234@PEAUIBundle@234@PEAE@Z
    virtual long ExistsByPackageTypeAndBundle(int, ::Windows::Internal::StateRepository::IBundle *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVBundlePackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByBundle@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@PEAPEAU?$IVectorView@PEAVBundlePackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByBundle(::Windows::Internal::StateRepository::IBundle *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByBundleAndVersion@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@_KPEAPEAU?$IVectorView@PEAVBundlePackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByBundleAndVersion(::Windows::Internal::StateRepository::IBundle *, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByBundleAndVersionAndArchitecture@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@_KIPEAPEAU?$IVectorView@PEAVBundlePackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByBundleAndVersionAndArchitecture(::Windows::Internal::StateRepository::IBundle *, uint64_t, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageType@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJW4BundlePackageType@234@PEAPEAU?$IVectorView@PEAVBundlePackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageType(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageTypeAndBundle@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJW4BundlePackageType@234@PEAUIBundle@234@PEAPEAU?$IVectorView@PEAVBundlePackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageTypeAndBundle(int, ::Windows::Internal::StateRepository::IBundle *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIBundlePackage@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IBundlePackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByBundleAndVersionAndArchitectureAndResourceId@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@_KIPEAUHSTRING__@@PEAPEAUIBundlePackage@234@@Z
    virtual long GetByBundleAndVersionAndArchitectureAndResourceId(::Windows::Internal::StateRepository::IBundle *, uint64_t, unsigned int, HSTRING__*, ::Windows::Internal::StateRepository::IBundlePackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIBundlePackage@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IBundlePackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByBundleAndVersionAndArchitectureAndResourceId@BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIBundle@234@_KIPEAUHSTRING__@@PEAPEAUIBundlePackage@234@@Z
    virtual long TryGetByBundleAndVersionAndArchitectureAndResourceId(::Windows::Internal::StateRepository::IBundle *, uint64_t, unsigned int, HSTRING__*, ::Windows::Internal::StateRepository::IBundlePackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@BundlePackageFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIBundlePackage@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IBundlePackage * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BundlePackageFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~BundlePackageFactoryServer();
};
} // namespace Windows::Internal::StateRepository
