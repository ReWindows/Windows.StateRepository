#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 16 member(s).
namespace StateRepository::Entity {
class AutoUpdatePackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstaller@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByAppInstaller(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstallerAndPackageFamily@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByAppInstallerAndPackageFamily(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstallerAndPackageFamilyAndVersion@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J1_KAEA_N@Z
    static long ExistsByAppInstallerAndPackageFamilyAndVersion(WindissectOpaque &, int64_t, int64_t, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstallerAndPackageFamilyAndVersionAndArchitecture@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J1_KIAEA_N@Z
    static long ExistsByAppInstallerAndPackageFamilyAndVersionAndArchitecture(WindissectOpaque &, int64_t, int64_t, uint64_t, unsigned int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppInstaller@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByAppInstaller(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppInstallerAndPackageFamily@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByAppInstallerAndPackageFamily(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppInstallerAndPackageFamilyAndVersion@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J1_KAEAVStatement@3@@Z
    static long FindByAppInstallerAndPackageFamilyAndVersion(WindissectOpaque &, int64_t, int64_t, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByAppInstallerAndPackageFamilyAndVersionAndArchitecture@AutoUpdatePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J1_KIAEAV123@AEA_N@Z
    static long TryGetByAppInstallerAndPackageFamilyAndVersionAndArchitecture(WindissectOpaque &, int64_t, int64_t, uint64_t, unsigned int, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoUpdatePackage@Entity@StateRepository@@QEAA@XZ
    ~AutoUpdatePackage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@AutoUpdatePackage@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
