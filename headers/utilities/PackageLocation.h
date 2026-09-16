#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 17 member(s).
namespace StateRepository::Entity {
class PackageLocation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByInstalledLocation@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByInstalledLocation(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackage(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByVolume@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByVolume(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByInstalledLocation@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByInstalledLocation(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByVolume@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByVolume(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@PackageLocation@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackage@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@@Z
    static long GetByPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackage@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGetByPackage(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplication@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAV123@AEA_N@Z
    static long TryGetByUserAndApplication(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_LongRunningTransaction_RemoveOldRecords@PackageLocation@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@_N@Z
    static long Update_LongRunningTransaction_RemoveOldRecords(WindissectOpaque &, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageLocation@Entity@StateRepository@@QEAA@XZ
    ~PackageLocation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageLocation@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
