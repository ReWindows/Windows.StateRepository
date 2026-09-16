#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::Entity::WorkInProgress {
class PostFixAllCascadingInMachinePartition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PostFixAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAAXH@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PostFixAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAA@XZ
    ~PostFixAllCascadingInMachinePartition();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PostFixAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PostFixAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Entity::WorkInProgress
