#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 18 member(s).
namespace StateRepository::Entity {
class OptionalBundle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIntegrity@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long CheckIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long Exists(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByMainBundle@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEA_N@Z
    static long ExistsByMainBundle(WindissectOpaque &, int64_t, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByMainBundleAndName@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEA_N@Z
    static long ExistsByMainBundleAndName(WindissectOpaque &, int64_t, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByMainBundleAndNameAndPublisher@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEA_N@Z
    static long ExistsByMainBundleAndNameAndPublisher(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEA_N@Z
    static long ExistsByName(WindissectOpaque &, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndPublisher@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG1AEA_N@Z
    static long ExistsByNameAndPublisher(WindissectOpaque &, unsigned short const *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByMainBundle@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAVStatement@3@@Z
    static long FindByMainBundle(WindissectOpaque &, int64_t, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByMainBundleAndName@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBGAEAVStatement@3@@Z
    static long FindByMainBundleAndName(WindissectOpaque &, int64_t, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@PEBGAEAVStatement@3@@Z
    static long FindByName(WindissectOpaque &, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameAndPublisher@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@PEBG1AEAVStatement@3@@Z
    static long FindByNameAndPublisher(WindissectOpaque &, unsigned short const *, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@OptionalBundle@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixIntegrity@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@W4ExecutionFlags@3@AEA_K@Z
    static long FixIntegrity(WindissectOpaque &, int, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@_JAEAV123@AEA_N@Z
    static long TryGet(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByMainBundleAndNameAndPublisher@OptionalBundle@Entity@StateRepository@@SAJAEAVDatabase@3@_JPEBG2AEAV123@AEA_N@Z
    static long TryGetByMainBundleAndNameAndPublisher(WindissectOpaque &, int64_t, unsigned short const *, unsigned short const *, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OptionalBundle@Entity@StateRepository@@QEAA@XZ
    ~OptionalBundle();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@OptionalBundle@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@_J@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &, int64_t);
};
} // namespace StateRepository::Entity
