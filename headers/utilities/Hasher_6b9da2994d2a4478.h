#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 7 member(s).
namespace StateRepository::DataType::ProgId {
class Hasher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Digest@Hasher@ProgId@DataType@StateRepository@@QEAAJPEBG@Z
    long Digest(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Digest@Hasher@ProgId@DataType@StateRepository@@QEAAJ_KPEBX@Z
    long Digest(uint64_t, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProgId@Hasher@ProgId@DataType@StateRepository@@QEAAJAEAVText@4@@Z
    long GetProgId(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@Hasher@ProgId@DataType@StateRepository@@QEAAJXZ
    long Start();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Hasher@ProgId@DataType@StateRepository@@QEAA@XZ
    ~Hasher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHasher@Hasher@ProgId@DataType@StateRepository@@AEAAJ_N@Z
    long CreateHasher(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyHasher@Hasher@ProgId@DataType@StateRepository@@AEAAXXZ
    void DestroyHasher();
};
} // namespace StateRepository::DataType::ProgId
