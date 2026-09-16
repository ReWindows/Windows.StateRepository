#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository::Service {
class InProgressCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@InProgressCallback@Service@StateRepository@@QEAAJXZ
    long Execute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteCallback@InProgressCallback@Service@StateRepository@@SAJPEAX@Z
    static long ExecuteCallback(void *);
};
} // namespace StateRepository::Service
