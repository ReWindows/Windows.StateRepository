#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository {
class ChangeTracking {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextValue@ChangeTracking@StateRepository@@YAJAEAVDatabase@2@AEA_J@Z
    long GetNextValue(WindissectOpaque &, int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOnAdd@ChangeTracking@StateRepository@@YAJAEAVDatabase@2@AEA_J1@Z
    long UpdateOnAdd(WindissectOpaque &, int64_t &, int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOnChange@ChangeTracking@StateRepository@@YAJAEAVDatabase@2@AEA_J@Z
    long UpdateOnChange(WindissectOpaque &, int64_t &);
};
} // namespace StateRepository
