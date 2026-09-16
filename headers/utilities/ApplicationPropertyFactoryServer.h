#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 21 member(s).
namespace Windows::Internal::StateRepository {
class ApplicationPropertyFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    ApplicationPropertyFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplication@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAE@Z
    virtual long ExistsByApplication(::Windows::Internal::StateRepository::IApplication *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationAndIndex@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@HPEAE@Z
    virtual long ExistsByApplicationAndIndex(::Windows::Internal::StateRepository::IApplication *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationAndName@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByApplicationAndName(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndName@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVApplicationProperty@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplication@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAPEAU?$IVectorView@PEAVApplicationProperty@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByApplication(::Windows::Internal::StateRepository::IApplication *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplicationAndName@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplicationProperty@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByApplicationAndName(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplicationProperty@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndName@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplicationProperty@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIApplicationProperty@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IApplicationProperty * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByApplicationAndIndex@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@HPEAPEAUIApplicationProperty@234@@Z
    virtual long GetByApplicationAndIndex(::Windows::Internal::StateRepository::IApplication *, int, ::Windows::Internal::StateRepository::IApplicationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIApplicationProperty@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IApplicationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplicationAndIndex@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@HPEAPEAUIApplicationProperty@234@@Z
    virtual long TryGetByApplicationAndIndex(::Windows::Internal::StateRepository::IApplication *, int, ::Windows::Internal::StateRepository::IApplicationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIApplicationProperty@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IApplicationProperty * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationPropertyFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ApplicationPropertyFactoryServer();
};
} // namespace Windows::Internal::StateRepository
