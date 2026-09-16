#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 19 member(s).
namespace Windows::Internal::StateRepository {
class ContentGroupFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContentGroupFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    ContentGroupFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndIndex@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@HPEAE@Z
    virtual long ExistsByPackageAndIndex(::Windows::Internal::StateRepository::IPackage *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndName@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageAndName(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVContentGroup@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVContentGroup@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage_SortedByIndex@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVContentGroup@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage_SortedByIndex(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIContentGroup@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IContentGroup * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageAndIndex@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@HPEAPEAUIContentGroup@234@@Z
    virtual long GetByPackageAndIndex(::Windows::Internal::StateRepository::IPackage *, int, ::Windows::Internal::StateRepository::IContentGroup * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageAndName@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAPEAUIContentGroup@234@@Z
    virtual long GetByPackageAndName(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, ::Windows::Internal::StateRepository::IContentGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIContentGroup@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IContentGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndIndex@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@HPEAPEAUIContentGroup@234@@Z
    virtual long TryGetByPackageAndIndex(::Windows::Internal::StateRepository::IPackage *, int, ::Windows::Internal::StateRepository::IContentGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndName@ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAUHSTRING__@@PEAPEAUIContentGroup@234@@Z
    virtual long TryGetByPackageAndName(::Windows::Internal::StateRepository::IPackage *, HSTRING__*, ::Windows::Internal::StateRepository::IContentGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@ContentGroupFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIContentGroup@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IContentGroup * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentGroupFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ContentGroupFactoryServer();
};
} // namespace Windows::Internal::StateRepository
