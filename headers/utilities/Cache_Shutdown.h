#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::CacheManagement {
class Cache_Shutdown {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Cache_Shutdown@CacheManagement@Logging@StateRepository@@QEAAXH@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Cache_Shutdown@CacheManagement@Logging@StateRepository@@QEAA@XZ
    ~Cache_Shutdown();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Cache_Shutdown@CacheManagement@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Cache_Shutdown@CacheManagement@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::CacheManagement
