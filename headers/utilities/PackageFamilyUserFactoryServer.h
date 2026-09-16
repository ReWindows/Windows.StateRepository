#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 17 member(s).
namespace Windows::Internal::StateRepository {
class PackageFamilyUserFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamily@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAE@Z
    virtual long ExistsByPackageFamily(::Windows::Internal::StateRepository::IPackageFamily *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamily@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAE@Z
    virtual long ExistsByUserAndPackageFamily(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackageFamilyUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamily@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamily@234@PEAPEAU?$IVectorView@PEAVPackageFamilyUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamily(::Windows::Internal::StateRepository::IPackageFamily *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVPackageFamilyUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndPackageFamilyName@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIPackageFamilyUser@234@@Z
    virtual long GetByUserAndPackageFamilyName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPackageFamilyUser * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageFamilyUserFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageFamilyUser@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageFamilyUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFamily@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAPEAUIPackageFamilyUser@234@@Z
    virtual long TryGetByUserAndPackageFamily(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, ::Windows::Internal::StateRepository::IPackageFamilyUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFamilyName@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIPackageFamilyUser@234@@Z
    virtual long TryGetByUserAndPackageFamilyName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPackageFamilyUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageFamilyUser@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageFamilyUser * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageFamilyUserFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageFamilyUserFactoryServer();
};
} // namespace Windows::Internal::StateRepository
