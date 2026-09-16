#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::Database {
class Checkpoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Checkpoint@Database@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Checkpoint@Database@Logging@StateRepository@@QEAA@XZ
    ~Checkpoint();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Checkpoint@Database@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Checkpoint@Database@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Database
