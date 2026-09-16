#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 24 member(s).
namespace StateRepository::Entity {
class SecondaryTileView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@SecondaryTileView@Entity@StateRepository@@QEAAJAEAVDatabase@3@@Z
    long Add(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@SecondaryTileView@Entity@StateRepository@@QEBAJAEAVSecondaryTile@23@AEAVSecondaryTileUser@23@@Z
    long CopyTo(WindissectOpaque &, WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1@Z
    static long Delete(WindissectOpaque &, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByTileUniqueId@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@U_GUID@@@Z
    static long DeleteByTileUniqueId(WindissectOpaque &, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndApplicationAndTileId@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1QEBG@Z
    static long DeleteByUserAndApplicationAndTileId(WindissectOpaque &, int64_t, int64_t, unsigned short const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEA_N@Z
    static long ExistsByTileUniqueId(WindissectOpaque &, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByUser(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplication@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndApplication(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationAndTileId@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEA_N@Z
    static long ExistsByUserAndApplicationAndTileId(WindissectOpaque &, int64_t, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEA_N@Z
    static long ExistsByUserAndPackage(WindissectOpaque &, int64_t, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndApplication@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndApplication(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackage@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1AEAVStatement@3@@Z
    static long FindByUserAndPackage(WindissectOpaque &, int64_t, int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndApplicationAndTileId@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEAV123@@Z
    static long GetByUserAndApplicationAndTileId(WindissectOpaque &, int64_t, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileView@Entity@StateRepository@@QEAA@XZ
    SecondaryTileView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationUserModelId@SecondaryTileView@Entity@StateRepository@@QEAAJPEBG@Z
    long SetApplicationUserModelId(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileId@SecondaryTileView@Entity@StateRepository@@QEAAJPEBG@Z
    long SetTileId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAV123@AEA_N@Z
    static long TryGetByTileUniqueId(WindissectOpaque &, _GUID const &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplicationAndTileId@SecondaryTileView@Entity@StateRepository@@SAJAEAVDatabase@3@_J1PEBGAEAV123@AEA_N@Z
    static long TryGetByUserAndApplicationAndTileId(WindissectOpaque &, int64_t, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@SecondaryTileView@Entity@StateRepository@@QEAAJAEAVDatabase@3@@Z
    long Update(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileView@Entity@StateRepository@@QEAA@XZ
    ~SecondaryTileView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@SecondaryTileView@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
