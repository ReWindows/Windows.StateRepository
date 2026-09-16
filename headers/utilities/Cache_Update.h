#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::Logging::CacheManagement {
class Cache_Update {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Cache_Update@CacheManagement@Logging@StateRepository@@QEAAXH@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Cache_Update@CacheManagement@Logging@StateRepository@@QEAA@XZ
    ~Cache_Update();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Cache_Update@CacheManagement@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Cache_Update@CacheManagement@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::CacheManagement
