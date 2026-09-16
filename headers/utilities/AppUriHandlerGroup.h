#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 15 member(s).
namespace StateRepository::Entity {
class AppUriHandlerGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@AppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@AppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByExtension(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@AppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndExtension@AppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEA_N@Z
    static long ExistsByNameAndExtension(WindissectOpaque &, unsigned short const *, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@AppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByExtension(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@AppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@AppUriHandlerGroup@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@AppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByNameAndExtension@AppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEAV123@AEA_N@Z
    static long TryGetByNameAndExtension(WindissectOpaque &, unsigned short const *, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFamilyNameAndName@AppUriHandlerGroup@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAV123@AEA_N@Z
    static long TryGetByUserAndPackageFamilyNameAndName(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerGroup@Entity@StateRepository@@QEAA@XZ
    ~AppUriHandlerGroup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@AppUriHandlerGroup@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
