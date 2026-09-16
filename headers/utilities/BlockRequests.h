#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
class BlockRequests {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailIfBlocked@BlockRequests@@QEAAJ_N@Z
    long FailIfBlocked(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentThreadUnblocked@BlockRequests@@QEAA_NXZ
    bool IsCurrentThreadUnblocked();
};
