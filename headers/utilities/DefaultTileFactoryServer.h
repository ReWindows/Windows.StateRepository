#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 13 member(s).
namespace Windows::Internal::StateRepository {
class DefaultTileFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@DefaultTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DefaultTileFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    DefaultTileFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@DefaultTileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplication@DefaultTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAE@Z
    virtual long ExistsByApplication(::Windows::Internal::StateRepository::IApplication *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@DefaultTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVDefaultTile@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@DefaultTileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIDefaultTile@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IDefaultTile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByApplication@DefaultTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAPEAUIDefaultTile@234@@Z
    virtual long GetByApplication(::Windows::Internal::StateRepository::IApplication *, ::Windows::Internal::StateRepository::IDefaultTile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@DefaultTileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIDefaultTile@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IDefaultTile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplication@DefaultTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAPEAUIDefaultTile@234@@Z
    virtual long TryGetByApplication(::Windows::Internal::StateRepository::IApplication *, ::Windows::Internal::StateRepository::IDefaultTile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@DefaultTileFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIDefaultTile@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IDefaultTile * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DefaultTileFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~DefaultTileFactoryServer();
};
} // namespace Windows::Internal::StateRepository
