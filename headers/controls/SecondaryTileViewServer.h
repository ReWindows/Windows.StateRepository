#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 86 member(s).
namespace Windows::Internal::StateRepository {
class SecondaryTileViewServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@SecondaryTileViewServer@StateRepository@Internal@Windows@@SAJPEAUISecondaryTileView@234@AEAVSecondaryTileView@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::ISecondaryTileView *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplication@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplication@234@@Z
    virtual long GetApplication(::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationIdentity@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplicationIdentity@234@@Z
    virtual long GetApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileInfo@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_JPEAW4TileFlags@234@PEAW4TileTemplate@234@PEAPEAUHSTRING__@@3PEAPEAUIPropertySet@Collections@Foundation@4@PEAU_GUID@@0@Z
    virtual long GetTileInfo(int64_t *, int *, int *, HSTRING__* *, HSTRING__* *, WindissectOpaque * *, _GUID *, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SecondaryTileViewServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SecondaryTileViewServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileViewServer@StateRepository@Internal@Windows@@QEAA@XZ
    SecondaryTileViewServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplication@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@@Z
    virtual long SetApplication(::Windows::Internal::StateRepository::IApplication *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationIdentity@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@@Z
    virtual long SetApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetArgumentsToNull@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetArgumentsToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEditionIdToNull@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetEditionIdToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackage@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@@Z
    virtual long SetPackage(::Windows::Internal::StateRepository::IPackage *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileInfo@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJ_K0_J1@Z
    virtual long SetTileInfo(uint64_t, uint64_t, int64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUser@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@@Z
    virtual long SetUser(::Windows::Internal::StateRepository::IUser *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRevision@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJ_K_J@Z
    virtual long UpdateRevision(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Application(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationIdentity@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ApplicationIdentity(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationUserModelId@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ChangeId(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditionId@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EditionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsArgumentsNull@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsArgumentsNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEditionIdNull@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEditionIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileUserState@234@@Z
    virtual long get_State(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsKidZone@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsKidZone(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsLockScreen@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsLockScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileId@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TileId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileTemplate@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileTemplate@234@@Z
    virtual long get_TileTemplate(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileType@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileType@234@@Z
    virtual long get_TileType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileUniqueId@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_TileUniqueId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleInAppList@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_VisibleInAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleInSettings@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_VisibleInSettings(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Created@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Created(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Modified@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Modified(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__SecondaryTileID@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__SecondaryTileID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__SecondaryTileUserID@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__SecondaryTileUserID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__SecondaryTileUser_Revision@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__SecondaryTileUser_Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Application@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_Application(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationIdentity@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_ApplicationIdentity(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationUserModelId@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ApplicationUserModelId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Arguments@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Arguments(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EditionId@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_EditionId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Flags@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJW4TileFlags@234@@Z
    virtual long put_Flags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Package@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_Package(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_State@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJW4TileUserState@234@@Z
    virtual long put_State(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsKidZone@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsKidZone(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsLockScreen@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsLockScreen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TileId@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TileId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TileTemplate@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJW4TileTemplate@234@@Z
    virtual long put_TileTemplate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TileType@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJW4TileType@234@@Z
    virtual long put_TileType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TileUniqueId@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long put_TileUniqueId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_User@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_User(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibleInAppList@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_VisibleInAppList(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibleInSettings@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_VisibleInSettings(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Created@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__Created(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Modified@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__Modified(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__SecondaryTileID@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__SecondaryTileID(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__SecondaryTileUserID@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__SecondaryTileUserID(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__SecondaryTileUser_Revision@SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__SecondaryTileUser_Revision(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileViewServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SecondaryTileViewServer();
};
} // namespace Windows::Internal::StateRepository
