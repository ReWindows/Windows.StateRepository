#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 6 member(s).
namespace StateRepository::WinRT {
class Foundation {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToBuffer@Foundation@WinRT@StateRepository@@YAJ_KPEBXPEAIPEAPEAE@Z
    long ToBuffer(uint64_t, void const *, unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToDateTime@Foundation@WinRT@StateRepository@@YAJAEBU_FILETIME@@PEAUDateTime@1Windows@@@Z
    long ToDateTime(_FILETIME const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToHString@Foundation@WinRT@StateRepository@@YAJPEBGPEAPEAUHSTRING__@@@Z
    long ToHString(unsigned short const *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToHString@Foundation@WinRT@StateRepository@@YAJAEBVText@3@AEAVHString@Wrappers@WRL@Microsoft@@@Z
    long ToHString(WindissectOpaque const &, ::Microsoft::WRL::Wrappers::HString &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToSidHString@Foundation@WinRT@StateRepository@@YAJPEAXPEAPEAUHSTRING__@@@Z
    long ToSidHString(void *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToUri@Foundation@WinRT@StateRepository@@YAJPEBGPEAPEAUIUriRuntimeClass@1Windows@@@Z
    long ToUri(unsigned short const *, WindissectOpaque * *);
};
} // namespace StateRepository::WinRT
