#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 19 member(s).
namespace StateRepository::ProcessPackageDependency {
class PackageDependencyList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PackageDependencyList@ProcessPackageDependency@StateRepository@@QEAAJPEAX0PEBGAEA_N@Z
    long Delete(void *, void *, unsigned short const *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dump@PackageDependencyList@ProcessPackageDependency@StateRepository@@QEBAJXZ
    long Dump() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFullName@PackageDependencyList@ProcessPackageDependency@StateRepository@@QEBAJPEAXPEBGW4SRPackageDependencyExistsOptions@@AEA_N@Z
    long ExistsByUserAndPackageFullName(void *, unsigned short const *, int, bool &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPackageDependency@PackageDependencyList@ProcessPackageDependency@StateRepository@@QEAAJAEBUPackageDependency_FindPackageDependencyCriteria@@AEAVStringList_NoThrow@3@@Z
    long FindPackageDependency(PackageDependency_FindPackageDependencyCriteria const &, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageDependencyInformation@PackageDependencyList@ProcessPackageDependency@StateRepository@@QEAAJPEBGPEAPEAXPEAPEAGPEA_KPEAH42PEAI3@Z
    long GetPackageDependencyInformation(unsigned short const *, void * *, unsigned short * *, uint64_t *, int *, int *, unsigned short * *, unsigned int *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessesUsingPackageDependency@PackageDependencyList@ProcessPackageDependency@StateRepository@@QEAAJPEBGPEAXHPEAIPEAPEAK@Z
    long GetProcessesUsingPackageDependency(unsigned short const *, void *, int, unsigned int *, unsigned long * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@PackageDependencyList@ProcessPackageDependency@StateRepository@@QEAAJPEAX0@Z
    long Remove(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rundown_Context@PackageDependencyList@ProcessPackageDependency@StateRepository@@QEAAJPEAX@Z
    long Rundown_Context(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rundown_TransientContext@PackageDependencyList@ProcessPackageDependency@StateRepository@@QEAAJPEAX@Z
    long Rundown_TransientContext(void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteExpired@PackageDependencyList@ProcessPackageDependency@StateRepository@@CAJAEAVDatabase@3@PEAX_JPEBGW4PackageType@3@_K@Z
    static long DeleteExpired(WindissectOpaque &, void *, int64_t, unsigned short const *, int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageDependency_Resolved@PackageDependencyList@ProcessPackageDependency@StateRepository@@AEBAJPEBVPackageDependency@23@AEA_K@Z
    long FindByPackageDependency_Resolved(WindissectOpaque const *, uint64_t &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageDependency_Transient@PackageDependencyList@ProcessPackageDependency@StateRepository@@AEBAJPEBVPackageDependency@23@AEA_K@Z
    long FindByPackageDependency_Transient(WindissectOpaque const *, uint64_t &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndId_Transient@PackageDependencyList@ProcessPackageDependency@StateRepository@@AEBAJPEAXPEBGAEAPEBVPackageDependency@23@@Z
    long FindByUserAndId_Transient(void *, unsigned short const *, WindissectOpaque const * &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackageFullName_Resolved@PackageDependencyList@ProcessPackageDependency@StateRepository@@AEBAJPEAXPEBGAEAPEBVPackageDependency@23@@Z
    long FindByUserAndPackageFullName_Resolved(void *, unsigned short const *, WindissectOpaque const * &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnlyFit@PackageDependencyList@ProcessPackageDependency@StateRepository@@AEBAJAEAVDatabase@3@PEAXPEBGAEA_N@Z
    long IsOnlyFit(WindissectOpaque &, void *, unsigned short const *, bool &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnlyFit@PackageDependencyList@ProcessPackageDependency@StateRepository@@AEBAJAEAVDatabase@3@AEBVPackageDependency@Entity@3@PEAX_JPEBGIAEA_N@Z
    long IsOnlyFit(WindissectOpaque &, WindissectOpaque const &, void *, int64_t, unsigned short const *, unsigned int, bool &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPackageAMatchForPackageDependency@PackageDependencyList@ProcessPackageDependency@StateRepository@@AEBAJAEAVDatabase@3@PEAXAEBVPackage@Entity@3@AEA_N@Z
    long IsPackageAMatchForPackageDependency(WindissectOpaque &, void *, WindissectOpaque const &, bool &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindByPackageDependency@PackageDependencyList@ProcessPackageDependency@StateRepository@@AEBAJAEBV?$Array@VPackageDependency@ProcessPackageDependency@StateRepository@@V?$ContainerOperations@VPackageDependency@ProcessPackageDependency@StateRepository@@V123@@Common@@GV?$ContainerOperations@GVPackageDependency@ProcessPackageDependency@StateRepository@@@5@V?$ArrayOperations@VPackageDependency@ProcessPackageDependency@StateRepository@@V123@@5@@Common@@PEBVPackageDependency@23@AEA_K@Z
    long _FindByPackageDependency(WindissectOpaque const &, WindissectOpaque const *, uint64_t &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindByUserAndPackageDependency@PackageDependencyList@ProcessPackageDependency@StateRepository@@AEBAJAEBV?$Array@VPackageDependency@ProcessPackageDependency@StateRepository@@V?$ContainerOperations@VPackageDependency@ProcessPackageDependency@StateRepository@@V123@@Common@@GV?$ContainerOperations@GVPackageDependency@ProcessPackageDependency@StateRepository@@@5@V?$ArrayOperations@VPackageDependency@ProcessPackageDependency@StateRepository@@V123@@5@@Common@@PEAXPEBVPackageDependency@23@AEA_K@Z
    long _FindByUserAndPackageDependency(WindissectOpaque const &, void *, WindissectOpaque const *, uint64_t &) const;
};
} // namespace StateRepository::ProcessPackageDependency
