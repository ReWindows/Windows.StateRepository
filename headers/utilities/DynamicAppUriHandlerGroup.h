#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 22 member(s).
namespace StateRepository::Entity {
class DynamicAppUriHandlerGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@DynamicAppUriHandlerGroup@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackageFamilyAndName@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGW4ExecutionFlags@3@@Z
    static long DeleteByUserAndPackageFamilyAndName(WindissectOpaque &, int64_t, int64_t, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamily@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndPackageFamily(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndName@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEA_N@Z
    static long ExistsByUserAndPackageFamilyAndName(WindissectOpaque &, int64_t, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamily@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndPackageFamily(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceByUserAndPackageFamilyAndName@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEAX1PEBG3_KPEAPEBG45W4ExecutionFlags@3@@Z
    static long ReplaceByUserAndPackageFamilyAndName(WindissectOpaque &, int64_t, void *, int64_t, unsigned short const *, unsigned short const *, uint64_t, unsigned short const * *, uint64_t, unsigned short const * *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@DynamicAppUriHandlerGroup@Entity@StateRepository@@QEAAJPEBG@Z
    long SetName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFamilyAndName@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEAV123@AEA_N@Z
    static long TryGetByUserAndPackageFamilyAndName(WindissectOpaque &, int64_t, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFamilyNameAndName@DynamicAppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAV123@AEA_N@Z
    static long TryGetByUserAndPackageFamilyNameAndName(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@DynamicAppUriHandlerGroup@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicAppUriHandlerGroup@Entity@StateRepository@@QEAA@XZ
    ~DynamicAppUriHandlerGroup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@DynamicAppUriHandlerGroup@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@DynamicAppUriHandlerGroup@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
