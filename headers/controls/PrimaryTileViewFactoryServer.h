#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 28 member(s).
namespace Windows::Internal::StateRepository {
class PrimaryTileViewFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplication@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAE@Z
    virtual long ExistsByApplication(::Windows::Internal::StateRepository::IApplication *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationAndTileId@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByApplicationAndTileId(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long ExistsByTileUniqueId(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplication@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplication@234@PEAE@Z
    virtual long ExistsByUserAndApplication(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplication *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationUserModelId@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPrimaryTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplication@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAPEAU?$IVectorView@PEAVPrimaryTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByApplication(::Windows::Internal::StateRepository::IApplication *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVPrimaryTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVPrimaryTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTileView@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByApplicationAndTileId@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAPEAUIPrimaryTileView@234@@Z
    virtual long GetByApplicationAndTileId(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, ::Windows::Internal::StateRepository::IPrimaryTileView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByTileUniqueId@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUIPrimaryTileView@234@@Z
    virtual long GetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::IPrimaryTileView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndApplication@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplication@234@PEAPEAUIPrimaryTileView@234@@Z
    virtual long GetByUserAndApplication(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplication *, ::Windows::Internal::StateRepository::IPrimaryTileView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndApplicationUserModelId@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIPrimaryTileView@234@@Z
    virtual long GetByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPrimaryTileView * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PrimaryTileViewFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTileView@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplicationAndTileId@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAPEAUIPrimaryTileView@234@@Z
    virtual long TryGetByApplicationAndTileId(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, ::Windows::Internal::StateRepository::IPrimaryTileView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUIPrimaryTileView@234@@Z
    virtual long TryGetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::IPrimaryTileView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplication@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplication@234@PEAPEAUIPrimaryTileView@234@@Z
    virtual long TryGetByUserAndApplication(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplication *, ::Windows::Internal::StateRepository::IPrimaryTileView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplicationUserModelId@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAUIPrimaryTileView@234@@Z
    virtual long TryGetByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, ::Windows::Internal::StateRepository::IPrimaryTileView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPrimaryTileView@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileView * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PrimaryTileViewFactoryServer();
};
} // namespace Windows::Internal::StateRepository
