#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 1 member(s).
namespace StateRepository {
class Service {
public:
    class AutoElapsedTime;
    class InProgressCallback;
    class MonitorInitialization;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStatus@Service@StateRepository@@YAXKKKPEBI@Z
    void UpdateStatus(unsigned long, unsigned long, unsigned long, unsigned int const *);
};
} // namespace StateRepository
