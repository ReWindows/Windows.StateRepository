#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository {
class ServiceRpc {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ServiceRpc@StateRepository@@SAJXZ
    static long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@ServiceRpc@StateRepository@@SAXXZ
    static void Shutdown();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Shutdown@ServiceRpc@StateRepository@@CAX_N0PEAU_RPC_BINDING_VECTOR@@@Z
    static void _Shutdown(bool, bool, _RPC_BINDING_VECTOR *);
};
} // namespace StateRepository
