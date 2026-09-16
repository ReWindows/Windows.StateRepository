#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 32 member(s).
namespace Windows::Internal::StateRepository {
class ProtocolLauncherInfoServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplication@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIApplication@234@@Z
    virtual long GetApplication(::Windows::Internal::StateRepository::IApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProtocol@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIProtocol@234@@Z
    virtual long GetProtocol(::Windows::Internal::StateRepository::IProtocol * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@QEAA@XZ
    ProtocolLauncherInfoServer();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Application@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Application(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationUserModelId@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EffectiveSupportedUsers@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAW4SupportedUsers@234@@Z
    virtual long get_EffectiveSupportedUsers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsProgIDNull@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAE@Z
    virtual long get_IsProgIDNull(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFamilyName@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageFullName@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_PackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PackageOrigin@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAW4PackageOrigin@234@@Z
    virtual long get_PackageOrigin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgID@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProgID(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Protocol@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEA_J@Z
    virtual long get_Protocol(int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReturnResults@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAW4ProtocolReturnResults@234@@Z
    virtual long get_ReturnResults(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedUsers@ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAAJPEAW4SupportedUsers@234@@Z
    virtual long get_SupportedUsers(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProtocolLauncherInfoServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ProtocolLauncherInfoServer();
};
} // namespace Windows::Internal::StateRepository
