#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 11 member(s).
namespace Windows::Internal::StateRepository {
class EnterpriseFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@EnterpriseFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnterpriseFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    EnterpriseFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@EnterpriseFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByEnterpriseId@EnterpriseFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long ExistsByEnterpriseId(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@EnterpriseFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVEnterprise@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@EnterpriseFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIEnterprise@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IEnterprise * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByEnterpriseId@EnterpriseFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUIEnterprise@234@@Z
    virtual long TryGetByEnterpriseId(_GUID, ::Windows::Internal::StateRepository::IEnterprise * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@EnterpriseFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIEnterprise@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IEnterprise * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnterpriseFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~EnterpriseFactoryServer();
};
} // namespace Windows::Internal::StateRepository
