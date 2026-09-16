#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 15 member(s).
namespace StateRepository::Entity {
class Activation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Activation@Entity@StateRepository@@QEAA@XZ
    Activation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@Activation@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@Activation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByActivationKey@Activation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByActivationKey(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@Activation@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@Activation@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GC@Activation@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@@Z
    static long GC(WindissectOpaque &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBnoIsolationIsPackage@Activation@Entity@StateRepository@@QEAAJ_N@Z
    long SetBnoIsolationIsPackage(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsConsoleSubsystem@Activation@Entity@StateRepository@@QEAAJ_N@Z
    long SetIsConsoleSubsystem(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSupportsMultipleInstances@Activation@Entity@StateRepository@@QEAAJ_N@Z
    long SetSupportsMultipleInstances(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@Activation@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByActivationKey@Activation@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAV123@AEA_N@Z
    static long TryGetByActivationKey(WindissectOpaque &, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Activation@Entity@StateRepository@@QEAA@XZ
    ~Activation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@Activation@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
