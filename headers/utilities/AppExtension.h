#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 16 member(s).
namespace StateRepository::Entity {
class AppExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@AppExtension@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@AppExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByExtension(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtensionAndName@AppExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByExtensionAndName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@AppExtension@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@AppExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByExtension(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@AppExtension@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndName@AppExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserOrDefaultAccountAndName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFullNameAndName@AppExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAVStatement@3@@Z
    static long FindByUserOrDefaultAccountAndPackageFullNameAndName(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@AppExtension@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@AppExtension@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByExtensionAndName@AppExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAV123@AEA_N@Z
    static long TryGetByExtensionAndName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtension@Entity@StateRepository@@QEAA@XZ
    ~AppExtension();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@AppExtension@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
