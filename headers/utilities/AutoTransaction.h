#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository {
class AutoTransaction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@AutoTransaction@StateRepository@@QEAAJXZ
    long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rollback@AutoTransaction@StateRepository@@QEAAJXZ
    long Rollback();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoTransaction@StateRepository@@QEAA@XZ
    ~AutoTransaction();
};
} // namespace StateRepository
