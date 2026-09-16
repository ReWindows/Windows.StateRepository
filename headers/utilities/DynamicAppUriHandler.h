#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 28 member(s).
namespace StateRepository::Entity {
class DynamicAppUriHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@DynamicAppUriHandler@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByProgIDAndDynamicAppUriHandlerGroup@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JW4ExecutionFlags@3@@Z
    static long DeleteByProgIDAndDynamicAppUriHandlerGroup(WindissectOpaque &, unsigned short const *, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByDynamicAppUriHandlerGroup@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByDynamicAppUriHandlerGroup(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByHostName@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByHostName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByHostNameAndDynamicAppUriHandlerGroup@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEA_N@Z
    static long ExistsByHostNameAndDynamicAppUriHandlerGroup(WindissectOpaque &, unsigned short const *, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProgID@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByProgID(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProgIDAndDynamicAppUriHandlerGroup@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEA_N@Z
    static long ExistsByProgIDAndDynamicAppUriHandlerGroup(WindissectOpaque &, unsigned short const *, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByDynamicAppUriHandlerGroup@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByDynamicAppUriHandlerGroup(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByHostName@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByHostName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByHostNameAndDynamicAppUriHandlerGroup@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEAVStatement@3@@Z
    static long FindByHostNameAndDynamicAppUriHandlerGroup(WindissectOpaque &, unsigned short const *, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgID@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByProgID(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherInfoByUserOrDefaultAccountAndHostNameEvenIfWildcardedAndPath@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAVStatement@3@@Z
    static long FindLauncherInfoByUserOrDefaultAccountAndHostNameEvenIfWildcardedAndPath(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherInfoByUserOrDefaultAccountAndHostNameEvenIfWildcardedAndPathAndPackageFamilyName@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG22AEAVStatement@3@@Z
    static long FindLauncherInfoByUserOrDefaultAccountAndHostNameEvenIfWildcardedAndPathAndPackageFamilyName(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLauncherInfoByUserOrDefaultAccountAndProgId@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindLauncherInfoByUserOrDefaultAccountAndProgId(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateProgID@DynamicAppUriHandler@Entity@StateRepository@@SAJPEAXPEBG111AEAVText@3@@Z
    static long GenerateProgID(void *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostName@DynamicAppUriHandler@Entity@StateRepository@@QEAAJPEBG@Z
    long SetHostName(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByProgIDAndDynamicAppUriHandlerGroup@DynamicAppUriHandler@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG_JAEAV123@AEA_N@Z
    static long TryGetByProgIDAndDynamicAppUriHandlerGroup(WindissectOpaque &, unsigned short const *, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@DynamicAppUriHandler@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicAppUriHandler@Entity@StateRepository@@QEAA@XZ
    ~DynamicAppUriHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@DynamicAppUriHandler@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@DynamicAppUriHandler@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
