#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Logging::Entity::WorkInProgress {
class FixAllCascadingInMachinePartition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FixAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAAXH@Z
    void StartActivity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@FixAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAAXH_K@Z
    void Stop(int, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FixAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAA@XZ
    ~FixAllCascadingInMachinePartition();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FixAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FixAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Entity::WorkInProgress
