#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 19 member(s).
namespace Windows::Internal::StateRepository {
class PackagePropertyFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndIndex@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@HPEAE@Z
    virtual long ExistsByPackageAndIndex(::Windows::Internal::StateRepository::IPackage *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndName@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageAndName(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackageProperty@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageProperty@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVPackageProperty@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageAndName@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageProperty@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageAndName(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageProperty@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPackageProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageAndIndex@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@HPEAPEAUIPackageProperty@234@@Z
    virtual long GetByPackageAndIndex(::Windows::Internal::StateRepository::IPackage *, int, ::Windows::Internal::StateRepository::IPackageProperty * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackagePropertyFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackagePropertyFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageProperty@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndIndex@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@HPEAPEAUIPackageProperty@234@@Z
    virtual long TryGetByPackageAndIndex(::Windows::Internal::StateRepository::IPackage *, int, ::Windows::Internal::StateRepository::IPackageProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackagePropertyFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageProperty@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageProperty * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackagePropertyFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackagePropertyFactoryServer();
};
} // namespace Windows::Internal::StateRepository
