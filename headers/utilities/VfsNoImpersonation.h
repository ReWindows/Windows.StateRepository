#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 8 member(s).
namespace StateRepository {
class VfsNoImpersonation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@VfsNoImpersonation@StateRepository@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@VfsNoImpersonation@StateRepository@@SAJXZ
    static long Unregister();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?xAccess@VfsNoImpersonation@StateRepository@@CAHPEAUsqlite3_vfs@@PEBDHPEAH@Z
    static int xAccess(sqlite3_vfs *, char const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xClose@VfsNoImpersonation@StateRepository@@CAHPEAUsqlite3_file@@@Z
    static int xClose(sqlite3_file *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xDelete@VfsNoImpersonation@StateRepository@@CAHPEAUsqlite3_vfs@@PEBDH@Z
    static int xDelete(sqlite3_vfs *, char const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xFullPathname@VfsNoImpersonation@StateRepository@@CAHPEAUsqlite3_vfs@@PEBDHPEAD@Z
    static int xFullPathname(sqlite3_vfs *, char const *, int, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xOpen@VfsNoImpersonation@StateRepository@@CAHPEAUsqlite3_vfs@@PEBDPEAUsqlite3_file@@HPEAH@Z
    static int xOpen(sqlite3_vfs *, char const *, sqlite3_file *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xShmMap@VfsNoImpersonation@StateRepository@@CAHPEAUsqlite3_file@@HHHPEAPECX@Z
    static int xShmMap(sqlite3_file *, int, int, int, void volatile * *);
};
} // namespace StateRepository
