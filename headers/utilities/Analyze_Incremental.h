#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::Database {
class Analyze_Incremental {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Analyze_Incremental@Database@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Analyze_Incremental@Database@Logging@StateRepository@@QEAA@XZ
    ~Analyze_Incremental();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Analyze_Incremental@Database@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Analyze_Incremental@Database@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Database
