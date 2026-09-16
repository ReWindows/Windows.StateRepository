#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 9 member(s).
namespace StateRepository {
class Repair {
public:
    class ARI;
    class AppxMiniRepository;
    class PackageMiniRepository;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoRepair@Repair@StateRepository@@SAJPEAXW4Options@12@PEAI2@Z
    static long DoRepair(void *, int, unsigned int *, unsigned int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGhostToList@Repair@StateRepository@@CAJAEAV?$Array@VText@StateRepository@@V?$ContainerOperations@VText@StateRepository@@V12@@Common@@GV?$ContainerOperations@GVText@StateRepository@@@4@V?$ArrayOperations@VText@StateRepository@@V12@@4@@Common@@PEBG@Z
    static long AddGhostToList(WindissectOpaque &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGhostToList@Repair@StateRepository@@CAJPEBGW4Options@12@AEAVRegistryKey@Common@@AEAV?$Array@VText@StateRepository@@V?$ContainerOperations@VText@StateRepository@@V12@@Common@@GV?$ContainerOperations@GVText@StateRepository@@@4@V?$ArrayOperations@VText@StateRepository@@V12@@4@@5@00@Z
    static long AddGhostToList(unsigned short const *, int, WindissectOpaque &, WindissectOpaque &, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteGhostFromRegistry@Repair@StateRepository@@CAXPEBGAEAVRegistryKey@Common@@00AEAI@Z
    static void DeleteGhostFromRegistry(unsigned short const *, WindissectOpaque &, unsigned short const *, unsigned short const *, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteGhostsFromRegistry@Repair@StateRepository@@CAXPEBGAEAVRegistryKey@Common@@0AEBV?$Array@VText@StateRepository@@V?$ContainerOperations@VText@StateRepository@@V12@@Common@@GV?$ContainerOperations@GVText@StateRepository@@@4@V?$ArrayOperations@VText@StateRepository@@V12@@4@@4@AEAI@Z
    static void DeleteGhostsFromRegistry(unsigned short const *, WindissectOpaque &, unsigned short const *, WindissectOpaque const &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGhosts@Repair@StateRepository@@CAJPEAXPEBG_JW4Options@12@AEAVDatabase@2@AEAVRegistryKey@Common@@1AEAI6@Z
    static long RemoveGhosts(void *, unsigned short const *, int64_t, int, WindissectOpaque &, WindissectOpaque &, unsigned short const *, unsigned int &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Repair_Machine@Repair@StateRepository@@CAJW4Options@12@AEAVDatabase@2@AEAI2@Z
    static long Repair_Machine(int, WindissectOpaque &, unsigned int &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Repair_User@Repair@StateRepository@@CAJPEAXPEBG_JW4Options@12@AEAVDatabase@2@AEAI5@Z
    static long Repair_User(void *, unsigned short const *, int64_t, int, WindissectOpaque &, unsigned int &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoRepair@Repair@StateRepository@@CAJPEAXPEBGW4Options@12@AEAI3@Z
    static long _DoRepair(void *, unsigned short const *, int, unsigned int &, unsigned int &);
};
} // namespace StateRepository
