#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 7 member(s).
namespace StateRepository::Entity {
class SRJournal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@SRJournal@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@SRJournal@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long Clear(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAll@SRJournal@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long ClearAll(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBySRCacheable_SortedBySequenceId@SRJournal@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVStatement@3@@Z
    static long FindBySRCacheable_SortedBySequenceId(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@SRJournal@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@SRJournal@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long Reset(WindissectOpaque &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@SRJournal@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
