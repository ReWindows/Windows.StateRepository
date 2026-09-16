#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Trace::RPC::PackageDependency {
class GetPackageDependencyInformation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetPackageDependencyInformation@PackageDependency@RPC@Trace@StateRepository@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetPackageDependencyInformation@PackageDependency@RPC@Trace@StateRepository@@QEAA@XZ
    ~GetPackageDependencyInformation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetPackageDependencyInformation@PackageDependency@RPC@Trace@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetPackageDependencyInformation@PackageDependency@RPC@Trace@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Trace::RPC::PackageDependency
