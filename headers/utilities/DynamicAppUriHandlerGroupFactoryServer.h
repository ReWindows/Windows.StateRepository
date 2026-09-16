#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 21 member(s).
namespace Windows::Internal::StateRepository {
class DynamicAppUriHandlerGroupFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIDynamicAppUriHandlerGroup@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIDynamicAppUriHandlerGroup@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackageFamilyAndName@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@@Z
    virtual long DeleteByUserAndPackageFamilyAndName(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    DynamicAppUriHandlerGroupFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamily@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAE@Z
    virtual long ExistsByUserAndPackageFamily(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndName@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndPackageFamilyAndName(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVDynamicAppUriHandlerGroup@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVDynamicAppUriHandlerGroup@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamily@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAPEAU?$IVectorView@PEAVDynamicAppUriHandlerGroup@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackageFamily(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceByUserAndPackageFamilyNameAndName@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@2@Z
    virtual long ReplaceByUserAndPackageFamilyNameAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIDynamicAppUriHandlerGroup@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFamilyAndName@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageFamily@234@PEAUHSTRING__@@PEAPEAUIDynamicAppUriHandlerGroup@234@@Z
    virtual long TryGetByUserAndPackageFamilyAndName(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageFamily *, HSTRING__*, ::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFamilyNameAndName@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAUIDynamicAppUriHandlerGroup@234@@Z
    virtual long TryGetByUserAndPackageFamilyNameAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, ::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIDynamicAppUriHandlerGroup@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIDynamicAppUriHandlerGroup@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IDynamicAppUriHandlerGroup * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicAppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~DynamicAppUriHandlerGroupFactoryServer();
};
} // namespace Windows::Internal::StateRepository
