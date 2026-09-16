#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 31 member(s).
namespace StateRepository::Entity {
class XboxPackage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@XboxPackage@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Add(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JW4ExecutionFlags@3@@Z
    static long Delete(WindissectOpaque &, int64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByEditionId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGW4ExecutionFlags@3@@Z
    static long DeleteByEditionId(WindissectOpaque &, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByContentId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEA_N@Z
    static long ExistsByContentId(WindissectOpaque &, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByDeviceId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEA_N@Z
    static long ExistsByDeviceId(WindissectOpaque &, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByEditionId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByEditionId(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByEscrowedKeyBlobId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEA_N@Z
    static long ExistsByEscrowedKeyBlobId(WindissectOpaque &, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByPackage(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProductId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEA_N@Z
    static long ExistsByProductId(WindissectOpaque &, _GUID const &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTitleId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@IAEA_N@Z
    static long ExistsByTitleId(WindissectOpaque &, unsigned int, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByContentId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAVStatement@3@@Z
    static long FindByContentId(WindissectOpaque &, _GUID const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByDeviceId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAVStatement@3@@Z
    static long FindByDeviceId(WindissectOpaque &, _GUID const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByEditionIdPackageFamilyName@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByEditionIdPackageFamilyName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByEscrowedKeyBlobId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAVStatement@3@@Z
    static long FindByEscrowedKeyBlobId(WindissectOpaque &, _GUID const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByPackage(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProductId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@AEBU_GUID@@AEAVStatement@3@@Z
    static long FindByProductId(WindissectOpaque &, _GUID const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByTitleId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@IAEAVStatement@3@@Z
    static long FindByTitleId(WindissectOpaque &, unsigned int, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@XboxPackage@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEditionId@XboxPackage@Entity@StateRepository@@QEAAJPEBG@Z
    long SetEditionId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByEditionId@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByEditionId(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@XboxPackage@Entity@StateRepository@@QEAAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    long Update(WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update_LongRunningTransaction_RemoveOldRecords@XboxPackage@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@_N@Z
    static long Update_LongRunningTransaction_RemoveOldRecords(WindissectOpaque &, int, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XboxPackage@Entity@StateRepository@@QEAA@XZ
    XboxPackage();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XboxPackage@Entity@StateRepository@@QEAA@XZ
    ~XboxPackage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAndExecuteForAddOrUpdate@XboxPackage@Entity@StateRepository@@AEAAJAEAVDatabase@3@PEBD_NW4ExecutionFlags@3@@Z
    long BindAndExecuteForAddOrUpdate(WindissectOpaque &, char const *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@XboxPackage@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
