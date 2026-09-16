#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 39 member(s).
namespace Windows::Internal::StateRepository {
class PrimaryTileUserFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPrimaryTileUser@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::IPrimaryTileUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWorkByWorkId@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long ClearWorkByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPrimaryTileUser@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::IPrimaryTileUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndApplicationIdentity@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplicationIdentity@234@@Z
    virtual long DeleteByUserAndApplicationIdentity(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplicationIdentity *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserAndTileUniqueId@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@U_GUID@@@Z
    virtual long DeleteByUserAndTileUniqueId(::Windows::Internal::StateRepository::IUser *, _GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByWorkId@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationIdentity@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@PEAE@Z
    virtual long ExistsByApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTileUniqueId@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long ExistsByTileUniqueId(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndApplicationIdentity@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplicationIdentity@234@PEAE@Z
    virtual long ExistsByUserAndApplicationIdentity(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplicationIdentity *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Created@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long ExistsBy_Created(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsBy_Modified@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long ExistsBy_Modified(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVPrimaryTileUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplicationIdentity@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationIdentity@234@PEAPEAU?$IVectorView@PEAVPrimaryTileUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByApplicationIdentity(::Windows::Internal::StateRepository::IApplicationIdentity *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVPrimaryTileUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBy_Created@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAU?$IVectorView@PEAVPrimaryTileUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindBy_Created(int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBy_Modified@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAU?$IVectorView@PEAVPrimaryTileUser@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindBy_Modified(int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByGTChangeId@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAU?$IVectorView@PEAVPrimaryTileUserDataChange@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindDataChangeByGTChangeId(int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByGTWhenOccurred@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJUDateTime@Foundation@4@PEAPEAU?$IVectorView@PEAVPrimaryTileUserDataChange@StateRepository@Internal@Windows@@@Collections@64@@Z
    virtual long FindDataChangeByGTWhenOccurred(WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByUserAndGTChangeId@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@_JPEAPEAU?$IVectorView@PEAVPrimaryTileUserDataChange@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindDataChangeByUserAndGTChangeId(::Windows::Internal::StateRepository::IUser *, int64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDataChangeByUserAndGTWhenOccurred@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@UDateTime@Foundation@4@PEAPEAU?$IVectorView@PEAVPrimaryTileUserDataChange@StateRepository@Internal@Windows@@@Collections@74@@Z
    virtual long FindDataChangeByUserAndGTWhenOccurred(::Windows::Internal::StateRepository::IUser *, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTileUser@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByTileUniqueId@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUIPrimaryTileUser@234@@Z
    virtual long GetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::IPrimaryTileUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndApplicationIdentity@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplicationIdentity@234@PEAPEAUIPrimaryTileUser@234@@Z
    virtual long GetByUserAndApplicationIdentity(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplicationIdentity *, ::Windows::Internal::StateRepository::IPrimaryTileUser * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataChangeByChangeId@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTileUserDataChange@234@@Z
    virtual long GetDataChangeByChangeId(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileUserDataChange * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PrimaryTileUserFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNotificationForUserID@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@SAJ_J@Z
    static long RaiseNotificationForUserID(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTileUser@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTileUniqueId@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAUIPrimaryTileUser@234@@Z
    virtual long TryGetByTileUniqueId(_GUID, ::Windows::Internal::StateRepository::IPrimaryTileUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplicationIdentity@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIApplicationIdentity@234@PEAPEAUIPrimaryTileUser@234@@Z
    virtual long TryGetByUserAndApplicationIdentity(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IApplicationIdentity *, ::Windows::Internal::StateRepository::IPrimaryTileUser * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDataChangeByChangeId@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPrimaryTileUserDataChange@234@@Z
    virtual long TryGetDataChangeByChangeId(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileUserDataChange * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPrimaryTileUser@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::IPrimaryTileUser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkId@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J0@Z
    virtual long UpdateWorkId(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPrimaryTileUser@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPrimaryTileUser * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrimaryTileUserFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PrimaryTileUserFactoryServer();
};
} // namespace Windows::Internal::StateRepository
