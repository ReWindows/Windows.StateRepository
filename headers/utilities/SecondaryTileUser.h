#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 34 member(s).
namespace StateRepository::Entity {
class SecondaryTileUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@SecondaryTileUser@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByTileUniqueId@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@W4ExecutionFlags@3@@Z
    static long DeleteByTileUniqueId(WindissectOpaque &, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndSecondaryTile@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4ExecutionFlags@3@@Z
    static long DeleteByUserAndSecondaryTile(WindissectOpaque &, int64_t, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndTileUniqueId@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEBU_GUID@@W4ExecutionFlags@3@@Z
    static long DeleteByUserAndTileUniqueId(WindissectOpaque &, int64_t, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEA_N@Z
    static long ExistsByTileUniqueId(WindissectOpaque &, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationIdentity@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndApplicationIdentity(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndSecondaryTile@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndSecondaryTile(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Created@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsBy_Created(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Modified@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsBy_Modified(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndApplicationIdentity@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndApplicationIdentity(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBy_Created@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindBy_Created(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBy_Modified@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindBy_Modified(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByGTChangeId@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindDataChangeByGTChangeId(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByGTWhenOccurred@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@U_FILETIME@@AEAVStatement@3@@Z
    static long FindDataChangeByGTWhenOccurred(WindissectOpaque &, _FILETIME, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByUserAndGTChangeId@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindDataChangeByUserAndGTChangeId(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByUserAndGTWhenOccurred@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JU_FILETIME@@AEAVStatement@3@@Z
    static long FindDataChangeByUserAndGTWhenOccurred(WindissectOpaque &, int64_t, _FILETIME, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@SecondaryTileUser@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndSecondaryTile@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@@Z
    static long GetByUserAndSecondaryTile(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataChangeByChangeId@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVSecondaryTileUserDataChange@23@@Z
    static long GetDataChangeByChangeId(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAV123@AEA_N@Z
    static long TryGetByTileUniqueId(WindissectOpaque &, _GUID const &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndSecondaryTile@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@AEA_N@Z
    static long TryGetByUserAndSecondaryTile(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndTileUniqueId@SecondaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEBU_GUID@@AEAV123@AEA_N@Z
    static long TryGetByUserAndTileUniqueId(WindissectOpaque &, int64_t, _GUID const &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@SecondaryTileUser@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileUser@Entity@StateRepository@@QEAA@XZ
    ~SecondaryTileUser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@SecondaryTileUser@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@SecondaryTileUser@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
