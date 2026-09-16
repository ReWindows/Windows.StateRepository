#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 33 member(s).
namespace Windows::Internal::StateRepository {
class XboxPackageFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIXboxPackage@234@@Z
    virtual long Add(::Windows::Internal::StateRepository::IXboxPackage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearWorkByWorkId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long ClearWorkByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIXboxPackage@234@@Z
    virtual long Delete(::Windows::Internal::StateRepository::IXboxPackage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByEditionId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long DeleteByEditionId(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByWorkId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J@Z
    virtual long DeleteByWorkId(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByContentId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long ExistsByContentId(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByDeviceId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long ExistsByDeviceId(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByEditionId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByEditionId(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByEscrowedKeyBlobId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long ExistsByEscrowedKeyBlobId(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProductId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long ExistsByProductId(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTitleId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJIPEAE@Z
    virtual long ExistsByTitleId(unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVXboxPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByContentId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAU?$IVectorView@PEAVXboxPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByContentId(_GUID, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByDeviceId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAU?$IVectorView@PEAVXboxPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByDeviceId(_GUID, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByEditionIdPackageFamilyName@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVXboxPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByEditionIdPackageFamilyName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByEscrowedKeyBlobId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAU?$IVectorView@PEAVXboxPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByEscrowedKeyBlobId(_GUID, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVXboxPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProductId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJU_GUID@@PEAPEAU?$IVectorView@PEAVXboxPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByProductId(_GUID, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByTitleId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJIPEAPEAU?$IVectorView@PEAVXboxPackage@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByTitleId(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIXboxPackage@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IXboxPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByEditionId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIXboxPackage@234@@Z
    virtual long GetByEditionId(HSTRING__*, ::Windows::Internal::StateRepository::IXboxPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIXboxPackage@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IXboxPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByEditionId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIXboxPackage@234@@Z
    virtual long TryGetByEditionId(HSTRING__*, ::Windows::Internal::StateRepository::IXboxPackage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIXboxPackage@234@@Z
    virtual long Update(::Windows::Internal::StateRepository::IXboxPackage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWorkId@XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAAJ_J0@Z
    virtual long UpdateWorkId(int64_t, int64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XboxPackageFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    XboxPackageFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@XboxPackageFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIXboxPackage@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IXboxPackage * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XboxPackageFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~XboxPackageFactoryServer();
};
} // namespace Windows::Internal::StateRepository
