#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 4 member(s).
namespace StateRepository::Entity {
class AppUriHandlerLauncherInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@AppUriHandlerLauncherInfo@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerLauncherInfo@Entity@StateRepository@@QEAA@XZ
    ~AppUriHandlerLauncherInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@AppUriHandlerLauncherInfo@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &);
};
} // namespace StateRepository::Entity
