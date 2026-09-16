#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 16 member(s).
namespace Windows::Internal::StateRepository {
class HostRuntimeFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@HostRuntimeFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@HostRuntimeFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByHostId@HostRuntimeFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByHostId(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageExtension@HostRuntimeFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageExtension@234@PEAE@Z
    virtual long ExistsByPackageExtension(::Windows::Internal::StateRepository::IPackageExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByPackageExtensionAndHostId@HostRuntimeFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageExtension@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByPackageExtensionAndHostId(::Windows::Internal::StateRepository::IPackageExtension *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@HostRuntimeFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVHostRuntime@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByHostId@HostRuntimeFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVHostRuntime@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByHostId(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPackageExtension@HostRuntimeFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageExtension@234@PEAPEAU?$IVectorView@PEAVHostRuntime@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByPackageExtension(::Windows::Internal::StateRepository::IPackageExtension *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndHostIdAndPackageFullName@HostRuntimeFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAUIHostRuntime@234@@Z
    virtual long GetByUserAndHostIdAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, ::Windows::Internal::StateRepository::IHostRuntime * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HostRuntimeFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    HostRuntimeFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@HostRuntimeFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIHostRuntime@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IHostRuntime * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByPackageExtensionAndHostId@HostRuntimeFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIPackageExtension@234@PEAUHSTRING__@@PEAPEAUIHostRuntime@234@@Z
    virtual long TryGetByPackageExtensionAndHostId(::Windows::Internal::StateRepository::IPackageExtension *, HSTRING__*, ::Windows::Internal::StateRepository::IHostRuntime * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@HostRuntimeFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIHostRuntime@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IHostRuntime * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostRuntimeFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~HostRuntimeFactoryServer();
};
} // namespace Windows::Internal::StateRepository
