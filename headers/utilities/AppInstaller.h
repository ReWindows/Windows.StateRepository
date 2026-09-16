#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 10 member(s).
namespace StateRepository::Entity {
class AppInstaller {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@AppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUri@AppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByUri(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@AppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GC@AppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long GC(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUri@AppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByUri(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInstaller@Entity@StateRepository@@QEAA@XZ
    ~AppInstaller();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@AppInstaller@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
