#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 50 member(s).
namespace Windows::Internal::StateRepository {
class SecondaryTileUserServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@SecondaryTileUserServer@StateRepository@Internal@Windows@@SAJPEAUISecondaryTileUser@234@AEAVSecondaryTileUser@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::ISecondaryTileUser *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateTileUniqueId@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long GenerateTileUniqueId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationIdentity@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplicationIdentity@234@@Z
    virtual long GetApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecondaryTile@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUISecondaryTile@234@@Z
    virtual long GetSecondaryTile(::Windows::Internal::StateRepository::ISecondaryTile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SecondaryTileUserServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SecondaryTileUserServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileUserServer@StateRepository@Internal@Windows@@QEAA@XZ
    SecondaryTileUserServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationIdentity@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@@Z
    virtual long SetApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryTile@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAUISecondaryTile@234@@Z
    virtual long SetSecondaryTile(::Windows::Internal::StateRepository::ISecondaryTile *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUser@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@@Z
    virtual long SetUser(::Windows::Internal::StateRepository::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationIdentity@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ApplicationIdentity(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ChangeId(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SecondaryTile@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_SecondaryTile(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileUserState@234@@Z
    virtual long get_State(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileUniqueId@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_TileUniqueId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Created@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Created(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Modified@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Modified(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__SecondaryTileUserID@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__SecondaryTileUserID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationIdentity@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_ApplicationIdentity(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SecondaryTile@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_SecondaryTile(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_State@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJW4TileUserState@234@@Z
    virtual long put_State(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TileUniqueId@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long put_TileUniqueId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_User(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Created@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__Created(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Modified@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__Modified(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__SecondaryTileUserID@SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__SecondaryTileUserID(int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileUserServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SecondaryTileUserServer();
};
} // namespace Windows::Internal::StateRepository
