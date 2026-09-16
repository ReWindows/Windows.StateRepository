#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 13 member(s).
namespace Windows::Internal::StateRepository {
class AppInstallerFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppInstallerFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppInstallerFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUri@AppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUri(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@AppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppInstaller@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@AppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppInstaller@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IAppInstaller * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUri@AppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInstaller@234@@Z
    virtual long GetByUri(HSTRING__*, ::Windows::Internal::StateRepository::IAppInstaller * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppInstaller@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IAppInstaller * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUri@AppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInstaller@234@@Z
    virtual long TryGetByUri(HSTRING__*, ::Windows::Internal::StateRepository::IAppInstaller * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@AppInstallerFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIAppInstaller@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IAppInstaller * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInstallerFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppInstallerFactoryServer();
};
} // namespace Windows::Internal::StateRepository
