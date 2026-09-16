#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 6 member(s).
namespace StateRepository::DataType {
class Hasher {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDigestAsBase32@Hasher@DataType@StateRepository@@QEAAJAEAVText@3@PEBG1@Z
    long GetDigestAsBase32(WindissectOpaque &, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@Hasher@DataType@StateRepository@@QEAAJXZ
    long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@Hasher@DataType@StateRepository@@QEAAJPEBG@Z
    long Update(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@Hasher@DataType@StateRepository@@QEAAJ_KPEBX@Z
    long Update(uint64_t, void const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHasher@Hasher@DataType@StateRepository@@AEAAJ_N@Z
    long CreateHasher(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyHasher@Hasher@DataType@StateRepository@@AEAAXXZ
    void DestroyHasher();
};
} // namespace StateRepository::DataType
