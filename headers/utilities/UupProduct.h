#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 20 member(s).
namespace StateRepository::Entity {
class UupProduct {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@UupProduct@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@UupProduct@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@UupProduct@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByProductIDAndVersion@UupProduct@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_KW4ExecutionFlags@3@@Z
    static long DeleteByProductIDAndVersion(WindissectOpaque &, unsigned short const *, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@UupProduct@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProductID@UupProduct@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByProductID(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProductIDAndVersion@UupProduct@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_KAEA_N@Z
    static long ExistsByProductIDAndVersion(WindissectOpaque &, unsigned short const *, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFullNameAndUupProductPackageFlags@UupProduct@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGW4UupProductPackageFlags@3@AEAVStatement@3@@Z
    static long FindByPackageFullNameAndUupProductPackageFlags(WindissectOpaque &, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProductID@UupProduct@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByProductID(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@UupProduct@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@UupProduct@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProductID@UupProduct@Entity@StateRepository@@QEAAJPEBG@Z
    long SetProductID(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@UupProduct@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByProductIDAndVersion@UupProduct@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_KAEAV123@AEA_N@Z
    static long TryGetByProductIDAndVersion(WindissectOpaque &, unsigned short const *, uint64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByProductIDMaxVersion@UupProduct@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByProductIDMaxVersion(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@UupProduct@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UupProduct@Entity@StateRepository@@QEAA@XZ
    ~UupProduct();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@UupProduct@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@UupProduct@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
