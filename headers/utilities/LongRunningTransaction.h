#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository {
class LongRunningTransaction {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOldRecords@LongRunningTransaction@StateRepository@@YAJPEBDAEAVDatabase@2@W4ExecutionFlags@2@_N@Z
    long RemoveOldRecords(char const *, WindissectOpaque &, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RollbackAll@LongRunningTransaction@StateRepository@@YAJW4Partition@2@@Z
    long RollbackAll(int);
};
} // namespace StateRepository
