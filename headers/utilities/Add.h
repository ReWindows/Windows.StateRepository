#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Trace::RPC::PackageDependency {
class Add {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Add@PackageDependency@RPC@Trace@StateRepository@@QEAAXPEBGI@Z
    void StartActivity(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Add@PackageDependency@RPC@Trace@StateRepository@@QEAAXPEBG@Z
    void Stop(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Add@PackageDependency@RPC@Trace@StateRepository@@QEAA@XZ
    ~Add();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Add@PackageDependency@RPC@Trace@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Add@PackageDependency@RPC@Trace@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Trace::RPC::PackageDependency
