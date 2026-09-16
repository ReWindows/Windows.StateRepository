#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 6 member(s).
namespace StateRepository::Entity {
class Sequence {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@Sequence@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@Sequence@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@Sequence@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextValue@Sequence@Entity@StateRepository@@SAJAEAVDatabase@3@W4SequenceId@3@AEA_J@Z
    static long GetNextValue(WindissectOpaque &, int, int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateValueById@Sequence@Entity@StateRepository@@SAJAEAVDatabase@3@W4SequenceId@3@_JW4ExecutionFlags@3@@Z
    static long UpdateValueById(WindissectOpaque &, int, int64_t, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@Sequence@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
};
} // namespace StateRepository::Entity
