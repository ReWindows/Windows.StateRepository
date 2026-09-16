#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 22 member(s).
namespace StateRepository::Entity {
class AppExecutionAliasUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@AppExecutionAliasUser@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByApplicationIdentityAndUserAndAlias@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGW4ExecutionFlags@3@@Z
    static long DeleteByApplicationIdentityAndUserAndAlias(WindissectOpaque &, int64_t, int64_t, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationIdentity@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByApplicationIdentity(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationIdentityAndUser@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByApplicationIdentityAndUser(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationIdentityAndUserAndAlias@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEA_N@Z
    static long ExistsByApplicationIdentityAndUserAndAlias(WindissectOpaque &, int64_t, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplicationIdentity@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByApplicationIdentity(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplicationIdentityAndUser@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByApplicationIdentityAndUser(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlias@AppExecutionAliasUser@Entity@StateRepository@@QEAAJPEBG@Z
    long SetAlias(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplicationIdentityAndUserAndAlias@AppExecutionAliasUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEAV123@AEA_N@Z
    static long TryGetByApplicationIdentityAndUserAndAlias(WindissectOpaque &, int64_t, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@AppExecutionAliasUser@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExecutionAliasUser@Entity@StateRepository@@QEAA@XZ
    ~AppExecutionAliasUser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@AppExecutionAliasUser@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@AppExecutionAliasUser@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
