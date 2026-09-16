#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 24 member(s).
namespace StateRepository::Entity {
class SecondaryTileUserChangelog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByTileUniqueId@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@W4ExecutionFlags@3@@Z
    static long DeleteByTileUniqueId(WindissectOpaque &, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndTileUniqueId@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEBU_GUID@@W4ExecutionFlags@3@@Z
    static long DeleteByUserAndTileUniqueId(WindissectOpaque &, int64_t, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBy_Created@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long DeleteBy_Created(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBy_Deleted@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long DeleteBy_Deleted(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEA_N@Z
    static long ExistsByTileUniqueId(WindissectOpaque &, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndTileUniqueId@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEBU_GUID@@AEA_N@Z
    static long ExistsByUserAndTileUniqueId(WindissectOpaque &, int64_t, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByWhenOccurred@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@U_FILETIME@@AEA_N@Z
    static long ExistsByWhenOccurred(WindissectOpaque &, _FILETIME, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Created@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsBy_Created(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Deleted@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsBy_Deleted(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByWhenOccurred@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@U_FILETIME@@AEAVStatement@3@@Z
    static long FindByWhenOccurred(WindissectOpaque &, _FILETIME, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAV123@AEA_N@Z
    static long TryGetByTileUniqueId(WindissectOpaque &, _GUID const &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndTileUniqueId@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEBU_GUID@@AEAV123@AEA_N@Z
    static long TryGetByUserAndTileUniqueId(WindissectOpaque &, int64_t, _GUID const &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBy_Created@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGetBy_Created(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBy_Deleted@SecondaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGetBy_Deleted(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileUserChangelog@Entity@StateRepository@@QEAA@XZ
    ~SecondaryTileUserChangelog();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@SecondaryTileUserChangelog@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
