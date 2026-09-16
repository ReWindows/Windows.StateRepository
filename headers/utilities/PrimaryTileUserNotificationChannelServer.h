#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 22 member(s).
namespace Windows::Internal::StateRepository {
class PrimaryTileUserNotificationChannelServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeregisterForNotifications@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long DeregisterForNotifications();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@QEAA@XZ
    PrimaryTileUserNotificationChannelServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNotification@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long RaiseNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForNotifications@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long RegisterForNotifications();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRegisteredForNotifications@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsRegisteredForNotifications(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserSid@PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UserSid(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PrimaryTileUserNotificationChannelServer();
};
} // namespace Windows::Internal::StateRepository
