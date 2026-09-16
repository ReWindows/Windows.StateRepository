#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::Repository {
class Checkpoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Checkpoint@Repository@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Checkpoint@Repository@Logging@StateRepository@@QEAA@XZ
    ~Checkpoint();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Checkpoint@Repository@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Checkpoint@Repository@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Repository
