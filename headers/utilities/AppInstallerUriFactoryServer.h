#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 17 member(s).
namespace Windows::Internal::StateRepository {
class AppInstallerUriFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppInstallerUriFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstaller@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@PEAE@Z
    virtual long ExistsByAppInstaller(::Windows::Internal::StateRepository::IAppInstaller *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstallerAndUriType@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@W4AppInstallerUriType@234@PEAE@Z
    virtual long ExistsByAppInstallerAndUriType(::Windows::Internal::StateRepository::IAppInstaller *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstallerAndUriTypeAndIndex@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@W4AppInstallerUriType@234@HPEAE@Z
    virtual long ExistsByAppInstallerAndUriTypeAndIndex(::Windows::Internal::StateRepository::IAppInstaller *, int, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAppInstallerAndUriTypeAndUri@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@W4AppInstallerUriType@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByAppInstallerAndUriTypeAndUri(::Windows::Internal::StateRepository::IAppInstaller *, int, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppInstallerUri@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppInstaller@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@PEAPEAU?$IVectorView@PEAVAppInstallerUri@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByAppInstaller(::Windows::Internal::StateRepository::IAppInstaller *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAppInstallerAndUriType@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@W4AppInstallerUriType@234@PEAPEAU?$IVectorView@PEAVAppInstallerUri@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByAppInstallerAndUriType(::Windows::Internal::StateRepository::IAppInstaller *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppInstallerUri@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IAppInstallerUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByAppInstallerAndUriTypeAndIndex@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@W4AppInstallerUriType@234@HPEAPEAUIAppInstallerUri@234@@Z
    virtual long TryGetByAppInstallerAndUriTypeAndIndex(::Windows::Internal::StateRepository::IAppInstaller *, int, int, ::Windows::Internal::StateRepository::IAppInstallerUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByAppInstallerAndUriTypeAndUri@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIAppInstaller@234@W4AppInstallerUriType@234@PEAUHSTRING__@@PEAPEAUIAppInstallerUri@234@@Z
    virtual long TryGetByAppInstallerAndUriTypeAndUri(::Windows::Internal::StateRepository::IAppInstaller *, int, HSTRING__*, ::Windows::Internal::StateRepository::IAppInstallerUri * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIAppInstallerUri@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IAppInstallerUri * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInstallerUriFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppInstallerUriFactoryServer();
};
} // namespace Windows::Internal::StateRepository
