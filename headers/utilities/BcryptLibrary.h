#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace Common {
class BcryptLibrary {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BCryptGetProperty@BcryptLibrary@Common@@SAJPEAXPEBGPEAEKPEAKK@Z
    static long BCryptGetProperty(void *, unsigned short const *, unsigned char *, unsigned long, unsigned long *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@BcryptLibrary@Common@@SAJXZ
    static long Load();
};
} // namespace Common
