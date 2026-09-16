#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 28 member(s).
namespace Windows::Internal::StateRepository {
class ApplicationExtensionFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    ApplicationExtensionFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplication@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAE@Z
    virtual long ExistsByApplication(::Windows::Internal::StateRepository::IApplication *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationAndCategory@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByApplicationAndCategory(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByApplicationAndIndex@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@HPEAE@Z
    virtual long ExistsByApplicationAndIndex(::Windows::Internal::StateRepository::IApplication *, int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByCategory@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByCategory(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByUserAndCategory@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAE@Z
    virtual long ExistsByUserAndCategory(::Windows::Internal::StateRepository::IUser *, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVApplicationExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplication@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAPEAU?$IVectorView@PEAVApplicationExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByApplication(::Windows::Internal::StateRepository::IApplication *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByApplicationAndCategory@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplicationExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByApplicationAndCategory(::Windows::Internal::StateRepository::IApplication *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByCategory@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplicationExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByCategory(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndCategory@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplicationExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndCategory(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndCategoryAndApplicationUserModelId@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAU?$IVectorView@PEAVApplicationExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndCategoryAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndCategoryAndPackageFullName@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAU?$IVectorView@PEAVApplicationExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndCategoryAndPackageFullName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndCategory@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVApplicationExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndCategory(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFullNameAndFileType@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAU?$IVectorView@PEAVApplicationExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndPackageFullNameAndFileType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserOrDefaultAccountAndPackageFullNameAndProtocolName@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAU?$IVectorView@PEAVApplicationExtension@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserOrDefaultAccountAndPackageFullNameAndProtocolName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIApplicationExtension@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByApplicationAndIndex@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@HPEAPEAUIApplicationExtension@234@@Z
    virtual long GetByApplicationAndIndex(::Windows::Internal::StateRepository::IApplication *, int, ::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIApplicationExtension@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByApplicationAndIndex@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplication@234@HPEAPEAUIApplicationExtension@234@@Z
    virtual long TryGetByApplicationAndIndex(::Windows::Internal::StateRepository::IApplication *, int, ::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplicationUserModelIdAndFileType@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAUIApplicationExtension@234@@Z
    virtual long TryGetByUserAndApplicationUserModelIdAndFileType(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByUserAndApplicationUserModelIdAndProtocolName@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAUIApplicationExtension@234@@Z
    virtual long TryGetByUserAndApplicationUserModelIdAndProtocolName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIApplicationExtension@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IApplicationExtension * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationExtensionFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~ApplicationExtensionFactoryServer();
};
} // namespace Windows::Internal::StateRepository
