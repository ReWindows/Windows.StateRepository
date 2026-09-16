#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 19 member(s).
namespace Windows::Internal::StateRepository {
class AppExtensionFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExtensionFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppExtensionFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtensionAndName@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByExtensionAndName(::Windows::Internal::StateRepository::IApplicationExtension *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVAppExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndName@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFullNameAndName@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAU?$IVectorView@PEAVAppExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndPackageFullNameAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppExtension@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IAppExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByExtensionAndName@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAUHSTRING__@@PEAPEAUIAppExtension@234@@Z
    virtual long GetByExtensionAndName(::Windows::Internal::StateRepository::IApplicationExtension *, HSTRING__*, ::Windows::Internal::StateRepository::IAppExtension * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppExtension@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IAppExtension * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByExtensionAndName@AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAUHSTRING__@@PEAPEAUIAppExtension@234@@Z
    virtual long TryGetByExtensionAndName(::Windows::Internal::StateRepository::IApplicationExtension *, HSTRING__*, ::Windows::Internal::StateRepository::IAppExtension * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@AppExtensionFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIAppExtension@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IAppExtension * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExtensionFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppExtensionFactoryServer();
};
} // namespace Windows::Internal::StateRepository
