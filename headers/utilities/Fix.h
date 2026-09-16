#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 6 member(s).
namespace StateRepository::Logging::Integrity {
class Fix {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Fix@Integrity@Logging@StateRepository@@QEAAXH@Z
    void StartActivity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Fix@Integrity@Logging@StateRepository@@QEAAXH_K@Z
    void Stop(int, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Fix@Integrity@Logging@StateRepository@@QEAA@XZ
    ~Fix();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Fix@Integrity@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Fix@Integrity@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Integrity
