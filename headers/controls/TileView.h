#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 24 member(s).
namespace StateRepository::Entity {
class TileView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplication@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByApplication(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationAndTileId@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByApplicationAndTileId(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackage(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEA_N@Z
    static long ExistsByTileUniqueId(WindissectOpaque &, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplication@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndApplication(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationUserModelId@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndPackage(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplication@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByApplication(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndApplication@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndApplication(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndApplicationUserModelId@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByUserAndApplicationUserModelId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndGTChangeIdAndTileViewQueryFilter@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEBVTileViewQueryFilter@23@AEAVStatement@3@@Z
    static long FindByUserAndGTChangeIdAndTileViewQueryFilter(WindissectOpaque &, int64_t, int64_t, WindissectOpaque const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackage@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByTileUniqueId@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAV123@@Z
    static long GetByTileUniqueId(WindissectOpaque &, _GUID const &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxChangeIdByUser@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_J@Z
    static long GetMaxChangeIdByUser(WindissectOpaque &, int64_t, int64_t &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileView@Entity@StateRepository@@QEAA@XZ
    TileView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetApplicationUserModelIDByTileUniqueId@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAVText@3@AEA_N@Z
    static long TryGetApplicationUserModelIDByTileUniqueId(WindissectOpaque &, _GUID const &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplicationAndTileId@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAV123@AEA_N@Z
    static long TryGetByApplicationAndTileId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@TileView@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAV123@AEA_N@Z
    static long TryGetByTileUniqueId(WindissectOpaque &, _GUID const &, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileView@Entity@StateRepository@@QEAA@XZ
    ~TileView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@TileView@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
