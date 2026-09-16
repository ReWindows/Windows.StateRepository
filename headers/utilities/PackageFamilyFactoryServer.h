#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 26 member(s).
namespace Windows::Internal::StateRepository {
class PackageFamilyFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndPublisherId@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long ExistsByNameAndPublisherId(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyName@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageFamilyName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageSID@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageSID(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPublisherId@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPublisherId(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyName@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndPackageFamilyName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackageFamily@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageFamily@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageSID@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageFamily@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageSID(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPublisherId@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageFamily@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPublisherId(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVPackageFamily@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageFamily@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByNameAndPublisherId@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIPackageFamily@234@@Z
    virtual long GetByNameAndPublisherId(HSTRING__*, HSTRING__*, ::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageFamilyName@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIPackageFamily@234@@Z
    virtual long GetByPackageFamilyName(HSTRING__*, ::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndPackageFamilyName@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIPackageFamily@234@@Z
    virtual long GetByUserAndPackageFamilyName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrent@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackageFamily@234@@Z
    virtual long GetCurrent(::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageFamilyFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageFamilyFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageFamily@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByNameAndPublisherId@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAUIPackageFamily@234@@Z
    virtual long TryGetByNameAndPublisherId(HSTRING__*, HSTRING__*, ::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFamilyName@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIPackageFamily@234@@Z
    virtual long TryGetByPackageFamilyName(HSTRING__*, ::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageFamilyFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageFamily@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageFamily * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageFamilyFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageFamilyFactoryServer();
};
} // namespace Windows::Internal::StateRepository
