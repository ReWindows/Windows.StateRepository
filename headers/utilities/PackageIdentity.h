#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 19 member(s).
namespace StateRepository::Entity {
class PackageIdentity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageIdentity@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamily@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackageFamily(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFullName@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByPackageFullName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamily@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackageFamily(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindInUupProductPackageByUupProductPackageFlags@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@W4UupProductPackageFlags@3@AEAVStatement@3@@Z
    static long FindInUupProductPackageByUupProductPackageFlags(WindissectOpaque &, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@PackageIdentity@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GC@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long GC(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageFullName@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@@Z
    static long GetByPackageFullName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddIfNotExistByPackageFullName@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@W4ExecutionFlags@3@@Z
    static long GetOrAddIfNotExistByPackageFullName(WindissectOpaque &, unsigned short const *, WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageFullName@PackageIdentity@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPackageFullName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFullName@PackageIdentity@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByPackageFullName(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageIdentity@Entity@StateRepository@@QEAA@XZ
    ~PackageIdentity();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PackageIdentity@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageIdentity@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
