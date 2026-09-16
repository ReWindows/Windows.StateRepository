#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 8 member(s).
namespace Windows::Internal::StateRepository {
class PrimaryTileUserNotificationChannelFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PrimaryTileUserNotificationChannelFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForUser@PrimaryTileUserNotificationChannelFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAUIPrimaryTileUserNotificationChannel@234@@Z
    virtual long CreateForUser(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPrimaryTileUserNotificationChannel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForUserSecurityIdentifier@PrimaryTileUserNotificationChannelFactoryServer@StateRepository@Internal@Windows@@UEAAJIPEAEPEAPEAUIPrimaryTileUserNotificationChannel@234@@Z
    virtual long CreateForUserSecurityIdentifier(unsigned int, unsigned char *, ::Windows::Internal::StateRepository::IPrimaryTileUserNotificationChannel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForUserSid@PrimaryTileUserNotificationChannelFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIPrimaryTileUserNotificationChannel@234@@Z
    virtual long CreateForUserSid(HSTRING__*, ::Windows::Internal::StateRepository::IPrimaryTileUserNotificationChannel * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrimaryTileUserNotificationChannelFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PrimaryTileUserNotificationChannelFactoryServer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileUserNotificationChannelFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PrimaryTileUserNotificationChannelFactoryServer();
};
} // namespace Windows::Internal::StateRepository
