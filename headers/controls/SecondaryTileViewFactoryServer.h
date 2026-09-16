#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 27 member(s).
namespace Windows::Internal::StateRepository {
class SecondaryTileViewFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISecondaryTileView@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::ISecondaryTileView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISecondaryTileView@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::ISecondaryTileView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByTileUniqueId@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@@Z
    virtual long DeleteByTileUniqueId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndApplicationAndTileId@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplication@234@PEAUHSTRING__@@@Z
    virtual long DeleteByUserAndApplicationAndTileId(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplication *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long ExistsByTileUniqueId(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplication@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplication@234@PEAE@Z
    virtual long ExistsByUserAndApplication(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplication *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationAndTileId@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplication@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndApplicationAndTileId(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplication *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackage@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAE@Z
    virtual long ExistsByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVSecondaryTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVSecondaryTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndApplication@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplication@234@PEAPEAU?$IVectorView@PEAVSecondaryTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndApplication(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplication *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndPackage@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackage@234@PEAPEAU?$IVectorView@PEAVSecondaryTileView@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndPackage(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTileView@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByTileUniqueId@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUISecondaryTileView@234@@Z
    virtual long GetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::ISecondaryTileView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndApplicationAndTileId@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplication@234@PEAUHSTRING__@@PEAPEAUISecondaryTileView@234@@Z
    virtual long GetByUserAndApplicationAndTileId(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplication *, HSTRING__*, ::Windows::Internal::StateRepository::ISecondaryTileView * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    SecondaryTileViewFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTileView@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUISecondaryTileView@234@@Z
    virtual long TryGetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::ISecondaryTileView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplicationAndTileId@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplication@234@PEAUHSTRING__@@PEAPEAUISecondaryTileView@234@@Z
    virtual long TryGetByUserAndApplicationAndTileId(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplication *, HSTRING__*, ::Windows::Internal::StateRepository::ISecondaryTileView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISecondaryTileView@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::ISecondaryTileView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUISecondaryTileView@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileView * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileViewFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SecondaryTileViewFactoryServer();
};
} // namespace Windows::Internal::StateRepository
