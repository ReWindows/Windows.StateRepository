#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository::Globals {
class PolicySettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@PolicySettings@Globals@StateRepository@@QEAAJAEAVRegistryKey@Common@@PEBG111111IIIIIII@Z
    long Load(WindissectOpaque &, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAll@PolicySettings@Globals@StateRepository@@SAJAEAVRegistryKey@Common@@@Z
    static long LoadAll(WindissectOpaque &);
};
} // namespace StateRepository::Globals
