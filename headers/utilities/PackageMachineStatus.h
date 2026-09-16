#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 12 member(s).
namespace StateRepository::Entity {
class PackageMachineStatus {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PackageMachineStatus@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByPackageFullName@PackageMachineStatus@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGW4ExecutionFlags@3@@Z
    static long DeleteByPackageFullName(WindissectOpaque &, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageMachineStatus@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageIdentity@PackageMachineStatus@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackageIdentity(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@PackageMachineStatus@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PackageMachineStatus@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageMachineStatus@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageIdentity@PackageMachineStatus@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGetByPackageIdentity(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStatusByPackageFullName@PackageMachineStatus@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGIIW4ExecutionFlags@3@@Z
    static long UpdateStatusByPackageFullName(WindissectOpaque &, unsigned short const *, unsigned int, unsigned int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageMachineStatus@Entity@StateRepository@@QEAA@XZ
    ~PackageMachineStatus();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageMachineStatus@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
