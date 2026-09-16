#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 24 member(s).
namespace StateRepository::Entity {
class UupProductPackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@UupProductPackage@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUupProduct@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long DeleteByUupProduct(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUupProductAndPackageIdentity@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4ExecutionFlags@3@@Z
    static long DeleteByUupProductAndPackageIdentity(WindissectOpaque &, int64_t, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUupProduct@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUupProduct(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUupProductAndPackageIdentity@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUupProductAndPackageIdentity(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUupProduct@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUupProduct(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUupProductAndFlags@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4UupProductPackageFlags@3@AEAVStatement@3@@Z
    static long FindByUupProductAndFlags(WindissectOpaque &, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUupProductIDAndFlags@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGW4UupProductPackageFlags@3@AEAVStatement@3@@Z
    static long FindByUupProductIDAndFlags(WindissectOpaque &, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@UupProductPackage@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkNotApplicableByUupProduct@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J@Z
    static long MarkNotApplicableByUupProduct(WindissectOpaque &, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsApplicable@UupProductPackage@Entity@StateRepository@@QEAAJ_N@Z
    long SetIsApplicable(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUupProductAndPackageFullName@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAV123@AEA_N@Z
    static long TryGetByUupProductAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUupProductAndPackageIdentity@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@AEA_N@Z
    static long TryGetByUupProductAndPackageIdentity(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@UupProductPackage@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsApplicableForUupProductAndPackageFullName@UupProductPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG_N@Z
    static long UpdateIsApplicableForUupProductAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UupProductPackage@Entity@StateRepository@@QEAA@XZ
    ~UupProductPackage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@UupProductPackage@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@UupProductPackage@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
