#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::Entity::WorkInProgress {
class GCChangelogs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GCChangelogs@WorkInProgress@Entity@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GCChangelogs@WorkInProgress@Entity@Logging@StateRepository@@QEAA@XZ
    ~GCChangelogs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GCChangelogs@WorkInProgress@Entity@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GCChangelogs@WorkInProgress@Entity@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Entity::WorkInProgress
