#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 6 member(s).
namespace StateRepository {
class DatabaseCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@DatabaseCache@StateRepository@@QEAAJAEAVDatabase@2@@Z
    long Add(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@DatabaseCache@StateRepository@@QEAAJXZ
    long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GC@DatabaseCache@StateRepository@@QEAAJW4GCPolicy@Globals@2@W4GCFlags@42@@Z
    long GC(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@DatabaseCache@StateRepository@@QEAAPEAVDatabase@2@PEBDAEAV32@@Z
    WindissectOpaque * Get(char const *, WindissectOpaque &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBusy@DatabaseCache@StateRepository@@AEAAJAEAVDatabase@2@@Z
    long IsBusy(WindissectOpaque &);
};
} // namespace StateRepository
