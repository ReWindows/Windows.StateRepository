#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository::ServiceMain {
class AutoLog_ServiceStart {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogError@AutoLog_ServiceStart@ServiceMain@StateRepository@@SAXW4Checkpoint@123@J@Z
    static void LogError(int, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoLog_ServiceStart@ServiceMain@StateRepository@@QEAA@XZ
    ~AutoLog_ServiceStart();
};
} // namespace StateRepository::ServiceMain
