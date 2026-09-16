#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 13 member(s).
namespace Windows::Internal::StateRepository {
class MrtApplicationFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@MrtApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@MrtApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplication@MrtApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAE@Z
    virtual long ExistsByApplication(::Windows::Internal::StateRepository::IApplication *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@MrtApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVMrtApplication@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@MrtApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIMrtApplication@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IMrtApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByApplication@MrtApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAPEAUIMrtApplication@234@@Z
    virtual long GetByApplication(::Windows::Internal::StateRepository::IApplication *, ::Windows::Internal::StateRepository::IMrtApplication * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrtApplicationFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    MrtApplicationFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@MrtApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIMrtApplication@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IMrtApplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplication@MrtApplicationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAPEAUIMrtApplication@234@@Z
    virtual long TryGetByApplication(::Windows::Internal::StateRepository::IApplication *, ::Windows::Internal::StateRepository::IMrtApplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@MrtApplicationFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIMrtApplication@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IMrtApplication * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrtApplicationFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~MrtApplicationFactoryServer();
};
} // namespace Windows::Internal::StateRepository
