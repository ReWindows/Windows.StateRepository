#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 15 member(s).
namespace Windows::Internal::StateRepository {
class PackageUserStatusFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOrUpdateStatusByUserSecurityIdentifierAndPackageFullName@PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJIPEAEPEAUHSTRING__@@II@Z
    virtual long AddOrUpdateStatusByUserSecurityIdentifierAndPackageFullName(unsigned int, unsigned char *, HSTRING__*, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByUserSecurityIdentifierAndPackageFullName@PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJIPEAEPEAUHSTRING__@@@Z
    virtual long DeleteByUserSecurityIdentifierAndPackageFullName(unsigned int, unsigned char *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUser@PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAE@Z
    virtual long ExistsByUser(::Windows::Internal::StateRepository::IUser *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndPackageIdentity@PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageIdentity@234@PEAE@Z
    virtual long ExistsByUserAndPackageIdentity(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageIdentity *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindArray@PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAPEAUIPackageUserStatus@234@@Z
    virtual long FindArray(unsigned int *, ::Windows::Internal::StateRepository::IPackageUserStatus * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindArrayByUser@PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAIPEAPEAPEAUIPackageUserStatus@234@@Z
    virtual long FindArrayByUser(::Windows::Internal::StateRepository::IUser *, unsigned int *, ::Windows::Internal::StateRepository::IPackageUserStatus * * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageUserStatusFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageUserStatus@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageUserStatus * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndPackageIdentity@PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUIPackageIdentity@234@PEAPEAUIPackageUserStatus@234@@Z
    virtual long TryGetByUserAndPackageIdentity(::Windows::Internal::StateRepository::IUser *, ::Windows::Internal::StateRepository::IPackageIdentity *, ::Windows::Internal::StateRepository::IPackageUserStatus * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageUserStatus@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageUserStatus * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageUserStatusFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageUserStatusFactoryServer();
};
} // namespace Windows::Internal::StateRepository
