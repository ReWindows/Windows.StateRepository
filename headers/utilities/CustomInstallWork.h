#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 23 member(s).
namespace StateRepository::Entity {
class CustomInstallWork {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CustomInstallWork@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackageAndIndex@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_J1HW4ExecutionFlags@3@@Z
    static long DeleteByUserAndPackageAndIndex(WindissectOpaque &, int64_t, int64_t, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackageAndName@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGW4ExecutionFlags@3@@Z
    static long DeleteByUserAndPackageAndName(WindissectOpaque &, int64_t, int64_t, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndPackage(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageAndIndex@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_J1HAEA_N@Z
    static long ExistsByUserAndPackageAndIndex(WindissectOpaque &, int64_t, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageAndName@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEA_N@Z
    static long ExistsByUserAndPackageAndName(WindissectOpaque &, int64_t, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackage@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFile@CustomInstallWork@Entity@StateRepository@@QEAAJPEBG@Z
    long SetFile(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@CustomInstallWork@Entity@StateRepository@@QEAAJPEBG@Z
    long SetName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageAndIndex@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_J1HAEAV123@AEA_N@Z
    static long TryGetByUserAndPackageAndIndex(WindissectOpaque &, int64_t, int64_t, int, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageAndName@CustomInstallWork@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEAV123@AEA_N@Z
    static long TryGetByUserAndPackageAndName(WindissectOpaque &, int64_t, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CustomInstallWork@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomInstallWork@Entity@StateRepository@@QEAA@XZ
    ~CustomInstallWork();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@CustomInstallWork@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@CustomInstallWork@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
