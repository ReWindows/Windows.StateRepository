#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 19 member(s).
namespace StateRepository::Entity {
class WorkInProgress {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_CheckAllCascadingInMachinePartition@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@AEA_K@Z
    static long Cache_CheckAllCascadingInMachinePartition(WindissectOpaque &, WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAllCascadingInDeploymentPartition@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckAllCascadingInDeploymentPartition(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAllCascadingInMachinePartition@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckAllCascadingInMachinePartition(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteAllCascading@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@_N@Z
    static long DeleteAllCascading(WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixAllCascadingInDeploymentPartition@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixAllCascadingInDeploymentPartition(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixAllCascadingInMachinePartition@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixAllCascadingInMachinePartition(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GC@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long GC(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GCChangelogs@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4Partition@3@PEBU_FILETIME@@W4ExecutionFlags@3@@Z
    static long GCChangelogs(WindissectOpaque &, int, _FILETIME const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GCChangelogs@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4Partition@3@W4ExecutionFlags@3@@Z
    static long GCChangelogs(WindissectOpaque &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GCInDeploymentPartition@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long GCInDeploymentPartition(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GCInMachinePartition@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long GCInMachinePartition(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GCTimeToLiveExpired@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long GCTimeToLiveExpired(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GCTimeToLiveExpired@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@PEBU_FILETIME@@W4ExecutionFlags@3@@Z
    static long GCTimeToLiveExpired(WindissectOpaque &, _FILETIME const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostCheckAllCascadingInMachinePartition@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long PostCheckAllCascadingInMachinePartition(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostFixAllCascadingInMachinePartition@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long PostFixAllCascadingInMachinePartition(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAllCascading@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@_N@Z
    static long UpdateAllCascading(WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAll_LongRunningTransaction_RemoveOldRecordsInMachinePartition@WorkInProgress@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@_N@Z
    static long UpdateAll_LongRunningTransaction_RemoveOldRecordsInMachinePartition(WindissectOpaque &, int, bool);
};
} // namespace StateRepository::Entity
