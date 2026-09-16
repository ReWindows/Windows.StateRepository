#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository {
class ProcessIdList_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUnique@ProcessIdList_NoThrow@StateRepository@@QEAAJK@Z
    long AddUnique(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapacity@ProcessIdList_NoThrow@StateRepository@@AEAAJ_K@Z
    long EnsureCapacity(uint64_t);
};
} // namespace StateRepository
