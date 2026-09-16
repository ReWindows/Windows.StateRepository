#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::Maintenance {
class DoMaintenance {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DoMaintenance@Maintenance@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DoMaintenance@Maintenance@Logging@StateRepository@@QEAA@XZ
    ~DoMaintenance();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DoMaintenance@Maintenance@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DoMaintenance@Maintenance@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Maintenance
