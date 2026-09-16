#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 12 member(s).
namespace StateRepository::Entity {
class MrtPackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@MrtPackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@MrtPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@MrtPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackage(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@MrtPackage@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@MrtPackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackage@MrtPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@@Z
    static long GetByPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MrtPackage@Entity@StateRepository@@QEAA@XZ
    MrtPackage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@MrtPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackage@MrtPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGetByPackage(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MrtPackage@Entity@StateRepository@@QEAA@XZ
    ~MrtPackage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@MrtPackage@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
