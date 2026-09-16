#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository {
class AutoSid {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromSidOrCurrent@AutoSid@StateRepository@@QEAAJPEAX@Z
    long FromSidOrCurrent(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromString@AutoSid@StateRepository@@QEAAJPEBG@Z
    long FromString(unsigned short const *);
};
} // namespace StateRepository
