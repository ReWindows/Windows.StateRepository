#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace StateRepository {
class AutoCoSid {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromCaller@AutoCoSid@StateRepository@@QEAAJXZ
    long FromCaller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromSidOrCaller@AutoCoSid@StateRepository@@QEAAJPEAX@Z
    long FromSidOrCaller(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromStringOrCaller@AutoCoSid@StateRepository@@QEAAJPEBG@Z
    long FromStringOrCaller(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenFromCaller@AutoCoSid@StateRepository@@SAJPEAPEAX@Z
    static long GetTokenFromCaller(void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AutoCoSid@StateRepository@@QEAA@XZ
    ~AutoCoSid();
};
} // namespace StateRepository
