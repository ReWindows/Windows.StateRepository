#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 16 member(s).
namespace Windows::Internal::StateRepository {
class TargetDeviceFamilyFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackage@TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAE@Z
    virtual long ExistsByPackage(::Windows::Internal::StateRepository::IPackage *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageAndIndex@TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@HPEAE@Z
    virtual long ExistsByPackageAndIndex(::Windows::Internal::StateRepository::IPackage *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVTargetDeviceFamily@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackage@TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAU?$IVectorView@PEAVTargetDeviceFamily@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackage(::Windows::Internal::StateRepository::IPackage *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUITargetDeviceFamily@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::ITargetDeviceFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackage@TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@PEAPEAUITargetDeviceFamily@234@@Z
    virtual long GetByPackage(::Windows::Internal::StateRepository::IPackage *, ::Windows::Internal::StateRepository::ITargetDeviceFamily * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageAndIndex@TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@HPEAPEAUITargetDeviceFamily@234@@Z
    virtual long GetByPackageAndIndex(::Windows::Internal::StateRepository::IPackage *, int, ::Windows::Internal::StateRepository::ITargetDeviceFamily * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    TargetDeviceFamilyFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUITargetDeviceFamily@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::ITargetDeviceFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageAndIndex@TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackage@234@HPEAPEAUITargetDeviceFamily@234@@Z
    virtual long TryGetByPackageAndIndex(::Windows::Internal::StateRepository::IPackage *, int, ::Windows::Internal::StateRepository::ITargetDeviceFamily * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUITargetDeviceFamily@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::ITargetDeviceFamily * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TargetDeviceFamilyFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~TargetDeviceFamilyFactoryServer();
};
} // namespace Windows::Internal::StateRepository
