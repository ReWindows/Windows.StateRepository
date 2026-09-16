#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 55 member(s).
namespace StateRepository::Entity {
class PackageFamilyPolicy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageFamilyPolicy@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackageFamilyAndNameAndIndex@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGHW4ExecutionFlags@3@@Z
    static long DeleteByUserAndPackageFamilyAndNameAndIndex(WindissectOpaque &, int64_t, int64_t, unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndIndex@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGHAEA_N@Z
    static long ExistsByNameAndIndex(WindissectOpaque &, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndIndexAndValueNumber@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGH_KAEA_N@Z
    static long ExistsByNameAndIndexAndValueNumber(WindissectOpaque &, unsigned short const *, int, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndIndexAndValueString@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGH1AEA_N@Z
    static long ExistsByNameAndIndexAndValueString(WindissectOpaque &, unsigned short const *, int, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndValueNumber@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_KAEA_N@Z
    static long ExistsByNameAndValueNumber(WindissectOpaque &, unsigned short const *, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndValueString@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG1AEA_N@Z
    static long ExistsByNameAndValueString(WindissectOpaque &, unsigned short const *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamily@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackageFamily(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndName@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByPackageFamilyAndName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyAndNameAndIndex@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGHAEA_N@Z
    static long ExistsByPackageFamilyAndNameAndIndex(WindissectOpaque &, int64_t, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndName@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndIndex@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGHAEA_N@Z
    static long ExistsByUserAndNameAndIndex(WindissectOpaque &, int64_t, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndIndexAndValueNumber@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGH_KAEA_N@Z
    static long ExistsByUserAndNameAndIndexAndValueNumber(WindissectOpaque &, int64_t, unsigned short const *, int, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndIndexAndValueString@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGH2AEA_N@Z
    static long ExistsByUserAndNameAndIndexAndValueString(WindissectOpaque &, int64_t, unsigned short const *, int, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndValueNumber@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG_KAEA_N@Z
    static long ExistsByUserAndNameAndValueNumber(WindissectOpaque &, int64_t, unsigned short const *, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndValueString@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEA_N@Z
    static long ExistsByUserAndNameAndValueString(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamily@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndPackageFamily(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndName@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEA_N@Z
    static long ExistsByUserAndPackageFamilyAndName(WindissectOpaque &, int64_t, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndNameAndIndex@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGHAEA_N@Z
    static long ExistsByUserAndPackageFamilyAndNameAndIndex(WindissectOpaque &, int64_t, int64_t, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndNameAndValueNumber@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBG_KAEA_N@Z
    static long ExistsByUserAndPackageFamilyAndNameAndValueNumber(WindissectOpaque &, int64_t, int64_t, unsigned short const *, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyAndNameAndValueString@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBG2AEA_N@Z
    static long ExistsByUserAndPackageFamilyAndNameAndValueString(WindissectOpaque &, int64_t, int64_t, unsigned short const *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndIndex@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGHAEAVStatement@3@@Z
    static long FindByNameAndIndex(WindissectOpaque &, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndIndexAndValueNumber@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGH_KAEAVStatement@3@@Z
    static long FindByNameAndIndexAndValueNumber(WindissectOpaque &, unsigned short const *, int, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndIndexAndValueString@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGH1AEAVStatement@3@@Z
    static long FindByNameAndIndexAndValueString(WindissectOpaque &, unsigned short const *, int, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndValueNumber@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_KAEAVStatement@3@@Z
    static long FindByNameAndValueNumber(WindissectOpaque &, unsigned short const *, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndValueString@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG1AEAVStatement@3@@Z
    static long FindByNameAndValueString(WindissectOpaque &, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamily@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackageFamily(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageFamilyAndNameAndIndex@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGHAEAVStatement@3@@Z
    static long FindByPackageFamilyAndNameAndIndex(WindissectOpaque &, int64_t, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndName@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserAndName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndIndex@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGHAEAVStatement@3@@Z
    static long FindByUserAndNameAndIndex(WindissectOpaque &, int64_t, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndIndexAndValueNumber@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGH_KAEAVStatement@3@@Z
    static long FindByUserAndNameAndIndexAndValueNumber(WindissectOpaque &, int64_t, unsigned short const *, int, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndIndexAndValueString@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGH2AEAVStatement@3@@Z
    static long FindByUserAndNameAndIndexAndValueString(WindissectOpaque &, int64_t, unsigned short const *, int, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndValueNumber@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG_KAEAVStatement@3@@Z
    static long FindByUserAndNameAndValueNumber(WindissectOpaque &, int64_t, unsigned short const *, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndValueString@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAVStatement@3@@Z
    static long FindByUserAndNameAndValueString(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamily@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndPackageFamily(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyAndName@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyAndName(WindissectOpaque &, int64_t, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyAndNameAndValueNumber@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBG_KAEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyAndNameAndValueNumber(WindissectOpaque &, int64_t, int64_t, unsigned short const *, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFamilyAndNameAndValueString@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBG2AEAVStatement@3@@Z
    static long FindByUserAndPackageFamilyAndNameAndValueString(WindissectOpaque &, int64_t, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@PackageFamilyPolicy@Entity@StateRepository@@QEAAJPEBG@Z
    long SetName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFamilyAndNameAndIndex@PackageFamilyPolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGHAEAV123@AEA_N@Z
    static long TryGetByUserAndPackageFamilyAndNameAndIndex(WindissectOpaque &, int64_t, int64_t, unsigned short const *, int, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@PackageFamilyPolicy@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageFamilyPolicy@Entity@StateRepository@@QEAA@XZ
    ~PackageFamilyPolicy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PackageFamilyPolicy@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageFamilyPolicy@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
