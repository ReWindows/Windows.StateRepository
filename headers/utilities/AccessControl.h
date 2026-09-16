#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 7 member(s).
namespace StateRepository::Security {
class AccessControl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerProcessId@AccessControl@Security@StateRepository@@SAJPEAK@Z
    static long GetCallerProcessId(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AccessControl@Security@StateRepository@@SAJXZ
    static long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@AccessControl@Security@StateRepository@@SAJXZ
    static long Shutdown();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Check@AccessControl@Security@StateRepository@@CAJPEBD0PEAX1K@Z
    static long Check(char const *, char const *, void *, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUserIsCallerOrAdministratorPrivilege@AccessControl@Security@StateRepository@@CAJPEBD0PEAUIUser@3Internal@Windows@@@Z
    static long CheckUserIsCallerOrAdministratorPrivilege(char const *, char const *, ::Windows::Internal::StateRepository::IUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckUserIsCallerOrAdministratorPrivilege@AccessControl@Security@StateRepository@@CAJPEBD0PEAX@Z
    static long CheckUserIsCallerOrAdministratorPrivilege(char const *, char const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Check@AccessControl@Security@StateRepository@@CAJPEAX0K@Z
    static long _Check(void *, void *, unsigned long);
};
} // namespace StateRepository::Security
