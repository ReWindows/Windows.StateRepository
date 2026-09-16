#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 9 member(s).
namespace StateRepository {
class TextA {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@TextA@StateRepository@@QEAAJPEBD_K@Z
    long Append(char const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@TextA@StateRepository@@QEAAJPEBD@Z
    long Append(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendDelimited@TextA@StateRepository@@QEAAJPEBDD@Z
    long AppendDelimited(char const *, char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendDelimited@TextA@StateRepository@@QEAAJ_JD@Z
    long AppendDelimited(int64_t, char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TextA@StateRepository@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapacity@TextA@StateRepository@@QEAAJ_K_N@Z
    long EnsureCapacity(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@TextA@StateRepository@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@TextA@StateRepository@@QEAAJPEBD_K@Z
    long Set(char const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFromChars@TextA@StateRepository@@QEAAJPEBD_K@Z
    long SetFromChars(char const *, uint64_t);
};
} // namespace StateRepository
