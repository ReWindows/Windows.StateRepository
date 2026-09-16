#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository::Cache::Entity {
class DependencyGraphIterator_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@DependencyGraphIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJW4CacheFlags@DependencyGraph_NoThrow@234@AEAV6234@AEA_N@Z
    long Get(int, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@DependencyGraphIterator_NoThrow@Entity@Cache@StateRepository@@QEAAJAEAVManager_NoThrow@34@@Z
    long Open(WindissectOpaque &);
};
} // namespace StateRepository::Cache::Entity
