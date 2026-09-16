#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository::DataType {
class Temporal {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNow@Temporal@DataType@StateRepository@@YA_KXZ
    uint64_t GetNow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOperationDue@Temporal@DataType@StateRepository@@YA_N_K00@Z
    bool IsOperationDue(uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToSystemTimeAndMicroseconds@Temporal@DataType@StateRepository@@YA?AU_SYSTEMTIME@@_KAEA_K@Z
    _SYSTEMTIME ToSystemTimeAndMicroseconds(uint64_t, uint64_t &);
};
} // namespace StateRepository::DataType
