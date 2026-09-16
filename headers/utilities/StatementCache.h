#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository {
class StatementCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@StatementCache@StateRepository@@QEAAJAEAVStatement@2@@Z
    long Add(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GC@StatementCache@StateRepository@@QEAAJAEBUPolicySettings@Globals@2@_K@Z
    long GC(WindissectOpaque const &, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@StatementCache@StateRepository@@QEAAPEAVStatement@2@PEBDAEAV32@@Z
    WindissectOpaque * Get(char const *, WindissectOpaque &);
};
} // namespace StateRepository
