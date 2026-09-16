#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 24 member(s).
namespace StateRepository::Entity {
class PrimaryTileUserChangelog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByTileUniqueId@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@W4ExecutionFlags@3@@Z
    static long DeleteByTileUniqueId(WindissectOpaque &, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndTileUniqueId@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEBU_GUID@@W4ExecutionFlags@3@@Z
    static long DeleteByUserAndTileUniqueId(WindissectOpaque &, int64_t, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBy_Created@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long DeleteBy_Created(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteBy_Deleted@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long DeleteBy_Deleted(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEA_N@Z
    static long ExistsByTileUniqueId(WindissectOpaque &, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndTileUniqueId@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEBU_GUID@@AEA_N@Z
    static long ExistsByUserAndTileUniqueId(WindissectOpaque &, int64_t, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByWhenOccurred@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@U_FILETIME@@AEA_N@Z
    static long ExistsByWhenOccurred(WindissectOpaque &, _FILETIME, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Created@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsBy_Created(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Deleted@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsBy_Deleted(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByWhenOccurred@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@U_FILETIME@@AEAVStatement@3@@Z
    static long FindByWhenOccurred(WindissectOpaque &, _FILETIME, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAV123@AEA_N@Z
    static long TryGetByTileUniqueId(WindissectOpaque &, _GUID const &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndTileUniqueId@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEBU_GUID@@AEAV123@AEA_N@Z
    static long TryGetByUserAndTileUniqueId(WindissectOpaque &, int64_t, _GUID const &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBy_Created@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGetBy_Created(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBy_Deleted@PrimaryTileUserChangelog@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGetBy_Deleted(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileUserChangelog@Entity@StateRepository@@QEAA@XZ
    ~PrimaryTileUserChangelog();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PrimaryTileUserChangelog@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
