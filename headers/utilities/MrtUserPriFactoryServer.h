#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 19 member(s).
namespace Windows::Internal::StateRepository {
class MrtUserPriFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByMrtSharedPri@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIMrtSharedPri@234@PEAE@Z
    virtual long ExistsByMrtSharedPri(::Windows::Internal::StateRepository::IMrtSharedPri *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndUser@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUIUser@234@PEAE@Z
    virtual long ExistsByPackageAndUser(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVMrtUserPri@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByMrtSharedPri@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIMrtSharedPri@234@PEAPEAU?$IVectorView@PEAVMrtUserPri@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByMrtSharedPri(::Windows::Internal::StateRepository::IMrtSharedPri *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVMrtUserPri@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVMrtUserPri@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIMrtUserPri@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IMrtUserPri * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageAndUser@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUIUser@234@PEAPEAUIMrtUserPri@234@@Z
    virtual long GetByPackageAndUser(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IMrtUserPri * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrtUserPriFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    MrtUserPriFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIMrtUserPri@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IMrtUserPri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndUser@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUIUser@234@PEAPEAUIMrtUserPri@234@@Z
    virtual long TryGetByPackageAndUser(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IMrtUserPri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@MrtUserPriFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIMrtUserPri@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IMrtUserPri * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrtUserPriFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~MrtUserPriFactoryServer();
};
} // namespace Windows::Internal::StateRepository
