#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 7 member(s).
namespace StateRepository {
class Snapshot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCookie@Snapshot@StateRepository@@SAJPEBG@Z
    static long ValidateCookie(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Apply@Snapshot@StateRepository@@CAJW4Partition@2@PEBG@Z
    static long Apply(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToFileOrDeleteIfExists@Snapshot@StateRepository@@CAJPEBG0@Z
    static long CopyToFileOrDeleteIfExists(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Snapshot@StateRepository@@CAJW4Partition@2@PEBG@Z
    static long Create(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@Snapshot@StateRepository@@CAJW4Partition@2@PEBG@Z
    static long Delete(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteFileIfExists@Snapshot@StateRepository@@CAJPEBG@Z
    static long DeleteFileIfExists(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Import@Snapshot@StateRepository@@CAJW4Partition@2@PEBG111@Z
    static long Import(int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
};
} // namespace StateRepository
