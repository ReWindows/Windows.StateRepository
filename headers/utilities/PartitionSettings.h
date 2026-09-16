#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 8 member(s).
namespace StateRepository::Globals {
class PartitionSettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilenameToPartition@PartitionSettings@Globals@StateRepository@@SA?AW4Partition@3@PEBD@Z
    static int FilenameToPartition(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PartitionSettings@Globals@StateRepository@@SAPEBU123@W4Partition@3@@Z
    static WindissectOpaque const * Get(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@PartitionSettings@Globals@StateRepository@@QEAAJAEAVRegistryKey@Common@@PEBG11111111@Z
    long Load(WindissectOpaque &, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAll@PartitionSettings@Globals@StateRepository@@SAJAEAVRegistryKey@Common@@@Z
    static long LoadAll(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@PartitionSettings@Globals@StateRepository@@QEAAXXZ
    void Reset();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load_Deployment@PartitionSettings@Globals@StateRepository@@CAJAEAVRegistryKey@Common@@@Z
    static long Load_Deployment(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load_DownlevelMachine@PartitionSettings@Globals@StateRepository@@CAJAEAVRegistryKey@Common@@@Z
    static long Load_DownlevelMachine(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load_Machine@PartitionSettings@Globals@StateRepository@@CAJAEAVRegistryKey@Common@@@Z
    static long Load_Machine(WindissectOpaque &);
};
} // namespace StateRepository::Globals
