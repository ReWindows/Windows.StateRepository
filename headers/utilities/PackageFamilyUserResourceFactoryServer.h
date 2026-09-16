#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 17 member(s).
namespace Windows::Internal::StateRepository {
class PackageFamilyUserResourceFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamilyUserResource@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::IPackageFamilyUserResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamilyUserResource@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::IPackageFamilyUserResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByPackageFamilyUserAndResourceId@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamilyUser@234@PEAUHSTRING__@@@Z
    virtual long DeleteByPackageFamilyUserAndResourceId(::Windows::Internal::StateRepository::IPackageFamilyUser *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyUser@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamilyUser@234@PEAE@Z
    virtual long ExistsByPackageFamilyUser(::Windows::Internal::StateRepository::IPackageFamilyUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyUserAndResourceId@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamilyUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageFamilyUserAndResourceId(::Windows::Internal::StateRepository::IPackageFamilyUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPackageFamilyUserResource@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyUser@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamilyUser@234@PEAPEAU?$IVectorView@PEAVPackageFamilyUserResource@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFamilyUser(::Windows::Internal::StateRepository::IPackageFamilyUser *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageFamilyUserResourceFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageFamilyUserResource@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageFamilyUserResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFamilyUserAndResourceId@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamilyUser@234@PEAUHSTRING__@@PEAPEAUIPackageFamilyUserResource@234@@Z
    virtual long TryGetByPackageFamilyUserAndResourceId(::Windows::Internal::StateRepository::IPackageFamilyUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPackageFamilyUserResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageFamilyUserResource@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::IPackageFamilyUserResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageFamilyUserResource@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageFamilyUserResource * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageFamilyUserResourceFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageFamilyUserResourceFactoryServer();
};
} // namespace Windows::Internal::StateRepository
