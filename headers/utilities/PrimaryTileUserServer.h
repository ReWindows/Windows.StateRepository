#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 46 member(s).
namespace Windows::Internal::StateRepository {
class PrimaryTileUserServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@PrimaryTileUserServer@StateRepository@Internal@Windows@@SAJPEAUIPrimaryTileUser@234@AEAVPrimaryTileUser@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::IPrimaryTileUser *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateTileUniqueId@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long GenerateTileUniqueId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationIdentity@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplicationIdentity@234@@Z
    virtual long GetApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PrimaryTileUserServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PrimaryTileUserServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrimaryTileUserServer@StateRepository@Internal@Windows@@QEAA@XZ
    PrimaryTileUserServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationIdentity@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@@Z
    virtual long SetApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUser@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@@Z
    virtual long SetUser(::Windows::Internal::StateRepository::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationIdentity@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ApplicationIdentity(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ChangeId(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileUserState@234@@Z
    virtual long get_State(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileUniqueId@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_TileUniqueId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Created@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Created(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Modified@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Modified(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PrimaryTileUserID@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PrimaryTileUserID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationIdentity@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_ApplicationIdentity(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_State@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJW4TileUserState@234@@Z
    virtual long put_State(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TileUniqueId@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long put_TileUniqueId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_User(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Created@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__Created(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Modified@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__Modified(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__PrimaryTileUserID@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__PrimaryTileUserID(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileUserServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PrimaryTileUserServer();
};
} // namespace Windows::Internal::StateRepository
