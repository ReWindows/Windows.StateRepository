#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 18 member(s).
namespace Windows::Internal::StateRepository {
class PkgExtensionFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageExtension@234@PEAE@Z
    virtual long ExistsByExtension(::Windows::Internal::StateRepository::IPackageExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtensionAndName@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageExtension@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByExtensionAndName(::Windows::Internal::StateRepository::IPackageExtension *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByName@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPkgExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageExtension@234@PEAPEAU?$IVectorView@PEAVPkgExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByExtension(::Windows::Internal::StateRepository::IPackageExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByLocalServiceAndName@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPkgExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByLocalServiceAndName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPkgExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndName@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVPkgExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFullNameAndName@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAU?$IVectorView@PEAVPkgExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndPackageFullNameAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PkgExtensionFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PkgExtensionFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPkgExtension@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPkgExtension * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByExtensionAndName@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageExtension@234@PEAUHSTRING__@@PEAPEAUIPkgExtension@234@@Z
    virtual long TryGetByExtensionAndName(::Windows::Internal::StateRepository::IPackageExtension *, HSTRING__*, ::Windows::Internal::StateRepository::IPkgExtension * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PkgExtensionFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPkgExtension@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPkgExtension * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PkgExtensionFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PkgExtensionFactoryServer();
};
} // namespace Windows::Internal::StateRepository
