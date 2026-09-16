#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 14 member(s).
namespace Windows::Internal::StateRepository {
class PkgExtensionHostFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PkgExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PkgExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@PkgExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageExtension@234@PEAE@Z
    virtual long ExistsByExtension(::Windows::Internal::StateRepository::IPackageExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtensionAndName@PkgExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageExtension@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByExtensionAndName(::Windows::Internal::StateRepository::IPackageExtension *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageFullNameAndName@PkgExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAE@Z
    virtual long ExistsByUserAndPackageFullNameAndName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PkgExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPkgExtensionHost@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@PkgExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageExtension@234@PEAPEAU?$IVectorView@PEAVPkgExtensionHost@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByExtension(::Windows::Internal::StateRepository::IPackageExtension *, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PkgExtensionHostFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PkgExtensionHostFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PkgExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPkgExtensionHost@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPkgExtensionHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByExtensionAndName@PkgExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageExtension@234@PEAUHSTRING__@@PEAPEAUIPkgExtensionHost@234@@Z
    virtual long TryGetByExtensionAndName(::Windows::Internal::StateRepository::IPackageExtension *, HSTRING__*, ::Windows::Internal::StateRepository::IPkgExtensionHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PkgExtensionHostFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPkgExtensionHost@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPkgExtensionHost * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PkgExtensionHostFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PkgExtensionHostFactoryServer();
};
} // namespace Windows::Internal::StateRepository
