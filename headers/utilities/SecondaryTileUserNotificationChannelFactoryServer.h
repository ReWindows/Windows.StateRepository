#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 8 member(s).
namespace Windows::Internal::StateRepository {
class SecondaryTileUserNotificationChannelFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@SecondaryTileUserNotificationChannelFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForUser@SecondaryTileUserNotificationChannelFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAUISecondaryTileUserNotificationChannel@234@@Z
    virtual long CreateForUser(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::ISecondaryTileUserNotificationChannel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForUserSecurityIdentifier@SecondaryTileUserNotificationChannelFactoryServer@StateRepository@Internal@Windows@@UEAAJIPEAEPEAPEAUISecondaryTileUserNotificationChannel@234@@Z
    virtual long CreateForUserSecurityIdentifier(unsigned int, unsigned char *, ::Windows::Internal::StateRepository::ISecondaryTileUserNotificationChannel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForUserSid@SecondaryTileUserNotificationChannelFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUISecondaryTileUserNotificationChannel@234@@Z
    virtual long CreateForUserSid(HSTRING__*, ::Windows::Internal::StateRepository::ISecondaryTileUserNotificationChannel * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileUserNotificationChannelFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    SecondaryTileUserNotificationChannelFactoryServer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileUserNotificationChannelFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SecondaryTileUserNotificationChannelFactoryServer();
};
} // namespace Windows::Internal::StateRepository
