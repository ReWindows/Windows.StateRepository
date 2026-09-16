#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::Repair {
class DoRepair {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DoRepair@Repair@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DoRepair@Repair@Logging@StateRepository@@QEAA@XZ
    ~DoRepair();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DoRepair@Repair@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DoRepair@Repair@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Repair
