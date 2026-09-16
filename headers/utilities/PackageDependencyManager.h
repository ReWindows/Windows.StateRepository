#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository::ProcessPackageDependency {
class PackageDependencyManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PackageDependencyManager@ProcessPackageDependency@StateRepository@@SAJPEAX0PEBG@Z
    static long Delete(void *, void *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFullName@PackageDependencyManager@ProcessPackageDependency@StateRepository@@SAJPEAXPEBGW4SRPackageDependencyExistsOptions@@AEA_N@Z
    static long ExistsByUserAndPackageFullName(void *, unsigned short const *, int, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageDependencyInformation@PackageDependencyManager@ProcessPackageDependency@StateRepository@@SAJPEBGPEAPEAXPEAPEAGPEA_KPEAH42PEAI3@Z
    static long GetPackageDependencyInformation(unsigned short const *, void * *, unsigned short * *, uint64_t *, int *, int *, unsigned short * *, unsigned int *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessesUsingPackageDependency@PackageDependencyManager@ProcessPackageDependency@StateRepository@@SAJPEBGPEAXHPEAIPEAPEAK@Z
    static long GetProcessesUsingPackageDependency(unsigned short const *, void *, int, unsigned int *, unsigned long * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rundown_TransientContext@PackageDependencyManager@ProcessPackageDependency@StateRepository@@SAJPEAX@Z
    static long Rundown_TransientContext(void *);
};
} // namespace StateRepository::ProcessPackageDependency
