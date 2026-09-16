#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 6 member(s).
namespace StateRepository {
class Localization {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHString@Localization@StateRepository@@YAJPEBGPEAPEAUHSTRING__@@@Z
    long CreateHString(unsigned short const *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMrtRandomAccessStreamReference@Localization@StateRepository@@YAJPEBGUSize@Foundation@Windows@@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z
    long CreateMrtRandomAccessStreamReference(unsigned short const *, WindissectOpaque, ::Windows::Storage::Streams::IRandomAccessStreamReference * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMrtString@Localization@StateRepository@@YAJPEBGPEAPEAUHSTRING__@@@Z
    long CreateMrtString(unsigned short const *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMrtUri@Localization@StateRepository@@YAJPEBGPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long CreateMrtUri(unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUri@Localization@StateRepository@@YAJPEAUHSTRING__@@PEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long CreateUri(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUri@Localization@StateRepository@@YAJPEBGPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    long CreateUri(unsigned short const *, WindissectOpaque * *);
};
} // namespace StateRepository
