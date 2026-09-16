#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 11 member(s).
namespace StateRepository::Entity {
class Enterprise {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@Enterprise@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@Enterprise@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByEnterpriseId@Enterprise@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEA_N@Z
    static long ExistsByEnterpriseId(WindissectOpaque &, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@Enterprise@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@Enterprise@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GC@Enterprise@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long GC(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@Enterprise@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByEnterpriseId@Enterprise@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAV123@AEA_N@Z
    static long TryGetByEnterpriseId(WindissectOpaque &, _GUID const &, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Enterprise@Entity@StateRepository@@QEAA@XZ
    ~Enterprise();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@Enterprise@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
