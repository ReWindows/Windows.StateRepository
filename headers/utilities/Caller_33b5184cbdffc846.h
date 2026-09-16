#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository::RPC {
class Caller {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessId@Caller@RPC@StateRepository@@YAJAEAK@Z
    long GetProcessId(unsigned long &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToken@Caller@RPC@StateRepository@@YAJPEAPEAXK@Z
    long GetToken(void * *, unsigned long);
};
} // namespace StateRepository::RPC
