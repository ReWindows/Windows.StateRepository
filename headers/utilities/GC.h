#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Logging::Entity::WorkInProgress {
class GC {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GC@WorkInProgress@Entity@Logging@StateRepository@@QEAAXH@Z
    void StartActivity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@GC@WorkInProgress@Entity@Logging@StateRepository@@QEAAXH@Z
    void Stop(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GC@WorkInProgress@Entity@Logging@StateRepository@@QEAA@XZ
    ~GC();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GC@WorkInProgress@Entity@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GC@WorkInProgress@Entity@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Entity::WorkInProgress
