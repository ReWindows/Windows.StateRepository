#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 23 member(s).
namespace Windows::Internal::StateRepository {
class SharedPackageContainerFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISharedPackageContainer@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::ISharedPackageContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWorkByWorkId@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long ClearWorkByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISharedPackageContainer@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::ISharedPackageContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteById@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long DeleteById(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndName@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@@Z
    virtual long DeleteByUserAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByWorkId@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsById@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsById(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndName@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVSharedPackageContainer@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVSharedPackageContainer@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    SharedPackageContainerFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISharedPackageContainer@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::ISharedPackageContainer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetById@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUISharedPackageContainer@234@@Z
    virtual long TryGetById(HSTRING__*, ::Windows::Internal::StateRepository::ISharedPackageContainer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndName@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUISharedPackageContainer@234@@Z
    virtual long TryGetByUserAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::ISharedPackageContainer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISharedPackageContainer@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::ISharedPackageContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkId@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J0@Z
    virtual long UpdateWorkId(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUISharedPackageContainer@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::ISharedPackageContainer * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedPackageContainerFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SharedPackageContainerFactoryServer();
};
} // namespace Windows::Internal::StateRepository
