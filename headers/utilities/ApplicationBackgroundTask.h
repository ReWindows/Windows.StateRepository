#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 16 member(s).
namespace StateRepository::Entity {
class ApplicationBackgroundTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByExtension(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtensionAndIndex@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVDatabase@3@_JHAEA_N@Z
    static long ExistsByExtensionAndIndex(WindissectOpaque &, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByType@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByType(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTypeAndExtension@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEA_N@Z
    static long ExistsByTypeAndExtension(WindissectOpaque &, unsigned short const *, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByExtension(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByType@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByType(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByExtensionAndIndex@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVDatabase@3@_JHAEAV123@AEA_N@Z
    static long TryGetByExtensionAndIndex(WindissectOpaque &, int64_t, int, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTypeAndExtension@ApplicationBackgroundTask@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEAV123@AEA_N@Z
    static long TryGetByTypeAndExtension(WindissectOpaque &, unsigned short const *, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationBackgroundTask@Entity@StateRepository@@QEAA@XZ
    ~ApplicationBackgroundTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@ApplicationBackgroundTask@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
