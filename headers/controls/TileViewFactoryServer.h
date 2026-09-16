#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 32 member(s).
namespace Windows::Internal::StateRepository {
class TileViewFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@TileViewFactoryServer@StateRepository@Internal@Windows@@QEAAJPEAUITileViewQueryFilter@234@AEAVTileViewQueryFilter@Entity@2@@Z
    long CopyTo(::Windows::Internal::StateRepository::ITileViewQueryFilter *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplication@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAE@Z
    virtual long ExistsByApplication(::Windows::Internal::StateRepository::IApplication *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationAndTileId@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByApplicationAndTileId(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long ExistsByTileUniqueId(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplication@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplication@234@PEAE@Z
    virtual long ExistsByUserAndApplication(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplication *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationUserModelId@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAE@Z
    virtual long ExistsByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplication@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAPEAU?$IVectorView@PEAVTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByApplication(::Windows::Internal::StateRepository::IApplication *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndApplication@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplication@234@PEAPEAU?$IVectorView@PEAVTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndApplication(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplication *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndApplicationUserModelId@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndGTChangeIdAndTileViewQueryFilter@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@_JPEAUITileViewQueryFilter@234@PEAPEAU?$IVectorView@PEAVTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndGTChangeIdAndTileViewQueryFilter(::Windows::Internal::StateRepository::IUser *, int64_t, ::Windows::Internal::StateRepository::ITileViewQueryFilter *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackage@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAU?$IVectorView@PEAVTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUITileView@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::ITileView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByApplicationAndTileId@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAPEAUITileView@234@@Z
    virtual long GetByApplicationAndTileId(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, ::Windows::Internal::StateRepository::ITileView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByTileUniqueId@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUITileView@234@@Z
    virtual long GetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::ITileView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxChangeIdByUser@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEA_J@Z
    virtual long GetMaxChangeIdByUser(::Windows::Internal::StateRepository::IUser *, int64_t *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TileViewFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    TileViewFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUITileView@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::ITileView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetApplicationUserModelIDByTileUniqueId@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUHSTRING__@@@Z
    virtual long TryGetApplicationUserModelIDByTileUniqueId(_GUID, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplicationAndTileId@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAPEAUITileView@234@@Z
    virtual long TryGetByApplicationAndTileId(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, ::Windows::Internal::StateRepository::ITileView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@TileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUITileView@234@@Z
    virtual long TryGetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::ITileView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@TileViewFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUITileView@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::ITileView * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TileViewFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~TileViewFactoryServer();
};
} // namespace Windows::Internal::StateRepository
