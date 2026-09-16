#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 2 member(s).
namespace StateRepository::WinRT::DataAccessLayer {
class User {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet_UserIdAndUserSidFromUser@User@DataAccessLayer@WinRT@StateRepository@@SAJPEAUIUser@4Internal@Windows@@AEAVDatabase@4@PEA_JPEAPEAXPEA_N@Z
    static long TryGet_UserIdAndUserSidFromUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque &, int64_t *, void * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet_UserIdFromUser@User@DataAccessLayer@WinRT@StateRepository@@SAJPEAUIUser@4Internal@Windows@@AEAVDatabase@4@PEA_JPEA_N@Z
    static long TryGet_UserIdFromUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque &, int64_t *, bool *);
};
} // namespace StateRepository::WinRT::DataAccessLayer
