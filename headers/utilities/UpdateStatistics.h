#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::Database {
class UpdateStatistics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UpdateStatistics@Database@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UpdateStatistics@Database@Logging@StateRepository@@QEAA@XZ
    ~UpdateStatistics();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UpdateStatistics@Database@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UpdateStatistics@Database@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Database
