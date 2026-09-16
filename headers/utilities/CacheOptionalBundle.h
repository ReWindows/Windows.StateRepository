#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 10 member(s).
namespace StateRepository::Entity {
class CacheOptionalBundle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Add@CacheOptionalBundle@Entity@StateRepository@@QEAAJW4SRJournalAction@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@@Z
    long Cache_Add(int, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_AddAll@CacheOptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@@Z
    static long Cache_AddAll(WindissectOpaque &, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_CheckIntegrity@CacheOptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@AEA_K@Z
    static long Cache_CheckIntegrity(WindissectOpaque &, WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Delete@CacheOptionalBundle@Entity@StateRepository@@SAJAEAVManager_NoThrow@Cache@3@_JW4ExecutionFlags@3@@Z
    static long Cache_Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Initialize@CacheOptionalBundle@Entity@StateRepository@@SAJAEAVManager_NoThrow@Cache@3@@Z
    static long Cache_Initialize(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@CacheOptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVStatement@3@@Z
    static long Find(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@CacheOptionalBundle@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@CacheOptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Check@CacheOptionalBundle@Entity@StateRepository@@CAJAEBV123@AEBVOptionalBundle_NoThrow@2Cache@3@AEA_K@Z
    static long Cache_Check(WindissectOpaque const &, WindissectOpaque const &, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@CacheOptionalBundle@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
