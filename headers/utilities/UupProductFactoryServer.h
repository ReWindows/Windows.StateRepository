#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 19 member(s).
namespace Windows::Internal::StateRepository {
class UupProductFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProduct@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::IUupProduct *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProduct@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::IUupProduct *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByProductIDAndVersion@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@_K@Z
    virtual long DeleteByProductIDAndVersion(HSTRING__*, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProductID@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByProductID(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProductIDAndVersion@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@_KPEAE@Z
    virtual long ExistsByProductIDAndVersion(HSTRING__*, uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVUupProduct@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFullNameAndUupProductPackageFlags@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@W4UupProductPackageFlags@234@PEAPEAU?$IVectorView@PEAVUupProduct@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageFullNameAndUupProductPackageFlags(HSTRING__*, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProductID@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVUupProduct@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByProductID(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIUupProduct@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IUupProduct * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByProductIDAndVersion@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@_KPEAPEAUIUupProduct@234@@Z
    virtual long TryGetByProductIDAndVersion(HSTRING__*, uint64_t, ::Windows::Internal::StateRepository::IUupProduct * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByProductIDMaxVersion@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIUupProduct@234@@Z
    virtual long TryGetByProductIDMaxVersion(HSTRING__*, ::Windows::Internal::StateRepository::IUupProduct * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@UupProductFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUupProduct@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::IUupProduct *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UupProductFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    UupProductFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@UupProductFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIUupProduct@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IUupProduct * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UupProductFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~UupProductFactoryServer();
};
} // namespace Windows::Internal::StateRepository
