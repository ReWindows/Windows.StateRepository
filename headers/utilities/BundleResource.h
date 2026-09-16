#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository::Entity {
class BundleResource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@BundleResource@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@BundleResource@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
};
} // namespace StateRepository::Entity
