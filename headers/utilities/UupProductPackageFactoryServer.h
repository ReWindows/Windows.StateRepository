#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 21 member(s).
namespace Windows::Internal::StateRepository {
class UupProductPackageFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProductPackage@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::IUupProductPackage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOrUpdateUupProduct@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@IPEAPEAU5@I1@Z
    virtual long AddOrUpdateUupProduct(HSTRING__*, unsigned int, HSTRING__* *, unsigned int, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProductPackage@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::IUupProductPackage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUupProduct@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProduct@234@@Z
    virtual long DeleteByUupProduct(::Windows::Internal::StateRepository::IUupProduct *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUupProductAndPackageIdentity@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProduct@234@PEAUIPackageIdentity@234@@Z
    virtual long DeleteByUupProductAndPackageIdentity(::Windows::Internal::StateRepository::IUupProduct *, ::Windows::Internal::StateRepository::IPackageIdentity *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUupProduct@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProduct@234@PEAE@Z
    virtual long ExistsByUupProduct(::Windows::Internal::StateRepository::IUupProduct *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUupProductAndPackageIdentity@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProduct@234@PEAUIPackageIdentity@234@PEAE@Z
    virtual long ExistsByUupProductAndPackageIdentity(::Windows::Internal::StateRepository::IUupProduct *, ::Windows::Internal::StateRepository::IPackageIdentity *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVUupProductPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUupProduct@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProduct@234@PEAPEAU?$IVectorView@PEAVUupProductPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUupProduct(::Windows::Internal::StateRepository::IUupProduct *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUupProductAndFlags@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProduct@234@W4UupProductPackageFlags@234@PEAPEAU?$IVectorView@PEAVUupProductPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUupProductAndFlags(::Windows::Internal::StateRepository::IUupProduct *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUupProductIdAndFlags@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4UupProductPackageFlags@234@PEAPEAU?$IVectorView@PEAVUupProductPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUupProductIdAndFlags(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIUupProductPackage@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IUupProductPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUupProductAndPackageIdentity@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProduct@234@PEAUIPackageIdentity@234@PEAPEAUIUupProductPackage@234@@Z
    virtual long TryGetByUupProductAndPackageIdentity(::Windows::Internal::StateRepository::IUupProduct *, ::Windows::Internal::StateRepository::IPackageIdentity *, ::Windows::Internal::StateRepository::IUupProductPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProductPackage@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::IUupProductPackage *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UupProductPackageFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    UupProductPackageFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@UupProductPackageFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIUupProductPackage@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IUupProductPackage * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UupProductPackageFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~UupProductPackageFactoryServer();
};
} // namespace Windows::Internal::StateRepository
