#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 8 member(s).
namespace StateRepository {
class PackageDependency {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PackageDependency@StateRepository@@YAJPEAXPEBG@Z
    long Delete(void *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeletePersisted@PackageDependency@StateRepository@@YAJPEBG@Z
    long DeletePersisted(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackageDependency@PackageDependency@StateRepository@@YAJAEBUPackageDependency_FindPackageDependencyCriteria@@AEAVStringList_NoThrow@2@@Z
    long FindPackageDependency(PackageDependency_FindPackageDependencyCriteria const &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageDependencyInformation@PackageDependency@StateRepository@@YAJPEBGPEAPEAXPEAPEAGPEA_KPEAH42PEAI3@Z
    long GetPackageDependencyInformation(unsigned short const *, void * *, unsigned short * *, uint64_t *, int *, int *, unsigned short * *, unsigned int *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessesUsingPackageDependency@PackageDependency@StateRepository@@YAJPEBGPEAXHPEAIPEAPEAK@Z
    long GetProcessesUsingPackageDependency(unsigned short const *, void *, int, unsigned int *, unsigned long * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@PackageDependency@StateRepository@@YAJPEAX@Z
    long Remove(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rundown_Context@PackageDependency@StateRepository@@YAJPEAX@Z
    long Rundown_Context(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rundown_TransientContext@PackageDependency@StateRepository@@YAJPEAX@Z
    long Rundown_TransientContext(void *);
};
} // namespace StateRepository
