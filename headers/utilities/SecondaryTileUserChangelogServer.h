#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 29 member(s).
namespace Windows::Internal::StateRepository {
class SecondaryTileUserChangelogServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@QEAA@XZ
    SecondaryTileUserChangelogServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileUniqueId@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_TileUniqueId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WhenOccurred@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAUDateTime@Foundation@4@@Z
    virtual long get_WhenOccurred(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Created@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Created(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Deleted@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Deleted(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__SecondaryTileUserChangelogID@SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__SecondaryTileUserChangelogID(int64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SecondaryTileUserChangelogServer();
};
} // namespace Windows::Internal::StateRepository
