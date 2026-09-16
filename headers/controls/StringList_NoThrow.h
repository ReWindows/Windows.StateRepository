#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository {
class StringList_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@StringList_NoThrow@StateRepository@@QEAAJPEBG@Z
    long Add(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUnique@StringList_NoThrow@StateRepository@@QEAAJPEBG@Z
    long AddUnique(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@StringList_NoThrow@StateRepository@@QEAAXXZ
    void Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StringList_NoThrow@StateRepository@@QEAA@XZ
    ~StringList_NoThrow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapacity@StringList_NoThrow@StateRepository@@AEAAJ_K@Z
    long EnsureCapacity(uint64_t);
};
} // namespace StateRepository
