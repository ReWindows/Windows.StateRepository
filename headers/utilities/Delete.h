#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Trace::RPC::PackageDependency {
class Delete {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Delete@PackageDependency@RPC@Trace@StateRepository@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Delete@PackageDependency@RPC@Trace@StateRepository@@QEAA@XZ
    ~Delete();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Delete@PackageDependency@RPC@Trace@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Delete@PackageDependency@RPC@Trace@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Trace::RPC::PackageDependency
