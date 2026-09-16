#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 20 member(s).
namespace StateRepository::Entity {
class PackageUserStatus {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageUserStatus@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOrUpdateStatusByUserSidAndPackageFullName@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXPEBGW4PackageStatus@3@3W4ExecutionFlags@3@@Z
    static long AddOrUpdateStatusByUserSidAndPackageFullName(WindissectOpaque &, void *, unsigned short const *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserSidAndPackageFullName@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXPEBGW4ExecutionFlags@3@@Z
    static long DeleteByUserSidAndPackageFullName(WindissectOpaque &, void *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageIdentity@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndPackageIdentity(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserSidAndPackageFullName@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXPEBGAEA_N@Z
    static long ExistsByUserSidAndPackageFullName(WindissectOpaque &, void *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@PackageUserStatus@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatusByUserSidAndPackageFullName@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXPEBGAEAW4PackageStatus@3@@Z
    static long GetStatusByUserSidAndPackageFullName(WindissectOpaque &, void *, unsigned short const *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostCheckIntegrity@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long PostCheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostFixIntegrity@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long PostFixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageIdentity@PackageUserStatus@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@AEA_N@Z
    static long TryGetByUserAndPackageIdentity(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageUserStatus@Entity@StateRepository@@QEAA@XZ
    ~PackageUserStatus();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PackageUserStatus@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageUserStatus@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
