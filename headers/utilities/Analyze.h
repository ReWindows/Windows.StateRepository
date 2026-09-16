#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::Database {
class Analyze {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Analyze@Database@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Analyze@Database@Logging@StateRepository@@QEAA@XZ
    ~Analyze();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Analyze@Database@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Analyze@Database@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Database
