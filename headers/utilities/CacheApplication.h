#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 12 member(s).
namespace StateRepository::Entity {
class CacheApplication {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CacheApplication@Entity@StateRepository@@QEAA@XZ
    CacheApplication();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Add@CacheApplication@Entity@StateRepository@@QEAAJW4SRJournalAction@3@AEAVDatabase@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@@Z
    long Cache_Add(int, WindissectOpaque &, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_AddAll@CacheApplication@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@@Z
    static long Cache_AddAll(WindissectOpaque &, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_CheckIntegrity@CacheApplication@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@AEA_K@Z
    static long Cache_CheckIntegrity(WindissectOpaque &, WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Delete@CacheApplication@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVManager_NoThrow@Cache@3@_JW4ExecutionFlags@3@@Z
    static long Cache_Delete(WindissectOpaque &, WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Initialize@CacheApplication@Entity@StateRepository@@SAJAEAVManager_NoThrow@Cache@3@@Z
    static long Cache_Initialize(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@CacheApplication@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVStatement@3@@Z
    static long Find(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@CacheApplication@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@CacheApplication@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CacheApplication@Entity@StateRepository@@QEAA@XZ
    ~CacheApplication();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Check@CacheApplication@Entity@StateRepository@@CAJAEBV123@AEBVApplication_NoThrow@2Cache@3@AEA_K@Z
    static long Cache_Check(WindissectOpaque const &, WindissectOpaque const &, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@CacheApplication@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
