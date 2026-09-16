#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Trace::RPC::PackageDependency {
class GetIdForPackageDependencyContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetIdForPackageDependencyContext@PackageDependency@RPC@Trace@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetIdForPackageDependencyContext@PackageDependency@RPC@Trace@StateRepository@@QEAA@XZ
    ~GetIdForPackageDependencyContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetIdForPackageDependencyContext@PackageDependency@RPC@Trace@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetIdForPackageDependencyContext@PackageDependency@RPC@Trace@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Trace::RPC::PackageDependency
