#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 56 member(s).
namespace StateRepository::Entity {
class Application {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Application@Entity@StateRepository@@QEAA@XZ
    Application();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@Application@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationUserModelId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByApplicationUserModelId(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByEditionId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByEditionId(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackage(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndPackageRelativeApplicationId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByPackageAndPackageRelativeApplicationId(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyName@Application@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByPackageFamilyName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFullName@Application@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByPackageFullName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationUserModelId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndPackage(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamily@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndPackageFamily(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndPackageType@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4PackageType@3@AEA_N@Z
    static long ExistsByUserAndPackageFamilyAndPackageType(WindissectOpaque &, int64_t, int64_t, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyName@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndPackageFamilyName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyNameAndPackageType@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@AEA_N@Z
    static long ExistsByUserAndPackageFamilyNameAndPackageType(WindissectOpaque &, int64_t, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFullName@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndApplicationUserModelId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserOrDefaultAccountAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndPackageFamilyNameAndPackageType@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@AEA_N@Z
    static long ExistsByUserOrDefaultAccountAndPackageFamilyNameAndPackageType(WindissectOpaque &, int64_t, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserOrDefaultAccountAndPackageFullName@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserOrDefaultAccountAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplicationUserModelId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByApplicationUserModelId(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByEditionId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByEditionId(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyName@Application@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByPackageFamilyName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFullName@Application@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByPackageFullName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndAnyAppExecutionAlias@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUserAndAnyAppExecutionAlias(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndAppListEntry@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4AppListEntry@3@AEAVStatement@3@@Z
    static long FindByUserAndAppListEntry(WindissectOpaque &, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackage@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamily@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndPackageFamily(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyAndPackageType@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_J1W4PackageType@3@AEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyAndPackageType(WindissectOpaque &, int64_t, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyName@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyNameAndAppListEntry@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4AppListEntry@3@AEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyNameAndAppListEntry(WindissectOpaque &, int64_t, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyNameAndPackageType@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@AEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyNameAndPackageType(WindissectOpaque &, int64_t, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFullName@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccount@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUserOrDefaultAccount(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndAppListEntry@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4AppListEntry@3@AEAVStatement@3@@Z
    static long FindByUserOrDefaultAccountAndAppListEntry(WindissectOpaque &, int64_t, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndApplicationUserModelId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserOrDefaultAccountAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndHostId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserOrDefaultAccountAndHostId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFamilyNameAndPackageType@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGW4PackageType@3@AEAVStatement@3@@Z
    static long FindByUserOrDefaultAccountAndPackageFamilyNameAndPackageType(WindissectOpaque &, int64_t, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFullName@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserOrDefaultAccountAndPackageFullName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@Application@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@Application@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppLifecycleBehavior@Application@Entity@StateRepository@@QEBA?AW4AppLifecycleBehavior@3@XZ
    int GetAppLifecycleBehavior() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageAndPackageRelativeApplicationId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAV123@@Z
    static long GetByPackageAndPackageRelativeApplicationId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeBehavior@Application@Entity@StateRepository@@QEBA?AW4RuntimeBehavior@3@XZ
    int GetRuntimeBehavior() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Application@Entity@StateRepository@@QEBA?AW4SRTrustLevel@3@XZ
    int GetTrustLevel() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetActivationInfoByUserAndApplicationUserModelId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGPEAW4ActivationInfoFlags@3@AEAVText@3@4AEA_N@Z
    static long TryGetActivationInfoByUserAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, int *, WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetApplicationTypeByUserAndApplicationUserModelId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGPEAW4ApplicationType@3@AEA_N@Z
    static long TryGetApplicationTypeByUserAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, int *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndPackageRelativeApplicationId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAV123@AEA_N@Z
    static long TryGetByPackageAndPackageRelativeApplicationId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFullNameAndApplicationUserModelId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG1AEAV123@AEA_N@Z
    static long TryGetByPackageFullNameAndApplicationUserModelId(WindissectOpaque &, unsigned short const *, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplicationUserModelId@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAV123@AEA_N@Z
    static long TryGetByUserAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAnd_ApplicationID@Application@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@AEA_N@Z
    static long TryGetByUserAnd_ApplicationID(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Application@Entity@StateRepository@@QEAA@XZ
    ~Application();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@Application@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
