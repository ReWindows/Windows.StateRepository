#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 36 member(s).
namespace StateRepository::Entity {
class PackageFamily {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PackageFamily@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndPublisherId@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG1AEA_N@Z
    static long ExistsByNameAndPublisherId(WindissectOpaque &, unsigned short const *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyName@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByPackageFamilyName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageFamilyName_ReadUncommitted@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByPackageFamilyName_ReadUncommitted(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageSID@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXAEA_N@Z
    static long ExistsByPackageSID(WindissectOpaque &, void *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPublisherId@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByPublisherId(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyName@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndPackageFamilyName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFamilyName_ReadUncommitted@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByUserAndPackageFamilyName_ReadUncommitted(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageSID@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEAXAEAVStatement@3@@Z
    static long FindByPackageSID(WindissectOpaque &, void *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPublisherId@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByPublisherId(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByUser(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@PackageFamily@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GC@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long GC(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@@Z
    static long Get(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageFamilyName@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@@Z
    static long GetByPackageFamilyName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddIfNotExist@PackageFamily@Entity@StateRepository@@QEAAJAEAVDatabase@3@PEAXW4ExecutionFlags@3@@Z
    long GetOrAddIfNotExist(WindissectOpaque &, void *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddIfNotExistByPackageFamilyName@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@@Z
    static long GetOrAddIfNotExistByPackageFamilyName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageFamily@Entity@StateRepository@@QEAA@XZ
    PackageFamily();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetName@PackageFamily@Entity@StateRepository@@QEAAJPEBG@Z
    long SetName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageFamilyName@PackageFamily@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPackageFamilyName(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackageSID@PackageFamily@Entity@StateRepository@@QEAAJPEAX@Z
    long SetPackageSID(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPublisher@PackageFamily@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPublisher(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPublisherId@PackageFamily@Entity@StateRepository@@QEAAJPEBG@Z
    long SetPublisherId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByNameAndPublisherId@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG1AEAV123@AEA_N@Z
    static long TryGetByNameAndPublisherId(WindissectOpaque &, unsigned short const *, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageFamilyName@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByPackageFamilyName(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFamilyName@PackageFamily@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAV123@AEA_N@Z
    static long TryGetByUserAndPackageFamilyName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageFamily@Entity@StateRepository@@QEAA@XZ
    ~PackageFamily();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@PackageFamily@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PackageFamily@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
