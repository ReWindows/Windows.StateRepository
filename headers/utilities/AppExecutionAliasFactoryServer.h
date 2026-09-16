#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.StateRepository.dll by Windissect. 20 member(s).
namespace Windows::Internal::StateRepository {
class AppExecutionAliasFactoryServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@QEAA@XZ
    AppExecutionAliasFactoryServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exists@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAE@Z
    virtual long Exists(int64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAlias@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ExistsByAlias(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByAliasAndExtension@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByAliasAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExistsByExtension@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAE@Z
    virtual long ExistsByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVAppExecutionAlias@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long Find(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByAlias@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppExecutionAlias@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByAlias(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByExtension@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIApplicationExtension@234@PEAPEAU?$IVectorView@PEAVAppExecutionAlias@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByExtension(::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndAlias@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppExecutionAlias@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndAlias(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndAliasAndNotDisabled_SortedByEnabledAndInstallTime@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppExecutionAlias@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndAliasAndNotDisabled_SortedByEnabledAndInstallTime(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByUserAndApplicationUserModelId@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUIUser@234@PEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAppExecutionAlias@StateRepository@Internal@Windows@@@Collections@Foundation@4@@Z
    virtual long FindByUserAndApplicationUserModelId(::Windows::Internal::StateRepository::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppExecutionAlias@234@@Z
    virtual long Get(int64_t, ::Windows::Internal::StateRepository::IAppExecutionAlias * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByAliasAndExtension@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAUIAppExecutionAlias@234@@Z
    virtual long GetByAliasAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, ::Windows::Internal::StateRepository::IAppExecutionAlias * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGet@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJ_JPEAPEAUIAppExecutionAlias@234@@Z
    virtual long TryGet(int64_t, ::Windows::Internal::StateRepository::IAppExecutionAlias * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetByAliasAndExtension@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUIApplicationExtension@234@PEAPEAUIAppExecutionAlias@234@@Z
    virtual long TryGetByAliasAndExtension(HSTRING__*, ::Windows::Internal::StateRepository::IApplicationExtension *, ::Windows::Internal::StateRepository::IAppExecutionAlias * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Get@AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@SAJ_JPEAPEAUIAppExecutionAlias@234@@Z
    static long _Get(int64_t, ::Windows::Internal::StateRepository::IAppExecutionAlias * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppExecutionAliasFactoryServer@StateRepository@Internal@Windows@@UEAA@XZ
    virtual ~AppExecutionAliasFactoryServer();
};
} // namespace Windows::Internal::StateRepository
