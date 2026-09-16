#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 11 member(s).
namespace StateRepository::Entity {
class CachePackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Add@CachePackage@Entity@StateRepository@@QEAAJW4SRJournalAction@3@AEAVDatabase@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@@Z
    long Cache_Add(int, WindissectOpaque &, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_AddAll@CachePackage@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@@Z
    static long Cache_AddAll(WindissectOpaque &, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_CheckIntegrity@CachePackage@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVManager_NoThrow@Cache@3@W4ExecutionFlags@3@AEA_K@Z
    static long Cache_CheckIntegrity(WindissectOpaque &, WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Delete@CachePackage@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVManager_NoThrow@Cache@3@_JW4ExecutionFlags@3@@Z
    static long Cache_Delete(WindissectOpaque &, WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Initialize@CachePackage@Entity@StateRepository@@SAJAEAVManager_NoThrow@Cache@3@@Z
    static long Cache_Initialize(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@CachePackage@Entity@StateRepository@@SAJAEAVDatabase@3@AEAVStatement@3@@Z
    static long Find(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@CachePackage@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@CachePackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CachePackage@Entity@StateRepository@@QEAA@XZ
    ~CachePackage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cache_Check@CachePackage@Entity@StateRepository@@CAJAEBV123@AEBVPackage_NoThrow@2Cache@3@AEA_K@Z
    static long Cache_Check(WindissectOpaque const &, WindissectOpaque const &, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@CachePackage@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
