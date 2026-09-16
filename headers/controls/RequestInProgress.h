#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository::WinRT::Client {
class RequestInProgress {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RequestInProgress@Client@WinRT@StateRepository@@QEAA@_N@Z
    RequestInProgress(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForNoUse@RequestInProgress@Client@WinRT@StateRepository@@SAXP6AXXZ@Z
    static void WaitForNoUse(void ( *)(void));
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RequestInProgress@Client@WinRT@StateRepository@@QEAA@XZ
    ~RequestInProgress();
};
} // namespace StateRepository::WinRT::Client
