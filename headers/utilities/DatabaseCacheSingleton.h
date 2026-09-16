#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository {
class DatabaseCacheSingleton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@DatabaseCacheSingleton@StateRepository@@SAJXZ
    static long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogStatistics@DatabaseCacheSingleton@StateRepository@@SAJXZ
    static long LogStatistics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@DatabaseCacheSingleton@StateRepository@@SAJXZ
    static long Shutdown();
};
} // namespace StateRepository
