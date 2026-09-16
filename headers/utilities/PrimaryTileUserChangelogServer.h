#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 29 member(s).
namespace Windows::Internal::StateRepository {
class PrimaryTileUserChangelogServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@QEAA@XZ
    PrimaryTileUserChangelogServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileUniqueId@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_TileUniqueId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WhenOccurred@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEAUDateTime@Foundation@4@@Z
    virtual long get_WhenOccurred(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Created@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Created(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Deleted@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Deleted(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PrimaryTileUserChangelogID@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PrimaryTileUserChangelogID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileUserChangelogServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PrimaryTileUserChangelogServer();
};
} // namespace Windows::Internal::StateRepository
