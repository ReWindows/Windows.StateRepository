#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 39 member(s).
namespace StateRepository::Entity {
class PackageUser {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageUser@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackage@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4ExecutionFlags@3@@Z
    static long DeleteByUserAndPackage(WindissectOpaque &, int64_t, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppDataVolume@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByAppDataVolume(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackage(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyNameAndPackageType@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGW4PackageType@3@AEA_N@Z
    static long ExistsByPackageFamilyNameAndPackageType(WindissectOpaque &, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFullName@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByPackageFullName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFullNameAndDeploymentState@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGW4DeploymentState@3@AEA_N@Z
    static long ExistsByPackageFullNameAndDeploymentState(WindissectOpaque &, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDeploymentState@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4DeploymentState@3@AEA_N@Z
    static long ExistsByUserAndDeploymentState(WindissectOpaque &, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndDeploymentStateAndIsExplicitlyInstalled@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4DeploymentState@3@_NAEA_N@Z
    static long ExistsByUserAndDeploymentStateAndIsExplicitlyInstalled(WindissectOpaque &, int64_t, int, bool, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndPackage(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyNameAndPackageType@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@AEA_N@Z
    static long ExistsByUserAndPackageFamilyNameAndPackageType(WindissectOpaque &, int64_t, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFullName@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserSidAndPackageFullNameAndDeploymentState@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@QEAXPEBGW4DeploymentState@3@AEA_N@Z
    static long ExistsByUserSidAndPackageFullNameAndDeploymentState(WindissectOpaque &, void * const, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppDataVolume@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByAppDataVolume(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyNameAndPackageType@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGW4PackageType@3@AEAVStatement@3@@Z
    static long FindByPackageFamilyNameAndPackageType(WindissectOpaque &, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFullName@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByPackageFullName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDeploymentState@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4DeploymentState@3@AEAVStatement@3@@Z
    static long FindByUserAndDeploymentState(WindissectOpaque &, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndDeploymentStateAndIsExplicitlyInstalled@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4DeploymentState@3@_NAEAVStatement@3@@Z
    static long FindByUserAndDeploymentStateAndIsExplicitlyInstalled(WindissectOpaque &, int64_t, int, bool, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyNameAndPackageType@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@AEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyNameAndPackageType(WindissectOpaque &, int64_t, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsExplicitlyInstalled@PackageUser@Entity@StateRepository@@QEBA_NXZ
    bool GetIsExplicitlyInstalled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostCheckIntegrity@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long PostCheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostFixIntegrity@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long PostFixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsExplicitlyInstalled@PackageUser@Entity@StateRepository@@QEAAJ_N@Z
    long SetIsExplicitlyInstalled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackage@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@AEA_N@Z
    static long TryGetByUserAndPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFullName@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAV123@AEA_N@Z
    static long TryGetByUserAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMainPackageFullNameByUserAndPackageFamilyName@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVText@3@AEA_N@Z
    static long TryGetMainPackageFullNameByUserAndPackageFamilyName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@PackageUser@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_LongRunningTransaction_RemoveOldRecords@PackageUser@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@_N@Z
    static long Update_LongRunningTransaction_RemoveOldRecords(WindissectOpaque &, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageUser@Entity@StateRepository@@QEAA@XZ
    ~PackageUser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PackageUser@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageUser@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
