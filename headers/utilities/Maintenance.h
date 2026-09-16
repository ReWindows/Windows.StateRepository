#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository {
class Maintenance {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoMaintenance@Maintenance@StateRepository@@SAJP6AJPEAX@Z0AEAW4MaintenancePerformed@12@W4Options@12@@Z
    static long DoMaintenance(long ( *)(void *), void *, int &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoMaintenance@Maintenance@StateRepository@@SAJW4Options@12@P6AJPEAX@Z1@Z
    static long DoMaintenance(int, long ( *)(void *), void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMaintenanceDue@Maintenance@StateRepository@@SA_N_K@Z
    static bool IsMaintenanceDue(uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoMaintenance@Maintenance@StateRepository@@CAJP6AJPEAX@Z0AEAW4MaintenancePerformed@12@W4Options@12@@Z
    static long _DoMaintenance(long ( *)(void *), void *, int &, int);
};
} // namespace StateRepository
