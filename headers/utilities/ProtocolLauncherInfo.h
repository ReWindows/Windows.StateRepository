#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository::Entity {
class ProtocolLauncherInfo {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProtocolLauncherInfo@Entity@StateRepository@@QEAA@XZ
    ~ProtocolLauncherInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@ProtocolLauncherInfo@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &);
};
} // namespace StateRepository::Entity
