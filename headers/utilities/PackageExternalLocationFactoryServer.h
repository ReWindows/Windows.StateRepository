#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 19 member(s).
namespace Windows::Internal::StateRepository {
class PackageExternalLocationFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAE@Z
    virtual long ExistsByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsEffectiveByUserAndPackage@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAE@Z
    virtual long ExistsEffectiveByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsEffectiveByUserAndPackageFullName@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsEffectiveByUserAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackageExternalLocation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVPackageExternalLocation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVPackageExternalLocation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageExternalLocationFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageExternalLocation@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageExternalLocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackage@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAUIPackageExternalLocation@234@@Z
    virtual long TryGetByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IPackageExternalLocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetEffectiveByUserAndPackage@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAUIPackageExternalLocation@234@@Z
    virtual long TryGetEffectiveByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IPackageExternalLocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetEffectiveByUserAndPackageFullName@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIPackageExternalLocation@234@@Z
    virtual long TryGetEffectiveByUserAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPackageExternalLocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageExternalLocation@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageExternalLocation * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageExternalLocationFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageExternalLocationFactoryServer();
};
} // namespace Windows::Internal::StateRepository
