#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 14 member(s).
namespace StateRepository::Entity {
class PackageAppInstaller {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PackageAppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageAppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstaller@PackageAppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByAppInstaller(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackageAppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackage(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndAppInstaller@PackageAppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByPackageAndAppInstaller(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppInstaller@PackageAppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByAppInstaller(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PackageAppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@PackageAppInstaller@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PackageAppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageAppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndAppInstaller@PackageAppInstaller@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@AEA_N@Z
    static long TryGetByPackageAndAppInstaller(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageAppInstaller@Entity@StateRepository@@QEAA@XZ
    ~PackageAppInstaller();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageAppInstaller@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
