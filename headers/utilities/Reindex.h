#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::Database {
class Reindex {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Reindex@Database@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Reindex@Database@Logging@StateRepository@@QEAA@XZ
    ~Reindex();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Reindex@Database@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Reindex@Database@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Database
