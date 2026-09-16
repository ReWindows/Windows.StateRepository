#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 6 member(s).
namespace Common {
class StringBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendChar@StringBuilder@Common@@QEAAJG@Z
    long AppendChar(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendString@StringBuilder@Common@@QEAAJPEBG@Z
    long AppendString(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendString@StringBuilder@Common@@QEAAJPEBUCOMMON_STRING@2@@Z
    long AppendString(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@StringBuilder@Common@@QEAAJKK@Z
    long Insert(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChars@StringBuilder@Common@@QEAAJKPEBGK@Z
    long InsertChars(unsigned long, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertUInt32@StringBuilder@Common@@QEAAJKK@Z
    long InsertUInt32(unsigned long, unsigned long);
};
} // namespace Common
