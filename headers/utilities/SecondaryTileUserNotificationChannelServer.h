#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 22 member(s).
namespace Windows::Internal::StateRepository {
class SecondaryTileUserNotificationChannelServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeregisterForNotifications@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long DeregisterForNotifications();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNotification@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long RaiseNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForNotifications@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long RegisterForNotifications();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@QEAA@XZ
    SecondaryTileUserNotificationChannelServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRegisteredForNotifications@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsRegisteredForNotifications(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UserSid@SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_UserSid(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileUserNotificationChannelServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SecondaryTileUserNotificationChannelServer();
};
} // namespace Windows::Internal::StateRepository
