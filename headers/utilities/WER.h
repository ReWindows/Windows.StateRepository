#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Logging {
class WER {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Log@WER@Logging@StateRepository@@YAJPEBGI@Z
    long Log(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Log@WER@Logging@StateRepository@@YAJPEBGPEBD@Z
    long Log(unsigned short const *, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Log@WER@Logging@StateRepository@@YAJPEBG0@Z
    long Log(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Log@WER@Logging@StateRepository@@YAJPEBG_K@Z
    long Log(unsigned short const *, uint64_t);
};
} // namespace StateRepository::Logging
