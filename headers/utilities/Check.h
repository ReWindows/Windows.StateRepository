#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Logging::Integrity {
class Check {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Check@Integrity@Logging@StateRepository@@QEAAXH@Z
    void StartActivity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Check@Integrity@Logging@StateRepository@@QEAAXHH_K@Z
    void Stop(int, int, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Check@Integrity@Logging@StateRepository@@QEAA@XZ
    ~Check();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Check@Integrity@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Check@Integrity@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Integrity
