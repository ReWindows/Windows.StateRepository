#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 20 member(s).
namespace Windows::Internal::StateRepository {
class ApplicationBackgroundTaskFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    ApplicationBackgroundTaskFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtensionAndIndex@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@HPEAE@Z
    virtual long ExistsByExtensionAndIndex(::Windows::Internal::StateRepository::IApplicationExtension *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByType@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByType(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByTypeAndExtension@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByTypeAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVApplicationBackgroundTask@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVApplicationBackgroundTask@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByType@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplicationBackgroundTask@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByType(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIApplicationBackgroundTask@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IApplicationBackgroundTask * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByExtensionAndIndex@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@HPEAPEAUIApplicationBackgroundTask@234@@Z
    virtual long GetByExtensionAndIndex(::Windows::Internal::StateRepository::IApplicationExtension *, int, ::Windows::Internal::StateRepository::IApplicationBackgroundTask * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByTypeAndExtension@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAUIApplicationBackgroundTask@234@@Z
    virtual long GetByTypeAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, ::Windows::Internal::StateRepository::IApplicationBackgroundTask * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIApplicationBackgroundTask@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IApplicationBackgroundTask * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByExtensionAndIndex@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@HPEAPEAUIApplicationBackgroundTask@234@@Z
    virtual long TryGetByExtensionAndIndex(::Windows::Internal::StateRepository::IApplicationExtension *, int, ::Windows::Internal::StateRepository::IApplicationBackgroundTask * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByTypeAndExtension@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAUIApplicationBackgroundTask@234@@Z
    virtual long TryGetByTypeAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, ::Windows::Internal::StateRepository::IApplicationBackgroundTask * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIApplicationBackgroundTask@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IApplicationBackgroundTask * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationBackgroundTaskFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ApplicationBackgroundTaskFactoryServer();
};
} // namespace Windows::Internal::StateRepository
