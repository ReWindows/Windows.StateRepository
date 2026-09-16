#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 7 member(s).
namespace StateRepository::Cache {
class Key_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@Key_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z
    long Append(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@Key_NoThrow@Cache@StateRepository@@QEAAJG@Z
    long Append(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@Key_NoThrow@Cache@StateRepository@@QEAAJ_K@Z
    long Append(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@Key_NoThrow@Cache@StateRepository@@QEAAJAEBU_GUID@@@Z
    long Append(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendNoEscape@Key_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z
    long AppendNoEscape(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapacity@Key_NoThrow@Cache@StateRepository@@QEAAJ_K_N@Z
    long EnsureCapacity(uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@Key_NoThrow@Cache@StateRepository@@QEAAXXZ
    void Reset();
};
} // namespace StateRepository::Cache
