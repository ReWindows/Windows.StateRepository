#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Trace::RPC::PackageDependency {
class GetProcessesUsingPackageDependency {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetProcessesUsingPackageDependency@PackageDependency@RPC@Trace@StateRepository@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetProcessesUsingPackageDependency@PackageDependency@RPC@Trace@StateRepository@@QEAA@XZ
    ~GetProcessesUsingPackageDependency();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetProcessesUsingPackageDependency@PackageDependency@RPC@Trace@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetProcessesUsingPackageDependency@PackageDependency@RPC@Trace@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Trace::RPC::PackageDependency
