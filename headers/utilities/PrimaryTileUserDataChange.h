#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository::Entity {
class PrimaryTileUserDataChange {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNext@PrimaryTileUserDataChange@Entity@StateRepository@@SAJAEAVStatement@3@AEAV123@AEA_N@Z
    static long FindNext(WindissectOpaque &, WindissectOpaque &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RowToObject@PrimaryTileUserDataChange@Entity@StateRepository@@SAJAEBVStatement@3@AEAV123@@Z
    static long RowToObject(WindissectOpaque const &, WindissectOpaque &);
};
} // namespace StateRepository::Entity
