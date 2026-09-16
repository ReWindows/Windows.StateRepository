#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 30 member(s).
namespace Windows::Internal::StateRepository {
class SecondaryTileUserChangelogFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByTileUniqueId@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long DeleteByTileUniqueId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndTileUniqueId@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@U_GUID@@@Z
    virtual long DeleteByUserAndTileUniqueId(::Windows::Internal::StateRepository::IUser *, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBy_Created@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteBy_Created(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBy_Deleted@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteBy_Deleted(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long ExistsByTileUniqueId(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndTileUniqueId@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@U_GUID@@PEAE@Z
    virtual long ExistsByUserAndTileUniqueId(::Windows::Internal::StateRepository::IUser *, _GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByWhenOccurred@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJUDateTime@Foundation@4@PEAE@Z
    virtual long ExistsByWhenOccurred(WindissectOpaque, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Created@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long ExistsBy_Created(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Deleted@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long ExistsBy_Deleted(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVSecondaryTileUserChangelog@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVSecondaryTileUserChangelog@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByWhenOccurred@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJUDateTime@Foundation@4@PEAPEAU?$IVectorView@PEAVSecondaryTileUserChangelog@StateRepository@Internal@Windows@@@Collections@64@@Z
    virtual long FindByWhenOccurred(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTileUserChangelog@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileUserChangelog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByTileUniqueId@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUISecondaryTileUserChangelog@234@@Z
    virtual long GetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::ISecondaryTileUserChangelog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndTileUniqueId@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@U_GUID@@PEAPEAUISecondaryTileUserChangelog@234@@Z
    virtual long GetByUserAndTileUniqueId(::Windows::Internal::StateRepository::IUser *, _GUID, ::Windows::Internal::StateRepository::ISecondaryTileUserChangelog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBy_Created@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTileUserChangelog@234@@Z
    virtual long GetBy_Created(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileUserChangelog * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBy_Deleted@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTileUserChangelog@234@@Z
    virtual long GetBy_Deleted(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileUserChangelog * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    SecondaryTileUserChangelogFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTileUserChangelog@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileUserChangelog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUISecondaryTileUserChangelog@234@@Z
    virtual long TryGetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::ISecondaryTileUserChangelog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndTileUniqueId@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@U_GUID@@PEAPEAUISecondaryTileUserChangelog@234@@Z
    virtual long TryGetByUserAndTileUniqueId(::Windows::Internal::StateRepository::IUser *, _GUID, ::Windows::Internal::StateRepository::ISecondaryTileUserChangelog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBy_Created@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTileUserChangelog@234@@Z
    virtual long TryGetBy_Created(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileUserChangelog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBy_Deleted@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTileUserChangelog@234@@Z
    virtual long TryGetBy_Deleted(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileUserChangelog * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUISecondaryTileUserChangelog@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileUserChangelog * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileUserChangelogFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SecondaryTileUserChangelogFactoryServer();
};
} // namespace Windows::Internal::StateRepository
