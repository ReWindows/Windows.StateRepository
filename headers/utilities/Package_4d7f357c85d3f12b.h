#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 7 member(s).
namespace StateRepository::Macros::Evaluators {
class Package {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentDirectoryPath@Package@Evaluators@Macros@StateRepository@@YAJPEAXPEAPEAG@Z
    long CurrentDirectoryPath(void *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EffectiveExternalPath@Package@Evaluators@Macros@StateRepository@@YAJPEAXPEAPEAG@Z
    long EffectiveExternalPath(void *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EffectivePath@Package@Evaluators@Macros@StateRepository@@YAJPEAXPEAPEAG@Z
    long EffectivePath(void *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstalledPath@Package@Evaluators@Macros@StateRepository@@YAJPEAXPEAPEAG@Z
    long InstalledPath(void *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MachineExternalPath@Package@Evaluators@Macros@StateRepository@@YAJPEAXPEAPEAG@Z
    long MachineExternalPath(void *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MutablePath@Package@Evaluators@Macros@StateRepository@@YAJPEAXPEAPEAG@Z
    long MutablePath(void *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserExternalPath@Package@Evaluators@Macros@StateRepository@@YAJPEAXPEAPEAG@Z
    long UserExternalPath(void *, unsigned short * *);
};
} // namespace StateRepository::Macros::Evaluators
