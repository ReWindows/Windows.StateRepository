#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 6 member(s).
namespace StateRepository::Entity {
class SRHistory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@SRHistory@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@SRHistory@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@SRHistory@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GCTimeToLiveExpired@SRHistory@Entity@StateRepository@@SAJAEAVDatabase@3@PEBU_FILETIME@@W4ExecutionFlags@3@@Z
    static long GCTimeToLiveExpired(WindissectOpaque &, _FILETIME const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateSequenceId@SRHistory@Entity@StateRepository@@QEAAJAEAVDatabase@3@@Z
    long GenerateSequenceId(WindissectOpaque &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@SRHistory@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
};
} // namespace StateRepository::Entity
