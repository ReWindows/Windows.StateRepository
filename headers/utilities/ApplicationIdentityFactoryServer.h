#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 11 member(s).
namespace Windows::Internal::StateRepository {
class ApplicationIdentityFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ApplicationIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationIdentityFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    ApplicationIdentityFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@ApplicationIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationUserModelId@ApplicationIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByApplicationUserModelId(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@ApplicationIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVApplicationIdentity@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@ApplicationIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIApplicationIdentity@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IApplicationIdentity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplicationUserModelId@ApplicationIdentityFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIApplicationIdentity@234@@Z
    virtual long TryGetByApplicationUserModelId(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationIdentity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@ApplicationIdentityFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIApplicationIdentity@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IApplicationIdentity * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationIdentityFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ApplicationIdentityFactoryServer();
};
} // namespace Windows::Internal::StateRepository
