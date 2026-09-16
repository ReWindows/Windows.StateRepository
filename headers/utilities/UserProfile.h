#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 1 member(s).
namespace Common {
class UserProfile {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserProfileFolderPath@UserProfile@Common@@YAJW4PROFILE_FOLDER_ID@12@PEBGAEAVStringBuffer@2@@Z
    long GetUserProfileFolderPath(int, unsigned short const *, WindissectOpaque &);
};
} // namespace Common
