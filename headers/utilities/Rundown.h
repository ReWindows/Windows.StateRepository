#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Trace::RPC::PackageDependency {
class Rundown {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Rundown@PackageDependency@RPC@Trace@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Rundown@PackageDependency@RPC@Trace@StateRepository@@QEAA@XZ
    ~Rundown();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Rundown@PackageDependency@RPC@Trace@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Rundown@PackageDependency@RPC@Trace@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Trace::RPC::PackageDependency
