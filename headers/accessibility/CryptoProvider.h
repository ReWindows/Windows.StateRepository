#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 6 member(s).
namespace Common {
class CryptoProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CryptoProvider@Common@@SAJPEAPEAV12@@Z
    static long Create(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DigestData@CryptoProvider@Common@@QEAAJPEBUCOMMON_BYTES@2@@Z
    long DigestData(WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDigest@CryptoProvider@Common@@QEAAJPEAUCOMMON_BYTES@2@@Z
    long GetDigest(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDigest@CryptoProvider@Common@@QEAAJXZ
    long StartDigest();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CryptoProvider@Common@@QEAA@XZ
    ~CryptoProvider();
};
} // namespace Common
