#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 51 member(s).
namespace Windows::Internal::StateRepository {
class SecondaryTileServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@SecondaryTileServer@StateRepository@Internal@Windows@@SAJPEAUISecondaryTile@234@AEAVSecondaryTile@Entity@2@@Z
    static long Copy(::Windows::Internal::StateRepository::ISecondaryTile *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Get_Dictionary@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long Get_Dictionary(unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SecondaryTileServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SecondaryTileServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileServer@StateRepository@Internal@Windows@@QEAA@XZ
    SecondaryTileServer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetArgumentsToNull@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetArgumentsToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEditionIdToNull@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetEditionIdToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_Dictionary@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long Set_Dictionary(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?Set_DictionaryToNull@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Set_DictionaryToNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EditionId@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EditionId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsArgumentsNull@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsArgumentsNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEditionIdNull@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsEditionIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Is_DictionaryNull@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_Is_DictionaryNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsKidZone@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsKidZone(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsLockScreen@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsLockScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileId@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TileId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileTemplate@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileTemplate@234@@Z
    virtual long get_TileTemplate(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileType@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileType@234@@Z
    virtual long get_TileType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleInAppList@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_VisibleInAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleInSettings@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_VisibleInSettings(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__Revision@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEA_K@Z
    virtual long get__Revision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get__SecondaryTileID@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get__SecondaryTileID(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Arguments@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Arguments(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EditionId@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_EditionId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Flags@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJW4TileFlags@234@@Z
    virtual long put_Flags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsKidZone@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsKidZone(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsLockScreen@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsLockScreen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TileId@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TileId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TileTemplate@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJW4TileTemplate@234@@Z
    virtual long put_TileTemplate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibleInAppList@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_VisibleInAppList(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibleInSettings@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_VisibleInSettings(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__Revision@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJ_K@Z
    virtual long put__Revision(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put__SecondaryTileID@SecondaryTileServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put__SecondaryTileID(int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SecondaryTileServer();
};
} // namespace Windows::Internal::StateRepository
