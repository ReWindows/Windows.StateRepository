#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 29 member(s).
namespace StateRepository::Entity {
class DependencyGraph {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByDependencyType@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@W4DependencyGraphType@3@AEA_N@Z
    static long ExistsByDependencyType(WindissectOpaque &, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBySupplierPackage@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsBySupplierPackage(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackage@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndDependentPackage(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackageAndDependencyType@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4DependencyGraphType@3@AEA_N@Z
    static long ExistsByUserAndDependentPackageAndDependencyType(WindissectOpaque &, int64_t, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackageAndDependencyTypeAnd_DependencyGraphID@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4DependencyGraphType@3@1AEA_N@Z
    static long ExistsByUserAndDependentPackageAndDependencyTypeAnd_DependencyGraphID(WindissectOpaque &, int64_t, int64_t, int, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackageAndIndex@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1HAEA_N@Z
    static long ExistsByUserAndDependentPackageAndIndex(WindissectOpaque &, int64_t, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackageAndSupplierPackage@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J11AEA_N@Z
    static long ExistsByUserAndDependentPackageAndSupplierPackage(WindissectOpaque &, int64_t, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackageAndSupplierPackageFamilyName@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEA_N@Z
    static long ExistsByUserAndDependentPackageAndSupplierPackageFamilyName(WindissectOpaque &, int64_t, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDependentPackageFullNameAndHasExternalLocation@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndDependentPackageFullNameAndHasExternalLocation(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndSupplierPackage@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndSupplierPackage(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByDependencyType@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@W4DependencyGraphType@3@AEAVStatement@3@@Z
    static long FindByDependencyType(WindissectOpaque &, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBySupplierPackage@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindBySupplierPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackage@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndDependentPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackageAndDependencyType@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4DependencyGraphType@3@AEAVStatement@3@@Z
    static long FindByUserAndDependentPackageAndDependencyType(WindissectOpaque &, int64_t, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackageAndDependencyTypeAnd_DependencyGraphID@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4DependencyGraphType@3@1AEAVStatement@3@@Z
    static long FindByUserAndDependentPackageAndDependencyTypeAnd_DependencyGraphID(WindissectOpaque &, int64_t, int64_t, int, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackageAndIndex@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1HAEAVStatement@3@@Z
    static long FindByUserAndDependentPackageAndIndex(WindissectOpaque &, int64_t, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDependentPackage_SortedByIndex@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndDependentPackage_SortedByIndex(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndSupplierPackage@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndSupplierPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndSupplierPackageAsIdAndDependencyType@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4DependencyGraphType@3@AEAVStatement@3@@Z
    static long FindByUserAndSupplierPackageAsIdAndDependencyType(WindissectOpaque &, int64_t, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndDependentPackageAndSupplierPackage@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J11AEAV123@AEA_N@Z
    static long TryGetByUserAndDependentPackageAndSupplierPackage(WindissectOpaque &, int64_t, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMainPackageDependencyByUserAndSupplierPackage@DependencyGraph@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@AEA_N@Z
    static long TryGetMainPackageDependencyByUserAndSupplierPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DependencyGraph@Entity@StateRepository@@QEAA@XZ
    ~DependencyGraph();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@DependencyGraph@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
