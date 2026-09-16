#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 49 member(s).
namespace Windows::Internal::StateRepository {
class TileViewQueryFilterServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TileViewQueryFilterServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@TileViewQueryFilterServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationUserModelIdToNull@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetApplicationUserModelIdToNull();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTileIdToNull@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long SetTileIdToNull();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileViewQueryFilterServer@StateRepository@Internal@Windows@@QEAA@XZ
    TileViewQueryFilterServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationUserModelId@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Flags@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileFlags@234@@Z
    virtual long get_Flags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsApplicationUserModelIdNull@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsApplicationUserModelIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsTileIdNull@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsTileIdNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotFlags@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileFlags@234@@Z
    virtual long get_NotFlags(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotSupportsKidZone@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_NotSupportsKidZone(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotSupportsLockScreen@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_NotSupportsLockScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotVisibleInAppList@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_NotVisibleInAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotVisibleInSettings@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_NotVisibleInSettings(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsKidZone@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsKidZone(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportsLockScreen@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_SupportsLockScreen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileId@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TileId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileType@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAW4TileType@234@@Z
    virtual long get_TileType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleInAppList@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_VisibleInAppList(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisibleInSettings@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_VisibleInSettings(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ApplicationUserModelId@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ApplicationUserModelId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Flags@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJW4TileFlags@234@@Z
    virtual long put_Flags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NotFlags@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJW4TileFlags@234@@Z
    virtual long put_NotFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NotSupportsKidZone@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_NotSupportsKidZone(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NotSupportsLockScreen@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_NotSupportsLockScreen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NotVisibleInAppList@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_NotVisibleInAppList(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NotVisibleInSettings@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_NotVisibleInSettings(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsKidZone@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsKidZone(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SupportsLockScreen@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_SupportsLockScreen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TileId@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TileId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TileType@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJW4TileType@234@@Z
    virtual long put_TileType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibleInAppList@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_VisibleInAppList(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VisibleInSettings@TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAAJE@Z
    virtual long put_VisibleInSettings(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileViewQueryFilterServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~TileViewQueryFilterServer();
};
} // namespace Windows::Internal::StateRepository
