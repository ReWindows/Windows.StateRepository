#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 27 member(s).
namespace Windows::Internal::StateRepository {
class AppUriHandlerFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppUriHandlerFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByHostName@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByHostName(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByHostNameAndExtension@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByHostNameAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProgID@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByProgID(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByProgIDAndExtension@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByProgIDAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppUriHandler@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllLauncherInfoByUserOrDefaultAccountAndHostNameEvenIfWildcardedAndPath@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@1PEAPEAU?$IVectorView@PEAVAppUriHandlerLauncherInfo@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindAllLauncherInfoByUserOrDefaultAccountAndHostNameEvenIfWildcardedAndPath(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllLauncherInfoByUserOrDefaultAccountAndHostNameEvenIfWildcardedAndPathAndPackageFamilyName@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@11PEAPEAU?$IVectorView@PEAVAppUriHandlerLauncherInfo@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindAllLauncherInfoByUserOrDefaultAccountAndHostNameEvenIfWildcardedAndPathAndPackageFamilyName(::Windows::Internal::StateRepository::IUser *, HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllLauncherInfoByUserOrDefaultAccountAndProgId@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppUriHandlerLauncherInfo@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindAllLauncherInfoByUserOrDefaultAccountAndProgId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVAppUriHandler@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByHostName@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppUriHandler@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByHostName(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByHostNameAndExtension@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVAppUriHandler@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByHostNameAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByProgID@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppUriHandler@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByProgID(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUser@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAPEAU?$IVectorView@PEAVAppUriHandler@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUser(::Windows::Internal::StateRepository::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndProgId@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppUriHandler@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndProgId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppUriHandler@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IAppUriHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByProgIDAndExtension@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAUIAppUriHandler@234@@Z
    virtual long GetByProgIDAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, ::Windows::Internal::StateRepository::IAppUriHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppUriHandler@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IAppUriHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByHostNameAndExtensionAndPath@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@0PEAPEAUIAppUriHandler@234@@Z
    virtual long TryGetByHostNameAndExtensionAndPath(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, HSTRING__*, ::Windows::Internal::StateRepository::IAppUriHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByProgIDAndExtension@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAUIAppUriHandler@234@@Z
    virtual long TryGetByProgIDAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, ::Windows::Internal::StateRepository::IAppUriHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIAppUriHandler@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IAppUriHandler * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppUriHandlerFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppUriHandlerFactoryServer();
};
} // namespace Windows::Internal::StateRepository
