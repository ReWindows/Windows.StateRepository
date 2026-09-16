#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 16 member(s).
namespace StateRepository::Entity {
class AppInstallerUri {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@AppInstallerUri@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppInstallerUri@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstaller@AppInstallerUri@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByAppInstaller(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstallerAndUriType@AppInstallerUri@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4AppInstallerUriType@3@AEA_N@Z
    static long ExistsByAppInstallerAndUriType(WindissectOpaque &, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstallerAndUriTypeAndIndex@AppInstallerUri@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4AppInstallerUriType@3@HAEA_N@Z
    static long ExistsByAppInstallerAndUriTypeAndIndex(WindissectOpaque &, int64_t, int, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstallerAndUriTypeAndUri@AppInstallerUri@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4AppInstallerUriType@3@PEBGAEA_N@Z
    static long ExistsByAppInstallerAndUriTypeAndUri(WindissectOpaque &, int64_t, int, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppInstaller@AppInstallerUri@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByAppInstaller(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppInstallerAndUriType@AppInstallerUri@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4AppInstallerUriType@3@AEAVStatement@3@@Z
    static long FindByAppInstallerAndUriType(WindissectOpaque &, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@AppInstallerUri@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@AppInstallerUri@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppInstallerUri@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByAppInstallerAndUriTypeAndIndex@AppInstallerUri@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4AppInstallerUriType@3@HAEAV123@AEA_N@Z
    static long TryGetByAppInstallerAndUriTypeAndIndex(WindissectOpaque &, int64_t, int, int, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByAppInstallerAndUriTypeAndUri@AppInstallerUri@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4AppInstallerUriType@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByAppInstallerAndUriTypeAndUri(WindissectOpaque &, int64_t, int, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInstallerUri@Entity@StateRepository@@QEAA@XZ
    ~AppInstallerUri();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@AppInstallerUri@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
