#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Logging::Entity::WorkInProgress {
class PostCheckAllCascadingInMachinePartition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PostCheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAAXH@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PostCheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAA@XZ
    ~PostCheckAllCascadingInMachinePartition();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PostCheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PostCheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Entity::WorkInProgress
