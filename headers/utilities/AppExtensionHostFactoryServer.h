#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 16 member(s).
namespace Windows::Internal::StateRepository {
class AppExtensionHostFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppExtensionHostFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtensionAndName@AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByExtensionAndName(::Windows::Internal::StateRepository::IApplicationExtension *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationUserModelIdAndName@AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAE@Z
    virtual long ExistsByUserAndApplicationUserModelIdAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppExtensionHost@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVAppExtensionHost@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppExtensionHost@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IAppExtensionHost * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByExtensionAndName@AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAUHSTRING__@@PEAPEAUIAppExtensionHost@234@@Z
    virtual long GetByExtensionAndName(::Windows::Internal::StateRepository::IApplicationExtension *, HSTRING__*, ::Windows::Internal::StateRepository::IAppExtensionHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppExtensionHost@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IAppExtensionHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByExtensionAndName@AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAUHSTRING__@@PEAPEAUIAppExtensionHost@234@@Z
    virtual long TryGetByExtensionAndName(::Windows::Internal::StateRepository::IApplicationExtension *, HSTRING__*, ::Windows::Internal::StateRepository::IAppExtensionHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIAppExtensionHost@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IAppExtensionHost * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppExtensionHostFactoryServer();
};
} // namespace Windows::Internal::StateRepository
