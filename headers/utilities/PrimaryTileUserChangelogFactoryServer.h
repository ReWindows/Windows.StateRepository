#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 30 member(s).
namespace Windows::Internal::StateRepository {
class PrimaryTileUserChangelogFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByTileUniqueId@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long DeleteByTileUniqueId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndTileUniqueId@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@U_GUID@@@Z
    virtual long DeleteByUserAndTileUniqueId(::Windows::Internal::StateRepository::IUser *, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBy_Created@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteBy_Created(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBy_Deleted@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteBy_Deleted(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long ExistsByTileUniqueId(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndTileUniqueId@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@U_GUID@@PEAE@Z
    virtual long ExistsByUserAndTileUniqueId(::Windows::Internal::StateRepository::IUser *, _GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByWhenOccurred@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJUDateTime@Foundation@4@PEAE@Z
    virtual long ExistsByWhenOccurred(WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Created@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long ExistsBy_Created(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Deleted@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long ExistsBy_Deleted(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPrimaryTileUserChangelog@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVPrimaryTileUserChangelog@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByWhenOccurred@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJUDateTime@Foundation@4@PEAPEAU?$IVectorView@PEAVPrimaryTileUserChangelog@StateRepository@Internal@Windows@@@Collections@64@@Z
    virtual long FindByWhenOccurred(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTileUserChangelog@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileUserChangelog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByTileUniqueId@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUIPrimaryTileUserChangelog@234@@Z
    virtual long GetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::IPrimaryTileUserChangelog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndTileUniqueId@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@U_GUID@@PEAPEAUIPrimaryTileUserChangelog@234@@Z
    virtual long GetByUserAndTileUniqueId(::Windows::Internal::StateRepository::IUser *, _GUID, ::Windows::Internal::StateRepository::IPrimaryTileUserChangelog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBy_Created@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTileUserChangelog@234@@Z
    virtual long GetBy_Created(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileUserChangelog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBy_Deleted@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTileUserChangelog@234@@Z
    virtual long GetBy_Deleted(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileUserChangelog * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PrimaryTileUserChangelogFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTileUserChangelog@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileUserChangelog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUIPrimaryTileUserChangelog@234@@Z
    virtual long TryGetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::IPrimaryTileUserChangelog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndTileUniqueId@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@U_GUID@@PEAPEAUIPrimaryTileUserChangelog@234@@Z
    virtual long TryGetByUserAndTileUniqueId(::Windows::Internal::StateRepository::IUser *, _GUID, ::Windows::Internal::StateRepository::IPrimaryTileUserChangelog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBy_Created@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTileUserChangelog@234@@Z
    virtual long TryGetBy_Created(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileUserChangelog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBy_Deleted@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTileUserChangelog@234@@Z
    virtual long TryGetBy_Deleted(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileUserChangelog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPrimaryTileUserChangelog@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileUserChangelog * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PrimaryTileUserChangelogFactoryServer();
};
} // namespace Windows::Internal::StateRepository
