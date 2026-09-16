#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository {
class Entities {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntitiesWithWorkIdInPartition@Entities@StateRepository@@YAJW4Partition@2@PEA_KPEAPEAPEBD@Z
    long GetEntitiesWithWorkIdInPartition(int, uint64_t *, char const * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEntityShadowed@Entities@StateRepository@@YA_NPEBD@Z
    bool IsEntityShadowed(char const *);
};
} // namespace StateRepository
