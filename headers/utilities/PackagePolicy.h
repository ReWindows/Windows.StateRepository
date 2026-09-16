#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 56 member(s).
namespace StateRepository::Entity {
class PackagePolicy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackagePolicy@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndPackageAndNameAndIndex@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGHW4ExecutionFlags@3@@Z
    static long DeleteByUserAndPackageAndNameAndIndex(WindissectOpaque &, int64_t, int64_t, unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndIndex@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGHAEA_N@Z
    static long ExistsByNameAndIndex(WindissectOpaque &, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndIndexAndValueNumber@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGH_KAEA_N@Z
    static long ExistsByNameAndIndexAndValueNumber(WindissectOpaque &, unsigned short const *, int, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndIndexAndValueString@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGH1AEA_N@Z
    static long ExistsByNameAndIndexAndValueString(WindissectOpaque &, unsigned short const *, int, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndValueNumber@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_KAEA_N@Z
    static long ExistsByNameAndValueNumber(WindissectOpaque &, unsigned short const *, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndValueString@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG1AEA_N@Z
    static long ExistsByNameAndValueString(WindissectOpaque &, unsigned short const *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackage(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndName@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByPackageAndName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndNameAndIndex@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGHAEA_N@Z
    static long ExistsByPackageAndNameAndIndex(WindissectOpaque &, int64_t, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndName@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndIndex@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGHAEA_N@Z
    static long ExistsByUserAndNameAndIndex(WindissectOpaque &, int64_t, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndIndexAndValueNumber@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGH_KAEA_N@Z
    static long ExistsByUserAndNameAndIndexAndValueNumber(WindissectOpaque &, int64_t, unsigned short const *, int, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndIndexAndValueString@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGH2AEA_N@Z
    static long ExistsByUserAndNameAndIndexAndValueString(WindissectOpaque &, int64_t, unsigned short const *, int, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndValueNumber@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG_KAEA_N@Z
    static long ExistsByUserAndNameAndValueNumber(WindissectOpaque &, int64_t, unsigned short const *, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndNameAndValueString@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEA_N@Z
    static long ExistsByUserAndNameAndValueString(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndPackage(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageAndName@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEA_N@Z
    static long ExistsByUserAndPackageAndName(WindissectOpaque &, int64_t, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageAndNameAndIndex@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGHAEA_N@Z
    static long ExistsByUserAndPackageAndNameAndIndex(WindissectOpaque &, int64_t, int64_t, unsigned short const *, int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageAndNameAndValueNumber@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBG_KAEA_N@Z
    static long ExistsByUserAndPackageAndNameAndValueNumber(WindissectOpaque &, int64_t, int64_t, unsigned short const *, uint64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageAndNameAndValueString@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBG2AEA_N@Z
    static long ExistsByUserAndPackageAndNameAndValueString(WindissectOpaque &, int64_t, int64_t, unsigned short const *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndIndex@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGHAEAVStatement@3@@Z
    static long FindByNameAndIndex(WindissectOpaque &, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndIndexAndValueNumber@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGH_KAEAVStatement@3@@Z
    static long FindByNameAndIndexAndValueNumber(WindissectOpaque &, unsigned short const *, int, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndIndexAndValueString@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGH1AEAVStatement@3@@Z
    static long FindByNameAndIndexAndValueString(WindissectOpaque &, unsigned short const *, int, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndValueNumber@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_KAEAVStatement@3@@Z
    static long FindByNameAndValueNumber(WindissectOpaque &, unsigned short const *, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndValueString@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG1AEAVStatement@3@@Z
    static long FindByNameAndValueString(WindissectOpaque &, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageAndName@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByPackageAndName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageAndNameAndIndex@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGHAEAVStatement@3@@Z
    static long FindByPackageAndNameAndIndex(WindissectOpaque &, int64_t, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndName@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserAndName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndIndex@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGHAEAVStatement@3@@Z
    static long FindByUserAndNameAndIndex(WindissectOpaque &, int64_t, unsigned short const *, int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndIndexAndValueNumber@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGH_KAEAVStatement@3@@Z
    static long FindByUserAndNameAndIndexAndValueNumber(WindissectOpaque &, int64_t, unsigned short const *, int, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndIndexAndValueString@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGH2AEAVStatement@3@@Z
    static long FindByUserAndNameAndIndexAndValueString(WindissectOpaque &, int64_t, unsigned short const *, int, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndValueNumber@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG_KAEAVStatement@3@@Z
    static long FindByUserAndNameAndValueNumber(WindissectOpaque &, int64_t, unsigned short const *, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndNameAndValueString@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAVStatement@3@@Z
    static long FindByUserAndNameAndValueString(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackage@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageAndName@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEAVStatement@3@@Z
    static long FindByUserAndPackageAndName(WindissectOpaque &, int64_t, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageAndNameAndValueNumber@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBG_KAEAVStatement@3@@Z
    static long FindByUserAndPackageAndNameAndValueNumber(WindissectOpaque &, int64_t, int64_t, unsigned short const *, uint64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageAndNameAndValueString@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBG2AEAVStatement@3@@Z
    static long FindByUserAndPackageAndNameAndValueString(WindissectOpaque &, int64_t, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@PackagePolicy@Entity@StateRepository@@QEAAJPEBG@Z
    long SetName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageAndNameAndIndex@PackagePolicy@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGHAEAV123@AEA_N@Z
    static long TryGetByUserAndPackageAndNameAndIndex(WindissectOpaque &, int64_t, int64_t, unsigned short const *, int, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@PackagePolicy@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Upsert@PackagePolicy@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Upsert(WindissectOpaque &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackagePolicy@Entity@StateRepository@@QEAA@XZ
    ~PackagePolicy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PackagePolicy@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackagePolicy@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
