#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 27 member(s).
namespace Windows::Internal::StateRepository {
class ApplicationBackgroundTaskServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@QEAA@XZ
    ApplicationBackgroundTaskServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtension@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplicationExtension@234@@Z
    virtual long GetExtension(::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Extension@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Extension(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Index@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJPEAH@Z
    virtual long get_Index(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Type(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__BackgroundTaskID@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__BackgroundTaskID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationBackgroundTaskServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ApplicationBackgroundTaskServer();
};
} // namespace Windows::Internal::StateRepository
