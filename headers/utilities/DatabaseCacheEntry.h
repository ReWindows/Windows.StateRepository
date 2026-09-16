#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository {
class DatabaseCacheEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@DatabaseCacheEntry@StateRepository@@QEAAJAEAVDatabase@2@@Z
    long Attach(WindissectOpaque &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Move@DatabaseCacheEntry@StateRepository@@CAJAEAVDatabase@2@0@Z
    static long Move(WindissectOpaque &, WindissectOpaque &);
};
} // namespace StateRepository
