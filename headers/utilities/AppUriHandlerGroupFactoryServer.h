#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 16 member(s).
namespace Windows::Internal::StateRepository {
class AppUriHandlerGroupFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppUriHandlerGroupFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndExtension@AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByNameAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppUriHandlerGroup@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVAppUriHandlerGroup@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppUriHandlerGroup@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppUriHandlerGroup@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IAppUriHandlerGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByNameAndExtension@AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAUIAppUriHandlerGroup@234@@Z
    virtual long TryGetByNameAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, ::Windows::Internal::StateRepository::IAppUriHandlerGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageFamilyNameAndName@AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAUIAppUriHandlerGroup@234@@Z
    virtual long TryGetByUserAndPackageFamilyNameAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, ::Windows::Internal::StateRepository::IAppUriHandlerGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIAppUriHandlerGroup@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IAppUriHandlerGroup * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerGroupFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppUriHandlerGroupFactoryServer();
};
} // namespace Windows::Internal::StateRepository
