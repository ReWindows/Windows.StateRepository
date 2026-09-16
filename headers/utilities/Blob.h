#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 7 member(s).
namespace StateRepository {
class Blob {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@Blob@StateRepository@@QEAAJ_KPEBX@Z
    long Append(uint64_t, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapacity@Blob@StateRepository@@QEAAJ_K@Z
    long EnsureCapacity(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GrowCapacity@Blob@StateRepository@@QEAAJ_K@Z
    long GrowCapacity(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Overwrite@Blob@StateRepository@@QEAAJ_K0PEBX@Z
    long Overwrite(uint64_t, uint64_t, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@Blob@StateRepository@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@Blob@StateRepository@@QEAAJ_KPEBX0@Z
    long Set(uint64_t, void const *, uint64_t);
};
} // namespace StateRepository
