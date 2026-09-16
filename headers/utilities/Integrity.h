#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 7 member(s).
namespace StateRepository {
class Integrity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Check@Integrity@StateRepository@@SAJW4Options@12@PEAW4Disposition@12@PEA_KP6AJPEAX@Z3@Z
    static long Check(int, int *, uint64_t *, long ( *)(void *), void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutoCheck@Integrity@StateRepository@@SAJAEA_N@Z
    static long IsAutoCheck(bool &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDatabase@Integrity@StateRepository@@CAJW4Partition@2@PEBGPEBDAEAVDatabase@2@@Z
    static long AttachDatabase(int, unsigned short const *, char const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fix@Integrity@StateRepository@@CAJW4Options@12@PEA_KP6AJPEAX@Z2@Z
    static long Fix(int, uint64_t *, long ( *)(void *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDatabaseFromCache@Integrity@StateRepository@@CAJW4Partition@2@PEBGAEAVDatabase@2@@Z
    static long OpenDatabaseFromCache(int, unsigned short const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Check@Integrity@StateRepository@@CAJPEBG0W4Options@12@P6AJPEAX@Z2AEAW4Disposition@12@AEA_K@Z
    static long _Check(unsigned short const *, unsigned short const *, int, long ( *)(void *), void *, int &, uint64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Fix@Integrity@StateRepository@@CAJPEBG0W4Options@12@P6AJPEAX@Z2AEA_K@Z
    static long _Fix(unsigned short const *, unsigned short const *, int, long ( *)(void *), void *, uint64_t &);
};
} // namespace StateRepository
