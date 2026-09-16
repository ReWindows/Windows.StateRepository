#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository {
class Macros {
public:
    class MacroExpandData;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@Macros@StateRepository@@YAJPEBGAEAVMacroExpandData@12@AEAVText@2@W4SRCacheExpandMacrosFlags@@@Z
    long Expand(unsigned short const *, WindissectOpaque &, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@Macros@StateRepository@@YAJPEBGPEAVMacroExpandData@12@AEAVText@2@W4SRCacheExpandMacrosFlags@@@Z
    long Expand(unsigned short const *, WindissectOpaque *, WindissectOpaque &, int);
};
} // namespace StateRepository
