#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 43 member(s).
namespace Windows::Internal::StateRepository {
class PrimaryTileServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplication@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplication@234@@Z
    virtual long GetApplication(::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIPackage@234@@Z
    virtual long GetPackage(::Windows::Internal::StateRepository::IPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PrimaryTileServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PrimaryTileServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrimaryTileServer@StateRepository@Internal@Windows@@QEAA@XZ
    PrimaryTileServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Application(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditionId@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EditionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsArgumentsNull@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsArgumentsNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEditionIdNull@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEditionIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Package@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Package(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsKidZone@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsKidZone(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsLockScreen@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsLockScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileId@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TileId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileTemplate@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileTemplate@234@@Z
    virtual long get_TileTemplate(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileType@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileType@234@@Z
    virtual long get_TileType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleInAppList@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_VisibleInAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleInSettings@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_VisibleInSettings(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__PrimaryTileID@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__PrimaryTileID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsKidZone@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsKidZone(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsLockScreen@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsLockScreen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibleInAppList@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_VisibleInAppList(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibleInSettings@PrimaryTileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_VisibleInSettings(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PrimaryTileServer();
};
} // namespace Windows::Internal::StateRepository
