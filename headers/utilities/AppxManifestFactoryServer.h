#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 13 member(s).
namespace Windows::Internal::StateRepository {
class AppxManifestFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppxManifestFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppxManifestFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppxManifestFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppxManifestFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@AppxManifestFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@AppxManifestFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppxManifest@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@AppxManifestFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppxManifest@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IAppxManifest * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackage@AppxManifestFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAUIAppxManifest@234@@Z
    virtual long GetByPackage(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IAppxManifest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppxManifestFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppxManifest@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IAppxManifest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackage@AppxManifestFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAUIAppxManifest@234@@Z
    virtual long TryGetByPackage(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::IAppxManifest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@AppxManifestFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIAppxManifest@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IAppxManifest * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppxManifestFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppxManifestFactoryServer();
};
} // namespace Windows::Internal::StateRepository
