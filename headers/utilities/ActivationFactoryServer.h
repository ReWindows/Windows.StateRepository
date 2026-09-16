#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 11 member(s).
namespace Windows::Internal::StateRepository {
class ActivationFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ActivationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivationFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    ActivationFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@ActivationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByActivationKey@ActivationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByActivationKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@ActivationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVActivation@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@ActivationFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIActivation@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IActivation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByActivationKey@ActivationFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIActivation@234@@Z
    virtual long TryGetByActivationKey(HSTRING__*, ::Windows::Internal::StateRepository::IActivation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@ActivationFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIActivation@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IActivation * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivationFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ActivationFactoryServer();
};
} // namespace Windows::Internal::StateRepository
