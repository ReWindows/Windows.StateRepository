#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 63 member(s).
namespace Windows::Internal::StateRepository {
class TileViewServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileViewServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplication@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplication@234@@Z
    virtual long GetApplication(::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationIdentity@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplicationIdentity@234@@Z
    virtual long GetApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileInfo@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_JPEAW4TileFlags@234@PEAW4TileType@234@PEAW4TileTemplate@234@PEAPEAUHSTRING__@@4PEAPEAUIPropertySet@Collections@Foundation@4@PEAU_GUID@@0@Z
    virtual long GetTileInfo(int64_t *, int *, int *, int *, HSTRING__* *, HSTRING__* *, WindissectOpaque * *, _GUID *, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileInfo2@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_JPEAW4TileFlags@234@PEAW4TileType@234@PEAW4TileTemplate@234@PEAPEAUHSTRING__@@4PEAIPEAPEAEPEAU_GUID@@0@Z
    virtual long GetTileInfo2(int64_t *, int *, int *, int *, HSTRING__* *, HSTRING__* *, unsigned int *, unsigned char * *, _GUID *, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUser@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetUser(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TileViewServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TileViewServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TileViewServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileViewServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileViewServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileViewServer@StateRepository@Internal@Windows@@QEAA@XZ
    TileViewServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Application(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationIdentity@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ApplicationIdentity(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationUserModelId@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ChangeId(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditionId@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EditionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsArgumentsNull@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsArgumentsNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEditionIdNull@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEditionIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileUserState@234@@Z
    virtual long get_State(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsKidZone@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsKidZone(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsLockScreen@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsLockScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileId@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TileId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileTemplate@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileTemplate@234@@Z
    virtual long get_TileTemplate(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileType@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileType@234@@Z
    virtual long get_TileType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileUniqueId@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_TileUniqueId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_User@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_User(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleInAppList@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_VisibleInAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleInSettings@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_VisibleInSettings(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Created@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Created(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Modified@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__Modified(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__TileUserID@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__TileUserID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__TileUser_Revision@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__TileUser_Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__TileViewID@TileViewServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__TileViewID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsKidZone@TileViewServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsKidZone(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsLockScreen@TileViewServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsLockScreen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibleInAppList@TileViewServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_VisibleInAppList(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibleInSettings@TileViewServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_VisibleInSettings(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileViewServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~TileViewServer();
};
} // namespace Windows::Internal::StateRepository
