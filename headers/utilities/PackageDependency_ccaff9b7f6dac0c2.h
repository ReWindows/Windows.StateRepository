#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 18 member(s).
namespace StateRepository::Entity {
class PackageDependency {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageDependency@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PackageDependency@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFrom@PackageDependency@Entity@StateRepository@@QEAAJAEBV123@@Z
    long CopyFrom(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@PackageDependency@Entity@StateRepository@@QEBAJAEAV123@@Z
    long CopyTo(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PackageDependency@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByPackageDependencyId@PackageDependency@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGW4ExecutionFlags@3@@Z
    static long DeleteByPackageDependencyId(WindissectOpaque &, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackageDependency@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyName@PackageDependency@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrSystemScopeAndPackageFamilyNameAndPackageTypeAndLEMinVersion@PackageDependency@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@_KAEAVStatement@3@@Z
    static long FindByUserOrSystemScopeAndPackageFamilyNameAndPackageTypeAndLEMinVersion(WindissectOpaque &, int64_t, unsigned short const *, int, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@PackageDependency@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PackageDependency@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratePackageDependencyId@PackageDependency@Entity@StateRepository@@QEAAJAEAVText@3@@Z
    long GeneratePackageDependencyId(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageDependencyId@PackageDependency@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPackageDependencyId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageFamilyName@PackageDependency@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPackageFamilyName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageDependencyId@PackageDependency@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByPackageDependencyId(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageDependency@Entity@StateRepository@@QEAA@XZ
    ~PackageDependency();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PackageDependency@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageDependency@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
