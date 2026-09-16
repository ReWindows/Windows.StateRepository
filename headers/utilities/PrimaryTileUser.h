#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 34 member(s).
namespace StateRepository::Entity {
class PrimaryTileUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PrimaryTileUser@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddByPackageUserIfNotExists@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long AddByPackageUserIfNotExists(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndApplicationIdentity@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4ExecutionFlags@3@@Z
    static long DeleteByUserAndApplicationIdentity(WindissectOpaque &, int64_t, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndTileUniqueId@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEBU_GUID@@W4ExecutionFlags@3@@Z
    static long DeleteByUserAndTileUniqueId(WindissectOpaque &, int64_t, _GUID const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationIdentity@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByApplicationIdentity(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEA_N@Z
    static long ExistsByTileUniqueId(WindissectOpaque &, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationIdentity@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndApplicationIdentity(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Created@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsBy_Created(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Modified@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsBy_Modified(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplicationIdentity@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByApplicationIdentity(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBy_Created@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindBy_Created(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBy_Modified@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindBy_Modified(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByGTChangeId@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindDataChangeByGTChangeId(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByGTWhenOccurred@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@U_FILETIME@@AEAVStatement@3@@Z
    static long FindDataChangeByGTWhenOccurred(WindissectOpaque &, _FILETIME, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByUserAndGTChangeId@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindDataChangeByUserAndGTChangeId(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByUserAndGTWhenOccurred@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JU_FILETIME@@AEAVStatement@3@@Z
    static long FindDataChangeByUserAndGTWhenOccurred(WindissectOpaque &, int64_t, _FILETIME, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@PrimaryTileUser@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndApplicationIdentity@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@@Z
    static long GetByUserAndApplicationIdentity(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataChangeByChangeId@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVPrimaryTileUserDataChange@23@@Z
    static long GetDataChangeByChangeId(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAV123@AEA_N@Z
    static long TryGetByTileUniqueId(WindissectOpaque &, _GUID const &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplicationIdentity@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@AEA_N@Z
    static long TryGetByUserAndApplicationIdentity(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndTileUniqueId@PrimaryTileUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEBU_GUID@@AEAV123@AEA_N@Z
    static long TryGetByUserAndTileUniqueId(WindissectOpaque &, int64_t, _GUID const &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@PrimaryTileUser@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileUser@Entity@StateRepository@@QEAA@XZ
    ~PrimaryTileUser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PrimaryTileUser@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PrimaryTileUser@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
