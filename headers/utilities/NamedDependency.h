#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 14 member(s).
namespace StateRepository::Entity {
class NamedDependency {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@NamedDependency@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@NamedDependency@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@NamedDependency@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackage(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndDependencyType@NamedDependency@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4NamedDependencyType@3@AEA_N@Z
    static long ExistsByPackageAndDependencyType(WindissectOpaque &, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndDependencyTypeAndIndex@NamedDependency@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4NamedDependencyType@3@HAEA_N@Z
    static long ExistsByPackageAndDependencyTypeAndIndex(WindissectOpaque &, int64_t, int, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@NamedDependency@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageAndDependencyType@NamedDependency@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4NamedDependencyType@3@AEAVStatement@3@@Z
    static long FindByPackageAndDependencyType(WindissectOpaque &, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@NamedDependency@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@NamedDependency@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@NamedDependency@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndDependencyTypeAndIndex@NamedDependency@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4NamedDependencyType@3@HAEAV123@AEA_N@Z
    static long TryGetByPackageAndDependencyTypeAndIndex(WindissectOpaque &, int64_t, int, int, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NamedDependency@Entity@StateRepository@@QEAA@XZ
    ~NamedDependency();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@NamedDependency@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
