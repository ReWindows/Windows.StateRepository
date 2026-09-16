#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Cache::Entity {
class Protocol_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@Protocol_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long Get(WindissectOpaque &, int64_t, int, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Protocol_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~Protocol_NoThrow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextToObject@Protocol_NoThrow@Entity@Cache@StateRepository@@CAJAEAVContext_NoThrow@34@AEAV1234@W4CacheFlags@1234@_J@Z
    static long ContextToObject(WindissectOpaque &, WindissectOpaque &, int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@Protocol_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z
    static long Open(WindissectOpaque &, int64_t, WindissectOpaque &, bool &);
};
} // namespace StateRepository::Cache::Entity
