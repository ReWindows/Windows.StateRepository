#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 24 member(s).
namespace Windows::Internal::StateRepository {
class UserFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserSid@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long DeleteByUserSid(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserSecurityIdentifier@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJIPEAE0@Z
    virtual long ExistsByUserSecurityIdentifier(unsigned int, unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserSid@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserSid(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIUser@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserSecurityIdentifier@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJIPEAEPEAPEAUIUser@234@@Z
    virtual long GetByUserSecurityIdentifier(unsigned int, unsigned char *, ::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserSid@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIUser@234@@Z
    virtual long GetByUserSid(HSTRING__*, ::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByWindowsSystemUser@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@System@4@PEAPEAU5234@@Z
    virtual long GetByWindowsSystemUser(::Windows::System::IUser *, ::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrent@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetCurrent(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultAccount@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetDefaultAccount(::Windows::Internal::StateRepository::IUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEveryone@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long GetEveryone(::Windows::Internal::StateRepository::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIUser@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserSecurityIdentifier@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJIPEAEPEAPEAUIUser@234@@Z
    virtual long TryGetByUserSecurityIdentifier(unsigned int, unsigned char *, ::Windows::Internal::StateRepository::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserSid@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIUser@234@@Z
    virtual long TryGetByUserSid(HSTRING__*, ::Windows::Internal::StateRepository::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByWindowsSystemUser@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@System@4@PEAPEAU5234@@Z
    virtual long TryGetByWindowsSystemUser(::Windows::System::IUser *, ::Windows::Internal::StateRepository::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDefaultAccount@UserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIUser@234@@Z
    virtual long TryGetDefaultAccount(::Windows::Internal::StateRepository::IUser * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    UserFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@UserFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIUser@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetByUserSecurityIdentifier@UserFactoryServer@StateRepository@Internal@Windows@@QEAAJPEAXPEAPEAUIUser@234@@Z
    long _GetByUserSecurityIdentifier(void *, ::Windows::Internal::StateRepository::IUser * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~UserFactoryServer();
};
} // namespace Windows::Internal::StateRepository
