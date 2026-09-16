#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 18 member(s).
namespace Windows::Internal::StateRepository {
class PrimaryTileFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplication@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAE@Z
    virtual long ExistsByApplication(::Windows::Internal::StateRepository::IApplication *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationAndTileId@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByApplicationAndTileId(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPrimaryTile@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVPrimaryTile@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTile@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPrimaryTile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByApplication@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAPEAUIPrimaryTile@234@@Z
    virtual long GetByApplication(::Windows::Internal::StateRepository::IApplication *, ::Windows::Internal::StateRepository::IPrimaryTile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByApplicationAndTileId@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAPEAUIPrimaryTile@234@@Z
    virtual long GetByApplicationAndTileId(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, ::Windows::Internal::StateRepository::IPrimaryTile * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrimaryTileFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PrimaryTileFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTile@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPrimaryTile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplication@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAPEAUIPrimaryTile@234@@Z
    virtual long TryGetByApplication(::Windows::Internal::StateRepository::IApplication *, ::Windows::Internal::StateRepository::IPrimaryTile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplicationAndTileId@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAPEAUIPrimaryTile@234@@Z
    virtual long TryGetByApplicationAndTileId(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, ::Windows::Internal::StateRepository::IPrimaryTile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PrimaryTileFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPrimaryTile@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPrimaryTile * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PrimaryTileFactoryServer();
};
} // namespace Windows::Internal::StateRepository
