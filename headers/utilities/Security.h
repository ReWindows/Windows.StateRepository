#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository {
class Security {
public:
    class AccessControl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPSID@Security@StateRepository@@YAJPEAXPEAPEAX@Z
    long CopyPSID(void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultAccountSid@Security@StateRepository@@YAJPEAXK@Z
    long CreateDefaultAccountSid(void *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidUntrustedSid@Security@StateRepository@@YA_N_KPEAX@Z
    bool IsValidUntrustedSid(uint64_t, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SidToString@Security@StateRepository@@YAJPEAXAEAVText@2@@Z
    long SidToString(void *, WindissectOpaque &);
};
} // namespace StateRepository
