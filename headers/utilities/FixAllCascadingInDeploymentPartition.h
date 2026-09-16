#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Logging::Entity::WorkInProgress {
class FixAllCascadingInDeploymentPartition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FixAllCascadingInDeploymentPartition@WorkInProgress@Entity@Logging@StateRepository@@QEAAXH@Z
    void StartActivity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@FixAllCascadingInDeploymentPartition@WorkInProgress@Entity@Logging@StateRepository@@QEAAXH_K@Z
    void Stop(int, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FixAllCascadingInDeploymentPartition@WorkInProgress@Entity@Logging@StateRepository@@QEAA@XZ
    ~FixAllCascadingInDeploymentPartition();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FixAllCascadingInDeploymentPartition@WorkInProgress@Entity@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FixAllCascadingInDeploymentPartition@WorkInProgress@Entity@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Entity::WorkInProgress
