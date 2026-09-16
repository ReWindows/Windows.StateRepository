#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository::Repair {
class AppxMiniRepository {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGhosts_Machine@AppxMiniRepository@Repair@StateRepository@@SAJW4Options@23@AEAVDatabase@3@AEAI2@Z
    static long RemoveGhosts_Machine(int, WindissectOpaque &, unsigned int &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGhosts_User@AppxMiniRepository@Repair@StateRepository@@SAJPEAXPEBG_JW4Options@23@AEAVDatabase@3@AEAI5@Z
    static long RemoveGhosts_User(void *, unsigned short const *, int64_t, int, WindissectOpaque &, unsigned int &, unsigned int &);
};
} // namespace StateRepository::Repair
