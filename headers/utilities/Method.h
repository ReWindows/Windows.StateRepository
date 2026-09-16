#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 6 member(s).
namespace StateRepository::Trace::WinRT::API {
class Method {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Method@API@WinRT@Trace@StateRepository@@QEAAXPEBDI@Z
    void StartActivity(char const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Method@API@WinRT@Trace@StateRepository@@QEAAXPEBDI@Z
    void Stop(char const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Method@API@WinRT@Trace@StateRepository@@QEAA@XZ
    ~Method();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Method@API@WinRT@Trace@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Method@API@WinRT@Trace@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Trace::WinRT::API
