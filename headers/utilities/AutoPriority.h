#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::ResourcePriority {
class AutoPriority {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentFormattedForLogging@AutoPriority@ResourcePriority@StateRepository@@QEAAXAEAY0EA@G@Z
    void GetCurrentFormattedForLogging(unsigned short (&)[64]);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentFormattedForLogging@AutoPriority@ResourcePriority@StateRepository@@QEAAXAEAY0EA@D@Z
    void GetCurrentFormattedForLogging(char (&)[64]);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@AutoPriority@ResourcePriority@StateRepository@@QEAAJXZ
    long Revert();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPriorities@AutoPriority@ResourcePriority@StateRepository@@QEAAJJKW4_IO_PRIORITY_HINT@@_N1PEA_N@Z
    long SetPriorities(long, unsigned long, int, bool, bool, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoPriority@ResourcePriority@StateRepository@@QEAA@XZ
    ~AutoPriority();
};
} // namespace StateRepository::ResourcePriority
