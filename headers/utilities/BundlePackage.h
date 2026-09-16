#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 21 member(s).
namespace StateRepository::Entity {
class BundlePackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByBundle@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByBundle(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByBundleAndVersion@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J_KAEA_N@Z
    static long ExistsByBundleAndVersion(WindissectOpaque &, int64_t, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByBundleAndVersionAndArchitecture@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J_KIAEA_N@Z
    static long ExistsByBundleAndVersionAndArchitecture(WindissectOpaque &, int64_t, uint64_t, unsigned int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByBundleAndVersionAndArchitectureAndResourceId@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J_KIPEBGAEA_N@Z
    static long ExistsByBundleAndVersionAndArchitectureAndResourceId(WindissectOpaque &, int64_t, uint64_t, unsigned int, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyNameAndResourceId@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG1AEA_N@Z
    static long ExistsByPackageFamilyNameAndResourceId(WindissectOpaque &, unsigned short const *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageType@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4BundlePackageType@3@AEA_N@Z
    static long ExistsByPackageType(WindissectOpaque &, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageTypeAndBundle@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4BundlePackageType@3@_JAEA_N@Z
    static long ExistsByPackageTypeAndBundle(WindissectOpaque &, int, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByBundle@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByBundle(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByBundleAndVersion@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J_KAEAVStatement@3@@Z
    static long FindByBundleAndVersion(WindissectOpaque &, int64_t, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByBundleAndVersionAndArchitecture@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J_KIAEAVStatement@3@@Z
    static long FindByBundleAndVersionAndArchitecture(WindissectOpaque &, int64_t, uint64_t, unsigned int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageType@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4BundlePackageType@3@AEAVStatement@3@@Z
    static long FindByPackageType(WindissectOpaque &, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageTypeAndBundle@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4BundlePackageType@3@_JAEAVStatement@3@@Z
    static long FindByPackageTypeAndBundle(WindissectOpaque &, int, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@BundlePackage@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByBundleAndVersionAndArchitectureAndResourceId@BundlePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_J_KIPEBGAEAV123@AEA_N@Z
    static long TryGetByBundleAndVersionAndArchitectureAndResourceId(WindissectOpaque &, int64_t, uint64_t, unsigned int, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BundlePackage@Entity@StateRepository@@QEAA@XZ
    ~BundlePackage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@BundlePackage@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
