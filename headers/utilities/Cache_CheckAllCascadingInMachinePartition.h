#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Logging::Entity::WorkInProgress {
class Cache_CheckAllCascadingInMachinePartition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Cache_CheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAAXH@Z
    void StartActivity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Cache_CheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAAXH_K@Z
    void Stop(int, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Cache_CheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@QEAA@XZ
    ~Cache_CheckAllCascadingInMachinePartition();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Cache_CheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Cache_CheckAllCascadingInMachinePartition@WorkInProgress@Entity@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Entity::WorkInProgress
