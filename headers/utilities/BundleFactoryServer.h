#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 13 member(s).
namespace Windows::Internal::StateRepository {
class BundleFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@BundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BundleFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    BundleFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@BundleFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@BundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@BundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVBundle@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@BundleFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIBundle@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IBundle * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackage@BundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAUIBundle@234@@Z
    virtual long GetByPackage(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IBundle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@BundleFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIBundle@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IBundle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackage@BundleFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAUIBundle@234@@Z
    virtual long TryGetByPackage(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IBundle * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@BundleFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIBundle@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IBundle * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BundleFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~BundleFactoryServer();
};
} // namespace Windows::Internal::StateRepository
