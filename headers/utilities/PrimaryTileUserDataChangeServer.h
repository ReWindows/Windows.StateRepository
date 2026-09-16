#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 22 member(s).
namespace Windows::Internal::StateRepository {
class PrimaryTileUserDataChangeServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@QEAA@XZ
    PrimaryTileUserDataChangeServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChangeId@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_ChangeId(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Disposition@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAJPEAW4DataChangeDisposition@234@@Z
    virtual long get_Disposition(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileUniqueId@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long get_TileUniqueId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ChangeId@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long put_ChangeId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Disposition@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAJW4DataChangeDisposition@234@@Z
    virtual long put_Disposition(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TileUniqueId@PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long put_TileUniqueId(_GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileUserDataChangeServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PrimaryTileUserDataChangeServer();
};
} // namespace Windows::Internal::StateRepository
