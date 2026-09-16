#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 25 member(s).
namespace Windows::Internal::StateRepository {
class UserServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UserServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UserServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UserServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserSidAsSecurityIdentifier@UserServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long GetUserSidAsSecurityIdentifier(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@UserServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@UserServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@UserServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@UserServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UserServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UserServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUserSidAsSecurityIdentifier@UserServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long SetUserSidAsSecurityIdentifier(unsigned int, unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserServer@StateRepository@Internal@Windows@@QEAA@XZ
    UserServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@UserServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserSid@UserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UserSid(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@UserServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__UserID@UserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__UserID(int64_t *);
};
} // namespace Windows::Internal::StateRepository
