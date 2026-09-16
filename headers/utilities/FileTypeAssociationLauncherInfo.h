#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace StateRepository::Entity {
class FileTypeAssociationLauncherInfo {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileTypeAssociationLauncherInfo@Entity@StateRepository@@QEAA@XZ
    ~FileTypeAssociationLauncherInfo();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@FileTypeAssociationLauncherInfo@Entity@StateRepository@@CAJAEBVStatement@3@AEAV123@@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &);
};
} // namespace StateRepository::Entity
