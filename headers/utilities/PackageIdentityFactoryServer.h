#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 16 member(s).
namespace Windows::Internal::StateRepository {
class PackageIdentityFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamily@PackageIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAE@Z
    virtual long ExistsByPackageFamily(::Windows::Internal::StateRepository::IPackageFamily *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFullName@PackageIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageFullName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackageIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackageIdentity@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamily@PackageIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAPEAU?$IVectorView@PEAVPackageIdentity@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamily(::Windows::Internal::StateRepository::IPackageFamily *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindInUupProductPackageByUupProductPackageFlags@PackageIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJW4UupProductPackageFlags@234@PEAPEAU?$IVectorView@PEAVPackageIdentity@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindInUupProductPackageByUupProductPackageFlags(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageIdentity@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPackageIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageFullName@PackageIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIPackageIdentity@234@@Z
    virtual long GetByPackageFullName(HSTRING__*, ::Windows::Internal::StateRepository::IPackageIdentity * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageIdentityFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageIdentityFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageIdentity@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageIdentity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFullName@PackageIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIPackageIdentity@234@@Z
    virtual long TryGetByPackageFullName(HSTRING__*, ::Windows::Internal::StateRepository::IPackageIdentity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageIdentityFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageIdentity@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageIdentity * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageIdentityFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageIdentityFactoryServer();
};
} // namespace Windows::Internal::StateRepository
