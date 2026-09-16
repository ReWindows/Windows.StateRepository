#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 39 member(s).
namespace Windows::Internal::StateRepository {
class SecondaryTileUserFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISecondaryTileUser@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::ISecondaryTileUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWorkByWorkId@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long ClearWorkByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISecondaryTileUser@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::ISecondaryTileUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndSecondaryTile@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUISecondaryTile@234@@Z
    virtual long DeleteByUserAndSecondaryTile(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::ISecondaryTile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndTileUniqueId@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@U_GUID@@@Z
    virtual long DeleteByUserAndTileUniqueId(::Windows::Internal::StateRepository::IUser *, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByWorkId@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long ExistsByTileUniqueId(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationIdentity@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplicationIdentity@234@PEAE@Z
    virtual long ExistsByUserAndApplicationIdentity(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplicationIdentity *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndSecondaryTile@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUISecondaryTile@234@PEAE@Z
    virtual long ExistsByUserAndSecondaryTile(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::ISecondaryTile *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Created@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long ExistsBy_Created(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Modified@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long ExistsBy_Modified(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVSecondaryTileUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVSecondaryTileUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndApplicationIdentity@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplicationIdentity@234@PEAPEAU?$IVectorView@PEAVSecondaryTileUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndApplicationIdentity(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplicationIdentity *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBy_Created@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAU?$IVectorView@PEAVSecondaryTileUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindBy_Created(int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBy_Modified@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAU?$IVectorView@PEAVSecondaryTileUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindBy_Modified(int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByGTChangeId@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAU?$IVectorView@PEAVSecondaryTileUserDataChange@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindDataChangeByGTChangeId(int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByGTWhenOccurred@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJUDateTime@Foundation@4@PEAPEAU?$IVectorView@PEAVSecondaryTileUserDataChange@StateRepository@Internal@Windows@@@Collections@64@@Z
    virtual long FindDataChangeByGTWhenOccurred(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByUserAndGTChangeId@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@_JPEAPEAU?$IVectorView@PEAVSecondaryTileUserDataChange@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindDataChangeByUserAndGTChangeId(::Windows::Internal::StateRepository::IUser *, int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByUserAndGTWhenOccurred@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@UDateTime@Foundation@4@PEAPEAU?$IVectorView@PEAVSecondaryTileUserDataChange@StateRepository@Internal@Windows@@@Collections@74@@Z
    virtual long FindDataChangeByUserAndGTWhenOccurred(::Windows::Internal::StateRepository::IUser *, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTileUser@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByTileUniqueId@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUISecondaryTileUser@234@@Z
    virtual long GetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::ISecondaryTileUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndSecondaryTile@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUISecondaryTile@234@PEAPEAUISecondaryTileUser@234@@Z
    virtual long GetByUserAndSecondaryTile(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::ISecondaryTile *, ::Windows::Internal::StateRepository::ISecondaryTileUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataChangeByChangeId@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTileUserDataChange@234@@Z
    virtual long GetDataChangeByChangeId(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileUserDataChange * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNotificationForUserID@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@SAJ_J@Z
    static long RaiseNotificationForUserID(int64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    SecondaryTileUserFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTileUser@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUISecondaryTileUser@234@@Z
    virtual long TryGetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::ISecondaryTileUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndSecondaryTile@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUISecondaryTile@234@PEAPEAUISecondaryTileUser@234@@Z
    virtual long TryGetByUserAndSecondaryTile(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::ISecondaryTile *, ::Windows::Internal::StateRepository::ISecondaryTileUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDataChangeByChangeId@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUISecondaryTileUserDataChange@234@@Z
    virtual long TryGetDataChangeByChangeId(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileUserDataChange * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUISecondaryTileUser@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::ISecondaryTileUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkId@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J0@Z
    virtual long UpdateWorkId(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUISecondaryTileUser@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::ISecondaryTileUser * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecondaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~SecondaryTileUserFactoryServer();
};
} // namespace Windows::Internal::StateRepository
