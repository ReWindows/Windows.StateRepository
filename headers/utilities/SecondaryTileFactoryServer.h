#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 16 member(s).
namespace Windows::Internal::StateRepository {
class SecondaryTileFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@SecondaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@SecondaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISecondaryTile@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::ISecondaryTile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWorkByWorkId@SecondaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long ClearWorkByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@SecondaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISecondaryTile@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::ISecondaryTile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByWorkId@SecondaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@SecondaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@SecondaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVSecondaryTile@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@SecondaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTile@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::ISecondaryTile * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    SecondaryTileFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@SecondaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTile@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::ISecondaryTile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@SecondaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISecondaryTile@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::ISecondaryTile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkId@SecondaryTileFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J0@Z
    virtual long UpdateWorkId(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@SecondaryTileFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUISecondaryTile@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::ISecondaryTile * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SecondaryTileFactoryServer();
};
} // namespace Windows::Internal::StateRepository
