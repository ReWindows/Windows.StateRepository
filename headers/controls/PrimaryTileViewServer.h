#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 54 member(s).
namespace Windows::Internal::StateRepository {
class PrimaryTileViewServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplication@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplication@234@@Z
    virtual long GetApplication(::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationIdentity@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplicationIdentity@234@@Z
    virtual long GetApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PrimaryTileViewServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PrimaryTileViewServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrimaryTileViewServer@StateRepository@Internal@Windows@@QEAA@XZ
    PrimaryTileViewServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Application(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationIdentity@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ApplicationIdentity(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationUserModelId@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditionId@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EditionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsArgumentsNull@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsArgumentsNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEditionIdNull@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEditionIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileUserState@234@@Z
    virtual long get_State(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsKidZone@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsKidZone(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsLockScreen@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsLockScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileId@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TileId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileTemplate@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileTemplate@234@@Z
    virtual long get_TileTemplate(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileType@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileType@234@@Z
    virtual long get_TileType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileUniqueId@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_TileUniqueId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleInAppList@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_VisibleInAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleInSettings@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_VisibleInSettings(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Created@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Created(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Modified@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Modified(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PrimaryTileID@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PrimaryTileID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PrimaryTileUserID@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PrimaryTileUserID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PrimaryTileUser_Revision@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__PrimaryTileUser_Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsKidZone@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsKidZone(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsLockScreen@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsLockScreen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibleInAppList@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_VisibleInAppList(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibleInSettings@PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_VisibleInSettings(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileViewServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PrimaryTileViewServer();
};
} // namespace Windows::Internal::StateRepository
