#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace Common {
class String {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaseInsensitiveStartsWith@String@Common@@SAHPEBGK0K@Z
    static int CaseInsensitiveStartsWith(unsigned short const *, unsigned long, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartsWith@String@Common@@SAHPEBG_K01@Z
    static int StartsWith(unsigned short const *, uint64_t, unsigned short const *, uint64_t);
};
} // namespace Common
