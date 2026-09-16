#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 13 member(s).
namespace StateRepository::Entity {
class CacheApplicationExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Add@CacheApplicationExtension@Entity@StateRepository@@QEAAJW4SRJournalAction@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@@Z
    long Cache_Add(int, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_AddAll@CacheApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@@Z
    static long Cache_AddAll(WindissectOpaque &, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Add__Dictionary@CacheApplicationExtension@Entity@StateRepository@@QEAAJW4SRJournalAction@3@AEAVManager_NoThrow@Cache@3@AEAVContext_NoThrow@63@@Z
    long Cache_Add__Dictionary(int, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_CheckIntegrity@CacheApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@AEA_K@Z
    static long Cache_CheckIntegrity(WindissectOpaque &, WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Delete@CacheApplicationExtension@Entity@StateRepository@@SAJAEAVManager_NoThrow@Cache@3@_JW4ExecutionFlags@3@@Z
    static long Cache_Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Initialize@CacheApplicationExtension@Entity@StateRepository@@SAJAEAVManager_NoThrow@Cache@3@@Z
    static long Cache_Initialize(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@CacheApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVStatement@3@@Z
    static long Find(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@CacheApplicationExtension@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@CacheApplicationExtension@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CacheApplicationExtension@Entity@StateRepository@@QEAA@XZ
    ~CacheApplicationExtension();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Check@CacheApplicationExtension@Entity@StateRepository@@CAJAEBV123@AEBVApplicationExtension_NoThrow@2Cache@3@AEA_K@Z
    static long Cache_Check(WindissectOpaque const &, WindissectOpaque const &, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Check__Dictionary@CacheApplicationExtension@Entity@StateRepository@@CAJAEBV123@AEBVApplicationExtension_NoThrow@2Cache@3@AEA_KAEAVTextA@3@@Z
    static long Cache_Check__Dictionary(WindissectOpaque const &, WindissectOpaque const &, uint64_t &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@CacheApplicationExtension@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
