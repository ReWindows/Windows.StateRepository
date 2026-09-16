#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository::Trace::RPC::PackageDependency {
class ExistsByUserAndPackageFullName {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ExistsByUserAndPackageFullName@PackageDependency@RPC@Trace@StateRepository@@QEAAXXZ
    void StartActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ExistsByUserAndPackageFullName@PackageDependency@RPC@Trace@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ExistsByUserAndPackageFullName@PackageDependency@RPC@Trace@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Trace::RPC::PackageDependency
