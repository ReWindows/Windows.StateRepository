#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Logging::Entity::WorkInProgress {
class CheckAllCascadingInMachinePartition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAAXH@Z
    void StartActivity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAAXH_K@Z
    void Stop(int, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAA@XZ
    ~CheckAllCascadingInMachinePartition();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Entity::WorkInProgress
