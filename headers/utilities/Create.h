#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Trace::RPC::PackageDependency {
class Create {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Create@PackageDependency@RPC@Trace@StateRepository@@QEAAXPEAXPEBG_KHH1I@Z
    void StartActivity(void *, unsigned short const *, uint64_t, int, int, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Create@PackageDependency@RPC@Trace@StateRepository@@QEAAXPEBG@Z
    void Stop(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Create@PackageDependency@RPC@Trace@StateRepository@@QEAA@XZ
    ~Create();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Create@PackageDependency@RPC@Trace@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Create@PackageDependency@RPC@Trace@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Trace::RPC::PackageDependency
