#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 21 member(s).
namespace Windows::Internal::StateRepository {
class PackageExtensionFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByCategory@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByCategory(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndCategory@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageAndCategory(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndIndex@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@HPEAE@Z
    virtual long ExistsByPackageAndIndex(::Windows::Internal::StateRepository::IPackage *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndCategory@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndCategory(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackageExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByCategory@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByCategory(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVPackageExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageAndCategory@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageAndCategory(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndCategory@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPackageExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndCategory(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageExtension@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPackageExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageAndIndex@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@HPEAPEAUIPackageExtension@234@@Z
    virtual long GetByPackageAndIndex(::Windows::Internal::StateRepository::IPackage *, int, ::Windows::Internal::StateRepository::IPackageExtension * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExtensionFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageExtensionFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageExtension@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageExtension * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndIndex@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@HPEAPEAUIPackageExtension@234@@Z
    virtual long TryGetByPackageAndIndex(::Windows::Internal::StateRepository::IPackage *, int, ::Windows::Internal::StateRepository::IPackageExtension * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageExtensionFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageExtension@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageExtension * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExtensionFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageExtensionFactoryServer();
};
} // namespace Windows::Internal::StateRepository
