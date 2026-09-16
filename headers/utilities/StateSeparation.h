#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 5 member(s).
namespace Common {
class StateSeparation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCache@StateSeparation@Common@@SAXXZ
    static void ClearCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsStateSeparationEnabled@StateSeparation@Common@@SAJPEA_N@Z
    static long GetIsStateSeparationEnabled(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistedRegKeyPath@StateSeparation@Common@@SAJAEBUStateSeparationRedirectionMapping@2@PEAPEAG@Z
    static long GetPersistedRegKeyPath(WindissectOpaque const &, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistedRegKeyPath@StateSeparation@Common@@SAJAEBUStateSeparationRedirectionMapping@2@PEAPEBG_KPEAPEAG@Z
    static long GetPersistedRegKeyPath(WindissectOpaque const &, unsigned short const * *, uint64_t, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegKeyContainingValue@StateSeparation@Common@@SAJAEBUStateSeparationRedirectionMapping@2@PEAPEBG_KPEBGKPEAVRegistryKey@2@@Z
    static long GetRegKeyContainingValue(WindissectOpaque const &, unsigned short const * *, uint64_t, unsigned short const *, unsigned long, WindissectOpaque *);
};
} // namespace Common
