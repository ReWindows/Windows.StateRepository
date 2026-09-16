#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Trace::RPC::PackageDependency {
class GetResolvedPackageFullName2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetResolvedPackageFullName2@PackageDependency@RPC@Trace@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetResolvedPackageFullName2@PackageDependency@RPC@Trace@StateRepository@@QEAA@XZ
    ~GetResolvedPackageFullName2();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetResolvedPackageFullName2@PackageDependency@RPC@Trace@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetResolvedPackageFullName2@PackageDependency@RPC@Trace@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Trace::RPC::PackageDependency
