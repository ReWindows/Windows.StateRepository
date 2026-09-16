#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository::Repair {
class ARI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGhosts@ARI@Repair@StateRepository@@SAJPEAXPEBG_JW4Options@23@AEAVDatabase@3@AEAVRegistryKey@Common@@1AEAI6@Z
    static long RemoveGhosts(void *, unsigned short const *, int64_t, int, WindissectOpaque &, WindissectOpaque &, unsigned short const *, unsigned int &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGhosts_Machine@ARI@Repair@StateRepository@@SAJW4Options@23@AEAVDatabase@3@AEAI2@Z
    static long RemoveGhosts_Machine(int, WindissectOpaque &, unsigned int &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGhosts_User@ARI@Repair@StateRepository@@SAJPEAXPEBG_JW4Options@23@AEAVDatabase@3@AEAI5@Z
    static long RemoveGhosts_User(void *, unsigned short const *, int64_t, int, WindissectOpaque &, unsigned int &, unsigned int &);
};
} // namespace StateRepository::Repair
