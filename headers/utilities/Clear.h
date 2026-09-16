#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository::Logging::DatabaseCache {
class Clear {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Clear@DatabaseCache@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Clear@DatabaseCache@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Clear@DatabaseCache@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::DatabaseCache
