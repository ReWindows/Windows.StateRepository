#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::ServiceMain {
class AutoShutdown {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AutoShutdown@ServiceMain@StateRepository@@QEAAJAEAUMonitorInitialization@Service@3@@Z
    long Initialize(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AutoShutdown@ServiceMain@StateRepository@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@AutoShutdown@ServiceMain@StateRepository@@QEAAJXZ
    long Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoShutdown@ServiceMain@StateRepository@@QEAA@XZ
    ~AutoShutdown();
};
} // namespace StateRepository::ServiceMain
