#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging::Database {
class ReindexIndices {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ReindexIndices@Database@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReindexIndices@Database@Logging@StateRepository@@QEAA@XZ
    ~ReindexIndices();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ReindexIndices@Database@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ReindexIndices@Database@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Database
