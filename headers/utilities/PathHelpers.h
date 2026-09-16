#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 3 member(s).
namespace Common {
class PathHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTrailingSlashIfNecessary@PathHelpers@Common@@SAJPEAVStringBufferBuilder@2@@Z
    static long AddTrailingSlashIfNecessary(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendPathSegment@PathHelpers@Common@@SAJPEAVStringBuffer@2@PEBG@Z
    static long AppendPathSegment(WindissectOpaque *, unsigned short const *);
};
} // namespace Common
