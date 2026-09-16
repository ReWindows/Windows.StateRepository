#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 21 member(s).
namespace Windows::Internal::StateRepository {
class AppServiceFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppServiceFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppServiceFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtensionAndIndex@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@HPEAE@Z
    virtual long ExistsByExtensionAndIndex(::Windows::Internal::StateRepository::IApplicationExtension *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByNameAndExtension@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByNameAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppService@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVAppService@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppService@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndName@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppService@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppService@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IAppService * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByExtensionAndIndex@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@HPEAPEAUIAppService@234@@Z
    virtual long GetByExtensionAndIndex(::Windows::Internal::StateRepository::IApplicationExtension *, int, ::Windows::Internal::StateRepository::IAppService * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByNameAndExtension@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAUIAppService@234@@Z
    virtual long GetByNameAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, ::Windows::Internal::StateRepository::IAppService * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppService@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IAppService * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByExtensionAndIndex@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@HPEAPEAUIAppService@234@@Z
    virtual long TryGetByExtensionAndIndex(::Windows::Internal::StateRepository::IApplicationExtension *, int, ::Windows::Internal::StateRepository::IAppService * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByNameAndExtension@AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAUIAppService@234@@Z
    virtual long TryGetByNameAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, ::Windows::Internal::StateRepository::IAppService * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@AppServiceFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIAppService@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IAppService * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppServiceFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppServiceFactoryServer();
};
} // namespace Windows::Internal::StateRepository
