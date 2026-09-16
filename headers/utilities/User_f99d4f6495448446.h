#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 21 member(s).
namespace StateRepository::Entity {
class User {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@User@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@User@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@User@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@User@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserSid@User@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXAEA_N@Z
    static long ExistsByUserSid(WindissectOpaque &, void *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@User@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GC@User@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long GC(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@User@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@@Z
    static long Get(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserSid@User@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXAEAV123@@Z
    static long GetByUserSid(WindissectOpaque &, void *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEveryone@User@Entity@StateRepository@@SAJAEAV123@@Z
    static long GetEveryone(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddIfNotExist@User@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long GetOrAddIfNotExist(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_UserIDByUserSid@User@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXPEA_J@Z
    static long Get_UserIDByUserSid(WindissectOpaque &, void *, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserSid@User@Entity@StateRepository@@QEAAJPEAX@Z
    long SetUserSid(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserSid@User@Entity@StateRepository@@QEAAJPEBG@Z
    long SetUserSid(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@User@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserSid@User@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXAEAV123@AEA_N@Z
    static long TryGetByUserSid(WindissectOpaque &, void *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet_UserIDByUserSid@User@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXPEA_JAEA_N@Z
    static long TryGet_UserIDByUserSid(WindissectOpaque &, void *, int64_t *, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1User@Entity@StateRepository@@QEAA@XZ
    ~User();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@User@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@User@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
