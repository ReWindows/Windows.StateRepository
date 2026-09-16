#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 24 member(s).
namespace Windows::Internal::StateRepository {
class EnterpriseServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EnterpriseServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnterpriseServer@StateRepository@Internal@Windows@@QEAA@XZ
    EnterpriseServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EnterpriseServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EnterpriseServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EnterpriseServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@EnterpriseServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@EnterpriseServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@EnterpriseServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@EnterpriseServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EnterpriseServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EnterpriseServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnterpriseId@EnterpriseServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_EnterpriseId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@EnterpriseServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__EnterpriseID@EnterpriseServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__EnterpriseID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@EnterpriseServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnterpriseServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~EnterpriseServer();
};
} // namespace Windows::Internal::StateRepository
