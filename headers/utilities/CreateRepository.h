#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 7 member(s).
namespace StateRepository::Logging::Repository {
class CreateRepository {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Migrate@CreateRepository@Repository@Logging@StateRepository@@QEAAXXZ
    void Migrate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreateRepository@Repository@Logging@StateRepository@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreateRepository@Repository@Logging@StateRepository@@QEAA@XZ
    ~CreateRepository();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreateRepository@Repository@Logging@StateRepository@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreateRepository@Repository@Logging@StateRepository@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace StateRepository::Logging::Repository
