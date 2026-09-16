#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Entity {
class DeploymentHistory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@DeploymentHistory@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@DeploymentHistory@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GCTimeToLiveExpired@DeploymentHistory@Entity@StateRepository@@SAJAEAVDatabase@3@PEBU_FILETIME@@W4ExecutionFlags@3@@Z
    static long GCTimeToLiveExpired(WindissectOpaque &, _FILETIME const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeploymentHistory@Entity@StateRepository@@QEAA@XZ
    ~DeploymentHistory();
};
} // namespace StateRepository::Entity
