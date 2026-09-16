#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 13 member(s).
namespace Windows::Internal::StateRepository {
class PackageMachineStatusFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@PackageMachineStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteByPackageFullName@PackageMachineStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long DeleteByPackageFullName(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@PackageMachineStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageIdentity@PackageMachineStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageIdentity@234@PEAE@Z
    virtual long ExistsByPackageIdentity(::Windows::Internal::StateRepository::IPackageIdentity *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindArray@PackageMachineStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAIPEAPEAPEAUIPackageMachineStatus@234@@Z
    virtual long FindArray(unsigned int *, ::Windows::Internal::StateRepository::IPackageMachineStatus * * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PackageMachineStatusFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    PackageMachineStatusFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@PackageMachineStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIPackageMachineStatus@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IPackageMachineStatus * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageIdentity@PackageMachineStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageIdentity@234@PEAPEAUIPackageMachineStatus@234@@Z
    virtual long TryGetByPackageIdentity(::Windows::Internal::StateRepository::IPackageIdentity *, ::Windows::Internal::StateRepository::IPackageMachineStatus * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStatusByPackageFullName@PackageMachineStatusFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@II@Z
    virtual long UpdateStatusByPackageFullName(HSTRING__*, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@PackageMachineStatusFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIPackageMachineStatus@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IPackageMachineStatus * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageMachineStatusFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~PackageMachineStatusFactoryServer();
};
} // namespace Windows::Internal::StateRepository
