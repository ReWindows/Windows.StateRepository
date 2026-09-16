#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 13 member(s).
namespace StateRepository {
class Text {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@Text@StateRepository@@QEAAJPEBG@Z
    long Append(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@Text@StateRepository@@QEAAJPEBG_K@Z
    long Append(unsigned short const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapacity@Text@StateRepository@@QEAAJ_K_N@Z
    long EnsureCapacity(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NullableEquals@Text@StateRepository@@SA_NPEBG0_N@Z
    static bool NullableEquals(unsigned short const *, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@Text@StateRepository@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@Text@StateRepository@@QEAAJPEBG_K@Z
    long Set(unsigned short const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@Text@StateRepository@@QEAAJPEBG000@Z
    long Set(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFromChars@Text@StateRepository@@QEAAJPEBG_K@Z
    long SetFromChars(unsigned short const *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSubstring@Text@StateRepository@@QEAAJPEBG_K1@Z
    long SetSubstring(unsigned short const *, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToLowerUntilNull@Text@StateRepository@@QEAAXXZ
    void ToLowerUntilNull();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Text@StateRepository@@QEAA@XZ
    ~Text();
};
} // namespace StateRepository
