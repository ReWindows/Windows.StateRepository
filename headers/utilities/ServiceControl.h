#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository {
class ServiceControl {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ServiceNotifyCallback@ServiceControl@StateRepository@@YAXPEAX@Z
    void ServiceNotifyCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAppxSvc@ServiceControl@StateRepository@@YAJXZ
    long StopAppxSvc();
};
} // namespace StateRepository
