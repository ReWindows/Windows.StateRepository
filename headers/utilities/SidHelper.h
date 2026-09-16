#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace Common {
class SidHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertSidToString@SidHelper@Common@@SAJQEAXPEAVStringBuffer@2@@Z
    static long ConvertSidToString(void * const, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserSidFromToken@SidHelper@Common@@SAJPEAXPEAPEAX@Z
    static long GetUserSidFromToken(void *, void * *);
};
} // namespace Common
