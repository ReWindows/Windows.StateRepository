#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 13 member(s).
namespace Windows::Internal::StateRepository {
class MrtPackageFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@MrtPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@MrtPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@MrtPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@MrtPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVMrtPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@MrtPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIMrtPackage@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IMrtPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackage@MrtPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAUIMrtPackage@234@@Z
    virtual long GetByPackage(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IMrtPackage * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrtPackageFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    MrtPackageFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@MrtPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIMrtPackage@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IMrtPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackage@MrtPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAUIMrtPackage@234@@Z
    virtual long TryGetByPackage(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IMrtPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@MrtPackageFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIMrtPackage@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IMrtPackage * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrtPackageFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~MrtPackageFactoryServer();
};
} // namespace Windows::Internal::StateRepository
