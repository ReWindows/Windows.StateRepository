#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 15 member(s).
namespace Windows::Internal::StateRepository {
class MrtSharedPriFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByFilename@MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByFilename(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVMrtSharedPri@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVMrtSharedPri@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIMrtSharedPri@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IMrtSharedPri * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByFilename@MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIMrtSharedPri@234@@Z
    virtual long GetByFilename(HSTRING__*, ::Windows::Internal::StateRepository::IMrtSharedPri * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    MrtSharedPriFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIMrtSharedPri@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IMrtSharedPri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByFilename@MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIMrtSharedPri@234@@Z
    virtual long TryGetByFilename(HSTRING__*, ::Windows::Internal::StateRepository::IMrtSharedPri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIMrtSharedPri@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IMrtSharedPri * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrtSharedPriFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~MrtSharedPriFactoryServer();
};
} // namespace Windows::Internal::StateRepository
